/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101442ea4; end: 101442ee7; -[SCWebBrowsingScopeServicesSaberServiceProvider end] */

void FUN_101442ea4(undefined8 param_1)

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



/* Entry: 101442ee8; end: 10144307f;  */

void FUN_101442ee8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef107fcf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010ef80310,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SystemScopeGraphBridge/SCWebBrowsingScopeServicesSaberServiceProvider.swift"
                            ,0x4b,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101443080);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59b70();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101443080; end: 10144312b; -[SCWebBrowsingScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101443080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101442ee8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10144312c; end: 10144319f; -[SCWebBrowsingScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144312c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d9f180,0);
  func_0x000107c61614(param_1 + _DAT_112d9f188,0);
  *(undefined8 *)(param_1 + _DAT_112d9f190) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014431a0; end: 1014431d3;  */

void FUN_1014431a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014431d4; end: 10144321b; -[SCWebBrowsingScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014431d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d9f180);
  func_0x000107c61610(param_1 + _DAT_112d9f188);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9f190));
  return;
}



/* Entry: 10144321c; end: 10144323b;  */

void FUN_10144321c(void)

{
  func_0x000107c61168(&PTR_PTR_112d9f1d8);
  return;
}



/* Entry: 10144323c; end: 1014433b3;  */

/* WARNING: Possible PIC construction at 0x0001014432a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010144333c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014432a8) */
/* WARNING: Removing unreachable block (ram,0x000101443340) */
/* WARNING: Removing unreachable block (ram,0x000101443358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144323c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d9f248);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014433b4; end: 1014433bb;  */

void FUN_1014433b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014433bc; end: 1014433ef; -[SCSCSystemScopedServicesSaberEntryPoint end] */

void FUN_1014433bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10144323c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014433f0; end: 101443423;  */

void FUN_1014433f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101443424; end: 10144345b; -[SCSCSystemScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101443424(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d9f240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9f248));
  return;
}



/* Entry: 10144345c; end: 10144347b;  */

void FUN_10144345c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6bf8);
  return;
}



/* Entry: 10144347c; end: 101443483;  */

undefined8 FUN_10144347c(void)

{
  return 1;
}



/* Entry: 101443484; end: 1014434c3;  */

void FUN_101443484(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d9f278;
  func_0x0001000285a8(0x112d9f278,&UNK_10d93f890);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014434c4; end: 1014434cb;  */

undefined8 FUN_1014434c4(void)

{
  return 1;
}



/* Entry: 1014434cc; end: 101443547;  */

void FUN_1014434cc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101443548; end: 10144354b;  */

void FUN_101443548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f8a0;
  func_0x000107c61520(&UNK_10d93f8a0,&UNK_1103b9550);
  puRam0000000112d9f288 = puVar1;
  return;
}



/* Entry: 10144354c; end: 1014435b7;  */

void FUN_10144354c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f8a0;
  func_0x000107c61520(&UNK_10d93f8a0,&UNK_1103b9550);
  puRam0000000112d9f288 = puVar1;
  return;
}



/* Entry: 1014435b8; end: 1014435bb;  */

void FUN_1014435b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f948;
  func_0x000107c61520(&UNK_10d93f948,&UNK_1103b95e0);
  puRam0000000112d9f2a0 = puVar1;
  return;
}



/* Entry: 1014435bc; end: 101443627;  */

void FUN_1014435bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f948;
  func_0x000107c61520(&UNK_10d93f948,&UNK_1103b95e0);
  puRam0000000112d9f2a0 = puVar1;
  return;
}



/* Entry: 101443628; end: 1014436ab;  */

void FUN_101443628(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1014436ac; end: 1014436af;  */

void FUN_1014436ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f9b8;
  func_0x000107c61520(&UNK_10d93f9b8,&UNK_1103b95e0);
  puRam0000000112d9f2b8 = puVar1;
  return;
}



/* Entry: 1014436b0; end: 1014436ef;  */

void FUN_1014436b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f9b8;
  func_0x000107c61520(&UNK_10d93f9b8,&UNK_1103b95e0);
  puRam0000000112d9f2b8 = puVar1;
  return;
}



/* Entry: 1014436f0; end: 1014436f3;  */

void FUN_1014436f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f970;
  func_0x000107c61520(&UNK_10d93f970,&UNK_1103b95e0);
  puRam0000000112d9f2c0 = puVar1;
  return;
}



/* Entry: 1014436f4; end: 101443733;  */

void FUN_1014436f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93f970;
  func_0x000107c61520(&UNK_10d93f970,&UNK_1103b95e0);
  puRam0000000112d9f2c0 = puVar1;
  return;
}



/* Entry: 101443734; end: 101443857;  */

undefined8 FUN_101443734(void)

{
  return 0;
}



/* Entry: 101443858; end: 1014438c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101443858(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100096710();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112d9f358) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1014438c4; end: 1014438cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014438c4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100096710();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f358) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1014438cc; end: 101443917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014438cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f358) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101443918; end: 101443a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101443918(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_101443b04(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_101443b04(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 101443a20; end: 101443a7f; -[_TtC34DeepLinkUnauthProcessorSaberPlugin43SCDeepLinkUnauthProcessorPluginSaberService buildSaberPlugins] */

void FUN_101443a20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101443918();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d9f388;
  func_0x0001000285a8(0x112d9f388,&UNK_10d93faf0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101443a80; end: 101443adf; -[_TtC34DeepLinkUnauthProcessorSaberPlugin43SCDeepLinkUnauthProcessorPluginSaberService init] */

void FUN_101443a80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkUnauthProcessorSaberPlugin.SCDeepLinkUnauthProcessorPluginSaberService"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101443aac);
  (*pcVar1)();
}



/* Entry: 101443ae0; end: 101443b03; -[_TtC34DeepLinkUnauthProcessorSaberPlugin43SCDeepLinkUnauthProcessorPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101443ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9f358));
  return;
}



/* Entry: 101443b04; end: 101443c2b;  */

ulong FUN_101443b04(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101443c2c);
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
  FUN_101443c3c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101443c28);
      (*pcVar1)();
    }
    FUN_101443cbc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101443c2c; end: 101443c3b;  */

undefined1  [16] FUN_101443c2c(void)

{
  return ZEXT816(0x1103b9660);
}



/* Entry: 101443c3c; end: 101443cbb;  */

undefined * FUN_101443c3c(undefined *param_1,undefined *param_2)

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
    func_0x000101443af0();
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



/* Entry: 101443cbc; end: 101443ddf;  */

