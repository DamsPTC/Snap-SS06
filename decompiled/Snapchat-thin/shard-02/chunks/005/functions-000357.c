/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e6aedc; end: 101e6af53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e6aedc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113091b70);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return unaff_x20;
}



/* Entry: 101e6af54; end: 101e6afe3;  */

void FUN_101e6af54(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_101e6b104();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c4ca18(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614e8();
  func_0x000107c615f0(uVar3);
  func_0x000107c610f8();
  func_0x000107c4835c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e6afe4; end: 101e6afeb;  */

void FUN_101e6afe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_101e6b104();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ca18(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c614e8();
  func_0x000107c615f0(uVar3);
  func_0x000107c610f8();
  func_0x000107c4835c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e6afec; end: 101e6b00f;  */

/* WARNING: Possible PIC construction at 0x000101e6b000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6b004) */

void FUN_101e6afec(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101e6b010; end: 101e6b063;  */

void FUN_101e6b010(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e6b064; end: 101e6b103;  */

void FUN_101e6b064(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x0001000285a8(0x112e33d40,&UNK_10da1d2a0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_101e6b148;
  func_0x0001000bdd8c(FUN_101e6b148);
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  puVar3 = PTR_PTR_1126a9690;
  func_0x000107c610f8();
  func_0x000107c481bc();
  func_0x000107c61170(pcVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 101e6b104; end: 101e6b147;  */

void FUN_101e6b104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bfff0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e33e18 = puVar1;
  return;
}



/* Entry: 101e6b148; end: 101e6b14b;  */

void FUN_101e6b148(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_101e6b104();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ca18(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c614e8();
  func_0x000107c615f0(uVar3);
  func_0x000107c610f8();
  func_0x000107c4835c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e6b14c; end: 101e6b41f;  */

/* WARNING: Possible PIC construction at 0x000101e6b1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e6b22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e6b2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e6b2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6b230) */
/* WARNING: Removing unreachable block (ram,0x000101e6b234) */
/* WARNING: Removing unreachable block (ram,0x000101e6b2a8) */
/* WARNING: Removing unreachable block (ram,0x000101e6b264) */
/* WARNING: Removing unreachable block (ram,0x000101e6b1fc) */
/* WARNING: Removing unreachable block (ram,0x000101e6b2bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6b14c(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = _DAT_112e33e68;
  if (*(char *)(unaff_x20 + _DAT_112e33e60) == '\x01') {
    if ((param_1 & 1) != *(byte *)(unaff_x20 + _DAT_112e33e68)) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112e33e50);
      if (lVar1 != 0) {
        func_0x000107c61174();
        func_0x000107c59adc();
        *(byte *)(unaff_x20 + lVar2) = param_1 & 1;
        if ((param_1 & 1) == 0) {
          func_0x000107c53fd0(lVar1);
        }
        else {
          lVar2 = 0;
          FUN_101e6bf54(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          func_0x000107c53fd0(lVar1);
          lVar1 = lVar2;
        }
        goto code_r0x000107c61170;
      }
    }
  }
  else {
    lVar1 = unaff_x20 + _DAT_112e33e58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c40f5c();
      func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101e6b420; end: 101e6b4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6b420(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uStack_30;
  ulong uStack_28;
  
  if (*(char *)(unaff_x20 + _DAT_112e33e68) == '\x01') {
    uVar2 = ((ulong *)(unaff_x20 + _DAT_112e33e70))[1];
    if (uVar2 != 0) {
      uStack_30 = *(ulong *)(unaff_x20 + _DAT_112e33e70);
      uVar1 = uStack_30 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uStack_28 = uVar2;
        func_0x000107c61434(uVar2);
        func_0x0001002a64a8(&uStack_30);
        func_0x000107c6142c(uVar2);
        return;
      }
    }
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001002a64a8(&uStack_30);
  }
  return;
}



/* Entry: 101e6b4c4; end: 101e6b523; -[_TtC28SCPlaybackPlayerServicesImpl23AVPlayerSubtitleHandler init] */

void FUN_101e6b4c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.AVPlayerSubtitleHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6b4f0);
  (*pcVar1)();
}



/* Entry: 101e6b524; end: 101e6b57f; -[_TtC28SCPlaybackPlayerServicesImpl23AVPlayerSubtitleHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6b524(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e33e48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e33e50));
  func_0x000107c61610(param_1 + _DAT_112e33e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e33e70 + 8))
  ;
  return;
}



/* Entry: 101e6b580; end: 101e6b607; -[_TtC28SCPlaybackPlayerServicesImpl23AVPlayerSubtitleHandler legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:] */

void FUN_101e6b580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101e6bf54(0,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101e6bcb8(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 101e6b608; end: 101e6b67f;  */

undefined8 FUN_101e6b608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101e6b680; end: 101e6b6ef;  */

undefined1 * FUN_101e6b680(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101e6b6f0; end: 101e6b6f7;  */

void FUN_101e6b6f0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101e6b6f8; end: 101e6b8ef;  */

void FUN_101e6b6f8(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 101e6b8f0; end: 101e6b917;  */

void FUN_101e6b8f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 101e6b918; end: 101e6b9db;  */

void FUN_101e6b918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e33ee8;
  FUN_101e6c05c(0x112e33ee8,&UNK_10da1d680);
  uVar2 = 0x112e33ef0;
  FUN_101e6c05c(0x112e33ef0,&UNK_10da1d59c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101e6b9dc; end: 101e6ba5b;  */

undefined1  [16] FUN_101e6b9dc(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_101e6bb9c;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_101e6bb9c:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 101e6ba5c; end: 101e6bac3;  */

void FUN_101e6ba5c(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101e6bac4; end: 101e6bbbb;  */

undefined1  [16] FUN_101e6bac4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_101e6bb9c;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_101e6bb9c:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 101e6bbbc; end: 101e6bbff;  */

void FUN_101e6bbbc(ulong param_1,undefined1 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined1 *)(*(long *)(param_4 + 0x30) + param_1) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e6bc00);
  (*pcVar2)();
}



/* Entry: 101e6bc00; end: 101e6be27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6bc00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e33e50) = 0;
  lVar2 = _DAT_112e33e58;
  func_0x000107c61614(unaff_x20 + _DAT_112e33e58,0);
  *(undefined1 *)(unaff_x20 + _DAT_112e33e60) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e33e68) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e33e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112e33e48) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e6be28; end: 101e6bf0b;  */

undefined * FUN_101e6be28(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112e33eb0);
    puVar3 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar8 + -1);
      uVar7 = (ulong)bVar1;
      uVar9 = *puVar8;
      func_0x000101e6b984();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e6bf08);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e6bf0c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 101e6bf0c; end: 101e6bf2b;  */

void FUN_101e6bf0c(void)

{
  func_0x000107c61168(&PTR_PTR_112806820);
  return;
}



/* Entry: 101e6bf2c; end: 101e6bf53;  */

void FUN_101e6bf2c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11048fbc0;
  if (lRam0000000112e33ea0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e33ea0 = param_1;
  }
  return;
}



/* Entry: 101e6bf54; end: 101e6bf93;  */

void FUN_101e6bf54(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e6bf94; end: 101e6bfcf;  */

void FUN_101e6bf94(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11048fc10;
  if (lRam0000000112e33eb8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e33eb8 = param_1;
  }
  return;
}



/* Entry: 101e6bfd0; end: 101e6c013;  */

void FUN_101e6bfd0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101e6c014; end: 101e6c05b;  */

void FUN_101e6c014(void)

{
  FUN_101e6c05c(0x112e33ed0,&UNK_10da1d560);
  return;
}



/* Entry: 101e6c05c; end: 101e6c09b;  */

void FUN_101e6c05c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000101e6bfa8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101e6c09c; end: 101e6c0bf;  */

void FUN_101e6c09c(void)

{
  FUN_101e6c05c(0x112e33ee0,&UNK_10da1d5d0);
  return;
}



/* Entry: 101e6c0c0; end: 101e6c0e3;  */

void FUN_101e6c0c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101e6c0e4; end: 101e6c1bb;  */

undefined8
FUN_101e6c0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long lVar1;
  
  lVar1 = param_7;
  func_0x0001000c6518(param_7,*(undefined8 *)(param_7 + 0x18));
  func_0x000101e6f01c(param_1,param_2,param_3,param_4,param_5,param_6,lVar1,param_8,param_9,param_10
                      ,param_11);
  func_0x000107c61574(param_8);
  func_0x0001000834e4(param_7);
  return param_2;
}



/* Entry: 101e6c1bc; end: 101e6c30f;  */

void FUN_101e6c1bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x000100075034(FUN_101e6c310,0,PTR___sytN_11034f1b0 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar2);
  (**(code **)(*(long *)(lVar3 + 0x18) + 0x18))();
  func_0x0001000f11b0();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  lVar3 = *(long *)(unaff_x20 + 0x68);
  (**(code **)(lVar1 + 8))(lVar3,*(undefined8 *)(unaff_x20 + 0x70),uVar6,lVar1);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  puVar4 = &UNK_11048fd28;
  func_0x000107c613fc(&UNK_11048fd28,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_11048fe28;
  func_0x000107c613fc(&UNK_11048fe28,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  func_0x000107c6157c(uVar6);
  func_0x00010075a04c(0,1,FUN_101e6fc4c,puVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar5);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar2);
  (**(code **)(*(long *)(lVar3 + 0x18) + 0x48))(uVar2);
  return;
}



/* Entry: 101e6c310; end: 101e6c327;  */

void FUN_101e6c310(undefined8 param_1)

{
  FUN_101e6d148(param_1,2);
  return;
}



/* Entry: 101e6c328; end: 101e6ca4f;  */

void FUN_101e6c328(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  long alStack_360 [2];
  long alStack_350 [4];
  undefined1 *puStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [40];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 auStack_208 [48];
  undefined8 auStack_1d8 [5];
  char cStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  func_0x000107c61428(param_2 + 0x10,auStack_1a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101e70124(param_1,auStack_1d8,0x112e34088,&UNK_10da1d7f0);
    if (cStack_1b0 == '\x01') {
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      func_0x000107c6157c(uVar9);
      func_0x000100075034(FUN_101e6d130,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar9);
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      lVar13 = *(long *)(param_2 + 0x58);
      lVar4 = param_2 + 0x38;
      func_0x0001000a8868(lVar4,uVar9);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      uVar2 = *(undefined8 *)(param_2 + 0x70);
      puStack_e0 = &UNK_1106e9a18;
      FUN_101e6fc54();
      lStack_d8 = lVar4;
      func_0x000101e6fc94();
      uStack_e8 = auStack_1d8[0];
      uStack_100 = CONCAT71(uStack_100._1_7_,1);
      lVar13 = *(long *)(lVar13 + 8);
      pcVar14 = *(code **)(lVar13 + 8);
      uStack_f8 = uVar6;
      uStack_f0 = uVar2;
      lStack_d0 = lVar4;
      func_0x000107c61434(uVar2);
      func_0x000107c614b0(auStack_1d8[0]);
      (*pcVar14)(&uStack_100,uVar9,lVar13);
      func_0x000107c61574(param_2);
      func_0x000107c614ac(auStack_1d8[0]);
      FUN_101e6fcd4(&uStack_100);
    }
    else {
      puVar15 = auStack_1d8;
      func_0x000100cd4910(puVar15,auStack_208);
      func_0x0001000f11b0();
      if (SBORROW8((long)puVar15,param_3)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101e6ca44);
        (*pcVar14)();
      }
      dVar18 = (double)((long)puVar15 - param_3) / 1000.0;
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      lVar4 = *(long *)(param_2 + 0x58);
      func_0x0001000a8868(param_2 + 0x38,uVar9);
      if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101e6ca48);
        (*pcVar14)();
      }
      if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101e6ca4c);
        (*pcVar14)();
      }
      if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101e6ca50);
        (*pcVar14)();
      }
      (**(code **)(*(long *)(lVar4 + 0x18) + 0x20))((long)dVar18,uVar9);
      *(double *)(*(long *)(param_2 + 0x60) + 0x70) = dVar18;
      func_0x000101e6fd08(auStack_208,auStack_258);
      uVar9 = 0x112e340a0;
      func_0x0001000285a8(0x112e340a0,&UNK_10da1d7f8);
      uVar6 = 0x112e340a8;
      func_0x0001000285a8(0x112e340a8,&UNK_10da1d800);
      puVar15 = &uStack_280;
      func_0x000107c6147c(puVar15,auStack_258,uVar9,uVar6,6);
      if (((ulong)puVar15 & 1) == 0) {
        uStack_260 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        func_0x000101e7016c(&uStack_280,0x112e340b0,&UNK_10da1d808);
      }
      else {
        func_0x000100cd4910(&uStack_280,&uStack_230);
        lVar13 = lStack_210;
        lVar4 = lStack_218;
        func_0x0001000a8868(&uStack_230,lStack_218);
        (**(code **)(lVar13 + 8))();
        lVar10 = *(long *)(param_2 + 0x60);
        uStack_98 = *(undefined8 *)(lVar10 + 0x198);
        uStack_a0 = *(undefined8 *)(lVar10 + 400);
        uStack_88 = *(undefined8 *)(lVar10 + 0x1a8);
        uStack_90 = *(undefined8 *)(lVar10 + 0x1a0);
        uStack_a8 = *(undefined8 *)(lVar10 + 0x188);
        uStack_b0 = *(undefined8 *)(lVar10 + 0x180);
        uStack_2a8 = *(undefined8 *)(lVar10 + 0x198);
        uStack_2b0 = *(undefined8 *)(lVar10 + 400);
        uStack_e8 = *(undefined8 *)(lVar10 + 0x148);
        uStack_f0 = *(undefined8 *)(lVar10 + 0x140);
        lStack_d8 = *(undefined8 *)(lVar10 + 0x158);
        puStack_e0 = *(undefined **)(lVar10 + 0x150);
        uStack_2f8 = *(undefined8 *)(lVar10 + 0x148);
        uStack_300 = *(undefined8 *)(lVar10 + 0x140);
        uStack_2e8 = *(undefined8 *)(lVar10 + 0x158);
        uStack_2f0 = *(undefined8 *)(lVar10 + 0x150);
        uStack_c8 = *(undefined8 *)(lVar10 + 0x168);
        lStack_d0 = *(undefined8 *)(lVar10 + 0x160);
        uStack_2c8 = *(undefined8 *)(lVar10 + 0x178);
        uStack_2d0 = *(undefined8 *)(lVar10 + 0x170);
        uStack_2d8 = *(undefined8 *)(lVar10 + 0x168);
        uStack_2e0 = *(undefined8 *)(lVar10 + 0x160);
        uStack_b8 = *(undefined8 *)(lVar10 + 0x178);
        uStack_c0 = *(undefined8 *)(lVar10 + 0x170);
        uStack_f8 = *(undefined8 *)(lVar10 + 0x138);
        uStack_100 = *(undefined8 *)(lVar10 + 0x130);
        uStack_298 = *(undefined8 *)(lVar10 + 0x1a8);
        uStack_2a0 = *(undefined8 *)(lVar10 + 0x1a0);
        uVar9 = *(undefined8 *)(lVar10 + 0x138);
        uStack_80 = *(undefined1 *)(lVar10 + 0x1b0);
        uStack_2b8 = *(undefined8 *)(lVar10 + 0x188);
        uStack_2c0 = *(undefined8 *)(lVar10 + 0x180);
        uStack_290 = *(undefined1 *)(lVar10 + 0x1b0);
        uStack_308 = *(undefined8 *)(lVar10 + 0x138);
        uStack_310 = *(undefined8 *)(lVar10 + 0x130);
        *(double *)(lVar10 + 0x150) = (double)lVar4;
        *(double *)(lVar10 + 0x158) = (double)lVar13;
        func_0x000107c61434(*(undefined8 *)(lVar10 + 0x188));
        func_0x000107c6157c(lVar10);
        func_0x000107c61434(uVar9);
        FUN_101e6feac(&uStack_100,&uStack_190);
        func_0x000101e6fee8(&uStack_310);
        uStack_128 = *(undefined8 *)(lVar10 + 0x198);
        uStack_130 = *(undefined8 *)(lVar10 + 400);
        uStack_118 = *(undefined8 *)(lVar10 + 0x1a8);
        uStack_120 = *(undefined8 *)(lVar10 + 0x1a0);
        uStack_110 = *(undefined1 *)(lVar10 + 0x1b0);
        uStack_168 = *(undefined8 *)(lVar10 + 0x158);
        uStack_170 = *(undefined8 *)(lVar10 + 0x150);
        uStack_158 = *(undefined8 *)(lVar10 + 0x168);
        uStack_160 = *(undefined8 *)(lVar10 + 0x160);
        uStack_148 = *(undefined8 *)(lVar10 + 0x178);
        uStack_150 = *(undefined8 *)(lVar10 + 0x170);
        uStack_138 = *(undefined8 *)(lVar10 + 0x188);
        uStack_140 = *(undefined8 *)(lVar10 + 0x180);
        uStack_188 = *(undefined8 *)(lVar10 + 0x138);
        uStack_190 = *(undefined8 *)(lVar10 + 0x130);
        uStack_178 = *(undefined8 *)(lVar10 + 0x148);
        uStack_180 = *(undefined8 *)(lVar10 + 0x140);
        puVar15 = &uStack_190;
        FUN_101e89cac(puVar15,&uStack_100);
        if (((ulong)puVar15 & 1) == 0) {
          lVar4 = lVar10 + 0x120;
          func_0x000107c61618();
          if (lVar4 != 0) {
            func_0x000107c615e8();
          }
        }
        func_0x000101e6fee8(&uStack_100);
        func_0x000107c61574(lVar10);
        func_0x0001000834e4(&uStack_230);
      }
      func_0x000101e6fd08(auStack_208,&uStack_310);
      lVar4 = 0x112e340b8;
      func_0x0001000285a8(0x112e340b8,&UNK_10da1d810);
      lVar13 = *(long *)(lVar4 + -8);
      lVar11 = *(long *)(lVar13 + 0x40);
      lStack_320 = lVar4;
      (*(code *)PTR____chkstk_darwin_11034bd40)(lVar11 + 0xfU & 0xfffffffffffffff0);
      lVar10 = (long)alStack_350 - extraout_x8;
      lVar4 = 0x112e33ef8;
      func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
      alStack_350[2] = *(long *)(lVar4 + -8);
      alStack_350[3] = lVar10;
      lStack_318 = lVar4;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(alStack_350[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar7 = lVar10 - extraout_x8_00;
      lVar4 = 0x112e340c0;
      lStack_328 = lVar7;
      func_0x0001000285a8(0x112e340c0,&UNK_10da1d818);
      lVar12 = *(long *)(lVar4 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar15 = (undefined8 *)(lVar7 - extraout_x8_01);
      *puVar15 = 0;
      (**(code **)(lVar12 + 0x68))
                (puVar15,*(undefined4 *)
                          PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
                 ,lVar4);
      iVar3 = 2;
      func_0x000100029b9c(2,0x11,0,0);
      if (iVar3 == 0) {
        puStack_330 = (undefined1 *)alStack_350;
        FUN_101e6ebe4(lVar10,lStack_328,puVar15);
      }
      else {
        puStack_330 = (undefined1 *)alStack_350;
        func_0x000107c5fd10(lVar10,lStack_328,&UNK_11048fde0,puVar15,&UNK_11048fde0);
      }
      (**(code **)(lVar12 + 8))(puVar15,lVar4);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar4 = lStack_320;
      lVar12 = lVar7 - (lVar11 + 0xfU & 0xfffffffffffffff0);
      alStack_350[1] = lVar10;
      (**(code **)(lVar13 + 0x10))(lVar12,lVar10,lStack_320);
      func_0x000101e6fd4c(&uStack_310,&uStack_230);
      uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar16 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
      uVar17 = lVar11 + uVar16 + 7 & 0xfffffffffffffff8;
      puVar5 = &UNK_11048fe50;
      func_0x000107c613fc(&UNK_11048fe50,uVar17 + 0x28,uVar8 | 7);
      (**(code **)(lVar13 + 0x20))(puVar5 + uVar16,lVar12,lVar4);
      puVar15 = (undefined8 *)(puVar5 + uVar17);
      puVar15[1] = uStack_228;
      *puVar15 = uStack_230;
      puVar15[3] = lStack_218;
      puVar15[2] = puStack_220;
      puVar15[4] = lStack_210;
      puVar1 = PTR___sytN_11034f1b0 + 8;
      *(undefined **)(lVar7 + -0x10) = puVar1;
      uVar6 = 2;
      func_0x0001001ca524(2,3,0x40,4,0,0,&UNK_10da1d828,puVar5);
      func_0x000107c61574(puVar5);
      func_0x000107c6157c(uVar6);
      lVar10 = lStack_328;
      func_0x000107c5fd1c(FUN_101e6fe58,uVar6,lStack_318);
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      lStack_218 = lVar10;
      puStack_220 = &uStack_310;
      func_0x000107c6157c(uVar9);
      func_0x000100075034(FUN_101e6fe7c,&uStack_230,puVar1);
      func_0x000107c61574(uVar9);
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      lVar4 = *(long *)(param_2 + 0x58);
      func_0x0001000a8868(param_2 + 0x38,uVar9);
      (**(code **)(*(long *)(lVar4 + 0x18) + 0x50))(uVar9);
      uVar9 = *(undefined8 *)(param_2 + 0x60);
      puVar5 = &UNK_11048fe78;
      func_0x000107c613fc(&UNK_11048fe78,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar9);
      func_0x000100087bd4(0x101e6fe94,puVar5,puVar1);
      func_0x000107c61574(uVar6);
      (**(code **)(lVar13 + 8))(alStack_350[1],lStack_320);
      func_0x0001000834e4(auStack_208);
      func_0x000107c61574(param_2);
      func_0x000107c61574(puVar5);
      (**(code **)(alStack_350[2] + 8))(lVar10,lStack_318);
      FUN_101e6f1a4(&uStack_310);
    }
  }
  return;
}



/* Entry: 101e6ca50; end: 101e6cabb;  */

void FUN_101e6ca50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_2;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  lVar2 = 0x112e340c8;
  func_0x0001000285a8(0x112e340c8,&UNK_10da1d830);
  *(long *)(unaff_x22 + 0x110) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e6cabc,0,0);
  return;
}



/* Entry: 101e6cabc; end: 101e6cb37;  */

void FUN_101e6cabc(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x0001000285a8(0x112e340b8,&UNK_10da1d810);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e6cb38;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101e6cb38; end: 101e6cb7f;  */

void FUN_101e6cb38(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e6cb80,0,0);
  return;
}



/* Entry: 101e6cb80; end: 101e6cc6b;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e6cb80(ulong param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  ulong *puVar21;
  long lStack_130;
  long lStack_128;
  ulong auStack_120 [2];
  undefined1 auStack_110 [16];
  long lStack_100;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  
  lVar13 = *(long *)(unaff_x22 + 0xe8);
  if (lVar13 == 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(unaff_x22 + 0x118) + 8);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x130) = uVar14;
    *(long *)(unaff_x22 + 0x138) = lVar13;
    func_0x000107c5fd5c();
    if ((param_1 & 1) == 0) {
      plVar3 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x140) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101e6cc6c;
      lVar15 = *(long *)(unaff_x22 + 0x108);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[5] = lVar13;
      plVar3[6] = lVar15;
      plVar3[4] = unaff_x22 + 0x70;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101e84034;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
        return;
      }
      func_0x000107c60e78();
      lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = (undefined *)plVar3[5];
      func_0x000107c60a1c();
      func_0x000107c61180();
      plVar3[7] = (long)puVar4;
      if (puVar4 == (undefined *)0x0) {
        FUN_101e6f23c();
        puVar5 = &UNK_1106e9908;
        func_0x000107c613f8(&UNK_1106e9908,puVar4,0,0);
        *puVar4 = 10;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        func_0x000107c61654();
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar3[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e84174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else {
        lVar12 = plVar3[6];
        uVar17 = *(undefined8 *)(lVar12 + 0x18);
        lVar13 = *(long *)(lVar12 + 0x20);
        func_0x0001000a8868(lVar12,uVar17);
        piVar19 = *(int **)(lVar13 + 0x10);
        iVar1 = *piVar19;
        UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar19[1];
        func_0x000107c615b8();
        plVar3[8] = (long)UNRECOVERED_JUMPTABLE_00;
        *(long **)UNRECOVERED_JUMPTABLE_00 = plVar3;
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101e8417c;
        puVar5 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e840fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar19))(puVar4,uVar17,lVar13);
          return;
        }
      }
      func_0x000107c60e78();
      uStack_80 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
      pcStack_78 = FUN_101e8417c;
      lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_88 = *plVar3;
      lVar13 = *plVar3;
      *(code **)(lStack_88 + 0x48) = UNRECOVERED_JUMPTABLE_00;
      *(undefined **)(lStack_88 + 0x50) = puVar5;
      func_0x000107c615c0(*(undefined8 *)(lStack_88 + 0x40));
      if (puVar5 == (undefined *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101e84220;
          goto LAB_107c615e0;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
        UNRECOVERED_JUMPTABLE_00 = (code *)0x101e844b8;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_a0 = (ulong)&uStack_80 | 0x1000000000000000;
      plVar2 = (long *)auStack_110;
      pcStack_98 = FUN_101e84220;
      puVar21 = &uStack_a0;
      lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = (long *)(lVar13 + 0x10);
      *plVar3 = 0;
      func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                          *(undefined8 *)(lVar13 + 0x48),plVar3);
      lVar12 = *plVar3;
      uVar17 = *(undefined8 *)(lVar13 + 0x48);
      if (lVar12 == 0) {
        FUN_101e6f23c();
        func_0x000107c613f8(&UNK_1106e9908,lVar12,0,0);
        *(undefined **)(lVar12 + 0x20) = &UNK_1106e9b40;
        uVar17 = 0x101e843c0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar13 + 0x28);
        *(undefined8 *)(lVar13 + 0x60) = 0;
        *(undefined8 *)(lVar13 + 0x58) = 0;
        *(undefined8 *)(lVar13 + 0x70) = 0;
        *(undefined8 *)(lVar13 + 0x68) = 0;
        *(undefined8 *)(lVar13 + 0x80) = 0;
        *(undefined8 *)(lVar13 + 0x78) = 0;
        *(undefined8 *)(lVar13 + 0x90) = 0;
        *(undefined8 *)(lVar13 + 0x88) = 0;
        *(undefined8 *)(lVar13 + 0x98) = 0;
        func_0x000107c61174();
        func_0x000107c60a28(uVar16,0,lVar13 + 0x58);
        *(undefined8 *)(lVar13 + 0x18) = 0;
        puVar6 = (undefined1 *)0x0;
        func_0x000107c60a18(0,uVar17,lVar12,lVar13 + 0x58,lVar13 + 0x18);
        lVar15 = *(long *)(lVar13 + 0x18);
        lVar20 = *(long *)(lVar13 + 0x48);
        lVar18 = *(long *)(lVar13 + 0x38);
        if (lVar15 == 0) {
          puVar11 = puVar6;
          FUN_101e6f23c();
          puVar4 = &UNK_1106e9908;
          func_0x000107c613f8(&UNK_1106e9908,puVar11,0,0);
          *(undefined **)(puVar11 + 0x20) = &UNK_1106e9b68;
          func_0x000101e84598();
          *(undefined **)(puVar11 + 0x28) = puVar4;
          func_0x000101e845d8();
          *(undefined **)(puVar11 + 0x30) = puVar4;
          *(int *)(puVar11 + 8) = (int)puVar6;
          *puVar11 = 0xf;
          func_0x000107c61654();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) goto LAB_101e84490;
        }
        else {
          plVar3 = *(long **)(lVar13 + 0x20);
          func_0x000107c61174(lVar15);
          lVar7 = lVar18;
          func_0x000107c60ac8();
          lVar8 = lVar18;
          func_0x000107c60ab8();
          lVar9 = lVar20;
          func_0x000107c60ac8();
          lVar10 = lVar20;
          func_0x000107c60ab8();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
          *plVar3 = lVar15;
          plVar3[1] = (long)(double)lVar7;
          plVar3[2] = (long)(double)lVar8;
          plVar3[3] = (long)(double)lVar9;
          plVar3[4] = (long)(double)lVar10;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
        }
        func_0x000107c60e78();
        auStack_120[0] = (ulong)puVar21 | 0x1000000000000000;
        plVar2 = &lStack_130;
        auStack_120[1] = 0x101e844b8;
        puVar21 = auStack_120;
        lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_128 = lVar13;
        func_0x000107c61170(*(undefined8 *)(lVar13 + 0x38));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar13 + 8))();
          return;
        }
        uVar17 = 0x101e84518;
        func_0x000107c60e78();
      }
      if (puRam0000000112e34910 == (undefined *)0x0) {
        *(ulong **)((long)plVar2 + -0x10) = puVar21;
        *(undefined8 *)((long)plVar2 + -8) = uVar17;
        puVar4 = &DAT_10dc66374;
        func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
        puRam0000000112e34910 = puVar4;
        return;
      }
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    func_0x000100b60084(unaff_x22 + 0xc0);
    func_0x000107c61170(lVar13);
    func_0x000107c61574(uVar14);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 8);
  }
  (*UNRECOVERED_JUMPTABLE_00)(uVar17,uVar16);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x000101e6cc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e6cc6c; end: 101e6ccc7;  */

void FUN_101e6cc6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e6ccc8;
  }
  else {
    pcVar1 = FUN_101e6ce8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e6ccc8; end: 101e6cd57;  */

void FUN_101e6ccc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000100b60084(unaff_x22 + 0x98);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000101e70058(unaff_x22 + 0x70);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e6cd58;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101e6cd58; end: 101e6cd9f;  */

void FUN_101e6cd58(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e6cda0,0,0);
  return;
}



/* Entry: 101e6cda0; end: 101e6ce8b;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e6cda0(ulong param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  ulong *puVar21;
  long lStack_130;
  long lStack_128;
  ulong auStack_120 [2];
  undefined1 auStack_110 [16];
  long lStack_100;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  
  lVar13 = *(long *)(unaff_x22 + 0xe8);
  if (lVar13 == 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(unaff_x22 + 0x118) + 8);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x130) = uVar14;
    *(long *)(unaff_x22 + 0x138) = lVar13;
    func_0x000107c5fd5c();
    if ((param_1 & 1) == 0) {
      plVar3 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x140) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101e6cc6c;
      lVar15 = *(long *)(unaff_x22 + 0x108);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[5] = lVar13;
      plVar3[6] = lVar15;
      plVar3[4] = unaff_x22 + 0x70;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101e84034;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
        return;
      }
      func_0x000107c60e78();
      lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = (undefined *)plVar3[5];
      func_0x000107c60a1c();
      func_0x000107c61180();
      plVar3[7] = (long)puVar4;
      if (puVar4 == (undefined *)0x0) {
        FUN_101e6f23c();
        puVar5 = &UNK_1106e9908;
        func_0x000107c613f8(&UNK_1106e9908,puVar4,0,0);
        *puVar4 = 10;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        func_0x000107c61654();
        UNRECOVERED_JUMPTABLE_00 = (code *)plVar3[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e84174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else {
        lVar12 = plVar3[6];
        uVar17 = *(undefined8 *)(lVar12 + 0x18);
        lVar13 = *(long *)(lVar12 + 0x20);
        func_0x0001000a8868(lVar12,uVar17);
        piVar19 = *(int **)(lVar13 + 0x10);
        iVar1 = *piVar19;
        UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar19[1];
        func_0x000107c615b8();
        plVar3[8] = (long)UNRECOVERED_JUMPTABLE_00;
        *(long **)UNRECOVERED_JUMPTABLE_00 = plVar3;
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101e8417c;
        puVar5 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e840fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar19))(puVar4,uVar17,lVar13);
          return;
        }
      }
      func_0x000107c60e78();
      uStack_80 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
      pcStack_78 = FUN_101e8417c;
      lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_88 = *plVar3;
      lVar13 = *plVar3;
      *(code **)(lStack_88 + 0x48) = UNRECOVERED_JUMPTABLE_00;
      *(undefined **)(lStack_88 + 0x50) = puVar5;
      func_0x000107c615c0(*(undefined8 *)(lStack_88 + 0x40));
      if (puVar5 == (undefined *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101e84220;
          goto LAB_107c615e0;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
        UNRECOVERED_JUMPTABLE_00 = (code *)0x101e844b8;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_a0 = (ulong)&uStack_80 | 0x1000000000000000;
      plVar2 = (long *)auStack_110;
      pcStack_98 = FUN_101e84220;
      puVar21 = &uStack_a0;
      lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = (long *)(lVar13 + 0x10);
      *plVar3 = 0;
      func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                          *(undefined8 *)(lVar13 + 0x48),plVar3);
      lVar12 = *plVar3;
      uVar17 = *(undefined8 *)(lVar13 + 0x48);
      if (lVar12 == 0) {
        FUN_101e6f23c();
        func_0x000107c613f8(&UNK_1106e9908,lVar12,0,0);
        *(undefined **)(lVar12 + 0x20) = &UNK_1106e9b40;
        uVar17 = 0x101e843c0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar13 + 0x28);
        *(undefined8 *)(lVar13 + 0x60) = 0;
        *(undefined8 *)(lVar13 + 0x58) = 0;
        *(undefined8 *)(lVar13 + 0x70) = 0;
        *(undefined8 *)(lVar13 + 0x68) = 0;
        *(undefined8 *)(lVar13 + 0x80) = 0;
        *(undefined8 *)(lVar13 + 0x78) = 0;
        *(undefined8 *)(lVar13 + 0x90) = 0;
        *(undefined8 *)(lVar13 + 0x88) = 0;
        *(undefined8 *)(lVar13 + 0x98) = 0;
        func_0x000107c61174();
        func_0x000107c60a28(uVar16,0,lVar13 + 0x58);
        *(undefined8 *)(lVar13 + 0x18) = 0;
        puVar6 = (undefined1 *)0x0;
        func_0x000107c60a18(0,uVar17,lVar12,lVar13 + 0x58,lVar13 + 0x18);
        lVar15 = *(long *)(lVar13 + 0x18);
        lVar20 = *(long *)(lVar13 + 0x48);
        lVar18 = *(long *)(lVar13 + 0x38);
        if (lVar15 == 0) {
          puVar11 = puVar6;
          FUN_101e6f23c();
          puVar4 = &UNK_1106e9908;
          func_0x000107c613f8(&UNK_1106e9908,puVar11,0,0);
          *(undefined **)(puVar11 + 0x20) = &UNK_1106e9b68;
          func_0x000101e84598();
          *(undefined **)(puVar11 + 0x28) = puVar4;
          func_0x000101e845d8();
          *(undefined **)(puVar11 + 0x30) = puVar4;
          *(int *)(puVar11 + 8) = (int)puVar6;
          *puVar11 = 0xf;
          func_0x000107c61654();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) goto LAB_101e84490;
        }
        else {
          plVar3 = *(long **)(lVar13 + 0x20);
          func_0x000107c61174(lVar15);
          lVar7 = lVar18;
          func_0x000107c60ac8();
          lVar8 = lVar18;
          func_0x000107c60ab8();
          lVar9 = lVar20;
          func_0x000107c60ac8();
          lVar10 = lVar20;
          func_0x000107c60ab8();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
          func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
          *plVar3 = lVar15;
          plVar3[1] = (long)(double)lVar7;
          plVar3[2] = (long)(double)lVar8;
          plVar3[3] = (long)(double)lVar9;
          plVar3[4] = (long)(double)lVar10;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar13 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
        }
        func_0x000107c60e78();
        auStack_120[0] = (ulong)puVar21 | 0x1000000000000000;
        plVar2 = &lStack_130;
        auStack_120[1] = 0x101e844b8;
        puVar21 = auStack_120;
        lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_128 = lVar13;
        func_0x000107c61170(*(undefined8 *)(lVar13 + 0x38));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar13 + 8))();
          return;
        }
        uVar17 = 0x101e84518;
        func_0x000107c60e78();
      }
      if (puRam0000000112e34910 == (undefined *)0x0) {
        *(ulong **)((long)plVar2 + -0x10) = puVar21;
        *(undefined8 *)((long)plVar2 + -8) = uVar17;
        puVar4 = &DAT_10dc66374;
        func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
        puRam0000000112e34910 = puVar4;
        return;
      }
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    func_0x000100b60084(unaff_x22 + 0xc0);
    func_0x000107c61170(lVar13);
    func_0x000107c61574(uVar14);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 8);
  }
  (*UNRECOVERED_JUMPTABLE_00)(uVar17,uVar16);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x000101e6ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e6ce8c; end: 101e6d07f;  */

void FUN_101e6ce8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x148);
  puVar9 = (undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = puVar9;
  func_0x000107c6147c(puVar9,(undefined8 *)(unaff_x22 + 0xf8),uVar2,&UNK_1106e9230,0);
  if ((int)puVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
    puVar4 = *(undefined1 **)(unaff_x22 + 0xf8);
    func_0x000107c614ac();
    FUN_101e6f23c();
    puVar6 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar4,0,0);
    *(undefined **)(puVar4 + 0x20) = &UNK_1106e9b18;
    puVar7 = puVar6;
    func_0x000101e6ff1c();
    *(undefined **)(puVar4 + 0x28) = puVar7;
    func_0x000101e6ff5c();
    *(undefined **)(puVar4 + 0x30) = puVar7;
    *(undefined8 *)(puVar4 + 8) = uVar5;
    *puVar4 = 0xd;
    func_0x000107c614b0(uVar5);
    func_0x00010488ade0(puVar6);
    func_0x000107c614ac(puVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar2);
  }
  else {
    puVar4 = *(undefined1 **)(unaff_x22 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c614ac();
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x40) = *puVar9;
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_101e6f23c();
    puVar6 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar4,0,0);
    *(undefined **)(puVar4 + 0x20) = &UNK_1106e9230;
    puVar7 = puVar6;
    func_0x000101e6ff9c();
    *(undefined **)(puVar4 + 0x28) = puVar7;
    func_0x000101e6ffdc();
    *(undefined **)(puVar4 + 0x30) = puVar7;
    puVar7 = &UNK_11048fea0;
    func_0x000107c613fc(&UNK_11048fea0,0x40,7);
    *(undefined **)(puVar4 + 8) = puVar7;
    FUN_101e7001c(unaff_x22 + 0x40,puVar7 + 0x10);
    *puVar4 = 0xd;
    func_0x00010488ade0(puVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar2);
    FUN_10195d72c(unaff_x22 + 0x40);
    func_0x000107c614ac(puVar6);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  }
  func_0x000107c614ac(uVar5);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101e6cd58;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101e6d080; end: 101e6d12f;  */

