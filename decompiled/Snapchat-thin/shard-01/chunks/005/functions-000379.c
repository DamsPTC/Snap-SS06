/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011deb10; end: 1011decab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011deb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  puVar2 = &UNK_110391708;
  func_0x000107c613fc(&UNK_110391708,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112d66520,&UNK_10d92ad40);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_1011deccc;
  func_0x0001000bdd8c(FUN_1011deccc,puVar2);
  func_0x0001000285a8(0x112d66528,&UNK_10d92ad48);
  func_0x000107c4d800();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  lVar5 = 0;
  FUN_1011de70c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112d66448;
  puVar2 = PTR_PTR_1126a6588;
  func_0x000107c610f8();
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar1) = puVar2;
  *(code **)(lVar6 + _DAT_112d66450) = pcVar3;
  *(undefined8 *)(lVar6 + _DAT_112d66458) = uVar4;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011decac; end: 1011deccb;  */

void FUN_1011decac(void)

{
  func_0x000107c61168(&PTR_PTR_112d664c8);
  return;
}



/* Entry: 1011deccc; end: 1011decd3;  */

void FUN_1011deccc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4d48c(uVar2);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126a6590;
  func_0x000107c610f8();
  func_0x000107c4794c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011decd4; end: 1011decdf; -[SCEelNotificationProcessingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011decd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66530;
  func_0x000107c61428(param_1 + _DAT_112d66530,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dece0; end: 1011deceb; -[SCEelNotificationProcessingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dece0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66530;
  func_0x000107c61428(param_1 + _DAT_112d66530,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011decec; end: 1011decf7; -[SCEelNotificationProcessingPluginEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011decec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66538;
  func_0x000107c61428(param_1 + _DAT_112d66538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011decf8; end: 1011ded03; -[SCEelNotificationProcessingPluginEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011decf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66538;
  func_0x000107c61428(param_1 + _DAT_112d66538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ded04; end: 1011ded0f; -[SCEelNotificationProcessingPluginEntryPoint notificationPayloadDecryptionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ded04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66540;
  func_0x000107c61428(param_1 + _DAT_112d66540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ded10; end: 1011ded53;  */

void FUN_1011ded10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011ded54; end: 1011ded5f; -[SCEelNotificationProcessingPluginEntryPoint setNotificationPayloadDecryptionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ded54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66540;
  func_0x000107c61428(param_1 + _DAT_112d66540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ded60; end: 1011dedb3;  */

void FUN_1011ded60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dedb4; end: 1011deeb7;  */

/* WARNING: Possible PIC construction at 0x0001011dee44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dee54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dee48) */
/* WARNING: Removing unreachable block (ram,0x0001011dee58) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011dedb4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d478();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4d7fc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_1011decac(0);
        func_0x000107c613fc();
        FUN_1011deb10(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011deeb8; end: 1011deedf; -[SCEelNotificationProcessingPluginEntryPoint begin] */

void FUN_1011deeb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011dedb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011deee0; end: 1011def23; -[SCEelNotificationProcessingPluginEntryPoint end] */

void FUN_1011deee0(undefined8 param_1)

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



/* Entry: 1011def24; end: 1011df127;  */

void FUN_1011def24(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ecb20)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef10d32b0)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010ef2cd50,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "EelNotificationProcessingPlugin/SCEelNotificationProcessingPluginEntryPoint.swift"
                              ,0x51,2,0x2d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011df128);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56b18();
        goto LAB_1011defb0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5698c();
  }
LAB_1011defb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011df128; end: 1011df1d3; -[SCEelNotificationProcessingPluginEntryPoint setValue:forIvarName:] */

void FUN_1011df128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011def24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011df1d4; end: 1011df25b; -[SCEelNotificationProcessingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df1d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d66530,0);
  func_0x000107c61614(param_1 + _DAT_112d66538,0);
  func_0x000107c61614(param_1 + _DAT_112d66540,0);
  *(undefined8 *)(param_1 + _DAT_112d66548) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011df25c; end: 1011df28f;  */

void FUN_1011df25c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011df290; end: 1011df2e7; -[SCEelNotificationProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df290(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d66530);
  func_0x000107c61610(param_1 + _DAT_112d66538);
  func_0x000107c61610(param_1 + _DAT_112d66540);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d66548));
  return;
}



/* Entry: 1011df2e8; end: 1011df307;  */

void FUN_1011df2e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8a90);
  return;
}



/* Entry: 1011df308; end: 1011df333; -[_TtC33MessagingSDNDisplayModifierPlugin33MessagingSDNDisplayModifierPlugin init] */

void FUN_1011df308(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessagingSDNDisplayModifierPlugin.MessagingSDNDisplayModifierPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011df334);
  (*pcVar1)();
}



/* Entry: 1011df334; end: 1011df337;  */

void FUN_1011df334(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011df338; end: 1011df36f; -[_TtC33MessagingSDNDisplayModifierPlugin33MessagingSDNDisplayModifierPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df338(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d66578));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d66580));
  return;
}



/* Entry: 1011df370; end: 1011df67b;  */

void FUN_1011df370(ulong param_1,undefined8 *param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar4 = 0x112d39140;
      func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar5 = param_2;
      func_0x000107c61434();
      func_0x00010485233c();
      uStack_c8 = *puVar5;
      uVar2 = puVar5[1];
      uStack_c0 = uVar2;
      func_0x000107c61438(uVar2,2);
      puVar3 = PTR___sSSN_11034da80;
      func_0x000107c602d4(lVar4 + 0x20,&uStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      *(undefined **)(lVar4 + 0x60) = puVar3;
      func_0x000107c6142c(uVar2);
      *(ulong *)(lVar4 + 0x48) = param_1;
      *(undefined8 **)(lVar4 + 0x50) = param_2;
      lVar6 = lVar4;
      FUN_100dfa3f0(lVar4);
      func_0x000107c61588(lVar4);
      FUN_100e1766c(lVar4 + 0x20);
      (*param_3)(lVar6);
      func_0x000107c6142c(lVar6);
      return;
    }
  }
  (*param_3)(0);
  return;
}



/* Entry: 1011df67c; end: 1011df6ef;  */

void FUN_1011df67c(long param_1,code *param_2)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = param_2;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    pcVar1 = (code *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  (*param_2)(lVar2,pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar1);
  return;
}



/* Entry: 1011df6f0; end: 1011df71f;  */

undefined * FUN_1011df6f0(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0x112d66620;
  func_0x0001000285a8(0x112d66620,&UNK_10d92ae10);
  func_0x000107c61538();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d66628,&UNK_10d92af90);
    puVar4 = puVar10;
    func_0x000107c602e8();
    puVar12 = (undefined *)0x0;
    do {
      uVar1 = *(uint *)(lVar3 + 0x20 + (long)puVar12 * 4);
      uVar11 = (ulong)uVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar4 + 0x28));
      func_0x000107c6069c();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar11 = uVar11 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar11 >> 6;
      uVar7 = *(ulong *)(puVar4 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar11 & 0x3f);
      lVar5 = *(long *)(puVar4 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if (*(uint *)(lVar5 + uVar11 * 4) == uVar1) goto LAB_1011dfcd4;
          uVar11 = uVar11 + 1 & ~uVar9;
          uVar6 = uVar11 >> 6;
          uVar7 = *(ulong *)(puVar4 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar11 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar4 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(uint *)(lVar5 + uVar11 * 4) = uVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011dfd88);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
LAB_1011dfcd4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar4;
}



