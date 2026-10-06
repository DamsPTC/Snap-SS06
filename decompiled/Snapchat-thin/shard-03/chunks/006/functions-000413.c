/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ac1b28; end: 102ac1b63;  */

void FUN_102ac1b28(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (uVar1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar7 = uVar1;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ac0740);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(uVar1 + uVar8 * 8 + 0x20);
        func_0x000107c6157c(uVar9);
      }
      else {
        uVar9 = uVar8;
        func_0x000102ac1088(uVar8,uVar1);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ac073c);
        (*pcVar3)();
      }
      uVar10 = uVar8 + 1;
      lVar4 = uVar9 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar5 = 0;
        FUN_102abefa4(0);
        uVar6 = uVar2;
        func_0x000107c5fc48(uVar2,uVar5);
        func_0x000107c4f834(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61574(uVar9);
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar7);
  }
  return;
}



/* Entry: 102ac1b64; end: 102ac1b77;  */

void FUN_102ac1b64(void)

{
  FUN_102abfaa8();
  return;
}



/* Entry: 102ac1b78; end: 102ac1c83; -[SCQuickReplyDestinationRotationHandsFreeBridge candidatesDidChangeHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1b78(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ee9c88);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x102ac1c28;
    puStack_60 = &UNK_1105951f8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102ac1c84; end: 102ac1d3f; -[SCQuickReplyDestinationRotationHandsFreeBridge setCandidatesDidChangeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1c84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105951e0;
    func_0x000107c613fc(&UNK_1105951e0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102ac2274;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee9c88);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  FUN_102ac1d8c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102ac1d40; end: 102ac1d8b;  */

void FUN_102ac1d40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102abefa4(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ac1d8c; end: 102ac1d9b;  */

void FUN_102ac1d8c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102ac1d9c; end: 102ac1e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1d9c(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ee9c90) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee9c88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee9c98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac1e04; end: 102ac1e77; -[SCQuickReplyDestinationRotationHandsFreeBridge initWithController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112ee9c90) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee9c88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112ee9c98) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 102ac1e78; end: 102ac1ea7; -[SCQuickReplyDestinationRotationHandsFreeBridge startListening] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1e78(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112ee9c90) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112ee9c90) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ee9c98),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 102ac1ea8; end: 102ac1ed7; -[SCQuickReplyDestinationRotationHandsFreeBridge stopListening] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1ea8(long param_1)

{
  if (*(char *)(param_1 + _DAT_112ee9c90) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112ee9c90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112ee9c98),PTR_s_removeListener__112628e00,param_1);
    return;
  }
  return;
}



/* Entry: 102ac1ed8; end: 102ac1ee7; -[SCQuickReplyDestinationRotationHandsFreeBridge recordSuccessfulDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ee9c98),PTR_s_recordSuccessfulDestination__1126268b8)
  ;
  return;
}



/* Entry: 102ac1ee8; end: 102ac1f0f; -[SCQuickReplyDestinationRotationHandsFreeBridge snapshotCandidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1ee8(long param_1)

{
  func_0x000107c5b564(*(undefined8 *)(param_1 + _DAT_112ee9c98));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac1f10; end: 102ac213b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac1f10(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puVar3;
  
  ppuVar6 = &puStack_60;
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar2 = (int)puVar3;
  func_0x000107c4a02c();
  if (iVar2 == 0) {
    pcVar4 = "quickReplyDestinationRotationDidChange(_:)";
    func_0x0001000c10c0("quickReplyDestinationRotationDidChange(_:)");
    func_0x000107c61180();
    puVar3 = &UNK_110595168;
    func_0x000107c613fc(&UNK_110595168,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar5 = &UNK_110595190;
    func_0x000107c613fc(&UNK_110595190,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    pcStack_40 = FUN_102ac213c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105951a8;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar4);
  }
  else if (*(char *)(unaff_x20 + _DAT_112ee9c90) == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee9c88);
    func_0x000107c61428(puVar1,&puStack_60,0,0);
    pcVar8 = (code *)*puVar1;
    if (pcVar8 != (code *)0x0) {
      uVar7 = puVar1[1];
      func_0x000107c6157c(uVar7);
      (*pcVar8)(param_1);
      FUN_102ac1d8c(pcVar8,uVar7);
    }
  }
  return;
}



/* Entry: 102ac213c; end: 102ac215f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac213c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + _DAT_112ee9c90) == '\x01') {
      puVar1 = (undefined8 *)(lVar3 + _DAT_112ee9c88);
      func_0x000107c61428(puVar1,auStack_60,0,0);
      pcVar5 = (code *)*puVar1;
      if (pcVar5 != (code *)0x0) {
        uVar4 = puVar1[1];
        func_0x000107c6157c(uVar4);
        (*pcVar5)(uVar2);
        func_0x000107c61170(lVar3);
        FUN_102ac1d8c(pcVar5,uVar4);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102ac2160; end: 102ac21b7; -[SCQuickReplyDestinationRotationHandsFreeBridge quickReplyDestinationRotationDidChange:] */

