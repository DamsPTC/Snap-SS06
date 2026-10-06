/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101427d4c; end: 101427d9f;  */

undefined8 * FUN_101427d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101427da0; end: 101427e43;  */

int FUN_101427da0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101427e44; end: 101427e63;  */

void FUN_101427e44(void)

{
  func_0x000107c61168(&PTR_PTR_1127d5210);
  return;
}



/* Entry: 101427e64; end: 101427ff3; +[_TtC21FBSDKCoreKitSwiftShim21FBSDKCoreKitSwiftShim application:openURL:sourceApplication:annotation:] */

uint FUN_101427e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar4,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  uVar2 = 0;
  func_0x000101428080(0);
  uVar3 = 0x112d7ec18;
  FUN_1014284b8(0x112d7ec18,&UNK_10d93cc64);
  func_0x000107c5f9e8(param_6,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  func_0x0001049a8368(0);
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x0001049a1f14();
  uVar3 = 0x112d7ebc8;
  func_0x0001000285a8(0x112d7ebc8,&UNK_10d93cb90);
  auStack_80[0] = param_6;
  uStack_68 = uVar3;
  func_0x000107c61434(param_6);
  uVar3 = param_3;
  func_0x0001049a3d7c(param_3,lVar4,param_5,param_2,auStack_80);
  func_0x000107c6142c(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  func_0x00010006e7f4(auStack_80);
  return (uint)uVar3 & 1;
}



/* Entry: 101427ff4; end: 101428013;  */

void FUN_101427ff4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d52d0);
  return;
}



/* Entry: 101428014; end: 10142804f; -[_TtC21FBSDKCoreKitSwiftShim21FBSDKCoreKitSwiftShim init] */

void FUN_101428014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101427ff4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101428050; end: 1014280cf;  */

void FUN_101428050(void)

