/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0014e6b4; end: 0014e6f3;  */

undefined1  [16] FUN_0014e6b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 0014e6f4; end: 0014e727;  */

void FUN_0014e6f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 0014e728; end: 0014e77f;  */

undefined1  [16] FUN_0014e728(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_0014e780;
  return auVar4;
}



/* Entry: 0014e780; end: 0014e793;  */

void FUN_0014e780(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    *(undefined8 *)(lVar2 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  return;
}



/* Entry: 0014e794; end: 0014e7af;  */

void FUN_0014e794(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 0014e7b0; end: 0014e7b7;  */

void FUN_0014e7b0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*unaff_x20);
  return;
}



/* Entry: 0014e7b8; end: 0014e7df;  */

void FUN_0014e7b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0014e7e0; end: 0014e7fb;  */

undefined8 FUN_0014e7e0(void)

{
  return 0x14e7f0;
}



/* Entry: 0014e7fc; end: 0014e823;  */

void FUN_0014e7fc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 0014e824; end: 0014e83f;  */

undefined1  [16] FUN_0014e824(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x14e834;
  return auVar1;
}



/* Entry: 0014e840; end: 0014e867;  */

void FUN_0014e840(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 0014e868; end: 0014e883;  */

undefined1  [16] FUN_0014e868(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x14e878;
  return auVar1;
}



/* Entry: 0014e884; end: 0014e8ab;  */

void FUN_0014e884(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0014e8ac; end: 0014e8c7;  */

undefined1  [16] FUN_0014e8ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x14e8bc;
  return auVar1;
}



/* Entry: 0014e8c8; end: 0014e8ef;  */

void FUN_0014e8c8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 0014e8f0; end: 0014e90b;  */

undefined1  [16] FUN_0014e8f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x14e900;
  return auVar1;
}



/* Entry: 0014e90c; end: 0014e933;  */

void FUN_0014e90c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Entry: 0014e934; end: 0014e94f;  */

undefined1  [16] FUN_0014e934(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x14e944;
  return auVar1;
}



/* Entry: 0014e950; end: 0014e977;  */

void FUN_0014e950(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 0014e978; end: 0014e993;  */

undefined1  [16] FUN_0014e978(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x14e988;
  return auVar1;
}



/* Entry: 0014e994; end: 0014e9bb;  */

void FUN_0014e994(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Entry: 0014e9bc; end: 0014e9cf;  */

undefined1  [16] FUN_0014e9bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x14e9cc;
  return auVar1;
}



/* Entry: 0014e9d0; end: 0014ea93;  */

undefined8 FUN_0014e9d0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = uVar1;
  if (lVar2 == 0) {
    if (lRam0000000000af0788 != -1) {
      _swift_once(0xaf0788,FUN_0016f878);
    }
    _swift_retain(uRam0000000000af0790);
    uVar5 = 0;
  }
  func_0x00186a8c(uVar1,uVar3,lVar2,uVar4);
  return uVar5;
}



/* Entry: 0014ea94; end: 0014eaaf;  */

undefined8 FUN_0014ea94(void)

{
  if (lRam0000000000af0788 != -1) {
    _swift_once(0xaf0788,FUN_0016f878);
  }
  _swift_retain(uRam0000000000af0790);
  return 0;
}



/* Entry: 0014eab0; end: 0014ebdf;  */

void FUN_0014eab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00186ac4(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                  *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  return;
}



/* Entry: 0014ebe0; end: 0014ebe3;  */

