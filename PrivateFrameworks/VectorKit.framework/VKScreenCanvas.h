/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCanvas : NSObject <VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate, VKWorldDelegate> {
    NSMutableArray * _animations;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _bgColor;
    VKCamera * _camera;
    NSMutableArray * _cameraControllers;
    BOOL  _deallocing;
    float  _debugFramesPerSecond;
    VKDispatch * _dispatch;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _fullyOccludedEdgeInsets;
    BOOL  _iconsShouldAlignToPixels;
    BOOL  _isHidden;
    BOOL  _isInBackground;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _labelEdgeInsets;
    VKLayoutContext * _layoutContext;
    struct MapCamera { struct View {} *x1; struct View {} *x2; struct Viewport {} *x3; void *x4; } * _mapCamera;
    <MDMapControllerDelegate> * _mapDelegate;
    struct RenderTree { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; unsigned char x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; unsigned long x18; unsigned short x19; long x20; int x21; double x22; void*x23; short x24; void*x25; out void*x26; int x27; const void*x28; long x29; void*x30; void*x31; void*x32; out void*x33; void*x34; void*x35; short x36; oneway int x37; void*x38; void*x39; unsigned char x40; out in void*x41; const out long x42; long x43; void*x44; const void*x45; void*x46; unsigned int x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; unsigned char x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; bool x71; void*x72; unsigned char x73; unsigned int x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; id x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; id x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; unsigned char x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; bool x166; void*x167; void*x168; BOOL x169; void*x170; void*x171; void*x172; int x173; out in void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; unsigned char x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; unsigned short x196; void*x197; short x198; void*x199; void*x200; void*x201; void*x202; unsigned long x203; int x204; unsigned int x205/* : ? */; const void*x206; const void*x207; void*x208; void*x209; const int x210; void x211; void*x212; void*x213; void*x214; void*x215; const void*x216; void*x217; void*x218; void*x219; out const void*x220; short x221; void*x222; void*x223; out unsigned int x224/* : ? */; int x225; long x226; void*x227; bool x228; void*x229; BOOL x230; void*x231; void*x232; void*x233; void*x234; float x235; const void*x236; void*x237; void*x238; void*x239; out const void*x240; void*x241; void*x242; out unsigned int x243/* : ? */; int x244; long x245; void*x246; bool x247; void*x248; BOOL x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; unsigned int x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; BOOL x367; void*x368; void*x369; long long x370; void*x371; void*x372; unsigned long long x373; void*x374; void*x375; unsigned short x376; void*x377; short x378; void*x379; void*x380; void*x381; void*x382; unsigned long x383; int x384; unsigned int x385/* : ? */; const void*x386; const void*x387; void*x388; void*x389; const int x390; void x391; void*x392; void*x393; void*x394; void*x395; const void*x396; void*x397; void*x398; void*x399; out const void*x400; short x401; void*x402; void*x403; void*x404; unsigned int x405/* : ? */; unsigned int x406; in short x407; void*x408; void*x409; BOOL x410; void*x411; out const void*x412; float x413; const void*x414; void*x415; void*x416; void*x417; out const void*x418; void*x419; void*x420; void*x421; unsigned int x422/* : ? */; unsigned int x423; in short x424; void*x425; void*x426; BOOL x427; void*x428; out const void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; unsigned char x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; short x473; short x474; void*x475; void*x476; void*x477; void*x478; void*x479; double x480; void*x481; const bycopy void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; unsigned long long x498; void*x499; void*x500; void*x501; void*x502; int x503; long x504; void*x505; void*x506; const unsigned char x507; out in void*x508; const out long x509; void*x510; void*x511; void*x512; void*x513; in short x514; int x515; out in void*x516; const out void x517; int x518; double x519; void*x520; const unsigned char x521; out in void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; unsigned long long x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; in void*x558; unsigned short x559; void*x560; void*x561; void*x562; void*x563; const void*x564; unsigned int x565; void*x566; void*x567; void*x568; oneway void*x569; long x570; int x571; double x572; void*x573; void*x574; out const void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; unsigned long long x592; void*x593; void*x594; void*x595; unsigned short x596; void*x597; unsigned int x598/* : ? */; short x599; void*x600; short x601; void*x602; void*x603; void*x604; void*x605; long x606; void*x607; void*x608; void*x609; in void*x610; void*x611; const void*x612; void x613; void*x614; const short x615; void*x616; long x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; unsigned long long x637; union x638; void*x639; void*x640; void*x641; unsigned short x642; void*x643; void*x644; unsigned short x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; unsigned long long x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; in void*x677; void*x678; void*x679; void*x680; out const int x681; void*x682; void*x683; void*x684; int x685; out in unsigned short x686; void*x687; const void x688; int x689; BOOL x690; void*x691; oneway int x692; void*x693; void*x694; unsigned char x695; out in void*x696; const out long x697; long x698; void*x699; const void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; unsigned long long x719; void*x720; void*x721; unsigned short x722; void*x723; unsigned long x724; void*x725; void*x726; out void*x727; void*x728; long doublex729; void*x730; in void*x731; void*x732; int x733; BOOL x734; void*x735; void*x736; short x737; int x738; void*x739; void*x740; unsigned int x741; in float x742; out void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; unsigned short x766; unsigned int x767; void*x768; void*x769; long x770; void*x771; void*x772; const void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; unsigned short x797; bool x798; const int x799; void*x800; void*x801; void*x802; in void*x803; short x804; short x805; unsigned char x806; out in void*x807; const out long x808; long x809; void*x810; const void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; unsigned long x825; unsigned short x826; void*x827; const int x828; void*x829; long x830; int x831; void*x832; void*x833; const void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; bool x853; bycopy unsigned int x854/* : ? */; void*x855; void*x856; BOOL x857; void*x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; unsigned short x881; unsigned char x882; void*x883; void*x884; long doublex885; long doublex886; void*x887; float x888; void*x889; void*x890; long x891; void*x892; long doublex893; void*x894; void*x895; void*x896; bool x897; void*x898; float x899; float x900; void*x901; const void*x902; void*x903; short x904; out void*x905; const BOOL x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; short x926; int x927; BOOL x928; unsigned long x929; int x930; unsigned int x931/* : ? */; const void*x932; const void*x933; void*x934; void*x935; BOOL x936; void*x937; in void*x938; long x939; void*x940; double x941; double x942; void*x943; double x944; bycopy void x945; void*x946; const void x947; int x948; void*x949; void*x950; void*x951; in void*x952; int x953; void*x954; void*x955; void*x956; const out void x957; int x958; double x959; void*x960; const void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; in void*x973; void*x974; long long x975; void*x976; void*x977; void*x978; void*x979; const out void*x980; out unsigned short x981; void*x982; void*x983; unsigned short x984; void*x985; out void*x986; long x987; double x988; inout out void*x989; int x990; float x991; void*x992; inout void*x993; void*x994; void*x995; void*x996; in long x997; out BOOL x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; void*x1016; unsigned long x1017; unsigned char x1018; long x1019; out void*x1020; double x1021; unsigned short x1022; void*x1023; void*x1024; const void*x1025; double x1026; long x1027; unsigned int x1028/* : ? */; void*x1029; void*x1030; unsigned int x1031; in void x1032; int x1033; void*x1034; void*x1035; void*x1036; int x1037; out in void*x1038; void*x1039; BOOL x1040; out const double x1041; void*x1042; void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; long doublex1052; void*x1053; void*x1054; void*x1055; void*x1056; unsigned char x1057; inout void*x1058; const void*x1059; in short x1060; float x1061; out const void*x1062; unsigned char x1063; out in short x1064; void*x1065; const void*x1066; int x1067; in void*x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; void*x1074; void*x1075; void*x1076; unsigned long long x1077; void*x1078; void*x1079; long doublex1080; void*x1081; void*x1082; const void*x1083; void*x1084; const void*x1085; void*x1086; void*x1087; void*x1088; const out void*x1089; void*x1090; const void*x1091; int x1092; void*x1093; short x1094; void*x1095; void*x1096; void*x1097; void*x1098; void*x1099; void*x1100; inout void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; long doublex1106; inout out void*x1107; void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; unsigned short x1120; void*x1121; short x1122; void*x1123; void*x1124; void*x1125; void*x1126; unsigned long x1127; int x1128; unsigned int x1129/* : ? */; const void*x1130; const void*x1131; void*x1132; void*x1133; const int x1134; void x1135; void*x1136; void*x1137; void*x1138; void*x1139; const void*x1140; void*x1141; void*x1142; void*x1143; out const void*x1144; short x1145; void*x1146; int x1147; void*x1148; out const void*x1149; unsigned int x1150; void*x1151; void*x1152; out const void*x1153; void*x1154; float x1155; const void*x1156; void*x1157; void*x1158; void*x1159; out const void*x1160; void*x1161; int x1162; void*x1163; out const void*x1164; unsigned int x1165; void*x1166; void*x1167; out const void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; unsigned long long x1174; void*x1175; void*x1176; void*x1177; long long x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; const void*x1225; int x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; double x1232; void*x1233; out void*x1234; void*x1235; void*x1236; unsigned int x1237/* : ? */; void*x1238; long x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; struct x1259; void*x1260; void*x1261; void*x1262; double x1263; void*x1264; out void*x1265; void*x1266; void*x1267; unsigned int x1268/* : ? */; void*x1269; long x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void* x1280[ /* ? */ ]; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; } * _mapScene;
    BOOL  _needsInitialization;
    BOOL  _needsLayout;
    unsigned int  _needsRepaint;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    }  _renderQueue;
    BOOL  _rendersInBackground;
    VKScene * _scene;
    BOOL  _userIsGesturing;
    unsigned int  _wantsLayout;
    VKWorld * _world;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  bgColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) VKCamera *camera;
