/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10342c90c; end: 10342c923;  */

void FUN_10342c90c(long param_1,long param_2)

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



/* Entry: 10342c924; end: 10342cb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c924(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f681b8);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f681c0);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f681c8);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f681d0);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f681d8);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f681e0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f681e8);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f681f0);
  uVar1 = *(undefined1 *)(lVar8 + _DAT_113071150);
  lVar3 = 0;
  FUN_10342c628();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar5 = lVar4 + _DAT_112f68170;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined8 *)(lVar4 + _DAT_112f68140) = uVar15;
  *(undefined8 *)(lVar4 + _DAT_112f68148) = uVar14;
  *(undefined8 *)(lVar4 + _DAT_112f68150) = uVar13;
  *(undefined8 *)(lVar4 + _DAT_112f68158) = uVar12;
  *(undefined8 *)(lVar4 + _DAT_112f68160) = uVar11;
  *(undefined8 *)(lVar4 + _DAT_112f68168) = uVar10;
  *(undefined ***)(lVar5 + 8) = &PTR_DAT_1106542b8;
  func_0x000107c61604();
  *(undefined8 *)(lVar4 + _DAT_112f68178) = uVar9;
  *(undefined1 *)(lVar4 + _DAT_112f68180) = uVar1;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c615f0(uVar15);
  func_0x000107c615f0(uVar14);
  func_0x000107c615f0(uVar13);
  func_0x000107c615f0(uVar12);
  func_0x000107c615f0(uVar11);
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar9);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar2,0,0);
  plVar7 = plVar6;
  func_0x000107c4f044();
  func_0x000107c61180();
  if (plVar7 != (long *)0x0) {
    func_0x000107c53fcc();
    func_0x000107c61170(plVar7);
  }
  func_0x000107c57740(uVar9);
  FUN_10342c1a4();
  func_0x000107c3e2c0(*(undefined8 *)(lVar8 + _DAT_113071140));
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 10342cb38; end: 10342cb97; -[_TtC34SCLensActivityCenterImplementation26LensActivityCenterWorkflow init] */

void FUN_10342cb38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterImplementation.LensActivityCenterWorkflow",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342cb64);
  (*pcVar1)();
}



/* Entry: 10342cb98; end: 10342cc2f; -[_TtC34SCLensActivityCenterImplementation26LensActivityCenterWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010342cbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342cbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342cc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342cbe8) */
/* WARNING: Removing unreachable block (ram,0x00010342cbc8) */
/* WARNING: Removing unreachable block (ram,0x00010342cc08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342cb98(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f681f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f681b8));
  return;
}



/* Entry: 10342cc30; end: 10342cc4f;  */

void FUN_10342cc30(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9ba8);
  return;
}



/* Entry: 10342cc50; end: 10342cdeb;  */

undefined1  [16] FUN_10342cc50(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f14c850);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f14c870);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342cd1c);
  (*pcVar1)();
}



/* Entry: 10342cdec; end: 10342ce1b;  */

void FUN_10342cdec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10342ce1c; end: 10342ce87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ce1c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100340dcc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f682c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10342ce88; end: 10342ce8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ce88(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100340dcc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f682c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10342ce90; end: 10342cedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ce90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f682c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10342cedc; end: 10342d0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10342cedc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x0001048575f8();
  func_0x000107c61574(lVar1);
  puVar3 = &UNK_10dbc3de8;
  func_0x000107c614e0(&UNK_10dbc3de8);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10342d088);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_10342d4a8(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10342d084);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_10342d1c8(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_10342d1c8(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_10342d0a4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_10342d0a4:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  return puVar6;
}



/* Entry: 10342d0d8; end: 10342d0f7;  */

void FUN_10342d0d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10342d0f8; end: 10342d157; -[_TtC42SCLensExplorerBannerProviderPluginRegistry49SCLensExplorerBannerProviderPluginFactoryServices buildSaberPlugins] */

void FUN_10342d0f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10342cedc();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f682f0;
  func_0x0001000285a8(0x112f682f0,&UNK_10dbc3ed8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10342d158; end: 10342d1b7; -[_TtC42SCLensExplorerBannerProviderPluginRegistry49SCLensExplorerBannerProviderPluginFactoryServices init] */

void FUN_10342d158(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerBannerProviderPluginRegistry.SCLensExplorerBannerProviderPluginFactoryServices"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342d184);
  (*pcVar1)();
}



/* Entry: 10342d1b8; end: 10342d1c7; -[_TtC42SCLensExplorerBannerProviderPluginRegistry49SCLensExplorerBannerProviderPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342d1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f682c0));
  return;
}



/* Entry: 10342d1c8; end: 10342d2ef;  */

ulong FUN_10342d1c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10342d2f0);
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
  FUN_10342d2f0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10342d2ec);
      (*pcVar1)();
    }
    FUN_10342d370(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10342d2f0; end: 10342d36f;  */

undefined * FUN_10342d2f0(undefined *param_1,undefined *param_2)

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
    FUN_10342d494();
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



/* Entry: 10342d370; end: 10342d493;  */

long FUN_10342d370(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10342d490);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10342d494);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f682f0;
        func_0x0001000285a8(0x112f682f0,&UNK_10dbc3ed8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f682f0;
      func_0x0001000285a8(0x112f682f0,&UNK_10dbc3ed8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10342d48c);
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



/* Entry: 10342d494; end: 10342d4a7;  */

void FUN_10342d494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f682f8 == (undefined *)0x0 || ((ulong)puRam0000000112f682f8 & 1) != 0) {
    puVar1 = &UNK_10e98d7ae;
    func_0x000107c61518(&UNK_10e98d7ae,0x2f,0,0);
    puRam0000000112f682f8 = puVar1;
  }
  return;
}



