/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038781b4; end: 10387820f; -[_TtC21ARBarFeatureLEBrowser42ARBarLensExplorerCategoriesProviderFactory categoriesProviderWithConfiguration:] */

void FUN_1038781b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103877ea4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103878210; end: 10387821f; -[_TtC21ARBarFeatureLEBrowser42ARBarLensExplorerCategoriesProviderFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4790),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 103878220; end: 103878263;  */

long FUN_103878220(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103878264; end: 1038782c3; -[_TtC21ARBarFeatureLEBrowser33ARBarLensExplorerDataStoreFactory init] */

void FUN_103878264(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLensExplorerDataStoreFactory",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103878290);
  (*pcVar1)();
}



/* Entry: 1038782c4; end: 10387832f; -[_TtC21ARBarFeatureLEBrowser33ARBarLensExplorerDataStoreFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038782f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103878310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038782f4) */
/* WARNING: Removing unreachable block (ram,0x000103878314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038782c4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa47e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa47f0));
  return;
}



/* Entry: 103878330; end: 10387834f;  */

void FUN_103878330(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5af8);
  return;
}



/* Entry: 103878350; end: 103878787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878350(undefined **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110f30a78;
  lVar11 = param_2;
  func_0x000107c5faec();
  lVar4 = lVar11;
  if (param_1 == ppuVar2 && param_2 == lVar11) {
LAB_103878474:
    func_0x000107c6142c(lVar4);
  }
  else {
    ppuVar3 = param_1;
    lVar4 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar11,0);
    func_0x000107c6142c(lVar11);
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f30b98;
      func_0x000107c5faec();
      if (param_1 == ppuVar2 && param_2 == lVar4) goto LAB_103878474;
      ppuVar3 = param_1;
      lVar11 = param_2;
      func_0x000107c605b8(param_1,param_2,ppuVar2,lVar4,0);
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar3 & 1) == 0) {
        lVar10 = *(long *)(unaff_x20 + _DAT_112fa47f8);
        lVar4 = lVar11;
        if (lVar10 != 0) {
          ppuVar3 = *(undefined ***)(lVar10 + 0x10);
          func_0x000107c3f70c();
          func_0x000107c61180();
          ppuVar2 = ppuVar3;
          func_0x000107c5faec();
          lVar4 = lVar11;
          func_0x000107c61170(ppuVar3);
          if (param_1 == ppuVar2 && param_2 == lVar11) {
            func_0x000107c6142c(lVar11);
          }
          else {
            ppuVar3 = param_1;
            lVar4 = param_2;
            func_0x000107c605b8(param_1,param_2,ppuVar2,lVar11,0);
            func_0x000107c6142c(lVar11);
            if (((ulong)ppuVar3 & 1) == 0) goto LAB_103878614;
          }
          if (*(char *)(lVar10 + 0x30) == '\x01') {
            uVar8 = *(undefined8 *)(lVar10 + 0x20);
            func_0x000107c61174();
            lVar10 = 0;
            FUN_10387dfac();
            lVar4 = lVar10;
            func_0x000107c610f8();
            lVar11 = _DAT_112fa4c90;
            uStack_51 = 0;
            func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
            func_0x000107c613fc();
            func_0x000107c61434(param_2);
            puVar5 = &uStack_51;
            func_0x00010006c248();
            *(undefined1 **)(lVar4 + lVar11) = puVar5;
            plVar6 = (long *)(lVar4 + _DAT_112fa4c78);
            *plVar6 = (long)param_1;
            plVar6[1] = param_2;
            *(undefined8 *)(lVar4 + _DAT_112fa4c80) = uVar8;
            puVar1 = (undefined8 *)(lVar4 + _DAT_112fa4c88);
            *puVar1 = 0x103878900;
            puVar1[1] = 0;
            plVar6 = &lStack_78;
            puVar7 = PTR_s_init_1125d9248;
            lStack_78 = lVar4;
            lStack_70 = lVar10;
            goto LAB_103878534;
          }
        }
LAB_103878614:
        lVar11 = *(long *)(unaff_x20 + _DAT_112fa4800);
        if (lVar11 == 0) {
LAB_103878744:
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa47e8);
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c4b160(uVar8);
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          return;
        }
        ppuVar3 = *(undefined ***)(lVar11 + 0x10);
        func_0x000107c3f70c();
        func_0x000107c61180();
        ppuVar2 = ppuVar3;
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar3);
        if (param_1 == ppuVar2 && param_2 == lVar4) {
          func_0x000107c6142c(lVar4);
        }
        else {
          ppuVar3 = param_1;
          func_0x000107c605b8(param_1,param_2,ppuVar2,lVar4,0);
          func_0x000107c6142c(lVar4);
          if (((ulong)ppuVar3 & 1) == 0) goto LAB_103878744;
        }
        if (*(char *)(lVar11 + 0x30) != '\x01') goto LAB_103878744;
        uVar8 = *(undefined8 *)(lVar11 + 0x20);
        func_0x000107c61174();
        lVar10 = 0;
        FUN_10387dfac();
        lVar4 = lVar10;
        func_0x000107c610f8();
        lVar11 = _DAT_112fa4c90;
        uStack_51 = 0;
        func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
        func_0x000107c613fc();
        func_0x000107c61434(param_2);
        puVar5 = &uStack_51;
        func_0x00010006c248();
        *(undefined1 **)(lVar4 + lVar11) = puVar5;
        plVar6 = (long *)(lVar4 + _DAT_112fa4c78);
        *plVar6 = (long)param_1;
        plVar6[1] = param_2;
        *(undefined8 *)(lVar4 + _DAT_112fa4c80) = uVar8;
        puVar1 = (undefined8 *)(lVar4 + _DAT_112fa4c88);
        *puVar1 = 0x103878904;
        puVar1[1] = 0;
        plVar6 = &lStack_68;
        puVar7 = PTR_s_init_1125d9248;
        lStack_68 = lVar4;
        lStack_60 = lVar10;
        goto LAB_103878534;
      }
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa47f0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4808);
  lVar10 = 0;
  FUN_10387b9ac();
  uVar9 = puVar1[1];
  uVar13 = puVar1[1];
  uVar12 = *puVar1;
  lVar4 = lVar10;
  func_0x000107c610f8();
  lVar11 = _DAT_112fa4b90;
  uStack_51 = 1;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar5 = &uStack_51;
  func_0x00010006c248();
  *(undefined1 **)(lVar4 + lVar11) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112fa4b80) = uVar8;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa4b88);
  puVar1[1] = uVar13;
  *puVar1 = uVar12;
  puVar7 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar10;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  plVar6 = &lStack_88;
LAB_103878534:
  func_0x000107c61154(plVar6,puVar7);
  return;
}



/* Entry: 103878788; end: 103878863; -[_TtC21ARBarFeatureLEBrowser33ARBarLensExplorerDataStoreFactory lensFeedDataStoreWithSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878788(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c5faec();
  func_0x000107c61174();
  FUN_103878350(param_3,param_2);
  if (*(char *)(param_1 + _DAT_112fa4810) == '\x01') {
    lVar2 = 0;
    FUN_10387c63c();
    lVar3 = lVar2;
    func_0x000107c610f8();
    lVar1 = _DAT_112fa4c08;
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar3 + lVar1) = puVar4;
    *(undefined1 **)(lVar3 + _DAT_112fa4c00) = param_3;
    lStack_50 = lVar3;
    lStack_48 = lVar2;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    param_3 = (undefined1 *)plVar5;
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103878864; end: 1038788c7;  */