{
  FUN_101427ff4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014280d0; end: 1014280d7;  */

void FUN_1014280d0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1014280d8; end: 101428207;  */

void FUN_1014280d8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101428208; end: 10142827f;  */

undefined8 FUN_101428208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101428280; end: 1014283b7;  */

undefined1 * FUN_101428280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1014283b8; end: 1014283df;  */

void FUN_1014283b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1014283e0; end: 10142844b;  */

void FUN_1014283e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d7ec18;
  FUN_1014284b8(0x112d7ec18,&UNK_10d93cc64);
  uVar2 = 0x112d7ec20;
  FUN_1014284b8(0x112d7ec20,&UNK_10dd494f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10142844c; end: 1014284b7;  */

void FUN_10142844c(void)

{
  FUN_1014284b8(0x112d7ec00,&UNK_10d93cbf8);
  return;
}



/* Entry: 1014284b8; end: 1014284f7;  */

void FUN_1014284b8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000101428080(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1014284f8; end: 101428517;  */

void FUN_1014284f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d5430);
  return;
}



/* Entry: 101428518; end: 101428557; -[_TtC16VoldemortService16VoldemortFactory build] */

void FUN_101428518(void)

{
  FUN_1014284f8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101428558; end: 10142855b; -[_TtC16VoldemortServiceP33_F79D0DE7D2E3B8186CBCA4952123294613VoldemortStub crashIfCursed] */

void FUN_101428558(void)

{
  return;
}



/* Entry: 10142855c; end: 101428597;  */

void FUN_10142855c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101428598; end: 101428627; -[_TtC16VoldemortService13VoldemortImpl crashIfCursed] */

void FUN_101428598(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar2 = param_1;
  FUN_101428960();
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x0001048d9980(0x100000000000002c,0x800000010ef3ea90);
  func_0x000107c60450("Fatal error",0xb,2,0x100000000000002c,0x800000010ef3ea90,
                      "Libraries/Voldemort/Voldemort/Sources/Voldemort.swift",0x35,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101428628);
  (*pcVar1)();
}



/* Entry: 101428628; end: 1014287cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101428628(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  undefined1 auStack_d8 [24];
  code *apcStack_c0 [3];
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  long *aplStack_78 [7];
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112d7ec78) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7ec80);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar3 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61428(0x112d7ecc0,auStack_a0,0,0);
  puVar3[_DAT_112d7ec78] = uRam0000000112d7ecc0;
  func_0x000107c61428(0x112d7ecc0,apcStack_c0,0x21,0);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d7ecb0,&UNK_10d93cd50);
  func_0x0001040ac72c(aplStack_78);
  func_0x000107c614a8(apcStack_c0);
  func_0x000107c6157c(aplStack_78[0]);
  FUN_101428f0c(aplStack_78,0x112d7ecb8,&UNK_10d93cd58);
  puVar4 = &UNK_1103b5d28;
  func_0x000107c613fc(&UNK_1103b5d28,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  func_0x000107c61170(puVar3);
  pcVar5 = FUN_101428958;
  (**(code **)(*aplStack_78[0] + 0x60))(FUN_101428958,puVar4);
  func_0x000107c61574(aplStack_78[0]);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar5;
  func_0x000107c614f0();
  lVar2 = _DAT_112d7ec80;
  apcStack_c0[0] = pcVar5;
  pcStack_a8 = pcVar6;
  func_0x000107c61428(puVar3 + _DAT_112d7ec80,auStack_d8,0x21,0);
  FUN_100f72e88(apcStack_c0,puVar3 + lVar2);
  func_0x000107c614a8(auStack_d8);
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 1014287cc; end: 1014288af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014287cc(char *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if ((lVar3 == 0) ||
     (cVar2 = *(char *)(lVar3 + _DAT_112d7ec78), func_0x000107c61170(), cVar2 != cVar1)) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    lVar3 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      *(char *)(lVar3 + _DAT_112d7ec78) = cVar1;
      func_0x000107c61170();
    }
    if (cVar1 == '\0') {
      func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      func_0x000101428cc4();
    }
    else {
      func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      func_0x000101428b0c();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1014288b0; end: 1014288cf; -[_TtC16VoldemortService13VoldemortImpl init] */

void FUN_1014288b0(void)

{
  FUN_101428628();
  return;
}



/* Entry: 1014288d0; end: 1014288d3;  */

void FUN_1014288d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014288d4; end: 101428907;  */

void FUN_1014288d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101428908; end: 101428957; -[_TtC16VoldemortService13VoldemortImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101428908(long param_1)

{
  FUN_101428f0c(param_1 + _DAT_112d7ec80,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 101428958; end: 10142895f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101428958(char *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if ((lVar3 == 0) ||
     (cVar2 = *(char *)(lVar3 + _DAT_112d7ec78), func_0x000107c61170(), cVar2 != cVar1)) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      *(char *)(lVar3 + _DAT_112d7ec78) = cVar1;
      func_0x000107c61170();
    }
    if (cVar1 == '\0') {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
      func_0x000101428cc4();
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
      func_0x000101428b0c();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101428960; end: 101428f0b;  */

undefined * FUN_101428960(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)&puStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar2 = puVar5;
  func_0x000107c415e0();
  func_0x000107c61180();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar5;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar5 + 0x10) == 0) {
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(puVar2);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar5 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    (**(code **)(lVar6 + 0x10))(lVar4,puVar3,lVar1);
    func_0x000107c6142c();
    func_0x000107c5edc4();
    (**(code **)(lVar6 + 8))(lVar4,lVar1);
    puStack_50 = puVar5;
    puStack_48 = puVar3;
    func_0x000107c5fb78(0x2f,0xe100000000000000);
    func_0x000107c5fb78(0x726f6d65646c6f76,0xef65737275632e74);
    puVar5 = puStack_48;
    puVar3 = puStack_50;
    func_0x000107c5fadc(puStack_50,puStack_48);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar2;
    func_0x000107c4a2d4(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return puVar5;
}



/* Entry: 101428f0c; end: 101428f4b;  */

undefined8 FUN_101428f0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101428f4c; end: 101428f4f; -[_TtC16VoldemortService16VoldemortFactory init] */

void FUN_101428f4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101428f50; end: 101428f5b; -[_TtC16VoldemortServiceP33_F79D0DE7D2E3B8186CBCA4952123294613VoldemortStub init] */

void FUN_101428f50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101428f5c; end: 101428f97; -[_TtC17ParamedicRecovery20ParamedicPushManager init] */

void FUN_101428f5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101428f98; end: 101428feb;  */

void FUN_101428f98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101428fec; end: 101429493;  */

/* WARNING: Removing unreachable block (ram,0x000101429330) */
/* WARNING: Removing unreachable block (ram,0x000101429418) */
/* WARNING: Removing unreachable block (ram,0x000101429364) */
/* WARNING: Removing unreachable block (ram,0x00010142941c) */

undefined * FUN_101428fec(void)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  undefined1 auStack_1d8 [72];
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined2 uStack_182;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c43fd4();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_1014291a0:
    FUN_1014294d4(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar5 = puVar4;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
    }
    else {
      func_0x000107c60234(&uStack_130);
      func_0x000107c615e8(puVar5);
    }
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    lStack_78 = lStack_118;
    uStack_80 = uStack_120;
    if (lStack_118 == 0) goto LAB_1014291a0;
    plVar6 = &lStack_a0;
    func_0x000107c6147c(plVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,
                        PTR___s10Foundation4DataVN_110350ae0,6);
    if (((ulong)plVar6 & 1) != 0) {
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_128 = 0xc000000000000000;
      uStack_130 = 0;
      uStack_120 = 0;
      lStack_118 = 0;
      uStack_110 = 0;
      lStack_108 = 1;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uVar19 = (uint)(uStack_98 >> 0x20);
      uVar11 = uVar19 >> 0x1e;
      if (uVar19 >> 0x1e < 2) {
        if (uVar11 == 0) {
          uStack_190._0_1_ = (undefined1)lStack_a0;
          uStack_190._1_1_ = (undefined1)((ulong)lStack_a0 >> 8);
          uStack_190._2_1_ = (undefined1)((ulong)lStack_a0 >> 0x10);
          uStack_190._3_1_ = (undefined1)((ulong)lStack_a0 >> 0x18);
          uStack_190._4_1_ = (undefined1)((ulong)lStack_a0 >> 0x20);
          uStack_190._5_1_ = (undefined1)((ulong)lStack_a0 >> 0x28);
          uStack_190._6_1_ = (undefined1)((ulong)lStack_a0 >> 0x30);
          uStack_190._7_1_ = (undefined1)((ulong)lStack_a0 >> 0x38);
          uStack_188 = (undefined1)uStack_98;
          uStack_187 = (undefined1)(uStack_98 >> 8);
          uStack_186 = (undefined1)(uStack_98 >> 0x10);
          uStack_185 = (undefined1)(uStack_98 >> 0x18);
          uStack_184 = (undefined1)(uStack_98 >> 0x20);
          uStack_183 = (undefined1)(uStack_98 >> 0x28);
          puVar9 = (undefined8 *)((long)&uStack_190 + (uStack_98 >> 0x30 & 0xff));
          FUN_101429494();
          plVar7 = &uStack_190;
        }
        else {
          lVar20 = (long)(int)lStack_a0;
          plVar7 = (long *)((lStack_a0 >> 0x20) - lVar20);
          if (lStack_a0 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101429484);
            (*pcVar2)();
          }
          plVar8 = (long *)(uStack_98 & 0x3fffffffffffffff);
          func_0x000107c6157c();
          func_0x000107c5ec30();
          if (plVar8 != (long *)0x0) {
            plVar6 = plVar8;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar20,(long)plVar6)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101429490);
              (*pcVar2)();
            }
            plVar8 = (long *)((lVar20 - (long)plVar6) + (long)plVar8);
            func_0x000107c5ec38();
            plVar1 = plVar6;
            if ((long)plVar7 <= (long)plVar6) {
              plVar1 = plVar7;
            }
            puVar12 = (undefined8 *)((long)plVar1 + (long)plVar8);
            bVar3 = plVar8 == (long *)0x0;
            plVar7 = (long *)0x0;
            if (!bVar3) {
              plVar7 = plVar8;
            }
            goto LAB_1014292bc;
          }
          func_0x000107c5ec38();
          plVar7 = (long *)0x0;
          plVar6 = plVar8;
          puVar9 = (undefined8 *)0x0;
LAB_1014292c0:
          FUN_101429494();
        }
      }
      else {
        if (uVar11 == 2) {
          lVar20 = *(long *)(lStack_a0 + 0x10);
          lVar13 = *(long *)(lStack_a0 + 0x18);
          func_0x000107c6157c(lStack_a0);
          plVar7 = (long *)(uStack_98 & 0x3fffffffffffffff);
          func_0x000107c6157c();
          func_0x000107c5ec30();
          plVar6 = plVar7;
          if (plVar7 != (long *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar20,(long)plVar6)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10142948c);
              (*pcVar2)();
            }
            plVar7 = (long *)((lVar20 - (long)plVar6) + (long)plVar7);
          }
          plVar8 = (long *)(lVar13 - lVar20);
          if (SBORROW8(lVar13,lVar20)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101429488);
            (*pcVar2)();
          }
          func_0x000107c5ec38();
          plVar1 = plVar6;
          if ((long)plVar8 <= (long)plVar6) {
            plVar1 = plVar8;
          }
          puVar12 = (undefined8 *)((long)plVar1 + (long)plVar7);
          bVar3 = plVar7 == (long *)0x0;
LAB_1014292bc:
          puVar9 = (undefined8 *)0x0;
          if (!bVar3) {
            puVar9 = puVar12;
          }
          goto LAB_1014292c0;
        }
        FUN_101429494();
        uStack_190._0_1_ = 0;
        uStack_190._1_1_ = 0;
        uStack_190._2_1_ = 0;
        uStack_190._3_1_ = 0;
        uStack_190._4_1_ = 0;
        uStack_190._5_1_ = 0;
        uStack_190._6_1_ = 0;
        uStack_190._7_1_ = 0;
        uStack_188 = 0;
        uStack_187 = 0;
        uStack_186 = 0;
        uStack_185 = 0;
        uStack_184 = 0;
        uStack_183 = 0;
        plVar7 = &uStack_190;
        puVar9 = &uStack_190;
      }
      func_0x00010006ae80(plVar7,puVar9,&uStack_d0,0,100,0,&UNK_1103b5f70,plVar6);
      func_0x00010006c090(lStack_a0,uStack_98);
      func_0x000107c61170(puVar4);
      func_0x00010006c090(lStack_a0,uStack_98);
      FUN_1014294d4(&uStack_d0,0x112d49548,&UNK_10d90fde0);
      lStack_168 = lStack_108;
      uStack_170 = uStack_110;
      uStack_158 = uStack_f8;
      uStack_160 = uStack_100;
      uStack_148 = uStack_e8;
      uStack_150 = uStack_f0;
      uStack_140 = uStack_e0;
      uStack_188 = (undefined1)uStack_128;
      uStack_187 = (undefined1)((ulong)uStack_128 >> 8);
      uStack_186 = (undefined1)((ulong)uStack_128 >> 0x10);
      uStack_185 = (undefined1)((ulong)uStack_128 >> 0x18);
      uStack_184 = (undefined1)((ulong)uStack_128 >> 0x20);
      uStack_183 = (undefined1)((ulong)uStack_128 >> 0x28);
      uStack_182 = (undefined2)((ulong)uStack_128 >> 0x30);
      uStack_190._0_1_ = (undefined1)uStack_130;
      uStack_190._1_1_ = (undefined1)((ulong)uStack_130 >> 8);
      uStack_190._2_1_ = (undefined1)((ulong)uStack_130 >> 0x10);
      uStack_190._3_1_ = (undefined1)((ulong)uStack_130 >> 0x18);
      uStack_190._4_1_ = (undefined1)((ulong)uStack_130 >> 0x20);
      uStack_190._5_1_ = (undefined1)((ulong)uStack_130 >> 0x28);
      uStack_190._6_1_ = (undefined1)((ulong)uStack_130 >> 0x30);
      uStack_190._7_1_ = (undefined1)((ulong)uStack_130 >> 0x38);
      lStack_178 = lStack_118;
      uStack_180 = uStack_120;
      func_0x000101429548(&uStack_180,auStack_1d8);
      func_0x000101429514(&uStack_190);
      if (lStack_168 == 1) {
        uVar19 = 0;
        lVar20 = 0;
        uVar10 = 0xc000000000000000;
        lVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
      }
      else {
        uVar19 = (uint)(byte)uStack_180;
        lVar20 = lStack_178;
        uVar10 = uStack_170;
        lVar13 = lStack_168;
        uVar14 = uStack_160;
        uVar15 = uStack_150;
        uVar16 = uStack_158;
        uVar17 = uStack_148;
        uVar18 = uStack_140;
      }
      func_0x00010006c090(lVar20,uVar10);
      func_0x000101429598(lVar13,uVar14,uVar16);
      func_0x000101429598(uVar15,uVar17,uVar18);
      goto LAB_1014291c4;
    }
  }
  func_0x000107c61170(puVar4);
  uVar19 = 0;
LAB_1014291c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined *)(ulong)(uVar19 & 1);
  }
  func_0x000107c60e78();
  if (puRam0000000112d7ed28 != (undefined *)0x0) {
    return puRam0000000112d7ed28;
  }
  puVar4 = &DAT_10d93cdf0;
  func_0x000107c61520(&DAT_10d93cdf0,&UNK_1103b5f70);
  puRam0000000112d7ed28 = puVar4;
  return puVar4;
}



