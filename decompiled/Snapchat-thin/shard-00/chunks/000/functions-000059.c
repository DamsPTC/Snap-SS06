/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001b129c; end: 1001b12bb;  */

void FUN_1001b129c(void)

{
  func_0x000107c61168(&PTR_PTR_112dca7f0);
  return;
}



/* Entry: 1001b12bc; end: 1001b12d7;  */

void FUN_1001b12bc(undefined8 param_1)

{
  FUN_1000285a8(0x112dd56a8,&UNK_10d997ae0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10099d18c,param_1);
  return;
}



/* Entry: 1001b12d8; end: 1001b1327;  */

void FUN_1001b12d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b1328; end: 1001b1347;  */

void FUN_1001b1328(void)

{
  func_0x000107c61168(&PTR_PTR_112dd5720);
  return;
}



/* Entry: 1001b1348; end: 1001b1e47;  */

void FUN_1001b1348(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010017b1b4();
  func_0x0001001886dc();
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x00010017b250(unaff_x20 + 0x30,unaff_x19 + 0x30);
  return;
}



/* Entry: 1001b1e48; end: 1001b1e53;  */

bool FUN_1001b1e48(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1001b1e54; end: 1001b1ed3;  */

void FUN_1001b1e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddbbc0,&UNK_10d9a05e0);
  puVar1 = &UNK_11041bc58;
  func_0x000107c613fc(&UNK_11041bc58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003e89c4,puVar1);
  return;
}



/* Entry: 1001b1ed4; end: 1001b1ef3;  */

void FUN_1001b1ed4(void)

{
  func_0x000107c61168(&PTR_PTR_112ddbc38);
  return;
}



/* Entry: 1001b1ef4; end: 1001b1f97; -[SCMappedRoutingDefinition initWithCdnHostMap:withReachabilityCdnHostMap:] */

undefined1 *
FUN_1001b1ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112706070;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1001b1f98; end: 1001b1fb3;  */

void FUN_1001b1f98(undefined8 param_1)

{
  FUN_1000285a8(0x112ddbbc8,&UNK_10d9a05e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003e8968,param_1);
  return;
}



/* Entry: 1001b1fb4; end: 1001b2003;  */

void FUN_1001b1fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b2004; end: 1001b2077; -[SCMappedCdnClientConfig init:] */

undefined1 * FUN_1001b2004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706068;
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



/* Entry: 1001b2078; end: 1001b224f;  */

