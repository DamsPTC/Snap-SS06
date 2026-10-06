/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004323c8; end: 1004323d3;  */

void FUN_1004323c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf55450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createConfigProviderForNamespace_1125b2eb8,0x10);
  return;
}



/* Entry: 1004323d4; end: 10043241f; +[SCPureArroyoABChangeEvent unchanged] */

void FUN_1004323d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d79b8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100432420; end: 100432463; -[SCPureArroyoABChangeEvent internalInit] */

void FUN_100432420(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112703b28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100432464; end: 1004326e3; -[SCStoriesNetworkingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100432464(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105a188d0;
  puStack_90 = &UNK_1108cde38;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_105a18910;
  puStack_c0 = &UNK_1108cde68;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_105a18958;
  puStack_e8 = &UNK_1108cde98;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_108,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272d860);
  }
  func_0x000107c61174(uVar6);
  puVar5 = PTR_PTR_1126c12d0;
  func_0x000107c610f4(PTR_PTR_1126c12d0);
  func_0x000107c47824();
  func_0x000107c42c20(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1004326e4; end: 1004327df; -[SCStoriesNetworkingServices initWithMixerNetworkRequester:mixerEndpointManager:fsnNetworkRequester:stmsNetworkRequester:] */

undefined1 *
FUN_1004326e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126ff388;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004327e0; end: 100432883;  */

void FUN_1004327e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100432884; end: 100432a93; -[SCStoriesSnapReadReceiptEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100432884(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_106920cf0;
  puStack_78 = &UNK_11094ac10;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c0 = puVar3;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_100939d08;
  puStack_a8 = &UNK_11094ac40;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c61174(puVar1);
  puStack_a0 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112753cc0);
  *(undefined **)(param_1 + _DAT_112753cc0) = puVar2;
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c8,auStack_68);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cf1c8;
  func_0x000107c610f4(PTR_PTR_1126cf1c8);
  func_0x000107c487c0();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112753cc4));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_c8);
  func_0x000107c61170(puStack_a0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100432a94; end: 100432b5f; -[SCStoriesSnapReadReceiptService initWithSnapReadReceiptCoordinator:logger:cachedReadReceiptProvider:] */

undefined1 *
FUN_100432a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706928;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100432b60; end: 100432bab;  */

void FUN_100432b60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100432bac; end: 100432bb3;  */

void FUN_100432bac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100432bb4; end: 100432c07;  */

void FUN_100432bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100432c08; end: 100433d13;  */

void FUN_100432c08(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_1002c2dc0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  *(undefined8 *)(param_2 + 200) = uStack_120;
  *(undefined8 *)(param_2 + 0xd0) = uStack_128;
  *(undefined8 *)(param_2 + 0xd8) = uStack_130;
  *(undefined8 *)(param_2 + 0xe0) = uStack_138;
  *(undefined8 *)(param_2 + 0xe8) = uStack_140;
  *(undefined8 *)(param_2 + 0xf0) = uStack_148;
  puVar11 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar14 = uStack_78;
  func_0x000107c61174();
  uVar15 = uStack_80;
  func_0x000107c61174();
  uVar16 = uStack_88;
  func_0x000107c61174();
  uVar2 = uStack_90;
  func_0x000107c61174();
  uVar3 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_a8;
  func_0x000107c61174();
  uVar6 = uStack_b0;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar17 = uStack_d8;
  func_0x000107c61174();
  uVar18 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar11 = PTR_PTR_1126a99d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd000000000000013;
  uVar13 = uVar32;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar32);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa20);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar13 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar32);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar13 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar27);
  func_0x000107c61174();
  uVar13 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f01ad90);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar28);
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar32);
  uVar13 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar13);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar31);
  func_0x000107c61174(uVar32);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar13);
  lVar33 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar32);
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01ad50);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(uVar32);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar33 != 0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    *(long *)(param_2 + 0xf8) = lVar33;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100433d14);
  (*pcVar1)();
}



/* Entry: 100433d14; end: 100433d6f;  */

void FUN_100433d14(void)