/* Entry: 101429494; end: 1014294d3;  */

void FUN_101429494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ed28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d93cdf0;
  func_0x000107c61520(&DAT_10d93cdf0,&UNK_1103b5f70);
  puRam0000000112d7ed28 = puVar1;
  return;
}



/* Entry: 1014294d4; end: 1014295cb;  */

undefined8 FUN_1014294d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014295cc; end: 1014295d7; +[SCParamedicCrashLoopRecovery maybeAttemptCrashLoopRecoveryWithRecoveryAttempted:] */

void FUN_1014295cc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_d0 [8];
  code *pcStack_c8;
  uint uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  uStack_bc = param_3;
  func_0x000107c5eb08();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar15 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar17 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar18 - extraout_x12_00;
  puVar5 = &UNK_1103b5dd8;
  func_0x000107c613fc(&UNK_1103b5dd8,0x19,7);
  puVar14 = (ulong *)(puVar5 + 0x10);
  *puVar14 = 2;
  puVar5[0x18] = 2;
  if (cRam0000000112d7eef0 == '\x01') {
    bVar2 = false;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar5[0x18] = 2;
  }
  else {
    puVar6 = puVar5;
    FUN_101428fec();
    if (((ulong)puVar6 & 1) == 0) {
      if (lRam0000000112d7ed60 != -1) {
        func_0x000107c61568(0x112d7ed60,FUN_1014295e4);
      }
      func_0x000100028790(lVar3,0x1137ff420);
      FUN_10142b120();
      uVar7 = 1;
      lVar3 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,lVar4);
      if ((int)lVar3 == 1) {
        func_0x00010142b19c(lVar12,0x112d36580,&UNK_10d9016d0);
      }
      else {
        FUN_101429be8();
        func_0x000107c5ed9c(lVar18);
        func_0x000107c6142c(uVar7);
        pcStack_c8 = *(code **)(lVar13 + 8);
        (*pcStack_c8)(lVar12,lVar4);
        (**(code **)(lVar13 + 0x20))(lVar16,lVar18,lVar4);
        (**(code **)(lVar13 + 0x10))(lVar17,lVar16,lVar4);
        func_0x000107c5eaec(puVar15,0x404e000000000000,lVar17,0);
        func_0x000107c5eadc(0x4020000000000000);
        uVar7 = 1;
        func_0x000107c5ead4();
        func_0x000107c60f34();
        func_0x000107c60f38();
        puVar8 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
        func_0x000107c61168(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
        func_0x000107c5aa38();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5eae0();
        puVar6 = &UNK_1103b5e00;
        func_0x000107c613fc(&UNK_1103b5e00,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar7;
        uStack_88 = 0x10142b0fc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_1012d0a0c;
        puStack_90 = &UNK_1103b5e18;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar10);
        puVar6 = puStack_80;
        func_0x000107c6157c(puVar5);
        func_0x000107c61174(uVar7);
        func_0x000107c61574(puVar6);
        puVar6 = puVar8;
        func_0x000107c412c4(puVar8);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c50714(puVar6);
        func_0x000107c5ffb4();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar6);
        (**(code **)(lStack_b8 + 8))(puVar15,lStack_b0);
        (*pcStack_c8)(lVar16,lVar4);
      }
      bVar2 = false;
    }
    else {
      uVar7 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      uVar1 = puVar5[0x18];
      puVar5[0x18] = 2;
      FUN_10142b0e0(uVar7,uVar1);
      bVar2 = true;
    }
  }
  func_0x000107c61428(puVar14,&puStack_a8,0,0);
  if ((puVar5[0x18] == '\0') || ((puVar5[0x18] == '\x02' && (*puVar14 < 2)))) {
    func_0x0001000b625c(0);
    func_0x00010447270c();
    lVar3 = 0;
    func_0x00010006a41c();
    func_0x0001045322d8();
    if (lVar3 != 0) {
      func_0x0001045323f0();
      func_0x000107c61170(lVar3);
    }
    lVar3 = *(long *)(puVar5 + 0x10);
    if (puVar5[0x18] == '\0') {
      lVar4 = lVar3;
      func_0x000107c61434(lVar3);
      FUN_101429e00();
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c415e0();
      func_0x000107c61180();
      func_0x00010142a460(lVar3,lVar4,puVar6);
      func_0x000107c6142c(lVar4);
      func_0x000107c61170(puVar6);
      FUN_10142b0e0(lVar3,0);
    }
    else if (puVar5[0x18] != '\x01') {
      if (lVar3 == 0) {
        if (lRam0000000112d7ed68 != -1) {
          func_0x000107c61568(0x112d7ed68,0x101429650);
        }
        func_0x0001045343c4();
        uVar7 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        uVar11 = uVar7;
        FUN_101429e00();
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x00010142a1e4(uVar7,uVar11,puVar6);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(puVar6);
        if (bVar2) {
          puVar6 = PTR_PTR_1126b7870;
          func_0x000107c61168();
          func_0x000107c43fd4();
          func_0x000107c61180();
          if (puVar6 != (undefined *)0x0) {
            func_0x000107c4ff88();
            func_0x000107c61574(puVar5);
            goto LAB_10142b058;
          }
        }
      }
      else if (lVar3 == 1) {
        if ((uStack_bc & 1) == 0) {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343b8();
          uVar7 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          uVar11 = uVar7;
          func_0x000107c61538();
          func_0x000107c61538(uVar7,0x112d7ee30);
          uStack_78 = uVar11;
          FUN_10109a32c();
          uVar11 = uStack_78;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(uVar11);
        }
        else {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343c4();
          uVar11 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          uVar7 = uVar11;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
        }
        func_0x000107c6142c(uVar7);
LAB_10142b058:
        func_0x000107c61170(puVar6);
        return;
      }
    }
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1014295d8; end: 1014295e3; +[SCParamedicCrashLoopRecovery maybeAttemptSingleCrashRecovery] */

void FUN_1014295d8(void)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_d0 [8];
  code *pcStack_c8;
  uint uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_bc = 0;
  lVar3 = 0;
  func_0x000107c5eb08();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar15 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar17 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar18 - extraout_x12_00;
  puVar5 = &UNK_1103b5dd8;
  func_0x000107c613fc(&UNK_1103b5dd8,0x19,7);
  puVar14 = (ulong *)(puVar5 + 0x10);
  *puVar14 = 2;
  puVar5[0x18] = 2;
  if (cRam0000000112d7eef0 == '\x01') {
    bVar2 = false;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar5[0x18] = 2;
  }
  else {
    puVar6 = puVar5;
    FUN_101428fec();
    if (((ulong)puVar6 & 1) == 0) {
      if (lRam0000000112d7ed60 != -1) {
        func_0x000107c61568(0x112d7ed60,FUN_1014295e4);
      }
      func_0x000100028790(lVar3,0x1137ff420);
      FUN_10142b120();
      uVar7 = 1;
      lVar3 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,lVar4);
      if ((int)lVar3 == 1) {
        func_0x00010142b19c(lVar12,0x112d36580,&UNK_10d9016d0);
      }
      else {
        FUN_101429be8();
        func_0x000107c5ed9c(lVar18);
        func_0x000107c6142c(uVar7);
        pcStack_c8 = *(code **)(lVar13 + 8);
        (*pcStack_c8)(lVar12,lVar4);
        (**(code **)(lVar13 + 0x20))(lVar16,lVar18,lVar4);
        (**(code **)(lVar13 + 0x10))(lVar17,lVar16,lVar4);
        func_0x000107c5eaec(puVar15,0x404e000000000000,lVar17,0);
        func_0x000107c5eadc(0x3fe0000000000000);
        uVar7 = 1;
        func_0x000107c5ead4();
        func_0x000107c60f34();
        func_0x000107c60f38();
        puVar8 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
        func_0x000107c61168(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
        func_0x000107c5aa38();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5eae0();
        puVar6 = &UNK_1103b5e00;
        func_0x000107c613fc(&UNK_1103b5e00,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar7;
        uStack_88 = 0x10142b0fc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_1012d0a0c;
        puStack_90 = &UNK_1103b5e18;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar10);
        puVar6 = puStack_80;
        func_0x000107c6157c(puVar5);
        func_0x000107c61174(uVar7);
        func_0x000107c61574(puVar6);
        puVar6 = puVar8;
        func_0x000107c412c4(puVar8);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c50714(puVar6);
        func_0x000107c5ffb4();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar6);
        (**(code **)(lStack_b8 + 8))(puVar15,lStack_b0);
        (*pcStack_c8)(lVar16,lVar4);
      }
      bVar2 = false;
    }
    else {
      uVar7 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      uVar1 = puVar5[0x18];
      puVar5[0x18] = 2;
      FUN_10142b0e0(uVar7,uVar1);
      bVar2 = true;
    }
  }
  func_0x000107c61428(puVar14,&puStack_a8,0,0);
  if ((puVar5[0x18] == '\0') || ((puVar5[0x18] == '\x02' && (*puVar14 < 2)))) {
    func_0x0001000b625c(0);
    func_0x00010447270c();
    lVar3 = 0;
    func_0x00010006a41c();
    func_0x0001045322d8();
    if (lVar3 != 0) {
      func_0x0001045323f0();
      func_0x000107c61170(lVar3);
    }
    lVar3 = *(long *)(puVar5 + 0x10);
    if (puVar5[0x18] == '\0') {
      lVar4 = lVar3;
      func_0x000107c61434(lVar3);
      FUN_101429e00();
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c415e0();
      func_0x000107c61180();
      func_0x00010142a460(lVar3,lVar4,puVar6);
      func_0x000107c6142c(lVar4);
      func_0x000107c61170(puVar6);
      FUN_10142b0e0(lVar3,0);
    }
    else if (puVar5[0x18] != '\x01') {
      if (lVar3 == 0) {
        if (lRam0000000112d7ed68 != -1) {
          func_0x000107c61568(0x112d7ed68,0x101429650);
        }
        func_0x0001045343c4();
        uVar7 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        uVar11 = uVar7;
        FUN_101429e00();
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x00010142a1e4(uVar7,uVar11,puVar6);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(puVar6);
        if (bVar2) {
          puVar6 = PTR_PTR_1126b7870;
          func_0x000107c61168();
          func_0x000107c43fd4();
          func_0x000107c61180();
          if (puVar6 != (undefined *)0x0) {
            func_0x000107c4ff88();
            func_0x000107c61574(puVar5);
            goto LAB_10142b058;
          }
        }
      }
      else if (lVar3 == 1) {
        if ((uStack_bc & 1) == 0) {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343b8();
          uVar7 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          uVar11 = uVar7;
          func_0x000107c61538();
          func_0x000107c61538(uVar7,0x112d7ee30);
          uStack_78 = uVar11;
          FUN_10109a32c();
          uVar11 = uStack_78;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(uVar11);
        }
        else {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343c4();
          uVar11 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          uVar7 = uVar11;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
        }
        func_0x000107c6142c(uVar7);
LAB_10142b058:
        func_0x000107c61170(puVar6);
        return;
      }
    }
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1014295e4; end: 10142968b;  */

void FUN_1014295e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x1137ff420);
  func_0x000107c5edd0(uVar1,0xd00000000000002e,0x800000010ef3ec10);
  return;
}