/* Entry: 1011df720; end: 1011df733;  */

/* WARNING: Possible PIC construction at 0x0001011dfb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dfb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df720(undefined8 param_1,ulong param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  
  uVar8 = param_3;
  func_0x000107c3f808();
  func_0x000107c61180();
  if (param_2 == 0) goto LAB_1011dfbb4;
  uVar3 = param_2;
  func_0x000107c4a264();
  if ((((int)uVar3 != 0) && (uVar3 = param_2, func_0x000107c44988(), (int)uVar3 != 0)) &&
     (param_3 != 0)) {
    func_0x000107c61174();
    uVar3 = param_3;
    func_0x000107c447d8();
    if ((uVar3 & 1) != 0) {
      uVar3 = param_3;
      func_0x000107c40674();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dfc04);
        (*pcVar1)();
      }
      uVar2 = uVar3;
      func_0x000103bd2c74();
      func_0x000107c61170(uVar3);
      if (uVar8 != 0) {
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112d66580);
        if (uVar3 != 0) {
          func_0x000107c4cdb8();
          func_0x000107c61180();
          uVar4 = uVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 != 0) {
            uVar3 = uVar4;
            func_0x000107c49ef0();
            if ((uVar3 & 1) != 0) {
              uVar3 = param_2;
              func_0x000107c4cdc4();
              func_0x000107c61180();
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dfc08);
                (*pcVar1)();
              }
              uVar5 = uVar3;
              func_0x000107c5dc0c();
              func_0x000107c61170(uVar3);
              puVar6 = &UNK_110391810;
              func_0x000107c613fc(&UNK_110391810,0x20,7);
              *(code **)(puVar6 + 0x10) = param_4;
              *(undefined8 *)(puVar6 + 0x18) = param_5;
              puVar7 = &UNK_110391838;
              func_0x000107c613fc(&UNK_110391838,0x38,7);
              *(ulong *)(puVar7 + 0x10) = uVar2;
              *(ulong *)(puVar7 + 0x18) = uVar8;
              *(code **)(puVar7 + 0x20) = FUN_1011dfc08;
              *(undefined **)(puVar7 + 0x28) = puVar6;
              *(ulong *)(puVar7 + 0x30) = uVar5;
              func_0x000107c6157c(param_5);
              func_0x000107c61434(uVar8);
              func_0x000107c6157c(puVar6);
              func_0x00010075a04c(0,1,0x1011dfc10,puVar7);
              func_0x000107c61170(param_2);
              func_0x000107c61170(param_3);
              func_0x000107c615e8(uVar4);
              func_0x000107c6142c(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_release_11034f4c0)(puVar6);
              return;
            }
            func_0x000107c61170(param_2);
            func_0x000107c61170(param_3);
            func_0x000107c615e8(uVar4);
            func_0x000107c6142c(uVar8);
            goto LAB_1011dfbb4;
          }
        }
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(param_3);
        goto LAB_1011dfbb0;
      }
    }
    func_0x000107c61170(param_2);
    param_2 = param_3;
  }
LAB_1011dfbb0:
  func_0x000107c61170(param_2);
LAB_1011dfbb4:
  (*param_4)(0);
  return;
}



/* Entry: 1011df734; end: 1011df793; -[_TtC33MessagingSDNDisplayModifierPluginP33_ED669EBADB3463B1219490969D62004132PriorityChatFetchMessageCallback onFetchMessageComplete:] */

