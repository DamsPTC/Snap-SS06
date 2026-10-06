/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d720e8; end: 102d721d7; -[SCMessagesExtensionConfigs initWithMessagesGrapheneSamplingRate:messagesGrapheneConfigToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d720e8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined4 *)(param_2 + _DAT_112f14360) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14368);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d721d8; end: 102d721db; -[SCMessagesExtensionConfigs copyWithZone:] */

void FUN_102d721d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d721dc; end: 102d722a3;  */

/* WARNING: Possible PIC construction at 0x000102d72238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d72288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7223c) */
/* WARNING: Removing unreachable block (ram,0x000102d7228c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d721dc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unaff_x20 + _DAT_112f14360);
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f10c020);
  func_0x000107c42734(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d722a4; end: 102d722f3; -[SCMessagesExtensionConfigs encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x000102d722dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d722e0) */

void FUN_102d722a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d721dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d722f4; end: 102d72323;  */

void FUN_102d722f4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102d72324(param_1);
  return;
}



/* Entry: 102d72324; end: 102d724af;  */

undefined8 FUN_102d72324(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f10c020);
  func_0x000107c41464(param_2);
  func_0x000107c61170(uVar1);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10c040);
  lVar2 = param_2;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,lVar2);
    func_0x000107c615e8(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x000107c61170(param_2);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x000107c6147c(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      func_0x000107c5fadc(uStack_90,uStack_88);
      func_0x000107c6142c(uStack_88);
      func_0x000107c477ac(param_1);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_2);
      return unaff_x20;
    }
    func_0x000107c61170(param_2);
  }
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 102d724b0; end: 102d724d7; -[SCMessagesExtensionConfigs initWithCoder:] */

void FUN_102d724b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102d72324();
  return;
}



/* Entry: 102d724d8; end: 102d724f3; -[SCMessagesExtensionConfigs description] */

void FUN_102d724d8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d724f4; end: 102d7256f; -[SCMessagesExtensionConfigs init] */

void FUN_102d724f4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MessagesExtensionBridge/MessagesExtensionConfigsWrapper.swift",0x3d,2,0x39,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7253c);
  (*pcVar1)();
}



/* Entry: 102d72570; end: 102d72583; -[SCMessagesExtensionConfigs .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d72570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f14368 + 8))
  ;
  return;
}



/* Entry: 102d72584; end: 102d725a3;  */

void FUN_102d72584(void)

{
  func_0x000107c61168(&PTR_PTR_1128a36d0);
  return;
}



/* Entry: 102d725a4; end: 102d725a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d725a4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112f14360) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14368);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d725a8; end: 102d725b7; -[MyAIFriendsFeedRotationStringsService merlinStringProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d725a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14398));
  return;
}



/* Entry: 102d725b8; end: 102d72603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d725b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14398) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d72604; end: 102d72663; -[MyAIFriendsFeedRotationStringsService init] */

void FUN_102d72604(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAIFriendsFeedRotationStringsServices.MyAIFriendsFeedRotationStringsService"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d72630);
  (*pcVar1)();
}



/* Entry: 102d72664; end: 102d72687; -[MyAIFriendsFeedRotationStringsService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d72664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14398));
  return;
}



/* Entry: 102d72688; end: 102d72733;  */

void FUN_102d72688(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d72734; end: 102d72753;  */

void FUN_102d72734(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102d72754; end: 102d72793;  */

void FUN_102d72754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f143d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db494e0;
  func_0x000107c61520(&UNK_10db494e0,&UNK_1105cc6b0);
  puRam0000000112f143d0 = puVar1;
  return;
}



/* Entry: 102d72794; end: 102d727a7;  */

undefined1  [16] FUN_102d72794(void)

{
  return ZEXT816(0x1105cc6b0);
}



/* Entry: 102d727a8; end: 102d72a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d727a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f143e8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f143f0;
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f143f8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100ba7658();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112f14400;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112f14408) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112f14410;
  uVar3 = 0x112f143c8;
  func_0x0001000285a8(0x112f143c8,&UNK_10db494d8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14418) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14420) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14428) = param_3;
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar6 = param_4;
  func_0x000100759c94(param_4,0);
  uVar3 = 0x112d655b8;
  func_0x0001000285a8(0x112d655b8,&UNK_10db95230);
  uVar7 = 0;
  func_0x000100759f5c(0,1,&UNK_100ba7788,0,uVar3);
  func_0x000107c61574(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112f14430) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112f14438) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f14440) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f14448) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14450);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar8 = auStack_70;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar8;
}



/* Entry: 102d72a24; end: 102d72a83; -[SCFriendsFeedNativeDataProvider init] */

void FUN_102d72a24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedDataImplementation.FriendsFeedNativeDataProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d72a50);
  (*pcVar1)();
}



/* Entry: 102d72a84; end: 102d72b7f; -[SCFriendsFeedNativeDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d72ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d72b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d72ac4) */
/* WARNING: Removing unreachable block (ram,0x000102d72b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d72a84(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14420));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f14430));
  return;
}



/* Entry: 102d72b80; end: 102d72b9f;  */

void FUN_102d72b80(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3868);
  return;
}



/* Entry: 102d72ba0; end: 102d72cb7;  */