void FUN_102ac2160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102abefa4(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102ac1f10(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102ac21b8; end: 102ac2217; -[SCQuickReplyDestinationRotationHandsFreeBridge init] */

void FUN_102ac21b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCQuickReplyFeatureProviderPlugin.SCQuickReplyDestinationRotationHandsFreeBridge"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac21e4);
  (*pcVar1)();
}



/* Entry: 102ac2218; end: 102ac2253; -[SCQuickReplyDestinationRotationHandsFreeBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac2218(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee9c98));
  if (*(long *)(param_1 + _DAT_112ee9c88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ee9c88))[1]);
    return;
  }
  return;
}



/* Entry: 102ac2254; end: 102ac2273;  */

void FUN_102ac2254(void)

{
  func_0x000107c61168(&PTR_PTR_1128853f8);
  return;
}



/* Entry: 102ac2274; end: 102ac2283;  */

void FUN_102ac2274(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_102abefa4(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ac2284; end: 102ac2423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac2284(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  func_0x000100083b20(&uStack_70);
  uVar3 = uStack_70;
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0e7690);
  uVar2 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_1130385b0);
    func_0x000107c61174();
    func_0x000100083b20(&uStack_70);
    uVar3 = uStack_70;
    func_0x000107c614f0();
    (**(code **)(lStack_68 + 8))();
    func_0x000107c615e8(uStack_70);
    uVar2 = param_1;
    func_0x0001007d5f8c(param_1,param_2);
    lVar4 = 0;
    func_0x0001007d6080();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined4 *)(lVar4 + 0x2f) = 0;
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    *(long *)(unaff_x20 + 0x10) = lVar4;
    func_0x000107c6157c();
    func_0x0001007d60a0();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
  }
  return unaff_x20;
}



/* Entry: 102ac2424; end: 102ac24e7;  */

undefined1  [16] FUN_102ac2424(void)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  ppuVar3 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    pcVar2 = "deactivate()";
    func_0x0001000c10c0("deactivate()");
    func_0x000107c61180();
    pcStack_40 = FUN_102ac25b0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110595320;
    lStack_38 = lVar4;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar2);
  }
  return ZEXT816(0);
}



/* Entry: 102ac24e8; end: 102ac24eb;  */

void FUN_102ac24e8(void)

{
  return;
}



/* Entry: 102ac24ec; end: 102ac2563;  */

void FUN_102ac24ec(undefined1 *param_1)

{
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 2;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_102ac2564,0,0x102ac2568,0,0x102ac260c,auStack_40,0x102ac256c,0,0x102ac261c
                      ,auStack_60);
  return;
}



/* Entry: 102ac2564; end: 102ac256f;  */

void FUN_102ac2564(void)

{
  return;
}



/* Entry: 102ac2570; end: 102ac25af;  */

void FUN_102ac2570(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac25b0; end: 102ac2627;  */

void FUN_102ac25b0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  if (*(char *)(unaff_x20 + 0x32) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      *(undefined1 *)(unaff_x20 + 0x32) = 0;
      puStack_68 = (undefined *)0x6176697463616564;
      uStack_60 = 0xec00000029286574;
      func_0x000107c5fb78(0x2f,0xe100000000000000);
      uStack_38 = 0x4d;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar1 = uStack_60;
      puVar3 = puStack_68;
      func_0x000107c5fadc(puStack_68,uStack_60);
      func_0x000107c6142c(uVar1);
      uStack_48 = 0x102ac27d4;
      uStack_40 = 0;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x42000000;
      puStack_58 = &UNK_1000f3aa0;
      puStack_50 = &UNK_1105953f0;
      ppuVar4 = &puStack_68;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c5ba8c(lVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 102ac2628; end: 102ac27b7;  */

void FUN_102ac2628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined4 *)(unaff_x20 + 0x2f) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102ac27b8; end: 102ac27d7;  */

void FUN_102ac27b8(long param_1,long param_2)

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



/* Entry: 102ac27d8; end: 102ac2813;  */

void FUN_102ac27d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2814; end: 102ac2823;  */

void FUN_102ac2814(long param_1,long param_2)

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



/* Entry: 102ac2824; end: 102ac28ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ac2824(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100b5729c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ee9e80) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ee9e88) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac28ac);
  (*pcVar1)();
}



/* Entry: 102ac28ac; end: 102ac290b; -[_TtC29CameraFeatureScopeGraphBridge44CameraFeatureScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ac28ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraFeatureScopeGraphBridge.CameraFeatureScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac28d8);
  (*pcVar1)();
}



/* Entry: 102ac290c; end: 102ac2943; -[_TtC29CameraFeatureScopeGraphBridge44CameraFeatureScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ac2928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac292c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac290c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee9e80));
  return;
}



/* Entry: 102ac2944; end: 102ac296b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac2944(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ee9e88),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ee9e80));
  return;
}



/* Entry: 102ac296c; end: 102ac29cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac296c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eea310);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102ac29d0; end: 102ac29d7;  */

void FUN_102ac29d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ac29d8; end: 102ac2a77;  */

void FUN_102ac29d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2a78; end: 102ac2a97;  */

void FUN_102ac2a78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102ac2a98; end: 102ac2afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac2a98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eea318);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102ac2afc; end: 102ac2b03;  */

void FUN_102ac2afc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ac2b04; end: 102ac2ba3;  */

void FUN_102ac2b04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2ba4; end: 102ac2bc3;  */

void FUN_102ac2ba4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102ac2bc4; end: 102ac2c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac2bc4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eea320);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102ac2c28; end: 102ac2c2f;  */