void FUN_1001b2078(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 1001b2250; end: 1001b2283;  */

void FUN_1001b2250(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3ccf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001b2284; end: 1001b22af;  */

void FUN_1001b2284(void)

{
  long unaff_x29;
  long lStack0000000000000000;
  
  lStack0000000000000000 = unaff_x29 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1001b22b0; end: 1001b260f; -[SCRequestRouting _updateToLatestRoutingRules:] */

void FUN_1001b22b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_220;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4f558(param_3,param_2,&PTR____CFConstantStringClassReference_110f60818,0,0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126dffc8;
  func_0x000107c610f4();
  uVar13 = uVar1;
  func_0x000107c5dc0c(uVar1);
  func_0x000107c61180();
  uStack_178 = 0;
  func_0x000107c4636c(puVar2,param_2,uVar13,&uStack_178);
  uVar15 = uStack_178;
  func_0x000107c61174(uStack_178);
  func_0x000107c61170(uVar13);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    puVar12 = puVar2;
    func_0x000107c400c4();
    func_0x000107c61180();
    puVar4 = puVar12;
    func_0x000107c5086c();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    puStack_220 = puVar4;
    func_0x000107c4080c(puVar4,param_2,&uStack_1c0,auStack_f0,0x10);
    if (puStack_220 != (undefined *)0x0) {
      lVar11 = *plStack_1b0;
      do {
        puVar12 = (undefined *)0x0;
        uVar13 = uVar15;
        do {
          if (*plStack_1b0 != lVar11) {
            func_0x000107c61128(puVar4);
          }
          uVar5 = param_3;
          func_0x000107c4f558(param_3,param_2,*(undefined8 *)(lStack_1b8 + (long)puVar12 * 8),0,0);
          func_0x000107c61180();
          puVar6 = PTR_PTR_1126dffd0;
          func_0x000107c610f4();
          uVar7 = uVar5;
          func_0x000107c5dc0c(uVar5);
          func_0x000107c61180();
          uStack_1c8 = uVar13;
          func_0x000107c4636c(puVar6,param_2,uVar7,&uStack_1c8);
          uVar15 = uStack_1c8;
          func_0x000107c61174(uStack_1c8);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar7);
          if (puVar6 != (undefined *)0x0) {
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            lStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            plStack_200 = (long *)0x0;
            puVar8 = puVar6;
            func_0x000107c428c0();
            func_0x000107c61180();
            puVar9 = puVar8;
            func_0x000107c4080c();
            if (puVar9 != (undefined *)0x0) {
              lVar16 = *plStack_200;
              do {
                puVar14 = (undefined *)0x0;
                do {
                  if (*plStack_200 != lVar16) {
                    func_0x000107c61128(puVar8);
                  }
                  uVar13 = *(undefined8 *)(lStack_208 + (long)puVar14 * 8);
                  puVar10 = puVar6;
                  func_0x000107c44f1c(puVar6);
                  func_0x000107c61180();
                  func_0x000107c56bcc(puVar3,param_2,puVar10,uVar13);
                  func_0x000107c61170(puVar10);
                  puVar14 = puVar14 + 1;
                } while (puVar9 != puVar14);
                puVar9 = puVar8;
                func_0x000107c4080c(puVar8,param_2,&uStack_210,auStack_170,0x10);
              } while (puVar9 != (undefined *)0x0);
            }
            func_0x000107c61170(puVar8);
          }
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar5);
          puVar12 = puVar12 + 1;
          uVar13 = uVar15;
        } while (puVar12 != puStack_220);
        puStack_220 = puVar4;
        func_0x000107c4080c(puVar4,param_2,&uStack_1c0,auStack_f0,0x10);
      } while (puStack_220 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar4);
    uVar13 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    func_0x000107c61170(uVar13);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1001b2610; end: 1001b261f;  */

void FUN_1001b2610(void)

{
  return;
}



/* Entry: 1001b2620; end: 1001b2713; -[KSCrashReportFilterPipeline initWithFiltersArray:] */

ulong FUN_1001b2620(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  ulong unaff_x22;
  long unaff_x24;
  ulong uVar3;
  
  uVar2 = param_3;
  FUN_1001b2610();
  FUN_1001b2714();
  func_0x0001001b271c(PTR_PTR_1126f4cd0);
  if (param_1 != 0) {
    uVar1 = param_1;
    FUN_1001b0fc0();
    func_0x000107c3e15c();
    func_0x000107c61180();
    func_0x0001001b2730();
    func_0x0001001b2738();
    if (uVar1 != 0) {
      FUN_1001f7894();
      do {
        uVar3 = 0;
        do {
          if (lRam0000000000000000 != unaff_x24) {
            uVar1 = param_3;
            func_0x000107c61128();
          }
          func_0x0001001f78a8();
          func_0x0001001f78b8();
          if ((uVar1 & 1) == 0) {
            func_0x0001001f78c4();
          }
          else {
            func_0x000106af46cc();
          }
          uVar3 = uVar3 + 1;
          in_ZR = uVar3 == unaff_x22;
        } while (uVar3 < unaff_x22);
        func_0x0001001b2738();
        unaff_x22 = uVar1;
      } while (uVar1 != 0);
    }
    func_0x0001001b274c();
    func_0x0001001b2754();
    func_0x000107c549f4();
    func_0x0001001b2798();
  }
  func_0x0001001b274c();
  func_0x0001001b27a0(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 1001b2714; end: 1001b276f;  */

void FUN_1001b2714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1001b2770; end: 1001b278f; -[KSCrashReportFilterPipeline setFilters:] */

void FUN_1001b2770(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001001b2760();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001b2790; end: 1001b27eb;  */

void FUN_1001b2790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1001b27ec; end: 1001b284b; -[KSCrashInstallation setPrependedFilters:] */

void FUN_1001b27ec(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001b284c; end: 1001b286b; -[KSCrashInstallation setDeleteBehavior:] */

void FUN_1001b284c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1001b286c; end: 1001b5faf;  */

undefined8 FUN_1001b286c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 in_stack_000005c0;
  
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000005c0;
  return uVar1;
}



/* Entry: 1001b5fb0; end: 1001b5fc3;  */

void FUN_1001b5fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1001b5fc4; end: 1001b6047; -[KSCrashReportSinkSnapAir initWithCrashReportUploadManager:crashMetricLogger:] */

undefined1 * FUN_1001b5fc4(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_1001b5fb0();
  FUN_1001b6048();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001001b6050();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    func_0x000107c61170(uVar2);
    FUN_1001b6048();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    func_0x000107c61170(uVar2);
  }
  func_0x0001001b6058();
  func_0x000107c61170();
  return puVar1;
}



/* Entry: 1001b6048; end: 1001b605f;  */

void FUN_1001b6048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1001b6060; end: 1001b635b;  */

void FUN_1001b6060(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0x1c0;
  }
  else {
    if (param_2 != 1) {
      plVar1 = (long *)0x0;
      goto LAB_1001b6084;
    }
    lVar2 = 0x1c8;
  }
  plVar1 = *(long **)(param_1 + lVar2);
LAB_1001b6084:
                    /* WARNING: Could not recover jumptable at 0x0001001b6090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
  return;
}



/* Entry: 1001b635c; end: 1001b6413;  */

undefined4 FUN_1001b635c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  lRam00000001137f5098 = param_1;
  if (*(int *)(param_1 + 8) == 1) {
    FUN_1009db1c0(param_1,0);
  }
  puStack_50 = (undefined1 *)0x0;
  lStack_48 = 0;
  uStack_40 = 0;
  func_0x000100157e8c(&puStack_38,uStack_30);
  ppuVar2 = (undefined1 **)puStack_50;
  if (-1 < (long)uStack_40._7_1_) {
    ppuVar2 = &puStack_50;
  }
  lVar1 = lStack_48;
  if (-1 < uStack_40) {
    lVar1 = (long)uStack_40._7_1_;
  }
  FUN_100136a94(ppuVar2,lVar1);
  if (-1 < uStack_40) {
    if (((ulong)ppuVar2 & 0x100000000) != 0) {
      param_3 = (int)ppuVar2;
    }
    return param_3;
  }
  func_0x000107c60e14(puStack_50);
  if (((ulong)ppuVar2 & 0x100000000) != 0) {
    param_3 = (int)ppuVar2;
  }
  return param_3;
}



/* Entry: 1001b6414; end: 1001b6453; -[KSCrashInstallation setOnCrash:] */

void FUN_1001b6414(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c61174();
  FUN_1001b6454();
  func_0x0001001b645c();
  *puVar1 = param_3;
  func_0x0001001b6514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001b6454; end: 1001b6463;  */

void FUN_1001b6454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_sync_enter_11034d340)();
  return;
}



/* Entry: 1001b6464; end: 1001b64cb; +[ConfigList descriptor] */

void FUN_1001b6464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c72f80,
                        &PTR____CFConstantStringClassReference_110f61058,
                        &PTR_s_snapchat_cdp_cof_11336f150,&PTR_DAT_11336f168,1,0x10,0x1c);
    puRam00000001137f4780 = puVar1;
  }
  return;
}