undefined4 FUN_102d72ba0(ulong param_1,long param_2,undefined **param_3,long param_4)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_2;
  func_0x000100bec110();
  if ((param_1 & 1) == 0) {
    func_0x000107c406e8();
    if (param_2 == 1) {
      uVar1 = 2;
    }
    else if (param_2 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e12b38;
      func_0x000107c5faec();
      if (param_3 == ppuVar2 && param_4 == lVar4) {
        func_0x000107c6142c(lVar4);
      }
      else {
        ppuVar3 = param_3;
        lVar5 = param_4;
        func_0x000107c605b8(param_3,param_4,ppuVar2,lVar4,0);
        func_0x000107c6142c(lVar4);
        if (((ulong)ppuVar3 & 1) == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110e12b58;
          func_0x000107c5faec();
          if (param_3 == ppuVar2 && param_4 == lVar5) {
            func_0x000107c6142c(lVar5);
            return 4;
          }
          func_0x000107c605b8(param_3,param_4,ppuVar2,lVar5,0);
          func_0x000107c6142c(lVar5);
          if (((ulong)param_3 & 1) != 0) {
            return 4;
          }
          return 1;
        }
      }
      uVar1 = 3;
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 102d72cb8; end: 102d72ce7;  */

void FUN_102d72cb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 102d72ce8; end: 102d72eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d72ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar8 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112f144b0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f144b8;
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f144c0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100ba7658();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112f144c8;
  func_0x000100ba7c24();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112f144d0;
  uVar3 = 0x112f143c8;
  func_0x0001000285a8(0x112f143c8,&UNK_10db494d8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f144d8) = param_1;
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c61174(param_1);
  uVar6 = param_2;
  func_0x000100759c94(param_2,0);
  uVar3 = 0x112d655b8;
  func_0x0001000285a8(0x112d655b8,&UNK_10db95230);
  uVar7 = 0;
  func_0x000100759f5c(0,1,&UNK_100ba7d1c,0,uVar3);
  func_0x000107c61574(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112f144e0) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112f144e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f144f0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f144f8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar8;
}



/* Entry: 102d72ef0; end: 102d72f9f;  */

void FUN_102d72ef0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = *(undefined2 *)(param_2 + 4);
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  uStack_30 = uStack_60;
  uStack_28 = uStack_58;
  func_0x000100bac6f8(0);
  func_0x000107c610f8();
  FUN_102d751d0(&uStack_40,auStack_80,0x112f14488,&UNK_10db495f0);
  FUN_102d751d0(&uStack_38,auStack_80,0x112f14490,&UNK_10db495f8);
  FUN_102d751d0(&uStack_30,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  puVar1 = &uStack_70;
  func_0x000100beb948();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102d72fa0; end: 102d73237;  */

/* WARNING: Removing unreachable block (ram,0x000102d7322c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102d72fa0(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong uStack_88;
  undefined *apuStack_78 [3];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f144f0));
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = _DAT_112f144c8;
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = _DAT_112f144c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  _DAT_112f144c8 = lVar3;
  if (uVar14 != 0) {
    uStack_88 = param_1 & 0xffffffffffffff8;
    uVar15 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_88 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d73170);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(param_1 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar15;
          func_0x000100bc2938(uVar15,param_1);
        }
        uVar1 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d7316c);
          (*pcVar4)();
        }
        ppuVar12 = apuStack_78;
        func_0x000107c61428(unaff_x20 + lVar3,ppuVar12,0x20,0);
        lVar16 = *(long *)(unaff_x20 + lVar3);
        if (*(long *)(lVar16 + 0x10) != 0) break;
LAB_102d7301c:
        func_0x000107c614a8(apuStack_78);
        func_0x000107c61170(uVar5);
        uVar15 = uVar15 + 1;
        if (uVar1 == uVar14) goto LAB_102d73194;
      }
      func_0x000107c61434(lVar16);
      uVar6 = uVar5;
      func_0x000100bd0a8c();
      if (((ulong)ppuVar12 & 1) == 0) {
        func_0x000107c6142c(lVar16);
        goto LAB_102d7301c;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar6 * 0x10);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      func_0x000107c61434(uVar10);
      func_0x000107c614a8(apuStack_78);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(lVar16);
      puVar7 = puVar8;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        puVar8 = puVar7;
      }
      uVar15 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000d182c(puVar8,uVar15 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x28) = uVar10;
      uVar15 = uVar1;
    } while (uVar1 != uVar14);
  }
LAB_102d73194:
  apuStack_78[0] = puVar8;
  func_0x000107c61434(puVar8);
  FUN_102d743d0(apuStack_78);
  func_0x000107c6142c(puVar8);
  puVar8 = apuStack_78[0];
  uVar9 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar10 = uVar9;
  func_0x00010011d734();
  uVar11 = 0x202c;
  uVar13 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar9,uVar10);
  func_0x000107c61574(puVar8);
  auVar17._8_8_ = uVar13;
  auVar17._0_8_ = uVar11;
  return auVar17;
}



/* Entry: 102d73238; end: 102d7352f;  */

void FUN_102d73238(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_80;
  undefined *apuStack_78 [3];
  undefined1 auStack_58 [8];
  
  lVar3 = *param_1;
  func_0x000107c44174();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112f14540,&UNK_10db49648);
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104888f7c(apuStack_78);
  }
  else {
    func_0x000107c61614(auStack_58,param_3);
    uVar9 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar11 = uVar9;
      if (0x7fffffffffffffff < param_2) {
        uVar11 = param_2;
      }
      func_0x000107c60480();
    }
    func_0x000107c61428(auStack_58,apuStack_78,0,0);
    if (uVar11 == 0) {
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar10 = 0;
      do {
        while( true ) {
          if ((param_2 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7351c);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(param_2 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar10;
            func_0x000100bc2938(uVar10,param_2);
          }
          uVar1 = uVar10 + 1;
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d73518);
            (*pcVar2)();
          }
          puVar5 = auStack_58;
          func_0x000107c61618();
          if (puVar5 != (undefined1 *)0x0) break;
          func_0x000107c61170(uVar4);
          uVar10 = uVar10 + 1;
          if (uVar1 == uVar11) goto LAB_102d734ac;
        }
        func_0x0001000285a8(0x112f14548,&UNK_10db49650);
        puVar8 = &UNK_1105cc840;
        func_0x000107c613fc(&UNK_1105cc840,0x28,7);
        *(undefined1 **)(puVar8 + 0x10) = puVar5;
        *(ulong *)(puVar8 + 0x18) = uVar4;
        *(long *)(puVar8 + 0x20) = lVar3;
        func_0x000107c61174(puVar5);
        func_0x000107c61174(uVar4);
        func_0x000107c61174(lVar3);
        uVar6 = 0;
        func_0x0001048897a0(0,1,0,0x102d75244,puVar8);
        func_0x000107c61170(puVar5);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(uVar4);
        puVar8 = puStack_80;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puStack_80 < 0)) ||
           (puVar8 = puStack_80, ((ulong)puStack_80 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_80 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puStack_80 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_80) {
              puVar7 = puStack_80;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_102d74f64(0,puVar7 + 1,1,puStack_80);
        }
        uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar4 + 0x10);
        puStack_80 = puVar8;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
          puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_102d74f64(puStack_80,uVar10 + 1,1,puVar8);
          uVar4 = (ulong)puStack_80 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
        *(undefined8 *)(uVar4 + uVar10 * 8 + 0x20) = uVar6;
        uVar10 = uVar1;
      } while (uVar1 != uVar11);
    }