void FUN_102ac2c28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ac2c30; end: 102ac2ccf;  */

void FUN_102ac2c30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2cd0; end: 102ac2cef;  */

void FUN_102ac2cd0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102ac2cf0; end: 102ac2d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac2cf0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eea328);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102ac2d54; end: 102ac2d5b;  */

void FUN_102ac2d54(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ac2d5c; end: 102ac2d7f;  */

void FUN_102ac2d5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2d80; end: 102ac2d9f;  */

void FUN_102ac2d80(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102ac2da0; end: 102ac2e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ac2da0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eea330);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102ac2e04; end: 102ac2e0b;  */

void FUN_102ac2e04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ac2e0c; end: 102ac2eab;  */

void FUN_102ac2e0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ac2eac; end: 102ac2ecb;  */

void FUN_102ac2eac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102ac2ecc; end: 102ac2f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ac2ecc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eea2c8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eea2d0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ac2f54);
  (*pcVar2)();
}



/* Entry: 102ac2f54; end: 102ac303b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ac2f54(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eea2c8);
  *(undefined **)(unaff_x20 + _DAT_112eea2c8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eea2d0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eea2d0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110595640;
  func_0x000107c613fc(&UNK_110595640,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102ac3040,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102ac303c; end: 102ac3047;  */

void FUN_102ac303c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ac3048; end: 102ac30a7; -[_TtC29CameraFeatureScopeGraphBridge44SCCameraFeatureScopedServicesSaberEntryPoint init] */

void FUN_102ac3048(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraFeatureScopeGraphBridge.SCCameraFeatureScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac3074);
  (*pcVar1)();
}



/* Entry: 102ac30a8; end: 102ac30df; -[_TtC29CameraFeatureScopeGraphBridge44SCCameraFeatureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac30a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eea2d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eea2c8));
  return;
}



/* Entry: 102ac30e0; end: 102ac30e3;  */

void FUN_102ac30e0(void)

{
  return;
}



/* Entry: 102ac30e4; end: 102ac3103;  */

void FUN_102ac30e4(void)

{
  FUN_102ac2f54();
  return;
}



/* Entry: 102ac3104; end: 102ac319f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eea310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eea318) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eea320) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eea328) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eea330) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac31a0; end: 102ac31ff; -[_TtC29CameraFeatureScopeGraphBridge37CameraFeatureScopeGraphBridgeServices init] */

void FUN_102ac31a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraFeatureScopeGraphBridge.CameraFeatureScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac31cc);
  (*pcVar1)();
}



/* Entry: 102ac3200; end: 102ac32c3; -[_TtC29CameraFeatureScopeGraphBridge37CameraFeatureScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ac321c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac323c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac3220) */
/* WARNING: Removing unreachable block (ram,0x000102ac3240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea310));
  return;
}



/* Entry: 102ac32c4; end: 102ac32fb;  */

undefined1  [16] FUN_102ac32c4(void)

{
  return ZEXT816(0x1105956e8);
}



/* Entry: 102ac32fc; end: 102ac333f; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint end] */

void FUN_102ac32fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3340; end: 102ac3373;  */

void FUN_102ac3340(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac3374; end: 102ac33bb; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ac33a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac33a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3374(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea388);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eea390));
  return;
}



/* Entry: 102ac33bc; end: 102ac33db;  */

void FUN_102ac33bc(void)

{
  func_0x000107c61168(&PTR_PTR_112885738);
  return;
}