void FUN_101e6d080(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  FUN_101e6f150();
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  iVar1 = *(int *)(lVar2 + 0x30);
  func_0x000101e6fd4c(param_2,param_1);
  lVar3 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + iVar1,param_3,lVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,0,3,lVar2);
  return;
}



/* Entry: 101e6d130; end: 101e6d147;  */

void FUN_101e6d130(undefined8 param_1)

{
  FUN_101e6d148(param_1,3);
  return;
}



/* Entry: 101e6d148; end: 101e6d1ab;  */

void FUN_101e6d148(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_101e6f150();
  lVar1 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,3,lVar1);
  return;
}



/* Entry: 101e6d1ac; end: 101e6d41f;  */

void FUN_101e6d1ac(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  FUN_101e6f118();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000101e6fd08(unaff_x20 + 0x38,auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(*(long *)(lStack_58 + 0x18) + 8))(uStack_60);
  func_0x0001000834e4(auStack_78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(puVar6);
  func_0x000107c61574(uVar5);
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  puVar3 = puVar6;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar6,3,lVar2);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar9 + 0x20))((long)puVar6 - extraout_x8_00,puVar6 + *(int *)(lVar2 + 0x30),lVar1)
    ;
    FUN_101e6f1a4(puVar6);
    func_0x000107c5fd2c(lVar1);
    (**(code **)(lVar9 + 8))((long)puVar6 - extraout_x8_00,lVar1);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar1 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar8);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar5 = 0x112e33f00;
    func_0x0001000285a8(0x112e33f00,&UNK_10da1d6e0);
    pcVar4 = FUN_101e701d8;
  }
  else {
    FUN_101e6f150(puVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar1 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar8);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar5 = 0x112e33f00;
    func_0x0001000285a8(0x112e33f00,&UNK_10da1d6e0);
    pcVar4 = FUN_101e6f18c;
  }
  func_0x000100087bd4(auStack_78,pcVar4,uVar7,uVar5);
  (**(code **)(*(long *)(lVar1 + 0x18) + 0x40))(auStack_78[0],uVar8);
  func_0x000107c6142c(auStack_78[0]);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar5);
  (**(code **)(*(long *)(lVar1 + 0x18) + 0x10))(uVar5);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101e6d420; end: 101e6d43f;  */