LAB_102d734ac:
    func_0x000107c61610(auStack_58);
    func_0x0001000285a8(0x112f14548,&UNK_10db49650);
    func_0x00010488813c(puStack_80);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(puStack_80);
  }
  return;
}



/* Entry: 102d73530; end: 102d736fb;  */

void FUN_102d73530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar3 = &UNK_1105cc7f0;
  func_0x000107c613fc(&UNK_1105cc7f0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  puVar4 = &UNK_1105cc868;
  func_0x000107c613fc(&UNK_1105cc868,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  puVar3 = &UNK_1105cc890;
  func_0x000107c613fc(&UNK_1105cc890,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar5 = PTR_PTR_1126ba338;
  func_0x000107c610f8(PTR_PTR_1126ba338);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102d75250;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101973904;
  puStack_88 = &UNK_1105cc8a8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar2);
  uStack_80 = 0x102d7525c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011adf84;
  puStack_88 = &UNK_1105cc8d0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c48b64(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c4304c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102d736fc; end: 102d73aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d736fc(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (param_1 == (undefined *)0x0) {
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    puStack_78 = param_3;
    func_0x000107c61174(param_3);
    func_0x000100b60084(&puStack_78);
LAB_102d737b4:
    func_0x000107c61170(param_3);
    return;
  }
  func_0x000107c61174();
  puVar12 = param_1;
  func_0x000107c406e8();
  if (puVar12 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar12 = param_3;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    puVar5 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170(puVar12);
    puStack_78 = param_3;
    puStack_70 = puVar5;
    uStack_68 = param_2;
    func_0x000100b60084(&puStack_78);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_3);
    param_3 = param_1;
    goto LAB_102d737b4;
  }
  puVar12 = param_1;
  func_0x000107c4e3a4();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000100bcf210(0,0x112ea39b8,&PTR_PTR_1126dab40);
  puVar5 = puVar12;
  func_0x000107c5fc54(puVar12,uVar4);
  func_0x000107c61170(puVar12);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    if (puVar12 == (undefined *)0x0) goto LAB_102d73904;
LAB_102d7381c:
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102d76108(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d73aa8);
      (*pcVar3)();
    }
    puVar13 = (undefined *)0x0;
    do {
      puVar10 = puStack_78;
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar5 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar13;
        FUN_102521c64(puVar13,puVar5);
      }
      puVar7 = puVar6;
      func_0x000107c4e3a0();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_78 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        FUN_102d76108(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      puVar10 = puStack_78;
      puVar13 = puVar13 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar7;
    } while (puVar12 != puVar13);
    func_0x000107c6142c(puVar5);
  }
  else {
    puVar12 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar12 = puVar5;
    }
    func_0x000107c60480();
    if (puVar12 != (undefined *)0x0) goto LAB_102d7381c;
LAB_102d73904:
    func_0x000107c6142c(puVar5);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x000107c61428(param_4 + 0x10,&puStack_78,0,0);
  lVar8 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    uVar4 = *(undefined8 *)(lVar8 + _DAT_112f144f8);
    uVar2 = ((undefined8 *)(lVar8 + _DAT_112f144f8))[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lVar8);
    func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      lVar11 = *(long *)(param_4 + _DAT_112f144e8);
      func_0x000107c615f0(lVar11);
      func_0x000107c61170(param_4);
      uVar9 = 0;
      func_0x000100bcf210(0,0x112d4e810,&PTR_PTR_1126b0cd8);
      puVar12 = puVar10;
      func_0x000107c5fc48(puVar10,uVar9);
      uVar9 = uVar2;
      func_0x000107c5fadc(uVar4);
      lVar8 = lVar11;
      func_0x000107c4fa68();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar4);
      if (lVar8 != 0) {
        lStack_a0 = lVar8;
        func_0x000107c5faec();
        func_0x000107c61170(lVar8);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(puVar10);
        goto LAB_102d73a4c;
      }
    }
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c6142c(puVar10);
  lStack_a0 = 0;
  uVar9 = 0;
LAB_102d73a4c:
  puStack_a8 = param_3;
  uStack_98 = uVar9;
  func_0x000107c61174(param_3);
  func_0x000100b60084(&puStack_a8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar9);
  return;
}



/* Entry: 102d73aa8; end: 102d73aef;  */

void FUN_102d73aa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = param_2;
  func_0x000107c61174(param_2);
  func_0x000100b60084(&uStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102d73af0; end: 102d73b4f; -[SCFriendsFeedNativeMultiRecipientDataProvider init] */

void FUN_102d73af0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedDataImplementation.FriendsFeedNativeMultiRecipientDataProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d73b1c);
  (*pcVar1)();
}



/* Entry: 102d73b50; end: 102d73c0b; -[SCFriendsFeedNativeMultiRecipientDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d73b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d73bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d73b80) */
/* WARNING: Removing unreachable block (ram,0x000102d73bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d73b50(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f144d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f144e0));
  return;
}



/* Entry: 102d73c0c; end: 102d740df;  */

void FUN_102d73c0c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar11);
      puVar5 = auStack_a8;
      func_0x000107c5fb58(puVar5,uVar10,uVar11);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar11);
      uVar7 = (ulong)puVar5 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar7 < uVar9) {
LAB_102d73d00:
          if ((long)param_1 < (long)uVar7) goto LAB_102d73c88;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar3 + 2 <= puVar2 || param_1 != uVar8)) {
          uVar10 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x20);
        if ((((long)param_1 < (long)uVar8) || (puVar3 + 4 <= puVar2)) || (param_1 != uVar8)) {
          uVar10 = *puVar3;
          uVar12 = puVar3[3];
          uVar11 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
          puVar2[3] = uVar12;
          puVar2[2] = uVar11;
          param_1 = uVar8;
        }
      }
      else if (uVar9 <= uVar7) goto LAB_102d73d00;
LAB_102d73c88:
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102d73dbc);
  (*pcVar4)();
}



/* Entry: 102d740e0; end: 102d7424f;  */

void FUN_102d740e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112f143d8,&UNK_10db49640);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102d741bc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        func_0x000107c61174();
        func_0x000107c61434(uVar5);
        if (uVar8 != 0) break;
LAB_102d741bc:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d74250);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d74228;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_102d74228:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d74250; end: 102d743cf;  */