/* Entry: 102ac33dc; end: 102ac33e7; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac33dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea3c8;
  func_0x000107c61428(param_1 + _DAT_112eea3c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac33e8; end: 102ac33f3; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac33e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea3c8;
  func_0x000107c61428(param_1 + _DAT_112eea3c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac33f4; end: 102ac33ff; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider cameraFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac33f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea3d0;
  func_0x000107c61428(param_1 + _DAT_112eea3d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3400; end: 102ac3443;  */

void FUN_102ac3400(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3444; end: 102ac344f; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider setCameraFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea3d0;
  func_0x000107c61428(param_1 + _DAT_112eea3d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac3450; end: 102ac34a3;  */

void FUN_102ac3450(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac34a4; end: 102ac36b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ac34a4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102ac29fc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eea310);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eea3d8);
      *(long *)(unaff_x20 + _DAT_112eea3d8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CameraFeatureScopeGraphBridge/SCLensDeeplinkSendToControllingServicesSaberServiceProvider.swift"
                      ,0x5f,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac35d0);
  (*pcVar1)();
}



/* Entry: 102ac36b8; end: 102ac36eb; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider provide] */

void FUN_102ac36b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac34a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac36ec; end: 102ac371f; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider __safeProvide] */

void FUN_102ac36ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ac35d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac3720; end: 102ac3763; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider end] */

void FUN_102ac3720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3764; end: 102ac38fb;  */

void FUN_102ac3764(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f185a0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0e7a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCLensDeeplinkSendToControllingServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x7c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac38fc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ac38fc; end: 102ac39a7; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102ac38fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102ac3764(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ac39a8; end: 102ac3a1b; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac39a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea3c8,0);
  func_0x000107c61614(param_1 + _DAT_112eea3d0,0);
  *(undefined8 *)(param_1 + _DAT_112eea3d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac3a1c; end: 102ac3a4f;  */

void FUN_102ac3a1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac3a50; end: 102ac3a97; -[SCLensDeeplinkSendToControllingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3a50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea3c8);
  func_0x000107c61610(param_1 + _DAT_112eea3d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea3d8));
  return;
}



/* Entry: 102ac3a98; end: 102ac3ab7;  */

void FUN_102ac3a98(void)

{
  func_0x000107c61168(&PTR_PTR_112eea420);
  return;
}



/* Entry: 102ac3ab8; end: 102ac3ac3; -[SCSCCaptureScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3ab8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea488;
  func_0x000107c61428(param_1 + _DAT_112eea488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3ac4; end: 102ac3acf; -[SCSCCaptureScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea488;
  func_0x000107c61428(param_1 + _DAT_112eea488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac3ad0; end: 102ac3adb; -[SCSCCaptureScopeServicesSaberServiceProvider cameraFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3ad0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea490;
  func_0x000107c61428(param_1 + _DAT_112eea490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3adc; end: 102ac3b1f;  */

void FUN_102ac3adc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3b20; end: 102ac3b2b; -[SCSCCaptureScopeServicesSaberServiceProvider setCameraFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac3b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea490;
  func_0x000107c61428(param_1 + _DAT_112eea490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac3b2c; end: 102ac3b7f;  */

void FUN_102ac3b2c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac3b80; end: 102ac3d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ac3b80(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102ac2b28();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eea318);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eea498);
      *(long *)(unaff_x20 + _DAT_112eea498) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CameraFeatureScopeGraphBridge/SCSCCaptureScopeServicesSaberServiceProvider.swift"
                      ,0x50,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac3cac);
  (*pcVar1)();
}



/* Entry: 102ac3d94; end: 102ac3dc7; -[SCSCCaptureScopeServicesSaberServiceProvider provide] */

void FUN_102ac3d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac3b80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac3dc8; end: 102ac3dfb; -[SCSCCaptureScopeServicesSaberServiceProvider __safeProvide] */

void FUN_102ac3dc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ac3cac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac3dfc; end: 102ac3e3f; -[SCSCCaptureScopeServicesSaberServiceProvider end] */

void FUN_102ac3dfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac3e40; end: 102ac3fd7;  */

void FUN_102ac3e40(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f185a0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0e7a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCSCCaptureScopeServicesSaberServiceProvider.swift"
                            ,0x50,2,0x7c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac3fd8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ac3fd8; end: 102ac4083; -[SCSCCaptureScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102ac3fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102ac3e40(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ac4084; end: 102ac40f7; -[SCSCCaptureScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4084(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea488,0);
  func_0x000107c61614(param_1 + _DAT_112eea490,0);
  *(undefined8 *)(param_1 + _DAT_112eea498) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac40f8; end: 102ac412b;  */

void FUN_102ac40f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac412c; end: 102ac4173; -[SCSCCaptureScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac412c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea488);
  func_0x000107c61610(param_1 + _DAT_112eea490);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea498));
  return;
}


