%% Returns the initial parameters to be used for the fitting

% Input: 3D points belonging to a segment of the original point cloud
% Output: Initial parameter values for input segment - 11 parameters 

function [scale, orientations, eps, p, bound_min, bound_max] = param_init(segment, type)  
    
    scale = zeros(1,4);
    segment_members = segment;
    
    pca_seg = pca(segment_members);
    orientations = rotm2eul(pca_seg);
        
    % Find bounding boxes
    minimum = min(segment_members);
    maximum = max(segment_members);
        
    bound_min = minimum;
    bound_max = maximum;
        
    % Compute scale and exponential factor
    pcl_scale = abs(maximum-minimum);
    
    eps = [0.1,1.0]; %Fixed eps1 = 0.1 and eps2 = 1.0 is superellipsoid = cylinder
    
    %Switch up the scales for the orientation change
    if pcl_scale(1)/pcl_scale(2) > pcl_scale(2)/pcl_scale(3)
        z_scale = pcl_scale(1);
        pcl_scale(1) = pcl_scale(3);
        pcl_scale(3) = z_scale;
        orientations(2) = orientations(2)+(pi/2);
    end 
    
    scale(1:3) = pcl_scale./2;  
    
    if type == 2 % For toroids
        scale(4) = 0.02;
    end
    
    % Find mean X, Y and Z for each segment
    p = mean(segment_members);

end