undefined * FUN_103878864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x0001002ed07c(0);
  uVar2 = 0;
  func_0x000107c6010c(0);
  func_0x000107c451b0(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 1038788c8; end: 1038788ef; -[_TtC21ARBarFeatureLEBrowser33ARBarLensExplorerDataStoreFactory remoteStateProviderForSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038788c8(long param_1)

{
  func_0x000107c4fe4c(*(undefined8 *)(param_1 + _DAT_112fa47e8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038788f0; end: 103878907; -[_TtC21ARBarFeatureLEBrowser33ARBarLensExplorerDataStoreFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038788f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa47e8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 103878908; end: 103878973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103878908(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa4840;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fa4840);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103878974; end: 103878b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa4840) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4848);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4850) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4858) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4860) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4868);
  uVar2 = *param_6;
  uVar4 = param_6[3];
  uVar3 = param_6[2];
  puVar1[1] = param_6[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = param_6[4];
  puVar1[5] = param_6[5];
  puVar1[4] = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4870) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4878) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112fa4880) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103878b74; end: 103878ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878b74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa4850);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa4858);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa4860);
  puVar3 = &UNK_1106a02e0;
  func_0x000107c613fc(&UNK_1106a02e0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112fa4880);
  lVar4 = 0;
  FUN_103878330();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112fa47e8) = param_1;
  *(undefined8 *)(lVar5 + _DAT_112fa47f0) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112fa47f8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112fa4800) = uVar6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fa4808);
  *puVar1 = 0x103879738;
  puVar1[1] = puVar3;
  *(undefined1 *)(lVar5 + _DAT_112fa4810) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c6157c(uVar8);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103878ca4; end: 103878e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103878ca4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa4850);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(&puStack_70);
  func_0x000107c61574(uVar6);
  if (puStack_70 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    puVar5 = (undefined *)0x1;
    func_0x000107c6010c(1);
    func_0x000107c451b0(puVar4);
    func_0x000107c61180();
  }
  else {
    puVar1 = puStack_70;
    func_0x000107c4b2e0(puStack_70);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_70);
    puVar5 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = puVar1;
    func_0x000107c5c6c0(puVar1);
    func_0x000107c61180();
    puVar4 = &UNK_1106a0308;
    func_0x000107c613fc(&UNK_1106a0308,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    pcStack_50 = FUN_103879714;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101218f4c;
    puStack_58 = &UNK_1106a0320;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar4);
    puVar4 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar2);
    FUN_103878908();
    func_0x000107c3e924(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    puVar4 = puVar5;
    func_0x000107c43bf4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 103878e7c; end: 103878e87; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator decorateDataStoreFactory:] */

void FUN_103878e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103878b74(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103878e88; end: 103879023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103878e88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar13 = *(long *)(unaff_x20 + _DAT_112fa4858);
  if (lVar13 == 0) {
    lStack_80 = *(long *)(unaff_x20 + _DAT_112fa4860);
    if (lStack_80 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112fa4868 + 8) == 0) {
        func_0x000107c615f0();
        return;
      }
      lStack_80 = 0;
    }
  }
  else {
    lStack_80 = *(long *)(unaff_x20 + _DAT_112fa4860);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4868);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar6 = puVar1[3];
  uVar4 = puVar1[4];
  uVar7 = puVar1[5];
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112fa4870);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112fa4878);
  lVar9 = 0;
  FUN_103877e84();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112fa4790) = param_1;
  *(long *)(lVar10 + _DAT_112fa4798) = lVar13;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112fa47a0);
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar6;
  puVar1[4] = uVar4;
  puVar1[5] = uVar7;
  *(long *)(lVar10 + _DAT_112fa47a8) = lStack_80;
  *(undefined8 *)(lVar10 + _DAT_112fa47b0) = uVar12;
  *(undefined8 *)(lVar10 + _DAT_112fa47b8) = uVar11;
  func_0x000107c615f0();
  func_0x00010382597c(uVar2,uVar5,uVar3,uVar6,uVar4,uVar7);
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c6157c(lVar13);
  func_0x000107c6157c(lStack_80);
  func_0x000107c6157c(uVar12);
  func_0x000107c61154(&lStack_70,puVar8);
  return;
}



/* Entry: 103879024; end: 10387902f; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator decorateCategoriesProviderFactory:] */

void FUN_103879024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103878e88(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103879030; end: 1038791cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879030(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fa4858);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112fa4860);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4868);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar6 = puVar1[3];
  uVar4 = puVar1[4];
  uVar7 = puVar1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4848);
  puVar8 = &UNK_1106a02e0;
  func_0x000107c613fc(&UNK_1106a02e0,0x18,7);
  lVar9 = 0;
  FUN_103879838();
  uVar11 = puVar1[1];
  uVar15 = puVar1[1];
  uVar14 = *puVar1;
  func_0x000107c61614(puVar8 + 0x10);
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112fa48c0) = param_1;
  *(undefined8 *)(lVar10 + _DAT_112fa48c8) = uVar13;
  *(undefined8 *)(lVar10 + _DAT_112fa48d0) = uVar12;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112fa48d8);
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar6;
  puVar1[4] = uVar4;
  puVar1[5] = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112fa48e0) = param_2;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112fa48e8);
  puVar1[1] = uVar15;
  *puVar1 = uVar14;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112fa48f0);
  *puVar1 = FUN_10387926c;
  puVar1[1] = puVar8;
  func_0x00010382597c(uVar2,uVar5,uVar3,uVar6,uVar4);
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar12);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar8);
  return;
}