void FUN_0014ebe0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar7 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  uVar8 = *(undefined8 *)(lVar5 + 0x88);
  if ((param_2 & 1) == 0) {
    func_0x00186ac4(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    func_0x00023304(uVar2,uVar6);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar1);
    func_0x00186ac4(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    FUN_00023358(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 0014ebe4; end: 0014ec83;  */

bool FUN_0014ebe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00187028(&uStack_50,auStack_70,0xaf0798,&UNK_007daf58);
  }
  else {
    func_0x00187028(&uStack_50,auStack_70,0xaf0798,&UNK_007daf58);
    func_0x00186ac4(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x00186ac4(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 0014ec84; end: 0014eca7;  */

void FUN_0014ec84(void)

{
  long unaff_x20;
  
  func_0x00186ac4(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                  *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 0014eca8; end: 0014ed0b;  */

undefined * FUN_0014eca8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (*(undefined **)(unaff_x20 + 0x90) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x90);
  }
  FUN_00186484();
  return puVar1;
}



/* Entry: 0014ed0c; end: 0014ed27;  */

undefined * FUN_0014ed0c(void)

{
  return PTR___swiftEmptyArrayStorage_0099b8f0;
}



/* Entry: 0014ed28; end: 0014ed73;  */

void FUN_0014ed28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x001864cc(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_4;
  return;
}



/* Entry: 0014ed74; end: 0014ee0b;  */

undefined1  [16] FUN_0014ed74(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
    _swift_coroFrameAlloc(0x28,&UNK_00002504);
  }
  *param_1 = pcVar6;
  *(qword *)(pcVar6 + 0x20) = unaff_x20;
  bVar5 = *(undefined **)(unaff_x20 + 0x90) != (undefined *)0x0;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (bVar5) {
    puVar1 = *(undefined **)(unaff_x20 + 0x90);
  }
  lVar2 = 0;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x98);
  }
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  qVar4 = 0xc000000000000000;
  if (bVar5) {
    puVar3 = *(undefined **)(unaff_x20 + 0xa8);
    qVar4 = *(qword *)(unaff_x20 + 0xa0);
  }
  *(undefined **)pcVar6 = puVar1;
  *(long *)(pcVar6 + 8) = lVar2;
  *(qword *)(pcVar6 + 0x10) = qVar4;
  *(undefined **)(pcVar6 + 0x18) = puVar3;
  FUN_00186484();
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = FUN_0014ee0c;
  return auVar7;
}



/* Entry: 0014ee0c; end: 0014eedb;  */

void FUN_0014ee0c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  uVar7 = *(undefined8 *)(lVar5 + 0x98);
  uVar4 = *(undefined8 *)(lVar5 + 0xa0);
  uVar8 = *(undefined8 *)(lVar5 + 0xa8);
  if ((param_2 & 1) == 0) {
    func_0x001864cc(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    *(undefined8 *)(lVar5 + 0x98) = uVar6;
    *(undefined8 *)(lVar5 + 0xa0) = uVar9;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    func_0x00023304(uVar6,uVar9);
    _swift_bridgeObjectRetain(uVar1);
    func_0x001864cc(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    *(undefined8 *)(lVar5 + 0x98) = uVar6;
    *(undefined8 *)(lVar5 + 0xa0) = uVar9;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    _swift_bridgeObjectRelease(*param_1);
    FUN_00023358(uVar2,uVar1);
    _swift_bridgeObjectRelease(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 0014eedc; end: 0014ef7b;  */

bool FUN_0014eedc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  lVar4 = *(long *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  lStack_50 = lVar4;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00187028(&lStack_50,auStack_70,0xaf07a0,&UNK_007daf60);
  }
  else {
    func_0x00187028(&lStack_50,auStack_70,0xaf07a0,&UNK_007daf60);
    func_0x001864cc(lVar4,uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x001864cc(0,uVar1,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 0014ef7c; end: 0014ef9f;  */

void FUN_0014ef7c(void)

{
  long unaff_x20;
  
  func_0x001864cc(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  return;
}



/* Entry: 0014efa0; end: 0014efdf;  */

undefined1  [16] FUN_0014efa0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 0014efe0; end: 0014f013;  */

void FUN_0014efe0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  *(undefined8 *)(unaff_x20 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_2;
  return;
}



/* Entry: 0014f014; end: 0014f06b;  */

undefined1  [16] FUN_0014f014(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_0014f06c;
  return auVar4;
}



/* Entry: 0014f06c; end: 0014f0cb;  */

void FUN_0014f06c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0xb0) = uVar1;
    *(undefined8 *)(lVar2 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0xb0) = uVar1;
  *(undefined8 *)(lVar2 + 0xb8) = uVar3;
  return;
}



/* Entry: 0014f0cc; end: 0014f0db;  */

bool FUN_0014f0cc(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0xb8) != 0;
}



/* Entry: 0014f0dc; end: 0014f0f7;  */

void FUN_0014f0dc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  return;
}



/* Entry: 0014f0f8; end: 0014f15f;  */

char FUN_0014f0f8(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0xc0) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0xc0);
  }
  return cVar1;
}



/* Entry: 0014f160; end: 0014f18f;  */

undefined1  [16] FUN_0014f160(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 0014f190; end: 0014f1c3;  */

void FUN_0014f190(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 0014f1c4; end: 0014f233;  */

undefined1  [16] FUN_0014f1c4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x14f1d4;
  return auVar1;
}



/* Entry: 0014f234; end: 0014f2cf;  */

undefined1  [16] FUN_0014f234(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,&UNK_0000ac54);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,lVar1,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(long *)(lVar1 + 0x50) = lVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = lVar1 + 0x48;
  auVar5._0_8_ = FUN_0014f2d0;
  return auVar5;
}



/* Entry: 0014f2d0; end: 0014f2e7;  */

void FUN_0014f2d0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar5);
  return;
}



/* Entry: 0014f2e8; end: 0014f32b;  */

bool FUN_0014f2e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  return *(long *)(param_3 + 0x18) != 0;
}