long FUN_101443cbc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101443ddc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101443de0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d9f388;
        func_0x0001000285a8(0x112d9f388,&UNK_10d93faf0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d9f388;
      func_0x0001000285a8(0x112d9f388,&UNK_10d93faf0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101443dd8);
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



/* Entry: 101443de0; end: 101443def;  */

undefined1  [16] FUN_101443de0(void)

{
  return ZEXT816(0x1103b9728);
}



/* Entry: 101443df0; end: 101443eeb;  */

undefined * FUN_101443df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c444a4(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c3dfa0(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c4ec80(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar4 = PTR_PTR_1126a6e38;
  func_0x000107c610f8(PTR_PTR_1126a6e38);
  func_0x000107c46bd8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return puVar4;
}



/* Entry: 101443eec; end: 101443f23;  */

void FUN_101443eec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101443f24; end: 101443f4f;  */

void FUN_101443f24(long param_1,long param_2)

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



/* Entry: 101443f50; end: 1014443bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101443f50(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000100083b20(&puStack_90);
  puVar13 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar13);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_90);
    puVar13 = puStack_90;
    puVar4 = puStack_90;
    func_0x000107c44494();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(lVar3);
      puVar13 = (undefined *)0x0;
    }
    else {
      lVar6 = lVar3;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000100083b20(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c44580();
      func_0x000107c61180();
      func_0x000107c61170(puStack_90);
      puVar7 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar13 = &UNK_1103b98b0;
      func_0x000107c613fc(&UNK_1103b98b0,0x20,7);
      *(long *)(puVar13 + 0x10) = lVar6;
      *(undefined **)(puVar13 + 0x18) = puVar4;
      pcStack_70 = FUN_101444410;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x101444448;
      puStack_78 = &UNK_1103b98c8;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar13;
      func_0x000107c60bc4(ppuVar8);
      puVar13 = puStack_68;
      func_0x000107c615f0(lVar6);
      func_0x000107c61174();
      puStack_a8 = puVar4;
      func_0x000107c61574(puVar13);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      iVar1 = 2;
      func_0x000100029b9c(2,0x10,1,0);
      func_0x000100083b20(&puStack_90);
      puVar13 = puStack_90;
      puVar4 = puStack_90;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar9 = PTR_PTR_1126d1488;
      func_0x000107c610f8(PTR_PTR_1126d1488);
      func_0x000107c453e4();
      func_0x000100083b20(&lStack_98);
      uVar10 = *(undefined8 *)(lStack_98 + _DAT_113083800);
      func_0x000107c61174();
      func_0x000107c61170(lStack_98);
      func_0x000100083b20(&lStack_a0);
      lVar11 = lStack_a0;
      func_0x000107c4362c();
      func_0x000107c61180();
      func_0x000107c61170(lStack_a0);
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      puStack_b0 = (undefined1 *)&puStack_c0;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar2 = -extraout_x8;
      lVar14 = (long)&puStack_c0 + lVar2;
      if (lVar11 == 0) {
        lVar11 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar14,1,1,lVar11);
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(puVar5);
        func_0x000107c61174(puVar7);
        puVar12 = (undefined *)0x0;
      }
      else {
        func_0x000107c5ee94(lVar14,lVar11);
        func_0x000107c61170(lVar11);
        lVar11 = 0;
        func_0x000107c5eea4();
        lVar15 = *(long *)(lVar11 + -8);
        puStack_c0 = puVar4;
        uStack_b8 = uVar10;
        (**(code **)(lVar15 + 0x38))(lVar14,0,1,lVar11);
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(puVar5);
        puVar12 = puVar7;
        func_0x000107c61174();
        func_0x000107c5ee70();
        uVar10 = uStack_b8;
        puVar4 = puStack_c0;
        (**(code **)(lVar15 + 8))(lVar14,lVar11);
      }
      puVar13 = PTR_PTR_1126a6e40;
      func_0x000107c610f8(PTR_PTR_1126a6e40);
      auStack_d0[lVar2] = iVar1 != 0;
      *(undefined8 *)((long)auStack_e0 + lVar2) = uVar10;
      *(undefined **)((long)auStack_e0 + lVar2 + 8) = puVar12;
      func_0x000107c47e08();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puStack_a8);
      func_0x000107c615ec(lVar6,2);
      func_0x000107c615e8(puVar4);
      func_0x000107c61170(puVar9);
      func_0x000107c615ec(puVar5,2);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar12);
    }
  }
  return puVar13;
}



/* Entry: 1014443c0; end: 1014443cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014443c0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000100083b20(&puStack_90,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  puVar13 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar13);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_90);
    puVar13 = puStack_90;
    puVar4 = puStack_90;
    func_0x000107c44494();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(lVar3);
      puVar13 = (undefined *)0x0;
    }
    else {
      lVar6 = lVar3;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000100083b20(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c44580();
      func_0x000107c61180();
      func_0x000107c61170(puStack_90);
      puVar7 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar13 = &UNK_1103b98b0;
      func_0x000107c613fc(&UNK_1103b98b0,0x20,7);
      *(long *)(puVar13 + 0x10) = lVar6;
      *(undefined **)(puVar13 + 0x18) = puVar4;
      pcStack_70 = FUN_101444410;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x101444448;
      puStack_78 = &UNK_1103b98c8;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar13;
      func_0x000107c60bc4(ppuVar8);
      puVar13 = puStack_68;
      func_0x000107c615f0(lVar6);
      func_0x000107c61174();
      puStack_a8 = puVar4;
      func_0x000107c61574(puVar13);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      iVar1 = 2;
      func_0x000100029b9c(2,0x10,1,0);
      func_0x000100083b20(&puStack_90);
      puVar13 = puStack_90;
      puVar4 = puStack_90;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar9 = PTR_PTR_1126d1488;
      func_0x000107c610f8(PTR_PTR_1126d1488);
      func_0x000107c453e4();
      func_0x000100083b20(&lStack_98);
      uVar10 = *(undefined8 *)(lStack_98 + _DAT_113083800);
      func_0x000107c61174();
      func_0x000107c61170(lStack_98);
      func_0x000100083b20(&lStack_a0);
      lVar11 = lStack_a0;
      func_0x000107c4362c();
      func_0x000107c61180();
      func_0x000107c61170(lStack_a0);
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      puStack_b0 = (undefined1 *)&puStack_c0;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar2 = -extraout_x8;
      lVar14 = (long)&puStack_c0 + lVar2;
      if (lVar11 == 0) {
        lVar11 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar14,1,1,lVar11);
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(puVar5);
        func_0x000107c61174(puVar7);
        puVar12 = (undefined *)0x0;
      }
      else {
        func_0x000107c5ee94(lVar14,lVar11);
        func_0x000107c61170(lVar11);
        lVar11 = 0;
        func_0x000107c5eea4();
        lVar15 = *(long *)(lVar11 + -8);
        puStack_c0 = puVar4;
        uStack_b8 = uVar10;
        (**(code **)(lVar15 + 0x38))(lVar14,0,1,lVar11);
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(puVar5);
        puVar12 = puVar7;
        func_0x000107c61174();
        func_0x000107c5ee70();
        uVar10 = uStack_b8;
        puVar4 = puStack_c0;
        (**(code **)(lVar15 + 8))(lVar14,lVar11);
      }
      puVar13 = PTR_PTR_1126a6e40;
      func_0x000107c610f8(PTR_PTR_1126a6e40);
      auStack_d0[lVar2] = iVar1 != 0;
      *(undefined8 *)((long)auStack_e0 + lVar2) = uVar10;
      *(undefined **)((long)auStack_e0 + lVar2 + 8) = puVar12;
      func_0x000107c47e08();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puStack_a8);
      func_0x000107c615ec(lVar6,2);
      func_0x000107c615e8(puVar4);
      func_0x000107c61170(puVar9);
      func_0x000107c615ec(puVar5,2);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar12);
    }
  }
  return puVar13;
}



/* Entry: 1014443d0; end: 101444407;  */

void FUN_1014443d0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101444408; end: 10144440f;  */

void FUN_101444408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101444410; end: 10144443f;  */

void FUN_101444410(void)

{
  func_0x000107c610f8(PTR_PTR_1126a6e48);
                    /* WARNING: Could not recover jumptable at 0x00010c0351f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101444440; end: 10144446b;  */

void FUN_101444440(long param_1,long param_2)

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



/* Entry: 10144446c; end: 101444703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144446c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef807c0);
  uVar4 = uVar2;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x0001000ad7c4();
  puVar7 = puVar6;
  func_0x0001000ad7c4();
  puVar8 = puVar7;
  func_0x0001000ad7c4();
  puVar9 = puVar8;
  func_0x0001000ad7c4();
  puVar10 = puVar9;
  func_0x000100083b20(&uStack_68);
  func_0x0001000ad7c4();
  pcVar11 = 
  "init(performer:timeProvider:authenticationSessionInfoProvider:lastLoginInfoRepository:loginSessionService:registrationFlowUUIDService:systemInstallServices:userNotTrackedLogger:mainQueuePerformer:graphene:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126a6e58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar13 = 0;
  FUN_101448494();
  lVar14 = lVar13;
  func_0x000107c610f8();
  lVar1 = _DAT_112d9f3f0;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101444740(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d9f3e0,&UNK_10d93fe20);
  *(undefined **)(lVar14 + lVar1) = puVar15;
  lVar1 = _DAT_112d9f3f8;
  FUN_101444740(puVar16,0x112d9f3d8,&UNK_10d93fcb0);
  *(undefined **)(lVar14 + lVar1) = puVar16;
  *(undefined8 *)(lVar14 + _DAT_112d9f3e8) = uVar4;
  *(char **)(lVar14 + _DAT_112d9f400) = pcVar11;
  *(undefined **)(lVar14 + _DAT_112d9f408) = puVar5;
  *(undefined **)(lVar14 + _DAT_112d9f410) = puVar12;
  *(undefined **)(lVar14 + _DAT_112d9f418) = puVar6;
  *(undefined **)(lVar14 + _DAT_112d9f420) = puVar7;
  *(undefined **)(lVar14 + _DAT_112d9f428) = puVar8;
  *(undefined **)(lVar14 + _DAT_112d9f430) = puVar9;
  *(undefined8 *)(lVar14 + _DAT_112d9f438) = uStack_68;
  *(undefined **)(lVar14 + _DAT_112d9f440) = puVar10;
  plVar17 = &lStack_78;
  lStack_78 = lVar14;
  lStack_70 = lVar13;
  func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar4);
  *param_1 = (long)plVar17;
  return;
}



/* Entry: 101444704; end: 10144473f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101444704(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  uVar2 = uStack_68;
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef807c0);
  uVar4 = uVar2;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x0001000ad7c4();
  puVar7 = puVar6;
  func_0x0001000ad7c4();
  puVar8 = puVar7;
  func_0x0001000ad7c4();
  puVar9 = puVar8;
  func_0x0001000ad7c4();
  puVar10 = puVar9;
  func_0x000100083b20(&uStack_68);
  func_0x0001000ad7c4();
  pcVar11 = 
  "init(performer:timeProvider:authenticationSessionInfoProvider:lastLoginInfoRepository:loginSessionService:registrationFlowUUIDService:systemInstallServices:userNotTrackedLogger:mainQueuePerformer:graphene:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126a6e58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar13 = 0;
  FUN_101448494();
  lVar14 = lVar13;
  func_0x000107c610f8();
  lVar1 = _DAT_112d9f3f0;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101444740(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d9f3e0,&UNK_10d93fe20);
  *(undefined **)(lVar14 + lVar1) = puVar15;
  lVar1 = _DAT_112d9f3f8;
  FUN_101444740(puVar16,0x112d9f3d8,&UNK_10d93fcb0);
  *(undefined **)(lVar14 + lVar1) = puVar16;
  *(undefined8 *)(lVar14 + _DAT_112d9f3e8) = uVar4;
  *(char **)(lVar14 + _DAT_112d9f400) = pcVar11;
  *(undefined **)(lVar14 + _DAT_112d9f408) = puVar5;
  *(undefined **)(lVar14 + _DAT_112d9f410) = puVar12;
  *(undefined **)(lVar14 + _DAT_112d9f418) = puVar6;
  *(undefined **)(lVar14 + _DAT_112d9f420) = puVar7;
  *(undefined **)(lVar14 + _DAT_112d9f428) = puVar8;
  *(undefined **)(lVar14 + _DAT_112d9f430) = puVar9;
  *(undefined8 *)(lVar14 + _DAT_112d9f438) = uStack_68;
  *(undefined **)(lVar14 + _DAT_112d9f440) = puVar10;
  plVar17 = &lStack_78;
  lStack_78 = lVar14;
  lStack_70 = lVar13;
  func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar4);
  *param_1 = (long)plVar17;
  return;
}



/* Entry: 101444740; end: 101444833;  */

undefined * FUN_101444740(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101444830);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101444834);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101444834; end: 101444853;  */

undefined1  [16] FUN_101444834(void)

{
  return ZEXT816(0x1103b9a68);
}



/* Entry: 101444854; end: 101444957;  */

undefined * FUN_101444854(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d9f3c8,&UNK_10d93fca0);
    puVar2 = puVar5;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar4 = 0;
      FUN_101444a5c(param_1);
      uVar3 = uStack_78;
      func_0x0001014473c8();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101444954);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_78;
      func_0x000100102924(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101444958);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 101444958; end: 101444a5b;  */

undefined * FUN_101444958(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112d9f3c0);
    puVar4 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar10[-3];
      uVar2 = puVar10[-2];
      uVar11 = puVar10[-1];
      uVar12 = *puVar10;
      uVar5 = uVar1;
      FUN_1014473f8();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101444a58);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      puVar8 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 0x18);
      *puVar8 = uVar2;
      puVar8[1] = uVar11;
      puVar8[2] = uVar12;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101444a5c);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 4;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 101444a5c; end: 101444aab;  */