/* WARNING: Possible PIC construction at 0x0001011df77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011df780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df734(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d665b0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011df794; end: 1011df7db; -[_TtC33MessagingSDNDisplayModifierPluginP33_ED669EBADB3463B1219490969D62004132PriorityChatFetchMessageCallback onError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df794(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d665b8);
  func_0x000107c61174();
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011df7dc; end: 1011df83b; -[_TtC33MessagingSDNDisplayModifierPluginP33_ED669EBADB3463B1219490969D62004132PriorityChatFetchMessageCallback init] */

void FUN_1011df7dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessagingSDNDisplayModifierPlugin.PriorityChatFetchMessageCallback",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011df808);
  (*pcVar1)();
}



/* Entry: 1011df83c; end: 1011df87b; -[_TtC33MessagingSDNDisplayModifierPluginP33_ED669EBADB3463B1219490969D62004132PriorityChatFetchMessageCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011df85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011df860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df83c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d665b0 + 8));
  return;
}



/* Entry: 1011df87c; end: 1011df8bb;  */

void FUN_1011df87c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8b60);
  return;
}



/* Entry: 1011df8bc; end: 1011df8cf;  */

void FUN_1011df8bc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103917d8;
  if (lRam0000000112d665e8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d665e8 = param_1;
  }
  return;
}



/* Entry: 1011df8d0; end: 1011df97b;  */

void FUN_1011df8d0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1011df97c; end: 1011df9ab;  */

bool FUN_1011df97c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1011df9ac; end: 1011dfc07;  */

/* WARNING: Possible PIC construction at 0x0001011dfb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dfb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011df9ac(ulong param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  
  uVar8 = param_2;
  func_0x000107c3f808();
  func_0x000107c61180();
  if (param_1 == 0) goto LAB_1011dfbb4;
  uVar3 = param_1;
  func_0x000107c4a264();
  if ((((int)uVar3 != 0) && (uVar3 = param_1, func_0x000107c44988(), (int)uVar3 != 0)) &&
     (param_2 != 0)) {
    func_0x000107c61174();
    uVar3 = param_2;
    func_0x000107c447d8();
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2;
      func_0x000107c40674();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dfc04);
        (*pcVar1)();
      }
      uVar2 = uVar3;
      func_0x000103bd2c74();
      func_0x000107c61170(uVar3);
      if (uVar8 != 0) {
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112d66580);
        if (uVar3 != 0) {
          func_0x000107c4cdb8();
          func_0x000107c61180();
          uVar4 = uVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 != 0) {
            uVar3 = uVar4;
            func_0x000107c49ef0();
            if ((uVar3 & 1) != 0) {
              uVar3 = param_1;
              func_0x000107c4cdc4();
              func_0x000107c61180();
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dfc08);
                (*pcVar1)();
              }
              uVar5 = uVar3;
              func_0x000107c5dc0c();
              func_0x000107c61170(uVar3);
              puVar6 = &UNK_110391810;
              func_0x000107c613fc(&UNK_110391810,0x20,7);
              *(code **)(puVar6 + 0x10) = param_3;
              *(undefined8 *)(puVar6 + 0x18) = param_4;
              puVar7 = &UNK_110391838;
              func_0x000107c613fc(&UNK_110391838,0x38,7);
              *(ulong *)(puVar7 + 0x10) = uVar2;
              *(ulong *)(puVar7 + 0x18) = uVar8;
              *(code **)(puVar7 + 0x20) = FUN_1011dfc08;
              *(undefined **)(puVar7 + 0x28) = puVar6;
              *(ulong *)(puVar7 + 0x30) = uVar5;
              func_0x000107c6157c(param_4);
              func_0x000107c61434(uVar8);
              func_0x000107c6157c(puVar6);
              func_0x00010075a04c(0,1,0x1011dfc10,puVar7);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_2);
              func_0x000107c615e8(uVar4);
              func_0x000107c6142c(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_release_11034f4c0)(puVar6);
              return;
            }
            func_0x000107c61170(param_1);
            func_0x000107c61170(param_2);
            func_0x000107c615e8(uVar4);
            func_0x000107c6142c(uVar8);
            goto LAB_1011dfbb4;
          }
        }
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(param_2);
        goto LAB_1011dfbb0;
      }
    }
    func_0x000107c61170(param_1);
    param_1 = param_2;
  }
LAB_1011dfbb0:
  func_0x000107c61170(param_1);
LAB_1011dfbb4:
  (*param_3)(0);
  return;
}



/* Entry: 1011dfc08; end: 1011dfc27;  */