/* Entry: 10342d4a8; end: 10342d65b;  */

ulong FUN_10342d4a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342d590);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342d594);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112f67df0;
    func_0x0001000285a8(0x112f67df0,&UNK_10dbc3ad0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
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
    uVar4 = 0x112f67df0;
    func_0x0001000285a8(0x112f67df0,&UNK_10dbc3ad0);
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
  func_0x000107c5fb78(0xd000000000000032,0x800000010f14c900);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10342d65c);
  (*pcVar2)();
}



/* Entry: 10342d65c; end: 10342d66b;  */

undefined1  [16] FUN_10342d65c(void)

{
  return ZEXT816(0x110654388);
}



/* Entry: 10342d66c; end: 10342d6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342d66c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10342da60();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f68320) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10342d6d8; end: 10342d743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342d6d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68320) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10342d744; end: 10342d7a3; -[_TtC45SearchSuggestionsScopedFactoryServiceProvider33SCSearchSuggestionsScopedServices init] */

void FUN_10342d744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchSuggestionsScopedFactoryServiceProvider.SCSearchSuggestionsScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342d770);
  (*pcVar1)();
}



/* Entry: 10342d7a4; end: 10342d7b3; -[_TtC45SearchSuggestionsScopedFactoryServiceProvider33SCSearchSuggestionsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342d7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68320));
  return;
}



/* Entry: 10342d7b4; end: 10342d81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342d7b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110654590;
  func_0x000107c613fc(&UNK_110654590,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10342daf8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10342d820; end: 10342d8bb;  */

void FUN_10342d820(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106544a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106544a0;
  return;
}



/* Entry: 10342d8bc; end: 10342d8f3;  */

void FUN_10342d8bc(long *param_1)

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



/* Entry: 10342d8f4; end: 10342d8fb;  */

undefined8 FUN_10342d8f4(void)

{
  return 0x1b;
}



/* Entry: 10342d8fc; end: 10342da2f;  */