/* Entry: 1038791d0; end: 10387926b;  */

undefined * FUN_1038791d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    puVar2 = (undefined *)0x1;
    func_0x000107c6010c(1);
    func_0x000107c451b0(puVar1);
    func_0x000107c61180();
  }
  else {
    puVar1 = puVar2;
    FUN_103878ca4();
  }
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10387926c; end: 103879283;  */

void FUN_10387926c(void)

{
  FUN_1038791d0();
  return;
}



/* Entry: 103879284; end: 1038792f7; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator decorateQueryCoordinatorFactory:auxiliaryNamespaceWriter:] */

void FUN_103879284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103879030(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038792f8; end: 1038794ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038792f8(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_e0 [80];
  long alStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112fa4858);
  alStack_90[1] = *(undefined8 *)(unaff_x20 + _DAT_112fa4860);
  alStack_90[0] = lVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(lVar8);
  lVar8 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lVar8 != 2) {
    lVar9 = alStack_90[lVar8];
    lVar8 = lVar8 + 1;
    if (lVar9 != 0) {
      func_0x000107c6157c(lVar9);
      puVar4 = puVar5;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
         (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar3 = puVar5;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_103873fac(0,puVar3 + 1,1,puVar5);
      }
      uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar7 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar2) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_103873fac(puVar5,uVar2 + 1,1,puVar4);
        uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
      *(long *)(uVar7 + uVar2 * 8 + 0x20) = lVar9;
    }
  }
  uVar6 = 0x112fa4888;
  func_0x0001000285a8(0x112fa4888,&UNK_10dc17fb0);
  func_0x000107c61408(alStack_90,2,uVar6);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar4 = puVar5;
    }
    func_0x000107c60480();
  }
  if ((puVar4 == (undefined *)0x0) && (*(long *)(unaff_x20 + _DAT_112fa4868 + 8) == 0)) {
    func_0x000107c6142c(puVar5);
    func_0x000107c615f0(param_1);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4868);
    alStack_90[3] = puVar1[1];
    alStack_90[2] = *puVar1;
    uStack_68 = puVar1[3];
    uStack_70 = puVar1[2];
    uStack_58 = puVar1[5];
    uStack_60 = puVar1[4];
    FUN_103879e54(0);
    func_0x000107c610f8();
    func_0x0001038796a4(alStack_90 + 2,auStack_e0);
    uVar6 = param_1;
    func_0x000107c615f0(param_1);
    FUN_10387a284();
    func_0x000107c615e8(param_1);
    param_1 = uVar6;
  }
  return param_1;
}



/* Entry: 1038794f0; end: 1038794fb; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator decorateSectionConfigurationsDataStore:] */

void FUN_1038794f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1038792f8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038794fc; end: 10387955b;  */

void FUN_1038794fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387955c; end: 1038795ab;  */

void FUN_10387955c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c40808();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1038795ac; end: 10387960b; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator init] */

void FUN_1038795ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLensExplorerQueryContextDecorator",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038795d8);
  (*pcVar1)();
}



/* Entry: 10387960c; end: 1038796f3; -[_TtC21ARBarFeatureLEBrowser38ARBarLensExplorerQueryContextDecorator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387960c(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4850));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4848 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4858));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4860));
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa4868);
  func_0x000103825a6c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4870));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa4840));
  return;
}



/* Entry: 1038796f4; end: 103879713;  */

void FUN_1038796f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5be0);
  return;
}



/* Entry: 103879714; end: 10387973b;  */

void FUN_103879714(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40808();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10387973c; end: 10387979b; -[_TtC21ARBarFeatureLEBrowser40ARBarLensExplorerQueryCoordinatorFactory init] */

void FUN_10387973c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLensExplorerQueryCoordinatorFactory",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103879768);
  (*pcVar1)();
}



/* Entry: 10387979c; end: 103879837; -[_TtC21ARBarFeatureLEBrowser40ARBarLensExplorerQueryCoordinatorFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038797c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103879818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038797cc) */
/* WARNING: Removing unreachable block (ram,0x00010387981c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387979c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa48c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa48c8));
  return;
}



/* Entry: 103879838; end: 103879857;  */

void FUN_103879838(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5ce0);
  return;
}