/* Entry: 10142968c; end: 101429b73;  */

/* WARNING: Removing unreachable block (ram,0x00010142992c) */

void FUN_10142968c(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte bVar15;
  long lVar16;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  ulong *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_230 [72];
  byte bStack_1e8;
  byte bStack_1e7;
  undefined6 uStack_1e6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [14];
  undefined2 uStack_192;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong auStack_140 [12];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0xe < param_2 >> 0x3c) {
    func_0x000107c61428(param_5 + 0x10,auStack_140,1,0);
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(param_5 + 0x10) = 2;
    uVar2 = *(undefined1 *)(param_5 + 0x18);
    *(undefined1 *)(param_5 + 0x18) = 2;
    FUN_10142b0e0(uVar7,uVar2);
    param_1 = param_6;
    func_0x000107c60f3c();
    goto LAB_101429978;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  auStack_140[1] = 0xc000000000000000;
  auStack_140[0] = 0;
  auStack_140[2] = 0;
  auStack_140[3] = 0;
  auStack_140[4] = 0;
  auStack_140[5] = 1;
  auStack_140[7] = 0;
  auStack_140[6] = 0;
  auStack_140[9] = 0;
  auStack_140[8] = 0;
  auStack_140[10] = 0;
  uVar3 = (uint)(param_2 >> 0x20);
  uStack_248 = 0xc000000000000000;
  uStack_250 = 0;
  uVar12 = uVar3 >> 0x1e;
  puVar10 = param_1;
  if (uVar3 >> 0x1e < 2) {
    if (uVar12 == 0) {
      auStack_1a0[0] = SUB81(param_1,0);
      auStack_1a0[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_1a0[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_1a0[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_1a0[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_1a0[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_1a0[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_1a0[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_1a0[8] = (undefined1)param_2;
      auStack_1a0[9] = (undefined1)(param_2 >> 8);
      auStack_1a0[10] = (undefined1)(param_2 >> 0x10);
      auStack_1a0[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_1a0[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_1a0[0xd] = (undefined1)(param_2 >> 0x28);
      puVar9 = auStack_1a0 + (param_2 >> 0x30 & 0xff);
      FUN_101429494();
      puVar8 = auStack_1a0;
    }
    else {
      lVar16 = (long)(int)param_1;
      puVar8 = (undefined1 *)(((long)param_1 >> 0x20) - lVar16);
      if ((long)param_1 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101429b64);
        (*pcVar5)();
      }
      puVar9 = (undefined1 *)(param_2 & 0x3fffffffffffffff);
      func_0x000107c6157c();
      func_0x000107c5ec30();
      if (puVar9 != (undefined1 *)0x0) {
        puVar10 = puVar9;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar16,(long)puVar10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101429b70);
          (*pcVar5)();
        }
        puVar9 = puVar9 + (lVar16 - (long)puVar10);
        func_0x000107c5ec38();
        puVar13 = puVar10;
        if ((long)puVar8 <= (long)puVar10) {
          puVar13 = puVar8;
        }
        puVar13 = puVar13 + (long)puVar9;
        bVar6 = puVar9 == (undefined1 *)0x0;
        puVar8 = (undefined1 *)0x0;
        if (!bVar6) {
          puVar8 = puVar9;
        }
        goto LAB_1014298ac;
      }
      func_0x000107c5ec38();
      puVar8 = (undefined1 *)0x0;
      puVar10 = puVar9;
      puVar9 = (undefined1 *)0x0;
LAB_1014298b0:
      FUN_101429494();
    }
  }
  else {
    if (uVar12 == 2) {
      lVar16 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x000107c6157c();
      puVar8 = (undefined1 *)(param_2 & 0x3fffffffffffffff);
      func_0x000107c6157c();
      func_0x000107c5ec30();
      puVar10 = puVar8;
      if (puVar8 != (undefined1 *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar16,(long)puVar10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101429b6c);
          (*pcVar5)();
        }
        puVar8 = puVar8 + (lVar16 - (long)puVar10);
      }
      puVar9 = (undefined1 *)(lVar1 - lVar16);
      if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101429b68);
        (*pcVar5)();
      }
      func_0x000107c5ec38();
      puVar13 = puVar10;
      if ((long)puVar9 <= (long)puVar10) {
        puVar13 = puVar9;
      }
      puVar13 = puVar13 + (long)puVar8;
      bVar6 = puVar8 == (undefined1 *)0x0;
LAB_1014298ac:
      puVar9 = (undefined1 *)0x0;
      if (!bVar6) {
        puVar9 = puVar13;
      }
      goto LAB_1014298b0;
    }
    FUN_101429494();
    auStack_1a0[0] = 0;
    auStack_1a0[1] = 0;
    auStack_1a0[2] = 0;
    auStack_1a0[3] = 0;
    auStack_1a0[4] = 0;
    auStack_1a0[5] = 0;
    auStack_1a0[6] = 0;
    auStack_1a0[7] = 0;
    auStack_1a0[8] = 0;
    auStack_1a0[9] = 0;
    auStack_1a0[10] = 0;
    auStack_1a0[0xb] = 0;
    auStack_1a0[0xc] = 0;
    auStack_1a0[0xd] = 0;
    puVar8 = auStack_1a0;
    puVar9 = auStack_1a0;
  }
  unaff_x20 = auStack_140;
  func_0x00010006ae80(puVar8,puVar9,&uStack_e0,0,100,0,&UNK_1103b5f70,puVar10);
  func_0x00010142b19c(&uStack_e0,0x112d49548,&UNK_10d90fde0);
  lStack_178 = auStack_140[5];
  uStack_180 = auStack_140[4];
  uStack_168 = auStack_140[7];
  uStack_170 = auStack_140[6];
  uStack_158 = auStack_140[9];
  uStack_160 = auStack_140[8];
  uStack_150 = auStack_140[10];
  auStack_1a0[8] = (undefined1)auStack_140[1];
  auStack_1a0[9] = (undefined1)(auStack_140[1] >> 8);
  auStack_1a0[10] = (undefined1)(auStack_140[1] >> 0x10);
  auStack_1a0[0xb] = (undefined1)(auStack_140[1] >> 0x18);
  auStack_1a0[0xc] = (undefined1)(auStack_140[1] >> 0x20);
  auStack_1a0[0xd] = (undefined1)(auStack_140[1] >> 0x28);
  uStack_192 = (undefined2)(auStack_140[1] >> 0x30);
  auStack_1a0[0] = (undefined1)auStack_140[0];
  auStack_1a0[1] = (undefined1)(auStack_140[0] >> 8);
  auStack_1a0[2] = (undefined1)(auStack_140[0] >> 0x10);
  auStack_1a0[3] = (undefined1)(auStack_140[0] >> 0x18);
  auStack_1a0[4] = (undefined1)(auStack_140[0] >> 0x20);
  auStack_1a0[5] = (undefined1)(auStack_140[0] >> 0x28);
  auStack_1a0[6] = (undefined1)(auStack_140[0] >> 0x30);
  auStack_1a0[7] = (undefined1)(auStack_140[0] >> 0x38);
  uStack_188 = auStack_140[3];
  uStack_190 = auStack_140[2];
  uVar4 = uStack_190;
  if (auStack_140[5] == 1) {
    uVar14 = 0;
    lStack_1d0 = 0;
    uStack_1a8 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1e0 = uStack_250;
    uStack_1d8 = uStack_248;
    bVar15 = 0;
  }
  else {
    uStack_190._1_1_ = (byte)(auStack_140[2] >> 8);
    uVar14 = auStack_140[2] & 0xff;
    lStack_1d0 = auStack_140[5];
    uStack_1a8 = auStack_140[10];
    uStack_1c8 = auStack_140[6];
    uStack_1c0 = auStack_140[7];
    uStack_1b8 = auStack_140[8];
    uStack_1b0 = auStack_140[9];
    uStack_1e0 = auStack_140[3];
    uStack_1d8 = auStack_140[4];
    bVar15 = uStack_190._1_1_;
  }
  bStack_1e8 = (byte)uVar14 & 1;
  bStack_1e7 = bVar15 & 1;
  uStack_b0 = CONCAT62(uStack_1e6,CONCAT11(bVar15,(byte)uVar14)) & 0xffffffffffff0101;
  uVar7 = 0x112d7ed30;
  puVar11 = &uStack_190;
  puVar10 = auStack_230;
  uStack_190 = uVar4;
  uStack_a8 = uStack_1e0;
  uStack_a0 = uStack_1d8;
  lStack_98 = lStack_1d0;
  uStack_90 = uStack_1c8;
  uStack_88 = uStack_1c0;
  uStack_80 = uStack_1b8;
  uStack_78 = uStack_1b0;
  uStack_70 = uStack_1a8;
  if ((uVar14 & 1) == 0) {
    func_0x00010142b120(puVar11,puVar10,0x112d7ed30,&UNK_10d93cde0);
    func_0x000101429514(auStack_1a0);
    func_0x00010142b168(&bStack_1e8);
  }
  else {
    func_0x00010142b120(puVar11,puVar10,0x112d7ed30,&UNK_10d93cde0);
    unaff_x20 = &uStack_b0;
    func_0x00010142c35c();
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000101429514(auStack_1a0);
      func_0x00010142b168(&bStack_1e8);
      if ((bVar15 & 1) == 0) {
        unaff_x20 = (ulong *)0x1;
        func_0x000107c61428(param_5 + 0x10,auStack_230,1,0);
        uVar7 = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(param_5 + 0x10) = 1;
      }
      else {
        func_0x000107c61428(param_5 + 0x10,auStack_230,1,0);
        uVar7 = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(param_5 + 0x10) = 0;
      }
      uVar2 = *(undefined1 *)(param_5 + 0x18);
      *(undefined1 *)(param_5 + 0x18) = 2;
    }
    else {
      func_0x00010142c308();
      func_0x000101429514(auStack_1a0);
      func_0x00010142b168(&bStack_1e8);
      func_0x00010006c090(puVar10,uVar7);
      func_0x000107c61428(param_5 + 0x10,auStack_230,1,0);
      uVar7 = *(undefined8 *)(param_5 + 0x10);
      *(ulong **)(param_5 + 0x10) = puVar11;
      uVar2 = *(undefined1 *)(param_5 + 0x18);
      *(undefined1 *)(param_5 + 0x18) = 0;
      unaff_x20 = puVar11;
    }
    FUN_10142b0e0(uVar7,uVar2);
  }
  func_0x000107c60f3c(param_6);
  func_0x0001000b44c0(param_1,param_2);
LAB_101429978:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_258 = FUN_101429b74;
  puVar10 = param_1;
  puStack_270 = unaff_x20;
  puStack_268 = param_6;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x000107c614f0();
  puStack_280 = param_1;
  puStack_278 = puVar10;
  func_0x000107c61154(&puStack_280,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101429b74; end: 101429baf; -[SCParamedicCrashLoopRecovery init] */

void FUN_101429b74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101429bb0; end: 101429be3;  */

void FUN_101429bb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101429be4; end: 101429be7; -[SCParamedicCrashLoopRecovery .cxx_destruct] */

void FUN_101429be4(void)

{
  return;
}



/* Entry: 101429be8; end: 101429dff;  */

undefined1  [16] FUN_101429be8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c51944();
  func_0x000107c61180();
  puVar9 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3e8d0);
  puVar4 = puVar2;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    uStack_78 = 0;
    puStack_80 = (undefined8 *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&puStack_80,puVar4);
    func_0x000107c615e8(puVar4);
  }
  puVar2 = PTR___sSSN_11034da80;
  puStack_58 = (undefined8 *)uStack_78;
  puStack_60 = puStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    ppuVar5 = &puStack_60;
    func_0x00010142b19c(ppuVar5,0x112d387f8,&UNK_10d902650);
  }
  else {
    ppuVar5 = &puStack_90;
    func_0x000107c6147c(ppuVar5,&puStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    puStack_60 = puStack_90;
    uVar3 = uStack_88;
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_101429d20;
  }
  puStack_60 = (undefined8 *)0x0;
  uVar3 = 0xe000000000000000;
LAB_101429d20:
  puStack_80 = (undefined8 *)0x2e;
  uStack_78 = 0xe100000000000000;
  puStack_90 = (undefined8 *)0x5f;
  uStack_88 = 0xe100000000000000;
  puStack_58 = (undefined8 *)uVar3;
  FUN_100e8b654();
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_90;
  func_0x000107c601fc(ppuVar6,ppuVar7,0,0,0,1,puVar2,puVar2,puVar2,ppuVar5,ppuVar5,ppuVar5);
  uVar8 = param_2;
  func_0x000107c5fb1c(puVar9,param_2);
  puVar2 = puVar9;
  func_0x000107c5fb5c();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c6142c(uVar8);
    uVar8 = 0xe400000000000000;
    puVar9 = (undefined *)0x646f7270;
  }
  puStack_60 = ppuVar6;
  puStack_58 = ppuVar7;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(puVar9,uVar8);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar8);
  auVar1._8_8_ = puStack_58;
  auVar1._0_8_ = puStack_60;
  return auVar1;
}