void FUN_1011dfc08(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar5 = 0x112d39140;
      func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      puVar6 = param_2;
      func_0x000107c61434();
      func_0x00010485233c();
      uStack_c8 = *puVar6;
      uVar3 = puVar6[1];
      uStack_c0 = uVar3;
      func_0x000107c61438(uVar3,2);
      puVar4 = PTR___sSSN_11034da80;
      func_0x000107c602d4(lVar5 + 0x20,&uStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      *(undefined **)(lVar5 + 0x60) = puVar4;
      func_0x000107c6142c(uVar3);
      *(ulong *)(lVar5 + 0x48) = param_1;
      *(undefined8 **)(lVar5 + 0x50) = param_2;
      lVar7 = lVar5;
      FUN_100dfa3f0(lVar5);
      func_0x000107c61588(lVar5);
      FUN_100e1766c(lVar5 + 0x20);
      (*pcVar2)(lVar7);
      func_0x000107c6142c(lVar7);
      return;
    }
  }
  (*pcVar2)(0,param_2,pcVar2,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1011dfc28; end: 1011dfc4f;  */

void FUN_1011dfc28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 1011dfc50; end: 1011dfd87;  */

undefined * FUN_1011dfc50(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d66628,&UNK_10d92af90);
    puVar3 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + (long)puVar11 * 4);
      uVar10 = (ulong)uVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      func_0x000107c6069c();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar10 & 0x3f);
      lVar4 = *(long *)(puVar3 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(uint *)(lVar4 + uVar10 * 4) == uVar1) goto LAB_1011dfcd4;
          uVar10 = uVar10 + 1 & ~uVar8;
          uVar5 = uVar10 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar10 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(uint *)(lVar4 + uVar10 * 4) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011dfd88);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_1011dfcd4:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 1011dfd88; end: 1011dfd9b;  */

void FUN_1011dfd88(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103918b0;
  if (lRam0000000112d66630 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d66630 = param_1;
  }
  return;
}



/* Entry: 1011dfd9c; end: 1011dfddf;  */

void FUN_1011dfd9c(long param_1,long *param_2,long param_3)

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



/* Entry: 1011dfde0; end: 1011dfde3;  */

void FUN_1011dfde0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d66638 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1011dfd88(0xff);
  puVar2 = &UNK_10d92ae88;
  func_0x000107c61520(&UNK_10d92ae88,uVar1);
  puRam0000000112d66638 = puVar2;
  return;
}



/* Entry: 1011dfde4; end: 1011dfe27;  */

void FUN_1011dfde4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d66638 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1011dfd88(0xff);
  puVar2 = &UNK_10d92ae88;
  func_0x000107c61520(&UNK_10d92ae88,uVar1);
  puRam0000000112d66638 = puVar2;
  return;
}



/* Entry: 1011dfe28; end: 1011dfe2b;  */

void FUN_1011dfe28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011dfe2c; end: 1011dfe9b;  */

undefined8 FUN_1011dfe2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011dfeb8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1011dfe9c; end: 1011dfeb7;  */