undefined8 FUN_101444a5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d9f3d0;
  func_0x0001000285a8(0x112d9f3d0,&UNK_10d93fca8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101444aac; end: 101444b43;  */

void FUN_101444aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c614f0();
  FUN_101448124(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 101444b44; end: 101444bdf;  */

void FUN_101444b44(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6011c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 101444be0; end: 101444c47;  */

uint FUN_101444be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *param_1;
  dVar4 = (double)param_1[1];
  uVar3 = *param_2;
  dVar5 = (double)param_2[1];
  uVar1 = 0;
  FUN_101448c68(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar2,uVar3,uVar1);
  return (uint)uVar2 & (uint)(dVar4 == dVar5);
}



/* Entry: 101444c48; end: 101444d93;  */

void FUN_101444c48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  dVar4 = (double)unaff_x20[2];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c60690(uVar1);
  func_0x000107c60690(uVar2);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  func_0x000107c606a0(dVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101444d94; end: 101444daf;  */

bool FUN_101444d94(undefined8 *param_1,undefined8 *param_2)

{
  return (double)param_1[2] == (double)param_2[2] &&
         ((int)*param_1 == (int)*param_2 && (int)param_1[1] == (int)param_2[1]);
}



/* Entry: 101444db0; end: 101444fe3;  */

/* WARNING: Possible PIC construction at 0x000101444ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101444ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101444db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101444854();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d9f3e8);
  if (lVar3 != 0) {
    puVar2 = &UNK_1103b9aa8;
    func_0x000107c613fc(&UNK_1103b9aa8,0x40,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_4;
    *(undefined **)(puVar2 + 0x38) = puVar1;
    uStack_60 = 0x101448410;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103b9ac0;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61434(param_4);
    func_0x000107c61434(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 101444fe4; end: 101445067; -[_TtC46ActivationNetworkLoggingServicesImplementation35ActivationNetworkLoggingServiceImpl logNetworkTransitionState:for:clientNetworkRequestId:] */

void FUN_101444fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101444db0(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101445068; end: 10144512b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101445068(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c40fd4(*(undefined8 *)(param_3 + _DAT_112d9f408));
  func_0x000107c61174(param_2);
  FUN_101448700(param_1);
  FUN_10144512c(param_1,param_2,param_4,param_5,param_6);
  func_0x0001014455a4(param_1,param_2,param_4,param_5,param_6,param_7);
  FUN_101448874(param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10144512c; end: 101445c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144512c(double param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                  undefined1 *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  undefined *puVar12;
  double dVar13;
  undefined1 auStack_110 [16];
  long *plStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  
  lVar8 = _DAT_112d9f3f0;
  puVar6 = auStack_110;
  func_0x000107c61428(unaff_x20 + _DAT_112d9f3f0,puVar6,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    func_0x000100029284();
    puVar6 = param_5;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)param_5 & 1) != 0) {
      puVar12 = *(undefined **)(*(long *)(lVar8 + 0x38) + param_4 * 8);
      func_0x000107c61434(puVar12);
      puVar6 = param_5;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_110);
  uVar10 = *(ulong *)(puVar12 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d9f410);
  if (uVar10 != 0) {
    uVar9 = 0;
    pdVar11 = (double *)(puVar12 + 0x28);
    do {
      if (*(ulong *)(puVar12 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101445598);
        (*pcVar2)();
      }
      dVar3 = pdVar11[-1];
      dVar13 = *pdVar11;
      lStack_f0 = 0;
      plStack_100 = &lStack_f0;
      plStack_d0 = &lStack_f0;
      plStack_b0 = &lStack_f0;
      plStack_90 = &lStack_f0;
      func_0x000107c61174(dVar3);
      func_0x00010405bfc8(0x101448d4c,auStack_110,0x101448d50,auStack_a0,0x101448cf8,auStack_c0,
                          0x101448d54,auStack_e0);
      lVar8 = lStack_f0;
      lStack_f0 = 0;
      puVar6 = auStack_110;
      plStack_100 = &lStack_f0;
      plStack_d0 = &lStack_f0;
      plStack_b0 = &lStack_f0;
      plStack_90 = &lStack_f0;
      func_0x00010405bfc8(0x101448d58,puVar6,0x101448d5c,auStack_a0,0x101448cfc,auStack_c0,
                          0x101448d60,auStack_e0);
      if (lVar8 < lStack_f0) {
        puVar4 = param_3;
        FUN_101448dbc(param_3);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
        lStack_f0 = 0;
        uStack_e8 = 0xe000000000000000;
        plStack_100 = &lStack_f0;
        plStack_d0 = &lStack_f0;
        plStack_b0 = &lStack_f0;
        plStack_90 = &lStack_f0;
        func_0x00010405bfc8(0x101448d64,auStack_110,0x101448d68,auStack_a0,0x101448d00,auStack_c0,
                            0x101448d6c,auStack_e0);
        uVar1 = uStack_e8;
        lVar8 = lStack_f0;
        func_0x000107c5fadc(lStack_f0,uStack_e8);
        func_0x000107c6142c(uVar1);
        lStack_f0 = 0;
        uStack_e8 = 0xe000000000000000;
        plStack_100 = &lStack_f0;
        plStack_d0 = &lStack_f0;
        plStack_b0 = &lStack_f0;
        plStack_90 = &lStack_f0;
        func_0x00010405bfc8(0x101448d70,auStack_110,0x101448d74,auStack_a0,0x101448d04,auStack_c0,
                            0x101448d78,auStack_e0);
        uVar1 = uStack_e8;
        lVar5 = lStack_f0;
        func_0x000107c5fadc(lStack_f0,uStack_e8);
        func_0x000107c6142c(uVar1);
        dVar13 = (param_1 - dVar13) * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10144559c);
          (*pcVar2)();
        }
        if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014455a0);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014455a4);
          (*pcVar2)();
        }
        puVar6 = puVar4;
        func_0x00010526ab50(uVar7,puVar4,lVar8,lVar5,(long)dVar13);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar5);
      }
      uVar9 = uVar9 + 1;
      func_0x000107c61170(dVar3);
      pdVar11 = pdVar11 + 2;
    } while (uVar10 != uVar9);
  }
  func_0x000107c6142c(puVar12);
  puVar4 = param_3;
  FUN_101448dbc(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar6);
  lStack_f0 = 0;
  uStack_e8 = 0xe000000000000000;
  plStack_100 = &lStack_f0;
  plStack_d0 = plStack_100;
  plStack_b0 = plStack_100;
  plStack_90 = plStack_100;
  func_0x00010405bfc8(0x101448d7c,auStack_110,0x101448d80,auStack_a0,0x101448d08,auStack_c0,
                      0x101448d84,auStack_e0);
  uVar1 = uStack_e8;
  lVar8 = lStack_f0;
  func_0x000107c5fadc(lStack_f0,uStack_e8);
  func_0x000107c6142c(uVar1);
  func_0x00010526ae10(uVar7,puVar4,lVar8,1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar8);
  puStack_f8 = param_3;
  func_0x00010405bfc8(FUN_101446664,0,0x101446668,0,FUN_101448cd8,auStack_110,FUN_101446764,0);
  return;
}



