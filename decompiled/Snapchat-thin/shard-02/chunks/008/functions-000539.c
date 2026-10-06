/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021e67a8; end: 1021e67db;  */

void FUN_1021e67a8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c8));
                    /* WARNING: Could not recover jumptable at 0x0001021e67d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x2d8));
  return;
}



/* Entry: 1021e67dc; end: 1021e68c7;  */

void FUN_1021e67dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  pcStack_60 = FUN_1021e68c8;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1021e6910;
  puStack_68 = &UNK_1104e00a8;
  func_0x000107c60bc4(&puStack_80);
  pcStack_60 = (code *)0x1021e72a8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100ba5314;
  puStack_68 = &UNK_1104e00d0;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1021e68c8; end: 1021e690f;  */

void FUN_1021e68c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aa190;
  func_0x000107c610f8();
  func_0x000107c47f70();
  uVar2 = 0;
  FUN_1021e72b0();
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1021e6910; end: 1021e6993;  */

void FUN_1021e6910(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1021e6994; end: 1021e6bd7;  */

void FUN_1021e6994(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *apuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar13 = (ulong *)(param_1 + 0x38);
  uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar16 < 0x40) {
    uVar12 = ~(-1L << (-uVar16 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  func_0x000107c61434();
  puVar1 = PTR___ss11AnyHashableVN_11034e448;
  lVar14 = 0;
  lVar15 = lVar14;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar12 != 0) {
      uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x28
                          + lVar14 * 0xa00,&puStack_88);
      apuStack_c0[0] = puStack_88;
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_a0 = uStack_68;
      uVar6 = 0x112e63048;
      func_0x0001000285a8(0x112e63048,&UNK_10da6c330);
      plVar7 = &lStack_90;
      func_0x000107c6147c(plVar7,apuStack_c0,puVar1,uVar6,6);
      lVar3 = lStack_90;
      lVar15 = lVar14;
      if ((((ulong)plVar7 & 1) != 0) && (lStack_90 != 0)) {
        puVar9 = puVar10;
        func_0x000107c61550();
        if (((int)puVar9 == 0) ||
           (((long)puVar10 < 0 || (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar8 = puVar10;
            }
            func_0x000107c60480(puVar8);
          }
          puVar9 = (undefined *)0x0;
          func_0x0001021e455c(0,puVar8 + 1,1,puVar10);
        }
        uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar11 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          func_0x0001021e455c(puVar10,uVar2 + 1,1,puVar9);
          uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
        *(long *)(uVar11 + uVar2 * 8 + 0x20) = lVar3;
      }
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) break;
    if ((long)(0x3f - uVar16 >> 6) <= lVar14) {
      func_0x000100ba5608(param_1,puVar13,~uVar16,lVar15,0);
      if ((ulong)puVar10 >> 0x3e != 0) {
        puVar1 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar1 = puVar10;
        }
        func_0x000107c60480(puVar1);
      }
      uStack_80 = 0;
      puStack_88 = puVar10;
      func_0x00010488e5d4(*(undefined8 *)(param_1 + 0x10),&puStack_88);
      func_0x000107c6142c(puVar10);
      return;
    }
    uVar12 = puVar13[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1021e6bc4);
  (*pcVar4)();
}



/* Entry: 1021e6bd8; end: 1021e6c4b;  */

void FUN_1021e6bd8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  lVar2 = 0x112e63180;
  func_0x0001000285a8(0x112e63180,&UNK_10da6c450);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1021e6c4c;
  plVar1[7] = param_2;
  plVar1[8] = lVar2;
  plVar1[6] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 1021e6c4c; end: 1021e6c93;  */

void FUN_1021e6c4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6c94,0,0);
  return;
}



/* Entry: 1021e6c94; end: 1021e6d33;  */