/* Entry: 101429e00; end: 10142a9bb;  */

undefined * FUN_101429e00(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)&lStack_c0 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ed50();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar8 = uVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar7 - extraout_x12_01;
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar6;
  func_0x000107c3ac48();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar2);
  if (*(long *)(puVar3 + 0x10) == 0) {
    func_0x000107c61170(puVar6);
    func_0x000107c6142c(puVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_b0 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
    pcStack_b8 = *(code **)(lVar10 + 0x10);
    (*pcStack_b8)(lVar7,puVar3 + uStack_b0,lVar1);
    func_0x000107c6142c(puVar3);
    pcVar11 = *(code **)(lVar10 + 0x20);
    (*pcVar11)(lVar13,lVar7,lVar1);
    lVar7 = lVar13;
    func_0x000107c5ff6c(lVar13,0,0,0,0);
    if (lVar7 == 0) {
      func_0x000107c61170(puVar6);
      (**(code **)(lVar10 + 8))(lVar13,lVar1);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_a8 = puVar6;
      lStack_a0 = lVar13;
      func_0x000107c5ff58(lVar8);
      func_0x000107c5ed4c(auStack_80);
      puVar2 = PTR___sypN_11034f1a8;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_68 != 0) {
        uVar4 = uVar9;
        func_0x000107c6147c(uVar9,auStack_80,puVar2 + 8,lVar1,6);
        if ((uVar4 & 1) == 0) {
          (**(code **)(lVar10 + 0x38))(uVar9,1,1,lVar1);
          func_0x00010142b19c(uVar9,0x112d36580,&UNK_10d9016d0);
        }
        else {
          (**(code **)(lVar10 + 0x38))(uVar9,0,1,lVar1);
          uVar4 = uVar12;
          (*pcVar11)(uVar12,uVar9,lVar1);
          func_0x000107c5ed84();
          if ((uVar4 & 1) == 0) {
            (*pcStack_b8)(lStack_98,uVar12,lVar1);
            puVar3 = puVar6;
            func_0x000107c61558();
            puVar5 = puVar6;
            if (((ulong)puVar3 & 1) == 0) {
              puVar5 = (undefined *)0x0;
              FUN_101023b20(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
            }
            uVar4 = *(ulong *)(puVar5 + 0x10);
            lVar13 = uVar4 + 1;
            puVar6 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
              lStack_c0 = lVar13;
              FUN_101023b20(puVar6,lVar13,1,puVar5);
              lVar13 = lStack_c0;
            }
            *(long *)(puVar6 + 0x10) = lVar13;
            (*pcVar11)(puVar6 + *(long *)(lVar10 + 0x48) * uVar4 + uStack_b0,lStack_98,lVar1);
          }
          (**(code **)(lVar10 + 8))(uVar12,lVar1);
        }
        func_0x000107c5ed4c(auStack_80);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puStack_a8);
      (**(code **)(lStack_90 + 8))(lVar8,lStack_88);
      (**(code **)(lVar10 + 8))(lStack_a0,lVar1);
    }
  }
  return puVar6;
}