/* Entry: 101445c70; end: 101445e2f; -[_TtC46ActivationNetworkLoggingServicesImplementation35ActivationNetworkLoggingServiceImpl logNetworkTransitionState:for:clientNetworkRequestId:extraFields:] */

/* WARNING: Possible PIC construction at 0x000101445d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101445d24) */

void FUN_101445c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  uVar1 = 0;
  func_0x00010405b7fc(0);
  uVar2 = uVar1;
  func_0x0001014486bc();
  func_0x000107c5f9e8(param_6,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101444ee4(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101445e30; end: 101445ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101445e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c40fd4(*(undefined8 *)(param_4 + _DAT_112d9f408));
  FUN_101445ed8(param_2,param_3,param_5,param_6,param_7);
  func_0x000101446414(param_1,param_2,param_3,param_5,param_6,param_7);
  func_0x000101448a3c(param_1,param_2,param_3,param_6,param_7);
  return;
}



/* Entry: 101445ed8; end: 1014465e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101445ed8(double param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                  ulong *param_6)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  ulong auStack_88 [3];
  
  lVar12 = _DAT_112d9f3f8;
  puVar7 = auStack_88;
  func_0x000107c61428(unaff_x20 + _DAT_112d9f3f8,puVar7,0x20,0);
  lVar12 = *(long *)(unaff_x20 + lVar12);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    func_0x000100029284();
    if (((ulong)param_6 & 1) == 0) {
      func_0x000107c6142c(lVar12);
      puVar7 = param_6;
      goto LAB_101445f90;
    }
    puVar8 = *(undefined **)(*(long *)(lVar12 + 0x38) + param_5 * 8);
    func_0x000107c61434(puVar8);
    func_0x000107c614a8(auStack_88);
    func_0x000107c6142c(lVar12);
    if (*(long *)(puVar8 + 0x10) != 0) goto LAB_101445fb0;
LAB_1014460b4:
    func_0x000107c6142c(puVar8);
    if ((int)param_3 != 0) {
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d9f410);
    FUN_101448dbc(param_4);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_6);
    if (param_3 == 0) {
      uVar11 = 0xe700000000000000;
      uVar5 = 0x44455452415453;
    }
    else {
      if (param_3 != 1) {
LAB_1014463e0:
        puVar8 = &UNK_11073b228;
        auStack_88[0] = param_3;
        goto LAB_1014463fc;
      }
      uVar5 = 0x4554454c504d4f43;
      uVar11 = 0xe900000000000044;
    }
    func_0x000107c5fadc(uVar5,uVar11);
    func_0x000107c6142c(uVar11);
    if ((long)param_2 < 2) {
      if (param_2 == 0) {
        uVar6 = 0x455454415f505041;
        uVar11 = 0xef4e4f4954415453;
      }
      else {
        if (param_2 != 1) goto LAB_1014463f0;
        uVar6 = 0x545f454349564544;
        uVar11 = 0xec0000004e454b4f;
      }
    }
    else if (param_2 == 2) {
      uVar11 = 0xe800000000000000;
      uVar6 = 0x474154455f464f43;
    }
    else {
      if (param_2 != 3) goto LAB_1014463f0;
      uVar6 = 0x5355494c45444946;
      uVar11 = 0xef544e45494c435f;
    }
    func_0x000107c5fadc(uVar6,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x00010526b530(uVar9,param_4,uVar5,uVar6,1);
    func_0x000107c61170(param_4);
    param_4 = uVar5;
LAB_1014463a0:
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar6);
    return;
  }
LAB_101445f90:
  param_6 = puVar7;
  func_0x000107c614a8(auStack_88);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101444958();
  if (*(long *)(puVar8 + 0x10) == 0) goto LAB_1014460b4;
LAB_101445fb0:
  func_0x000107c61434(puVar8);
  uVar3 = param_2;
  FUN_1014473f8();
  if (((ulong)param_6 & 1) == 0) {
    func_0x000107c6142c(puVar8);
    goto LAB_1014460b4;
  }
  lVar12 = *(long *)(puVar8 + 0x38) + uVar3 * 0x18;
  iVar1 = *(int *)(lVar12 + 8);
  dVar14 = *(double *)(lVar12 + 0x10);
  uVar9 = 2;
  func_0x000107c61430(puVar8,2);
  if (iVar1 != 0 || (param_3 & 0xffffffff) != 1) {
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d9f410);
  uVar5 = param_4;
  FUN_101448dbc(param_4);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  if (param_3 != 1) goto LAB_1014463e0;
  uVar10 = 0xef4e4f4954415453;
  uVar6 = 0x455454415f505041;
  uVar9 = 0x4554454c504d4f43;
  func_0x000107c5fadc(0x4554454c504d4f43,0xe900000000000044);
  func_0x000107c6142c(0xe900000000000044);
  if ((long)param_2 < 2) {
    uVar4 = uVar6;
    uVar13 = uVar10;
    if (param_2 != 0) {
      if (param_2 != 1) goto LAB_1014463f0;
      uVar4 = 0x545f454349564544;
      uVar13 = 0xec0000004e454b4f;
    }
LAB_101446258:
    func_0x000107c5fadc(uVar4,uVar13);
    func_0x000107c6142c(uVar13);
    uVar13 = uVar5;
    func_0x00010526b530(uVar11,uVar5,uVar9,uVar4,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    FUN_101448dbc(param_4);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
    if ((long)param_2 < 2) {
      if (param_2 != 0) {
        uVar6 = 0x545f454349564544;
        uVar10 = 0xec0000004e454b4f;
      }
    }
    else if (param_2 == 2) {
      uVar10 = 0xe800000000000000;
      uVar6 = 0x474154455f464f43;
    }
    else {
      uVar6 = 0x5355494c45444946;
      uVar10 = 0xef544e45494c435f;
    }
    func_0x000107c5fadc(uVar6,uVar10);
    func_0x000107c6142c(uVar10);
    dVar14 = (param_1 - dVar14) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014463d8);
      (*pcVar2)();
    }
    if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014463dc);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014463e0);
      (*pcVar2)();
    }
    func_0x00010526b300(uVar11,param_4,uVar6,(long)dVar14);
    goto LAB_1014463a0;
  }
  if (param_2 == 2) {
    uVar13 = 0xe800000000000000;
    uVar4 = 0x474154455f464f43;
    goto LAB_101446258;
  }
  if (param_2 == 3) {
    uVar4 = 0x5355494c45444946;
    uVar13 = 0xef544e45494c435f;
    goto LAB_101446258;
  }
LAB_1014463f0:
  puVar8 = &UNK_11073b1b0;
  auStack_88[0] = param_2;
LAB_1014463fc:
  func_0x000107c60614(puVar8,auStack_88,puVar8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101446414);
  (*pcVar2)();
}



/* Entry: 1014465e8; end: 101446663; -[_TtC46ActivationNetworkLoggingServicesImplementation35ActivationNetworkLoggingServiceImpl logRequestPreparationTaskState:task:for:clientNetworkRequestId:] */

void FUN_1014465e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_1);
  func_0x000101445d40(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101446664; end: 10144666b;  */

void FUN_101446664(void)

{
  return;
}



/* Entry: 10144666c; end: 101446763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144666c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_3 + _DAT_112d9f410);
  FUN_101448dbc(param_4);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar1 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c6057c(puVar2,puVar4);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar4);
  func_0x00010526b040(uVar5,param_4,puVar1,puVar2,1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101446764; end: 10144676b;  */

void FUN_101446764(void)

{
  return;
}



/* Entry: 10144676c; end: 101446887;  */

/* WARNING: Possible PIC construction at 0x0001014467d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014467fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010144681c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101446800) */
/* WARNING: Removing unreachable block (ram,0x0001014467dc) */
/* WARNING: Removing unreachable block (ram,0x000101446820) */
/* WARNING: Removing unreachable block (ram,0x000101446858) */
/* WARNING: Removing unreachable block (ram,0x00010144686c) */

void FUN_10144676c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6e78;
  func_0x000107c610f8(PTR_PTR_1126a6e78);
  func_0x000107c453e4();
  FUN_101448dbc(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c545b4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101446888; end: 101446ad7;  */

/* WARNING: Possible PIC construction at 0x000101446914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014469d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014469f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101446a2c) */
/* WARNING: Removing unreachable block (ram,0x000101446a88) */
/* WARNING: Removing unreachable block (ram,0x000101446a9c) */
/* WARNING: Removing unreachable block (ram,0x0001014469fc) */
/* WARNING: Removing unreachable block (ram,0x0001014469d8) */
/* WARNING: Removing unreachable block (ram,0x000101446918) */
/* WARNING: Removing unreachable block (ram,0x000101446950) */
/* WARNING: Removing unreachable block (ram,0x000101446acc) */
/* WARNING: Removing unreachable block (ram,0x00010144697c) */
/* WARNING: Removing unreachable block (ram,0x000101446988) */
/* WARNING: Removing unreachable block (ram,0x00010144698c) */
/* WARNING: Removing unreachable block (ram,0x000101446ad0) */
/* WARNING: Removing unreachable block (ram,0x000101446990) */
/* WARNING: Removing unreachable block (ram,0x000101446998) */
/* WARNING: Removing unreachable block (ram,0x00010144699c) */
/* WARNING: Removing unreachable block (ram,0x000101446ad4) */
/* WARNING: Removing unreachable block (ram,0x0001014469a0) */
/* WARNING: Removing unreachable block (ram,0x00010144691c) */
/* WARNING: Removing unreachable block (ram,0x000101446aa4) */

void FUN_101446888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x00010405c114(0);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x000107c61174(uVar1);
    uVar2 = uVar1;
    func_0x00010405be34();
    func_0x000107c60118(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101446ad8; end: 101446adb;  */

void FUN_101446ad8(void)

{
  return;
}



/* Entry: 101446adc; end: 101446f17;  */

/* WARNING: Possible PIC construction at 0x000101446b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101446e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101446e50) */
/* WARNING: Removing unreachable block (ram,0x000101446dd4) */
/* WARNING: Removing unreachable block (ram,0x000101446ec8) */
/* WARNING: Removing unreachable block (ram,0x000101446e00) */
/* WARNING: Removing unreachable block (ram,0x000101446e0c) */
/* WARNING: Removing unreachable block (ram,0x000101446e10) */
/* WARNING: Removing unreachable block (ram,0x000101446ecc) */
/* WARNING: Removing unreachable block (ram,0x000101446e14) */
/* WARNING: Removing unreachable block (ram,0x000101446e1c) */
/* WARNING: Removing unreachable block (ram,0x000101446e20) */
/* WARNING: Removing unreachable block (ram,0x000101446ed0) */
/* WARNING: Removing unreachable block (ram,0x000101446e24) */
/* WARNING: Removing unreachable block (ram,0x000101446cb8) */
/* WARNING: Removing unreachable block (ram,0x000101446cf4) */
/* WARNING: Removing unreachable block (ram,0x000101446d14) */
/* WARNING: Removing unreachable block (ram,0x000101446d1c) */
/* WARNING: Removing unreachable block (ram,0x000101446cfc) */
/* WARNING: Removing unreachable block (ram,0x000101446cc8) */
/* WARNING: Removing unreachable block (ram,0x000101446ccc) */
/* WARNING: Removing unreachable block (ram,0x000101446ee4) */
/* WARNING: Removing unreachable block (ram,0x000101446cd4) */
/* WARNING: Removing unreachable block (ram,0x000101446d3c) */
/* WARNING: Removing unreachable block (ram,0x000101446d70) */
/* WARNING: Removing unreachable block (ram,0x000101446ef4) */
/* WARNING: Removing unreachable block (ram,0x000101446d78) */
/* WARNING: Removing unreachable block (ram,0x000101446d68) */
/* WARNING: Removing unreachable block (ram,0x000101446d90) */
/* WARNING: Removing unreachable block (ram,0x000101446b88) */
/* WARNING: Removing unreachable block (ram,0x000101446bcc) */
/* WARNING: Removing unreachable block (ram,0x000101446bec) */
/* WARNING: Removing unreachable block (ram,0x000101446bf4) */
/* WARNING: Removing unreachable block (ram,0x000101446bd4) */
/* WARNING: Removing unreachable block (ram,0x000101446b98) */
/* WARNING: Removing unreachable block (ram,0x000101446ba4) */
/* WARNING: Removing unreachable block (ram,0x000101446ed4) */
/* WARNING: Removing unreachable block (ram,0x000101446ee8) */
/* WARNING: Removing unreachable block (ram,0x000101446bac) */
/* WARNING: Removing unreachable block (ram,0x000101446c14) */
/* WARNING: Removing unreachable block (ram,0x000101446c58) */
/* WARNING: Removing unreachable block (ram,0x000101446edc) */
/* WARNING: Removing unreachable block (ram,0x000101446ef8) */
/* WARNING: Removing unreachable block (ram,0x000101446f00) */
/* WARNING: Removing unreachable block (ram,0x000101446c60) */
/* WARNING: Removing unreachable block (ram,0x000101446c4c) */
/* WARNING: Removing unreachable block (ram,0x000101446c78) */
/* WARNING: Removing unreachable block (ram,0x000101446e70) */
/* WARNING: Removing unreachable block (ram,0x000101446e8c) */
/* WARNING: Removing unreachable block (ram,0x000101446ea0) */

void FUN_101446adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6e60;
  func_0x000107c610f8(PTR_PTR_1126a6e60);
  func_0x000107c453e4();
  FUN_101448dbc(param_5);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c545b4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 101446f18; end: 10144710b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101446f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a6e68;
  func_0x000107c610f8(PTR_PTR_1126a6e68);
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d9f418);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      uVar4 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = uVar4;
    }
  }
  func_0x000107c53440(puVar1);
  func_0x000107c61170(lVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d9f420);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c44958();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c5501c(puVar1);
  func_0x000107c49d90(*(undefined8 *)(unaff_x20 + _DAT_112d9f438));
  func_0x000107c55654(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d9f428);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c44114();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      uVar4 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = uVar4;
    }
  }
  func_0x000107c56100(puVar1);
  func_0x000107c61170(lVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d9f430);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c44358();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
  }
  func_0x000107c57c64(puVar1);
  func_0x000107c61170(lVar3);
  return puVar1;
}