/* Entry: 1001b64cc; end: 1001b6503; -[KSCrashInstallation crashHandlerData] */

undefined8 FUN_1001b64cc(undefined8 param_1)

{
  func_0x000107c408cc();
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c4d2d0();
  func_0x0001001b2854();
  return param_1;
}



/* Entry: 1001b6504; end: 1001b651b; -[KSCrashInstallation crashHandlerDataBacking] */

undefined8 FUN_1001b6504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1001b651c; end: 1001b655b;  */

void FUN_1001b651c(void)

{
  FUN_1000285a8(0x112dbfe60,&UNK_10d97be90);
  FUN_1000823a8(FUN_100666200,0);
  return;
}



/* Entry: 1001b655c; end: 1001b65bb; -[KSCrashInstallation install] */

/* WARNING: Possible PIC construction at 0x0001001b658c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001b6590) */
/* WARNING: Removing unreachable block (ram,0x0001001aece8) */

void FUN_1001b655c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d05a8;
  func_0x000107c5a9f0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1001b65bc; end: 1001b65c7; -[KSCrashInstallation handler] */

void FUN_1001b65bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1001b65c8; end: 1001b663f; -[KSCrashInstallation installWithHandler:] */

void FUN_1001b65c8(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  FUN_1001aeb4c();
  FUN_1001b6640();
  FUN_1001b6454();
  func_0x0001001b6648();
  uRam00000001136c4da8 = param_1;
  func_0x000107c4db90();
  uRam00000001136c4db0 = unaff_x19;
  func_0x000107c56cd4();
  func_0x000107c53fdc();
  func_0x000107c497b4();
  func_0x0001001b6514();
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1001b6640; end: 1001b664f;  */

void FUN_1001b6640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1001b6650; end: 1001b6657; -[KSCrash onCrash] */

undefined8 FUN_1001b6650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1001b6658; end: 1001b6667; -[KSCrash setOnCrash:] */

void FUN_1001b6658(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  uRam000000011381b450 = param_3;
  return;
}



/* Entry: 1001b6668; end: 1001b66e7;  */

void FUN_1001b6668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db08c8,&UNK_10d95a700);
  puVar1 = &UNK_1103d9770;
  func_0x000107c613fc(&UNK_1103d9770,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10068a234,puVar1);
  return;
}



/* Entry: 1001b66e8; end: 1001b67ff; -[KSCrash install] */

bool FUN_1001b66e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c3ee0c();
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ac4c();
  lVar2 = param_1;
  func_0x000107c3e6a0(param_1);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ac4c();
  FUN_1001b7854(lVar1,lVar2);
  *(int *)(param_1 + 0x14) = (int)lVar1;
  func_0x00010016a544();
  func_0x00010016a534();
  func_0x000107c4d10c();
  if ((int)param_1 != 0) {
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    FUN_1001f3be4(PTR__UIApplicationWillResignActiveNotification_110345ae0);
    FUN_1001f3be4(PTR__UIApplicationDidEnterBackgroundNotification_110345a10);
    FUN_1001f3be4(&PTR_PTR_1130ca860);
    FUN_1001f3be4(PTR__UIApplicationWillTerminateNotification_110345ae8);
    func_0x00010017d7d8();
  }
  return (int)param_1 != 0;
}



/* Entry: 1001b6800; end: 1001b6807; -[KSCrash bundleName] */

undefined8 FUN_1001b6800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1001b6808; end: 1001b7393;  */

void FUN_1001b6808(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      func_0x00010b3be9a0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1001b7394; end: 1001b767f;  */

byte * FUN_1001b7394(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
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
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = param_1[2] + 1;
  plVar12 = (long *)*param_2;
  if (plVar12 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    iVar6 = (int)plVar12 + 0x20;
    func_0x000107c61264();
    if (iVar6 != 0) {
      func_0x000107c2cfbc(plVar12 + 4);
    }
  }
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  lVar11 = param_1[6];
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_70 = &uStack_c8;
  puStack_58 = &uStack_78;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xaaaaaaaaaaaaaa00;
  uStack_78 = 0xaaaaaaaaaaaaaa01;
  uStack_158 = 0xaaaaaaaaaaaaaa00;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  iVar6 = (int)lVar11 + 0x28;
  lStack_118 = lVar11;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_50 = puStack_70;
  func_0x000107c61264();
  if (iVar6 == 0) {
    cVar2 = *(char *)((long)param_1 + 0x42);
  }
  else {
    func_0x000107c2cfbc(lVar11 + 0x28);
    cVar2 = *(char *)((long)param_1 + 0x42);
  }
  if (cVar2 == '\x01') {
    lVar8 = param_1[6];
    uVar9 = *(long *)(lVar8 + 0x138) - 1;
    *(ulong *)(lVar8 + 0x138) = uVar9;
    if ((*(long *)(lVar8 + 0x70) == *(long *)(lVar8 + 0x78)) || (*(ulong *)(lVar8 + 0x148) < uVar9))
    {
      *(undefined2 *)(lVar8 + 0xa8) = 0;
      bVar3 = *(byte *)(param_1 + 4);
    }
    else {
      *(undefined2 *)(lVar8 + 0xa8) = *(undefined2 *)(*(long *)(lVar8 + 0x70) + 0x10);
      bVar3 = *(byte *)(param_1 + 4);
    }
    if ((bVar3 & 1) == 0) goto LAB_1001b7660;
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      lVar8 = param_1[6];
      *(long *)(lVar8 + 0x140) = *(long *)(lVar8 + 0x140) + -1;
      if ((*(long *)(lVar8 + 0x70) == *(long *)(lVar8 + 0x78)) ||
         (*(ulong *)(lVar8 + 0x148) < *(ulong *)(lVar8 + 0x138))) {
        *(undefined2 *)(lVar8 + 0xa8) = 0;
      }
      else {
        *(undefined2 *)(lVar8 + 0xa8) = *(undefined2 *)(*(long *)(lVar8 + 0x70) + 0x10);
      }
    }
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined1 *)((long)param_1 + 0x42) = 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
LAB_1001b7660:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1001b7664);
    (*pcVar5)();
  }
  lVar8 = param_1[6];
  cVar2 = *(char *)((long)param_1 + 0x21);
  uVar9 = *(long *)(lVar8 + 0x148) - 1;
  *(ulong *)(lVar8 + 0x148) = uVar9;
  if (cVar2 == '\0') {
    *(long *)(lVar8 + 0x150) = *(long *)(lVar8 + 0x150) + -1;
    lVar10 = *(long *)(lVar8 + 0x70);
    if (lVar10 != *(long *)(lVar8 + 0x78)) goto LAB_1001b7548;
  }
  else {
    lVar10 = *(long *)(lVar8 + 0x70);
    if (lVar10 != *(long *)(lVar8 + 0x78)) {
LAB_1001b7548:
      if (*(ulong *)(lVar8 + 0x138) <= uVar9) {
        *(undefined2 *)(lVar8 + 0xa8) = *(undefined2 *)(lVar10 + 0x10);
        *(undefined1 *)((long)param_1 + 0x22) = 0;
        *(undefined1 *)(param_1 + 4) = 0;
        goto joined_r0x0001001b7560;
      }
    }
  }
  *(undefined2 *)(lVar8 + 0xa8) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