void FUN_101e6d420(void)

{
  FUN_101e6d1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e6d440; end: 101e6d44b; -[_TtC28SCPlaybackPlayerServicesImpl33NeoPlayerSuperResolutionProcessor preferredPixelFormat] */

undefined8 FUN_101e6d440(void)

{
  return 0x34343466;
}



/* Entry: 101e6d44c; end: 101e6e09f;  */

void FUN_101e6d44c(double param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar27;
  char *pcVar28;
  long extraout_x12;
  long extraout_x12_00;
  long lVar29;
  long unaff_x20;
  undefined8 uVar30;
  long lVar31;
  code *pcVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_170 [8];
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lVar13 = 0x112e33f08;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uStack_e8 = param_5;
  func_0x0001000285a8(0x112e33f08,&UNK_10da1d6e8);
  lStack_158 = *(long *)(lVar13 + -8);
  lStack_160 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  puStack_150 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar13 = 0;
  FUN_101e6f118();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar27 = lVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_140 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar27 - extraout_x12_00;
  lVar13 = 0x112e33ef8;
  lStack_e0 = lVar27;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  lStack_118 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_c8 = param_2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e0a0);
    (*pcVar32)();
  }
  func_0x000107c60a24(&puStack_c0,param_2);
  uVar24 = uStack_b0;
  puVar19 = puStack_c0;
  uVar8 = (undefined4)uStack_b8;
  uVar1 = uStack_b8 & 0xffffffff;
  uVar3 = uStack_b8 >> 0x20;
  func_0x000107c600d4(puStack_c0,uStack_b8,uStack_b0);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e088);
    (*pcVar32)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e08c);
    (*pcVar32)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e090);
    (*pcVar32)();
  }
  uStack_120 = uStack_b8;
  lVar29 = (long)param_1;
  puStack_c0 = (undefined1 *)0x0;
  uStack_b8 = 0xe000000000000000;
  lStack_148 = lVar31;
  lStack_130 = lVar13;
  lStack_128 = lVar27 - extraout_x8_01;
  func_0x000107c602fc(0x34);
  func_0x000107c5fb78(0xd000000000000030,0x800000010f015990);
  puVar17 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  lStack_90 = lVar29;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar17);
  puVar14 = (undefined8 *)0x736d;
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  uVar9 = uStack_b8;
  puVar16 = puStack_c0;
  func_0x0001000298f0();
  uStack_d8 = uVar3;
  func_0x000107c61428();
  uVar15 = *puVar14;
  func_0x000107c61174(uVar15);
  func_0x000100029b28(puVar16,uVar9);
  puStack_100 = puVar16;
  func_0x000107c6142c(uVar9);
  func_0x000107c61170(uVar15);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x60);
  pcVar32 = FUN_101e6f1d8;
  func_0x000100087bd4(FUN_101e6f1d8,uStack_d0,PTR___sytN_11034f1b0 + 8);
  uStack_138 = 0;
  func_0x0001000f11b0();
  func_0x0001000285a8(0x112e33f10,&UNK_10da1d6f0);
  func_0x000107c613fc();
  lVar13 = 0;
  func_0x00010095c380();
  puVar16 = puStack_c8;
  uVar30 = *(undefined8 *)(lVar13 + 0x10);
  puVar17 = &UNK_11048fd28;
  lStack_108 = lVar13;
  func_0x000107c613fc(&UNK_11048fd28,0x18,7);
  func_0x000107c61644(puVar17 + 0x10);
  puVar18 = &UNK_11048fd50;
  func_0x000107c613fc(&UNK_11048fd50,0x60,7);
  uVar5 = uStack_e8;
  uVar15 = uStack_f0;
  *(undefined8 *)(puVar18 + 0x10) = uStack_f8;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  *(undefined8 *)(puVar18 + 0x20) = uStack_f0;
  *(undefined8 *)(puVar18 + 0x28) = uStack_e8;
  *(code **)(puVar18 + 0x30) = pcVar32;
  *(undefined1 **)(puVar18 + 0x38) = puVar19;
  puStack_110 = puVar19;
  *(undefined4 *)(puVar18 + 0x40) = uVar8;
  *(int *)(puVar18 + 0x44) = (int)uStack_d8;
  *(undefined8 *)(puVar18 + 0x48) = uVar24;
  *(undefined1 **)(puVar18 + 0x50) = puVar16;
  *(undefined1 **)(puVar18 + 0x58) = puStack_100;
  uStack_168 = uVar1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar30);
  FUN_101e6f22c(uVar15,uVar5);
  func_0x000107c61174();
  func_0x00010075a04c(0,1,0x101e6f1f0,puVar18);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(puVar18);
  lVar31 = lStack_e0;
  func_0x0001000c74f0(lStack_e0);
  lVar13 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  pcVar32 = *(code **)(*(long *)(lVar13 + -8) + 0x30);
  lVar29 = lVar31;
  (*pcVar32)(lVar31,3,lVar13);
  lVar27 = lStack_130;
  if ((int)lVar29 != 0) {
    FUN_101e6f150(lVar31);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar13 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar15);
    (**(code **)(*(long *)(lVar13 + 0x18) + 0x30))
              (0x6f6e206c65646f4d,0xef79646165722074,puStack_110,uStack_120,uVar24,uVar15);
    FUN_101e86f78();
    lVar13 = lStack_108;
    puStack_c0 = (undefined1 *)0x1;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    func_0x000100b60084(&puStack_c0);
    func_0x000107c61574(lVar13);
    return;
  }
  puStack_c8 = (undefined1 *)uVar24;
  (**(code **)(lStack_118 + 0x20))(lStack_128,lVar31 + *(int *)(lVar13 + 0x30),lStack_130);
  FUN_101e6f1a4(lVar31);
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x000100087bd4(&puStack_c0,0x101e6f27c,uStack_d0,PTR___sSbN_11034dd40);
    lVar31 = lStack_140;
    if ((char)puStack_c0 != '\x01') {
      func_0x0001000c74f0(lStack_140);
      (*pcVar32)(lVar31,3,lVar13);
      lVar29 = lStack_108;
      uVar1 = uStack_120;
      lVar26 = lStack_128;
      iVar12 = (int)lVar31;
      if (iVar12 < 2) {
        if (iVar12 == 0) {
          func_0x000100087bd4(&puStack_c0,0x101e6f294,uStack_d0,&UNK_110491600);
          cVar7 = (char)puStack_c0;
          uVar24 = *(undefined8 *)(unaff_x20 + 0x50);
          lVar31 = *(long *)(unaff_x20 + 0x58);
          func_0x0001000a8868(unaff_x20 + 0x38,uVar24);
          lVar26 = lStack_128;
          if (cVar7 == '\x05') {
            uVar15 = 0xd000000000000016;
            pcVar28 = "Frame gate passthrough";
LAB_101e6dfc8:
            pcVar28 = pcVar28 + -0x20;
          }
          else {
            uVar15 = 0xd000000000000013;
            if (cVar7 == '\a') {
              pcVar28 = "Frame gate disabled";
              uVar15 = 0xd00000000000002b;
            }
            else {
              if (cVar7 != '\x06') {
                pcVar28 = "Frame gate disabled";
                goto LAB_101e6dfc8;
              }
              pcVar28 = "e (should not happen here?)";
              uVar15 = 0xd00000000000001b;
            }
          }
          (**(code **)(*(long *)(lVar31 + 0x18) + 0x30))
                    (uVar15,(ulong)pcVar28 | 0x8000000000000000,puStack_110,uVar1,puStack_c8,uVar24)
          ;
          lVar31 = lStack_140;
          (**(code **)(lStack_118 + 8))(lStack_140 + *(int *)(lVar13 + 0x30),lVar27);
          FUN_101e6f1a4(lVar31);
        }
        else {
          uVar24 = *(undefined8 *)(unaff_x20 + 0x50);
          lVar13 = *(long *)(unaff_x20 + 0x58);
          func_0x0001000a8868(unaff_x20 + 0x38,uVar24);
          (**(code **)(*(long *)(lVar13 + 0x18) + 0x30))
                    (0xd000000000000015,0x800000010f015aa0,puStack_110,uVar1,puStack_c8,uVar24);
          lVar26 = lStack_128;
        }
      }
      else {
        if (iVar12 == 2) {
          uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
          lVar13 = *(long *)(unaff_x20 + 0x58);
          func_0x0001000a8868(unaff_x20 + 0x38,uVar15);
          pcVar28 = "Model still loading";
          pcVar32 = *(code **)(*(long *)(lVar13 + 0x18) + 0x30);
          uVar24 = 0xd000000000000013;
        }
        else {
          uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
          lVar13 = *(long *)(unaff_x20 + 0x58);
          func_0x0001000a8868(unaff_x20 + 0x38,uVar15);
          pcVar28 = "Model loading failed";
          pcVar32 = *(code **)(*(long *)(lVar13 + 0x18) + 0x30);
          uVar24 = 0xd000000000000014;
        }
        (*pcVar32)(uVar24,(ulong)(pcVar28 + -0x20) | 0x8000000000000000,puStack_110,uVar1,puStack_c8
                   ,uVar15);
      }
      FUN_101e86f78();
      puStack_c0 = (undefined1 *)0x1;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      func_0x000100b60084(&puStack_c0);
      func_0x000107c61574(lVar29);
      pcVar32 = *(code **)(lStack_118 + 8);
      goto LAB_101e6e05c;
    }
  }
  func_0x000107c61174();
  puVar19 = puVar16;
  func_0x000107c60a1c();
  func_0x000107c61180();
  if (puVar19 == (undefined1 *)0x0) {
    func_0x000107c61170();
    FUN_101e86f78();
    FUN_101e6f23c();
    puVar17 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar16,0,0);
    lVar13 = lStack_108;
    *puVar16 = 10;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    func_0x00010488ade0();
    func_0x000107c61574(lVar13);
    (**(code **)(lStack_118 + 8))(lStack_128,lVar27);
    func_0x000107c614ac(puVar17);
    return;
  }
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar29 = *(long *)(unaff_x20 + 0x18);
  lVar31 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  puVar20 = puVar19;
  func_0x000107c60ac8();
  puVar21 = puVar19;
  func_0x000107c60ab8();
  puVar22 = puVar21;
  func_0x000109128214();
  puVar6 = puStack_c8;
  lVar25 = lStack_108;
  puVar23 = puStack_110;
  lVar26 = lStack_128;
  lVar27 = lStack_130;
  lVar4 = lStack_148;
  if (((((long)puVar20 < lVar13) || (lVar29 < (long)puVar20)) || ((long)puVar21 < lVar31)) ||
     (lVar2 < (long)puVar21)) {
    if ((int)puVar22 != 0) {
      FUN_101e6e6e4(puVar19,0xff);
    }
    lVar25 = lStack_108;
    puStack_c0 = (undefined1 *)0x1;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    func_0x000100b60084(&puStack_c0);
    func_0x000107c61170(puVar16);
LAB_101e6dd84:
    func_0x000107c61574(lVar25);
    func_0x000107c61170(puVar19);
  }
  else {
    if ((int)puVar22 != 0) {
      puStack_c0 = puStack_110;
      uStack_b8 = CONCAT44((int)uStack_d8,(int)uStack_168);
      uStack_b0 = puStack_c8;
      func_0x000107c60a3c(&puStack_c0);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e094);
        (*pcVar32)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e098);
        (*pcVar32)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x101e6e09c);
        (*pcVar32)();
      }
      if (((long)param_1 & 1U) != 0) goto LAB_101e6dc10;
      FUN_101e6e6e4(puVar19,0x80);
