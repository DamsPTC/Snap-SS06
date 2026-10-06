/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001a2070; end: 001a2097;  */

void FUN_001a2070(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 001a2098; end: 001a20b3;  */

undefined1  [16] FUN_001a2098(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1a20a8;
  return auVar1;
}



/* Entry: 001a20b4; end: 001a20db;  */

void FUN_001a20b4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 001a20dc; end: 001a20f7;  */

undefined1  [16] FUN_001a20dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1a20ec;
  return auVar1;
}



/* Entry: 001a20f8; end: 001a211f;  */

void FUN_001a20f8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 001a2120; end: 001a2133;  */

undefined1  [16] FUN_001a2120(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1a2130;
  return auVar1;
}



/* Entry: 001a2134; end: 001a218b;  */

undefined8 FUN_001a2134(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  FUN_00141784();
  return uVar1;
}



/* Entry: 001a218c; end: 001a21d7;  */

void FUN_001a218c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
               *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  return;
}



/* Entry: 001a21d8; end: 001a2263;  */

undefined1  [16] FUN_001a21d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  qword qVar3;
  qword qVar4;
  bool bVar5;
  char *pcVar6;
  qword unaff_x20;
  undefined1 auVar7 [16];
  
  pcVar6 = segment_command_00000020.segname;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0x1e42);
  }
  *param_1 = pcVar6;
  *(qword *)(pcVar6 + 0x20) = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x60) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x60);
  }
  qVar3 = 0;
  if (bVar5) {
    qVar3 = *(qword *)(unaff_x20 + 0x68);
  }
  qVar4 = 0xc000000000000000;
  if (bVar5) {
    qVar4 = *(qword *)(unaff_x20 + 0x70);
  }
  *(undefined8 *)pcVar6 = uVar1;
  *(long *)(pcVar6 + 8) = lVar2;
  *(qword *)(pcVar6 + 0x10) = qVar3;
  *(qword *)(pcVar6 + 0x18) = qVar4;
  FUN_00141784();
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = FUN_001a2264;
  return auVar7;
}



/* Entry: 001a2264; end: 001a2323;  */

void FUN_001a2264(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  uVar6 = *(undefined8 *)(lVar4 + 0x60);
  uVar3 = *(undefined8 *)(lVar4 + 0x68);
  uVar7 = *(undefined8 *)(lVar4 + 0x70);
  if ((param_2 & 1) == 0) {
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x58) = uVar9;
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00023304(uVar8,uVar1);
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x58) = uVar9;
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    FUN_00023358(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 001a2324; end: 001a23c7;  */

bool FUN_001a2324(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x001a9e74(&uStack_50,auStack_70,0xaf0660,&UNK_007daae0);
  }
  else {
    func_0x001a9e74(&uStack_50,auStack_70,0xaf0660,&UNK_007daae0);
    FUN_00141808(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00141808(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 001a23c8; end: 001a23ef;  */

void FUN_001a23c8(void)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
               *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}



/* Entry: 001a23f0; end: 001a241b;  */

undefined1  [16] FUN_001a23f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x28);
  return auVar1;
}



/* Entry: 001a241c; end: 001a2447;  */

undefined1  [16] FUN_001a241c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 001a2448; end: 001a247b;  */

void FUN_001a2448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 001a247c; end: 001a248f;  */

undefined1  [16] FUN_001a247c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x1a248c;
  return auVar1;
}



/* Entry: 001a2490; end: 001a24bf;  */

undefined1  [16] FUN_001a2490(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                  *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 001a24c0; end: 001a24f3;  */

void FUN_001a24c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 001a24f4; end: 001a25c3;  */

undefined1  [16] FUN_001a24f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x1a2504;
  return auVar1;
}



/* Entry: 001a25c4; end: 001a25ef;  */

undefined1  [16] FUN_001a25c4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 001a25f0; end: 001a2623;  */

void FUN_001a25f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 001a2624; end: 001a2637;  */

undefined1  [16] FUN_001a2624(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1a2634;
  return auVar1;
}



/* Entry: 001a2638; end: 001a2663;  */