void FUN_1011dfe9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011dfeb8; end: 1011e000b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dfeb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c4d490();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000100759c94();
  func_0x000107c61170(param_2);
  lVar3 = 0;
  FUN_1011df87c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d66578) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112d66580) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112d69ae0);
  FUN_10122c308(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(plVar5);
  puVar6 = (undefined1 *)plVar5;
  func_0x00010122c23c();
  func_0x000107c4fba8(uVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1011e000c; end: 1011e002b;  */

void FUN_1011e000c(void)

{
  func_0x000107c61168(&PTR_PTR_112d66680);
  return;
}



/* Entry: 1011e002c; end: 1011e0037; -[SCMessagingSDNDisplayModifierPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e002c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d666d8;
  func_0x000107c61428(param_1 + _DAT_112d666d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e0038; end: 1011e0043; -[SCMessagingSDNDisplayModifierPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e0038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d666d8;
  func_0x000107c61428(param_1 + _DAT_112d666d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e0044; end: 1011e004f; -[SCMessagingSDNDisplayModifierPluginEntryPoint nativeMessageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e0044(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d666e0;
  func_0x000107c61428(param_1 + _DAT_112d666e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e0050; end: 1011e005b; -[SCMessagingSDNDisplayModifierPluginEntryPoint setNativeMessageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e0050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d666e0;
  func_0x000107c61428(param_1 + _DAT_112d666e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e005c; end: 1011e0067; -[SCMessagingSDNDisplayModifierPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e005c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d666e8;
  func_0x000107c61428(param_1 + _DAT_112d666e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e0068; end: 1011e00ab;  */

void FUN_1011e0068(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011e00ac; end: 1011e00b7; -[SCMessagingSDNDisplayModifierPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e00ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d666e8;
  func_0x000107c61428(param_1 + _DAT_112d666e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e00b8; end: 1011e010b;  */

void FUN_1011e00b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e010c; end: 1011e020f;  */

/* WARNING: Possible PIC construction at 0x0001011e019c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e01ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e01a0) */
/* WARNING: Removing unreachable block (ram,0x0001011e01b0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011e010c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d470();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4cdfc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_1011e000c(0);
        func_0x000107c613fc();
        FUN_1011dfeb8(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011e0210; end: 1011e0237; -[SCMessagingSDNDisplayModifierPluginEntryPoint begin] */

void FUN_1011e0210(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011e010c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011e0238; end: 1011e027b; -[SCMessagingSDNDisplayModifierPluginEntryPoint end] */

void FUN_1011e0238(undefined8 param_1)

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



/* Entry: 1011e027c; end: 1011e047f;  */

void FUN_1011e027c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10d3180)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef2ce80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001b;
        if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) &&
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MessagingSDNDisplayModifierPlugin/SCMessagingSDNDisplayModifierPluginEntryPoint.swift"
                              ,0x55,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e0480);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5666c();
        goto LAB_1011e0308;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56988();
  }
LAB_1011e0308:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011e0480; end: 1011e052b; -[SCMessagingSDNDisplayModifierPluginEntryPoint setValue:forIvarName:] */

void FUN_1011e0480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011e027c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011e052c; end: 1011e05b3; -[SCMessagingSDNDisplayModifierPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e052c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d666d8,0);
  func_0x000107c61614(param_1 + _DAT_112d666e0,0);
  func_0x000107c61614(param_1 + _DAT_112d666e8,0);
  *(undefined8 *)(param_1 + _DAT_112d666f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e05b4; end: 1011e05e7;  */

void FUN_1011e05b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011e05e8; end: 1011e063f; -[SCMessagingSDNDisplayModifierPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e05e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d666d8);
  func_0x000107c61610(param_1 + _DAT_112d666e0);
  func_0x000107c61610(param_1 + _DAT_112d666e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d666f0));
  return;
}



/* Entry: 1011e0640; end: 1011e065f;  */

void FUN_1011e0640(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8cf0);
  return;
}



/* Entry: 1011e0660; end: 1011e06bb; -[_TtC29MessagingSDNSuppressionPlugin29MessagingSDNSuppressionPlugin init] */

void FUN_1011e0660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessagingSDNSuppressionPlugin.MessagingSDNSuppressionPlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e068c);
  (*pcVar1)();
}



/* Entry: 1011e06bc; end: 1011e06f7; -[_TtC29MessagingSDNSuppressionPlugin29MessagingSDNSuppressionPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e06bc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d66720));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d66728 + 8))
  ;
  return;
}



/* Entry: 1011e06f8; end: 1011e0997;  */