void FUN_102d74250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  
  lVar11 = *unaff_x20;
  uVar4 = param_5;
  uVar6 = param_6;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d7434c);
    (*pcVar3)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar8) {
    func_0x000100bc5148(lVar8,param_7 & 1);
    uVar4 = param_5;
    uVar9 = param_6;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d74300);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    func_0x000102d73f4c();
    lVar8 = *unaff_x20;
    goto joined_r0x000102d74360;
  }
  lVar8 = *unaff_x20;
joined_r0x000102d74360:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
    uVar10 = puVar1[1];
    uVar5 = puVar1[3];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar10);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d743d0);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 102d743d0; end: 102d744cb;  */

void FUN_102d743d0(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001016bcd1c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,PTR___sSSN_11034da80);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_102d744cc(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_102d74950(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 102d744cc; end: 102d7494f;  */

void FUN_102d744cc(undefined **param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x21;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puVar21 = PTR___sSSN_11034da80;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    ppuVar4 = param_1;
    lVar15 = 0;
    do {
      lVar18 = lVar15 + 1;
      ppuVar6 = ppuVar4;
      if (lVar18 < lVar11) {
        puVar17 = (undefined8 *)(*param_3 + lVar18 * 0x10);
        uStack_70 = *puVar17;
        uStack_68 = puVar17[1];
        lVar19 = lVar15 * 0x10;
        puVar20 = (undefined8 *)(*param_3 + lVar19);
        puVar17 = puVar20 + 5;
        puStack_80 = (undefined *)*puVar20;
        uStack_78 = puVar20[1];
        func_0x000100e8b654();
        ppuVar5 = &puStack_80;
        func_0x000107c60204(ppuVar5,puVar21,puVar21,ppuVar4,ppuVar4);
        ppuVar6 = ppuVar5;
        lVar14 = lVar15 + 2;
        do {
          lVar22 = lVar14;
          lVar18 = lVar11;
          if (lVar11 == lVar22) break;
          uStack_70 = puVar17[-1];
          uStack_68 = *puVar17;
          puStack_80 = (undefined *)puVar17[-3];
          uStack_78 = puVar17[-2];
          ppuVar6 = &puStack_80;
          func_0x000107c60204(ppuVar6,puVar21,puVar21,ppuVar4,ppuVar4);
          puVar17 = puVar17 + 2;
          lVar14 = lVar22 + 1;
          lVar18 = lVar22;
        } while ((ppuVar5 == (undefined **)0xffffffffffffffff) !=
                 (ppuVar6 != (undefined **)0xffffffffffffffff));
        if (ppuVar5 == (undefined **)0xffffffffffffffff) {
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7492c);
            (*pcVar2)();
          }
          if (lVar15 < lVar18) {
            lVar22 = *param_3;
            lVar13 = lVar18 << 4;
            lVar14 = lVar18;
            lVar11 = lVar15;
            do {
              lVar14 = lVar14 + -1;
              if (lVar11 != lVar14) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74944);
                  (*pcVar2)();
                }
                puVar17 = (undefined8 *)(lVar22 + lVar19);
                lVar1 = lVar22 + lVar13;
                uVar10 = *puVar17;
                uVar12 = puVar17[1];
                uVar23 = *(undefined8 *)(lVar1 + -0x10);
                puVar17[1] = *(undefined8 *)(lVar1 + -8);
                *puVar17 = uVar23;
                *(undefined8 *)(lVar1 + -0x10) = uVar10;
                *(undefined8 *)(lVar1 + -8) = uVar12;
              }
              lVar11 = lVar11 + 1;
              lVar13 = lVar13 + -0x10;
              lVar19 = lVar19 + 0x10;
            } while (lVar11 < lVar14);
          }
        }
      }
      lVar11 = param_3[1];
      lVar19 = lVar18;
      if (lVar18 < lVar11) {
        if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74920);
          (*pcVar2)();
        }
        if (lVar18 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74924);
            (*pcVar2)();
          }
          lVar14 = lVar15 + param_4;
          if (lVar11 <= lVar15 + param_4) {
            lVar14 = lVar11;
          }
          if (lVar14 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74928);
            (*pcVar2)();
          }
          if (lVar18 != lVar14) {
            lVar22 = *param_3;
            func_0x000100e8b654();
            puVar17 = (undefined8 *)(lVar22 + lVar18 * 0x10);
            lVar11 = lVar15 - lVar18;
            do {
              puVar20 = (undefined8 *)(lVar22 + lVar18 * 0x10);
              uVar10 = *puVar20;
              uVar12 = puVar20[1];
              lVar19 = lVar11;
              puVar20 = puVar17;
              do {
                puStack_80 = (undefined *)puVar20[-2];
                uStack_78 = puVar20[-1];
                ppuVar4 = &puStack_80;
                uStack_70 = uVar10;
                uStack_68 = uVar12;
                func_0x000107c60204(ppuVar4,puVar21,puVar21,ppuVar6,ppuVar6);
                if (ppuVar4 != (undefined **)0xffffffffffffffff) break;
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74930);
                  (*pcVar2)();
                }
                uVar10 = *puVar20;
                uVar12 = puVar20[1];
                puVar20[1] = puVar20[-1];
                *puVar20 = puVar20[-2];
                puVar20[-1] = uVar12;
                puVar20 = puVar20 + -2;
                *puVar20 = uVar10;
                bVar3 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              puVar17 = puVar17 + 2;
              lVar11 = lVar11 + -1;
              lVar19 = lVar14;
            } while (lVar18 != lVar14);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74914);
        (*pcVar2)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar16 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar16 + 1;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar9;
      if (*param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74948);
        (*pcVar2)();
      }
      ppuVar4 = &puStack_58;
      FUN_102d74a50(ppuVar4,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102d748e4;
      lVar11 = param_3[1];
      lVar15 = lVar19;
    } while (lVar19 < lVar11);
  }
  puVar9 = puStack_58;
  puVar21 = *param_1;
  if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74950);
    (*pcVar2)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar16) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7494c);
      (*pcVar2)();
    }
    lVar19 = uVar16 - 1;
    lVar18 = *(long *)(puVar9 + uVar16 * 0x10);
    lVar15 = *(long *)(puVar9 + lVar19 * 0x10 + 0x28);
    FUN_102d74cb8(lVar11 + lVar18 * 0x10,lVar11 + *(long *)(puVar9 + lVar19 * 0x10 + 0x20) * 0x10,
                  lVar11 + lVar15 * 0x10,puVar21);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74918);
      (*pcVar2)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7491c);
      (*pcVar2)();
    }
    *(long *)(puVar9 + uVar16 * 0x10) = lVar18;
    *(long *)((long)(puVar9 + uVar16 * 0x10) + 8) = lVar15;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar19);
    puVar9 = puStack_58;
    uVar16 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102d748e4:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102d74950; end: 102d74a4f;  */