void FUN_1021e6c94(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  
  puVar3 = *(undefined **)(unaff_x22 + 0x10);
  if (*(char *)(unaff_x22 + 0x18) == '\x01') {
    *(undefined **)(unaff_x22 + 0x20) = puVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_1021e7294(puVar3,1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  **(undefined8 **)(unaff_x22 + 0x28) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0001021e6d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021e6d34; end: 1021e6def;  */

void FUN_1021e6d34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1021e6df0; end: 1021e6e0f;  */

void FUN_1021e6df0(void)

{
  func_0x0001021e5b90();
  return;
}



/* Entry: 1021e6e10; end: 1021e6e17;  */

undefined8 FUN_1021e6e10(void)

{
  return 0;
}



/* Entry: 1021e6e18; end: 1021e6fb3;  */

void FUN_1021e6e18(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001021e6f04(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1021e6fb4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e6f00);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e6f04);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e6efc);
  (*pcVar1)();
}



/* Entry: 1021e6fb4; end: 1021e7117;  */

ulong FUN_1021e6fb4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e7118);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e710c);
        (*pcVar1)();
      }
      uVar3 = 0x112e63048;
      func_0x0001000285a8(0x112e63048,&UNK_10da6c330);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e7110);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e7114);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          FUN_1021e48c8(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1021e7118; end: 1021e713b;  */

void FUN_1021e7118(void)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61170();
    pcVar3 = 
    "init(valdiRuntimeProvider:deckService:currentPageTracker:plusServices:plusStoreKitServices:plusSubscribeScopeServices:plusSubscribeScopeExposer:plusManagementScopeExposer:plusUnifiedPaywallServices:applicationCircumstanceEngineServices:valdiBlizzardLoggingServices:valdiCOFStoresServices:plusSyncServices:settingsDelegate:snapProUserProfileIdProvider:initialAction:)"
    ;
    func_0x0001000c10c0(
                       "init(valdiRuntimeProvider:deckService:currentPageTracker:plusServices:plusStoreKitServices:plusSubscribeScopeServices:plusSubscribeScopeExposer:plusManagementScopeExposer:plusUnifiedPaywallServices:applicationCircumstanceEngineServices:valdiBlizzardLoggingServices:valdiCOFStoresServices:plusSyncServices:settingsDelegate:snapProUserProfileIdProvider:initialAction:)"
                       );
    func_0x000107c61180();
    puVar4 = &UNK_1104e03b8;
    func_0x000107c613fc(&UNK_1104e03b8,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    pcStack_58 = FUN_1021e951c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104e03d0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_50;
    func_0x000107c615f0(uVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1021e713c; end: 1021e719f;  */

void FUN_1021e713c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1021e71a0;
  plVar4[5] = lVar2;
  plVar3 = (long *)0x2e0;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x1021e64c0;
  plVar3[0x58] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6688,0,0);
  return;
}



/* Entry: 1021e71a0; end: 1021e71fb;  */

void FUN_1021e71a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021e71d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021e71fc; end: 1021e7203;  */

void FUN_1021e71fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  pcStack_60 = FUN_1021e68c8;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1021e6910;
  puStack_68 = &UNK_1104e00a8;
  func_0x000107c60bc4(&puStack_80);
  pcStack_60 = (code *)0x1021e72a8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100ba5314;
  puStack_68 = &UNK_1104e00d0;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1021e7204; end: 1021e7257;  */

void FUN_1021e7204(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1021e7258;
  plVar3[5] = param_1;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  plVar3[6] = (long)plVar1;
  lVar2 = 0x112e63180;
  func_0x0001000285a8(0x112e63180,&UNK_10da6c450);
  *plVar1 = (long)plVar3;
  plVar1[1] = (long)FUN_1021e6c4c;
  plVar1[7] = unaff_x20;
  plVar1[8] = lVar2;
  plVar1[6] = (long)(plVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 1021e7258; end: 1021e7293;  */

void FUN_1021e7258(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x0001021e7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021e7294; end: 1021e72af;  */

void FUN_1021e7294(undefined8 param_1,char param_2)

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



/* Entry: 1021e72b0; end: 1021e72f3;  */

void FUN_1021e72b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e63188 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa190;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e63188 = puVar1;
  return;
}



/* Entry: 1021e72f4; end: 1021e7303;  */

void FUN_1021e72f4(long param_1,long param_2)

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



/* Entry: 1021e7304; end: 1021e73bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021e7304(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e63190);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c49e00();
    func_0x000107c615e8(lVar1);
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4a8a4(puVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021e73bc; end: 1021e73ef; -[_TtC24SCSettingsImplementation35SCSettingsFriendsOnlyProfileFetcher getIsFriendsOnlyProfile] */

void FUN_1021e73bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021e7304();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021e73f0; end: 1021e744f; -[_TtC24SCSettingsImplementation35SCSettingsFriendsOnlyProfileFetcher init] */

void FUN_1021e73f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsFriendsOnlyProfileFetcher",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e741c);
  (*pcVar1)();
}



/* Entry: 1021e7450; end: 1021e745f; -[_TtC24SCSettingsImplementation35SCSettingsFriendsOnlyProfileFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63190));
  return;
}



/* Entry: 1021e7460; end: 1021e747f;  */

void FUN_1021e7460(void)

{
  func_0x000107c61168(&PTR_PTR_1128283f8);
  return;
}



/* Entry: 1021e7480; end: 1021e755f; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021e7480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  lVar3 = param_1;
  FUN_1021e79d4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e631c0) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e631c8);
  *puVar1 = 0x73676e6974746553;
  puVar1[1] = 0xe800000000000000;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar2,0,0);
  func_0x000107c61180();
  func_0x000107c54394();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_3);
  lVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,lVar3,0x20,7);
  return (undefined1 *)plVar5;
}



/* Entry: 1021e7560; end: 1021e75b7; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController initWithCoder:] */

void FUN_1021e7560(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCSettingsImplementation/SCSettingsPushableViewController.swift",0x3f,2,0x2e,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e75b8);
  (*pcVar1)();
}



/* Entry: 1021e75b8; end: 1021e769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e75b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  FUN_1021e79d4();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e631c0);
  func_0x000107c61174(uVar2);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e769c);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar3);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
    func_0x000107c61170(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e76a0);
  (*pcVar1)();
}



/* Entry: 1021e76a0; end: 1021e76c7; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController viewDidLoad] */

void FUN_1021e76a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021e75b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021e76c8; end: 1021e779f; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e76c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_5;
  FUN_1021e79d4();
  puVar1 = PTR_s_viewWillLayoutSubviews_112526958;
  lStack_60 = param_5;
  lStack_58 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar1);
  uVar4 = *(undefined8 *)(param_5 + _DAT_112e631c0);
  func_0x000107c61174(uVar4);
  lVar3 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e77a0);
  (*pcVar2)();
}