LAB_101e6dd58:
      puStack_c0 = (undefined1 *)0x1;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      func_0x000100b60084(&puStack_c0);
      func_0x000107c61170(puVar16);
      goto LAB_101e6dd84;
    }
LAB_101e6dc10:
    if (*(char *)(unaff_x20 + 0x34) == '\x01') {
      dVar33 = 1.0 / (double)*(float *)(unaff_x20 + 0x30);
      dVar34 = dVar33 + dVar33;
      func_0x000107c600d4(puVar23,uStack_120,puVar6);
      dVar33 = dVar33 / dVar34;
      dVar33 = dVar33 - (double)(long)dVar33;
      bVar10 = false;
      bVar11 = true;
      if (0.25 < dVar33) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(dVar33)) {
          bVar10 = dVar33 == 0.75;
          bVar11 = 0.75 <= dVar33;
        }
      }
      if (!bVar11 || bVar10) goto LAB_101e6dd58;
    }
    uStack_b8 = lVar25;
    puStack_c0 = puVar16;
    func_0x000107c61174(puVar16);
    func_0x000107c6157c(lVar25);
    func_0x000107c5fd28(lVar4,&puStack_c0,lVar27);
    puVar23 = puStack_150;
    lVar31 = lStack_158;
    lVar13 = lStack_160;
    (**(code **)(lStack_158 + 0x10))(puStack_150,lVar4,lStack_160);
    (**(code **)(lVar31 + 0x58))(puVar23,lVar13);
    iVar12 = (int)puVar23;
    if (iVar12 == *(int *)
                   PTR___sScS12ContinuationV11YieldResultO8enqueuedyADyx__GSi_tcAFmlFWC_11034fcf8) {
      func_0x000107c61170(puVar16);
      func_0x000107c61574(lVar25);
      func_0x000107c61170(puVar19);
      pcVar32 = *(code **)(lVar31 + 8);
LAB_101e6dcfc:
      (*pcVar32)(lVar4,lVar13);
    }
    else {
      if (iVar12 != *(int *)
                     PTR___sScS12ContinuationV11YieldResultO7droppedyADyx__GxcAFmlFWC_11034fcf0) {
        if (iVar12 != *(int *)
                       PTR___sScS12ContinuationV11YieldResultO10terminatedyADyx__GAFmlFWC_11034fce8)
        {
          puStack_c0 = (undefined1 *)0x1;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          func_0x000100b60084(&puStack_c0);
          func_0x000107c61170(puVar16);
          func_0x000107c61574(lVar25);
          func_0x000107c61170(puVar19);
          pcVar32 = *(code **)(lStack_158 + 8);
          (*pcVar32)(lVar4,lVar13);
          (**(code **)(lStack_118 + 8))(lVar26,lVar27);
          (*pcVar32)(puStack_150,lVar13);
          return;
        }
        uStack_a0 = 0;
        uStack_b8 = 0;
        puStack_c0 = (undefined1 *)0x0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        func_0x000100b60084(&puStack_c0);
        func_0x000107c61170(puVar16);
        func_0x000107c61574(lVar25);
        func_0x000107c61170(puVar19);
        pcVar32 = *(code **)(lStack_158 + 8);
        goto LAB_101e6dcfc;
      }
      pcVar32 = *(code **)(lVar31 + 8);
      (*pcVar32)(puStack_150,lVar13);
      puStack_c0 = (undefined1 *)0x1;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      func_0x000100b60084(&puStack_c0);
      func_0x000107c61170(puVar16);
      func_0x000107c61574(lVar25);
      func_0x000107c61170(puVar19);
      (*pcVar32)(lVar4,lVar13);
    }
  }
  pcVar32 = *(code **)(lStack_118 + 8);