void FUN_102d74950(long param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    lVar4 = param_1;
    func_0x000100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    param_1 = param_1 - param_3;
    puVar6 = (undefined8 *)(lVar8 + param_3 * 0x10);
    do {
      puVar7 = (undefined8 *)(lVar8 + param_3 * 0x10);
      uStack_70 = *puVar7;
      uStack_68 = puVar7[1];
      puVar7 = puVar6;
      lVar9 = param_1;
      do {
        uStack_80 = puVar7[-2];
        uStack_78 = puVar7[-1];
        puVar5 = &uStack_80;
        func_0x000107c60204(puVar5,puVar1,puVar1,lVar4,lVar4);
        if (puVar5 != (undefined8 *)0xffffffffffffffff) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d74a50);
          (*pcVar2)();
        }
        uStack_70 = *puVar7;
        uStack_68 = puVar7[1];
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = uStack_68;
        puVar7 = puVar7 + -2;
        *puVar7 = uStack_70;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102d74a50; end: 102d74cb7;  */

undefined8 FUN_102d74a50(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102d74b24;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74ca0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102d74b88:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c90);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c98);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c78);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c7c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c84);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c8c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102d74b24:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c80);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c88);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c94);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c9c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102d74b88;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74ca4);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c6c);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74cb8);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102d74cb8(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c70);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d74c74);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 102d74cb8; end: 102d74f63;  */

undefined8
FUN_102d74cb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = (long)param_2 - (long)param_1;
  lVar6 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar6 = lVar12;
  }
  lVar6 = lVar6 >> 4;
  lVar13 = (long)param_3 - (long)param_2;
  lVar9 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar9 = lVar13;
  }
  lVar9 = lVar9 >> 4;
  if (lVar6 < lVar9) {
    if (((param_4 < param_1) || (param_1 + lVar6 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_1)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_1,lVar6 << 4);
    }
    puVar10 = param_4 + lVar6 * 2;
    puVar5 = param_1;
    if ((0xf < lVar12) && (param_2 < param_3)) {
      func_0x000100e8b654();
      puVar2 = PTR___sSSN_11034da80;
      do {
        uStack_70 = *param_2;
        uStack_68 = param_2[1];
        uStack_80 = *param_4;
        uStack_78 = param_4[1];
        puVar3 = &uStack_80;
        func_0x000107c60204(puVar3,puVar2,puVar2,puVar4,puVar4);
        if (puVar3 == (undefined8 *)0xffffffffffffffff) {
          puVar11 = param_2 + 2;
          puVar7 = param_4;
          puVar3 = param_2;
        }
        else {
          puVar11 = param_2;
          puVar7 = param_4 + 2;
          puVar3 = param_4;
        }
        param_4 = puVar7;
        param_2 = puVar11;
        if (puVar5 != puVar3) {
          uVar14 = *puVar3;
          puVar5[1] = puVar3[1];
          *puVar5 = uVar14;
        }
        puVar5 = puVar5 + 2;
      } while ((param_4 < puVar10) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_2)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_2,lVar9 << 4);
    }
    puVar3 = param_4 + lVar9 * 2;
    puVar10 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0xf < lVar13)) {
      func_0x000100e8b654();
      do {
        puVar7 = param_2 + -2;
        puVar11 = param_3;
        while( true ) {
          param_3 = puVar11 + -2;
          puVar10 = puVar3 + -2;
          uStack_70 = *puVar10;
          uStack_68 = puVar3[-1];
          uStack_80 = param_2[-2];
          uStack_78 = param_2[-1];
          puVar5 = &uStack_80;
          func_0x000107c60204(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
          if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
          if (puVar11 != puVar3) {
            uVar14 = *puVar10;
            puVar11[-1] = puVar3[-1];
            *param_3 = uVar14;
          }
          puVar5 = param_2;
          puVar3 = puVar10;
          puVar11 = param_3;
          if (puVar10 <= param_4) goto LAB_102d74f00;
        }
        if (puVar11 != param_2) {
          uVar14 = *puVar7;
          puVar11[-1] = param_2[-1];
          *param_3 = uVar14;
        }
        puVar10 = puVar3;
        puVar5 = puVar7;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar3));
    }
  }
LAB_102d74f00:
  uVar8 = (long)puVar10 - (long)param_4;
  uVar1 = uVar8 + 0xf;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 102d74f64; end: 102d7508b;  */

ulong FUN_102d74f64(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7508c);
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
  FUN_102d7637c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d75088);
      (*pcVar1)();
    }
    FUN_102d7508c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102d7508c; end: 102d751af;  */

long FUN_102d7508c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d751ac);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d751b0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f14548;
        func_0x0001000285a8(0x112f14548,&UNK_10db49650);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f14548;
      func_0x0001000285a8(0x112f14548,&UNK_10db49650);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d751a8);
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



/* Entry: 102d751b0; end: 102d751cf;  */

void FUN_102d751b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3990);
  return;
}



/* Entry: 102d751d0; end: 102d75217;  */

undefined8 FUN_102d751d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102d75218; end: 102d7522f;  */

void FUN_102d75218(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102d73238(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102d75230; end: 102d752a3;  */

void FUN_102d75230(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 102d752a4; end: 102d75327;  */

uint FUN_102d752a4(ulong param_1,long param_2,int param_3,undefined8 param_4,ulong param_5,
                  long param_6,int param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((param_1 == param_5) && (param_2 == param_6)) ||
      (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) != 0)) &&
     (param_3 == param_7)) {
    uVar2 = 0;
    func_0x0001007bbbf8(0);
    func_0x000107c60118(param_4,param_8,uVar2);
    uVar1 = (uint)param_4 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 102d75328; end: 102d7538f;  */

long FUN_102d75328(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d75390; end: 102d753fb;  */

undefined8 * FUN_102d75390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102d753fc; end: 102d7543f;  */

undefined8 * FUN_102d753fc(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 102d75440; end: 102d754c7;  */

int FUN_102d75440(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102d754c8; end: 102d756eb;  */

long FUN_102d754c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d756ec; end: 102d756ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d756ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14558) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14560) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d756f0; end: 102d7580b; -[SCFriendsFeedNativeData initWithFeedId:feedType:activeMessageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d756f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14550);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f14558) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f14560) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 102d7580c; end: 102d7583f; -[SCFriendsFeedNativeData hash] */

undefined8 FUN_102d7580c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d75840();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102d75840; end: 102d758db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d75840(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f14550);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f14550))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c60690(*(undefined8 *)(unaff_x20 + _DAT_112f14558));
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_112f14560));
  func_0x000107c60690();
  func_0x000107c606a4();
  return;
}