/* Entry: 10144710c; end: 10144728f;  */

void FUN_10144710c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_110 [16];
  long *plStack_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [16];
  long *plStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar3 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar3 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(param_1 + 0x40);
  uVar3 = uVar3 + 0x3f >> 6;
  func_0x000107c61434();
  lVar5 = 0;
  lVar4 = lVar5;
  if (uVar6 == 0) goto LAB_10144718c;
LAB_1014471bc:
  do {
    uVar2 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 - 1 & uVar6;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar5 << 6;
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8);
    lStack_d0 = lVar4;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar2 * 0x20,&uStack_c8);
    func_0x000107c61174(lVar4);
    while( true ) {
      lVar4 = lStack_d0;
      uStack_98 = uStack_c8;
      lStack_a0 = lStack_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_80 = uStack_b0;
      if (lStack_d0 == 0) {
        func_0x000107c61574(param_1);
        return;
      }
      func_0x000100102924(&uStack_98,&lStack_d0);
      plStack_100 = &lStack_d0;
      puStack_f8 = &stack0xffffffffffffff90;
      plStack_e0 = &lStack_d0;
      puStack_d8 = &stack0xffffffffffffff90;
      func_0x00010405b76c(param_2,auStack_f0,param_3,auStack_110);
      func_0x000107c61170(lVar4);
      func_0x000100183ab8(&lStack_d0);
      lVar4 = lVar5;
      if (uVar6 != 0) break;
LAB_10144718c:
      uVar2 = uVar3;
      if ((long)uVar3 <= lVar4 + 1) {
        uVar2 = lVar4 + 1;
      }
      while( true ) {
        lVar5 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101447290);
          (*pcVar1)();
        }
        if ((long)uVar3 <= lVar5) break;
        uVar6 = ((ulong *)(param_1 + 0x40))[lVar5];
        lVar4 = lVar4 + 1;
        if (uVar6 != 0) goto LAB_1014471bc;
      }
      uVar6 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar5 = uVar2 - 1;
    }
  } while( true );
}