/* Entry: 10142a9bc; end: 10142b0bf;  */

void FUN_10142a9bc(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_d0 [8];
  code *pcStack_c8;
  uint uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  uStack_bc = param_2;
  func_0x000107c5eb08();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar15 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar17 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar18 - extraout_x12_00;
  puVar5 = &UNK_1103b5dd8;
  func_0x000107c613fc(&UNK_1103b5dd8,0x19,7);
  puVar14 = (ulong *)(puVar5 + 0x10);
  *puVar14 = 2;
  puVar5[0x18] = 2;
  if (cRam0000000112d7eef0 == '\x01') {
    bVar2 = false;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar5[0x18] = 2;
  }
  else {
    puVar6 = puVar5;
    FUN_101428fec();
    if (((ulong)puVar6 & 1) == 0) {
      if (lRam0000000112d7ed60 != -1) {
        func_0x000107c61568(0x112d7ed60,FUN_1014295e4);
      }
      func_0x000100028790(lVar3,0x1137ff420);
      FUN_10142b120();
      uVar7 = 1;
      lVar3 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,lVar4);
      if ((int)lVar3 == 1) {
        func_0x00010142b19c(lVar12,0x112d36580,&UNK_10d9016d0);
      }
      else {
        FUN_101429be8();
        func_0x000107c5ed9c(lVar18);
        func_0x000107c6142c(uVar7);
        pcStack_c8 = *(code **)(lVar13 + 8);
        (*pcStack_c8)(lVar12,lVar4);
        (**(code **)(lVar13 + 0x20))(lVar16,lVar18,lVar4);
        (**(code **)(lVar13 + 0x10))(lVar17,lVar16,lVar4);
        func_0x000107c5eaec(puVar15,0x404e000000000000,lVar17,0);
        func_0x000107c5eadc(param_1);
        uVar7 = 1;
        func_0x000107c5ead4();
        func_0x000107c60f34();
        func_0x000107c60f38();
        puVar8 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
        func_0x000107c61168(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
        func_0x000107c5aa38();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5eae0();
        puVar6 = &UNK_1103b5e00;
        func_0x000107c613fc(&UNK_1103b5e00,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar7;
        uStack_88 = 0x10142b0fc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_1012d0a0c;
        puStack_90 = &UNK_1103b5e18;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar10);
        puVar6 = puStack_80;
        func_0x000107c6157c(puVar5);
        func_0x000107c61174(uVar7);
        func_0x000107c61574(puVar6);
        puVar6 = puVar8;
        func_0x000107c412c4(puVar8);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c50714(puVar6);
        func_0x000107c5ffb4();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar6);
        (**(code **)(lStack_b8 + 8))(puVar15,lStack_b0);
        (*pcStack_c8)(lVar16,lVar4);
      }
      bVar2 = false;
    }
    else {
      uVar7 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      uVar1 = puVar5[0x18];
      puVar5[0x18] = 2;
      FUN_10142b0e0(uVar7,uVar1);
      bVar2 = true;
    }
  }
  func_0x000107c61428(puVar14,&puStack_a8,0,0);
  if ((puVar5[0x18] == '\0') || ((puVar5[0x18] == '\x02' && (*puVar14 < 2)))) {
    func_0x0001000b625c(0);
    func_0x00010447270c();
    lVar3 = 0;
    func_0x00010006a41c();
    func_0x0001045322d8();
    if (lVar3 != 0) {
      func_0x0001045323f0();
      func_0x000107c61170(lVar3);
    }
    lVar3 = *(long *)(puVar5 + 0x10);
    if (puVar5[0x18] == '\0') {
      lVar4 = lVar3;
      func_0x000107c61434(lVar3);
      FUN_101429e00();
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c415e0();
      func_0x000107c61180();
      func_0x00010142a460(lVar3,lVar4,puVar6);
      func_0x000107c6142c(lVar4);
      func_0x000107c61170(puVar6);
      FUN_10142b0e0(lVar3,0);
    }
    else if (puVar5[0x18] != '\x01') {
      if (lVar3 == 0) {
        if (lRam0000000112d7ed68 != -1) {
          func_0x000107c61568(0x112d7ed68,0x101429650);
        }
        func_0x0001045343c4();
        uVar7 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        uVar11 = uVar7;
        FUN_101429e00();
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x00010142a1e4(uVar7,uVar11,puVar6);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(puVar6);
        if (bVar2) {
          puVar6 = PTR_PTR_1126b7870;
          func_0x000107c61168();
          func_0x000107c43fd4();
          func_0x000107c61180();
          if (puVar6 != (undefined *)0x0) {
            func_0x000107c4ff88();
            func_0x000107c61574(puVar5);
            goto LAB_10142b058;
          }
        }
      }
      else if (lVar3 == 1) {
        if ((uStack_bc & 1) == 0) {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343b8();
          uVar7 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          uVar11 = uVar7;
          func_0x000107c61538();
          func_0x000107c61538(uVar7,0x112d7ee30);
          uStack_78 = uVar11;
          FUN_10109a32c();
          uVar11 = uStack_78;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(uVar11);
        }
        else {
          if (lRam0000000112d7ed68 != -1) {
            func_0x000107c61568(0x112d7ed68,0x101429650);
          }
          func_0x0001045343c4();
          uVar11 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          uVar7 = uVar11;
          FUN_101429e00();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          func_0x00010142a1e4(uVar11,uVar7,puVar6);
          func_0x000107c61574(puVar5);
        }
        func_0x000107c6142c(uVar7);
LAB_10142b058:
        func_0x000107c61170(puVar6);
        return;
      }
    }
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 10142b0c0; end: 10142b0df;  */

void FUN_10142b0c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d5650);
  return;
}



/* Entry: 10142b0e0; end: 10142b11f;  */

void FUN_10142b0e0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10142b120; end: 10142b1db;  */

undefined8 FUN_10142b120(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10142b1dc; end: 10142b22b;  */

void FUN_10142b1dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d7eee8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d7eee0;
  func_0x00010002969c(0x112d7eee0,&UNK_10dccb030);
  puVar2 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
  func_0x000107c61520(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,uVar1);
  puRam0000000112d7eee8 = puVar2;
  return;
}



/* Entry: 10142b22c; end: 10142b26b;  */

undefined8 FUN_10142b22c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10142b26c; end: 10142b2b3;  */

void FUN_10142b26c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d93cf40,0x19,2);
  uRam00000001137ff448 = uStack_38;
  uRam00000001137ff440 = uStack_40;
  uRam00000001137ff458 = uStack_28;
  uRam00000001137ff450 = uStack_30;
  uRam00000001137ff468 = uStack_18;
  uRam00000001137ff460 = uStack_20;
  return;
}



/* Entry: 10142b2b4; end: 10142b367;  */

/* WARNING: Removing unreachable block (ram,0x00010142b364) */

void FUN_10142b2b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010142c294();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1103b6228,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10142b368; end: 10142b3c3;  */

void FUN_10142b368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10142b3c4();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10142b3c4; end: 10142b45b;  */