LAB_101e6e05c:
  (*pcVar32)(lVar26,lVar27);
  return;
}



/* Entry: 101e6e0a0; end: 101e6e39b;  */

void FUN_101e6e0a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *apuStack_100 [6];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar3 = 0;
  uStack_148 = param_6;
  uStack_140 = param_7;
  uStack_128 = param_5;
  func_0x000107c5f7fc();
  lStack_110 = *(long *)(lVar3 + -8);
  lStack_130 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar7 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_138 = lVar7;
  func_0x000107c5f824();
  lStack_120 = *(long *)(lVar3 + -8);
  lStack_118 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_90 = param_1[2];
  uStack_88 = (undefined1)param_1[3];
  uStack_7f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  func_0x0001000f11b0();
  lStack_108 = param_2;
  if (param_2 != 0) {
    uStack_150 = param_11;
    puVar4 = (undefined8 *)&UNK_11048fef0;
    func_0x000107c613fc(&UNK_11048fef0,0x88,7);
    uVar6 = uStack_128;
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar4[6] = param_1[1];
    puVar4[5] = uVar8;
    puVar4[2] = param_3;
    puVar4[3] = param_4;
    puVar4[4] = uStack_128;
    puVar4[8] = uVar10;
    puVar4[7] = uVar9;
    uVar8 = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)((long)puVar4 + 0x49) = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)((long)puVar4 + 0x41) = uVar8;
    puVar4[0xb] = lVar3;
    puVar4[0xc] = uStack_148;
    puVar4[0xd] = uStack_140;
    *(int *)(puVar4 + 0xe) = (int)param_8;
    *(int *)((long)puVar4 + 0x74) = (int)((ulong)param_8 >> 0x20);
    puVar4[0xf] = param_9;
    puVar4[0x10] = param_10;
    pcStack_b0 = FUN_101e700d0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000b0c7c;
    puStack_b8 = &UNK_11048ff08;
    ppuVar5 = &puStack_d0;
    puStack_a8 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c6157c(param_3);
    FUN_101e6f22c(param_4,uVar6);
    FUN_101e70124(&uStack_a0,apuStack_100,0x112e340f8,&UNK_10da1d848);
    func_0x000107c61174(param_10);
    func_0x000107c5f808(lVar7);
    apuStack_100[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar6;
    func_0x0001001c7f30();
    lVar1 = lStack_130;
    lVar3 = lStack_138;
    func_0x000107c60264(lStack_138,apuStack_100,uVar6,uVar8,lStack_130,param_10);
    func_0x000107c5ffe8(0,lVar7,lVar3,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    (**(code **)(lStack_110 + 8))(lVar3,lVar1);
    (**(code **)(lStack_120 + 8))(lVar7,lStack_118);
    puVar4 = puStack_a8;
    func_0x000107c61574();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar6 = *puVar4;
    func_0x000107c61174(uVar6);
    func_0x000100069b5c(uStack_150);
    func_0x000107c61170(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e6e39c);
  (*pcVar2)();
}



/* Entry: 101e6e39c; end: 101e6e6e3;  */

void FUN_101e6e39c(long param_1,code *param_2,undefined8 param_3,long *param_4,long param_5,
                  long param_6,undefined *param_7,long param_8,long param_9,long param_10)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [32];
  long lVar4;
  
  lVar5 = *param_4;
  func_0x000107c61428(param_1 + 0x10,auStack_c0,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e6d8);
      (*pcVar1)();
    }
    (*param_2)(0,0);
  }
  else {
    if ((char)param_4[5] == '\x01') {
      lStack_108 = lVar5;
      func_0x000107c614b0(lVar5);
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar3 = &uStack_140;
      func_0x000107c6147c(puVar3,&lStack_108,uVar7,&UNK_1106e9908,6);
      if (((ulong)puVar3 & 1) == 0) {
        lStack_138 = 0;
        uStack_140 = 0;
        dStack_128 = 0.0;
        uStack_130 = 0;
        lStack_118 = 0;
        lStack_110 = 0;
        puStack_120 = (undefined *)0x1;
        func_0x000101e7016c(&uStack_140,0x112e34100,&UNK_10da1d858);
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        lVar6 = *(long *)(param_1 + 0x58);
        lVar4 = param_1 + 0x38;
        func_0x0001000a8868(lVar4,uVar7);
        puStack_e0 = &UNK_1106e9b18;
        FUN_101e6ff1c();
        lStack_d8 = lVar4;
        func_0x000101e6ff5c();
        uStack_100 = CONCAT71(uStack_100._1_7_,0xd);
        lVar6 = *(long *)(lVar6 + 8);
        pcVar1 = *(code **)(lVar6 + 8);
        lStack_f8 = lVar5;
        lStack_d0 = lVar4;
        func_0x000107c614b0(lVar5);
        (*pcVar1)(&uStack_100,uVar7,lVar6);
      }
      else {
        lStack_f8 = lStack_138;
        uStack_100 = uStack_140;
        dStack_e8 = dStack_128;
        uStack_f0 = uStack_130;
        lStack_d8 = lStack_118;
        puStack_e0 = puStack_120;
        lStack_d0 = lStack_110;
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        lVar5 = *(long *)(param_1 + 0x58);
        func_0x0001000a8868(param_1 + 0x38,uVar7);
        (**(code **)(*(long *)(lVar5 + 8) + 8))(&uStack_100,uVar7);
      }
      FUN_101e6fcd4(&uStack_100);
      if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e6dc);
        (*pcVar1)();
      }
    }
    else if (lVar5 == 0) {
      if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e6e0);
        (*pcVar1)();
      }
      param_10 = 0;
    }
    else if (lVar5 == 1) {
      if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e4d4);
        (*pcVar1)();
      }
    }
    else {
      if (SBORROW8(param_5,param_6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e6d4);
        (*pcVar1)();
      }
      lVar12 = param_4[1];
      lVar13 = param_4[2];
      lVar10 = param_4[3];
      lVar11 = param_4[4];
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      dVar8 = (double)(param_5 - param_6) / 1000000.0;
      lStack_d0 = param_9;
      uStack_f0 = uVar7;
      dStack_e8 = dVar8;
      puStack_e0 = param_7;
      lStack_d8 = param_8;
      func_0x000107c6157c(uVar7);
      func_0x000100087bd4(FUN_101e701ac,&uStack_100,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar7);
      lVar6 = *(long *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(lVar6 + 0x78);
      uVar9 = *(undefined8 *)(lVar6 + 0x80);
      lVar4 = lVar6;
      func_0x000107c6157c();
      iVar2 = (int)lVar4;
      func_0x000107c609fc(uVar7,uVar9,0,0);
      if (iVar2 != 0) {
        *(long *)(lVar6 + 0x78) = lVar12;
        *(long *)(lVar6 + 0x80) = lVar13;
      }
      func_0x000107c61574(lVar6);
      lVar6 = *(long *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(lVar6 + 0x88);
      uVar9 = *(undefined8 *)(lVar6 + 0x90);
      lVar4 = lVar6;
      func_0x000107c6157c();
      iVar2 = (int)lVar4;
      func_0x000107c609fc(uVar7,uVar9,0,0);
      if (iVar2 != 0) {
        *(long *)(lVar6 + 0x88) = lVar10;
        *(long *)(lVar6 + 0x90) = lVar11;
      }
      func_0x000107c61574(lVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      func_0x000107c6157c(uVar7);
      FUN_101e86c34(dVar8);
      func_0x000107c61574(uVar7);
      param_10 = lVar5;
      if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6e6e4);
        (*pcVar1)();
      }
    }
    (*param_2)(param_10,0);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101e6e6e4; end: 101e6e823;  */

/* WARNING: Possible PIC construction at 0x000101e6e818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6e81c) */

void FUN_101e6e6e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x000107c60ad0(param_1,0);
  if ((int)lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar3 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    auStack_68[0] = 0x10;
    (**(code **)(*(long *)(lVar3 + 8) + 8))(auStack_68,uVar1);
    FUN_101e6fcd4(auStack_68);
    return;
  }
  lVar3 = param_1;
  func_0x000107c60aa8();
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar3 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    auStack_68[0] = 0x11;
    (**(code **)(*(long *)(lVar3 + 8) + 8))(auStack_68,uVar1);
    FUN_101e6fcd4(auStack_68);
  }
  else {
    lVar4 = param_1;
    func_0x000107c60ab8();
    lVar5 = param_1;
    func_0x000107c60ab0();
    if (0x31 < lVar4) {
      lVar4 = 0x32;
    }
    if (SUB168(SEXT816(lVar4) * SEXT816(lVar5),8) != lVar4 * lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e6e824);
      (*pcVar2)();
    }
    func_0x000107c610bc(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferUnlockBaseAddress_11034a2a8)(param_1,0);
  return;
}



