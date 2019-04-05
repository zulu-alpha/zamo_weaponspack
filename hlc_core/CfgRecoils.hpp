class CfgRecoils
{
    class recoil_default;
    class recoil_mk46                         
    {
        muzzleOuter[] = { 0.1*0.1,0.1*0.1,1.15*1.15,1.15*1.15 } ; /// ZA-Wolf 
		muzzleInner[] = { 0.0001,0.0001,0.0001,0.0001 }; /// ZA-Wolf
		kickBack[] = { 0.00025 }; /// ZA-Wolf
        temporary = 0.0025; /// ZA-Wolf
        permanent = 0.00001; /// ZA-Wolf
    };
    class recoil_mk46_prone                     
    {
        muzzleOuter[] = { 0.1*0.1,0.1*0.1,1.15*1.15,1.15*1.15 } ; /// ZA-Wolf 
		muzzleInner[] = { 0.0001,0.0001,0.0001,0.0001 }; /// ZA-Wolf
		kickBack[] = { 0.00025 }; /// ZA-Wolf
        temporary = 0.0025; /// ZA-Wolf
        permanent = 0.00001; /// ZA-Wolf
    };
	class recoil_mk48                   
    {
        muzzleOuter[] = { 0.2,0.3,0.2,0.3 } ; 
		muzzleInner[] = { 0.0001,0.0001,0.00001,0.00001 }; 
		kickBack[] = { 0.001*0.001,0.001*0.001 }; 
        temporary = 0.009; 
        permanent = 0.00001; 
    };
	class recoil_mk48_prone                    
    {
        muzzleOuter[] = { 0.1,0.3,0.2,0.2 } ; 
		muzzleInner[] = { 0,0,0.1,0.1 }; 
		kickBack[] = { 0.001*0.001,0.001*0.001 }; 
        temporary = 0.005; 
        permanent = 0.1*0.4; 
    };
	class recoil_m4
	{
        muzzleOuter[] = {0.2, 0.4, 0.3, 0.3}; 
        muzzleInner[] = {0,0,0.1,0.1}; 
		kickBack[] = {0.02, 0.04}; 
        temporary = 0.0015; 
        permanent = 0.1*0.4; 
    };
	class recoil_m4_prone
	{
        muzzleOuter[] = {0.2, 0.4, 0.3, 0.3}; 
        muzzleInner[] = {0,0,0.1,0.1}; 
		kickBack[] = {0.02, 0.04}; 
        temporary = 0.0015; 
        permanent = 0.1*0.4; 
    };
};