joined_r0x0001001b7560:
  if (plVar12 != (long *)0x0) {
    plStack_170 = plVar12;
    lStack_168 = lVar13;
    plStack_160 = plVar12;
    func_0x000107c2cdd8(param_1[6],&uStack_130,&uStack_158,&plStack_170);
    if (plStack_160 != (long *)0x0) {
      func_0x000107c61268(plStack_160 + 4);
    }
    param_1 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plStack_170 = (long *)0x0;
      if (lStack_168 != 0) {
        func_0x0001001b6dcc(lStack_168,param_1);
      }
      plVar12 = param_1 + 1;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      if (plStack_170 != (long *)0x0) {
        plVar12 = plStack_170 + 1;
        do {
          iVar6 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plStack_170 + 0x20))();
        }
      }
    }
  }
  func_0x000107c61268(lVar11 + 0x28);
  FUN_1001b7680(&uStack_158);
  pbVar7 = (byte *)&uStack_130;
  FUN_10012a76c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    pcStack_178 = FUN_1001b7680;
    plVar12 = *(long **)(pbVar7 + 0x20);
    lStack_190 = lVar11;
    plStack_188 = param_1;
    puStack_180 = &stack0xfffffffffffffff0;
    if (plVar12 != (long *)0x0) {
      if ((*pbVar7 & 1) == 0) {
        func_0x000107c2d060();
        FUN_1000285a8(0x112dc6028,&UNK_10d985e40);
        func_0x000107c6157c(plVar12);
        pbVar7 = &UNK_10174994c;
        FUN_1000823a8(&UNK_10174994c,plVar12);
        return pbVar7;
      }
      lStack_1a8 = *(long *)(pbVar7 + 0x10);
      plStack_1b0 = *(long **)(pbVar7 + 8);
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      lStack_1a0 = *(long *)(pbVar7 + 0x18);
      pbVar7[0x18] = 0;
      pbVar7[0x19] = 0;
      pbVar7[0x1a] = 0;
      pbVar7[0x1b] = 0;
      pbVar7[0x1c] = 0;
      pbVar7[0x1d] = 0;
      pbVar7[0x1e] = 0;
      pbVar7[0x1f] = 0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&plStack_1b0);
      if (lStack_1a0 != 0) {
        func_0x000107c61268(lStack_1a0 + 0x20);
      }
      plVar12 = plStack_1b0;
      if (plStack_1b0 != (long *)0x0) {
        plStack_1b0 = (long *)0x0;
        if (lStack_1a8 != 0) {
          func_0x0001001b6dcc(lStack_1a8,plVar12);
        }
        plVar1 = plVar12 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        if (plStack_1b0 != (long *)0x0) {
          plVar12 = plStack_1b0 + 1;
          do {
            iVar6 = (int)*plVar12 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *(int *)plVar12 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plStack_1b0 + 0x20))();
          }
        }
      }
    }
    if (*pbVar7 == 1) {
      if (*(long *)(pbVar7 + 0x18) != 0) {
        func_0x000107c61268(*(long *)(pbVar7 + 0x18) + 0x20);
      }
      plVar12 = *(long **)(pbVar7 + 8);
      if (plVar12 != (long *)0x0) {
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        if (*(long *)(pbVar7 + 0x10) != 0) {
          func_0x0001001b6dcc(*(long *)(pbVar7 + 0x10),plVar12);
        }
        plVar1 = plVar12 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        plVar12 = *(long **)(pbVar7 + 8);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar12 + 0x20))();
          }
        }
      }
      *pbVar7 = 0;
    }
    return pbVar7;
  }
  return pbVar7;
}



/* Entry: 1001b7680; end: 1001b77f3;  */