/* Entry: 1021e77a0; end: 1021e7817;  */

void FUN_1021e77a0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c49888();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c54514(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ba2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLeftSwipeDisabled__11264c2d8,param_2 & 1);
  return;
}



/* Entry: 1021e7818; end: 1021e78ff; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController forceDisableDismissalGesture:] */

void FUN_1021e7818(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174();
  pcVar1 = "forceDisableDismissalGesture(_:)";
  func_0x0001000c10c0("forceDisableDismissalGesture(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104e0110;
  func_0x000107c613fc(&UNK_1104e0110,0x19,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar2[0x18] = param_3;
  pcStack_40 = FUN_1021e7a40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104e0128;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1021e7900; end: 1021e7907; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController shouldPopToRootViewController] */

undefined8 FUN_1021e7900(void)

{
  return 0;
}



/* Entry: 1021e7908; end: 1021e790f; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1021e7908(void)

{
  return 1;
}



/* Entry: 1021e7910; end: 1021e793b; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController initWithNibName:bundle:] */

void FUN_1021e7910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsPushableViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e793c);
  (*pcVar1)();
}



/* Entry: 1021e793c; end: 1021e7997; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController initWithNibName:bundle:transitionType:] */

void FUN_1021e793c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsPushableViewController",0x39,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e7968);
  (*pcVar1)();
}



/* Entry: 1021e7998; end: 1021e79d3; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7998(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e631c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e631c8 + 8))
  ;
  return;
}



/* Entry: 1021e79d4; end: 1021e79f3;  */

void FUN_1021e79d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128284b8);
  return;
}



/* Entry: 1021e79f4; end: 1021e7a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e79f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e631c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e631c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e7a40; end: 1021e7a67;  */

void FUN_1021e7a40(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  lVar2 = lVar4;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c49888();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c54514(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ba2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setLeftSwipeDisabled__11264c2d8,bVar1 & 1);
  return;
}