/* Entry: 101e6e824; end: 101e6e8ef; -[_TtC28SCPlaybackPlayerServicesImpl33NeoPlayerSuperResolutionProcessor processSampleBuffer:completionQueue:completion:] */

void FUN_101e6e824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_11048fec8;
    func_0x000107c613fc(&UNK_11048fec8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    uVar4 = 0x101e700a4;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_101e6d44c(param_3,param_4,uVar4,puVar3);
  func_0x000101e70094(uVar4,puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101e6e8f0; end: 101e6e947;  */

void FUN_101e6e8f0(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e6e948; end: 101e6ebe3;  */

undefined * FUN_101e6e948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  byte abStack_98 [8];
  
  puVar5 = PTR___sSiN_11034deb0;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  fVar17 = *(float *)(unaff_x20 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  func_0x000100087bd4(abStack_98,0x101e6f2ac,lVar8,PTR___sSiN_11034deb0);
  uVar4 = 0;
  func_0x000100087bd4(abStack_98,0x101e6f2c4,lVar8,puVar5);
  dVar12 = 0.0;
  func_0x000107c609fc(*(undefined8 *)(lVar8 + 0x78),*(undefined8 *)(lVar8 + 0x80),0,0);
  dVar11 = 0.0;
  if ((uVar4 & 1) == 0) {
    dVar10 = *(double *)(lVar8 + 0x88) / *(double *)(lVar8 + 0x78);
    dVar11 = *(double *)(lVar8 + 0x90) / *(double *)(lVar8 + 0x80);
    if (dVar11 < dVar10) {
      dVar11 = dVar10;
    }
  }
  if (0 < (long)*(ulong *)(lVar8 + 0x40)) {
    dVar12 = (*(double *)(lVar8 + 0x38) * 1000.0) / (double)*(ulong *)(lVar8 + 0x40);
  }
  uVar13 = *(undefined8 *)(lVar8 + 0x58);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar16 = *(undefined8 *)(lVar8 + 0x70);
  uVar7 = 0x112e33f20;
  func_0x0001000285a8(0x112e33f20,&UNK_10da1df60);
  func_0x000100087bd4(abStack_98,0x101e6f2dc,lVar8,uVar7);
  if (abStack_98[0] < 3) {
    uVar1 = 0xef776f4c65746174;
    uVar3 = 0x5379726574746162;
    if (abStack_98[0] != 1) {
      uVar1 = 0x800000010f015b10;
      uVar3 = 0xd000000000000018;
    }
    uVar7 = 0xd000000000000013;
    uVar9 = 0x800000010f015b30;
    if (abStack_98[0] != 0) {
      uVar7 = uVar3;
      uVar9 = uVar1;
    }
  }
  else if (abStack_98[0] == 3) {
    uVar7 = 0xd000000000000026;
    uVar9 = 0x800000010f015ae0;
  }
  else {
    if (abStack_98[0] != 4) {
      func_0x000107c5fadc(uVar6,uVar2);
      uVar7 = 0;
      goto LAB_101e6eb48;
    }
    uVar7 = 0xd00000000000001f;
    uVar9 = 0x800000010f015ac0;
  }
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c6142c(uVar9);
LAB_101e6eb48:
  puVar5 = PTR_PTR_1126a9698;
  func_0x000107c610f8(PTR_PTR_1126a9698);
  func_0x000107c47840((double)fVar17,dVar11,uVar13,uVar14,dVar12,uVar15,uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  return puVar5;
}



/* Entry: 101e6ebe4; end: 101e6ee03;  */

void FUN_101e6ebe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e340c0;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e340c0,&UNK_10da1d818);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e340b8;
  func_0x0001000285a8(0x112e340b8,&UNK_10da1d810);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e340f0;
  func_0x0001000285a8(0x112e340f0,&UNK_10da1d840);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_11048fde0,puVar11,FUN_101e7008c,auStack_80,&UNK_11048fde0);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101e70124(lVar9,lVar8,0x112e340f0,&UNK_10da1d840);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101e7016c(lVar9,0x112e340f0,&UNK_10da1d840);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6ee04);
  (*pcVar1)();
}