/* WARNING: Possible PIC construction at 0x0001011e0964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e0968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e06f8(undefined8 param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  
  if (param_2 != 0) {
    lVar12 = param_2;
    pcVar4 = param_3;
    uVar7 = param_4;
    func_0x000107c61174();
    uVar13 = (uint)uVar7;
    lVar5 = param_2;
    func_0x000107c447d8();
    if ((int)lVar5 != 0) {
      lVar5 = param_2;
      func_0x000107c40674();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011e0998);
        (*pcVar4)();
      }
      lVar6 = lVar5;
      func_0x000103bd2c74();
      func_0x000107c61170(lVar5);
      if (lVar12 != 0) {
        func_0x000100bc2654(0);
        func_0x000107c61434(lVar12);
        lVar5 = lVar12;
        func_0x000103c1912c();
        uVar11 = (undefined1)lVar5;
        if (lVar6 == 0) {
          func_0x000107c61170(param_2);
          func_0x000107c6142c(lVar12);
          goto LAB_1011e07f0;
        }
        func_0x000107c61174();
        uVar7 = param_1;
        FUN_1011e10ac();
        func_0x000107c6142c(lVar12);
        func_0x000107c61170(param_1);
        if ((uVar13 & 0xff) != 2) {
          uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d66728);
          uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d66728))[1];
          puVar8 = &UNK_1103919e8;
          func_0x000107c613fc(&UNK_1103919e8,0x18,7);
          func_0x000107c61614(puVar8 + 0x10);
          puVar9 = &UNK_110391a10;
          func_0x000107c613fc(&UNK_110391a10,0x60,7);
          *(code **)(puVar9 + 0x10) = param_3;
          *(undefined8 *)(puVar9 + 0x18) = param_4;
          *(undefined8 *)(puVar9 + 0x20) = uVar7;
          puVar9[0x28] = uVar11;
          *(code **)(puVar9 + 0x30) = pcVar4;
          bVar3 = (byte)uVar13 & 1;
          puVar9[0x38] = bVar3;
          *(undefined **)(puVar9 + 0x40) = puVar8;
          *(long *)(puVar9 + 0x48) = lVar6;
          *(undefined8 *)(puVar9 + 0x50) = uVar1;
          *(undefined8 *)(puVar9 + 0x58) = uVar2;
          puVar10 = &UNK_110391a38;
          func_0x000107c613fc(&UNK_110391a38,0x48,7);
          *(code **)(puVar10 + 0x10) = FUN_1011e1248;
          *(undefined **)(puVar10 + 0x18) = puVar9;
          *(undefined8 *)(puVar10 + 0x20) = uVar7;
          puVar10[0x28] = uVar11;
          *(code **)(puVar10 + 0x30) = pcVar4;
          puVar10[0x38] = bVar3;
          *(long *)(puVar10 + 0x40) = lVar6;
          func_0x000107c61174(lVar6);
          func_0x000107c61174();
          func_0x000107c61434(uVar2);
          func_0x000107c6157c(param_4);
          func_0x000107c6157c(puVar8);
          func_0x000107c6157c(puVar9);
          func_0x00010075a04c(0,1,FUN_1011e128c,puVar10);
          func_0x000107c61170(param_2);
          func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(puVar8);
          return;
        }
        func_0x000107c61170(param_2);
        param_2 = lVar6;
      }
    }
    func_0x000107c61170(param_2);
  }
LAB_1011e07f0:
  (*param_3)(8);
  return;
}



/* Entry: 1011e0998; end: 1011e0adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e0998(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4,char param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [24];
  
  if (((param_1 & 1) == 0) || (param_5 == '\x01')) {
    (*param_2)(0);
  }
  else {
    func_0x000107c61428(param_8 + 0x10,auStack_68,0,0);
    param_8 = param_8 + 0x10;
    func_0x000107c61618();
    if (param_8 == 0) {
      (*param_2)();
    }
    else {
      puVar1 = &UNK_110391b00;
      func_0x000107c613fc(&UNK_110391b00,0x30,7);
      *(code **)(puVar1 + 0x10) = param_2;
      *(undefined8 *)(puVar1 + 0x18) = param_3;
      *(undefined8 *)(puVar1 + 0x20) = param_10;
      *(undefined8 *)(puVar1 + 0x28) = param_11;
      puVar2 = &UNK_110391b28;
      func_0x000107c613fc(&UNK_110391b28,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1011e130c;
      *(undefined **)(puVar2 + 0x18) = puVar1;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      *(undefined8 *)(puVar2 + 0x28) = param_9;
      func_0x000107c6157c(param_3);
      func_0x000107c61434(param_11);
      func_0x000107c6157c(puVar1);
      func_0x000107c61174(param_9);
      func_0x00010075a04c(0,1,0x1011e1318,puVar2);
      func_0x000107c61170(param_8);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
    }
  }
  return;
}



/* Entry: 1011e0adc; end: 1011e0b77;  */

/* WARNING: Possible PIC construction at 0x0001011e0b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e0b34) */
/* WARNING: Removing unreachable block (ram,0x0001011e0b58) */
/* WARNING: Removing unreachable block (ram,0x0001011e0b38) */
/* WARNING: Removing unreachable block (ram,0x0001011e0b5c) */

void FUN_1011e0adc(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c4a2d0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 1011e0b78; end: 1011e0dc7;  */

void FUN_1011e0b78(long *param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_d0;
  puVar3 = (undefined *)*param_1;
  if ((char)param_1[1] == '\x01') {
    iVar2 = 2;
    puStack_a0 = puVar3;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_a0,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else if (puVar3 != (undefined *)0x0) {
    func_0x000107c44174();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar5 = &UNK_110391a60;
      func_0x000107c613fc(&UNK_110391a60,0x20,7);
      *(code **)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      puVar6 = &UNK_110391a88;
      func_0x000107c613fc(&UNK_110391a88,0x20,7);
      *(code **)(puVar6 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + 0x18) = param_3;
      puVar7 = PTR_PTR_1126be918;
      func_0x000107c610f8(PTR_PTR_1126be918);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_1011e12a8;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x1011e1380;
      puStack_88 = &UNK_110391aa0;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      uStack_b0 = 0x1011e12cc;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_1011adf84;
      puStack_b8 = &UNK_110391ac8;
      puStack_a8 = puVar6;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c61580(param_3,2);
      func_0x000107c48b60(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_a8);
      func_0x000107c61574(puStack_78);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d8();
      puVar6 = PTR_PTR_1126b41e0;
      func_0x000107c610f8(PTR_PTR_1126b41e0);
      func_0x000107c46180();
      func_0x000107c5c594(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      return;
    }
  }
  (*param_2)(0);
  return;
}



/* Entry: 1011e0dc8; end: 1011e0fef;  */

void FUN_1011e0dc8(long *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_c0;
  puVar4 = (undefined *)*param_1;
  if ((char)param_1[1] == '\x01') {
    iVar3 = 2;
    puStack_90 = puVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_90,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else if (puVar4 != (undefined *)0x0) {
    func_0x000107c44174();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = &UNK_110391b50;
      func_0x000107c613fc(&UNK_110391b50,0x28,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(code **)(puVar6 + 0x18) = param_2;
      *(undefined8 *)(puVar6 + 0x20) = param_3;
      puVar7 = &UNK_110391b78;
      func_0x000107c613fc(&UNK_110391b78,0x28,7);
      *(long *)(puVar7 + 0x10) = param_4;
      *(code **)(puVar7 + 0x18) = param_2;
      *(undefined8 *)(puVar7 + 0x20) = param_3;
      puVar8 = PTR_PTR_1126ba510;
      func_0x000107c610f8(PTR_PTR_1126ba510);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1011e1324;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x1011e1384;
      puStack_78 = &UNK_110391b90;
      ppuVar9 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar9);
      uStack_a0 = 0x1011e1344;
      puStack_c0 = puVar1;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_1011adf84;
      puStack_a8 = &UNK_110391bb8;
      puStack_98 = puVar7;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c61580(param_3,2);
      func_0x000107c48b60(puVar8);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_98);
      func_0x000107c61574(puStack_68);
      if (-1 < param_4) {
        puVar6 = PTR_PTR_1126ba518;
        func_0x000107c610f8(PTR_PTR_1126ba518);
        func_0x000107c485dc();
        func_0x000107c431dc(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar6);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e0ff0);
      (*pcVar2)();
    }
  }
  (*param_2)(0);
  return;
}



/* Entry: 1011e0ff0; end: 1011e101f;  */

undefined * FUN_1011e0ff0(void)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar4 = 0x112d66620;
  func_0x0001000285a8(0x112d66620,&UNK_10d92ae10);
  func_0x000107c61538();
  puVar10 = *(undefined **)(lVar4 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d66628,&UNK_10d92af90);
    puVar3 = puVar10;
    func_0x000107c602e8();
    puVar12 = (undefined *)0x0;
    do {
      uVar1 = *(uint *)(lVar4 + 0x20 + (long)puVar12 * 4);
      uVar11 = (ulong)uVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      func_0x000107c6069c();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar11 = uVar11 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar11 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar11 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if (*(uint *)(lVar5 + uVar11 * 4) == uVar1) goto LAB_1011dfcd4;
          uVar11 = uVar11 + 1 & ~uVar9;
          uVar6 = uVar11 >> 6;
          uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar11 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(uint *)(lVar5 + uVar11 * 4) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011dfd88);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_1011dfcd4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar3;
}