/* Entry: 101447290; end: 1014472ef; -[_TtC46ActivationNetworkLoggingServicesImplementation35ActivationNetworkLoggingServiceImpl init] */

void FUN_101447290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivationNetworkLoggingServicesImplementation.ActivationNetworkLoggingServiceImpl"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014472bc);
  (*pcVar1)();
}



/* Entry: 1014472f0; end: 1014473f7; -[_TtC46ActivationNetworkLoggingServicesImplementation35ActivationNetworkLoggingServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010144735c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010144737c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010144739c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101447380) */
/* WARNING: Removing unreachable block (ram,0x000101447360) */
/* WARNING: Removing unreachable block (ram,0x0001014473a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014472f0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d9f3f0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d9f3f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d9f3e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d9f400));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d9f408));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9f410));
  return;
}



/* Entry: 1014473f8; end: 10144744f;  */

void FUN_1014473f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101447450; end: 10144750b;  */

undefined1  [16] FUN_101447450(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010405b7fc(0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10144750c; end: 10144756f;  */

void FUN_10144750c(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101447570; end: 1014476e3;  */

void FUN_101447570(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101447660);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101447af0(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101447624);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10144782c(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x00010144767c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010144767c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014476e4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1014476e4; end: 10144782b;  */

void FUN_1014476e4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_4;
  uVar3 = param_3;
  FUN_1014473f8();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014477ac);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_5 = param_5 & 1;
    FUN_101447d84(lVar5);
    uVar2 = param_4;
    FUN_1014473f8();
    if (((uint)uVar3 & 1) != (param_5 & 1)) {
      func_0x000107c60624(&UNK_11073b1b0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101447784);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_10144798c();
    lVar5 = *unaff_x20;
    goto joined_r0x0001014477c0;
  }
  lVar5 = *unaff_x20;
joined_r0x0001014477c0:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_4;
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x18);
    *puVar6 = param_2;
    puVar6[1] = param_3;
    puVar6[2] = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10144782c);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x18);
    *puVar6 = param_2;
    puVar6[1] = param_3;
    puVar6[2] = param_1;
  }
  return;
}