/* Entry: 1021e7a68; end: 1021e7a6b; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController defaultProjectNameV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7a68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e631c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e631c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e7a6c; end: 1021e7a6f; -[_TtC24SCSettingsImplementation32SCSettingsPushableViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7a6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e631c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e631c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e7a70; end: 1021e7ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021e7a70(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112e63270;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e63270);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f06f210);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 1021e7ba4; end: 1021e7bcb; -[_TtC24SCSettingsImplementation23SCSettingsV3PlusManager getPlusHeaderDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7ba4(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e63268));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021e7bcc; end: 1021e7d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7bcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e63208);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5d6fc(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    FUN_1021e7a70();
    lVar3 = lVar1;
    func_0x000107c4da8c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    puVar4 = &UNK_1104e0160;
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_40 = FUN_1021e8e78;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1021e83b0;
    puStack_48 = &UNK_1104e0178;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar2 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021e7d30; end: 1021e7e43;  */

void FUN_1021e7d30(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = "setupPlusHeader()";
    func_0x0001000c10c0("setupPlusHeader()");
    func_0x000107c61180();
    puVar2 = &UNK_1104e01b0;
    func_0x000107c613fc(&UNK_1104e01b0,0x20,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    pcStack_68 = FUN_1021e8e9c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104e01c8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1021e7e44; end: 1021e83af;  */

/* WARNING: Possible PIC construction at 0x0001021e8300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e8304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e7e44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long unaff_x20;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e63248) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20 + _DAT_112e63258;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x00010439c014(0);
    func_0x000107c610f8();
    uVar3 = 0x1c;
    func_0x00010439b9d8(0x1c,0,0,0xffffffffffffffff,0,0,0xffffffffffffffff,0);
    puVar10 = &UNK_1104e0160;
    puVar4 = puVar10;
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar7 = &UNK_1104e0200;
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1104e0200,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar2);
    puVar6 = &UNK_1104e0228;
    func_0x000107c613fc(&UNK_1104e0228,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(undefined8 *)(puVar6 + 0x20) = uVar3;
    puVar5 = puVar10;
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c613fc(&UNK_1104e0200,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar2);
    puVar4 = &UNK_1104e0250;
    func_0x000107c613fc(&UNK_1104e0250,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    *(undefined8 *)(puVar4 + 0x20) = uVar3;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4a564(param_2);
    func_0x000107c5c36c(param_2);
    uVar3 = param_1;
    func_0x000107c5c35c(param_2);
    lVar2 = param_2;
    func_0x000107c5bd00(param_2);
    lVar8 = param_2;
    func_0x000107c4f598(param_2);
    func_0x000107c4a568(param_2);
    func_0x000107c42db8(param_2);
    func_0x000107c5c370(param_2);
    func_0x000107c4a56c(param_2);
    func_0x000107c610f8();
    func_0x000107c46f9c(param_1,uVar3,(double)lVar2,(double)lVar8);
    puVar5 = puVar10;
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar9 = puVar10;
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    func_0x000107c613fc(&UNK_1104e0160,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    func_0x000107c610f8();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x1021e8ed8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_1104e0268;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4();
    uStack_c8 = 0x1021e8ee0;
    puStack_e8 = puVar7;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_1000f6b44;
    puStack_d0 = &UNK_1104e0290;
    ppuVar12 = &puStack_e8;
    puStack_c0 = puVar9;
    func_0x000107c60bc4();
    uStack_f8 = 0x1021e8ee8;
    puStack_118 = puVar7;
    uStack_110 = 0x42000000;
    puStack_108 = &UNK_1000f6b44;
    puStack_100 = &UNK_1104e02b8;
    ppuVar13 = &puStack_118;
    puStack_f0 = puVar10;
    func_0x000107c60bc4(ppuVar13);
    pcStack_128 = FUN_1021e8ec0;
    puStack_148 = puVar7;
    uStack_140 = 0x42000000;
    puStack_138 = &UNK_100f11160;
    puStack_130 = &UNK_1104e02e0;
    ppuVar14 = &puStack_148;
    puStack_120 = puVar6;
    func_0x000107c60bc4(ppuVar14);
    uStack_158 = 0x1021e8ecc;
    puStack_178 = puVar7;
    uStack_170 = 0x42000000;
    puStack_168 = &UNK_1000f6b44;
    puStack_160 = &UNK_1104e0308;
    ppuVar15 = &puStack_178;
    puStack_150 = puVar4;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar10);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(puVar4);
    func_0x000107c45a08();
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(puStack_150);
    func_0x000107c61574(puStack_120);
    func_0x000107c61574(puStack_f0);
    func_0x000107c61574(puStack_c0);
    func_0x000107c61574(puStack_90);
    func_0x000107c610f8(PTR_PTR_1126aa1a0);
    func_0x000107c48b3c();
    puVar10 = PTR_PTR_1126aa1a8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a588();
    func_0x000107c538bc(puVar10);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e63268));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1021e83b0; end: 1021e83fb;  */

void FUN_1021e83b0(long param_1,undefined8 param_2)

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



/* Entry: 1021e83fc; end: 1021e88eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e83fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      lVar1 = *(long *)(param_3 + _DAT_112e63240);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar1 != 0) {
        uVar2 = 0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010f06f1f0);
        lVar3 = lVar1;
        func_0x000107c3ebd4();
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(uVar2);
        if ((int)lVar3 != 0) {
          uVar2 = *(undefined8 *)(param_3 + _DAT_112e63238);
          puVar6 = &UNK_1104e0160;
          func_0x000107c613fc(&UNK_1104e0160,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,param_3);
          puVar4 = &UNK_1104e0200;
          func_0x000107c613fc(&UNK_1104e0200,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,param_4);
          puVar5 = &UNK_1104e0390;
          func_0x000107c613fc(&UNK_1104e0390,0x28,7);
          *(undefined **)(puVar5 + 0x10) = puVar6;
          *(undefined **)(puVar5 + 0x18) = puVar4;
          *(undefined8 *)(puVar5 + 0x20) = param_5;
          func_0x000107c61174(uVar2);
          func_0x000107c6157c(puVar6);
          func_0x000107c6157c(puVar4);
          func_0x000107c61174(param_5);
          func_0x00010291ca68(param_4,param_5,FUN_1021e8f2c,puVar5);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_4);
          func_0x000107c61574(puVar6);
          func_0x000107c61574(puVar4);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(puVar5);
          return;
        }
      }
      puVar6 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      lVar1 = *(long *)(param_3 + _DAT_112e63220);
      func_0x000107c3eda8(lVar1);
      func_0x000107c61180();
      func_0x000107c42c1c(*(undefined8 *)(param_3 + _DAT_112e63228));
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(puVar6);
      param_3 = lVar1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1021e88ec; end: 1021e8bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e88ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112e63208);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = lVar2;
    func_0x000107c5d7b4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5a854();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        func_0x000107c4dc3c(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1021e8bf0; end: 1021e8c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8bf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa1a8;
  func_0x000107c610f8(PTR_PTR_1126aa1a8);
  func_0x000107c453e4();
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112e63268),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1021e8c38; end: 1021e8c43; -[_TtC24SCSettingsImplementation23SCSettingsV3PlusManager plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001021e8c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001021e8cb0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8c38(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021e8c44; end: 1021e8c4f; -[_TtC24SCSettingsImplementation23SCSettingsV3PlusManager plusManagementDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001021e8c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001021e8cb0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8c44(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021e8c50; end: 1021e8cdf;  */

/* WARNING: Possible PIC construction at 0x0001021e8c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001021e8cb0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1021e8c50(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021e8ce0; end: 1021e8d3f; -[_TtC24SCSettingsImplementation23SCSettingsV3PlusManager init] */

void FUN_1021e8ce0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsV3PlusManager",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e8d0c);
  (*pcVar1)();
}



/* Entry: 1021e8d40; end: 1021e8e57; -[_TtC24SCSettingsImplementation23SCSettingsV3PlusManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021e8d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e8e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e8e00) */
/* WARNING: Removing unreachable block (ram,0x0001021e8de0) */
/* WARNING: Removing unreachable block (ram,0x0001021e8dc0) */
/* WARNING: Removing unreachable block (ram,0x0001021e8da0) */
/* WARNING: Removing unreachable block (ram,0x0001021e8d80) */
/* WARNING: Removing unreachable block (ram,0x0001021e8d60) */
/* WARNING: Removing unreachable block (ram,0x0001021e8e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e631f8));
  return;
}



/* Entry: 1021e8e58; end: 1021e8e77;  */

void FUN_1021e8e58(void)

{
  func_0x000107c61168(&PTR_PTR_1128285a8);
  return;
}



/* Entry: 1021e8e78; end: 1021e8e9b;  */

void FUN_1021e8e78(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "setupPlusHeader()";
    func_0x0001000c10c0("setupPlusHeader()");
    func_0x000107c61180();
    puVar3 = &UNK_1104e01b0;
    func_0x000107c613fc(&UNK_1104e01b0,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    pcStack_68 = FUN_1021e8e9c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104e01c8;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_60;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1021e8e9c; end: 1021e8ebf;  */

void FUN_1021e8e9c(void)

{
  long unaff_x20;
  
  FUN_1021e7e44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021e8ec0; end: 1021e8ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8ec0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar1 + _DAT_112e63240);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 != 0) {
        uVar4 = 0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010f06f1f0);
        lVar5 = lVar3;
        func_0x000107c3ebd4();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(uVar4);
        if ((int)lVar5 != 0) {
          uVar4 = *(undefined8 *)(lVar1 + _DAT_112e63238);
          puVar8 = &UNK_1104e0160;
          func_0x000107c613fc(&UNK_1104e0160,0x18,7);
          func_0x000107c61614(puVar8 + 0x10,lVar1);
          puVar6 = &UNK_1104e0200;
          func_0x000107c613fc(&UNK_1104e0200,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,lVar2);
          puVar7 = &UNK_1104e0390;
          func_0x000107c613fc(&UNK_1104e0390,0x28,7);
          *(undefined **)(puVar7 + 0x10) = puVar8;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          *(undefined8 *)(puVar7 + 0x20) = uVar9;
          func_0x000107c61174(uVar4);
          func_0x000107c6157c(puVar8);
          func_0x000107c6157c(puVar6);
          func_0x000107c61174(uVar9);
          func_0x00010291ca68(lVar2,uVar9,FUN_1021e8f2c,puVar7);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61574(puVar8);
          func_0x000107c61574(puVar6);
          func_0x000107c61170(uVar4);
          func_0x000107c61574(puVar7);
          return;
        }
      }
      puVar8 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      lVar3 = *(long *)(lVar1 + _DAT_112e63220);
      func_0x000107c3eda8(lVar3);
      func_0x000107c61180();
      func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112e63228));
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar8);
      lVar1 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1021e8ef8; end: 1021e8f2b;  */

