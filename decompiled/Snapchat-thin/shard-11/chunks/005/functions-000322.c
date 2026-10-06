/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10861a274; end: 10861a2b7; -[SCNMessagingBuildAdRequestCallback .cxx_construct] */

undefined8 * FUN_10861a274(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10861a3c8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10861a2b8; end: 10861a32b;  */

void FUN_10861a2b8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5bc88;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10861a3c8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10861a32c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861a3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861a32c; end: 10861a39b;  */

void FUN_10861a32c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da8b8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10861a3c8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10861a39c(&uStack_30);
  return;
}



/* Entry: 10861a39c; end: 10861a3c7;  */

long FUN_10861a39c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10861a3c8; end: 10861a403;  */

void FUN_10861a3c8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10861a404; end: 10861a437;  */

void FUN_10861a404(void)

{
  _objc_alloc(PTR_PTR_1126da8c0);
  func_0x00010c030540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861a438; end: 10861a4fb;  */

void FUN_10861a438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010bf24a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2874c(&uStack_50);
  uVar3 = param_2;
  func_0x00010bf5f440();
  func_0x00010bf24b60();
  uVar1 = uStack_40;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = param_2;
  func_0x000107c27914(&uStack_50);
  _objc_release(uVar2);
  FUN_10861a570();
  return;
}



/* Entry: 10861a4fc; end: 10861a56f;  */

void FUN_10861a4fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126be798;
  _objc_alloc(PTR_PTR_1126be798);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9a80(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  FUN_10861a570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861a570; end: 10861a577;  */

void FUN_10861a570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861a578; end: 10861a5ab;  */

void FUN_10861a578(void)

{
  _objc_alloc(PTR_PTR_1126da8c8);
  func_0x00010c04bee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861a5ac; end: 10861a663;  */

void FUN_10861a5ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5bce0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10861a664);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10861a8e0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10861a664; end: 10861a767;  */

void FUN_10861a664(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5bd20;
  puVar4[3] = &PTR_DAT_1107e85d8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5bd70;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10861a8e0(&uStack_50);
  return;
}



/* Entry: 10861a768; end: 10861a76b;  */

void FUN_10861a768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5bd20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861a76c; end: 10861a77f;  */

void FUN_10861a76c(void)

{
  FUN_10861a8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10861a780; end: 10861a78b;  */

long FUN_10861a780(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bce0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10861a78c; end: 10861a7fb;  */

void FUN_10861a78c(void)

{
  FUN_10861a90c();
  return;
}



/* Entry: 10861a7fc; end: 10861a83b;  */

void FUN_10861a7fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861a83c; end: 10861a8cf;  */

long FUN_10861a83c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bce0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10861a8d0; end: 10861a8df;  */

void FUN_10861a8d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5bd20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861a8e0; end: 10861a90b;  */

long FUN_10861a8e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10861a90c; end: 10861a917;  */

long FUN_10861a90c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bce0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10861a918; end: 10861aabb;  */

void FUN_10861a918(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  _objc_retain();
  func_0x00010bef4a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_78);
  uVar1 = param_2;
  func_0x00010c13b940(param_2);
  uVar2 = param_2;
  func_0x00010bfa3e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  uVar3 = param_2;
  func_0x00010bef5880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285bc(auStack_98);
  func_0x00010bf367c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_b8);
  uVar4 = param_2;
  func_0x00010bf2bf60(param_2);
  func_0x00010c078c20(param_2);
  func_0x0001006720bc(param_1,auStack_78,uVar1,uVar2 & 0xffffffffff,auStack_98,auStack_b8,uVar4,
                      param_2);
  func_0x000107c279a4(auStack_b8);
  func_0x0001006aae3c();
  func_0x000107c279dc(auStack_98);
  _objc_release(uVar3);
  func_0x0001006aae44();
  func_0x000107c27914(auStack_78);
  func_0x0001006aae4c();
  func_0x000107c319cc();
  return;
}



/* Entry: 10861aabc; end: 10861ab1b;  */

void FUN_10861aabc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da8d8;
  _objc_alloc(PTR_PTR_1126da8d8);
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032620(puVar1,param_2,param_1);
  FUN_10861ab1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861ab1c; end: 10861ab27;  */

void FUN_10861ab1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861ab28; end: 10861ab47;  */

ulong FUN_10861ab28(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10861ab48();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10861ab48; end: 10861ab7f;  */

undefined8 FUN_10861ab48(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x0001006a88e0();
  return param_1;
}



/* Entry: 10861ab80; end: 10861abfb;  */

void FUN_10861ab80(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_10861ac64();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    FUN_10862f33c(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    func_0x000107c27914(&uStack_40);
  }
  func_0x0001006d2228();
  return;
}



/* Entry: 10861abfc; end: 10861ac63;  */

void FUN_10861abfc(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_50 [48];
  
  FUN_10861ac64();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x30] = 0;
  }
  else {
    FUN_1086312b0(auStack_50);
    func_0x0001052811f4();
    func_0x000104be0e14(auStack_50);
  }
  func_0x0001006d2228();
  return;
}