void FUN_10142b3c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_78 = *(long *)(param_1 + 0x28);
  if (lStack_78 != 1) {
    uStack_88 = *(undefined8 *)(param_1 + 0x18);
    uStack_90 = *(undefined8 *)(param_1 + 0x10);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010142c294();
    (*pcVar1)(&uStack_90,1,&UNK_1103b6228,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10142b45c; end: 10142b4a7;  */

void FUN_10142b45c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 10142b4a8; end: 10142b4d7;  */

undefined1  [16] FUN_10142b4a8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10142b4d8; end: 10142b50b;  */

void FUN_10142b4d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10142b50c; end: 10142b51f;  */

undefined8 FUN_10142b50c(void)

{
  return 0x10142b51c;
}



/* Entry: 10142b520; end: 10142b533;  */

void FUN_10142b520(void)

{
  FUN_10142b2b4();
  return;
}



/* Entry: 10142b534; end: 10142b57b;  */

void FUN_10142b534(void)

{
  FUN_10142b368();
  return;
}



/* Entry: 10142b57c; end: 10142b57f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10142b57c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10142b580; end: 10142b5b7;  */

uint FUN_10142b580(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10142c254();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10142b5b8; end: 10142b61f;  */

uint FUN_10142b5b8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10142b888(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10142b620; end: 10142b6bf;  */

/* WARNING: Possible PIC construction at 0x00010142b66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142b67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142b670) */
/* WARNING: Removing unreachable block (ram,0x00010142b680) */

void FUN_10142b620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d7ef38 != -1) {
    func_0x000107c61568(0x112d7ef38,FUN_10142b26c);
  }
  uVar5 = uRam00000001137ff468;
  uVar4 = uRam00000001137ff460;
  uVar3 = uRam00000001137ff458;
  uVar2 = uRam00000001137ff450;
  uVar1 = uRam00000001137ff448;
  *param_1 = uRam00000001137ff440;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10142b6c0; end: 10142b6fb;  */

void FUN_10142b6c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d7ef58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d7ef58,&UNK_10d93cf30);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10142b6fc; end: 10142b81f;  */

void FUN_10142b6fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10142b820; end: 10142b887;  */

uint FUN_10142b820(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10142b888(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10142b888; end: 10142baab;  */

uint FUN_10142b888(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_2e8 [72];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uVar3;
  
  lStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  lStack_1f0 = param_2[5];
  uStack_1f8 = param_2[4];
  uStack_108 = param_2[7];
  uStack_110 = param_2[6];
  uStack_1e0 = param_2[7];
  uStack_1e8 = param_2[6];
  uStack_f8 = param_2[9];
  uStack_100 = param_2[8];
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_118 = param_2[5];
  uStack_120 = param_2[4];
  uStack_200 = param_2[3];
  uStack_208 = param_2[2];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_1d0 = param_2[9];
  uStack_1d8 = param_2[8];
  uStack_a0 = param_1[10];
  uStack_f0 = param_2[10];
  uStack_180 = param_1[10];
  uStack_1c8 = param_2[10];
  uStack_178 = uStack_208;
  uStack_170 = uStack_200;
  uStack_168 = uStack_1f8;
  lStack_160 = lStack_1f0;
  uStack_158 = uStack_1e8;
  uStack_150 = uStack_1e0;
  uStack_148 = uStack_1d8;
  uStack_140 = uStack_1d0;
  uStack_138 = uStack_1c8;
  if (lStack_1a8 == 1) {
    if (lStack_1f0 == 1) {
      uStack_228 = param_1[7];
      uStack_230 = param_1[6];
      uStack_218 = param_1[9];
      uStack_220 = param_1[8];
      uStack_210 = param_1[10];
      uStack_248 = param_1[3];
      uStack_250 = param_1[2];
      lStack_238 = param_1[5];
      uStack_240 = param_1[4];
      func_0x000101429548(&uStack_e0,&uStack_90);
      func_0x000101429548(&uStack_130,&uStack_90);
      FUN_10142b22c(&uStack_250,0x112d7ed30,&UNK_10d93cde0);
LAB_10142ba84:
      uVar3 = *param_1;
      FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_10142ba90;
    }
LAB_10142b98c:
    uStack_250 = uStack_1c0;
    uStack_248 = uStack_1b8;
    uStack_240 = uStack_1b0;
    lStack_238 = lStack_1a8;
    uStack_230 = uStack_1a0;
    uStack_228 = uStack_198;
    uStack_220 = uStack_190;
    uStack_218 = uStack_188;
    uStack_210 = uStack_180;
    func_0x000101429548(&uStack_e0,&uStack_90);
    func_0x000101429548(&uStack_130,&uStack_90);
    FUN_10142b22c(&uStack_250,0x112d7ef30,&UNK_10d93cde8);
  }
  else {
    if (lStack_1f0 == 1) goto LAB_10142b98c;
    uStack_278 = param_2[7];
    uStack_280 = param_2[6];
    uStack_268 = param_2[9];
    uStack_270 = param_2[8];
    uStack_260 = param_2[10];
    uStack_298 = param_2[3];
    uStack_2a0 = param_2[2];
    uStack_288 = param_2[5];
    uStack_290 = param_2[4];
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_50 = param_1[10];
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    lStack_238 = uStack_288;
    uStack_230 = uStack_280;
    uStack_228 = uStack_278;
    uStack_220 = uStack_270;
    uStack_218 = uStack_268;
    uStack_210 = uStack_260;
    func_0x000101429548(&uStack_e0,auStack_2e8);
    func_0x000101429548(&uStack_130,auStack_2e8);
    puVar2 = &uStack_90;
    FUN_10142cbd0(puVar2,&uStack_250);
    FUN_10142b22c(&uStack_2a0,0x112d7ed30,&UNK_10d93cde0);
    FUN_10142b22c(&uStack_1c0,0x112d7ed30,&UNK_10d93cde0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10142ba84;
  }
  uVar1 = 0;
LAB_10142ba90:
  return uVar1 & 1;
}



/* Entry: 10142baac; end: 10142baeb;  */

void FUN_10142baac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93ce60;
  func_0x000107c61520(&UNK_10d93ce60,&UNK_1103b5f70);
  puRam0000000112d7ef40 = puVar1;
  return;
}



/* Entry: 10142baec; end: 10142bb0f;  */

void FUN_10142baec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142bb10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10142bb10; end: 10142bb4f;  */

void FUN_10142bb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93ce38;
  func_0x000107c61520(&UNK_10d93ce38,&UNK_1103b5f70);
  puRam0000000112d7ef48 = puVar1;
  return;
}



/* Entry: 10142bb50; end: 10142bb7b;  */

void FUN_10142bb50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142baac();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101429494();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10142bb7c; end: 10142bb7f;  */

void FUN_10142bb7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93cea0;
  func_0x000107c61520(&UNK_10d93cea0,&UNK_1103b5f70);
  puRam0000000112d7ef50 = puVar1;
  return;
}



/* Entry: 10142bb80; end: 10142bbbf;  */

void FUN_10142bb80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93cea0;
  func_0x000107c61520(&UNK_10d93cea0,&UNK_1103b5f70);
  puRam0000000112d7ef50 = puVar1;
  return;
}



/* Entry: 10142bbc0; end: 10142bc57;  */

long FUN_10142bbc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10142bc58; end: 10142bfff;  */

undefined8 * FUN_10142bc58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  plVar2 = param_2 + 5;
  lVar1 = *plVar2;
  if (lVar1 == 1) {
    uVar3 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
    uVar4 = param_2[2];
    lVar1 = *plVar2;
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[5] = lVar1;
    param_1[4] = uVar3;
  }
  else {
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    if (lVar1 == 0) {
      lVar1 = *plVar2;
      param_1[6] = param_2[6];
      param_1[5] = lVar1;
      param_1[7] = param_2[7];
    }
    else {
      param_1[5] = lVar1;
      uVar3 = param_2[6];
      uVar4 = param_2[7];
      func_0x000107c61434(lVar1);
      func_0x00010006c00c(uVar3,uVar4);
      param_1[6] = uVar3;
      param_1[7] = uVar4;
    }
    lVar1 = param_2[8];
    if (lVar1 == 0) {
      lVar1 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = lVar1;
      param_1[10] = param_2[10];
    }
    else {
      param_1[8] = lVar1;
      uVar3 = param_2[9];
      uVar4 = param_2[10];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[9] = uVar3;
      param_1[10] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 10142c000; end: 10142c033;  */

undefined8 FUN_10142c000(undefined8 param_1)

{
  FUN_10142d5cc();
  return param_1;
}



/* Entry: 10142c034; end: 10142c177;  */

undefined8 * FUN_10142c034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  plVar3 = param_1 + 5;
  if (*plVar3 == 1) {
LAB_10142c098:
    uVar1 = param_2[6];
    uVar5 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
    uVar2 = param_2[2];
    lVar4 = param_2[5];
    uVar1 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    *plVar3 = lVar4;
    param_1[4] = uVar1;
    return param_1;
  }
  lVar4 = param_2[5];
  if (lVar4 == 1) {
    func_0x00010142b168(param_1 + 2);
    goto LAB_10142c098;
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[5] != 0) {
    if (lVar4 != 0) {
      param_1[5] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar5 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      goto LAB_10142c12c;
    }
    FUN_10142c000(plVar3);
  }
  lVar4 = param_2[5];
  param_1[6] = param_2[6];
  *plVar3 = lVar4;
  param_1[7] = param_2[7];
LAB_10142c12c:
  plVar3 = param_1 + 8;
  if (*plVar3 != 0) {
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
      func_0x000107c6142c();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_10142c000(plVar3);
  }
  lVar4 = param_2[8];
  param_1[9] = param_2[9];
  *plVar3 = lVar4;
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 10142c178; end: 10142c253;  */

int FUN_10142c178(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 10142c254; end: 10142c2d3;  */

void FUN_10142c254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d93ce0c;
  func_0x000107c61520(&DAT_10d93ce0c,&UNK_1103b5f70);
  puRam0000000112d7ef60 = puVar1;
  return;
}



/* Entry: 10142c2d4; end: 10142c307;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10142c2d4(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10142c308; end: 10142c3e3;  */

undefined * FUN_10142c308(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(undefined **)(unaff_x20 + 0x18) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x18);
  }
  FUN_10142c2d4();
  return puVar1;
}



/* Entry: 10142c3e4; end: 10142c42b;  */

void FUN_10142c3e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d93d200,0x10,2);
  uRam00000001137ff478 = uStack_38;
  uRam00000001137ff470 = uStack_40;
  uRam00000001137ff488 = uStack_28;
  uRam00000001137ff480 = uStack_30;
  uRam00000001137ff498 = uStack_18;
  uRam00000001137ff490 = uStack_20;
  return;
}