void FUN_1021e8ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021e8f2c; end: 1021e8f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e8f2c(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_80,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    puVar4 = puVar2;
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(puVar2 + _DAT_112e63230);
      func_0x000103929b80(0);
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c61174(uVar6);
      func_0x000107c4807c(puVar4);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(puVar2);
      func_0x000103929674(puVar4,uVar5,puVar2,param_1 & 1,0,0);
      func_0x000107c42c1c(uVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1021e8f70; end: 1021e9067;  */

void FUN_1021e8f70(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61170();
    pcVar1 = 
    "init(valdiRuntimeProvider:deckService:currentPageTracker:plusServices:plusStoreKitServices:plusSubscribeScopeServices:plusSubscribeScopeExposer:plusManagementScopeExposer:plusUnifiedPaywallServices:applicationCircumstanceEngineServices:valdiBlizzardLoggingServices:valdiCOFStoresServices:plusSyncServices:settingsDelegate:snapProUserProfileIdProvider:initialAction:)"
    ;
    func_0x0001000c10c0(
                       "init(valdiRuntimeProvider:deckService:currentPageTracker:plusServices:plusStoreKitServices:plusSubscribeScopeServices:plusSubscribeScopeExposer:plusManagementScopeExposer:plusUnifiedPaywallServices:applicationCircumstanceEngineServices:valdiBlizzardLoggingServices:valdiCOFStoresServices:plusSyncServices:settingsDelegate:snapProUserProfileIdProvider:initialAction:)"
                       );
    func_0x000107c61180();
    puVar2 = &UNK_1104e03b8;
    func_0x000107c613fc(&UNK_1104e03b8,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    pcStack_58 = FUN_1021e951c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104e03d0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1021e9068; end: 1021e90b7; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_112e632a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setView__112666308);
    return;
  }
  lVar1 = param_1;
  func_0x000107c614f0();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_loadView_112604be0);
  return;
}