/* Entry: 10861ac64; end: 10861ac6f;  */

void FUN_10861ac64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10861ac70; end: 10861ae33;  */

void FUN_10861ac70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28b680(param_2);
  uVar2 = param_2;
  func_0x00010c25e900(param_2);
  uVar3 = param_2;
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_80);
  uVar4 = param_2;
  func_0x00010c09dbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861ab80(auStack_a0);
  uVar5 = param_2;
  func_0x00010bf93e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861abfc(auStack_d8);
  uVar6 = param_2;
  func_0x00010bf1cf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086416dc(auStack_110);
  FUN_10861ae34(param_1,uVar1,uVar2,auStack_80,auStack_a0,auStack_d8,auStack_110);
  func_0x000107c279a4(auStack_100);
  _objc_release(uVar6);
  func_0x0001006b7bc8(auStack_d8);
  _objc_release(uVar5);
  func_0x0001006b7be8(auStack_a0);
  _objc_release(uVar4);
  func_0x000107c279c4(auStack_80);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10861ae34; end: 10861ae97;  */

undefined4 *
FUN_10861ae34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001006b78fc(param_1 + 2,param_4);
  func_0x0001006b7938(param_1 + 10,param_5);
  func_0x0001006b7b9c(param_1 + 0x12,param_6);
  FUN_10861ae98(param_1 + 0x20,param_7);
  return param_1;
}



/* Entry: 10861ae98; end: 10861aef3;  */

void FUN_10861ae98(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  uVar1 = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}



/* Entry: 10861aef4; end: 10861af6b;  */

void FUN_10861aef4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da900;
  _objc_alloc(PTR_PTR_1126da900);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004de0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  FUN_10861af6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861af6c; end: 10861af73;  */

void FUN_10861af6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861af74; end: 10861b01f;  */