byte * FUN_1001b7680(byte *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    if ((*param_1 & 1) == 0) {
      func_0x000107c2d060();
      FUN_1000285a8(0x112dc6028,&UNK_10d985e40);
      func_0x000107c6157c(plVar5);
      pbVar6 = &UNK_10174994c;
      FUN_1000823a8(&UNK_10174994c,plVar5);
      return pbVar6;
    }
    lStack_38 = *(long *)(param_1 + 0x10);
    plStack_40 = *(long **)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    lStack_30 = *(long *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (**(code **)(*plVar5 + 0x18))(plVar5,&plStack_40);
    if (lStack_30 != 0) {
      func_0x000107c61268(lStack_30 + 0x20);
    }
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plStack_40 = (long *)0x0;
      if (lStack_38 != 0) {
        func_0x0001001b6dcc(lStack_38,plVar5);
      }
      plVar1 = plVar5 + 1;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plStack_40 != (long *)0x0) {
        plVar5 = plStack_40 + 1;
        do {
          iVar4 = (int)*plVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plStack_40 + 0x20))();
        }
      }
    }
  }
  if (*param_1 == 1) {
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x000107c61268(*(long *)(param_1 + 0x18) + 0x20);
    }
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001001b6dcc(*(long *)(param_1 + 0x10),plVar5);
      }
      plVar1 = plVar5 + 1;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
    }
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 1001b77f4; end: 1001b783f;  */

void FUN_1001b77f4(undefined8 param_1)

{
  FUN_1000285a8(0x112dc6028,&UNK_10d985e40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10174994c,param_1);
  return;
}



/* Entry: 1001b7840; end: 1001b7853;  */

void FUN_1001b7840(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 1001b7854; end: 1001b79bb;  */

/* WARNING: Possible PIC construction at 0x0001001b78ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001b78f0) */
/* WARNING: Removing unreachable block (ram,0x0001001b7900) */
/* WARNING: Removing unreachable block (ram,0x0001001b791c) */
/* WARNING: Removing unreachable block (ram,0x0001001b7958) */

void FUN_1001b7854(undefined8 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_22c [508];
  
  FUN_1001b7840();
  bVar1 = cRam000000011381b1f8 == '\x01';
  if (bVar1) {
    func_0x0001001e31ec(uRam0000000113170110);
    if (bVar1) {
      return;
    }
    func_0x000107c60e78();
    puVar2 = auStack_22c;
  }
  else {
    cRam000000011381b1f8 = '\x01';
    FUN_1001b79bc();
    FUN_1001b79c8(auStack_22c);
    FUN_1001c7e18(param_1,auStack_22c);
    FUN_1001b79bc();
    FUN_1001b79c8(auStack_22c);
    puVar2 = (undefined1 *)0x11381b1f9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__snprintf_11034cb30)(puVar2,500);
  return;
}



/* Entry: 1001b79bc; end: 1001b79c7;  */

void FUN_1001b79bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__snprintf_11034cb30)(&stack0x00000024,500);
  return;
}



/* Entry: 1001b79c8; end: 1001b7a93;  */

undefined8 FUN_1001b79c8(int *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c613c8();
  lVar2 = 1;
  piVar1 = param_1;
  do {
    if (*(char *)((long)param_1 + lVar2) == '/') {
      *(undefined1 *)((long)param_1 + lVar2) = 0;
      FUN_1001b7ab4();
      if (((int)piVar1 < 0) && (func_0x000107c60e5c(), *piVar1 != 0x11)) goto LAB_1001b7a54;
      *(undefined1 *)((long)param_1 + lVar2) = 0x2f;
    }
    else if (*(char *)((long)param_1 + lVar2) == '\0') {
      FUN_1001b7ab4();
      if (((int)piVar1 < 0) && (func_0x000107c60e5c(), *piVar1 != 0x11)) {
LAB_1001b7a54:
        func_0x000107c60e5c();
        func_0x000106aece74();
        func_0x000106aece60();
        func_0x000106aece90();
        func_0x000106aee914();
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      func_0x000107c60fd0(param_1);
      return uVar3;
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 1001b7a94; end: 1001b7ab3;  */

void FUN_1001b7a94(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6070);
  return;
}



/* Entry: 1001b7ab4; end: 1001b7abf;  */

void FUN_1001b7ab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mkdir_11034c680)();
  return;
}



/* Entry: 1001b7ac0; end: 1001b7aff;  */

void FUN_1001b7ac0(void)

{
  FUN_1000285a8(0x112dc5858,&UNK_10d985458);
  FUN_1000823a8(FUN_1003cac0c,0);
  return;
}



/* Entry: 1001b7b00; end: 1001b7b37;  */

void FUN_1001b7b00(undefined8 param_1)

{
  if (lRam0000000112dc58a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e650870);
  return;
}



/* Entry: 1001b7b38; end: 1001b7bbf;  */

void FUN_1001b7b38(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 1001b7bc0; end: 1001b7c3f;  */

void FUN_1001b7bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df4c70,&UNK_10d9c3190);
  puVar1 = &UNK_110438638;
  func_0x000107c613fc(&UNK_110438638,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100979124,puVar1);
  return;
}



/* Entry: 1001b7c40; end: 1001b7c5f;  */

void FUN_1001b7c40(void)

{
  func_0x000107c61168(&PTR_PTR_112df4ce8);
  return;
}



/* Entry: 1001b7c60; end: 1001b7c7b;  */

void FUN_1001b7c60(undefined8 param_1)

{
  FUN_1000285a8(0x112dd2c08,&UNK_10d9950f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100459c24,param_1);
  return;
}



/* Entry: 1001b7c7c; end: 1001b7ccb;  */

void FUN_1001b7c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b7ccc; end: 1001b7ceb;  */

void FUN_1001b7ccc(void)

{
  func_0x000107c61168(&PTR_PTR_112dd2c80);
  return;
}



/* Entry: 1001b7cec; end: 1001b7d37;  */

void FUN_1001b7cec(undefined8 param_1)

{
  FUN_1000285a8(0x112dc6d38,&UNK_10d9872e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10175cb6c,param_1);
  return;
}



/* Entry: 1001b7d38; end: 1001b7d5f;  */