/* Entry: 1021e90b8; end: 1021e912f; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e90b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c5bb50(*(undefined8 *)(param_1 + _DAT_112e632b8));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021e9130; end: 1021e923f; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9130(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToParentViewController__1125bb948;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (param_3 == 0) {
    lVar2 = param_1 + _DAT_112e632c0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c5a860();
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021e9240; end: 1021e92bb; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9240(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = param_1 + _DAT_112e632c0;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar2 != 0) {
    func_0x000107c5a860(lVar2);
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e92bc; end: 1021e9363; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021e92d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e9328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e9348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e932c) */
/* WARNING: Removing unreachable block (ram,0x0001021e92dc) */
/* WARNING: Removing unreachable block (ram,0x0001021e934c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e92bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e632a0));
  return;
}



/* Entry: 1021e9364; end: 1021e936b; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 pageViewName] */

undefined8 FUN_1021e9364(void)

{
  return 0xe6;
}



/* Entry: 1021e936c; end: 1021e939f; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 initWithCoder:] */

undefined8 FUN_1021e936c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1021e945c();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1021e93a0; end: 1021e93cb; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 initWithNibName:bundle:] */

void FUN_1021e93a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsViewControllerV3",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e93cc);
  (*pcVar1)();
}



/* Entry: 1021e93cc; end: 1021e9417; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 initWithNibName:bundle:transitionType:] */