void FUN_10861af74(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126da908;
  _objc_alloc(PTR_PTR_1126da908);
  lVar3 = param_1;
  func_0x00010863078c(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    param_1 = param_1 + 8;
    FUN_108640248(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c028aa0(puVar2,param_2,lVar3,(long)iVar1,param_1);
  func_0x00010861b0b8();
  func_0x00010861b0b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10861b020; end: 10861b04f;  */

undefined1 * FUN_10861b020(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10861b050();
  return param_1;
}



/* Entry: 10861b050; end: 10861b08f;  */

void FUN_10861b050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 10861b090; end: 10861b0af;  */

void FUN_10861b090(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b0b0; end: 10861b0c3;  */

void FUN_10861b0b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861b0c4; end: 10861b167;  */

void FUN_10861b0c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da910;
  _objc_alloc(PTR_PTR_1126da910);
  lVar2 = param_1;
  FUN_108634960(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    param_1 = param_1 + 0x18;
    FUN_1086402b4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c035ac0(puVar1,param_2,lVar2,param_1);
  func_0x00010861b25c();
  func_0x00010861b254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861b168; end: 10861b1a7;  */

undefined8 * FUN_10861b168(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10861b1a8(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10861b1a8; end: 10861b1d7;  */

undefined1 * FUN_10861b1a8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_10861b1d8();
  return param_1;
}



/* Entry: 10861b1d8; end: 10861b1eb;  */

void FUN_10861b1d8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10861b208();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10861b1ec; end: 10861b207;  */

void FUN_10861b1ec(long param_1)

{
  FUN_10861b208();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10861b208; end: 10861b233;  */

void FUN_10861b208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



/* Entry: 10861b234; end: 10861b253;  */

void FUN_10861b234(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b254; end: 10861b267;  */

void FUN_10861b254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861b268; end: 10861b343;  */

void FUN_10861b268(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126da918;
  _objc_alloc(PTR_PTR_1126da918);
  lVar3 = param_1;
  FUN_10863f3dc(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar4 = param_1 + 0x60;
    FUN_108640330(lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  param_1 = param_1 + 0x98;
  FUN_10861b344(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04da20(puVar2,param_2,lVar3,(long)iVar1,lVar4,param_1);
  func_0x00010861b99c();
  func_0x00010861b994();
  func_0x00010861b974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10861b344; end: 10861b3fb;  */

void FUN_10861b344(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x28);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    lVar3 = lVar4;
    FUN_10862478c(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x00010861b984();
  }
  func_0x00010bf51e00(puVar2);
  func_0x00010861b974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10861b3fc; end: 10861b463;  */

long FUN_10861b3fc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000105291934();
  *(undefined4 *)(lVar1 + 0x58) = param_3;
  FUN_10861b464(lVar1 + 0x60,param_4);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0xa0) = param_5[1];
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return param_1;
}



/* Entry: 10861b464; end: 10861b48f;  */

undefined1 * FUN_10861b464(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10861b490();
  return param_1;
}



/* Entry: 10861b490; end: 10861b4a3;  */

void FUN_10861b490(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10861b4c0();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10861b4a4; end: 10861b4bf;  */

void FUN_10861b4a4(long param_1)

{
  FUN_10861b4c0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10861b4c0; end: 10861b4fb;  */

void FUN_10861b4c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10861b4fc; end: 10861b56b;  */

undefined8 FUN_10861b4fc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010861b530(&uStack_28);
  return param_1;
}



/* Entry: 10861b56c; end: 10861b573;  */

void FUN_10861b56c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10861b574; end: 10861b5ab;  */

void FUN_10861b574(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10861b5ac; end: 10861b5cb;  */

void FUN_10861b5ac(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10861b5cc();
  }
  return;
}



/* Entry: 10861b5cc; end: 10861b5f3;  */

void FUN_10861b5cc(long param_1)

{
  func_0x0001006994c8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10861b5f4; end: 10861b607;  */

void FUN_10861b5f4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x28) * 0x28;
  FUN_10861b730(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10861b608; end: 10861b693;  */

void FUN_10861b608(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10861b730(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10861b694; end: 10861b703;  */

long * FUN_10861b694(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010861b6e0();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10861b704; end: 10861b72f;  */

void FUN_10861b704(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x28) {
    FUN_10861b804(param_4,uVar1);
    param_4 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  FUN_10861b7d4(param_1,param_2,param_3);
  FUN_10861b838(&uStack_70);
  return;
}



/* Entry: 10861b730; end: 10861b7d3;  */

void FUN_10861b730(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    FUN_10861b804(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_10861b7d4(param_1,param_2,param_3);
  FUN_10861b838(&uStack_60);
  return;
}



/* Entry: 10861b7d4; end: 10861b803;  */

void FUN_10861b7d4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b804; end: 10861b837;  */

void FUN_10861b804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_2[3];
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)((long)param_2 + 0x1d);
  param_1[3] = uVar1;
  return;
}



/* Entry: 10861b838; end: 10861b867;  */

long FUN_10861b838(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10861b868(param_1);
  }
  return param_1;
}



/* Entry: 10861b868; end: 10861b887;  */

void FUN_10861b868(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b888; end: 10861b8e3;  */

void FUN_10861b888(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b8e4; end: 10861b8eb;  */

void FUN_10861b8e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b8ec; end: 10861b923;  */

void FUN_10861b8ec(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10861b924; end: 10861b973;  */

ulong FUN_10861b924(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x666666666666666 < param_2) {
    FUN_10861b5f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    uVar2 = 0x666666666666666;
  }
  return uVar2;
}



/* Entry: 10861b974; end: 10861b9af;  */

void FUN_10861b974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861b9b0; end: 10861ba5f;  */

void FUN_10861b9b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5bde8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10861ba60);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10861bd08(&uStack_50);
  }
  func_0x000107c319e4();
  return;
}



/* Entry: 10861ba60; end: 10861bb5f;  */

void FUN_10861ba60(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5be28;
  puVar4[3] = &PTR_DAT_110a5bea8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5be78;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10861bd08(&uStack_50);
  return;
}



/* Entry: 10861bb60; end: 10861bb63;  */

void FUN_10861bb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5be28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861bb64; end: 10861bb77;  */

void FUN_10861bb64(void)

{
  FUN_10861bcf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10861bb78; end: 10861bb83;  */

long FUN_10861bb78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bde8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x0001006a7df0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10861bb84; end: 10861bbc3;  */

void FUN_10861bb84(void)

{
  func_0x00010861bd40();
  return;
}



/* Entry: 10861bbc4; end: 10861bc2f;  */

void FUN_10861bbc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c285c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3160(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861bc30; end: 10861bc67;  */

void FUN_10861bc30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861bc68; end: 10861bcf7;  */

long FUN_10861bc68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bde8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x0001006a7df0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10861bcf8; end: 10861bd07;  */

void FUN_10861bcf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5be28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861bd08; end: 10861bd33;  */

long FUN_10861bd08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10861bd34; end: 10861bd4f;  */

void FUN_10861bd34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10861bd50; end: 10861bd63;  */

void FUN_10861bd50(void)

{
  FUN_10861c008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10861bd64; end: 10861bd6f;  */

long FUN_10861bd64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bf20;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x0001006ae25c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10861bd70; end: 10861bdaf;  */

void FUN_10861bd70(void)

{
  func_0x00010861c020();
  return;
}



/* Entry: 10861bdb0; end: 10861be43;  */

void FUN_10861bdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006abecc(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861bf78(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5260(uVar2);
  func_0x0001006ae25c();
  func_0x000107c319ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861be44; end: 10861bee7;  */

void FUN_10861be44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108631934(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5280(uVar2);
  func_0x000107c319fc();
  func_0x000107c319ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861bee8; end: 10861bf77;  */

long FUN_10861bee8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5bf20;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x0001006ae25c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10861bf78; end: 10861c007;  */

void FUN_10861bf78(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001006abeb4();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_10862f3ac(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001006ae24c();
    func_0x0001006ae25c();
  }
  func_0x00010bf51e00(param_1);
  func_0x000107c319ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10861c008; end: 10861c02b;  */

void FUN_10861c008(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5bf60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861c02c; end: 10861c0a3; -[SCNMessagingContentManagerHydrationCompleteCallback initWithCpp:] */

undefined1 * FUN_10861c02c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd268;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10861c344();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10861c318(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10861c0a4; end: 10861c167; -[SCNMessagingContentManagerHydrationCompleteCallback onContentManagerHydrationComplete:] */

void FUN_10861c0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c281ac(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x000107c278a8(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10861c168; end: 10861c193;  */

void FUN_10861c168(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10861c22c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861c194; end: 10861c1e7; -[SCNMessagingContentManagerHydrationCompleteCallback .cxx_destruct] */

void FUN_10861c194(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c000;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10861c318((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10861c1e8; end: 10861c22b; -[SCNMessagingContentManagerHydrationCompleteCallback .cxx_construct] */

undefined8 * FUN_10861c1e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10861c344();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10861c22c; end: 10861c2a3;  */

void FUN_10861c22c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c000;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10861c344();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10861c2a4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861c2a4; end: 10861c317;  */

void FUN_10861c2a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da920;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10861c344();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10861c318(&uStack_30);
  return;
}