/* Entry: 103879858; end: 103879d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879858(undefined **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110f30a78;
  lVar11 = param_2;
  func_0x000107c5faec();
  lVar7 = lVar11;
  if (param_1 == ppuVar3 && param_2 == lVar11) {
LAB_10387997c:
    func_0x000107c6142c(lVar7);
  }
  else {
    ppuVar4 = param_1;
    lVar7 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar3,lVar11,0);
    func_0x000107c6142c(lVar11);
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f30b98;
      func_0x000107c5faec();
      if (param_1 == ppuVar3 && param_2 == lVar7) goto LAB_10387997c;
      ppuVar4 = param_1;
      lVar11 = param_2;
      func_0x000107c605b8(param_1,param_2,ppuVar3,lVar7,0);
      func_0x000107c6142c(lVar7);
      if (((ulong)ppuVar4 & 1) == 0) {
        lVar10 = *(long *)(unaff_x20 + _DAT_112fa48c8);
        lVar7 = lVar11;
        if (lVar10 != 0) {
          ppuVar4 = *(undefined ***)(lVar10 + 0x10);
          func_0x000107c3f70c();
          func_0x000107c61180();
          ppuVar3 = ppuVar4;
          func_0x000107c5faec();
          lVar7 = lVar11;
          func_0x000107c61170(ppuVar4);
          if (param_1 == ppuVar3 && param_2 == lVar11) {
            func_0x000107c6142c(lVar11);
          }
          else {
            ppuVar4 = param_1;
            lVar7 = param_2;
            func_0x000107c605b8(param_1,param_2,ppuVar3,lVar11,0);
            func_0x000107c6142c(lVar11);
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_103879aec;
          }
          if (*(char *)(lVar10 + 0x30) == '\x01') {
            uVar8 = *(undefined8 *)(lVar10 + 0x28);
            puVar6 = &UNK_1106a0380;
            func_0x000107c613fc(&UNK_1106a0380,0x18,7);
            *(undefined8 *)(puVar6 + 0x10) = uVar8;
            puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa48f0);
            lVar7 = 0;
            FUN_10387c2d4();
            func_0x000107c615f0(uVar8);
            uVar8 = puVar2[1];
            uVar12 = puVar2[1];
            uVar9 = *puVar2;
            lVar11 = lVar7;
            func_0x000107c610f8();
            *(undefined8 *)(lVar11 + _DAT_112fa4bd0) = 0;
            puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc0);
            *puVar2 = 0x103879da4;
            puVar2[1] = puVar6;
            puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc8);
            puVar2[1] = uVar12;
            *puVar2 = uVar9;
            puVar6 = PTR_s_init_1125d9248;
            lStack_80 = lVar11;
            lStack_78 = lVar7;
            func_0x000107c6157c(uVar8);
            plVar5 = &lStack_80;
            goto LAB_103879a10;
          }
        }
LAB_103879aec:
        lVar11 = *(long *)(unaff_x20 + _DAT_112fa48d0);
        if (lVar11 != 0) {
          ppuVar4 = *(undefined ***)(lVar11 + 0x10);
          func_0x000107c3f70c();
          func_0x000107c61180();
          ppuVar3 = ppuVar4;
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar4);
          if (param_1 == ppuVar3 && param_2 == lVar7) {
            func_0x000107c6142c(lVar7);
          }
          else {
            ppuVar4 = param_1;
            func_0x000107c605b8(param_1,param_2,ppuVar3,lVar7,0);
            func_0x000107c6142c(lVar7);
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_103879c1c;
          }
          if (*(char *)(lVar11 + 0x30) == '\x01') {
            uVar8 = *(undefined8 *)(lVar11 + 0x28);
            puVar6 = &UNK_1106a0358;
            func_0x000107c613fc(&UNK_1106a0358,0x18,7);
            *(undefined8 *)(puVar6 + 0x10) = uVar8;
            puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa48f0);
            lVar7 = 0;
            FUN_10387c2d4();
            func_0x000107c615f0(uVar8);
            uVar8 = puVar2[1];
            uVar12 = puVar2[1];
            uVar9 = *puVar2;
            lVar11 = lVar7;
            func_0x000107c610f8();
            *(undefined8 *)(lVar11 + _DAT_112fa4bd0) = 0;
            puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc0);
            *puVar2 = 0x103879dac;
            puVar2[1] = puVar6;
            puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc8);
            puVar2[1] = uVar12;
            *puVar2 = uVar9;
            puVar6 = PTR_s_init_1125d9248;
            lStack_70 = lVar11;
            lStack_68 = lVar7;
            func_0x000107c6157c(uVar8);
            plVar5 = &lStack_70;
            goto LAB_103879a10;
          }
        }
LAB_103879c1c:
        lVar11 = unaff_x20 + _DAT_112fa48d8;
        if (*(long *)(lVar11 + 8) == 0) {
LAB_103879ce8:
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa48c0);
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c4b3a0(uVar8);
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          return;
        }
        if ((((param_1 != *(undefined ***)(lVar11 + 0x10)) || (*(long *)(lVar11 + 0x18) != param_2))
            && (ppuVar3 = param_1,
               func_0x000107c605b8(param_1,param_2,*(undefined ***)(lVar11 + 0x10),
                                   *(long *)(lVar11 + 0x18),0), ((ulong)ppuVar3 & 1) == 0)) ||
           (lVar11 = *(long *)(unaff_x20 + _DAT_112fa48e0), lVar11 == 0)) goto LAB_103879ce8;
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa48c0);
        func_0x000107c615f0(lVar11);
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c4b3a0();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        lVar10 = 0;
        FUN_10387f73c();
        lVar7 = lVar10;
        func_0x000107c610f8();
        *(undefined8 *)(lVar7 + _DAT_112fa4d00) = uVar8;
        *(long *)(lVar7 + _DAT_112fa4d08) = lVar11;
        plVar5 = &lStack_60;
        puVar6 = PTR_s_init_1125d9248;
        lStack_60 = lVar7;
        lStack_58 = lVar10;
        goto LAB_103879a10;
      }
    }
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa48e8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa48f0);
  lVar7 = 0;
  FUN_10387c2d4();
  uVar8 = puVar1[1];
  uVar15 = puVar1[1];
  uVar14 = *puVar1;
  uVar9 = puVar2[1];
  uVar13 = puVar2[1];
  uVar12 = *puVar2;
  lVar11 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar11 + _DAT_112fa4bd0) = 0;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc0);
  puVar2[1] = uVar13;
  *puVar2 = uVar12;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112fa4bc8);
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  puVar6 = PTR_s_init_1125d9248;
  lStack_90 = lVar11;
  lStack_88 = lVar7;
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  plVar5 = &lStack_90;
LAB_103879a10:
  func_0x000107c61154(plVar5,puVar6);
  return;
}



/* Entry: 103879d2c; end: 103879d93; -[_TtC21ARBarFeatureLEBrowser40ARBarLensExplorerQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_103879d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103879858(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103879d94; end: 103879daf; -[_TtC21ARBarFeatureLEBrowser40ARBarLensExplorerQueryCoordinatorFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa48c0),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 103879db0; end: 103879e0f; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore init] */

void FUN_103879db0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLensExplorerSectionConfigurationsDataStore",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103879ddc);
  (*pcVar1)();
}



/* Entry: 103879e10; end: 103879e53; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103825a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103825a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103879e10(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4920));
  plVar1 = (long *)(param_1 + _DAT_112fa4928);
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (lVar2,lVar2,plVar1[2],plVar1[3],plVar1[4],plVar1[5],in_x6,in_x7,unaff_x20,unaff_x19,
               unaff_x29,unaff_x30);
    return lVar2;
  }
  return *plVar1;
}



/* Entry: 103879e54; end: 103879e73;  */

void FUN_103879e54(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5dd0);
  return;
}



/* Entry: 103879e74; end: 103879e9b; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore feedConfigurationWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879e74(long param_1)

{
  func_0x000107c42f0c(*(undefined8 *)(param_1 + _DAT_112fa4920));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103879e9c; end: 103879ec3; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore feedConfigurationsWithIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879e9c(long param_1)

{
  func_0x000107c42f10(*(undefined8 *)(param_1 + _DAT_112fa4920));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103879ec4; end: 103879fbb;  */

/* WARNING: Possible PIC construction at 0x000103879f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103879f24) */
/* WARNING: Removing unreachable block (ram,0x000103879f28) */
/* WARNING: Removing unreachable block (ram,0x000103879f2c) */
/* WARNING: Removing unreachable block (ram,0x000103879f64) */
/* WARNING: Removing unreachable block (ram,0x000103879f30) */
/* WARNING: Removing unreachable block (ram,0x000103879f6c) */
/* WARNING: Removing unreachable block (ram,0x000103879f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103879ec4(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112fa4928 + 8) == 0) {
    func_0x000107c61174();
    func_0x000107c5bee0(*(undefined8 *)(unaff_x20 + _DAT_112fa4920));
  }
  else {
    func_0x000107c51b70();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103879fbc; end: 10387a00b; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore storeFeedConfiguration:] */