void FUN_1021e93cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsViewControllerV3",0x33,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e93f8);
  (*pcVar1)();
}



/* Entry: 1021e9418; end: 1021e945b;  */

void FUN_1021e9418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407041c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e945c; end: 1021e94f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e945c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e632a0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e632c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e632c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e632d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e632d8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "SCSettingsImplementation/SCSettingsViewControllerV3.swift",0x39,2,0xbf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e94f8);
  (*pcVar1)();
}



/* Entry: 1021e94f8; end: 1021e951b;  */

undefined8 FUN_1021e94f8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021e951c; end: 1021e9547;  */

void FUN_1021e951c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2282d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_settingsScopeWantsDismiss_112667ad8);
    return;
  }
  return;
}



/* Entry: 1021e9548; end: 1021e954b; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 defaultProjectNameV2] */

void FUN_1021e9548(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407041c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e954c; end: 1021e954f; -[_TtC24SCSettingsImplementation26SCSettingsViewControllerV3 defaultProjectNameV3] */

void FUN_1021e954c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407041c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021e9550; end: 1021e95bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9550(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021e9944();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e63318) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021e95bc; end: 1021e9627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e95bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e63318) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e9628; end: 1021e9687; -[_TtC40AppsFromSnapScopedFactoryServiceProvider28SCAppsFromSnapScopedServices init] */

void FUN_1021e9628(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppsFromSnapScopedFactoryServiceProvider.SCAppsFromSnapScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e9654);
  (*pcVar1)();
}



/* Entry: 1021e9688; end: 1021e9697; -[_TtC40AppsFromSnapScopedFactoryServiceProvider28SCAppsFromSnapScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e63318));
  return;
}



/* Entry: 1021e9698; end: 1021e9703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e9698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104e05c0;
  func_0x000107c613fc(&UNK_1104e05c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1021e99dc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021e9704; end: 1021e979f;  */

void FUN_1021e9704(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104e04d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e04d0;
  return;
}



/* Entry: 1021e97a0; end: 1021e97d7;  */

void FUN_1021e97a0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1021e97d8; end: 1021e97df;  */

undefined8 FUN_1021e97d8(void)

{
  return 0x1b;
}



/* Entry: 1021e97e0; end: 1021e9913;  */

void FUN_1021e97e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104e05e8;
  func_0x000107c613fc(&UNK_1104e05e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021e99b4;
  func_0x00010058fa64(FUN_1021e99b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021e9914; end: 1021e9943;  */

undefined ** FUN_1021e9914(void)

{
  return &PTR_DAT_113066790;
}



/* Entry: 1021e9944; end: 1021e9963;  */

void FUN_1021e9944(void)

{
  func_0x000107c61168(&PTR_PTR_1128287e0);
  return;
}



/* Entry: 1021e9964; end: 1021e99b3;  */

undefined1  [16] FUN_1021e9964(void)

{
  return ZEXT816(0x1104e0520);
}



/* Entry: 1021e99b4; end: 1021e99db;  */

void FUN_1021e99b4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1021e99dc; end: 1021e99df;  */

void FUN_1021e99dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021e99e0; end: 1021e9b4f;  */

void FUN_1021e99e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e63380,&UNK_10da6c710);
  puVar1 = &UNK_1104e0628;
  func_0x000107c613fc(&UNK_1104e0628,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021e9b50,puVar1);
  return;
}