undefined1  [16] FUN_001a2638(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 001a2664; end: 001a2697;  */

void FUN_001a2664(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 001a2698; end: 001a26fb;  */

undefined1  [16] FUN_001a2698(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1a26a8;
  return auVar1;
}



/* Entry: 001a26fc; end: 001a2723;  */

void FUN_001a26fc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  return;
}



/* Entry: 001a2724; end: 001a2737;  */

undefined1  [16] FUN_001a2724(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x1a2734;
  return auVar1;
}



/* Entry: 001a2738; end: 001a2763;  */

undefined1  [16] FUN_001a2738(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 001a2764; end: 001a2797;  */

void FUN_001a2764(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 001a2798; end: 001a27ab;  */

undefined1  [16] FUN_001a2798(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x1a27a8;
  return auVar1;
}



/* Entry: 001a27ac; end: 001a27d7;  */

undefined1  [16] FUN_001a27ac(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 001a27d8; end: 001a280b;  */

void FUN_001a27d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 001a280c; end: 001a281f;  */

undefined1  [16] FUN_001a280c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x1a281c;
  return auVar1;
}



/* Entry: 001a2820; end: 001a284f;  */

undefined1  [16] FUN_001a2820(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                  *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 001a2850; end: 001a2883;  */

void FUN_001a2850(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 001a2884; end: 001a28ab;  */

undefined1  [16] FUN_001a2884(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x1a2894;
  return auVar1;
}



/* Entry: 001a28ac; end: 001a294f;  */

void FUN_001a28ac(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2a28;
  func_0x000115a8(0xaf2a28,&UNK_007e0a30);
  _swift_initStaticObject();
  uRam0000000000b65848 = uVar1;
  return;
}



/* Entry: 001a2950; end: 001a2977;  */

void FUN_001a2950(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 001a2978; end: 001a29b7;  */

void FUN_001a2978(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2a28;
  func_0x000115a8(0xaf2a28,&UNK_007e0a30);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 001a29b8; end: 001a29c3;  */

void FUN_001a29b8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1a818c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 001a29c4; end: 001a2a3b;  */

void FUN_001a29c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x001a2af4(uVar1,*(undefined1 *)(unaff_x20 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 001a2a3c; end: 001a2a47;  */

void FUN_001a2a3c(void)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(*unaff_x20,*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Entry: 001a2a48; end: 001a2a8f;  */

void FUN_001a2a48(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_0019ca80(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a2a90; end: 001a2ae3;  */

bool FUN_001a2a90(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x001a2af4(lVar2,(char)param_1[1]);
  func_0x001a2af4(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 001a2ae4; end: 001a2af7;  */

undefined1  [16] FUN_001a2ae4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 001a2af8; end: 001a2b9b;  */

void FUN_001a2af8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2aa0;
  func_0x000115a8(0xaf2aa0,&UNK_007e0a38);
  _swift_initStaticObject();
  uRam0000000000b65850 = uVar1;
  return;
}



/* Entry: 001a2b9c; end: 001a2ba7;  */

void FUN_001a2b9c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_001a8180();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 001a2ba8; end: 001a2bd7;  */

void FUN_001a2ba8(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 001a2bd8; end: 001a2bdf;  */

undefined8 FUN_001a2bd8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 001a2be0; end: 001a2c1f;  */

void FUN_001a2be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2aa0;
  func_0x000115a8(0xaf2aa0,&UNK_007e0a38);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 001a2c20; end: 001a2c2b;  */

void FUN_001a2c20(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001a8180();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 001a2c2c; end: 001a2c5f;  */

void FUN_001a2c2c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                 code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 001a2c60; end: 001a2c6f;  */

void FUN_001a2c60(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 001a2c70; end: 001a2cdb;  */

void FUN_001a2c70(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a2cdc; end: 001a2cdf;  */

void FUN_001a2cdc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a2ce0; end: 001a2d1f;  */

void FUN_001a2ce0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a2d20; end: 001a2d83;  */

bool FUN_001a2d20(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001a2d84; end: 001a2daf;  */

undefined1  [16] FUN_001a2d84(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001a2db0; end: 001a2de3;  */

void FUN_001a2db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001a2de4; end: 001a2dff;  */

undefined8 FUN_001a2de4(void)

{
  return 0x1a2df4;
}



/* Entry: 001a2e00; end: 001a2e27;  */

void FUN_001a2e00(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 001a2e28; end: 001a2e43;  */

undefined1  [16] FUN_001a2e28(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1a2e38;
  return auVar1;
}



/* Entry: 001a2e44; end: 001a2e6b;  */

void FUN_001a2e44(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 001a2e6c; end: 001a2e7f;  */

undefined1  [16] FUN_001a2e6c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1a2e7c;
  return auVar1;
}



/* Entry: 001a2e80; end: 001a2ed7;  */

undefined8 FUN_001a2e80(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  FUN_00141784();
  return uVar1;
}



/* Entry: 001a2ed8; end: 001a2f23;  */

void FUN_001a2ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
               *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  *(undefined8 *)(unaff_x20 + 0x68) = param_4;
  return;
}



/* Entry: 001a2f24; end: 001a2faf;  */

undefined1  [16] FUN_001a2f24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  qword qVar3;
  qword qVar4;
  bool bVar5;
  char *pcVar6;
  qword unaff_x20;
  undefined1 auVar7 [16];
  
  pcVar6 = segment_command_00000020.segname;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,&UNK_0000a555);
  }
  *param_1 = pcVar6;
  *(qword *)(pcVar6 + 0x20) = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x58) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x58);
  }
  qVar3 = 0;
  if (bVar5) {
    qVar3 = *(qword *)(unaff_x20 + 0x60);
  }
  qVar4 = 0xc000000000000000;
  if (bVar5) {
    qVar4 = *(qword *)(unaff_x20 + 0x68);
  }
  *(undefined8 *)pcVar6 = uVar1;
  *(long *)(pcVar6 + 8) = lVar2;
  *(qword *)(pcVar6 + 0x10) = qVar3;
  *(qword *)(pcVar6 + 0x18) = qVar4;
  FUN_00141784();
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = FUN_001a2fb0;
  return auVar7;
}



/* Entry: 001a2fb0; end: 001a306f;  */

void FUN_001a2fb0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar6 = *(undefined8 *)(lVar4 + 0x58);
  uVar3 = *(undefined8 *)(lVar4 + 0x60);
  uVar7 = *(undefined8 *)(lVar4 + 0x68);
  if ((param_2 & 1) == 0) {
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00023304(uVar8,uVar1);
    FUN_00141808(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    FUN_00023358(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 001a3070; end: 001a310f;  */

bool FUN_001a3070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x001a9e74(&uStack_50,auStack_70,0xaf0660,&UNK_007daae0);
  }
  else {
    func_0x001a9e74(&uStack_50,auStack_70,0xaf0660,&UNK_007daae0);
    FUN_00141808(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00141808(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 001a3110; end: 001a3133;  */

void FUN_001a3110(void)

{
  long unaff_x20;
  
  FUN_00141808(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
               *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  return;
}



/* Entry: 001a3134; end: 001a315f;  */

undefined1  [16] FUN_001a3134(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x20);
  return auVar1;
}



/* Entry: 001a3160; end: 001a318b;  */

undefined1  [16] FUN_001a3160(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 001a318c; end: 001a31bf;  */

void FUN_001a318c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 001a31c0; end: 001a31d3;  */

undefined1  [16] FUN_001a31c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1a31d0;
  return auVar1;
}



/* Entry: 001a31d4; end: 001a3203;  */

undefined1  [16] FUN_001a31d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 001a3204; end: 001a3237;  */

void FUN_001a3204(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 001a3238; end: 001a3287;  */

undefined1  [16] FUN_001a3238(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1a3248;
  return auVar1;
}



/* Entry: 001a3288; end: 001a32b3;  */

undefined1  [16] FUN_001a3288(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001a32b4; end: 001a32e7;  */

void FUN_001a32b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001a32e8; end: 001a3327;  */

undefined8 FUN_001a32e8(void)

{
  return 0x1a32f8;
}



/* Entry: 001a3328; end: 001a334f;  */

void FUN_001a3328(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 001a3350; end: 001a3363;  */

undefined1  [16] FUN_001a3350(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1a3360;
  return auVar1;
}



/* Entry: 001a3364; end: 001a3393;  */

undefined1  [16] FUN_001a3364(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 001a3394; end: 001a33c7;  */

void FUN_001a3394(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 001a33c8; end: 001a3403;  */

undefined1  [16] FUN_001a33c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1a33d8;
  return auVar1;
}



/* Entry: 001a3404; end: 001a342f;  */

undefined1  [16] FUN_001a3404(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001a3430; end: 001a3463;  */

void FUN_001a3430(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001a3464; end: 001a3477;  */

undefined8 FUN_001a3464(void)

{
  return 0x1a3474;
}



/* Entry: 001a3478; end: 001a351f;  */

undefined8 FUN_001a3478(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000000aed8b0 != -1) {
      _swift_once(0xaed8b0,FUN_000c2f84);
    }
    _swift_retain(uRam0000000000b64ad0);
    uVar4 = 0;
  }
  func_0x00191e58(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 001a3520; end: 001a355f;  */

void FUN_001a3520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x0012cec0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  *(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Entry: 001a3560; end: 001a360b;  */

undefined1  [16] FUN_001a3560(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  param_1[3] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar3 = lVar6;
  uVar4 = uVar1;
  uVar5 = uVar2;
  if (lVar6 == 0) {
    if (lRam0000000000aed8b0 != -1) {
      _swift_once(0xaed8b0,FUN_000c2f84);
    }
    lVar3 = lRam0000000000b64ad0;
    _swift_retain();
    uVar4 = 0;
    uVar5 = 0xc000000000000000;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = lVar3;
  func_0x00191e58(uVar1,uVar2,lVar6);
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = FUN_001a360c;
  return auVar7;
}



/* Entry: 001a360c; end: 001a36bb;  */

void FUN_001a360c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  lVar5 = param_1[3];
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  uVar7 = *(undefined8 *)(lVar5 + 0x30);
  if ((param_2 & 1) != 0) {
    func_0x00023304(uVar1,uVar4);
    _swift_retain(uVar2);
    func_0x0012cec0(uVar3,uVar6,uVar7);
    *(undefined8 *)(lVar5 + 0x20) = uVar1;
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    *(undefined8 *)(lVar5 + 0x30) = uVar2;
    FUN_00023358(uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar2);
    return;
  }
  func_0x0012cec0(uVar3,uVar6,uVar7);
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *(undefined8 *)(lVar5 + 0x30) = uVar2;
  return;
}



/* Entry: 001a36bc; end: 001a374f;  */

bool FUN_001a36bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    func_0x001a9e74(&uStack_50,auStack_68,0xaf2aa8,&UNK_007e0a40);
  }
  else {
    func_0x001a9e74(&uStack_50,auStack_68,0xaf2aa8,&UNK_007e0a40);
    func_0x0012cec0(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x0012cec0(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 001a3750; end: 001a3773;  */

void FUN_001a3750(void)

{
  long unaff_x20;
  
  func_0x0012cec0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  *(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 001a3774; end: 001a37a3;  */

undefined1  [16] FUN_001a3774(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 001a37a4; end: 001a37d7;  */

void FUN_001a37a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 001a37d8; end: 001a380b;  */

undefined1  [16] FUN_001a37d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1a37e8;
  return auVar1;
}



/* Entry: 001a380c; end: 001a38cb;  */

void FUN_001a380c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e1540,0x31,&uStack_48,&lStack_40);
  puRam0000000000b65868 = puStack_38;
  lRam0000000000b65860 = lStack_40;
  puRam0000000000b65878 = puStack_28;
  puRam0000000000b65870 = puStack_30;
  puRam0000000000b65888 = puStack_18;
  puRam0000000000b65880 = puStack_20;
  return;
}



/* Entry: 001a38cc; end: 001a3a0b;  */

void FUN_001a38cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ab0 != -1) {
    _swift_once(0xaf2ab0,FUN_001a380c);
  }
  uVar5 = uRam0000000000b65888;
  uVar4 = uRam0000000000b65880;
  uVar3 = uRam0000000000b65878;
  uVar2 = uRam0000000000b65870;
  uVar1 = uRam0000000000b65868;
  *param_1 = uRam0000000000b65860;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a3a0c; end: 001a3a33;  */

undefined * FUN_001a3a0c(void)

{
  return &UNK_009b4370;
}