/* Entry: 0014f32c; end: 0014f35f;  */

void FUN_0014f32c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014f360; end: 0014f3e3;  */

undefined1  [16] FUN_0014f360(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x58;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x58,&UNK_0000c1e9);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x20,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = (undefined8 *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_0014f3e4;
  return auVar3;
}



/* Entry: 0014f3e4; end: 0014f3fb;  */

void FUN_0014f3e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0014f3fc; end: 0014f43b;  */

void FUN_0014f3fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x28,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 0014f43c; end: 0014f553;  */

void FUN_0014f43c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x28,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014f554; end: 0014f673;  */

void FUN_0014f554(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0014f674; end: 0014f6b3;  */

void FUN_0014f674(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x30,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 0014f6b4; end: 0014f7cb;  */

void FUN_0014f6b4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014f7cc; end: 0014f8eb;  */

void FUN_0014f7cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x30,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x30,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0014f8ec; end: 0014f92b;  */

void FUN_0014f8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x38,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x38));
  return;
}



/* Entry: 0014f92c; end: 0014fa43;  */

void FUN_0014f92c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x38,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014fa44; end: 0014fb63;  */

void FUN_0014fa44(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x38,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x38,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0014fb64; end: 0014fba3;  */

void FUN_0014fb64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x40,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x40));
  return;
}



/* Entry: 0014fba4; end: 0014fcbb;  */

void FUN_0014fba4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x40,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014fcbc; end: 0014fddb;  */

void FUN_0014fcbc(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x40,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x40,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0014fddc; end: 0014fe1b;  */

void FUN_0014fddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x48,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x48));
  return;
}



/* Entry: 0014fe1c; end: 0014ff33;  */

void FUN_0014fe1c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0014ff34; end: 00150053;  */

void FUN_0014ff34(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x48,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x48,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00150054; end: 00150167;  */

void FUN_00150054(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _swift_beginAccess(param_4 + 0x50,auStack_b8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x58);
  puStack_a0 = *(undefined **)(param_4 + 0x50);
  puStack_88 = *(undefined **)(param_4 + 0x68);
  uStack_90 = *(undefined8 *)(param_4 + 0x60);
  uStack_78 = *(undefined8 *)(param_4 + 0x78);
  uVar6 = *(undefined8 *)(param_4 + 0x70);
  uStack_68 = *(undefined8 *)(param_4 + 0x88);
  uStack_70 = *(undefined8 *)(param_4 + 0x80);
  uStack_60 = *(undefined8 *)(param_4 + 0x90);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_120 = 0x2000200020002;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uStack_128 = 0;
    uStack_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uStack_120 = (ulong)CONCAT16((char)((ulong)uVar6 >> 0x18),
                                 (uint6)CONCAT14((char)((ulong)uVar6 >> 0x10),
                                                 (uint)CONCAT12((char)((ulong)uVar6 >> 8),
                                                                (ushort)(byte)uVar6)));
    uStack_80._4_1_ = (undefined1)((ulong)uVar6 >> 0x20);
    uVar1 = uStack_98;
    puVar2 = puStack_a0;
    puVar4 = puStack_88;
    uVar5 = uStack_90;
    uVar3 = uStack_80._4_1_;
    uStack_130 = uStack_68;
    uStack_128 = uStack_60;
    uStack_110 = uStack_78;
    uStack_108 = uStack_70;
  }
  uStack_80 = uVar6;
  func_0x00187028(&puStack_a0,auStack_100,0xaefe60,&UNK_007d9c38);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(uint *)(param_1 + 4) =
       CONCAT13((char)(uStack_120 >> 0x30),
                CONCAT12((char)(uStack_120 >> 0x20),
                         CONCAT11((char)(uStack_120 >> 0x10),(char)uStack_120)));
  *(undefined1 *)((long)param_1 + 0x24) = uVar3;
  param_1[8] = uStack_128;
  param_1[7] = uStack_130;
  param_1[6] = uStack_108;
  param_1[5] = uStack_110;
  return;
}



/* Entry: 00150168; end: 001501a7;  */

void FUN_00150168(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined4 *)(param_1 + 4) = 0x2020202;
  *(undefined1 *)((long)param_1 + 0x24) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 001501a8; end: 0015029b;  */