/* Entry: 1011e1020; end: 1011e103f;  */

void FUN_1011e1020(void)

{
  FUN_1011e06f8();
  return;
}



/* Entry: 1011e1040; end: 1011e105f;  */

void FUN_1011e1040(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8dc0);
  return;
}



/* Entry: 1011e1060; end: 1011e10ab;  */

void FUN_1011e1060(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011e10ac; end: 1011e1247;  */

long FUN_1011e10ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x000107c42e80();
  if ((int)lVar2 == 4) {
    lVar2 = param_1;
    func_0x000107c3f808();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_1011e1120;
    lVar4 = lVar2;
    func_0x000107c44988();
    if ((int)lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4cdc4();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e1240);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5dc0c();
      func_0x000107c61170(lVar3);
    }
    lVar3 = lVar2;
    func_0x000107c447e8();
    param_1 = lVar2;
    if ((int)lVar3 != 0) {
      func_0x000107c406fc();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e11c0);
        (*pcVar1)();
      }
LAB_1011e11e8:
      func_0x000107c5dc0c();
      func_0x000107c61170(lVar2);
    }
LAB_1011e1204:
    func_0x000107c49e9c(param_1);
    func_0x000107c61170(param_1);
  }
  else {
LAB_1011e1120:
    lVar2 = param_1;
    func_0x000107c42e80();
    if ((int)lVar2 == 8) {
      func_0x000107c5b134();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c44988();
        if ((int)lVar2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar2 = param_1;
          func_0x000107c4cdc4();
          func_0x000107c61180();
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e1244);
            (*pcVar1)();
          }
          lVar4 = lVar2;
          func_0x000107c5dc0c();
          func_0x000107c61170(lVar2);
        }
        lVar2 = param_1;
        func_0x000107c447e8();
        if ((int)lVar2 != 0) {
          lVar2 = param_1;
          func_0x000107c406fc();
          func_0x000107c61180();
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e1248);
            (*pcVar1)();
          }
          goto LAB_1011e11e8;
        }
        goto LAB_1011e1204;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}



/* Entry: 1011e1248; end: 1011e128b;  */