@property (nonatomic, readonly) NSArray *cameraControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float debugFramesPerSecond;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isGesturing, nonatomic) BOOL gesturing;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iconsShouldAlignToPixels;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property (nonatomic) <MDMapControllerDelegate> *mapDelegate;
@property (nonatomic, readonly) BOOL needsInitialization;
@property (nonatomic) BOOL rendersInBackground;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char targetDisplay;
@property (nonatomic) struct VehicleState { bool x1; } vehicleState;
@property (nonatomic, readonly) VKWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_queueUpdateDisplayLinkStatus;
- (void)addCameraController:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)animateWithTimestamp:(double)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })bgColor;
- (id)buildingMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)camera;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (id)cameraControllers;
- (void)cameraDidChange:(id)arg1;
- (BOOL)canRender;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (BOOL)currentSceneRequiresMSAA;
- (void)dealloc;
- (float)debugFramesPerSecond;
- (void)didEnterBackground;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (id)featureMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)forceLayout;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)gglWillDrawWithTimestamp;
- (BOOL)iconsShouldAlignToPixels;
- (id)initWithTarget:(id)arg1 device:(const struct shared_ptr<ggl::Device> { }*)arg2 inBackground:(BOOL)arg3;
- (void)initializeWithRenderer:(struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_9_1_1; } x9; bool x10; id x11; struct RenderState {} x12; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_13_1_1; } x13; struct RenderTarget {} *x14; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long x_3_3_1; } x_1_2_3; } x_15_1_1; } x15; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_16_1_1; } x16; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_17_1_1; unsigned int x_17_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_18_1_1; struct BufferLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_18_1_3; } x18; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_19_1_1; struct Texture2DLoadItem {} *x_19_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_19_1_3; } x19; unsigned int x20; }*)arg1;
- (BOOL)isGesturing;
- (BOOL)isHidden;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (void)layoutRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)mapDelegate;
- (BOOL)needsInitialization;
- (void)removeCameraController:(id)arg1;
- (BOOL)rendersInBackground;
- (void)resetRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)roadMarkersForSelectionAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)runAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)setContentsScale:(float)arg1;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (struct shared_ptr<gss::CartoStyle> { struct CartoStyle {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(id)arg1;
- (struct shared_ptr<gss::StyleSheet> { struct StyleSheet {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (unsigned char)targetDisplay;
- (void)transferAnimationsTo:(id)arg1;
- (void)updateCameraForFrameResize;
- (BOOL)updateDisplayLinkStatus;
- (void)updateWithTimestamp:(double)arg1;
- (struct VehicleState { bool x1; })vehicleState;
- (BOOL)wantsRender;
- (BOOL)wantsTimerTick;
- (void)willEnterForeground;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end
