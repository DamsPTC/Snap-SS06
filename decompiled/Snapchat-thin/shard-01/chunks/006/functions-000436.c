/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10130f8ec; end: 10130f903;  */

void FUN_10130f8ec(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10130f904; end: 10130f943;  */

void FUN_10130f904(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10130f944; end: 10130f9db;  */

void FUN_10130f944(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_10130e07c();
    func_0x000107c61170(lVar2);
    if ((ulong)puVar4 >> 0x3c < 0xf) {
      if (pcVar1 != (code *)0x0) {
        func_0x00010006c00c(lVar3,puVar4);
        (*pcVar1)(lVar3,puVar4);
        func_0x0001000b44c0(lVar3,puVar4);
      }
      func_0x0001000b44c0(lVar3,puVar4);
      return;
    }
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0,0xf000000000000000);
  }
  return;
}



/* Entry: 10130f9dc; end: 10130f9df; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider venueId] */

void FUN_10130f9dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10130f9e0; end: 10130f9e3; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider snapAttachmentUrl] */

void FUN_10130f9e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10130f9e4; end: 10130f9f7; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider mediaOrigins] */

void FUN_10130f9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10130f9f8; end: 10130fbbb;  */

undefined * FUN_10130f9f8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10130fbbc);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000103f5fab8(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_101310b74(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x000103f5fab8(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10130fbbc; end: 10130fc33;  */

ulong FUN_10130fbbc(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1 >> 0x3e == 0) {
    func_0x000107c61434();
    func_0x000107c605f8();
    uVar2 = param_1;
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c61434();
    uVar1 = 0x112d71c20;
    func_0x0001000285a8(0x112d71c20,&UNK_10d9327e0);
    func_0x000107c60458(uVar2,uVar1);
    func_0x000107c6142c(param_1);
  }
  return uVar2;
}



/* Entry: 10130fc34; end: 10130fc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10130fc34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d71be8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d71be8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10130fc98();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10130fc98; end: 10130ff8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10130fc98(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar14 = *(ulong *)(param_1 + _DAT_112d71bd0);
  if (uVar14 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar16 = uVar14;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    func_0x000101310ec8(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar15 = puStack_68;
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10130ff84);
      (*pcVar3)();
    }
    uVar18 = *(undefined8 *)(param_1 + _DAT_112d71be0);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168();
    uVar17 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar14 + uVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar17;
        FUN_1013109a4(uVar17,uVar14,&PTR_PTR_1126b5180,0x112d71a88);
      }
      lVar6 = 0;
      FUN_10130e604();
      lVar7 = lVar6;
      func_0x000107c610f8();
      *(undefined8 *)(lVar7 + _DAT_112d71b50) = 1;
      lVar2 = _DAT_112d71b58;
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar12 = 1;
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar7 + lVar2,1,1,lVar8);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d71b60);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 1;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d71b68);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)(lVar7 + _DAT_112d71b70) = 1;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d71b78);
      puVar1[1] = 0xb000000000000000;
      *puVar1 = 0;
      func_0x000107c61174(uVar18);
      puVar9 = puVar4;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10130ff88);
        (*pcVar3)();
      }
      puVar10 = puVar9;
      func_0x000107c5faec();
      uVar13 = uVar12;
      func_0x000107c61170(puVar9);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d71b30);
      *puVar1 = puVar10;
      puVar1[1] = uVar12;
      puVar9 = puVar4;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10130ff8c);
        (*pcVar3)();
      }
      puVar10 = puVar9;
      func_0x000107c5faec();
      func_0x000107c61170(puVar9);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d71b38);
      *puVar1 = puVar10;
      puVar1[1] = uVar13;
      *(ulong *)(lVar7 + _DAT_112d71b40) = uVar5;
      *(undefined8 *)(lVar7 + _DAT_112d71b48) = uVar18;
      plVar11 = &lStack_78;
      lStack_78 = lVar7;
      lStack_70 = lVar6;
      func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
      uVar5 = *(ulong *)(puVar15 + 0x10);
      puStack_68 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
        func_0x000101310ec8(1 < *(ulong *)(puVar15 + 0x18),uVar5 + 1,1);
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      *(long **)(puStack_68 + uVar5 * 8 + 0x20) = plVar11;
      puVar15 = puStack_68;
    } while (uVar16 != uVar17);
  }
  return puStack_68;
}



/* Entry: 10130ff8c; end: 10130ffeb; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToSendFlowMediaHandler init] */

void FUN_10130ff8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCExternalSendToDeepLinkPlugin.ExternalSendToSendFlowMediaHandler",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10130ffb8);
  (*pcVar1)();
}



/* Entry: 10130ffec; end: 101310043; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToSendFlowMediaHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101310008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131000c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130ffec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d71bd0));
  return;
}



/* Entry: 101310044; end: 101310063;  */

void FUN_101310044(void)

{
  func_0x000107c61168(&PTR_PTR_1127c6b90);
  return;
}



/* Entry: 101310064; end: 101310067; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToSendFlowMediaHandler finalizeSendingMedia:businessIds:recipientUserIds:groups:quickPostOurStorySelected:circumstanceEngine:isCrossPosting:isEligibleForCrossPostingSpotlightToStories:massSnapRecipientIds:crossPostToStoryInfo:] */

void FUN_101310064(void)

{
  return;
}



/* Entry: 101310068; end: 1013100df; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToSendFlowMediaHandler sharedChatMediasToUpload] */

void FUN_101310068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10130fc34();
  uVar2 = uVar1;
  FUN_10130fbbc();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar1);
  uVar1 = 0x112d71c20;
  func_0x0001000285a8(0x112d71c20,&UNK_10d9327e0);
  uVar3 = uVar2;
  func_0x000107c5fc48(uVar2,uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1013100e0; end: 10131029f;  */

undefined * FUN_1013100e0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  FUN_10130fc34();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101310254);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        func_0x000101310d10(uVar10,param_1);
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101310250);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      FUN_1013102a0();
      if (uVar4 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x000107c614f0();
        uStack_a0 = uVar4;
        uStack_88 = uVar5;
      }
      func_0x000107c61170(uVar3);
      if (uStack_88 == 0) {
        func_0x00010006e7f4(&uStack_a0);
      }
      else {
        func_0x000100102924(&uStack_a0,auStack_80);
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_101310ee4(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar3 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_101310ee4(puVar8,uVar3 + 1,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_80,puVar8 + uVar3 * 0x20 + 0x20);
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar9);
  }
  func_0x000107c6142c(param_1);
  return puVar8;
}