void FUN_001501a8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x50,auStack_f8,1,0);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  uStack_70 = *(undefined8 *)(lVar2 + 0x70);
  uStack_58 = *(undefined8 *)(lVar2 + 0x88);
  uStack_60 = *(undefined8 *)(lVar2 + 0x80);
  uStack_50 = *(undefined8 *)(lVar2 + 0x90);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  uStack_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x78) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x80) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x90) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_d0;
  func_0x00191ff4(&uStack_90,0xaefe60,&UNK_007d9c38);
  return;
}



/* Entry: 0015029c; end: 001503b7;  */

undefined1  [16] FUN_0015029c(undefined8 *param_1)

{
  section *psVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  qword qVar10;
  qword qVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  psVar1 = &section_00000158;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x158,&UNK_00003644);
  }
  *param_1 = psVar1;
  *(long *)psVar1[4].segname = unaff_x20;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar6 + 0x50,&psVar1[3].offset,0,0);
  uVar2 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(psVar1->sectname + 8) = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)psVar1->sectname = uVar2;
  uVar8 = *(undefined8 *)(lVar6 + 0x68);
  uVar7 = *(undefined8 *)(lVar6 + 0x60);
  qVar11 = *(qword *)(lVar6 + 0x78);
  qVar10 = *(qword *)(lVar6 + 0x70);
  uVar14 = *(undefined8 *)(lVar6 + 0x88);
  uVar12 = *(undefined8 *)(lVar6 + 0x80);
  uVar2 = *(undefined8 *)(lVar6 + 0x90);
  psVar1->flags = (int)uVar2;
  psVar1->reserved1 = (int)((ulong)uVar2 >> 0x20);
  psVar1->size = qVar11;
  psVar1->addr = qVar10;
  psVar1->reloff = (int)uVar14;
  psVar1->nrelocs = (int)((ulong)uVar14 >> 0x20);
  psVar1->offset = (int)uVar12;
  psVar1->align = (int)((ulong)uVar12 >> 0x20);
  *(undefined8 *)(psVar1->segname + 8) = uVar8;
  *(undefined8 *)psVar1->segname = uVar7;
  if (*(undefined **)psVar1->sectname == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar2 = 0;
    qVar10 = 0;
    qVar11 = 0;
    uVar13 = 0x2000200020002;
    cVar4 = '\x02';
    uVar8 = 0;
    uVar12 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uVar7 = *(undefined8 *)psVar1->segname;
    uVar2 = *(undefined8 *)(psVar1->sectname + 8);
    uVar9 = (undefined4)psVar1->addr;
    uVar13 = (ulong)CONCAT16((char)((uint)uVar9 >> 0x18),
                             (uint6)CONCAT14((char)((uint)uVar9 >> 0x10),
                                             (uint)CONCAT12((char)((uint)uVar9 >> 8),
                                                            (ushort)(byte)uVar9)));
    cVar4 = *(char *)((long)&psVar1->addr + 4);
    qVar11._0_4_ = psVar1->offset;
    qVar11._4_4_ = psVar1->align;
    qVar10 = psVar1->size;
    uVar12._0_4_ = psVar1->flags;
    uVar12._4_4_ = psVar1->reserved1;
    uVar8._0_4_ = psVar1->reloff;
    uVar8._4_4_ = psVar1->nrelocs;
    puVar3 = *(undefined **)psVar1->sectname;
    puVar5 = *(undefined **)(psVar1->segname + 8);
  }
  *(undefined **)&psVar1->reserved2 = puVar3;
  *(undefined8 *)(psVar1[1].sectname + 8) = uVar7;
  *(undefined8 *)psVar1[1].sectname = uVar2;
  *(undefined **)psVar1[1].segname = puVar5;
  *(uint *)(psVar1[1].segname + 8) =
       CONCAT13((char)(uVar13 >> 0x30),
                CONCAT12((char)(uVar13 >> 0x20),CONCAT11((char)(uVar13 >> 0x10),(char)uVar13)));
  psVar1[1].segname[0xc] = cVar4;
  psVar1[1].size = qVar11;
  psVar1[1].addr = qVar10;
  psVar1[1].reloff = (int)uVar12;
  psVar1[1].nrelocs = (int)((ulong)uVar12 >> 0x20);
  psVar1[1].offset = (int)uVar8;
  psVar1[1].align = (int)((ulong)uVar8 >> 0x20);
  func_0x00187028(psVar1,&psVar1[1].flags,0xaefe60,&UNK_007d9c38);
  auVar15._8_8_ = &psVar1->reserved2;
  auVar15._0_8_ = FUN_001503b8;
  return auVar15;
}