void FUN_1011e1248(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1011e0998(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1011e128c; end: 1011e12a7;  */

void FUN_1011e128c(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar10 = &puStack_d0;
  puVar4 = (undefined *)*param_1;
  if ((char)param_1[1] == '\x01') {
    iVar3 = 2;
    puStack_a0 = puVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_a0,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else if (puVar4 != (undefined *)0x0) {
    func_0x000107c44174();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = &UNK_110391a60;
      func_0x000107c613fc(&UNK_110391a60,0x20,7);
      *(code **)(puVar6 + 0x10) = pcVar1;
      *(undefined8 *)(puVar6 + 0x18) = uVar5;
      puVar7 = &UNK_110391a88;
      func_0x000107c613fc(&UNK_110391a88,0x20,7);
      *(code **)(puVar7 + 0x10) = pcVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar5;
      puVar8 = PTR_PTR_1126be918;
      func_0x000107c610f8(PTR_PTR_1126be918);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_1011e12a8;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x1011e1380;
      puStack_88 = &UNK_110391aa0;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar9);
      uStack_b0 = 0x1011e12cc;
      puStack_d0 = puVar2;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_1011adf84;
      puStack_b8 = &UNK_110391ac8;
      puStack_a8 = puVar7;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c61580(uVar5,2);
      func_0x000107c48b60(puVar8);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_a8);
      func_0x000107c61574(puStack_78);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d8();
      puVar7 = PTR_PTR_1126b41e0;
      func_0x000107c610f8(PTR_PTR_1126b41e0);
      func_0x000107c46180();
      func_0x000107c5c594(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      return;
    }
  }
  (*pcVar1)(0);
  return;
}



/* Entry: 1011e12a8; end: 1011e12ef;  */

void FUN_1011e12a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1);
  return;
}



/* Entry: 1011e12f0; end: 1011e1323;  */

void FUN_1011e12f0(long param_1,long param_2)

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



/* Entry: 1011e1324; end: 1011e1367;  */

void FUN_1011e1324(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Entry: 1011e1368; end: 1011e1387;  */

void FUN_1011e1368(long param_1,long param_2)

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



/* Entry: 1011e1388; end: 1011e13f7;  */

undefined8 FUN_1011e1388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011e1414(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1011e13f8; end: 1011e1413;  */

void FUN_1011e13f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011e1414; end: 1011e15a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e1414(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *aplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c4d490();
  func_0x000107c61180();
  uVar7 = 0;
  uVar2 = param_2;
  func_0x000100759c94();
  func_0x000107c61170(param_2);
  uVar8 = *(undefined8 *)(param_3 + _DAT_113083f78);
  func_0x000107c6157c(uVar2);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  lVar3 = 0;
  FUN_1011e1040();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d66720) = uVar2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d66728);
  *puVar1 = uVar9;
  puVar1[1] = uVar7;
  plVar5 = &lStack_50;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112d69b70);
  ppuStack_58 = &PTR_DAT_1103919c0;
  aplStack_78[0] = plVar5;
  lStack_60 = lVar3;
  FUN_10122c6c8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(plVar5);
  pplVar6 = aplStack_78;
  func_0x00010122c5e8(pplVar6);
  func_0x000107c4fba8(uVar9);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(pplVar6);
  return;
}



/* Entry: 1011e15a8; end: 1011e15c7;  */

void FUN_1011e15a8(void)

{
  func_0x000107c61168(&PTR_PTR_112d667c8);
  return;
}



/* Entry: 1011e15c8; end: 1011e15d3; -[SCMessagingSDNSuppressionPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e15c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66820;
  func_0x000107c61428(param_1 + _DAT_112d66820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e15d4; end: 1011e15df; -[SCMessagingSDNSuppressionPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e15d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66820;
  func_0x000107c61428(param_1 + _DAT_112d66820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e15e0; end: 1011e15eb; -[SCMessagingSDNSuppressionPluginEntryPoint nativeMessageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e15e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66828;
  func_0x000107c61428(param_1 + _DAT_112d66828,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e15ec; end: 1011e15f7; -[SCMessagingSDNSuppressionPluginEntryPoint setNativeMessageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e15ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66828;
  func_0x000107c61428(param_1 + _DAT_112d66828,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e15f8; end: 1011e1603; -[SCMessagingSDNSuppressionPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e15f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66830;
  func_0x000107c61428(param_1 + _DAT_112d66830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e1604; end: 1011e1647;  */

void FUN_1011e1604(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011e1648; end: 1011e1653; -[SCMessagingSDNSuppressionPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e1648(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66830;
  func_0x000107c61428(param_1 + _DAT_112d66830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e1654; end: 1011e16a7;  */

void FUN_1011e1654(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e16a8; end: 1011e17ab;  */

/* WARNING: Possible PIC construction at 0x0001011e1738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e1748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e173c) */
/* WARNING: Removing unreachable block (ram,0x0001011e174c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011e16a8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d470();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3d1c4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_1011e15a8(0);
        func_0x000107c613fc();
        FUN_1011e1414(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011e17ac; end: 1011e17d3; -[SCMessagingSDNSuppressionPluginEntryPoint begin] */

void FUN_1011e17ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011e16a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011e17d4; end: 1011e1817; -[SCMessagingSDNSuppressionPluginEntryPoint end] */

void FUN_1011e17d4(undefined8 param_1)

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



/* Entry: 1011e1818; end: 1011e1a1b;  */

void FUN_1011e1818(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10d3180)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef2ce80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) &&
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MessagingSDNSuppressionPlugin/SCMessagingSDNSuppressionPluginEntryPoint.swift"
                              ,0x4d,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e1a1c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52228();
        goto LAB_1011e18a4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56988();
  }
LAB_1011e18a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011e1a1c; end: 1011e1ac7; -[SCMessagingSDNSuppressionPluginEntryPoint setValue:forIvarName:] */

void FUN_1011e1a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011e1818(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