/* Entry: 102d758dc; end: 102d759f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102d758dc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    func_0x000107c6147c(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112f14550);
      if (lVar2 == *(long *)(lStack_68 + _DAT_112f14550) &&
          ((long *)(unaff_x20 + _DAT_112f14550))[1] == ((long *)(lStack_68 + _DAT_112f14550))[1]) {
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar1 = (uint)lVar2;
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f14558);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_112f14558);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f14560);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_112f14560);
      func_0x000107c61174(uVar4);
      func_0x000107c49cec(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lStack_68);
      return uVar1 & (int)uVar6 == (int)uVar7 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 102d759f8; end: 102d75a77; -[SCFriendsFeedNativeData isEqual:] */

uint FUN_102d759f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102d758dc(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102d75a78; end: 102d75a7b; -[SCFriendsFeedNativeData copyWithZone:] */

void FUN_102d75a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d75a7c; end: 102d75a97; -[SCFriendsFeedNativeData description] */

void FUN_102d75a7c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d75a98; end: 102d75b13; -[SCFriendsFeedNativeData init] */

void FUN_102d75a98(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendsFeedDataImplementation/FriendsFeedNativeDataWrapper.swift",0x40,2,0x43
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d75ae0);
  (*pcVar1)();
}



/* Entry: 102d75b14; end: 102d75b4f; -[SCFriendsFeedNativeData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d75b14(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f14550 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14560));
  return;
}



/* Entry: 102d75b50; end: 102d75b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d75b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14558) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14560) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d75b54; end: 102d75b83;  */

void FUN_102d75b54(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x000100beb948(param_1);
  return;
}



/* Entry: 102d75b84; end: 102d75c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d75b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14590) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14598) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f145a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f145a8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f145b0) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d75c30; end: 102d75d37; -[SCFriendsFeedNativeDataStream initWithNativeData:fetchContexts:trackingIdentifier:isInitialLoad:isSuccessfulSync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d75c30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000100bebcc8();
  func_0x000107c5fc54();
  if (param_4 != 0) {
    lVar3 = 0;
    func_0x000100bebfa8(0,0x112f14498,&PTR_PTR_1126ba4d0);
    func_0x000107c5fc54();
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112f14590) = param_3;
  *(long *)(param_1 + _DAT_112f14598) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112f145a0);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  *(undefined1 *)(param_1 + _DAT_112f145a8) = param_6;
  *(undefined1 *)(param_1 + _DAT_112f145b0) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d75d38; end: 102d75d3b; -[SCFriendsFeedNativeDataStream copyWithZone:] */

void FUN_102d75d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d75d3c; end: 102d75ddf; -[SCFriendsFeedNativeDataStream description] */

void FUN_102d75d3c(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  FUN_102d763fc(&uStack_68);
  func_0x000107c61170(param_1);
  uStack_28 = uStack_68;
  func_0x000100bebce8(&uStack_28,0x112f14488,&UNK_10db495f0);
  uStack_30 = uStack_60;
  func_0x000100bebce8(&uStack_30,0x112f14490,&UNK_10db495f8);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  func_0x000100bebce8(&uStack_40,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d75de0; end: 102d75f2f; -[SCFriendsFeedNativeDataStream init] */

void FUN_102d75de0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendsFeedDataImplementation/FriendsFeedNativeDataStreamWrapper.swift",0x46,
                      2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d75e28);
  (*pcVar1)();
}



/* Entry: 102d75f30; end: 102d75f6b;  */

ulong FUN_102d75f30(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb46c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb470);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126da9b0;
    func_0x000107c61168(PTR_PTR_1126da9b0);
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
    puVar4 = PTR_PTR_1126da9b0;
    func_0x000107c61168(PTR_PTR_1126da9b0);
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
  func_0x000100bebfa8(0,0x112f144a0,&PTR_PTR_1126da9b0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb544);
  (*pcVar2)();
}



/* Entry: 102d75f6c; end: 102d76107;  */

ulong FUN_102d75f6c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7603c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d76040);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100bebcc8(0);
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
    func_0x000100bebcc8(0);
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
  func_0x000107c5fb78(0xd000000000000019,0x800000010f10c240);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d76108);
  (*pcVar2)();
}



/* Entry: 102d76108; end: 102d7613f;  */