/* Entry: 10142c42c; end: 10142c4af;  */

void FUN_10142c42c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x160))();
    }
  }
  return;
}



/* Entry: 10142c4b0; end: 10142c527;  */

void FUN_10142c4b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) == 0) ||
     ((**(code **)(param_6 + 0x100))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 10142c528; end: 10142c577;  */

undefined8 FUN_10142c528(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d7ef70;
  func_0x0001000285a8(0x112d7ef70,&UNK_10d93cf60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10142c578; end: 10142c5b7;  */

void FUN_10142c578(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 10142c5b8; end: 10142c5e7;  */

undefined1  [16] FUN_10142c5b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10142c5e8; end: 10142c61b;  */

void FUN_10142c5e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10142c61c; end: 10142c62f;  */

undefined1  [16] FUN_10142c61c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10142c62c;
  return auVar1;
}



/* Entry: 10142c630; end: 10142c667;  */

void FUN_10142c630(void)

{
  FUN_10142c42c();
  return;
}



/* Entry: 10142c668; end: 10142c66b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10142c668(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10142c66c; end: 10142c6a3;  */

uint FUN_10142c66c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010142dc3c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10142c6a4; end: 10142c6b7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010142d0ec) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10142c6a4(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  long lVar27;
  byte *unaff_x24;
  undefined8 *puVar28;
  byte *unaff_x25;
  undefined8 *puVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar26 = *param_1;
  lVar25 = param_1[1];
  uVar18 = param_1[2];
  lVar1 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  pbVar16 = (byte *)unaff_x20[2];
  lVar27 = *(long *)(lVar1 + 0x10);
  if (lVar27 != *(long *)(lVar26 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar27 != 0 && lVar1 != lVar26) {
    puVar28 = (undefined8 *)(lVar26 + 0x28);
    puVar29 = (undefined8 *)(lVar1 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar22 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar16 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar18 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (long *)((ulong)pbVar16 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar25,uVar18
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar25 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar10 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
      }
      if (lVar26 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar25;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar26;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar4[1] = bVar31;
        auVar4[0] = bVar30;
        auVar4[2] = bVar32;
        auVar4[3] = bVar33;
        auVar4[4] = bVar34;
        auVar4[5] = bVar35;
        auVar4[6] = bVar36;
        auVar4[7] = bVar37;
        auVar4[8] = bVar38;
        auVar4[9] = bVar39;
        auVar4[10] = bVar40;
        auVar4[0xb] = bVar41;
        auVar4[0xc] = bVar42;
        auVar4[0xd] = bVar43;
        auVar4[0xe] = bVar44;
        auVar4[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar25;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar26;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar3[1] = bVar31;
      auVar3[0] = bVar30;
      auVar3[2] = bVar32;
      auVar3[3] = bVar33;
      auVar3[4] = bVar34;
      auVar3[5] = bVar35;
      auVar3[6] = bVar36;
      auVar3[7] = bVar37;
      auVar3[8] = bVar38;
      auVar3[9] = bVar39;
      auVar3[10] = bVar40;
      auVar3[0xb] = bVar41;
      auVar3[0xc] = bVar42;
      auVar3[0xd] = bVar43;
      auVar3[0xe] = bVar44;
      auVar3[0xf] = bVar45;
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10142c6b8; end: 10142c757;  */

/* WARNING: Possible PIC construction at 0x00010142c704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142c714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142c708) */
/* WARNING: Removing unreachable block (ram,0x00010142c718) */

void FUN_10142c6b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d7ef78 != -1) {
    func_0x000107c61568(0x112d7ef78,FUN_10142c3e4);
  }
  uVar5 = uRam00000001137ff498;
  uVar4 = uRam00000001137ff490;
  uVar3 = uRam00000001137ff488;
  uVar2 = uRam00000001137ff480;
  uVar1 = uRam00000001137ff478;
  *param_1 = uRam00000001137ff470;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10142c758; end: 10142c793;  */

void FUN_10142c758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d7efd0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d7efd0,&UNK_10d93d1a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10142c794; end: 10142c897;  */

void FUN_10142c794(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10142c898; end: 10142c8b3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010142d0ec) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10142c898(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  long lVar27;
  byte *unaff_x24;
  undefined8 *puVar28;
  byte *unaff_x25;
  undefined8 *puVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar26 = *param_1;
  pbVar10 = (byte *)param_1[1];
  pbVar16 = (byte *)param_1[2];
  lVar1 = *param_2;
  lVar25 = param_2[1];
  uVar18 = param_2[2];
  lVar27 = *(long *)(lVar26 + 0x10);
  if (lVar27 != *(long *)(lVar1 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar27 != 0 && lVar26 != lVar1) {
    puVar28 = (undefined8 *)(lVar1 + 0x28);
    puVar29 = (undefined8 *)(lVar26 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar22 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar16 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar18 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar16 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar25,uVar18
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar25 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar10 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
      }
      if (lVar26 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar25;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar26;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar4[1] = bVar31;
        auVar4[0] = bVar30;
        auVar4[2] = bVar32;
        auVar4[3] = bVar33;
        auVar4[4] = bVar34;
        auVar4[5] = bVar35;
        auVar4[6] = bVar36;
        auVar4[7] = bVar37;
        auVar4[8] = bVar38;
        auVar4[9] = bVar39;
        auVar4[10] = bVar40;
        auVar4[0xb] = bVar41;
        auVar4[0xc] = bVar42;
        auVar4[0xd] = bVar43;
        auVar4[0xe] = bVar44;
        auVar4[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar25;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar26;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar3[1] = bVar31;
      auVar3[0] = bVar30;
      auVar3[2] = bVar32;
      auVar3[3] = bVar33;
      auVar3[4] = bVar34;
      auVar3[5] = bVar35;
      auVar3[6] = bVar36;
      auVar3[7] = bVar37;
      auVar3[8] = bVar38;
      auVar3[9] = bVar39;
      auVar3[10] = bVar40;
      auVar3[0xb] = bVar41;
      auVar3[0xc] = bVar42;
      auVar3[0xd] = bVar43;
      auVar3[0xe] = bVar44;
      auVar3[0xf] = bVar45;
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10142c8b4; end: 10142c8fb;  */

void FUN_10142c8b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d93d1b0,0x4f,2);
  uRam00000001137ff4a8 = uStack_38;
  uRam00000001137ff4a0 = uStack_40;
  uRam00000001137ff4b8 = uStack_28;
  uRam00000001137ff4b0 = uStack_30;
  uRam00000001137ff4c8 = uStack_18;
  uRam00000001137ff4c0 = uStack_20;
  return;
}