/* WARNING: Possible PIC construction at 0x000103879ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103879ff8) */

void FUN_103879fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103879ec4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10387a00c; end: 10387a01b; -[_TtC21ARBarFeatureLEBrowser47ARBarLensExplorerSectionConfigurationsDataStore reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387a00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4920),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 10387a01c; end: 10387a283;  */

undefined * FUN_10387a01c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x10);
  lVar1 = lVar11;
  func_0x000107c3f70c();
  func_0x000107c61180();
  lVar3 = lVar1;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    uVar9 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    lVar2 = 0;
    func_0x000107c5faec(0);
    uVar10 = uVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
    lVar3 = 0;
    func_0x000107c5faec(0);
    param_2 = uVar10;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar4 = PTR_PTR_1126ccbc8;
  func_0x000107c610f8(PTR_PTR_1126ccbc8);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c48544(puVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ccf20;
  func_0x000107c610f8(PTR_PTR_1126ccf20);
  func_0x000107c47554();
  func_0x000107c61170(lVar2);
  puVar6 = PTR_PTR_1126ccf18;
  func_0x000107c610f8(PTR_PTR_1126ccf18);
  func_0x000107c47900();
  func_0x000107c61170(lVar11);
  puVar7 = PTR_PTR_1126ccd88;
  func_0x000107c61168(PTR_PTR_1126ccd88);
  func_0x000107c5dd24();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ccd80;
  func_0x000107c610f8(PTR_PTR_1126ccd80);
  func_0x000107c48904(0x3ff0000000000000,0);
  func_0x000107c61170(puVar7);
  puVar7 = PTR_PTR_1126ccc58;
  func_0x000107c610f8(PTR_PTR_1126ccc58);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar6);
  func_0x000107c4854c(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  return puVar7;
}



/* Entry: 10387a284; end: 10387a3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387a284(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa4920) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4928);
  uVar7 = *param_3;
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  uVar7 = param_3[4];
  puVar1[5] = param_3[5];
  puVar1[4] = uVar7;
  if (param_2 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c615f0(param_1);
  }
  else {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10387a3d0);
      (*pcVar2)();
    }
    func_0x000107c615f0(param_1);
    uVar5 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(param_2 + uVar5 * 8 + 0x20);
        func_0x000107c6157c(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_10388a7fc(uVar5,param_2);
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar6;
      FUN_10387a01c(uVar6);
      func_0x000107c5bee0(param_1);
      func_0x000107c61574(uVar6);
      func_0x000107c61170(uVar3);
    } while (uVar4 != uVar5);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10387a3d0; end: 10387a66f;  */

/* WARNING: Possible PIC construction at 0x00010387a588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387a58c) */

void FUN_10387a3d0(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x000107c61434(param_5);
  puVar1 = param_1;
  func_0x000107c4129c();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c3e520();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar3 = puVar2;
    func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar2);
  }
  uVar4 = param_4;
  func_0x000100077018(param_4,param_5,puVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(ulong *)(lVar5 + 0x20) = param_4;
    *(undefined8 *)(lVar5 + 0x28) = param_5;
    func_0x00010109a32c();
    puVar1 = PTR_PTR_1126ccbc8;
    func_0x000107c610f8(PTR_PTR_1126ccbc8);
    func_0x000107c5fadc(param_2,param_3);
    puVar2 = puVar3;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar3);
    func_0x000107c48544(puVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar2);
    puVar3 = param_1;
    func_0x000107c51b70();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c4c010(param_1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c6142c(param_5);
    func_0x000107c6142c(puVar3);
    puVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar1);
  return;
}



/* Entry: 10387a670; end: 10387a6cf; -[_TtC21ARBarFeatureLEBrowser33ARBarOfflineTabCategoriesProvider init] */

void FUN_10387a670(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarOfflineTabCategoriesProvider",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387a69c);
  (*pcVar1)();
}



/* Entry: 10387a6d0; end: 10387a727; -[_TtC21ARBarFeatureLEBrowser33ARBarOfflineTabCategoriesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010387a6fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387a700) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387a6d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4958));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa4960));
  return;
}



/* Entry: 10387a728; end: 10387a747;  */

void FUN_10387a728(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5e98);
  return;
}



/* Entry: 10387a748; end: 10387a77b; -[_TtC21ARBarFeatureLEBrowser33ARBarOfflineTabCategoriesProvider categoriesResponse] */

void FUN_10387a748(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387a77c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387a77c; end: 10387ab9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10387a77c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  undefined1 uStack_51;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa4958);
  func_0x000107c3f6f0(uVar1);
  func_0x000107c61180();
  lVar11 = *(long *)(unaff_x20 + _DAT_112fa4968);
  if (lVar11 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    uVar7 = uVar1;
    func_0x0001000b637c(uVar1);
    puVar8 = &UNK_1106a03a8;
    func_0x000107c613fc(&UNK_1106a03a8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    uVar9 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    pcVar10 = FUN_10387b1a0;
    func_0x0001000bfde0(FUN_10387b1a0,puVar8,uVar9);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar8);
    func_0x0001004575f0();
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    func_0x000107c615f0(lVar11);
    uVar7 = uVar1;
    func_0x0001000b637c(uVar1);
    func_0x0001000285a8(0x112fa44b0,&UNK_10dc17b48);
    lVar2 = lVar11;
    func_0x000107c4d5a4(lVar11);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    pcVar10 = FUN_10387aba0;
    func_0x0001000bfde0(FUN_10387aba0,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar3);
    lVar2 = lVar11;
    func_0x000107c49b8c();
    uStack_51 = (undefined1)lVar2;
    puVar4 = &uStack_51;
    func_0x0001006c71a4(puVar4);
    func_0x000107c61574(pcVar10);
    puVar5 = puVar4;
    func_0x0001006c733c(puVar4);
    puVar6 = &UNK_1106a03a8;
    func_0x000107c613fc(&UNK_1106a03a8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar8 = &UNK_1106a03d0;
    func_0x000107c613fc(&UNK_1106a03d0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10387b1a8;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    uVar9 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    pcVar10 = FUN_10387b1b0;
    func_0x0001000bfde0(FUN_10387b1b0,puVar8,uVar9);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar8);
    func_0x0001004575f0();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar11);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar4);
  }
  func_0x000107c61574(pcVar10);
  return puVar8;
}