void FUN_1001b7d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103da968;
  FUN_1000285a8(0x112db0d68,&UNK_10d95af80);
  func_0x000107c613fc(&UNK_1103da968,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10152ce5c,puVar1);
  return;
}



/* Entry: 1001b7d60; end: 1001b7e77;  */

void FUN_1001b7d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1001b7e78; end: 1001b7ed3;  */

void FUN_1001b7e78(void)

{
  func_0x000107c61168(&PTR_PTR_112dd3458);
  return;
}



/* Entry: 1001b7ed4; end: 1001b7ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b7ed4(long *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c429e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar4;
  func_0x000107c5f9e8(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(puVar4);
  if (*(long *)(puVar2 + 0x10) == 0) goto LAB_1001b80cc;
  func_0x000107c61434(puVar2);
  uVar7 = 0;
  lVar3 = -0x2fffffffffffffef;
  func_0x000100029284();
  if ((uVar7 & 1) != 0) {
    puVar1 = (ulong *)(*(long *)(puVar2 + 0x38) + lVar3 * 0x10);
    uVar7 = *puVar1;
    puVar4 = (undefined *)puVar1[1];
    func_0x000107c61434(puVar4);
    func_0x000107c6142c(puVar2);
    if (uVar7 == 0x31 && puVar4 == (undefined *)0xe100000000000000) {
      func_0x000107c6142c(puVar2);
      puVar2 = puVar4;
    }
    else {
      func_0x000107c605b8(uVar7,puVar4,0x31,0xe100000000000000,0);
      func_0x000107c6142c(puVar4);
      if ((uVar7 & 1) == 0) goto LAB_1001b800c;
    }
LAB_1001b80a4:
    func_0x000107c6142c(puVar2);
LAB_1001b80ac:
    puVar4 = (undefined *)0x0;
    func_0x000101434d2c();
    func_0x000107c610f8();
    func_0x000107c453e4();
    goto LAB_1001b81a8;
  }
  func_0x000107c6142c(puVar2);
LAB_1001b800c:
  if (*(long *)(puVar2 + 0x10) == 0) {
LAB_1001b80cc:
    func_0x000107c6142c();
    puVar4 = puVar2;
  }
  else {
    func_0x000107c61434(puVar2);
    lVar3 = 0x454c5f4e45564152;
    uVar7 = 0xeb00000000534b41;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(puVar2);
      goto LAB_1001b80cc;
    }
    puVar1 = (ulong *)(*(long *)(puVar2 + 0x38) + lVar3 * 0x10);
    uVar7 = *puVar1;
    puVar4 = (undefined *)puVar1[1];
    func_0x000107c61434(puVar4);
    func_0x000107c61430(puVar2,2);
    puVar2 = puVar4;
    if (uVar7 == 0x31 && puVar4 == (undefined *)0xe100000000000000) goto LAB_1001b80a4;
    func_0x000107c605b8(uVar7,puVar4,0x31,0xe100000000000000,0);
    func_0x000107c6142c();
    if ((uVar7 & 1) != 0) goto LAB_1001b80ac;
  }
  func_0x0001000ad7c4();
  FUN_100083b20(auStack_98);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&lStack_70);
  uVar8 = *(undefined8 *)(lStack_70 + _DAT_113091b70);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_70);
  FUN_100083b20(auStack_98);
  FUN_1000a8868(auStack_98,uStack_80);
  uVar5 = uStack_80;
  (**(code **)(lStack_78 + 8))(uStack_80,lStack_78);
  uVar6 = 0;
  func_0x0001001b8320(0);
  func_0x000107c610f8();
  FUN_1001b83f8(puVar4,auStack_98[0],uStack_68,uVar8,uVar5,uVar6);
  func_0x0001000834e4(auStack_98);
  FUN_1001b9f24();
  func_0x000107c5ba38(puVar4);
LAB_1001b81a8:
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1001b7ee4; end: 1001b81cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b7ee4(long *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c429e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar4;
  func_0x000107c5f9e8(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(puVar4);
  if (*(long *)(puVar2 + 0x10) == 0) goto LAB_1001b80cc;
  func_0x000107c61434(puVar2);
  uVar7 = 0;
  lVar3 = -0x2fffffffffffffef;
  func_0x000100029284();
  if ((uVar7 & 1) != 0) {
    puVar1 = (ulong *)(*(long *)(puVar2 + 0x38) + lVar3 * 0x10);
    uVar7 = *puVar1;
    puVar4 = (undefined *)puVar1[1];
    func_0x000107c61434(puVar4);
    func_0x000107c6142c(puVar2);
    if (uVar7 == 0x31 && puVar4 == (undefined *)0xe100000000000000) {
      func_0x000107c6142c(puVar2);
      puVar2 = puVar4;
    }
    else {
      func_0x000107c605b8(uVar7,puVar4,0x31,0xe100000000000000,0);
      func_0x000107c6142c(puVar4);
      if ((uVar7 & 1) == 0) goto LAB_1001b800c;
    }
LAB_1001b80a4:
    func_0x000107c6142c(puVar2);
LAB_1001b80ac:
    puVar4 = (undefined *)0x0;
    func_0x000101434d2c();
    func_0x000107c610f8();
    func_0x000107c453e4();
    goto LAB_1001b81a8;
  }
  func_0x000107c6142c(puVar2);
LAB_1001b800c:
  if (*(long *)(puVar2 + 0x10) == 0) {
LAB_1001b80cc:
    func_0x000107c6142c();
    puVar4 = puVar2;
  }
  else {
    func_0x000107c61434(puVar2);
    lVar3 = 0x454c5f4e45564152;
    uVar7 = 0xeb00000000534b41;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(puVar2);
      goto LAB_1001b80cc;
    }
    puVar1 = (ulong *)(*(long *)(puVar2 + 0x38) + lVar3 * 0x10);
    uVar7 = *puVar1;
    puVar4 = (undefined *)puVar1[1];
    func_0x000107c61434(puVar4);
    func_0x000107c61430(puVar2,2);
    puVar2 = puVar4;
    if (uVar7 == 0x31 && puVar4 == (undefined *)0xe100000000000000) goto LAB_1001b80a4;
    func_0x000107c605b8(uVar7,puVar4,0x31,0xe100000000000000,0);
    func_0x000107c6142c();
    if ((uVar7 & 1) != 0) goto LAB_1001b80ac;
  }
  func_0x0001000ad7c4();
  FUN_100083b20(auStack_98);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&lStack_70);
  uVar8 = *(undefined8 *)(lStack_70 + _DAT_113091b70);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_70);
  FUN_100083b20(auStack_98);
  FUN_1000a8868(auStack_98,uStack_80);
  uVar5 = uStack_80;
  (**(code **)(lStack_78 + 8))(uStack_80,lStack_78);
  uVar6 = 0;
  func_0x0001001b8320(0);
  func_0x000107c610f8();
  FUN_1001b83f8(puVar4,auStack_98[0],uStack_68,uVar8,uVar5,uVar6);
  func_0x0001000834e4(auStack_98);
  FUN_1001b9f24();
  func_0x000107c5ba38(puVar4);
LAB_1001b81a8:
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1001b81cc; end: 1001b81e7;  */