/* Entry: 10144782c; end: 10144798b;  */

void FUN_10144782c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1014478f8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_1014478f8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10144798c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101447964;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101447964:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10144798c; end: 101447aef;  */

void FUN_10144798c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x112d9f3c0,&UNK_10d93fc98);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_101447a64;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9 * 0x18);
        uVar11 = puVar2[2];
        uVar13 = puVar2[1];
        uVar12 = *puVar2;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar9 * 0x18);
        puVar2[1] = uVar13;
        *puVar2 = uVar12;
        puVar2[2] = uVar11;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_101447a64:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101447af0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_101447ad0;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_101447ad0:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101447af0; end: 101447d83;  */

void FUN_101447af0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101447d50:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101447d80);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101447d50;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101447d84);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101447d84; end: 10144801b;  */

void FUN_101447d84(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_b8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112d9f3c0;
  func_0x0001000285a8(0x112d9f3c0,&UNK_10d93fc98);
  lVar6 = lVar14;
  func_0x000107c60490(lVar14,lVar1,param_2,uVar5);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_101447fe4:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar6;
    return;
  }
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar6 + 0x40;
  lVar8 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101448018);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          goto LAB_101447fe4;
        }
        uVar15 = puVar16[lVar18];
        lVar8 = lVar8 + 1;
      } while (uVar15 == 0);
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar18 << 6;
    uVar17 = *(ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 8);
    puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 0x18);
    uVar19 = puVar9[2];
    uVar5 = *puVar9;
    uVar2 = puVar9[1];
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar6 + 0x28));
    uVar12 = uVar17;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar7 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10144801c);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar12 != uVar7) {
          uVar10 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar7 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar10 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = uVar17;
    puVar9 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar7 * 0x18);
    *puVar9 = uVar5;
    puVar9[1] = uVar2;
    puVar9[2] = uVar19;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar18;
  } while( true );
}