/* Entry: 10387aba0; end: 10387ac4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387aba0(byte *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113080b18;
  lVar4 = *param_2;
  func_0x000107c61428(lVar4 + _DAT_113080b18,auStack_48,0x20,0);
  lStack_50 = *(long *)(lVar4 + lVar1);
  if ((lStack_50 + 1U < 6) &&
     (uVar3 = (uint)(lStack_50 + 1U), (0x2fU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    *param_1 = (byte)(0x2c >> (ulong)(uVar3 & 0x1f)) & 1;
    func_0x000107c614a8(auStack_48);
    return;
  }
  func_0x000107c61174(lVar4);
  func_0x000107c60614(&UNK_11077d010,&lStack_50,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10387ac50);
  (*pcVar2)();
}



/* Entry: 10387ac50; end: 10387addf;  */

/* WARNING: Possible PIC construction at 0x00010387ad2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387ad30) */
/* WARNING: Removing unreachable block (ram,0x00010387addc) */
/* WARNING: Removing unreachable block (ram,0x00010387ada4) */

void FUN_10387ac50(long param_1,byte param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = &UNK_1106a03f8;
    func_0x000107c613fc(&UNK_1106a03f8,0x19,7);
    *(long *)(puVar1 + 0x10) = param_3;
    puVar1[0x18] = param_2 & 1;
    puVar2 = &UNK_1106a0420;
    func_0x000107c613fc(&UNK_1106a0420,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10387b1e4;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    uStack_68 = 0x10387b1f0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x1033c6f34;
    puStack_70 = &UNK_1106a0438;
    puStack_60 = puVar2;
    func_0x000107c60bc4(&puStack_88);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10387ade0; end: 10387ae57;  */

void FUN_10387ade0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    func_0x000107c61174();
    lVar2 = param_2;
    FUN_10387ae58();
    func_0x000107c61170(param_2);
    lVar1 = 0;
    FUN_10387b214(0,0x112f627c8,&PTR_PTR_1126cd118);
  }
  *param_1 = lVar2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 10387ae58; end: 10387b177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10387ae58(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  
  lVar15 = unaff_x20 + _DAT_112fa4970;
  uVar1 = *(undefined8 *)(lVar15 + 0x18);
  lVar2 = *(long *)(lVar15 + 0x20);
  func_0x0001000a8868(lVar15,uVar1);
  lVar15 = *(long *)(unaff_x20 + _DAT_112fa4960);
  uVar4 = *(undefined8 *)(lVar15 + 0x10);
  func_0x000107c61174(uVar4);
  uVar5 = param_1;
  func_0x000107c3da44(param_1);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(uVar4,param_2,uVar5,uVar1,lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar5);
  uVar5 = param_1;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar12 = uVar5;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  uVar5 = 0;
  FUN_10387b214(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  uVar9 = uVar12;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar12);
  if (uVar9 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar12 = uVar9;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar12 == 0) {
    func_0x000107c6142c(uVar9);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar5,0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10387b178);
      (*pcVar3)();
    }
    uVar13 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar9 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
        uVar11 = uVar5;
      }
      else {
        uVar6 = uVar13;
        uVar11 = uVar9;
        func_0x000102e2a3b4();
      }
      func_0x000107c61174();
      uVar7 = uVar6;
      func_0x000107c3f70c();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5faec();
      uVar5 = uVar11;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      uVar7 = *(ulong *)(puVar10 + 0x10);
      uVar6 = uVar7 + 1;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar7) {
        uVar5 = uVar6;
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar6,1);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar6;
      *(ulong *)(puVar10 + uVar7 * 0x10 + 0x20) = uVar8;
      *(ulong *)(puVar10 + uVar7 * 0x10 + 0x28) = uVar11;
    } while (uVar12 != uVar13);
    func_0x000107c6142c(uVar9);
  }
  uVar9 = *(ulong *)(lVar15 + 0x10);
  func_0x000107c3f70c();
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  lVar15 = *(long *)(puVar10 + 0x10);
  if (lVar15 != 0) {
    puVar14 = (ulong *)(puVar10 + 0x28);
    do {
      lVar15 = lVar15 + -1;
      uVar9 = puVar14[-1];
      if ((uVar9 == uVar12 && *puVar14 == uVar5) ||
         (func_0x000107c605b8(uVar9,*puVar14,uVar12,uVar5,0), (uVar9 & 1) != 0)) break;
      puVar14 = puVar14 + 2;
    } while (lVar15 != 0);
  }
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(uVar5);
  uVar5 = param_1;
  func_0x000107c3da44(param_1);
  func_0x000107c61180();
  func_0x000107c4ce20(param_1);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126cd118;
  func_0x000107c610f8(PTR_PTR_1126cd118);
  func_0x000107c4564c();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(param_1);
  return puVar10;
}



/* Entry: 10387b178; end: 10387b19f; -[_TtC21ARBarFeatureLEBrowser33ARBarOfflineTabCategoriesProvider categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387b178(long param_1)

{
  func_0x000107c3f6e4(*(undefined8 *)(param_1 + _DAT_112fa4958));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10387b1a0; end: 10387b1af;  */

/* WARNING: Possible PIC construction at 0x00010387aae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387aae4) */
/* WARNING: Removing unreachable block (ram,0x00010387ab9c) */
/* WARNING: Removing unreachable block (ram,0x00010387ab58) */