void FUN_102d76108(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102d76140();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102d76140; end: 102d76273;  */

undefined * FUN_102d76140(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d76274);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000102d75e5c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000100bebfa8(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102d76274; end: 102d7637b;  */

undefined * FUN_102d76274(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d7637c);
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
    puVar3 = (undefined *)0x112f145e0;
    func_0x0001000285a8(0x112f145e0,&UNK_10db49710);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1105cc960);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102d7637c; end: 102d763fb;  */

undefined * FUN_102d7637c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000102d75ec8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102d763fc; end: 102d765eb;  */

/* WARNING: Possible PIC construction at 0x000102d764e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d765a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d764e8) */
/* WARNING: Removing unreachable block (ram,0x000102d76534) */
/* WARNING: Removing unreachable block (ram,0x000102d76510) */
/* WARNING: Removing unreachable block (ram,0x000102d76530) */
/* WARNING: Removing unreachable block (ram,0x000102d76554) */
/* WARNING: Removing unreachable block (ram,0x000102d765a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d763fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar7 = *(ulong *)(param_2 + _DAT_112f14590);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_112f14598);
    uVar2 = *(undefined1 *)(param_2 + _DAT_112f145a8);
    puVar1 = (undefined8 *)(param_2 + _DAT_112f145a0);
    uVar3 = *(undefined1 *)(param_2 + _DAT_112f145b0);
    *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    param_1[1] = uVar6;
    uVar9 = *puVar1;
    param_1[3] = puVar1[1];
    param_1[2] = uVar9;
    *(undefined1 *)(param_1 + 4) = uVar2;
    *(undefined1 *)((long)param_1 + 0x21) = uVar3;
  }
  else {
    func_0x000102d76124(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d765ec);
      (*pcVar4)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      lVar5 = *(long *)(uVar7 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      FUN_102d75f6c();
    }
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112f14550 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar6);
  return;
}



/* Entry: 102d765ec; end: 102d767e3;  */

void FUN_102d765ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102d767e4; end: 102d76957;  */

void FUN_102d767e4(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *aplStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar5 = *param_3;
  lVar1 = 0;
  func_0x000102d79d9c();
  ppuStack_68 = &PTR_DAT_1105cce18;
  ppuStack_90 = &PTR_DAT_1105ccbd0;
  lVar2 = 0;
  aplStack_b0[0] = param_3;
  lStack_98 = lVar5;
  auStack_88[0] = param_2;
  lStack_70 = lVar1;
  func_0x000102d77524();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_88,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)aplStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  func_0x0001000c6518(aplStack_b0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  uVar3 = *puVar6;
  uVar4 = *puVar7;
  *(long *)(lVar2 + 0x28) = lVar1;
  *(undefined ***)(lVar2 + 0x30) = &PTR_DAT_1105cce18;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(long *)(lVar2 + 0x50) = lVar5;
  *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_1105ccbd0;
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  func_0x000107c61614(lVar2 + 0x60,0);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000834e4(aplStack_b0);
  func_0x0001000834e4(auStack_88);
  *param_1 = lVar2;
  return;
}



/* Entry: 102d76958; end: 102d7695f;  */

void FUN_102d76958(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *aplStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar2 = *(long **)(unaff_x20 + 0x18);
  lVar7 = *plVar2;
  lVar3 = 0;
  func_0x000102d79d9c();
  ppuStack_68 = &PTR_DAT_1105cce18;
  ppuStack_90 = &PTR_DAT_1105ccbd0;
  lVar4 = 0;
  aplStack_b0[0] = plVar2;
  lStack_98 = lVar7;
  auStack_88[0] = uVar1;
  lStack_70 = lVar3;
  func_0x000102d77524();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_88,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)aplStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  func_0x0001000c6518(aplStack_b0,lVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar9);
  uVar5 = *puVar8;
  uVar6 = *puVar9;
  *(long *)(lVar4 + 0x28) = lVar3;
  *(undefined ***)(lVar4 + 0x30) = &PTR_DAT_1105cce18;
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(long *)(lVar4 + 0x50) = lVar7;
  *(undefined ***)(lVar4 + 0x58) = &PTR_DAT_1105ccbd0;
  *(undefined8 *)(lVar4 + 0x38) = uVar6;
  func_0x000107c61614(lVar4 + 0x60,0);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(plVar2);
  func_0x0001000834e4(aplStack_b0);
  func_0x0001000834e4(auStack_88);
  *param_1 = lVar4;
  return;
}



/* Entry: 102d76960; end: 102d7698b;  */

/* WARNING: Possible PIC construction at 0x000102d7696c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7697c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d76970) */
/* WARNING: Removing unreachable block (ram,0x000102d76980) */

void FUN_102d76960(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d7698c; end: 102d76a0b;  */

void FUN_102d7698c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d76a0c; end: 102d76a8b;  */

void FUN_102d76a0c(undefined8 param_1)

{
  if (lRam0000000112f14630 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72de64);
  return;
}



/* Entry: 102d76a8c; end: 102d76b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d76a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f146f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f146f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14700) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14708) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14710) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f14718) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f14720) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d76b50; end: 102d76e93;  */

/* WARNING: Possible PIC construction at 0x000102d76ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d76e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d76e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d76e54) */
/* WARNING: Removing unreachable block (ram,0x000102d76ce4) */
/* WARNING: Removing unreachable block (ram,0x000102d76e6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d76b50(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar1 = PTR_PTR_1133bb5c8;
  lVar11 = *(long *)(unaff_x20 + _DAT_112f146f8);
  lVar10 = *(long *)(lVar11 + _DAT_11302bab8);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
    uVar8 = 0;
    func_0x000107c61438(lVar10);
    func_0x000100fac3bc();
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + (long)puVar1 * 8);
      func_0x000107c615f0(lVar9);
      func_0x000107c61430(lVar10,2);
      puVar1 = PTR_PTR_1126ac440;
      func_0x000107c61168(PTR_PTR_1126ac440);
      lVar2 = lVar9;
      func_0x000107c6148c(lVar9,puVar1);
      lVar10 = lVar9;
      if ((lVar2 != 0) && (lVar3 = lVar2, func_0x000107c5e0a8(), (int)lVar3 != 0)) {
        func_0x0001000285a8(0x112f14728,&UNK_10db497c0);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f14718);
        func_0x000107c42cb0();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x0001000bda74();
        func_0x000107c61170(uVar4);
        func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f14710);
        func_0x000107c4d48c();
        func_0x000107c61180();
        uVar4 = uVar6;
        func_0x0001000bda74();
        func_0x000107c61170(uVar6);
        lVar10 = _DAT_11302bad0;
        func_0x000107c61428(lVar11 + _DAT_11302bad0,auStack_78,0,0);
        lVar10 = lVar11 + lVar10;
        func_0x000107c61618();
        if (lVar10 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = lVar10;
          func_0x000107c614f0();
          func_0x000107c61440();
          if (lVar11 == 0) goto code_r0x000107c615e8;
        }
        func_0x0001000285a8(0x112e304e8,&UNK_10db497d0);
        uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f14720) + _DAT_112ff73d0);
        func_0x000107c615f0(lVar9);
        func_0x000107c61174();
        uVar6 = uVar12;
        func_0x0001000bda74();
        func_0x000107c61170(uVar12);
        lVar7 = 0;
        FUN_102d78448();
        lVar3 = lVar7;
        func_0x000107c610f8();
        lVar10 = lVar3 + _DAT_112f148e8;
        *(undefined8 *)(lVar10 + 8) = 0;
        func_0x000107c61614(lVar10,0);
        *(long *)(lVar3 + _DAT_112f148c8) = lVar2;
        *(undefined8 *)(lVar3 + _DAT_112f148d0) = uVar6;
        *(undefined8 *)(lVar3 + _DAT_112f148d8) = uVar4;
        *(undefined8 *)(lVar3 + _DAT_112f148e0) = uVar5;
        *(long *)(lVar10 + 8) = lVar11;
        func_0x000107c61604();
        puVar1 = PTR_s_init_1125d9248;
        lStack_88 = lVar3;
        lStack_80 = lVar7;
        func_0x000107c6157c(uVar4);
        func_0x000107c6157c(uVar5);
        func_0x000107c61154(&lStack_88,puVar1);
        func_0x000107c4fba8(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f146f0) + _DAT_11302ba70))
        ;
        lVar10 = lVar9;
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar10);
      return;
    }
    func_0x000107c61430(lVar10,2);
  }
  return;
}



/* Entry: 102d76e94; end: 102d76ef3; -[_TtC24SCRemixChatWallpaperImpl31SnapEditorRemixPluginEntryPoint init] */

void FUN_102d76e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRemixChatWallpaperImpl.SnapEditorRemixPluginEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d76ec0);
  (*pcVar1)();
}