/* Entry: 001503b8; end: 001505c3;  */

void FUN_001503b8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + 0xd8);
  lVar5 = *(long *)(lVar4 + 0x150);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x60);
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x70);
    uVar10 = *(undefined8 *)(lVar4 + 0x68);
    uVar17 = *(undefined8 *)(lVar4 + 0x80);
    uVar16 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    uVar14 = *(undefined8 *)(lVar4 + 0x50);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x50,puVar1,1,0);
    uVar11 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0x90) = uVar11;
    uVar15 = *(undefined8 *)(lVar5 + 0x68);
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar18 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)(lVar4 + 0xb8) = uVar19;
    *(undefined8 *)(lVar4 + 0xb0) = uVar18;
    *(undefined8 *)(lVar4 + 200) = uVar21;
    *(undefined8 *)(lVar4 + 0xc0) = uVar20;
    *(undefined8 *)(lVar4 + 0xa8) = uVar15;
    *(undefined8 *)(lVar4 + 0xa0) = uVar11;
    *(undefined8 *)(lVar5 + 0x78) = uVar13;
    *(undefined8 *)(lVar5 + 0x70) = uVar10;
    *(undefined8 *)(lVar5 + 0x88) = uVar17;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar14;
    *(undefined8 *)(lVar5 + 0x50) = uVar12;
    *(undefined8 *)(lVar5 + 0x68) = uVar9;
    *(undefined8 *)(lVar5 + 0x60) = uVar8;
    func_0x00191ff4(lVar4 + 0x90,0xaefe60,&UNK_007d9c38);
  }
  else {
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x88);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x58);
    FUN_00186938(lVar4 + 0x90,puVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    uVar12 = *(undefined8 *)(lVar4 + 0xb8);
    uVar8 = *(undefined8 *)(lVar4 + 0xb0);
    uVar15 = *(undefined8 *)(lVar4 + 200);
    uVar16 = *(undefined8 *)(lVar4 + 0xc0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    uVar18 = *(undefined8 *)(lVar4 + 0x98);
    uVar17 = *(undefined8 *)(lVar4 + 0x90);
    uVar13 = *(undefined8 *)(lVar4 + 0xa8);
    uVar9 = *(undefined8 *)(lVar4 + 0xa0);
    _swift_beginAccess(lVar5 + 0x50,lVar4 + 0x138,1,0);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar5 + 0x58);
    *puVar1 = uVar10;
    uVar14 = *(undefined8 *)(lVar5 + 0x68);
    uVar10 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar11 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)(lVar4 + 0x100) = uVar19;
    *(undefined8 *)(lVar4 + 0xf8) = uVar11;
    *(undefined8 *)(lVar4 + 0x110) = uVar21;
    *(undefined8 *)(lVar4 + 0x108) = uVar20;
    *(undefined8 *)(lVar4 + 0xf0) = uVar14;
    *(undefined8 *)(lVar4 + 0xe8) = uVar10;
    *(undefined8 *)(lVar5 + 0x78) = uVar12;
    *(undefined8 *)(lVar5 + 0x70) = uVar8;
    *(undefined8 *)(lVar5 + 0x88) = uVar15;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar18;
    *(undefined8 *)(lVar5 + 0x50) = uVar17;
    *(undefined8 *)(lVar5 + 0x68) = uVar13;
    *(undefined8 *)(lVar5 + 0x60) = uVar9;
    func_0x00191ff4(puVar1,0xaefe60,&UNK_007d9c38);
    func_0x0018696c(lVar4 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001505c4; end: 001507b3;  */

bool FUN_001505c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_170 [72];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _swift_beginAccess(param_3 + 0x50,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x58);
  lVar3 = *(long *)(param_3 + 0x50);
  uStack_68 = *(undefined8 *)(param_3 + 0x68);
  uStack_70 = *(undefined8 *)(param_3 + 0x60);
  uStack_58 = *(undefined8 *)(param_3 + 0x78);
  uStack_60 = *(undefined8 *)(param_3 + 0x70);
  uStack_48 = *(undefined8 *)(param_3 + 0x88);
  uStack_50 = *(undefined8 *)(param_3 + 0x80);
  uStack_40 = *(undefined8 *)(param_3 + 0x90);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_128 = 0;
    uStack_118 = *(undefined8 *)(param_3 + 0x60);
    uStack_120 = *(undefined8 *)(param_3 + 0x58);
    uStack_108 = *(undefined8 *)(param_3 + 0x70);
    uStack_110 = *(undefined8 *)(param_3 + 0x68);
    uStack_f8 = *(undefined8 *)(param_3 + 0x80);
    uStack_100 = *(undefined8 *)(param_3 + 0x78);
    uStack_e8 = *(undefined8 *)(param_3 + 0x90);
    uStack_f0 = *(undefined8 *)(param_3 + 0x88);
    uVar1 = 0xaefe60;
    puVar2 = &UNK_007d9c38;
    func_0x00187028(&lStack_80,auStack_170,0xaefe60,&UNK_007d9c38);
  }
  else {
    uStack_118 = *(undefined8 *)(param_3 + 0x60);
    uStack_120 = *(undefined8 *)(param_3 + 0x58);
    uStack_108 = *(undefined8 *)(param_3 + 0x70);
    uStack_110 = *(undefined8 *)(param_3 + 0x68);
    uStack_f8 = *(undefined8 *)(param_3 + 0x80);
    uStack_100 = *(undefined8 *)(param_3 + 0x78);
    uStack_e8 = *(undefined8 *)(param_3 + 0x90);
    uStack_f0 = *(undefined8 *)(param_3 + 0x88);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    lStack_128 = lVar3;
    func_0x00187028(&lStack_80,auStack_170,0xaefe60,&UNK_007d9c38);
    uVar1 = 0xaf07a8;
    puVar2 = &UNK_007daf70;
  }
  func_0x00191ff4(&lStack_128,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 001507b4; end: 001507f3;  */

void FUN_001507b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x98,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x98));
  return;
}