{
  long unaff_x20;
  
  FUN_100432c08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 100433d70; end: 100433d77;  */

void FUN_100433d70(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100433d78; end: 100433dcb;  */

void FUN_100433d78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100433dcc; end: 100433ddb;  */

void FUN_100433dcc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002b9e1c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar9 = PTR_PTR_1126a99e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00aea0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar3);
  uVar11 = 0x7365636976726573;
  func_0x000107c5fadc(0x7365636976726573,0xef7265736f707845);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(*(undefined8 *)(lVar2 + 0x10));
  lVar12 = *(long *)(lVar2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(lVar2 + 0x48) = lVar12;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100434220);
  (*pcVar1)();
}



/* Entry: 100433ddc; end: 10043421f;  */

void FUN_100433ddc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002b9e1c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar8 = PTR_PTR_1126a99e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00aea0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar2);
  uVar10 = 0x7365636976726573;
  func_0x000107c5fadc(0x7365636976726573,0xef7265736f707845);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x48) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100434220);
  (*pcVar1)();
}



/* Entry: 100434220; end: 100434227;  */

void FUN_100434220(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100434228; end: 10043427b;  */

void FUN_100434228(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043427c; end: 10043428b;  */

void FUN_10043427c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100234a90();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8170;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4620);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10043428c; end: 1004345c3;  */

void FUN_10043428c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100234a90();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8170;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4620);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1004345c4; end: 1004345cb;  */

void FUN_1004345c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004345cc; end: 10043461f;  */

void FUN_1004345cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100434620; end: 100434733; -[SCFetchFriendsResponseServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100434620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272621c);
  *(undefined **)(param_1 + _DAT_11272621c) = puVar2;
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126bb6e8;
  func_0x000107c610f4(PTR_PTR_1126bb6e8);
  func_0x000107c4961c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100434734; end: 1004347d7; -[SCFetchFriendsResponseServices initWithfriendsResponseService:friendsResponseResultObservable:] */

undefined1 *
FUN_100434734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdb78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004347d8; end: 10043481b;  */

void FUN_1004347d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043481c; end: 100434933; -[SCStoriesSnapchatterServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043481c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272daec);
  }
  func_0x000107c61174(uVar3);
  puVar2 = PTR_PTR_1126c14c0;
  func_0x000107c610f4(PTR_PTR_1126c14c0);
  func_0x000107c48824();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100434934; end: 10043498b; -[_TtC28SCStoriesSnapchatterServices28SCStoriesSnapchatterServices initWithSnapchatterFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100434934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff1c20) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10043498c; end: 1004349d7;  */

void FUN_10043498c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004349d8; end: 1004349df;  */

void FUN_1004349d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004349e0; end: 100434a33;  */

void FUN_1004349e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100434a34; end: 10043510b;  */

void FUN_100434a34(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_1002b1bc4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  FUN_1000285a8(0x112e33b10,&UNK_10da1ceb8);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar13 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10025a71c();
  puVar10 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar10;
  puVar10 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar10;
  puVar11 = PTR_PTR_1126a9688;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015860);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015880);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0158a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(uVar15);
  uVar13 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0158d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar14 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uStack_b8);
    *(long *)(param_2 + 0x68) = lVar14;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10043510c);
  (*pcVar1)();
}



/* Entry: 10043510c; end: 10043513f;  */

void FUN_10043510c(void)