/* Entry: 101e6ee04; end: 101e6ee87;  */

void FUN_101e6ee04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101e7016c(param_2,0x112e340f0,&UNK_10da1d840);
  lVar1 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e6ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101e6ee88; end: 101e6f117;  */

long FUN_101e6ee88(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,long param_14,long param_15,undefined8 param_16)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 auStack_c0 [4];
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  
  uStack_a8 = param_10;
  uStack_bc = (uint)param_11;
  lVar1 = 0;
  uStack_b8 = param_5;
  uStack_ac = param_6;
  uStack_a0 = param_9;
  FUN_101e6f118();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = param_15;
  uStack_78 = param_16;
  func_0x0001000c5db4(auStack_98);
  (**(code **)(*(long *)(param_15 + -8) + 0x20))();
  lVar1 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,3,lVar1);
  func_0x0001000285a8(0x112e33e28,&UNK_10da1d860);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined1 **)(param_14 + 0x80) = puVar2;
  *(undefined8 *)(param_14 + 0x10) = param_2;
  *(undefined8 *)(param_14 + 0x18) = param_3;
  *(undefined8 *)(param_14 + 0x20) = param_4;
  *(undefined8 *)(param_14 + 0x28) = uStack_b8;
  *(undefined4 *)(param_14 + 0x30) = param_1;
  *(char *)(param_14 + 0x34) = (char)uStack_ac;
  *(char *)(param_14 + 0x78) = (char)uStack_bc;
  func_0x000101e6fd08(auStack_98,param_14 + 0x38);
  *(undefined8 *)(param_14 + 0x60) = param_8;
  *(undefined8 *)(param_14 + 0x68) = uStack_a0;
  *(undefined8 *)(param_14 + 0x70) = uStack_a8;
  func_0x000107c6157c(param_8);
  FUN_101e6c1bc(param_13);
  func_0x0001000834e4(param_13);
  func_0x0001000834e4(auStack_98);
  return param_14;
}



/* Entry: 101e6f118; end: 101e6f14f;  */

void FUN_101e6f118(undefined8 param_1)

{
  if (lRam0000000112e34070 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e694ba8);
  return;
}



/* Entry: 101e6f150; end: 101e6f18b;  */

undefined8 FUN_101e6f150(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101e6f118();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101e6f18c; end: 101e6f1a3;  */

void FUN_101e6f18c(void)

{
  FUN_101e89044();
  return;
}



/* Entry: 101e6f1a4; end: 101e6f1d7;  */

undefined8 FUN_101e6f1a4(undefined8 param_1)

{
  (*(code *)(undefined *)0x101e83e94)();
  return param_1;
}



/* Entry: 101e6f1d8; end: 101e6f22b;  */

void FUN_101e6f1d8(void)

{
  FUN_101e88548();
  return;
}



/* Entry: 101e6f22c; end: 101e6f23b;  */

void FUN_101e6f22c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101e6f23c; end: 101e6f313;  */

void FUN_101e6f23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc66178;
  func_0x000107c61520(&UNK_10dc66178,&UNK_1106e9908);
  puRam0000000112e33f18 = puVar1;
  return;
}



/* Entry: 101e6f314; end: 101e6f33b;  */

void FUN_101e6f314(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 101e6f33c; end: 101e6f397;  */

undefined8 * FUN_101e6f33c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101e6f398; end: 101e6f3d3;  */

undefined8 * FUN_101e6f398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101e6f3d4; end: 101e6f467;  */

int FUN_101e6f3d4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e6f468; end: 101e6f583;  */

long * FUN_101e6f468(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = 0x112e33e20;
    func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
    lVar6 = *(long *)(lVar3 + -8);
    plVar4 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,3,lVar3);
    if ((int)plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar7 + 0x40));
      return param_1;
    }
    lVar7 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar7;
    (*(code *)**(undefined8 **)(lVar7 + -8))(param_1,param_2);
    iVar2 = *(int *)(lVar3 + 0x30);
    lVar7 = 0x112e33ef8;
    func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar7);
    (**(code **)(lVar6 + 0x38))(param_1,0,3,lVar3);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101e6f584; end: 101e6f60f;  */

void FUN_101e6f584(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,3,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
  func_0x0001000834e4(param_1);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar2 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
                    /* WARNING: Could not recover jumptable at 0x000101e6f60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 101e6f610; end: 101e6f707;  */

long FUN_101e6f610(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  lVar3 = *(long *)(lVar2 + -8);
  lVar4 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,3,lVar2);
  if ((int)lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar4;
  (*(code *)**(undefined8 **)(lVar4 + -8))(param_1,param_2);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar4 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar4);
  (**(code **)(lVar3 + 0x38))(param_1,0,3,lVar2);
  return param_1;
}



/* Entry: 101e6f708; end: 101e6f883;  */

long FUN_101e6f708(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar4 = param_1;
  (*pcVar6)(param_1,3,lVar2);
  lVar3 = param_2;
  (*pcVar6)(param_2,3,lVar2);
  if ((int)lVar4 == 0) {
    if ((int)lVar3 != 0) {
      func_0x000101e7016c(param_1,0x112e33e20,&UNK_10da1d330);
      goto LAB_101e6f804;
    }
    func_0x000100083374(param_1,param_2);
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar2 = 0x112e33ef8;
    func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
    (**(code **)(*(long *)(lVar2 + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
  }
  else {
    if ((int)lVar3 != 0) {
LAB_101e6f804:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar4 = *(long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x18) = lVar4;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1,param_2);
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar4 = 0x112e33ef8;
    func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,3,lVar2);
  }
  return param_1;
}



/* Entry: 101e6f884; end: 101e6f96b;  */

undefined8 * FUN_101e6f884(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,3,lVar2);
  if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[4] = param_2[4];
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar4 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  (**(code **)(lVar5 + 0x38))(param_1,0,3,lVar2);
  return param_1;
}



/* Entry: 101e6f96c; end: 101e6fadf;  */

undefined8 * FUN_101e6f96c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  puVar3 = param_1;
  (*pcVar7)(param_1,3,lVar2);
  puVar4 = param_2;
  (*pcVar7)(param_2,3,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 != 0) {
      func_0x000101e7016c(param_1,0x112e33e20,&UNK_10da1d330);
      goto LAB_101e6fa54;
    }
    func_0x0001000834e4(param_1);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    param_1[4] = param_2[4];
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar2 = 0x112e33ef8;
    func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  }
  else {
    if ((int)puVar4 != 0) {
LAB_101e6fa54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    param_1[4] = param_2[4];
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar5 = 0x112e33ef8;
    func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
    (**(code **)(lVar6 + 0x38))(param_1,0,3,lVar2);
  }
  return param_1;
}



/* Entry: 101e6fae0; end: 101e6faf7;  */

void FUN_101e6fae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101e6faf8; end: 101e6fb3b;  */

void FUN_101e6faf8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
                    /* WARNING: Could not recover jumptable at 0x000101e6fb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,3,lVar1);
  return;
}



/* Entry: 101e6fb3c; end: 101e6fb3f;  */

void FUN_101e6fb3c(void)

{
  return;
}



/* Entry: 101e6fb40; end: 101e6fbfb;  */

void FUN_101e6fb40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e33e20;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
                    /* WARNING: Could not recover jumptable at 0x000101e6fb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,3,lVar1);
  return;
}



/* Entry: 101e6fbfc; end: 101e6fc4b;  */

void FUN_101e6fbfc(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e34080 != 0) {
    return;
  }
  puVar1 = &UNK_11048fde0;
  func_0x000107c5fd30();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e34080 = param_1;
  return;
}



/* Entry: 101e6fc4c; end: 101e6fc53;  */