void FUN_1001b81cc(undefined8 param_1)

{
  FUN_1000285a8(0x112dd33e8,&UNK_10d995f78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10072ab58,param_1);
  return;
}



/* Entry: 1001b81e8; end: 1001b8237;  */

void FUN_1001b81e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b8238; end: 1001b8257;  */

void FUN_1001b8238(void)

{
  func_0x000107c61168(&PTR_PTR_11294ff78);
  return;
}



/* Entry: 1001b8258; end: 1001b8273;  */

void FUN_1001b8258(undefined8 param_1)

{
  FUN_1000285a8(0x112dd34d0,&UNK_10d996110);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10042d19c,param_1);
  return;
}



/* Entry: 1001b8274; end: 1001b82c3;  */

void FUN_1001b8274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b82c4; end: 1001b82e3;  */

void FUN_1001b82c4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd3548);
  return;
}



/* Entry: 1001b82e4; end: 1001b82ff;  */

void FUN_1001b82e4(undefined8 param_1)

{
  FUN_1000285a8(0x112dd34d8,&UNK_10d996118);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10042d140,param_1);
  return;
}



/* Entry: 1001b8300; end: 1001b833f;  */

void FUN_1001b8300(void)

{
  func_0x000107c61168(&PTR_PTR_112950040);
  return;
}



/* Entry: 1001b8340; end: 1001b83d7;  */

void FUN_1001b8340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dde800,&UNK_10d9a4dc0);
  puVar1 = &UNK_11041e210;
  func_0x000107c613fc(&UNK_11041e210,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1003e09e0,puVar1);
  return;
}



/* Entry: 1001b83d8; end: 1001b83f7;  */

void FUN_1001b83d8(void)

{
  func_0x000107c61168(&PTR_PTR_112dde878);
  return;
}



/* Entry: 1001b83f8; end: 1001b8943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1001b83f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined4 *puVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lVar7;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d9d4e8);
  uVar9 = 0;
  puVar1[1] = 0x8000000000000000;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d4f0) = 0x3fb999999999999a;
  lVar10 = _DAT_112d9d4f8;
  uVar3 = 0;
  func_0x000107c60f6c();
  *(undefined8 *)(unaff_x20 + lVar10) = uVar3;
  lVar10 = _DAT_112d9d500;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar4;
  lVar10 = _DAT_112d9d508;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar4;
  lVar10 = _DAT_112d9d510;
  FUN_1001b89d4();
  puVar5 = puVar4;
  func_0x000107c613fc();
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d518) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d9d520) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d528) = 0x4010000000000000;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d530) = 0x4024000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112d9d538) = 0;
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar5);
  func_0x000107c613fc(puVar4,0x14,7);
  puVar12 = (undefined4 *)(puVar4 + 0x10);
  *puVar12 = 0;
  if (puVar6 != (undefined *)0x2) {
    func_0x000107c61428(puVar12,&puStack_b0,0x21,0);
    func_0x000107c60b30(0,puVar12);
    func_0x000107c614a8(&puStack_b0);
  }
  uVar3 = 0x6873617243707061;
  *(undefined **)(unaff_x20 + _DAT_112d9d540) = puVar4;
  *(long *)(unaff_x20 + _DAT_112d9d548) = param_1;
  func_0x000107c61174();
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x20 + _DAT_112d9d550) = uVar9;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d558) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d560) = param_2;
  func_0x000107c615f0();
  lVar10 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    uVar2 = 0;
  }
  else {
    uVar9 = uVar3;
    func_0x000107c5fadc(0x6873617243707061,0xed0000524e416465);
    lVar7 = lVar10;
    func_0x000107c3ebc0();
    uVar2 = (undefined1)lVar7;
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar9);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d9d568) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d570) = 0x4024000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112d9d578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9d580) = param_3;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_3);
  puVar8 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar8,puVar4);
  func_0x000107c61180();
  func_0x000107c61174();
  uVar9 = 0x6574654420524e41;
  func_0x000107c5fadc(0x6574654420524e41,0xec000000726f7463);
  func_0x000107c56954(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  lVar10 = *(long *)(puVar8 + _DAT_112d9d548);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c5fadc(0x6873617243707061,0xed0000524e416465);
    func_0x000107c52de0(lVar10);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar3);
  }
  uVar3 = param_4;
  func_0x000107c419f0(param_4);
  func_0x000107c61180();
  puVar4 = &UNK_1103b7ed0;
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1103b7ed0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar8);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = &UNK_100c780d8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c1de60;
  puStack_98 = &UNK_1103b7ee8;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(ppuVar11);
  puVar6 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  uVar9 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(uVar9);
  uVar3 = param_4;
  func_0x000107c41b80(param_4);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1103b7ed0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar8);
  func_0x000107c61170(puVar8);
  puStack_90 = &UNK_1014358c8;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c1de60;
  puStack_98 = &UNK_1103b7f10;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61574(puStack_88);
  uVar9 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar9);
  return puVar8;
}



/* Entry: 1001b8944; end: 1001b8967;  */