{
  long unaff_x20;
  
  FUN_100434a34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100435140; end: 100435147;  */

void FUN_100435140(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100435148; end: 10043519b;  */

void FUN_100435148(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043519c; end: 1004351a3;  */

void FUN_10043519c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004351a4; end: 1004351f7;  */

void FUN_1004351a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004351f8; end: 100435207;  */

void FUN_1004351f8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002179d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1004353b0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100435430();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x000100435478();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100435208; end: 1004353af;  */

void FUN_100435208(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002179d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1004353b0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100435430();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x000100435478();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004353b0; end: 10043542f;  */

void FUN_1004353b0(undefined8 param_1)

{
  if (lRam0000000112df1078 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66ace0);
  return;
}



/* Entry: 100435430; end: 10043557f;  */

void FUN_100435430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 100435580; end: 100435587; -[SCSystemContentDeliveryServices contentObjectResolver] */

undefined8 FUN_100435580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100435588; end: 10043558f; -[SCContentManagerPlaybackServices contentFetcher] */

undefined8 FUN_100435588(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100435590; end: 1004355af;  */

void FUN_100435590(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2170);
  return;
}



/* Entry: 1004355b0; end: 100435623; -[SCPlaybackABRMediaServices initWithMediaResourceLoader:] */

undefined1 * FUN_1004355b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706cc0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100435624; end: 100435667;  */

void FUN_100435624(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100435668; end: 10043566f;  */

void FUN_100435668(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100435670; end: 1004356c3;  */

void FUN_100435670(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004356c4; end: 1004356cf;  */

void FUN_1004356c4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10029279c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10043583c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100435cd4();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100435d38();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004356d0; end: 100435837;  */

void FUN_1004356d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10029279c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10043583c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_100435cd4();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_100435d38();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 100435838; end: 10043583b; -[SCFideliusLogger addToFileEvent:parameters:] */

void FUN_100435838(void)

{
  return;
}



/* Entry: 10043583c; end: 100435873;  */

void FUN_10043583c(undefined8 param_1)

{
  if (lRam000000011349f230 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6949c0);
  return;
}



/* Entry: 100435874; end: 10043589f; +[SCGrapheneFideliusMetric deviceGraphRead] */

void FUN_100435874(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004358a0; end: 100435927; -[SCGrapheneRegistry fideliusGraphene] */

void FUN_1004358a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100435928;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c17a0 != -1) {
    FUN_10002a2fc(0x1136c17a0,&puStack_48);
  }
  uVar1 = uRam00000001136c1798;
  func_0x000107c61174(uRam00000001136c1798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100435928; end: 100435c83;  */

void FUN_100435928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e11318;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e11338;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e11358;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e11378;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110e11398;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110e113b8;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e113d8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110e113f8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110e11418;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110e11438;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e11458;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e11478;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e11498;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e114b8;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e114d8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e114f8;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e11518;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e11538;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e11558;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e11578;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e11598;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e115b8;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e115d8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e115f8;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e11618;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110e11638;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110e11658;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e11678;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e11698;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110e116b8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e116d8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e116f8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e11718;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e11738;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e11758;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e11778;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e11798;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e117b8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e117d8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e117f8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e11818;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e11838;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e11858;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e11878;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e11898;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e118b8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e118d8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e118f8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e11918;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e11938;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e11958;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e11978;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e11998;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e119b8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e119d8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e119f8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e11a18;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e11a38;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e11a58;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e11a78;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e11a98;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e11ab8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e11ad8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e11af8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e11b18;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e11b38;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e11b58;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_250,0x43);
  func_0x000107c61180();
  func_0x000107c4fc78();
  func_0x000107c61180();
  uVar1 = uRam00000001136c1798;
  uRam00000001136c1798 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61524();
  return;
}



/* Entry: 100435c84; end: 100435cd3;  */

void FUN_100435c84(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_28 = &UNK_10da1d310;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 100435cd4; end: 100435d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100435cd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113091b70);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100435d38; end: 100435dcb;  */

undefined * FUN_100435d38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1000285a8(0x112e33d40,&UNK_10da1d2a0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  puVar1 = &UNK_101e6afe4;
  FUN_1000bdd8c(&UNK_101e6afe4);
  puVar2 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  puVar1 = PTR_PTR_1126a9690;
  func_0x000107c610f8(PTR_PTR_1126a9690);
  func_0x000107c481bc();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100435dcc; end: 100435e13; +[SCFideliusUtils randomEventSampling:] */

bool FUN_100435dcc(double param_1,ulong param_2)

{
  func_0x000107c60ec8();
  return (double)(param_2 & 0xffffffff) <= (param_1 / 100.0) * 4294967295.0;
}



/* Entry: 100435e14; end: 100435eb7; -[SCPlaybackWebProxyServices initWithProxyController:proxiedUrlProvider:] */

undefined1 *
FUN_100435e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f77e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100435eb8; end: 100435ef3;  */

void FUN_100435eb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100435ef4; end: 100435ef7;  */

void FUN_100435ef4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100435ef8; end: 100435f2b;  */

void FUN_100435ef8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100435f2c; end: 100435f43;  */

void FUN_100435f2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100435f44; end: 100435f7f;  */

void FUN_100435f44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100435f80; end: 100435fff;  */

/* WARNING: Possible PIC construction at 0x000100435fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100435fe4) */

void FUN_100435f80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4197c();
  func_0x000107c61180();
  func_0x000107c4448c();
  func_0x000107c61180();
  func_0x000107c4d9e0();
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100436000; end: 100436137; -[SCAccessOrderedDictionary objectForKey:updateOrder:] */

void FUN_100436000(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if (param_4 != 0) {
    lVar1 = param_1;
    func_0x000107c4a910();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c45340();
    func_0x000107c61170(lVar1);
    if ((lVar2 != 0) && (lVar2 != 0x7fffffffffffffff)) {
      lVar1 = param_1;
      func_0x000107c4a910(param_1);
      func_0x000107c61180();
      func_0x000107c4ff80();
      func_0x000107c61170(lVar1);
      lVar1 = param_1;
      func_0x000107c4a910(param_1);
      func_0x000107c61180();
      func_0x000107c49740();
      func_0x000107c61170(lVar1);
      func_0x000107c4dc84(param_1);
    }
  }
  lVar1 = param_1;
  func_0x000107c41984(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100436138; end: 10043613f;  */

void FUN_100436138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100436140; end: 100436147; -[SCFideliusUserDevice temporary] */

undefined1 FUN_100436140(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100436148; end: 100436213; -[SCFideliusServiceCoordinator betaReady:] */

/* WARNING: Possible PIC construction at 0x0001004361e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004361f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004361e8) */
/* WARNING: Removing unreachable block (ram,0x0001004361f8) */

void FUN_100436148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c3e890(param_3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c0640;
  func_0x000107c610f4(PTR_PTR_1126c0640);
  lVar2 = param_1 + 0x10;
  func_0x000107c61148(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5b4dc(uVar3);
  func_0x000107c61180();
  func_0x000107c463cc(puVar1,param_2,lVar2,uVar3,param_3,0,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  func_0x000107c5946c(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100436214; end: 10043623b; -[SCFideliusUserIdentity beta] */

void FUN_100436214(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10043623c; end: 100436243; -[SCSnapchatterServices snapchattersSynchronousDataFetcher] */

undefined8 FUN_10043623c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100436244; end: 100436403; -[SCFideliusSnapService initWithDataSource:snapchatterDataFetcher:beta:dbManager:logger:fideliusFriendMetadataCoordinator:circumstanceEngine:] */

undefined1 *
FUN_100436244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126eafb0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)((long)puVar1 + 8);
    func_0x000107c61148();
    puVar4 = puVar3;
    func_0x000107c5da60();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar6 = PTR_PTR_1126bd038;
    func_0x000107c5b3dc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100436404; end: 100436537; -[SCFideliusManager userSession] */

void FUN_100436404(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = &UNK_10f310790;
  FUN_1000ba800(&UNK_10f310790);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_105941680;
  puStack_40 = &UNK_105941690;
  uStack_38 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x000107c49be8();
  puVar1 = puStack_58;
  if (iVar2 == 0) {
    func_0x000107c4e530(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar5);
    uVar4 = puVar1[5];
    puVar1[5] = uVar5;
    func_0x000107c61170(uVar4);
  }
  uVar4 = puStack_58[5];
  func_0x000107c61174(uVar4);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x0001000e2a84(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100436538; end: 1004365a7; +[SCFideliusPerformerInitializer snapServicePerformer] */

void FUN_100436538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310cce);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x19,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004365a8; end: 1004365f7; -[SCMessagingExperimentServiceImpl minStreakCountToEnableRestore] */

long FUN_1004365a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1004365f8; end: 1004368db; -[SCCachedConfigDataStore findConfigResultsWithConfigKeySync:] */

void FUN_1004365f8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61174(param_3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1004368dc;
  pcStack_80 = FUN_10043697c;
  uStack_78 = 0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1054e21d0;
  puStack_b0 = &UNK_110847450;
  func_0x000107c61174(param_3);
  puStack_a8 = param_3;
  func_0x000107c3e818(puVar1);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_1054e2208;
  puStack_d8 = &UNK_110847450;
  func_0x000107c61174(param_3);
  puStack_d0 = param_3;
  func_0x000107c3e818(puVar1);
  func_0x000107c61170(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_128 = puVar2;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1004368ec;
  puStack_110 = &UNK_11084fa08;
  puStack_f8 = &uStack_a0;
  lStack_108 = param_1;
  func_0x000107c61174(param_3);
  puStack_100 = param_3;
  FUN_10006eaa4(uVar4,&puStack_128);
  if (puStack_98[5] == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3f4ec();
    func_0x000107c61170(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000107c43548();
    func_0x000107c61180();
    uVar3 = puStack_98[5];
    puStack_98[5] = uVar4;
    func_0x000107c61170(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_160 = puVar2;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1005581e0;
    puStack_148 = &UNK_11084fa08;
    puStack_130 = &uStack_a0;
    lStack_140 = param_1;
    func_0x000107c61174(param_3);
    puStack_138 = param_3;
    FUN_10006eaa4(uVar4,&puStack_160);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar2);
    puVar2 = puStack_138;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3f4ec();
  }
  func_0x000107c61170(puVar2);
  uVar4 = puStack_98[5];
  func_0x000107c61174(uVar4);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(puStack_a8);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1004368dc; end: 1004368eb;  */

void FUN_1004368dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1004368ec; end: 10043692f;  */

void FUN_1004368ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c4d9c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100436930; end: 10043697b; -[SCTracer cancelSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100436930(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3f4ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10043697c; end: 100436983;  */

void FUN_10043697c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100436984; end: 100436b03; -[SCPlaybackMediaResolutionServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100436984(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1058f86fc;
  puStack_68 = &UNK_1108beb08;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272bf4c);
  *(undefined **)(param_1 + _DAT_11272bf4c) = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272bf50);
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c42c14(uVar2);
  puVar1 = PTR_PTR_1126bff00;
  func_0x000107c610f4(PTR_PTR_1126bff00);
  func_0x000107c476ac();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272bf54));
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100436b04; end: 100436b0b; -[SCCachedConfigDataStore preloadedNamespaceKey] */

undefined4 FUN_100436b04(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 100436b0c; end: 100436b13; -[SCFideliusServiceCoordinator setSnapService:] */

void FUN_100436b0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100436b14; end: 100436d03; -[SCFideliusLogger logArchivedIdentityV2Load:source:] */

void FUN_100436b14(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dce878;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = param_4;
  puStack_58 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  func_0x000107c61180();
  func_0x000107c3d8e8(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f998,puVar3);
  func_0x000107c61170(puVar3);
  if (param_4 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
  }
  if (param_3 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x000107c3e104(PTR_PTR_1126c04d8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5e508(puVar2,param_2,&PTR____CFConstantStringClassReference_110dce878,param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4338c();
  func_0x000107c61180();
  func_0x000107c45318();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100436d04; end: 100436d2f; +[SCGrapheneFideliusMetric archivedIdentityLoadV2] */

void FUN_100436d04(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100436d30; end: 100436ddb; -[SCFideliusManager _onArchiveLoaded:] */

void FUN_100436d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1000ba800(&UNK_10f310240);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c3b7c4(param_1,param_2,param_3);
  }
  else {
    lVar2 = param_1;
    func_0x000107c433a8();
    if (lVar2 == 6) {
      func_0x000107c3c3f0(param_1,param_2,param_3);
    }
    else {
      func_0x000107c3bd64(param_1,param_2,param_3);
    }
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100436ddc; end: 100436e3b; -[SCMessagingExperimentServiceImpl maxPaginatedSyncFeedResults] */

int FUN_100436ddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  iVar3 = (int)uVar2;
  if (iVar3 < 0x15) {
    iVar3 = 0x14;
  }
  return iVar3;
}



/* Entry: 100436e3c; end: 100436f03; -[SCFideliusManager _loadFromDiskStage2:] */

/* WARNING: Possible PIC construction at 0x000100436eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100436eb0) */

void FUN_100436e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_1000ba800(&UNK_10f310263);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c4a808();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3b7c4(param_1,param_2,param_3);
    func_0x000107c61170(0);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x000107c44c4c(puVar2);
    func_0x000107c61180();
    func_0x000107c3bd4c(param_1,param_2,lVar1,puVar2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100436f04; end: 100436f0b; -[SCFideliusUserIdentity iwek] */

undefined8 FUN_100436f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100436f0c; end: 100436feb; -[SCFideliusManager _loadExistingIdentity:hashedBeta:source:] */

void FUN_100436f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f310464;
  FUN_1000ba800(&UNK_10f310464);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10072ed30;
  puStack_58 = &UNK_1108c0ea0;
  uStack_50 = param_1;
  uStack_48 = param_5;
  func_0x000107c3bd98(param_1,param_2,param_3,param_4,param_5,&puStack_70);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100436fec; end: 10043741b; -[SCFideliusManager _loadLocalIdentityWithIwek:hashedBeta:source:callback:] */

void FUN_100436fec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puVar1 = &UNK_10f310555;
  FUN_1000ba800();
  puVar2 = PTR_PTR_1126bd088;
  func_0x000107c4d3e8();
  func_0x000107c61180();
  if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4a808(uVar4);
    func_0x000107c61180();
    func_0x000107c5dd14();
    puVar8 = PTR_PTR_1126c0480;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4e100(uVar5);
    func_0x000107c61180();
    func_0x000107c5cb50();
    func_0x000107c61180();
    func_0x000107c4c0a8();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c41900();
    func_0x000107c61180();
    func_0x000107c4bbe4(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    (**(code **)(param_6 + 0x10))(param_6,1,&PTR____CFConstantStringClassReference_110e10898);
    goto LAB_10043739c;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  if (param_3 == 0) {
    func_0x000107c5c734(uVar7);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c41900();
    func_0x000107c61180();
    func_0x000107c4bbe4(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    (**(code **)(param_6 + 0x10))(param_6,0,&PTR____CFConstantStringClassReference_110e108f8);
    goto LAB_10043739c;
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4bb3c();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5d984(uVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126c0388;
  func_0x000107c45924(PTR_PTR_1126c0388);
  func_0x000107c61180();
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_100437228:
    uVar3 = 0;
  }
  else {
    func_0x000107c44c4c();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c49d0c();
    func_0x000107c61170(lVar9);
    if ((int)lVar10 == 0) goto LAB_100437228;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c61174(uVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c4b744(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
LAB_10043739c:
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10043741c; end: 1004374df; -[SCFideliusLogger logEventStartTime:uniqueId:] */

/* WARNING: Possible PIC construction at 0x000100437478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004374bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010043747c) */
/* WARNING: Removing unreachable block (ram,0x0001004374c0) */
/* WARNING: Removing unreachable block (ram,0x000100437480) */

void FUN_10043741c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e0fa58);
  func_0x000107c61180();
  func_0x000107c4b940(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004374e0; end: 100437523;  */

undefined * FUN_1004374e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c42a08();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100437524; end: 100437547;  */

long FUN_100437524(double param_1)

{
  func_0x000107c5c9e4();
  return (long)(param_1 * 1000.0);
}



/* Entry: 100437548; end: 1004375bb; -[SCPlaybackMediaResolutionService initWithMediaResolver:] */

undefined1 * FUN_100437548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706c70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004375bc; end: 1004375cf; -[SCConfigMetricGraphene2 cofServerReturnWrongValueType:configRuleId:] */

void FUN_1004375bc(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_78,pcVar2);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar2 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110879a98,pcVar2,1);
    pcStack_80 = acStack_98;
    FUN_10007e5dc(&pcStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  func_0x000107c61170(param_4);
  pcVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(pcVar3);
  func_0x000107c61174(pcVar2);
  if (pcVar2 == (char *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    func_0x000107c45920();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45920();
    }
  }
  func_0x000107c61170(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1004375d0; end: 1004377ff;  */

void FUN_1004375d0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110879a98,pcVar1,param_4);
    pcStack_80 = acStack_98;
    FUN_10007e5dc(&pcStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(pcVar2);
  func_0x000107c61174(pcVar1);
  if (pcVar1 == (char *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    func_0x000107c45920();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45920();
    }
  }
  func_0x000107c61170(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100437800; end: 10043787b; +[SCFideliusUtils initWithBase64EncodedString:source:] */

void FUN_100437800(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    func_0x000107c45920();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45920();
    }
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043787c; end: 1004378e7;  */

void FUN_10043787c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