/* Entry: 102d76ef4; end: 102d76f9b; -[_TtC24SCRemixChatWallpaperImpl31SnapEditorRemixPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d76f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d76f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d76f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d76f34) */
/* WARNING: Removing unreachable block (ram,0x000102d76f14) */
/* WARNING: Removing unreachable block (ram,0x000102d76f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d76ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f146f8));
  return;
}



/* Entry: 102d76f9c; end: 102d76fa3;  */

undefined8 FUN_102d76f9c(void)

{
  return 0;
}



/* Entry: 102d76fa4; end: 102d76fc3;  */

void FUN_102d76fa4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3c58);
  return;
}



/* Entry: 102d76fc4; end: 102d76fe7;  */

void FUN_102d76fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d76fe8,0,0);
  return;
}



/* Entry: 102d76fe8; end: 102d770af;  */

void FUN_102d76fe8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  plVar1 = (long *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  func_0x0001000a8868(plVar1,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x28));
  lVar2 = *plVar1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102d77048;
  plVar1[0x11] = *(long *)(unaff_x22 + 0x18);
  plVar1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d79614,0,0);
  return;
}



/* Entry: 102d770b0; end: 102d77127;  */

void FUN_102d770b0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x50);
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x10) + 0x38);
  func_0x0001000a8868(plVar4,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x50));
  lVar12 = *plVar4;
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102d77128;
  lVar5 = *(long *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  lVar7 = *(long *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  lVar9 = *(long *)(unaff_x22 + 0x20);
  lVar10 = *(long *)(unaff_x22 + 0x10);
  plVar4[0x15] = (long)&PTR_DAT_1105ccb58;
  plVar4[0x16] = lVar12;
  plVar4[0x13] = lVar1;
  plVar4[0x14] = lVar10;
  plVar4[0x11] = lVar2;
  plVar4[0x12] = lVar5;
  plVar4[0xf] = lVar9;
  plVar4[0x10] = lVar7;
  plVar4[0xe] = lVar11;
  lVar5 = 0;
  func_0x000107c5eea4();
  plVar4[0x17] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x18] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x19] = uVar6;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar7;
  func_0x000107c5fce8();
  plVar4[0x1a] = lVar5;
  uVar8 = 0x112d45220;
  func_0x000102d7802c(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d777dc,lVar7,uVar8);
  return;
}



/* Entry: 102d77128; end: 102d771ef;  */

void FUN_102d77128(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x102d77184;
  }
  else {
    uVar1 = 0x102d771b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102d771f0; end: 102d7721f; -[_TtC24SCRemixChatWallpaperImpl32RemixChatWallpaperControllerImpl remixChatWallpaperWithWallpaper:conversationId:deckHierarchy:preselectedPlugin:delegate:] */

void FUN_102d771f0(void)

{
  FUN_102d7737c();
  return;
}



/* Entry: 102d77220; end: 102d77243;  */

void FUN_102d77220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d77244,0,0);
  return;
}



/* Entry: 102d77244; end: 102d7734b;  */

void FUN_102d77244(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  plVar6 = (long *)(*(long *)(unaff_x22 + 0x10) + 0x38);
  func_0x0001000a8868(plVar6,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x50));
  lVar12 = *plVar6;
  plVar6 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102d772b8;
  lVar7 = *(long *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  lVar9 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar11 = *(long *)(unaff_x22 + 0x10);
  plVar6[0x15] = (long)&PTR_DAT_1105ccb58;
  plVar6[0x16] = lVar12;
  plVar6[0x13] = lVar2;
  plVar6[0x14] = lVar11;
  plVar6[0x11] = lVar3;
  plVar6[0x12] = lVar7;
  plVar6[0xf] = lVar4;
  plVar6[0x10] = lVar9;
  plVar6[0xe] = lVar1;
  lVar7 = 0;
  func_0x000107c5eea4();
  plVar6[0x17] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x18] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x19] = uVar8;
  lVar9 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar7 = lVar9;
  func_0x000107c5fce8();
  plVar6[0x1a] = lVar7;
  uVar10 = 0x112d45220;
  func_0x000102d7802c(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar9,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d777dc,lVar9,uVar10);
  return;
}



/* Entry: 102d7734c; end: 102d7737b; -[_TtC24SCRemixChatWallpaperImpl32RemixChatWallpaperControllerImpl remixChatWallpaperWithWallpaperImage:conversationId:deckHierarchy:preselectedPlugin:delegate:] */

void FUN_102d7734c(void)

{
  FUN_102d7737c();
  return;
}



/* Entry: 102d7737c; end: 102d774ef;  */

/* WARNING: Possible PIC construction at 0x000102d77498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7749c) */

void FUN_102d7737c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  
  func_0x000107c5faec();
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec();
  }
  func_0x000107c61604(param_1 + 0x60,param_7);
  func_0x000107c613fc(param_8,0x48,7);
  *(long *)(param_8 + 0x10) = param_1;
  *(undefined8 *)(param_8 + 0x18) = param_3;
  *(undefined8 *)(param_8 + 0x20) = param_4;
  *(undefined8 *)(param_8 + 0x28) = param_2;
  *(undefined8 *)(param_8 + 0x30) = param_5;
  *(long *)(param_8 + 0x38) = param_6;
  *(undefined8 *)(param_8 + 0x40) = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c615f4(param_5,2);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0,0x100,0x60,4,0,0,param_9,param_8,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_8);
  return;
}