void FUN_10342d8fc(undefined8 *param_1)

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
  puVar1 = &UNK_1106545b8;
  func_0x000107c613fc(&UNK_1106545b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10342dad0;
  func_0x00010058fa64(FUN_10342dad0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10342da30; end: 10342da5f;  */

undefined ** FUN_10342da30(void)

{
  return &PTR_DAT_113066e98;
}



/* Entry: 10342da60; end: 10342da7f;  */

void FUN_10342da60(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9d60);
  return;
}



/* Entry: 10342da80; end: 10342dacf;  */

undefined1  [16] FUN_10342da80(void)

{
  return ZEXT816(0x1106544f0);
}



/* Entry: 10342dad0; end: 10342daf7;  */

void FUN_10342dad0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10342daf8; end: 10342dafb;  */

void FUN_10342daf8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10342dafc; end: 10342db77;  */

void FUN_10342dafc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f68390,&UNK_10dbc41c0);
  func_0x000107c613fc();
  pcVar1 = FUN_10342def8;
  func_0x0001000841fc(FUN_10342def8,param_2);
  func_0x000100084214(&UNK_10dbc4190,0x2f,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10342db78; end: 10342db8f;  */

void FUN_10342db78(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f68390,&UNK_10dbc41c0);
  func_0x000107c613fc();
  pcVar1 = FUN_10342def8;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dbc4190,0x2f,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10342db90; end: 10342def7;  */

void FUN_10342db90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f68398,&UNK_10dbc41c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10342ee04();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10342ee90();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10342d8bc;
  func_0x0001000823a8(FUN_10342d8bc,0);
  func_0x000100082720("SCSearchSuggestionsScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_10342ecb8();
  func_0x000100082720("SearchSuggestionsScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f683a0,&UNK_10dbc41e0);
  puVar6 = &UNK_110654618;
  func_0x000107c613fc(&UNK_110654618,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10342df00;
  func_0x0001000823a8(0x10342df00,puVar6);
  func_0x000100082720("SCSearchSuggestionsEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f683a8,&UNK_10dbc41d0);
  puVar6 = &UNK_110654640;
  func_0x000107c613fc(&UNK_110654640,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10342df0c;
  func_0x0001000823a8(0x10342df0c,puVar6);
  func_0x000100082720("SCSearchSuggestionsScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f68328,&UNK_10dbc3f60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10342df18;
  func_0x0001000823a8(0x10342df18,uVar7);
  func_0x000100082720("SCSearchSuggestionsScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f68318,&UNK_10dbc3f50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10342df20;
  func_0x0001000823a8(0x10342df20,uVar8);
  func_0x000100082720("SCSearchSuggestionsScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110654668;
  func_0x000107c613fc(&UNK_110654668,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10342df28;
  func_0x0001000823a8(0x10342df28,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSearchSuggestionsScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10342def8; end: 10342df2f;  */

void FUN_10342def8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f68398,&UNK_10dbc41c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10342ee04();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10342ee90();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10342d8bc;
  func_0x0001000823a8(FUN_10342d8bc,0);
  func_0x000100082720("SCSearchSuggestionsScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_10342ecb8();
  func_0x000100082720("SearchSuggestionsScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f683a0,&UNK_10dbc41e0);
  puVar6 = &UNK_110654618;
  func_0x000107c613fc(&UNK_110654618,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10342df00;
  func_0x0001000823a8(0x10342df00,puVar6);
  func_0x000100082720("SCSearchSuggestionsEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f683a8,&UNK_10dbc41d0);
  puVar6 = &UNK_110654640;
  func_0x000107c613fc(&UNK_110654640,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10342df0c;
  func_0x0001000823a8(0x10342df0c,puVar6);
  func_0x000100082720("SCSearchSuggestionsScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f68328,&UNK_10dbc3f60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10342df18;
  func_0x0001000823a8(0x10342df18,uVar7);
  func_0x000100082720("SCSearchSuggestionsScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f68318,&UNK_10dbc3f50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10342df20;
  func_0x0001000823a8(0x10342df20,uVar8);
  func_0x000100082720("SCSearchSuggestionsScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110654668;
  func_0x000107c613fc(&UNK_110654668,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10342df28;
  func_0x0001000823a8(0x10342df28,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSearchSuggestionsScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10342df30; end: 10342dfdf;  */

void FUN_10342df30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10342e370();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10342e174(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10342dfe0; end: 10342e04f;  */

undefined8 FUN_10342dfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10342e174(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 10342e050; end: 10342e083;  */

void FUN_10342e050(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10342e084; end: 10342e08b;  */

undefined8 FUN_10342e084(void)

{
  return 0x1b;
}



/* Entry: 10342e08c; end: 10342e10f;  */

void FUN_10342e08c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10342e3b0,param_2,FUN_10342e3b4,param_2,FUN_10342e3dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10342e110; end: 10342e15f;  */

undefined8 FUN_10342e110(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10342e160; end: 10342e173;  */

void FUN_10342e160(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110654680;
  return;
}



/* Entry: 10342e174; end: 10342e353;  */

void FUN_10342e174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f5e9b8,&UNK_10dbb9210);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad250;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f14cb50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f143b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f143b50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10342e354; end: 10342e36f;  */

undefined ** FUN_10342e354(void)

{
  return &PTR_DAT_113066e98;
}



/* Entry: 10342e370; end: 10342e38f;  */

void FUN_10342e370(void)

{
  func_0x000107c61168(&PTR_PTR_112f68418);
  return;
}



/* Entry: 10342e390; end: 10342e3b3;  */

undefined1  [16] FUN_10342e390(void)

{
  return ZEXT816(0x1106546c0);
}



/* Entry: 10342e3b4; end: 10342e3db;  */

void FUN_10342e3b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10342e3dc; end: 10342e3e3;  */

undefined8 FUN_10342e3dc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10342e3e4; end: 10342e41f;  */

void FUN_10342e3e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_10342e420();
  func_0x0001000a7f38("SCSearchSuggestionsScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10342e420; end: 10342e60b;  */

void FUN_10342e420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dac8;
  ppuVar4 = &PTR_DAT_113066e98;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f68488;
  func_0x0001000285a8(0x112f68488,&UNK_10dbc4328);
  func_0x0001000a6ee8(&UNK_1106546c0,
                      "SCSearchSuggestionsEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_10342e680,param_1,uVar2,&UNK_1106546c0,&PTR_DAT_112f683b0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110654710;
  func_0x000107c613fc(&UNK_110654710,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110654530,"SCSearchSuggestionsScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10342e730,puVar3,uVar2,&UNK_110654530,&PTR_DAT_112f68330);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110654738;
  func_0x000107c613fc(&UNK_110654738,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110654960,"SearchSuggestionsScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10342e738,puVar3,uVar2,&UNK_110654960,&PTR_DAT_112f68520);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f68490;
  func_0x0001000285a8(0x112f68490,&UNK_10dbc4330);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10342e60c; end: 10342e67f;  */

void FUN_10342e60c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10342e7ac;
  func_0x0001000823a8(0x10342e7ac,param_3);
  func_0x000100082720("SCSearchSuggestionsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10342e680; end: 10342e687;  */

void FUN_10342e680(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10342e7ac;
  func_0x0001000823a8();
  func_0x000100082720("SCSearchSuggestionsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10342e688; end: 10342e72f;  */

void FUN_10342e688(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110654760;
  func_0x000107c613fc(&UNK_110654760,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10342e7a4;
  func_0x0001000823a8(FUN_10342e7a4,puVar1);
  func_0x000100082720("SCSearchSuggestionsScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10342e730; end: 10342e737;  */

void FUN_10342e730(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110654760;
  func_0x000107c613fc(&UNK_110654760,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10342e7a4;
  func_0x0001000823a8(FUN_10342e7a4,puVar3);
  func_0x000100082720("SCSearchSuggestionsScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10342e738; end: 10342e777;  */

void FUN_10342e738(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10342ef38(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SearchSuggestionsScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10342e778; end: 10342e7a3;  */

void FUN_10342e778(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10342e7a4; end: 10342e7b3;  */

void FUN_10342e7a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106545b8;
  func_0x000107c613fc(&UNK_1106545b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10342dad0;
  func_0x00010058fa64(FUN_10342dad0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10342e7b4; end: 10342e88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10342e7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10342ebc8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f68498) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f684a0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342e890);
  (*pcVar1)();
}



/* Entry: 10342e890; end: 10342e8ef; -[_TtC33SearchSuggestionsScopeGraphBridge48SearchSuggestionsScopeGraphBridgeSaberEntryPoint init] */

void FUN_10342e890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchSuggestionsScopeGraphBridge.SearchSuggestionsScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342e8bc);
  (*pcVar1)();
}



/* Entry: 10342e8f0; end: 10342e927; -[_TtC33SearchSuggestionsScopeGraphBridge48SearchSuggestionsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010342e90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342e910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342e8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68498));
  return;
}



/* Entry: 10342e928; end: 10342e94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342e928(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f684a0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f68498));
  return;
}



/* Entry: 10342e950; end: 10342e96f;  */

void FUN_10342e950(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9e20);
  return;
}



/* Entry: 10342e970; end: 10342e9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10342e970(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f684d0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f684d8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10342e9f8);
  (*pcVar2)();
}



/* Entry: 10342e9f8; end: 10342eadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10342e9f8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f684d0);
  *(undefined **)(unaff_x20 + _DAT_112f684d0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f684d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f684d8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110654880;
  func_0x000107c613fc(&UNK_110654880,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10342eae4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10342eae0; end: 10342eaeb;  */

void FUN_10342eae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10342eaec; end: 10342eb4b; -[_TtC33SearchSuggestionsScopeGraphBridge48SCSearchSuggestionsScopedServicesSaberEntryPoint init] */

void FUN_10342eaec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchSuggestionsScopeGraphBridge.SCSearchSuggestionsScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342eb18);
  (*pcVar1)();
}



/* Entry: 10342eb4c; end: 10342eb83; -[_TtC33SearchSuggestionsScopeGraphBridge48SCSearchSuggestionsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342eb4c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f684d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f684d0));
  return;
}



/* Entry: 10342eb84; end: 10342eb87;  */

void FUN_10342eb84(void)

{
  return;
}



/* Entry: 10342eb88; end: 10342eba7;  */

void FUN_10342eb88(void)

{
  FUN_10342e9f8();
  return;
}



/* Entry: 10342eba8; end: 10342ebc7;  */

void FUN_10342eba8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9ee8);
  return;
}



/* Entry: 10342ebc8; end: 10342ec97;  */

undefined8 FUN_10342ebc8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f68508,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10342ec98();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10342ec98; end: 10342ecb7;  */

void FUN_10342ec98(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9fb0);
  return;
}



/* Entry: 10342ecb8; end: 10342ecd3;  */

void FUN_10342ecb8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f68510,&UNK_10dbc4408);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10342ed40,param_1);
  return;
}



/* Entry: 10342ecd4; end: 10342ed3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ecd4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10342ec98();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f68518) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10342ed40; end: 10342ed47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ed40(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10342ec98();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f68518) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10342ed48; end: 10342ed93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ed48(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68518) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10342ed94; end: 10342edf3; -[_TtC33SearchSuggestionsScopeGraphBridge41SearchSuggestionsScopeGraphBridgeServices init] */

void FUN_10342ed94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchSuggestionsScopeGraphBridge.SearchSuggestionsScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342edc0);
  (*pcVar1)();
}



/* Entry: 10342edf4; end: 10342ee03; -[_TtC33SearchSuggestionsScopeGraphBridge41SearchSuggestionsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342edf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68518));
  return;
}



/* Entry: 10342ee04; end: 10342ee8f;  */

void FUN_10342ee04(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10342ee44,0);
  return;
}



/* Entry: 10342ee90; end: 10342eeab;  */

void FUN_10342ee90(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10342eefc,param_1);
  return;
}



/* Entry: 10342eeac; end: 10342eefb;  */

void FUN_10342eeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10342eefc; end: 10342ef2f;  */

void FUN_10342eefc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10342ef30; end: 10342ef37;  */

undefined8 FUN_10342ef30(void)

{
  return 0x1b;
}



/* Entry: 10342ef38; end: 10342f0af;  */

void FUN_10342ef38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106548c8;
  func_0x000107c613fc(&UNK_1106548c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10342f0b0,puVar1);
  return;
}



/* Entry: 10342f0b0; end: 10342f0b7;  */

void FUN_10342f0b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f68508,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f68508,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106549a0;
  func_0x000107c613fc(&UNK_1106549a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10342f184;
  func_0x00010058fa64(0x10342f184,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10342f0b8; end: 10342f113;  */

void FUN_10342f0b8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f68508,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f68508,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10342f114; end: 10342f18b;  */

undefined ** FUN_10342f114(void)

{
  return &PTR_DAT_113066e98;
}



/* Entry: 10342f18c; end: 10342f1d3; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f18c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68570;
  func_0x000107c61428(param_1 + _DAT_112f68570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10342f1d4; end: 10342f22b; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68570;
  func_0x000107c61428(param_1 + _DAT_112f68570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342f22c; end: 10342f273; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint sCSearchBaseScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f22c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68578;
  func_0x000107c61428(param_1 + _DAT_112f68578,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10342f274; end: 10342f27f; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint setSCSearchBaseScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68578;
  func_0x000107c61428(param_1 + _DAT_112f68578,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10342f280; end: 10342f2c7; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint searchSuggestionsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68580;
  func_0x000107c61428(param_1 + _DAT_112f68580,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10342f2c8; end: 10342f2d3; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint setSearchSuggestionsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68580;
  func_0x000107c61428(param_1 + _DAT_112f68580,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10342f2d4; end: 10342f333;  */

void FUN_10342f2d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10342f334; end: 10342f4ef;  */

/* WARNING: Possible PIC construction at 0x00010342f44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342f470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342f480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342f4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342f484) */
/* WARNING: Removing unreachable block (ram,0x00010342f474) */
/* WARNING: Removing unreachable block (ram,0x00010342f450) */
/* WARNING: Removing unreachable block (ram,0x00010342f4c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f334(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51270();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c51ae4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10342e950();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10342ebc8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10342f4f0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f68498) = lVar5;
      *(long *)(lVar3 + _DAT_112f684a0) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10342f4f0; end: 10342f517; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10342f4f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10342f334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