void FUN_1001b8944(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001b8968; end: 1001b8983;  */

void FUN_1001b8968(undefined8 param_1)

{
  FUN_1000285a8(0x112dde808,&UNK_10d9a4dc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003e0984,param_1);
  return;
}



/* Entry: 1001b8984; end: 1001b89d3;  */

void FUN_1001b8984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b89d4; end: 1001b8a13;  */

void FUN_1001b89d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d9d5f0);
  return;
}



/* Entry: 1001b8a14; end: 1001b8aef; -[SCPreferences boolForKey:] */

ulong FUN_1001b8a14(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = param_1;
  func_0x000107c6115c(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  if (uVar1 == 0) {
    func_0x000107c61174(param_1);
    func_0x000107c61158(puVar3);
    uVar4 = param_1;
    func_0x000107c6115c(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000107c3ebcc(param_1);
    }
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c3ebcc(param_1);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar5;
}



/* Entry: 1001b8af0; end: 1001b8b87;  */

void FUN_1001b8af0(undefined8 param_1)

{
  FUN_1000285a8(0x112dc05a0,&UNK_10d97cb50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1016bad68,param_1);
  return;
}



/* Entry: 1001b8b88; end: 1001b8ba7;  */

void FUN_1001b8b88(void)

{
  func_0x000107c61168(&PTR_PTR_11295a5a8);
  return;
}



/* Entry: 1001b8ba8; end: 1001b8be7;  */

void FUN_1001b8ba8(void)

{
  FUN_1000285a8(0x112dc0828,&UNK_10d97ce70);
  FUN_1000823a8(FUN_1004f8920,0);
  return;
}



/* Entry: 1001b8be8; end: 1001b8c07;  */

void FUN_1001b8be8(void)

{
  func_0x000107c61168(&PTR_PTR_112955ec0);
  return;
}



/* Entry: 1001b8c08; end: 1001b8c47;  */

void FUN_1001b8c08(void)

{
  FUN_1000285a8(0x112dc1150,&UNK_10d97de10);
  FUN_1000823a8(&UNK_1016c6e34,0);
  return;
}



/* Entry: 1001b8c48; end: 1001b8c67;  */

void FUN_1001b8c48(void)

{
  func_0x000107c61168(&PTR_PTR_112820818);
  return;
}



/* Entry: 1001b8c68; end: 1001b8c7b;  */

undefined * FUN_1001b8c68(void)

{
  return PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
}



/* Entry: 1001b8c7c; end: 1001b8d17; -[KSCrash setUserInfo:] */

void FUN_1001b8c7c(void)

{
  undefined8 uStack_38;
  
  FUN_1001b8c68();
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x00010018ac98();
  if (uStack_38 == 0) {
    FUN_1001f3dfc();
    func_0x000107c610f4();
    func_0x000107c46368();
    FUN_10017dc74();
    func_0x000107c3ac4c();
    FUN_1001f3e0c();
    func_0x00010017d7d8();
  }
  else {
    func_0x000106ae5c20();
    func_0x000106aeea5c();
  }
  FUN_10016a534();
  func_0x00010016a53c();
  return;
}



/* Entry: 1001b8d18; end: 1001b8d87; -[SCPreferences setBool:forKey:] */

/* WARNING: Possible PIC construction at 0x0001001b8d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001b8d74) */

void FUN_1001b8d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61174(param_4);
  func_0x000107c4d94c(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c56bcc(param_1,param_2,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1001b8d88; end: 1001b8da3;  */

void FUN_1001b8d88(undefined8 param_1)

{
  FUN_1000285a8(0x112dda0a8,&UNK_10d99e300);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100914e1c,param_1);
  return;
}



/* Entry: 1001b8da4; end: 1001b8df3;  */

void FUN_1001b8da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b8df4; end: 1001b8e13;  */

void FUN_1001b8df4(void)

{
  func_0x000107c61168(&PTR_PTR_112dda120);
  return;
}



/* Entry: 1001b8e14; end: 1001b8f9f; -[SCSQLiteDocObjectContext performChanges:completionQueue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b8e14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar3 = auStack_58;
  func_0x000107c61144(puVar3,param_2);
  iVar2 = (int)puVar3;
  func_0x000107c6071c();
  func_0x000107c612b0();
  iVar1 = 0x19;
  if (iVar2 != 0x21) {
    iVar1 = iVar2;
  }
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1001b9164;
  puStack_90 = &UNK_110d258f8;
  uStack_68 = 0;
  func_0x000107c6111c(auStack_70,auStack_58);
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_4;
  uStack_60 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  uVar4 = 0x20;
  FUN_1000c5568(0x20,iVar1,0,&puStack_a8);
  FUN_10007380c(*(undefined8 *)(param_2 + _DAT_11278eb04),uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1001b8fa0; end: 1001b902f;  */

void FUN_1001b8fa0(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1001b9030; end: 1001b904b;  */

void FUN_1001b9030(undefined8 param_1)

{
  FUN_1000285a8(0x112de2330,&UNK_10d9aa330);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046dc64,param_1);
  return;
}



/* Entry: 1001b904c; end: 1001b909b;  */

void FUN_1001b904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}