/* Entry: 001507f4; end: 0015090b;  */

void FUN_001507f4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x98,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0015090c; end: 00150a2b;  */

void FUN_0015090c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x98,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x98) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x98,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x98) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00150a2c; end: 00150a6b;  */

void FUN_00150a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0xa0));
  return;
}



/* Entry: 00150a6c; end: 00150b83;  */

void FUN_00150a6c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 00150b84; end: 00150ca3;  */

void FUN_00150b84(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186514(0);
      _swift_allocObject();
      FUN_00186534();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00150ca4; end: 00150ce7;  */

char FUN_00150ca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa8,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(param_3 + 0xa8) != '\x03') {
    cVar1 = *(char *)(param_3 + 0xa8);
  }
  return cVar1;
}



/* Entry: 00150ce8; end: 00150df7;  */

void FUN_00150ce8(undefined1 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa8,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0xa8) = param_1;
  return;
}



/* Entry: 00150df8; end: 00150ea7;  */

void FUN_00150df8(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)(lVar3 + 0x50);
  lVar4 = *(long *)(lVar3 + 0x48);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar4 + 0x10);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar3 + 0x48);
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar5);
    *(long *)(lVar6 + 0x10) = lVar4;
  }
  lVar5 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x30;
  }
  _swift_beginAccess(lVar4 + 0xa8,lVar3 + lVar5,1,0);
  *(undefined1 *)(lVar4 + 0xa8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00150ea8; end: 00150eeb;  */

bool FUN_00150ea8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa8,auStack_38,0,0);
  return *(char *)(param_3 + 0xa8) != '\x03';
}



/* Entry: 00150eec; end: 00150f77;  */

void FUN_00150eec(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186514(0);
    _swift_allocObject();
    FUN_00186534();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa8,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0xa8) = 3;
  return;
}



/* Entry: 00150f78; end: 00150fa3;  */

undefined1  [16] FUN_00150f78(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 00150fa4; end: 00150fd7;  */

void FUN_00150fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00150fd8; end: 001510bb;  */

undefined8 FUN_00150fd8(void)

{
  return 0x150fe8;
}



/* Entry: 001510bc; end: 0015119b;  */

void FUN_001510bc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [80];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  
  puStack_98 = *(undefined **)(unaff_x20 + 0x28);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  puStack_80 = *(undefined **)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_5f = (undefined7)*(undefined8 *)(unaff_x20 + 0x61);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x61) >> 0x38);
  uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar5 = 2;
    uVar4 = 0xc000000000000000;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uStack_108 = CONCAT71(uStack_5f,uStack_60);
    uStack_110 = CONCAT71(uStack_67,uStack_68);
    uVar1 = uStack_90;
    puVar2 = puStack_80;
    puVar3 = puStack_a0;
    uVar4 = uStack_88;
    puVar6 = puStack_98;
    uVar5 = uStack_58;
    uStack_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  func_0x00187028(&puStack_a0,auStack_f0,0xaefe90,&UNK_007e1580);
  *param_1 = puVar3;
  param_1[1] = puVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  param_1[4] = puVar2;
  param_1[8] = uStack_108;
  param_1[7] = uStack_110;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  *(undefined1 *)(param_1 + 9) = uVar5;
  return;
}