/* Entry: 10144801c; end: 101448123;  */

undefined * FUN_10144801c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101448124);
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
    puVar3 = (undefined *)0x112d9f488;
    func_0x0001000285a8(0x112d9f488,&UNK_10d93fe28);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1103b9c78);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101448124; end: 10144819f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101448124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  lVar2 = param_11;
  func_0x000107c614f0();
  lVar1 = _DAT_112d9f3f0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101444718();
  *(undefined **)(param_11 + lVar1) = puVar3;
  lVar1 = _DAT_112d9f3f8;
  func_0x00010144472c();
  *(undefined **)(param_11 + lVar1) = puVar4;
  *(undefined8 *)(param_11 + _DAT_112d9f3e8) = param_1;
  *(undefined8 *)(param_11 + _DAT_112d9f400) = param_9;
  *(undefined8 *)(param_11 + _DAT_112d9f408) = param_2;
  *(undefined8 *)(param_11 + _DAT_112d9f410) = param_10;
  *(undefined8 *)(param_11 + _DAT_112d9f418) = param_3;
  *(undefined8 *)(param_11 + _DAT_112d9f420) = param_4;
  *(undefined8 *)(param_11 + _DAT_112d9f428) = param_5;
  *(undefined8 *)(param_11 + _DAT_112d9f430) = param_6;
  *(undefined8 *)(param_11 + _DAT_112d9f438) = param_7;
  *(undefined8 *)(param_11 + _DAT_112d9f440) = param_8;
  lStack_70 = param_11;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014481a0; end: 1014482cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014481a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_11;
  func_0x000107c614f0();
  lVar1 = _DAT_112d9f3f0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101444718();
  *(undefined **)(param_11 + lVar1) = puVar3;
  lVar1 = _DAT_112d9f3f8;
  func_0x00010144472c();
  *(undefined **)(param_11 + lVar1) = puVar4;
  *(undefined8 *)(param_11 + _DAT_112d9f3e8) = param_1;
  *(undefined8 *)(param_11 + _DAT_112d9f400) = param_9;
  *(undefined8 *)(param_11 + _DAT_112d9f408) = param_2;
  *(undefined8 *)(param_11 + _DAT_112d9f410) = param_10;
  *(undefined8 *)(param_11 + _DAT_112d9f418) = param_3;
  *(undefined8 *)(param_11 + _DAT_112d9f420) = param_4;
  *(undefined8 *)(param_11 + _DAT_112d9f428) = param_5;
  *(undefined8 *)(param_11 + _DAT_112d9f430) = param_6;
  *(undefined8 *)(param_11 + _DAT_112d9f438) = param_7;
  *(undefined8 *)(param_11 + _DAT_112d9f440) = param_8;
  lStack_70 = param_11;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014482d0; end: 1014483f7;  */

void FUN_1014482d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar3 = *param_2;
  func_0x0001000bb420(param_1,auStack_50);
  uVar1 = 0;
  FUN_101448c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if ((int)puVar2 != 0) {
    func_0x000107c49820(uStack_58);
    func_0x000107c61170(uStack_58);
    func_0x000107c535f0(uVar3);
  }
  return;
}



/* Entry: 1014483f8; end: 101448437;  */

bool FUN_1014483f8(double param_1,double param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_1 == param_2 && (param_3 == param_5 && param_4 == param_6);
}



/* Entry: 101448438; end: 101448473;  */

void FUN_101448438(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101448474; end: 101448493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101448474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c40fd4(*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112d9f408));
  FUN_101445ed8(uVar1,uVar3,uVar4,uVar2,uVar5);
  func_0x000101446414(param_1,uVar1,uVar3,uVar4,uVar2,uVar5);
  func_0x000101448a3c(param_1,uVar1,uVar3,uVar2,uVar5);
  return;
}



/* Entry: 101448494; end: 1014484b3;  */

void FUN_101448494(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6d78);
  return;
}



/* Entry: 1014484b4; end: 101448517;  */

int FUN_1014484b4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101448518; end: 101448563;  */

undefined8 * FUN_101448518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101448564; end: 10144859f;  */

undefined8 * FUN_101448564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1014485a0; end: 101448637;  */

int FUN_1014485a0(ulong *param_1,int param_2)

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