/* Entry: 1013102a0; end: 101310507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013102a0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_2 + _DAT_112d71bd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c409fc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c54640(lVar4);
    func_0x000107c5947c(lVar4);
    FUN_10130e8b8();
    func_0x0001085439dc();
    func_0x000107c5a0f8(lVar4);
    lVar1 = lVar4;
    func_0x000107c5538c(lVar4);
    FUN_10130e07c();
    if (param_2 >> 0x3c < 0xf) {
      lVar5 = lVar1;
      func_0x000107c5ee20();
      func_0x0001000b44c0(lVar1,param_2);
    }
    else {
      lVar5 = 0;
    }
    func_0x000107c56404(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c4c9a0(lVar4);
    lVar1 = lVar4;
    func_0x000107c3fe6c(lVar4);
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5e7ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar5);
    lVar1 = lVar4;
    func_0x000107c3fe6c();
    func_0x000107c61180();
    FUN_10130e8b8();
    func_0x0001085439dc();
    lVar5 = lVar1;
    func_0x000107c5e6ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170();
    FUN_10130f170();
    if (lVar5 != 0) {
      lVar1 = lVar4;
      func_0x000107c3fe6c(lVar4);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c4b1dc(lVar5);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5e650(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar2);
      lVar1 = lVar5;
      func_0x000107c4058c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        func_0x000107c5fadc(lVar6,param_2);
        func_0x000107c6142c(param_2);
      }
      puVar3 = PTR_PTR_1126b2378;
      func_0x000107c61168(PTR_PTR_1126b2378);
      func_0x000107c44e9c();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c538e4(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar3);
    }
  }
  return lVar4;
}



/* Entry: 101310508; end: 101310567; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToSendFlowMediaHandler ephemeralMediaList] */

void FUN_101310508(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1013100e0();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101310568; end: 10131058b;  */

void FUN_101310568(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d60fb8;
  plVar5 = (long *)&UNK_10d9272b0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10131128c(0,0x112d60fb0,&PTR_PTR_1126b3568);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10131058c; end: 10131066f;  */

void FUN_10131058c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10131128c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101310670; end: 1013106b7;  */

void FUN_101310670(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d71c30;
  plVar5 = (long *)&UNK_10d9327f8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10131128c(0,0x112d71a88,&PTR_PTR_1126b5180);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1013106b8; end: 10131080b;  */

ulong FUN_1013106b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10131080c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10131080c(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101310808);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10131080c; end: 101310897;  */

undefined *
FUN_10131080c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000101310604(param_3,param_4,param_5);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101310898; end: 10131098f;  */

long FUN_101310898(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10131098c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101310990);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103f5fab8(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000103f5fab8(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101310988);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101310990; end: 1013109a3;  */

ulong FUN_101310990(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a88);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a8c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0648;
    func_0x000107c61168(PTR_PTR_1126b0648);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b0648;
    func_0x000107c61168(PTR_PTR_1126b0648);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10131128c(0,0x112d71c38,&PTR_PTR_1126b0648);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101310b60);
  (*pcVar2)();
}



/* Entry: 1013109a4; end: 101310b5f;  */

ulong FUN_1013109a4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a88);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a8c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10131128c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101310b60);
  (*pcVar2)();
}



/* Entry: 101310b60; end: 101310b73;  */

ulong FUN_101310b60(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a88);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310a8c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b5180;
    func_0x000107c61168(PTR_PTR_1126b5180);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b5180;
    func_0x000107c61168(PTR_PTR_1126b5180);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10131128c(0,0x112d71a88,&PTR_PTR_1126b5180);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101310b60);
  (*pcVar2)();
}



/* Entry: 101310b74; end: 101310eab;  */