/* Entry: 0015119c; end: 001511d7;  */

void FUN_0015119c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}



/* Entry: 001511d8; end: 00151223;  */

void FUN_001511d8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00191ff4(unaff_x20 + 0x20,0xaefe90,&UNK_007e1580);
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  uVar1 = *(undefined8 *)((long)param_1 + 0x39);
  *(undefined8 *)(unaff_x20 + 0x61) = *(undefined8 *)((long)param_1 + 0x41);
  *(undefined8 *)(unaff_x20 + 0x59) = uVar1;
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 00151224; end: 0015131f;  */

undefined1  [16] FUN_00151224(undefined8 *param_1)

{
  dword *pdVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  pdVar1 = &section_00000158.flags;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x198,&UNK_00009513);
  }
  *param_1 = pdVar1;
  *(long *)(pdVar1 + 100) = unaff_x20;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(pdVar1 + 2) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)pdVar1 = uVar6;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x59);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)((long)pdVar1 + 0x41) = *(undefined8 *)(unaff_x20 + 0x61);
  *(undefined8 *)((long)pdVar1 + 0x39) = uVar8;
  *(undefined8 *)(pdVar1 + 10) = uVar10;
  *(undefined8 *)(pdVar1 + 8) = uVar9;
  *(undefined8 *)(pdVar1 + 0xe) = uVar7;
  *(undefined8 *)(pdVar1 + 0xc) = uVar6;
  *(undefined8 *)(pdVar1 + 6) = uVar12;
  *(undefined8 *)(pdVar1 + 4) = uVar11;
  if (*(undefined **)pdVar1 == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar3 = 2;
    uVar10 = 0;
    uVar11 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uVar7 = *(undefined8 *)(pdVar1 + 6);
    uVar6 = *(undefined8 *)(pdVar1 + 4);
    uVar9 = *(undefined8 *)(pdVar1 + 0xc);
    uVar8 = *(undefined8 *)(pdVar1 + 10);
    uVar11 = *(undefined8 *)(pdVar1 + 0x10);
    uVar10 = *(undefined8 *)(pdVar1 + 0xe);
    uVar3 = *(undefined1 *)(pdVar1 + 0x12);
    puVar2 = *(undefined **)pdVar1;
    puVar4 = *(undefined **)(pdVar1 + 8);
    puVar5 = *(undefined **)(pdVar1 + 2);
  }
  *(undefined **)(pdVar1 + 0x14) = puVar2;
  *(undefined **)(pdVar1 + 0x16) = puVar5;
  *(undefined8 *)(pdVar1 + 0x1a) = uVar7;
  *(undefined8 *)(pdVar1 + 0x18) = uVar6;
  *(undefined **)(pdVar1 + 0x1c) = puVar4;
  *(undefined8 *)(pdVar1 + 0x20) = uVar9;
  *(undefined8 *)(pdVar1 + 0x1e) = uVar8;
  *(undefined8 *)(pdVar1 + 0x24) = uVar11;
  *(undefined8 *)(pdVar1 + 0x22) = uVar10;
  *(undefined1 *)(pdVar1 + 0x26) = uVar3;
  func_0x00187028(pdVar1,pdVar1 + 0x28,0xaefe90,&UNK_007e1580);
  auVar13._8_8_ = pdVar1 + 0x14;
  auVar13._0_8_ = FUN_00151320;
  return auVar13;
}



/* Entry: 00151320; end: 00151427;  */