void FUN_101e6fc4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  long alStack_360 [2];
  long alStack_350 [4];
  undefined1 *puStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [40];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 auStack_208 [48];
  undefined8 auStack_1d8 [5];
  char cStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_1a8,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_101e70124(param_1,auStack_1d8,0x112e34088,&UNK_10da1d7f0);
    if (cStack_1b0 == '\x01') {
      uVar10 = *(undefined8 *)(lVar4 + 0x80);
      func_0x000107c6157c(uVar10);
      func_0x000100075034(FUN_101e6d130,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar10);
      uVar10 = *(undefined8 *)(lVar4 + 0x50);
      lVar14 = *(long *)(lVar4 + 0x58);
      lVar5 = lVar4 + 0x38;
      func_0x0001000a8868(lVar5,uVar10);
      uVar7 = *(undefined8 *)(lVar4 + 0x68);
      uVar2 = *(undefined8 *)(lVar4 + 0x70);
      puStack_e0 = &UNK_1106e9a18;
      FUN_101e6fc54();
      lStack_d8 = lVar5;
      func_0x000101e6fc94();
      uStack_e8 = auStack_1d8[0];
      uStack_100 = CONCAT71(uStack_100._1_7_,1);
      lVar14 = *(long *)(lVar14 + 8);
      pcVar15 = *(code **)(lVar14 + 8);
      uStack_f8 = uVar7;
      uStack_f0 = uVar2;
      lStack_d0 = lVar5;
      func_0x000107c61434(uVar2);
      func_0x000107c614b0(auStack_1d8[0]);
      (*pcVar15)(&uStack_100,uVar10,lVar14);
      func_0x000107c61574(lVar4);
      func_0x000107c614ac(auStack_1d8[0]);
      FUN_101e6fcd4(&uStack_100);
    }
    else {
      puVar16 = auStack_1d8;
      func_0x000100cd4910(puVar16,auStack_208);
      func_0x0001000f11b0();
      if (SBORROW8((long)puVar16,lVar5)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x101e6ca44);
        (*pcVar15)();
      }
      dVar19 = (double)((long)puVar16 - lVar5) / 1000.0;
      uVar10 = *(undefined8 *)(lVar4 + 0x50);
      lVar5 = *(long *)(lVar4 + 0x58);
      func_0x0001000a8868(lVar4 + 0x38,uVar10);
      if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x101e6ca48);
        (*pcVar15)();
      }
      if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x101e6ca4c);
        (*pcVar15)();
      }
      if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x101e6ca50);
        (*pcVar15)();
      }
      (**(code **)(*(long *)(lVar5 + 0x18) + 0x20))((long)dVar19,uVar10);
      *(double *)(*(long *)(lVar4 + 0x60) + 0x70) = dVar19;
      func_0x000101e6fd08(auStack_208,auStack_258);
      uVar10 = 0x112e340a0;
      func_0x0001000285a8(0x112e340a0,&UNK_10da1d7f8);
      uVar7 = 0x112e340a8;
      func_0x0001000285a8(0x112e340a8,&UNK_10da1d800);
      puVar16 = &uStack_280;
      func_0x000107c6147c(puVar16,auStack_258,uVar10,uVar7,6);
      if (((ulong)puVar16 & 1) == 0) {
        uStack_260 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        func_0x000101e7016c(&uStack_280,0x112e340b0,&UNK_10da1d808);
      }
      else {
        func_0x000100cd4910(&uStack_280,&uStack_230);
        lVar14 = lStack_210;
        lVar5 = lStack_218;
        func_0x0001000a8868(&uStack_230,lStack_218);
        (**(code **)(lVar14 + 8))();
        lVar11 = *(long *)(lVar4 + 0x60);
        uStack_98 = *(undefined8 *)(lVar11 + 0x198);
        uStack_a0 = *(undefined8 *)(lVar11 + 400);
        uStack_88 = *(undefined8 *)(lVar11 + 0x1a8);
        uStack_90 = *(undefined8 *)(lVar11 + 0x1a0);
        uStack_a8 = *(undefined8 *)(lVar11 + 0x188);
        uStack_b0 = *(undefined8 *)(lVar11 + 0x180);
        uStack_2a8 = *(undefined8 *)(lVar11 + 0x198);
        uStack_2b0 = *(undefined8 *)(lVar11 + 400);
        uStack_e8 = *(undefined8 *)(lVar11 + 0x148);
        uStack_f0 = *(undefined8 *)(lVar11 + 0x140);
        lStack_d8 = *(undefined8 *)(lVar11 + 0x158);
        puStack_e0 = *(undefined **)(lVar11 + 0x150);
        uStack_2f8 = *(undefined8 *)(lVar11 + 0x148);
        uStack_300 = *(undefined8 *)(lVar11 + 0x140);
        uStack_2e8 = *(undefined8 *)(lVar11 + 0x158);
        uStack_2f0 = *(undefined8 *)(lVar11 + 0x150);
        uStack_c8 = *(undefined8 *)(lVar11 + 0x168);
        lStack_d0 = *(undefined8 *)(lVar11 + 0x160);
        uStack_2c8 = *(undefined8 *)(lVar11 + 0x178);
        uStack_2d0 = *(undefined8 *)(lVar11 + 0x170);
        uStack_2d8 = *(undefined8 *)(lVar11 + 0x168);
        uStack_2e0 = *(undefined8 *)(lVar11 + 0x160);
        uStack_b8 = *(undefined8 *)(lVar11 + 0x178);
        uStack_c0 = *(undefined8 *)(lVar11 + 0x170);
        uStack_f8 = *(undefined8 *)(lVar11 + 0x138);
        uStack_100 = *(undefined8 *)(lVar11 + 0x130);
        uStack_298 = *(undefined8 *)(lVar11 + 0x1a8);
        uStack_2a0 = *(undefined8 *)(lVar11 + 0x1a0);
        uVar10 = *(undefined8 *)(lVar11 + 0x138);
        uStack_80 = *(undefined1 *)(lVar11 + 0x1b0);
        uStack_2b8 = *(undefined8 *)(lVar11 + 0x188);
        uStack_2c0 = *(undefined8 *)(lVar11 + 0x180);
        uStack_290 = *(undefined1 *)(lVar11 + 0x1b0);
        uStack_308 = *(undefined8 *)(lVar11 + 0x138);
        uStack_310 = *(undefined8 *)(lVar11 + 0x130);
        *(double *)(lVar11 + 0x150) = (double)lVar5;
        *(double *)(lVar11 + 0x158) = (double)lVar14;
        func_0x000107c61434(*(undefined8 *)(lVar11 + 0x188));
        func_0x000107c6157c(lVar11);
        func_0x000107c61434(uVar10);
        FUN_101e6feac(&uStack_100,&uStack_190);
        func_0x000101e6fee8(&uStack_310);
        uStack_128 = *(undefined8 *)(lVar11 + 0x198);
        uStack_130 = *(undefined8 *)(lVar11 + 400);
        uStack_118 = *(undefined8 *)(lVar11 + 0x1a8);
        uStack_120 = *(undefined8 *)(lVar11 + 0x1a0);
        uStack_110 = *(undefined1 *)(lVar11 + 0x1b0);
        uStack_168 = *(undefined8 *)(lVar11 + 0x158);
        uStack_170 = *(undefined8 *)(lVar11 + 0x150);
        uStack_158 = *(undefined8 *)(lVar11 + 0x168);
        uStack_160 = *(undefined8 *)(lVar11 + 0x160);
        uStack_148 = *(undefined8 *)(lVar11 + 0x178);
        uStack_150 = *(undefined8 *)(lVar11 + 0x170);
        uStack_138 = *(undefined8 *)(lVar11 + 0x188);
        uStack_140 = *(undefined8 *)(lVar11 + 0x180);
        uStack_188 = *(undefined8 *)(lVar11 + 0x138);
        uStack_190 = *(undefined8 *)(lVar11 + 0x130);
        uStack_178 = *(undefined8 *)(lVar11 + 0x148);
        uStack_180 = *(undefined8 *)(lVar11 + 0x140);
        puVar16 = &uStack_190;
        FUN_101e89cac(puVar16,&uStack_100);
        if (((ulong)puVar16 & 1) == 0) {
          lVar5 = lVar11 + 0x120;
          func_0x000107c61618();
          if (lVar5 != 0) {
            func_0x000107c615e8();
          }
        }
        func_0x000101e6fee8(&uStack_100);
        func_0x000107c61574(lVar11);
        func_0x0001000834e4(&uStack_230);
      }
      func_0x000101e6fd08(auStack_208,&uStack_310);
      lVar5 = 0x112e340b8;
      func_0x0001000285a8(0x112e340b8,&UNK_10da1d810);
      lVar14 = *(long *)(lVar5 + -8);
      lVar12 = *(long *)(lVar14 + 0x40);
      lStack_320 = lVar5;
      (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
      lVar11 = (long)alStack_350 - extraout_x8;
      lVar5 = 0x112e33ef8;
      func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
      alStack_350[2] = *(long *)(lVar5 + -8);
      alStack_350[3] = lVar11;
      lStack_318 = lVar5;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(alStack_350[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar8 = lVar11 - extraout_x8_00;
      lVar5 = 0x112e340c0;
      lStack_328 = lVar8;
      func_0x0001000285a8(0x112e340c0,&UNK_10da1d818);
      lVar13 = *(long *)(lVar5 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar16 = (undefined8 *)(lVar8 - extraout_x8_01);
      *puVar16 = 0;
      (**(code **)(lVar13 + 0x68))
                (puVar16,*(undefined4 *)
                          PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
                 ,lVar5);
      iVar3 = 2;
      func_0x000100029b9c(2,0x11,0,0);
      if (iVar3 == 0) {
        puStack_330 = (undefined1 *)alStack_350;
        FUN_101e6ebe4(lVar11,lStack_328,puVar16);
      }
      else {
        puStack_330 = (undefined1 *)alStack_350;
        func_0x000107c5fd10(lVar11,lStack_328,&UNK_11048fde0,puVar16,&UNK_11048fde0);
      }
      (**(code **)(lVar13 + 8))(puVar16,lVar5);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar5 = lStack_320;
      lVar13 = lVar8 - (lVar12 + 0xfU & 0xfffffffffffffff0);
      alStack_350[1] = lVar11;
      (**(code **)(lVar14 + 0x10))(lVar13,lVar11,lStack_320);
      func_0x000101e6fd4c(&uStack_310,&uStack_230);
      uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar17 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
      uVar18 = lVar12 + uVar17 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_11048fe50;
      func_0x000107c613fc(&UNK_11048fe50,uVar18 + 0x28,uVar9 | 7);
      (**(code **)(lVar14 + 0x20))(puVar6 + uVar17,lVar13,lVar5);
      puVar16 = (undefined8 *)(puVar6 + uVar18);
      puVar16[1] = uStack_228;
      *puVar16 = uStack_230;
      puVar16[3] = lStack_218;
      puVar16[2] = puStack_220;
      puVar16[4] = lStack_210;
      puVar1 = PTR___sytN_11034f1b0 + 8;
      *(undefined **)(lVar8 + -0x10) = puVar1;
      uVar7 = 2;
      func_0x0001001ca524(2,3,0x40,4,0,0,&UNK_10da1d828,puVar6);
      func_0x000107c61574(puVar6);
      func_0x000107c6157c(uVar7);
      lVar11 = lStack_328;
      func_0x000107c5fd1c(FUN_101e6fe58,uVar7,lStack_318);
      uVar10 = *(undefined8 *)(lVar4 + 0x80);
      lStack_218 = lVar11;
      puStack_220 = &uStack_310;
      func_0x000107c6157c(uVar10);
      func_0x000100075034(FUN_101e6fe7c,&uStack_230,puVar1);
      func_0x000107c61574(uVar10);
      uVar10 = *(undefined8 *)(lVar4 + 0x50);
      lVar5 = *(long *)(lVar4 + 0x58);
      func_0x0001000a8868(lVar4 + 0x38,uVar10);
      (**(code **)(*(long *)(lVar5 + 0x18) + 0x50))(uVar10);
      uVar10 = *(undefined8 *)(lVar4 + 0x60);
      puVar6 = &UNK_11048fe78;
      func_0x000107c613fc(&UNK_11048fe78,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,uVar10);
      func_0x000100087bd4(0x101e6fe94,puVar6,puVar1);
      func_0x000107c61574(uVar7);
      (**(code **)(lVar14 + 8))(alStack_350[1],lStack_320);
      func_0x0001000834e4(auStack_208);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(puVar6);
      (**(code **)(alStack_350[2] + 8))(lVar11,lStack_318);
      FUN_101e6f1a4(&uStack_310);
    }
  }
  return;
}



/* Entry: 101e6fc54; end: 101e6fcd3;  */

void FUN_101e6fc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc6620c;
  func_0x000107c61520(&DAT_10dc6620c,&UNK_1106e9a18);
  puRam0000000112e34090 = puVar1;
  return;
}



/* Entry: 101e6fcd4; end: 101e6fd87;  */

undefined8 FUN_101e6fcd4(undefined8 param_1)

{
  (*(code *)&DAT_103c12710)();
  return param_1;
}



/* Entry: 101e6fd88; end: 101e6fe1b;  */

void FUN_101e6fd88(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0x112e340b8;
  func_0x0001000285a8(0x112e340b8,&UNK_10da1d810);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e6fe1c;
  plVar1[0x20] = unaff_x20 + uVar3;
  plVar1[0x21] = unaff_x20 + (lVar2 + uVar3 + 7 & 0xfffffffffffffff8);
  lVar2 = 0x112e340c8;
  func_0x0001000285a8(0x112e340c8,&UNK_10da1d830);
  plVar1[0x22] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x23] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x24] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e6cabc,0,0);
  return;
}



/* Entry: 101e6fe1c; end: 101e6fe57;  */

void FUN_101e6fe1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e6fe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e6fe58; end: 101e6fe7b;  */

void FUN_101e6fe58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101e6fe7c; end: 101e6feab;  */

void FUN_101e6fe7c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e6d080(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101e6feac; end: 101e6ff1b;  */

undefined8 FUN_101e6feac(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x101e89384)(param_2,param_1);
  return param_2;
}



/* Entry: 101e6ff1c; end: 101e7001b;  */

void FUN_101e6ff1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e340d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc662fc;
  func_0x000107c61520(&DAT_10dc662fc,&UNK_1106e9b18);
  puRam0000000112e340d0 = puVar1;
  return;
}



/* Entry: 101e7001c; end: 101e7008b;  */

undefined8 FUN_101e7001c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103c10944)(param_2,param_1);
  return param_2;
}



/* Entry: 101e7008c; end: 101e700cf;  */

void FUN_101e7008c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101e7016c(uVar2,0x112e340f0,&UNK_10da1d840);
  lVar1 = 0x112e33ef8;
  func_0x0001000285a8(0x112e33ef8,&UNK_10da1d6d0);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e6ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 101e700d0; end: 101e70107;  */

void FUN_101e700d0(void)

{
  long unaff_x20;
  
  FUN_101e6e39c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x58)
                ,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101e70108; end: 101e70123;  */

void FUN_101e70108(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101e70124; end: 101e701ab;  */

undefined8 FUN_101e70124(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101e701ac; end: 101e701cf;  */

void FUN_101e701ac(void)

{
  long unaff_x20;
  
  FUN_101e88888(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}