ulong FUN_101310b74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310c44);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101310c48);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103f5fab8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103f5fab8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef35d90);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101310d10);
  (*pcVar2)();
}



/* Entry: 101310eac; end: 101310ee3;  */

void FUN_101310eac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000101310ffc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101310ee4; end: 10131128b;  */

undefined *
FUN_101310ee4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101310ffc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sypN_11034f1a8 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10131128c; end: 1013112cb;  */

void FUN_10131128c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013112cc; end: 1013112d7; -[SCExternalSendToDeepLinkPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013112cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c48;
  func_0x000107c61428(param_1 + _DAT_112d71c48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013112d8; end: 1013112e3; -[SCExternalSendToDeepLinkPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013112d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c48;
  func_0x000107c61428(param_1 + _DAT_112d71c48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013112e4; end: 1013112ef; -[SCExternalSendToDeepLinkPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013112e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c50;
  func_0x000107c61428(param_1 + _DAT_112d71c50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013112f0; end: 1013112fb; -[SCExternalSendToDeepLinkPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013112f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c50;
  func_0x000107c61428(param_1 + _DAT_112d71c50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013112fc; end: 101311307; -[SCExternalSendToDeepLinkPluginEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013112fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c58;
  func_0x000107c61428(param_1 + _DAT_112d71c58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311308; end: 101311313; -[SCExternalSendToDeepLinkPluginEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c58;
  func_0x000107c61428(param_1 + _DAT_112d71c58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311314; end: 10131131f; -[SCExternalSendToDeepLinkPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311314(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c60;
  func_0x000107c61428(param_1 + _DAT_112d71c60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311320; end: 10131132b; -[SCExternalSendToDeepLinkPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c60;
  func_0x000107c61428(param_1 + _DAT_112d71c60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131132c; end: 101311337; -[SCExternalSendToDeepLinkPluginEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131132c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c68;
  func_0x000107c61428(param_1 + _DAT_112d71c68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311338; end: 101311343; -[SCExternalSendToDeepLinkPluginEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c68;
  func_0x000107c61428(param_1 + _DAT_112d71c68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311344; end: 10131134f; -[SCExternalSendToDeepLinkPluginEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311344(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c70;
  func_0x000107c61428(param_1 + _DAT_112d71c70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311350; end: 10131135b; -[SCExternalSendToDeepLinkPluginEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c70;
  func_0x000107c61428(param_1 + _DAT_112d71c70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131135c; end: 101311367; -[SCExternalSendToDeepLinkPluginEntryPoint conversationDestinationParsingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131135c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c78;
  func_0x000107c61428(param_1 + _DAT_112d71c78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311368; end: 101311373; -[SCExternalSendToDeepLinkPluginEntryPoint setConversationDestinationParsingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311368(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c78;
  func_0x000107c61428(param_1 + _DAT_112d71c78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311374; end: 10131137f; -[SCExternalSendToDeepLinkPluginEntryPoint groupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c80;
  func_0x000107c61428(param_1 + _DAT_112d71c80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311380; end: 10131138b; -[SCExternalSendToDeepLinkPluginEntryPoint setGroupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c80;
  func_0x000107c61428(param_1 + _DAT_112d71c80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131138c; end: 101311397; -[SCExternalSendToDeepLinkPluginEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131138c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c88;
  func_0x000107c61428(param_1 + _DAT_112d71c88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311398; end: 1013113a3; -[SCExternalSendToDeepLinkPluginEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c88;
  func_0x000107c61428(param_1 + _DAT_112d71c88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013113a4; end: 1013113af; -[SCExternalSendToDeepLinkPluginEntryPoint textSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c90;
  func_0x000107c61428(param_1 + _DAT_112d71c90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013113b0; end: 1013113bb; -[SCExternalSendToDeepLinkPluginEntryPoint setTextSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c90;
  func_0x000107c61428(param_1 + _DAT_112d71c90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013113bc; end: 1013113c7; -[SCExternalSendToDeepLinkPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71c98;
  func_0x000107c61428(param_1 + _DAT_112d71c98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013113c8; end: 1013113d3; -[SCExternalSendToDeepLinkPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71c98;
  func_0x000107c61428(param_1 + _DAT_112d71c98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013113d4; end: 1013113df; -[SCExternalSendToDeepLinkPluginEntryPoint urlPreviewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71ca0;
  func_0x000107c61428(param_1 + _DAT_112d71ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013113e0; end: 1013113eb; -[SCExternalSendToDeepLinkPluginEntryPoint setUrlPreviewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71ca0;
  func_0x000107c61428(param_1 + _DAT_112d71ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013113ec; end: 1013113f7; -[SCExternalSendToDeepLinkPluginEntryPoint ephemeralMediaServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71ca8;
  func_0x000107c61428(param_1 + _DAT_112d71ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013113f8; end: 101311403; -[SCExternalSendToDeepLinkPluginEntryPoint setEphemeralMediaServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013113f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71ca8;
  func_0x000107c61428(param_1 + _DAT_112d71ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311404; end: 10131140f; -[SCExternalSendToDeepLinkPluginEntryPoint sendFlowScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cb0;
  func_0x000107c61428(param_1 + _DAT_112d71cb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311410; end: 10131141b; -[SCExternalSendToDeepLinkPluginEntryPoint setSendFlowScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cb0;
  func_0x000107c61428(param_1 + _DAT_112d71cb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131141c; end: 101311427; -[SCExternalSendToDeepLinkPluginEntryPoint sendToScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131141c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cb8;
  func_0x000107c61428(param_1 + _DAT_112d71cb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311428; end: 101311433; -[SCExternalSendToDeepLinkPluginEntryPoint setSendToScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cb8;
  func_0x000107c61428(param_1 + _DAT_112d71cb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311434; end: 10131143f; -[SCExternalSendToDeepLinkPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cc0;
  func_0x000107c61428(param_1 + _DAT_112d71cc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311440; end: 10131144b; -[SCExternalSendToDeepLinkPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cc0;
  func_0x000107c61428(param_1 + _DAT_112d71cc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131144c; end: 101311457; -[SCExternalSendToDeepLinkPluginEntryPoint importServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131144c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cc8;
  func_0x000107c61428(param_1 + _DAT_112d71cc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311458; end: 101311463; -[SCExternalSendToDeepLinkPluginEntryPoint setImportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cc8;
  func_0x000107c61428(param_1 + _DAT_112d71cc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311464; end: 10131146f; -[SCExternalSendToDeepLinkPluginEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cd0;
  func_0x000107c61428(param_1 + _DAT_112d71cd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101311470; end: 1013114b3;  */

void FUN_101311470(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013114b4; end: 1013114bf; -[SCExternalSendToDeepLinkPluginEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013114b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cd0;
  func_0x000107c61428(param_1 + _DAT_112d71cd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013114c0; end: 101311513;  */

void FUN_1013114c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101311514; end: 10131155b; -[SCExternalSendToDeepLinkPluginEntryPoint sendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71cd8;
  func_0x000107c61428(param_1 + _DAT_112d71cd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10131155c; end: 101311567; -[SCExternalSendToDeepLinkPluginEntryPoint setSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131155c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71cd8;
  func_0x000107c61428(param_1 + _DAT_112d71cd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101311568; end: 1013115af; -[SCExternalSendToDeepLinkPluginEntryPoint sendFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101311568(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d71ce0;
  func_0x000107c61428(param_1 + _DAT_112d71ce0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013115b0; end: 1013115bb; -[SCExternalSendToDeepLinkPluginEntryPoint setSendFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013115b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d71ce0;
  func_0x000107c61428(param_1 + _DAT_112d71ce0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013115bc; end: 10131161b;  */

void FUN_1013115bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10131161c; end: 1013123f7;  */

/* WARNING: Possible PIC construction at 0x0001013118b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131233c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131234c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131235c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131236c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131238c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131239c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013123ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013123bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013122fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131230c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131231c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131232c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131222c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131223c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131224c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131225c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131226c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131227c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131228c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131229c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013121fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131220c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131212c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131213c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131214c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131215c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131216c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131217c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131218c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131210c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131211c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131205c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131207c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131208c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131209c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013120ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131200c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131201c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131202c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131203c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101311dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101311e00) */
/* WARNING: Removing unreachable block (ram,0x000101311e20) */
/* WARNING: Removing unreachable block (ram,0x000101311e50) */
/* WARNING: Removing unreachable block (ram,0x000101311e40) */
/* WARNING: Removing unreachable block (ram,0x000101311e80) */
/* WARNING: Removing unreachable block (ram,0x000101311e70) */
/* WARNING: Removing unreachable block (ram,0x000101311e60) */
/* WARNING: Removing unreachable block (ram,0x000101311eb0) */
/* WARNING: Removing unreachable block (ram,0x000101311ea0) */
/* WARNING: Removing unreachable block (ram,0x000101311e90) */
/* WARNING: Removing unreachable block (ram,0x000101311ef0) */
/* WARNING: Removing unreachable block (ram,0x000101311ee0) */
/* WARNING: Removing unreachable block (ram,0x000101311ed0) */
/* WARNING: Removing unreachable block (ram,0x000101311f40) */
/* WARNING: Removing unreachable block (ram,0x000101311f30) */
/* WARNING: Removing unreachable block (ram,0x000101311f20) */
/* WARNING: Removing unreachable block (ram,0x000101311f10) */
/* WARNING: Removing unreachable block (ram,0x000101311f90) */
/* WARNING: Removing unreachable block (ram,0x000101311f80) */
/* WARNING: Removing unreachable block (ram,0x000101311f70) */
/* WARNING: Removing unreachable block (ram,0x000101311f60) */
/* WARNING: Removing unreachable block (ram,0x000101311f50) */
/* WARNING: Removing unreachable block (ram,0x000101311fe0) */
/* WARNING: Removing unreachable block (ram,0x000101311fd0) */
/* WARNING: Removing unreachable block (ram,0x000101311fc0) */
/* WARNING: Removing unreachable block (ram,0x000101311fb0) */
/* WARNING: Removing unreachable block (ram,0x000101311fa0) */
/* WARNING: Removing unreachable block (ram,0x000101312040) */
/* WARNING: Removing unreachable block (ram,0x000101312030) */
/* WARNING: Removing unreachable block (ram,0x000101312020) */
/* WARNING: Removing unreachable block (ram,0x000101312010) */
/* WARNING: Removing unreachable block (ram,0x000101312000) */
/* WARNING: Removing unreachable block (ram,0x0001013120b0) */
/* WARNING: Removing unreachable block (ram,0x0001013120a0) */
/* WARNING: Removing unreachable block (ram,0x000101312090) */
/* WARNING: Removing unreachable block (ram,0x000101312080) */
/* WARNING: Removing unreachable block (ram,0x000101312070) */
/* WARNING: Removing unreachable block (ram,0x000101312060) */
/* WARNING: Removing unreachable block (ram,0x000101312120) */
/* WARNING: Removing unreachable block (ram,0x000101312110) */
/* WARNING: Removing unreachable block (ram,0x000101312100) */
/* WARNING: Removing unreachable block (ram,0x0001013120f0) */
/* WARNING: Removing unreachable block (ram,0x0001013120e0) */
/* WARNING: Removing unreachable block (ram,0x0001013120d0) */
/* WARNING: Removing unreachable block (ram,0x0001013120c0) */
/* WARNING: Removing unreachable block (ram,0x000101312190) */
/* WARNING: Removing unreachable block (ram,0x000101312180) */
/* WARNING: Removing unreachable block (ram,0x000101312170) */
/* WARNING: Removing unreachable block (ram,0x000101312160) */
/* WARNING: Removing unreachable block (ram,0x000101312150) */
/* WARNING: Removing unreachable block (ram,0x000101312140) */
/* WARNING: Removing unreachable block (ram,0x000101312130) */
/* WARNING: Removing unreachable block (ram,0x000101312210) */
/* WARNING: Removing unreachable block (ram,0x000101312200) */
/* WARNING: Removing unreachable block (ram,0x0001013121f0) */
/* WARNING: Removing unreachable block (ram,0x0001013121e0) */
/* WARNING: Removing unreachable block (ram,0x0001013121d0) */
/* WARNING: Removing unreachable block (ram,0x0001013121c0) */
/* WARNING: Removing unreachable block (ram,0x0001013121b0) */
/* WARNING: Removing unreachable block (ram,0x0001013122a0) */
/* WARNING: Removing unreachable block (ram,0x000101312290) */
/* WARNING: Removing unreachable block (ram,0x000101312280) */
/* WARNING: Removing unreachable block (ram,0x000101312270) */
/* WARNING: Removing unreachable block (ram,0x000101312260) */
/* WARNING: Removing unreachable block (ram,0x000101312250) */
/* WARNING: Removing unreachable block (ram,0x000101312240) */
/* WARNING: Removing unreachable block (ram,0x000101312230) */
/* WARNING: Removing unreachable block (ram,0x000101312330) */
/* WARNING: Removing unreachable block (ram,0x000101312320) */
/* WARNING: Removing unreachable block (ram,0x000101312310) */
/* WARNING: Removing unreachable block (ram,0x000101312300) */
/* WARNING: Removing unreachable block (ram,0x0001013122f0) */
/* WARNING: Removing unreachable block (ram,0x0001013122e0) */
/* WARNING: Removing unreachable block (ram,0x0001013122d0) */
/* WARNING: Removing unreachable block (ram,0x0001013122c0) */
/* WARNING: Removing unreachable block (ram,0x0001013122b0) */
/* WARNING: Removing unreachable block (ram,0x0001013123c0) */
/* WARNING: Removing unreachable block (ram,0x0001013123b0) */
/* WARNING: Removing unreachable block (ram,0x0001013123a0) */
/* WARNING: Removing unreachable block (ram,0x000101312390) */
/* WARNING: Removing unreachable block (ram,0x000101312380) */
/* WARNING: Removing unreachable block (ram,0x000101312370) */
/* WARNING: Removing unreachable block (ram,0x000101312360) */
/* WARNING: Removing unreachable block (ram,0x000101312350) */
/* WARNING: Removing unreachable block (ram,0x000101312340) */
/* WARNING: Removing unreachable block (ram,0x000101311da0) */
/* WARNING: Removing unreachable block (ram,0x000101311d90) */
/* WARNING: Removing unreachable block (ram,0x000101311d80) */
/* WARNING: Removing unreachable block (ram,0x000101311d70) */
/* WARNING: Removing unreachable block (ram,0x000101311d60) */
/* WARNING: Removing unreachable block (ram,0x000101311d50) */
/* WARNING: Removing unreachable block (ram,0x000101311d40) */
/* WARNING: Removing unreachable block (ram,0x000101311d30) */
/* WARNING: Removing unreachable block (ram,0x000101311d20) */
/* WARNING: Removing unreachable block (ram,0x000101311d10) */
/* WARNING: Removing unreachable block (ram,0x000101311d00) */
/* WARNING: Removing unreachable block (ram,0x000101311cd4) */
/* WARNING: Removing unreachable block (ram,0x000101311cc0) */
/* WARNING: Removing unreachable block (ram,0x000101311cb0) */
/* WARNING: Removing unreachable block (ram,0x0001013118b4) */
/* WARNING: Removing unreachable block (ram,0x0001013123ec) */
/* WARNING: Removing unreachable block (ram,0x00010131192c) */
/* WARNING: Removing unreachable block (ram,0x0001013123f0) */
/* WARNING: Removing unreachable block (ram,0x000101311948) */
/* WARNING: Removing unreachable block (ram,0x0001013123f4) */
/* WARNING: Removing unreachable block (ram,0x0001013119e4) */
/* WARNING: Removing unreachable block (ram,0x000101311df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131161c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c4cdfc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3d1c4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c5d9b4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar4);
          lVar4 = lVar1;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4d478();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar4);
            lVar4 = lVar1;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c4066c();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c44530();
              func_0x000107c61180();
              if (lVar3 != 0) {
                lVar3 = unaff_x20;
                func_0x000107c5b490();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar4);
                  lVar4 = lVar1;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c5c898();
                  func_0x000107c61180();
                  if (lVar3 == 0) {
                    func_0x000107c61170(lVar4);
                    lVar4 = lVar1;
                  }
                  else {
                    lVar3 = unaff_x20;
                    func_0x000107c40014();
                    func_0x000107c61180();
                    if (lVar3 != 0) {
                      lVar3 = unaff_x20;
                      func_0x000107c5d7f8();
                      func_0x000107c61180();
                      if (lVar3 != 0) {
                        lVar3 = unaff_x20;
                        func_0x000107c429fc();
                        func_0x000107c61180();
                        if (lVar3 == 0) {
                          func_0x000107c61170(lVar4);
                          lVar4 = lVar1;
                        }
                        else {
                          lVar3 = unaff_x20;
                          func_0x000107c51dec();
                          func_0x000107c61180();
                          if (lVar3 == 0) {
                            func_0x000107c61170(lVar4);
                            lVar4 = lVar1;
                          }
                          else {
                            lVar3 = unaff_x20;
                            func_0x000107c51ebc();
                            func_0x000107c61180();
                            if (lVar3 != 0) {
                              lVar3 = unaff_x20;
                              func_0x000107c51eac();
                              func_0x000107c61180();
                              if (lVar3 != 0) {
                                lVar3 = unaff_x20;
                                func_0x000107c51df0();
                                func_0x000107c61180();
                                if (lVar3 == 0) {
                                  func_0x000107c61170(lVar4);
                                  lVar4 = lVar1;
                                }
                                else {
                                  lVar3 = unaff_x20;
                                  func_0x000107c3fa0c();
                                  func_0x000107c61180();
                                  if (lVar3 == 0) {
                                    func_0x000107c61170(lVar4);
                                    lVar4 = lVar1;
                                  }
                                  else {
                                    lVar1 = unaff_x20;
                                    func_0x000107c4520c();
                                    func_0x000107c61180();
                                    if (lVar1 != 0) {
                                      func_0x000107c5b1bc();
                                      func_0x000107c61180();
                                      if (unaff_x20 != 0) {
                                        FUN_10130d554();
                                        func_0x000107c613fc();
                                        func_0x00010451338c();
                                        lVar4 = *(long *)(lVar2 + _DAT_113083f78);
                                        func_0x000107c5d984();
                                        func_0x000107c61180();
                                        func_0x000107c5faec();
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1013123f8; end: 10131241f; -[SCExternalSendToDeepLinkPluginEntryPoint begin] */

void FUN_1013123f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10131161c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101312420; end: 101312463; -[SCExternalSendToDeepLinkPluginEntryPoint end] */

void FUN_101312420(undefined8 param_1)

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



/* Entry: 101312464; end: 101312d53;  */

void FUN_101312464(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1013124f4;
  }
  if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) {
    uVar2 = 0xd00000000000001b;
    func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
         (uVar4 = uVar2,
         func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
         (uVar4 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
      else {
        uVar4 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ef1d0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0),
           (uVar4 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52228();
        }
        else {
          uVar4 = 0;
          if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef5f0)) ||
             (uVar3 = uVar4,
             func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0),
             (uVar3 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a368();
          }
          else {
            uVar3 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
               (uVar3 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5698c();
            }
            else {
              uVar3 = 0;
              if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10d2370)) ||
                 (func_0x000107c605b8(0xd000000000000026,0x800000010ef2dc90,param_2,param_3,0),
                 (uVar3 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53960();
              }
              else {
                uVar3 = 0x72655370756f7267;
                if (((param_2 == 0x72655370756f7267) && (param_3 == -0x12ffff8c9a9c968a)) ||
                   (func_0x000107c605b8(0x72655370756f7267,0xed00007365636976,param_2,param_3,0),
                   (uVar3 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54f80();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
                    uVar3 = 0xd000000000000013;
                    func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
                    if ((uVar3 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d3be0)) {
                        uVar3 = 0xd000000000000013;
                        func_0x000107c605b8(0xd000000000000013,0x800000010ef2c420,param_2,param_3,0)
                        ;
                        if ((uVar3 & 1) == 0) {
                          if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0))
                             || (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,
                                                     param_3,0), (uVar4 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c536e0();
                          }
                          else if (((param_2 == -0x2fffffffffffffee) &&
                                   (param_3 == -0x7ffffffef10dfae0)) ||
                                  (uVar4 = uVar2,
                                  func_0x000107c605b8(0xd000000000000012,0x800000010ef20520,param_2,
                                                      param_3,0), (uVar4 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5a27c();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10cd640)
                               ) {
                              uVar4 = 0;
                              func_0x000107c605b8(0xd000000000000016,0x800000010ef329c0,param_2,
                                                  param_3,0);
                              if ((uVar4 & 1) == 0) {
                                uVar4 = 0;
                                if (((param_2 == -0x2fffffffffffffe4) &&
                                    (param_3 == -0x7ffffffef10ca250)) ||
                                   (func_0x000107c605b8(0xd00000000000001c,0x800000010ef35db0,
                                                        param_2,param_3,0), (uVar4 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c58ea8();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffed) ||
                                     (param_3 != -0x7ffffffef10d2340)) {
                                    uVar4 = 0xd000000000000013;
                                    func_0x000107c605b8(0xd000000000000013,0x800000010ef2dcc0,
                                                        param_2,param_3,0);
                                    if ((uVar4 & 1) == 0) {
                                      uVar4 = 0;
                                      if (((param_2 == -0x2fffffffffffffe6) &&
                                          (param_3 == -0x7ffffffef10ed550)) ||
                                         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,
                                                              param_2,param_3,0), (uVar4 & 1) != 0))
                                      {
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c53414();
                                      }
                                      else {
                                        uVar4 = 0x655374726f706d69;
                                        if (((param_2 == 0x655374726f706d69) &&
                                            (param_3 == -0x11ff8c9a9c96898e)) ||
                                           (func_0x000107c605b8(0x655374726f706d69,
                                                                0xee00736563697672,param_2,param_3,0
                                                               ), (uVar4 & 1) != 0)) {
                                          func_0x0001006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c55300();
                                        }
                                        else {
                                          uVar4 = 0xd000000000000015;
                                          if (((param_2 == -0x2fffffffffffffeb) &&
                                              (param_3 == -0x7ffffffef10e2010)) ||
                                             (func_0x000107c605b8(0xd000000000000015,
                                                                  0x800000010ef1dff0,param_2,param_3
                                                                  ,0), (uVar4 & 1) != 0)) {
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c5935c();
                                          }
                                          else if (((param_2 == -0x2fffffffffffffee) &&
                                                   (param_3 == -0x7ffffffef10d22d0)) ||
                                                  (func_0x000107c605b8(0xd000000000000012,
                                                                       0x800000010ef2dd30,param_2,
                                                                       param_3,0), (uVar2 & 1) != 0)
                                                  ) {
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c58f0c();
                                          }
                                          else {
                                            uVar2 = 0;
                                            if (((param_2 != -0x2fffffffffffffec) ||
                                                (param_3 != -0x7ffffffef10ca230)) &&
                                               (func_0x000107c605b8(0xd000000000000014,
                                                                    0x800000010ef35dd0,param_2,
                                                                    param_3,0), (uVar2 & 1) == 0)) {
                                              func_0x000107c602fc(0x15);
                                              func_0x000107c6142c(0xe000000000000000);
                                              func_0x000107c5fb78(param_2,param_3);
                                              func_0x000107c60450("Fatal error",0xb,2,
                                                                  0xd000000000000013,
                                                                  0x800000010ef0fc20,
                                                                                                                                    
                                                  "SCExternalSendToDeepLinkPlugin/SCExternalSendToDeepLinkPluginEntryPoint.swift"
                                                  ,0x4d,2,0x81,0);
                    /* WARNING: Does not return */
                                              pcVar1 = (code *)SoftwareBreakpoint(1,0x101312d54);
                                              (*pcVar1)();
                                            }
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c58eac();
                                          }
                                        }
                                      }
                                      goto LAB_1013124f4;
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c58f18();
                                }
                                goto LAB_1013124f4;
                              }
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5463c();
                          }
                          goto LAB_1013124f4;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59c90();
                      goto LAB_1013124f4;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c594bc();
                }
              }
            }
          }
        }
      }
      goto LAB_1013124f4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5666c();
LAB_1013124f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101312d54; end: 101312dff; -[SCExternalSendToDeepLinkPluginEntryPoint setValue:forIvarName:] */

void FUN_101312d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101312464(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101312e00; end: 101312fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101312e00(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d71c48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71c98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71ca0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71ca8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71cb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71cb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71cc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71cc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d71cd0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d71cd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d71ce0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d71ce8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101312fcc; end: 101312feb; -[SCExternalSendToDeepLinkPluginEntryPoint init] */

void FUN_101312fcc(void)

{
  FUN_101312e00();
  return;
}



/* Entry: 101312fec; end: 10131301f;  */

void FUN_101312fec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101313020; end: 101313187; -[SCExternalSendToDeepLinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313020(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d71c48);
  func_0x000107c61610(param_1 + _DAT_112d71c50);
  func_0x000107c61610(param_1 + _DAT_112d71c58);
  func_0x000107c61610(param_1 + _DAT_112d71c60);
  func_0x000107c61610(param_1 + _DAT_112d71c68);
  func_0x000107c61610(param_1 + _DAT_112d71c70);
  func_0x000107c61610(param_1 + _DAT_112d71c78);
  func_0x000107c61610(param_1 + _DAT_112d71c80);
  func_0x000107c61610(param_1 + _DAT_112d71c88);
  func_0x000107c61610(param_1 + _DAT_112d71c90);
  func_0x000107c61610(param_1 + _DAT_112d71c98);
  func_0x000107c61610(param_1 + _DAT_112d71ca0);
  func_0x000107c61610(param_1 + _DAT_112d71ca8);
  func_0x000107c61610(param_1 + _DAT_112d71cb0);
  func_0x000107c61610(param_1 + _DAT_112d71cb8);
  func_0x000107c61610(param_1 + _DAT_112d71cc0);
  func_0x000107c61610(param_1 + _DAT_112d71cc8);
  func_0x000107c61610(param_1 + _DAT_112d71cd0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71cd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d71ce8));
  return;
}



/* Entry: 101313188; end: 1013131a7;  */

void FUN_101313188(void)

{
  func_0x000107c61168(&PTR_PTR_1127c6c68);
  return;
}



/* Entry: 1013131a8; end: 101313423;  */

void FUN_1013131a8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar9 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c51758();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x101313424);
    (*pcVar11)();
  }
  puVar4 = puVar3;
  func_0x000107c403a8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c5edb4(puVar9,puVar4);
    func_0x000107c61170(puVar4);
  }
  pcVar11 = *(code **)(lVar12 + 0x38);
  (*pcVar11)(puVar9,puVar4 == (undefined *)0x0,1,lVar2);
  func_0x0001001021cc(puVar9,lVar7);
  lVar6 = lVar7;
  (**(code **)(lVar12 + 0x30))(lVar7,1,lVar2);
  bVar1 = (int)lVar6 != 1;
  if (bVar1) {
    func_0x000107c5ed9c(lVar8,0x7972617262694c,0xe700000000000000);
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(lVar7,lVar2);
    func_0x000107c5ed9c(lVar8 - extraout_x12_00,0x736568636143,0xe600000000000000);
    lVar7 = lVar2;
    (*pcVar10)(lVar8,lVar2);
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dc6f78);
    func_0x000107c5ed9c(param_1);
    func_0x000107c6142c(lVar7);
    (*pcVar10)(lVar8 - extraout_x12_00,lVar2);
  }
  else {
    func_0x0001000293e4(lVar7);
  }
  (*pcVar11)(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 101313424; end: 1013134db; +[SCExternalSendToStorageUtilities getBaseUrl] */

void FUN_101313424(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1013131a8(puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1013134dc; end: 101313517; -[SCExternalSendToStorageUtilities init] */

void FUN_1013134dc(undefined8 param_1)

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



/* Entry: 101313518; end: 10131356b;  */

void FUN_101313518(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10131356c; end: 10131357b; -[_TtC30RecentlyActiveEducationSection43RecentlyActiveEducationSearchSectionCreator sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131356c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d71d40));
  return;
}



/* Entry: 10131357c; end: 1013135db; -[_TtC30RecentlyActiveEducationSection43RecentlyActiveEducationSearchSectionCreator init] */

void FUN_10131357c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationSection.RecentlyActiveEducationSearchSectionCreator",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013135a8);
  (*pcVar1)();
}



/* Entry: 1013135dc; end: 1013135eb; -[_TtC30RecentlyActiveEducationSection43RecentlyActiveEducationSearchSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013135dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d71d40));
  return;
}



/* Entry: 1013135ec; end: 10131360b;  */

void FUN_1013135ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127c6e70);
  return;
}



/* Entry: 10131360c; end: 10131361b; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection dataLoadingStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10131360c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d71d70);
}



/* Entry: 10131361c; end: 10131362b; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection setDataLoadingStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131361c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112d71d70) = param_3;
  return;
}



/* Entry: 10131362c; end: 10131363b; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection sectionUpdateModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131362c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d71d78));
  return;
}



/* Entry: 10131363c; end: 10131366f; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection setSectionUpdateModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131363c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d71d78);
  *(undefined8 *)(param_1 + _DAT_112d71d78) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101313670; end: 10131368f; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313670(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d71da8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101313690; end: 1013136a3; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313690(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d71da8,param_3);
  return;
}



/* Entry: 1013136a4; end: 101313713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1013136a4(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d71db0;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112d71db0);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueue";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 101313714; end: 1013137f3; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection reuseCellClassesByIdentifiers] */

void FUN_101313714(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112d71de8;
  func_0x0001000285a8(0x112d71de8,&UNK_10d932900);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0xd00000000000003d;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010ef35ee0;
  uVar2 = 0;
  FUN_101314b38();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  lVar3 = lVar1;
  FUN_10124b9b8(lVar1);
  func_0x000107c61588(lVar1);
  FUN_101313e70((undefined8 *)(lVar1 + 0x20));
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