void FUN_00151320(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  lVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(lVar1 + 400);
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    uVar10 = *(undefined8 *)(lVar1 + 0x80);
    uStack_38 = (undefined1)*(undefined8 *)(lVar1 + 0x88);
    uVar7 = *(undefined8 *)(lVar1 + 0x91);
    uVar4 = *(undefined8 *)(lVar1 + 0x89);
    uStack_37 = (undefined7)uVar4;
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    uVar9 = *(undefined8 *)(lVar1 + 0x50);
    uVar8 = *(undefined8 *)(lVar1 + 0x68);
    uVar5 = *(undefined8 *)(lVar1 + 0x60);
    func_0x00191ff4(lVar2 + 0x20,0xaefe90,&UNK_007e1580);
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(uStack_37,uStack_38);
    *(undefined8 *)(lVar2 + 0x50) = uVar10;
    *(undefined8 *)(lVar2 + 0x61) = uVar7;
    *(undefined8 *)(lVar2 + 0x59) = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = uVar11;
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
  }
  else {
    lVar2 = *(long *)(lVar1 + 400);
    uVar5 = *(undefined8 *)(lVar1 + 0x91);
    uVar3 = *(undefined8 *)(lVar1 + 0x89);
    *(undefined8 *)(lVar1 + 0x131) = uVar5;
    *(undefined8 *)(lVar1 + 0x129) = uVar3;
    uVar12 = *(undefined8 *)(lVar1 + 0x78);
    uVar9 = *(undefined8 *)(lVar1 + 0x70);
    uVar7 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x118) = uVar12;
    *(undefined8 *)(lVar1 + 0x110) = uVar9;
    *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x120) = uVar7;
    uVar16 = *(undefined8 *)(lVar1 + 0x58);
    uVar14 = *(undefined8 *)(lVar1 + 0x50);
    uVar18 = *(undefined8 *)(lVar1 + 0x68);
    uVar17 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0xf8) = uVar16;
    *(undefined8 *)(lVar1 + 0xf0) = uVar14;
    *(undefined8 *)(lVar1 + 0x108) = uVar18;
    *(undefined8 *)(lVar1 + 0x100) = uVar17;
    uStack_38 = (undefined1)*(undefined8 *)(lVar1 + 0x88);
    uStack_37 = (undefined7)uVar3;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar1 + 0xa0) = uVar4;
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    uVar11 = *(undefined8 *)(lVar2 + 0x50);
    uVar15 = *(undefined8 *)(lVar2 + 0x59);
    *(undefined8 *)(lVar1 + 0xe1) = *(undefined8 *)(lVar2 + 0x61);
    *(undefined8 *)(lVar1 + 0xd9) = uVar15;
    *(undefined8 *)(lVar1 + 200) = uVar10;
    *(undefined8 *)(lVar1 + 0xc0) = uVar8;
    *(undefined8 *)(lVar1 + 0xd8) = uVar13;
    *(undefined8 *)(lVar1 + 0xd0) = uVar11;
    *(undefined8 *)(lVar1 + 0xb8) = uVar6;
    *(undefined8 *)(lVar1 + 0xb0) = uVar4;
    func_0x00186998(lVar1 + 0xf0,lVar1 + 0x140);
    func_0x00191ff4(lVar1 + 0xa0,0xaefe90,&UNK_007e1580);
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar9;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(uStack_37,uStack_38);
    *(undefined8 *)(lVar2 + 0x50) = uVar7;
    *(undefined8 *)(lVar2 + 0x61) = uVar5;
    *(undefined8 *)(lVar2 + 0x59) = uVar3;
    *(undefined8 *)(lVar2 + 0x28) = uVar16;
    *(undefined8 *)(lVar2 + 0x20) = uVar14;
    *(undefined8 *)(lVar2 + 0x38) = uVar18;
    *(undefined8 *)(lVar2 + 0x30) = uVar17;
    func_0x001869cc(lVar1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar1);
  return;
}



/* Entry: 00151428; end: 0015154b;  */

bool FUN_00151428(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_170 [80];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_48 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_3f = *(undefined8 *)(unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_120 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_d8 = *(undefined1 *)(unaff_x20 + 0x68);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar1 = 0xaefe90;
    puVar2 = &UNK_007e1580;
    func_0x00187028(&lStack_80,auStack_170,0xaefe90,&UNK_007e1580);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_d8 = *(undefined1 *)(unaff_x20 + 0x68);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8f = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    lStack_120 = lVar3;
    func_0x00187028(&lStack_80,auStack_170,0xaefe90,&UNK_007e1580);
    uVar1 = 0xaf07b0;
    puVar2 = &UNK_007daf80;
  }
  func_0x00191ff4(&lStack_120,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 0015154c; end: 00151583;  */

void FUN_0015154c(void)

{
  long unaff_x20;
  
  func_0x00191ff4(unaff_x20 + 0x20,0xaefe90,&UNK_007e1580);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x61) = 0;
  *(undefined8 *)(unaff_x20 + 0x59) = 0;
  return;
}



/* Entry: 00151584; end: 001515b3;  */

undefined1  [16] FUN_00151584(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001515b4; end: 001515e7;  */

void FUN_001515b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001515e8; end: 0015172f;  */

undefined8 FUN_001515e8(void)

{
  return 0x1515f8;
}



/* Entry: 00151730; end: 0015175b;  */

undefined1  [16] FUN_00151730(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 0015175c; end: 0015178f;  */

void FUN_0015175c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00151790; end: 001517db;  */

undefined8 FUN_00151790(void)

{
  return 0x1517a0;
}



/* Entry: 001517dc; end: 00151803;  */

void FUN_001517dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}