void FUN_10387b1a0(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    *param_1 = lVar4;
  }
  else {
    puVar2 = &UNK_1106a0470;
    func_0x000107c613fc(&UNK_1106a0470,0x19,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    puVar2[0x18] = 1;
    puVar3 = &UNK_1106a0498;
    func_0x000107c613fc(&UNK_1106a0498,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10387b25c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_78 = 0x10387b260;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    uStack_88 = 0x1033c6f34;
    puStack_80 = &UNK_1106a04b0;
    puStack_70 = puVar3;
    func_0x000107c60bc4(&puStack_98);
    lVar4 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(lVar4);
  return;
}



/* Entry: 10387b1b0; end: 10387b1e3;  */

void FUN_10387b1b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,*(undefined1 *)(param_2 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 10387b1e4; end: 10387b213;  */

void FUN_10387b1e4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_2 == 0) {
    lVar2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(param_2,*(undefined8 *)(unaff_x20 + 0x10));
    lVar2 = param_2;
    FUN_10387ae58();
    func_0x000107c61170(param_2);
    lVar1 = 0;
    FUN_10387b214(0,0x112f627c8,&PTR_PTR_1126cd118);
  }
  *param_1 = lVar2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 10387b214; end: 10387b253;  */

void FUN_10387b214(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10387b254; end: 10387b263;  */

void FUN_10387b254(long param_1,long param_2)

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



/* Entry: 10387b264; end: 10387b653;  */

/* WARNING: Possible PIC construction at 0x00010387b2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387b330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387b360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387b3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387b394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387b3a8) */
/* WARNING: Removing unreachable block (ram,0x00010387b364) */
/* WARNING: Removing unreachable block (ram,0x00010387b39c) */
/* WARNING: Removing unreachable block (ram,0x00010387b368) */
/* WARNING: Removing unreachable block (ram,0x00010387b37c) */
/* WARNING: Removing unreachable block (ram,0x00010387b334) */
/* WARNING: Removing unreachable block (ram,0x00010387b340) */
/* WARNING: Removing unreachable block (ram,0x00010387b390) */
/* WARNING: Removing unreachable block (ram,0x00010387b348) */
/* WARNING: Removing unreachable block (ram,0x00010387b2b8) */
/* WARNING: Removing unreachable block (ram,0x00010387b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010387b3e8) */
/* WARNING: Removing unreachable block (ram,0x00010387b2c4) */
/* WARNING: Removing unreachable block (ram,0x00010387b3f8) */
/* WARNING: Removing unreachable block (ram,0x00010387b2d0) */
/* WARNING: Removing unreachable block (ram,0x00010387b2e0) */
/* WARNING: Removing unreachable block (ram,0x00010387b380) */
/* WARNING: Removing unreachable block (ram,0x00010387b2e8) */
/* WARNING: Removing unreachable block (ram,0x00010387b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010387b2f4) */
/* WARNING: Removing unreachable block (ram,0x00010387b300) */
/* WARNING: Removing unreachable block (ram,0x00010387b3d8) */
/* WARNING: Removing unreachable block (ram,0x00010387b30c) */
/* WARNING: Removing unreachable block (ram,0x00010387b398) */
/* WARNING: Removing unreachable block (ram,0x00010387b3a0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10387b264(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3f6e0();
  func_0x000107c61180();
  uVar1 = 0;
  func_0x000102e2a354(0);
  func_0x000107c5fc54(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10387b654; end: 10387b673;  */

void FUN_10387b654(void)

{
  func_0x000107c61168(&PTR_PTR_112fa49e0);
  return;
}



/* Entry: 10387b674; end: 10387b803;  */

void FUN_10387b674(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  FUN_10387b264(param_3);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf01990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_allowlistCategory__11259e008,param_1);
    return;
  }
  func_0x00010387b41c(param_1,param_3);
  return;
}



/* Entry: 10387b804; end: 10387b847;  */

void FUN_10387b804(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10387b848; end: 10387b887;  */

void FUN_10387b848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10387b264(param_3);
  func_0x00010387b6d4(param_1,param_3);
  return;
}



/* Entry: 10387b888; end: 10387b8a7;  */

void FUN_10387b888(void)

{
  func_0x000107c61168(&PTR_PTR_112fa4b20);
  return;
}



/* Entry: 10387b8a8; end: 10387b8f7;  */

void FUN_10387b8a8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  FUN_10387b264(param_3);
  if ((param_2 & 1) == 0) {
    func_0x00010387b41c(param_1,param_3);
  }
  else {
    func_0x00010387b6d4();
  }
  return;
}



/* Entry: 10387b8f8; end: 10387b8ff;  */

void FUN_10387b8f8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10387b900; end: 10387b95f; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore init] */

void FUN_10387b900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.CarouselLensExplorerDataStore",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387b92c);
  (*pcVar1)();
}



/* Entry: 10387b960; end: 10387b9ab; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010387b97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387b980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387b960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa4b80));
  return;
}



/* Entry: 10387b9ac; end: 10387b9cb;  */

void FUN_10387b9ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5f70);
  return;
}



/* Entry: 10387b9cc; end: 10387ba47; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387b9cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa4b90);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126ccc80;
  func_0x000107c610f8(PTR_PTR_1126ccc80);
  func_0x000107c48aec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10387ba48; end: 10387ba7b; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore allItems] */

void FUN_10387ba48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387ba7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387ba7c; end: 10387bc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10387ba7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lStack_58;
    func_0x000107c4b2e0(lStack_58);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    puVar2 = &UNK_1106a0530;
    func_0x000107c613fc(&UNK_1106a0530,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_68 = FUN_10387bec8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101218f4c;
    puStack_70 = &UNK_1106a0548;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    lVar4 = lVar6;
    func_0x000107c421bc(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar6);
    puVar2 = &UNK_1106a0580;
    func_0x000107c613fc(&UNK_1106a0580,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    puVar5 = &UNK_1106a05a8;
    func_0x000107c613fc(&UNK_1106a05a8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10387beec;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcStack_68 = (code *)0x10387bef0;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10117fbac;
    puStack_70 = &UNK_1106a05c0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    lVar6 = lVar4;
    func_0x000107c4c280(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar4);
  }
  return lVar6;
}



/* Entry: 10387bc40; end: 10387bd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387bc40(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    alStack_60[0] = 0;
    uVar2 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc50(param_1,alStack_60,uVar2);
    lVar1 = alStack_60[0];
    if (alStack_60[0] != 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112fa4b90);
      lStack_50 = alStack_60[0];
      func_0x000107c6157c(uVar2);
      func_0x000100075034(FUN_10387c1c0,alStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar1);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10387bd08; end: 10387bdd7;  */

void FUN_10387bd08(byte *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    bVar4 = 1;
  }
  else {
    uVar3 = uVar2 - 1;
    if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10387bdc4);
      (*pcVar1)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10387bdd4);
        (*pcVar1)();
      }
      if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10387bdd8);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_2 + uVar3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000100ff3f88();
    }
    uVar2 = uVar3;
    func_0x000107c49d7c();
    func_0x000107c61170(uVar3);
    bVar4 = (byte)uVar2 ^ 1;
  }
  *param_1 = bVar4;
  return;
}



/* Entry: 10387bdd8; end: 10387be7b; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore dataStoreIdentifier] */

void FUN_10387bdd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10387be7c; end: 10387bec7; -[_TtC21ARBarFeatureLEBrowser29CarouselLensExplorerDataStore isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387be7c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112fa4b88);
  func_0x000107c61174();
  lVar2 = param_1;
  (*pcVar1)();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10387bec8; end: 10387bef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387bec8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    alStack_60[0] = 0;
    uVar3 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc50(param_1,alStack_60,uVar3);
    lVar1 = alStack_60[0];
    if (alStack_60[0] != 0) {
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112fa4b90);
      lStack_50 = alStack_60[0];
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_10387c1c0,alStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar1);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10387bef8; end: 10387c1bf;  */