/* Entry: 1021e9b50; end: 1021e9b6b;  */

/* WARNING: Possible PIC construction at 0x0001021e9b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e9b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e9b28) */
/* WARNING: Removing unreachable block (ram,0x0001021e9b38) */

void FUN_1021e9b50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104e0670;
  func_0x000107c613fc(&UNK_1104e0670,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e63388;
  func_0x0001000285a8(0x112e63388,&UNK_10da6c750);
  func_0x000107c613fc();
  pcVar6 = FUN_1021e9e94;
  func_0x0001000841fc(FUN_1021e9e94,puVar4,uVar5);
  func_0x000100084214(&UNK_10da6c720,0x2a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021e9b6c; end: 1021e9e93;  */

void FUN_1021e9b6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e63390,&UNK_10da6c758);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021eaf48();
  func_0x000100082720("AppsFromSnapScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e63398,&UNK_10da6c760);
  puVar3 = &UNK_1104e0698;
  func_0x000107c613fc(&UNK_1104e0698,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x1021e9ea0;
  func_0x0001000823a8(0x1021e9ea0,puVar3);
  func_0x000100082720("SCAppsFromSnapScopeEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021e97a0;
  func_0x0001000823a8(FUN_1021e97a0,0);
  func_0x000100082720("SCAppsFromSnapScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e633a0,&UNK_10da6c770);
  puVar3 = &UNK_1104e06c0;
  func_0x000107c613fc(&UNK_1104e06c0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1021e9eec;
  func_0x0001000823a8(FUN_1021e9eec,puVar3);
  func_0x000100082720("SCAppsFromSnapScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e63320,&UNK_10da6c520);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1021e9ef8;
  func_0x0001000823a8(0x1021e9ef8,pcVar5);
  func_0x000100082720("SCAppsFromSnapScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e63310,&UNK_10da6c510);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1021e9f00;
  func_0x0001000823a8(0x1021e9f00,uVar6);
  func_0x000100082720("SCAppsFromSnapScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104e06e8;
  func_0x000107c613fc(&UNK_1104e06e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1021e9f08;
  func_0x0001000823a8(0x1021e9f08,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAppsFromSnapScopeEntryPointProvider",0x25,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1021e9e94; end: 1021e9eaf;  */

void FUN_1021e9e94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e63390,&UNK_10da6c758);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_1021eaf48();
  func_0x000100082720("AppsFromSnapScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e63398,&UNK_10da6c760);
  puVar4 = &UNK_1104e0698;
  func_0x000107c613fc(&UNK_1104e0698,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar5 = 0x1021e9ea0;
  func_0x0001000823a8(0x1021e9ea0,puVar4);
  func_0x000100082720("SCAppsFromSnapScopeEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1021e97a0;
  func_0x0001000823a8(FUN_1021e97a0,0);
  func_0x000100082720("SCAppsFromSnapScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e633a0,&UNK_10da6c770);
  puVar4 = &UNK_1104e06c0;
  func_0x000107c613fc(&UNK_1104e06c0,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(code **)(puVar4 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_1021e9eec;
  func_0x0001000823a8(FUN_1021e9eec,puVar4);
  func_0x000100082720("SCAppsFromSnapScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e63320,&UNK_10da6c520);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1021e9ef8;
  func_0x0001000823a8(0x1021e9ef8,pcVar7);
  func_0x000100082720("SCAppsFromSnapScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e63310,&UNK_10da6c510);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1021e9f00;
  func_0x0001000823a8(0x1021e9f00,uVar8);
  func_0x000100082720("SCAppsFromSnapScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104e06e8;
  func_0x000107c613fc(&UNK_1104e06e8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(code **)(puVar4 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1021e9f08;
  func_0x0001000823a8(0x1021e9f08,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCAppsFromSnapScopeEntryPointProvider",0x25,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1021e9eb0; end: 1021e9eeb;  */

void FUN_1021e9eb0(void)

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



/* Entry: 1021e9eec; end: 1021e9f0f;  */

void FUN_1021e9eec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021ea704(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAppsFromSnapScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}