undefined * FUN_10387bef8(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  uVar3 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(param_1,&puStack_68,uVar3);
  puVar12 = puStack_68;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar14 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((ulong)puStack_68 >> 0x3e == 0) {
      puVar11 = *(undefined **)(puVar14 + 0x10);
    }
    else {
      puVar11 = puStack_68;
      if (-1 < (long)puStack_68) {
        puVar11 = puVar14;
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar14 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10387c168);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(puVar12 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar4 = puVar10;
            func_0x000100ff3f88(puVar10,puVar12);
          }
          puVar1 = puVar10 + 1;
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387c164);
            (*pcVar2)();
          }
          puVar5 = puVar4;
          func_0x000107c49c88();
          if (((ulong)puVar5 & 1) == 0) break;
          func_0x000107c61170(puVar4);
          puVar10 = puVar10 + 1;
          if (puVar1 == puVar11) goto LAB_10387c058;
        }
        puVar6 = puVar9;
        func_0x000107c61558();
        puStack_68 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001019d4adc(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar13 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar13) {
          func_0x0001019d4adc(1 < *(ulong *)(puStack_68 + 0x18),uVar13 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_68 + uVar13 * 8 + 0x20) = puVar4;
        puVar9 = puStack_68;
        puVar10 = puVar1;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      } while (puVar1 != puVar11);
    }
LAB_10387c058:
    func_0x000107c6142c(puVar12);
    puStack_68 = puVar6;
    FUN_1033ca8f4(0,0,0);
    puVar14 = puStack_68;
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar12 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar12 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar12 != (undefined *)0x0) {
      uVar13 = 0;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387c170);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(puVar9 + uVar13 * 8 + 0x20);
          func_0x000107c61174(uVar7);
        }
        else {
          uVar7 = uVar13;
          func_0x000100ff3f88(uVar13,puVar9);
        }
        puVar11 = (undefined *)(uVar13 + 1);
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10387c16c);
          (*pcVar2)();
        }
        puVar6 = PTR_PTR_1126ccc20;
        func_0x000107c61168();
        uVar8 = uVar13;
        FUN_10388b2b8(uVar13);
        func_0x000107c4b244();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        uVar7 = *(ulong *)(puVar14 + 0x10);
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar7) {
          FUN_1033ca8f4(1 < *(ulong *)(puVar14 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined **)(puStack_68 + uVar7 * 8 + 0x20) = puVar6;
        uVar13 = uVar13 + 1;
        puVar14 = puStack_68;
      } while (puVar11 != puVar12);
    }
    func_0x000107c61574(puVar9);
  }
  return puVar14;
}



/* Entry: 10387c1c0; end: 10387c1d7;  */

void FUN_10387c1c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10387bd08(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10387c1d8; end: 10387c1df;  */

void FUN_10387c1d8(long param_1,long param_2)

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



/* Entry: 10387c1e0; end: 10387c1ef; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator currentQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa4bd0));
  return;
}



/* Entry: 10387c1f0; end: 10387c223; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator setCurrentQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fa4bd0);
  *(undefined8 *)(param_1 + _DAT_112fa4bd0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10387c224; end: 10387c283; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator init] */

void FUN_10387c224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.CarouselLensExplorerQueryCoordinator",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387c250);
  (*pcVar1)();
}



/* Entry: 10387c284; end: 10387c2d3; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c284(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4bc0 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa4bc8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa4bd0));
  return;
}



/* Entry: 10387c2d4; end: 10387c2f3;  */

void FUN_10387c2d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6040);
  return;
}



/* Entry: 10387c2f4; end: 10387c33f; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c2f4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112fa4bc8);
  func_0x000107c61174();
  lVar2 = param_1;
  (*pcVar1)();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10387c340; end: 10387c347; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator isLoading] */

undefined8 FUN_10387c340(void)

{
  return 0;
}



/* Entry: 10387c348; end: 10387c34f; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator canPerformQuery:] */

undefined8 FUN_10387c348(void)

{
  return 1;
}



/* Entry: 10387c350; end: 10387c4e7;  */

/* WARNING: Possible PIC construction at 0x00010387c3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387c3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387c440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387c490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387c4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387c444) */
/* WARNING: Removing unreachable block (ram,0x00010387c3c0) */
/* WARNING: Removing unreachable block (ram,0x00010387c3c8) */
/* WARNING: Removing unreachable block (ram,0x00010387c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010387c3cc) */
/* WARNING: Removing unreachable block (ram,0x00010387c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010387c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010387c3fc) */
/* WARNING: Removing unreachable block (ram,0x00010387c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010387c41c) */
/* WARNING: Removing unreachable block (ram,0x00010387c430) */
/* WARNING: Removing unreachable block (ram,0x00010387c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010387c494) */
/* WARNING: Removing unreachable block (ram,0x00010387c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010387c498) */

void FUN_10387c350(long param_1)

{
  code *pcVar1;
  
  func_0x000107c4f774();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4f798();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387c4e8);
  (*pcVar1)();
}



/* Entry: 10387c4e8; end: 10387c593; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator resultsForQuery:updatingBlock:] */

/* WARNING: Possible PIC construction at 0x00010387c578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387c57c) */

void FUN_10387c4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1106a05f8;
    func_0x000107c613fc(&UNK_1106a05f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x10387c59c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10387c350(param_3,uVar2,puVar1);
  FUN_103170e78(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10387c594; end: 10387c597; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_10387c594(void)

{
  return;
}



/* Entry: 10387c598; end: 10387c5a3; -[_TtC21ARBarFeatureLEBrowser36CarouselLensExplorerQueryCoordinator reset] */

void FUN_10387c598(void)

{
  return;
}



/* Entry: 10387c5a4; end: 10387c603; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore init] */

void FUN_10387c5a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ExclusiveLensFilteringDataStore",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387c5d0);
  (*pcVar1)();
}



/* Entry: 10387c604; end: 10387c63b; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c604(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa4c08));
  return;
}



/* Entry: 10387c63c; end: 10387c65b;  */

void FUN_10387c63c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6110);
  return;
}



/* Entry: 10387c65c; end: 10387c683; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c65c(long param_1)

{
  func_0x000107c4fe48(*(undefined8 *)(param_1 + _DAT_112fa4c00));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


