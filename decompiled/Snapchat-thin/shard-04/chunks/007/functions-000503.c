/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038727e0; end: 1038727eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038727e0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*(ulong *)(*param_1 + _DAT_113080b18) < 5 &&
      (1L << (*(ulong *)(*param_1 + _DAT_113080b18) & 0x3f) & 0x16U) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_103871654();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1038727ec; end: 1038729db;  */

long FUN_1038727ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  puVar4 = &UNK_11069f930;
  func_0x000107c613fc(&UNK_11069f930,0x18,7);
  *(long **)(puVar4 + 0x10) = &lStack_58;
  puVar5 = &UNK_11069f958;
  func_0x000107c613fc(&UNK_11069f958,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1038729dc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_68 = FUN_1038729e4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_102e29eb8;
  puStack_70 = &UNK_11069f970;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_60;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_68 = (code *)0x103872298;
  puStack_60 = (undefined *)0x0;
  puStack_88 = puVar1;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100e27b38;
  puStack_70 = &UNK_11069f998;
  ppuVar7 = &puStack_88;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_60);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  if (lStack_58 == 0) {
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar11 = lStack_58;
    func_0x000107c3f6e0();
    func_0x000107c61180();
    uVar8 = 0;
    func_0x000102e2a354(0);
    lVar10 = lVar11;
    func_0x000107c5fc54(lVar11,uVar8);
    func_0x000107c61170(lVar11);
    lVar11 = lStack_58;
  }
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(lVar11);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x5c,0x91,0x25,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    uVar9 = 0;
    func_0x000107c61544(0,"",0x5c,0x93,0x14,1);
    if ((uVar9 & 1) == 0) {
      return lVar10;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038729dc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038729d8);
  (*pcVar3)();
}



/* Entry: 1038729dc; end: 1038729e3;  */

void FUN_1038729dc(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c3da44();
    func_0x000107c61180();
  }
  lVar2 = *plVar1;
  *plVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1038729e4; end: 103872a03;  */

void FUN_1038729e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103872a04; end: 103872a33;  */

void FUN_103872a04(long param_1,long param_2)

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



/* Entry: 103872a34; end: 103872e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103872a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fa44b8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa44b8,0);
  lVar3 = _DAT_112fa44c0;
  func_0x0001000285a8(0x112f62110,&UNK_10dc14a10);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_112fa44c8;
  uVar4 = 0x112fa4470;
  func_0x0001000285a8(0x112fa4470,&UNK_10dc17990);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined **)(unaff_x20 + _DAT_112fa44d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_112fa44d8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112fa44e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa44e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa44f0) = param_2;
  FUN_103872e1c(param_3,unaff_x20 + _DAT_112fa44f8);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112fa4500) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa4508) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fa4510) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fa4518) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_4);
  func_0x0001000834e4(param_3);
  return puVar5;
}



/* Entry: 103872e1c; end: 103872e5f;  */

long FUN_103872e1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103872e60; end: 103873253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103872e60(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  if (auStack_88[0] != 0) {
    lVar1 = unaff_x20 + _DAT_112fa44f8;
    uVar3 = *(ulong *)(lVar1 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar3);
    (**(code **)(lVar5 + 8))(uVar3,lVar5);
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar4);
      (**(code **)(lVar5 + 0x18))(uVar4,lVar5);
      if ((uVar4 & 1) != 0) {
        lVar5 = unaff_x20 + _DAT_112fa44b8;
        func_0x000107c61618();
        if (lVar5 != 0) {
          uVar4 = auStack_88[0];
          func_0x000107c42b60();
          if ((uVar4 & 1) != 0) {
            func_0x000107c615e8(auStack_88[0]);
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(lVar5);
            return;
          }
          func_0x0001000d224c(auStack_88);
          plVar6 = *(long **)(lVar1 + 0x18);
          lVar2 = *(long *)(lVar1 + 0x20);
          func_0x0001000a8868(lVar1,plVar6);
          (**(code **)(lVar2 + 0x20))(plVar6,lVar2);
          puVar7 = &UNK_11069fa90;
          func_0x000107c613fc(&UNK_11069fa90,0x18,7);
          *(ulong *)(puVar7 + 0x10) = auStack_88[0];
          pcVar11 = *(code **)(*plVar6 + 0x60);
          func_0x000107c615f0(auStack_88[0]);
          uVar8 = 0x103874760;
          puVar10 = puVar7;
          (*pcVar11)();
          func_0x000107c61574(plVar6);
          func_0x000107c61574(puVar7);
          func_0x000107c614f0();
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fa44d8);
          pcVar11 = *(code **)(puVar10 + 0x10);
          func_0x000107c6157c(uVar13);
          (*pcVar11)();
          func_0x000107c615e8(uVar8);
          func_0x000107c61574(uVar13);
          lVar2 = lStack_68;
          uVar8 = uStack_70;
          func_0x0001000a8868(auStack_88,uStack_70);
          (**(code **)(lVar2 + 0x18))(uVar8,lVar2);
          *(undefined1 *)(unaff_x20 + _DAT_112fa44e0) = 0;
          uVar8 = *(undefined8 *)(lVar1 + 0x18);
          lVar2 = *(long *)(lVar1 + 0x20);
          func_0x0001000a8868(lVar1,uVar8);
          (**(code **)(lVar2 + 0x10))(uVar8,lVar2);
          puVar7 = PTR___sSSSQsWP_11034da98;
          func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
          uVar13 = 0;
          func_0x0001038747b4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
          pcVar11 = FUN_103873254;
          func_0x0001000bfde0(FUN_103873254,0,uVar13);
          func_0x000107c61574(puVar7);
          func_0x0001004575f0();
          func_0x000107c61574(pcVar11);
          func_0x0001000a8868(auStack_88,uStack_70);
          uVar13 = uStack_70;
          (**(code **)(lStack_68 + 0x30))(uStack_70,lStack_68);
          func_0x00010436fe50(0);
          func_0x000107c610f8();
          uVar9 = 1;
          func_0x00010436fbe4(1,1,1,0,1);
          uVar12 = 0;
          if (param_2 != 0) {
            func_0x000107c5fadc(param_1,param_2);
            uVar12 = param_1;
          }
          puVar10 = PTR_PTR_1126b1b50;
          func_0x000107c61168(PTR_PTR_1126b1b50);
          func_0x000107c3f6fc();
          func_0x000107c61180();
          func_0x000107c61170(uVar12);
          func_0x000107c4ef60(auStack_88[0]);
          func_0x000107c615e8(auStack_88[0]);
          func_0x000107c615e8(uVar8);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(uVar3);
          func_0x0001000834e4(auStack_88);
          return;
        }
      }
      func_0x000107c615e8(auStack_88[0]);
      auStack_88[0] = uVar3;
    }
    func_0x000107c615e8(auStack_88[0]);
  }
  return;
}



/* Entry: 103873254; end: 10387327f;  */

void FUN_103873254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 103873280; end: 103873393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873280(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa44d0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa44d0,auStack_48,0,0);
  if ((*(long *)(*(long *)(unaff_x20 + lVar1) + 0x10) == 0) &&
     (func_0x0001000d224c(&puStack_78), puVar2 = puStack_78, puStack_78 != (undefined *)0x0)) {
    if ((*(byte *)(unaff_x20 + _DAT_112fa44e0) & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
      if (param_1 != (code *)0x0) {
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_11069fa58;
        ppuVar4 = &puStack_78;
        pcStack_58 = param_1;
        uStack_50 = param_2;
        func_0x000107c60bc4(ppuVar4);
        uVar3 = uStack_50;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(uVar3);
      }
      func_0x000107c42058(puVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(puVar2);
      return;
    }
    func_0x000107c615e8(puStack_78);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 103873394; end: 10387342b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873394(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c42058(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112fa44e0) = 1;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa44d8);
  *(undefined8 *)(unaff_x20 + _DAT_112fa44d8) = uVar1;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10387342c; end: 10387348b; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl init] */

void FUN_10387342c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLEBrowserPresenterImpl",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103873458);
  (*pcVar1)();
}



/* Entry: 10387348c; end: 103873533; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038734a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038734f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038734ac) */
/* WARNING: Removing unreachable block (ram,0x0001038734fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387348c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa44e8));
  return;
}



/* Entry: 103873534; end: 103873543;  */

void FUN_103873534(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 103873544; end: 103873753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873544(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112fa44d0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa44d0,auStack_68,0x21,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar2);
  uVar3 = uVar5;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + lVar2) = uVar5;
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_103873e7c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,0x112fa4558,&UNK_10dc17b90,0x112fa4550,
                  &UNK_10dc17b88);
    *(ulong *)(unaff_x20 + lVar2) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_103873e7c(uVar5,uVar3 + 1,1,uVar4,0x112fa4558,&UNK_10dc17b90,0x112fa4550,&UNK_10dc17b88);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar1 = uVar5 + uVar3 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(unaff_x20 + lVar2) = uVar5;
  func_0x000107c614a8(auStack_68);
  func_0x000107c615f0(param_1);
  return;
}



/* Entry: 103873754; end: 10387391b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112fa44d0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa44d0,auStack_78,0x21,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar3);
  uVar5 = *(ulong *)(uVar10 + 0x10);
  if (uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0x20;
    uVar11 = 0;
    do {
      uVar9 = uVar11 + 1;
      uVar8 = uVar5;
      if (*(long *)(uVar10 + lVar7) == param_1) {
        if (uVar5 - 1 != uVar11) {
          do {
            lVar7 = lVar7 + 0x10;
            if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103873910);
              (*pcVar4)();
            }
            lVar14 = ((long *)(uVar10 + lVar7))[1];
            lVar12 = *(long *)(uVar10 + lVar7);
            if (lVar12 != param_1) {
              if (uVar9 != uVar11) {
                if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103873914);
                  (*pcVar4)();
                }
                puVar2 = (undefined8 *)(uVar10 + 0x20 + uVar11 * 0x10);
                uVar15 = puVar2[1];
                uVar13 = *puVar2;
                func_0x000107c615f0(uVar13);
                func_0x000107c615f0(lVar12);
                uVar5 = uVar10;
                func_0x000107c61558();
                *(ulong *)(unaff_x20 + lVar3) = uVar10;
                if ((uVar5 & 1) == 0) {
                  FUN_10387430c();
                  *(ulong *)(unaff_x20 + lVar3) = uVar10;
                }
                lVar1 = uVar10 + uVar11 * 0x10;
                uVar6 = *(undefined8 *)(lVar1 + 0x20);
                *(long *)(lVar1 + 0x28) = lVar14;
                *(long *)(lVar1 + 0x20) = lVar12;
                func_0x000107c615e8(uVar6);
                *(ulong *)(unaff_x20 + lVar3) = uVar10;
                if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103873918);
                  (*pcVar4)();
                }
                uVar6 = *(undefined8 *)(uVar10 + lVar7);
                ((undefined8 *)(uVar10 + lVar7))[1] = uVar15;
                *(undefined8 *)(uVar10 + lVar7) = uVar13;
                func_0x000107c615e8(uVar6);
                *(ulong *)(unaff_x20 + lVar3) = uVar10;
              }
              uVar11 = uVar11 + 1;
            }
            uVar9 = uVar9 + 1;
            uVar5 = *(ulong *)(uVar10 + 0x10);
            uVar8 = uVar9;
          } while (uVar9 != uVar5);
        }
        uVar5 = uVar11;
        if ((long)uVar8 < (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10387391c);
          (*pcVar4)();
        }
        break;
      }
      lVar7 = lVar7 + 0x10;
      uVar11 = uVar9;
    } while (uVar5 != uVar9);
  }
  func_0x00010387441c(uVar5,uVar8);
  func_0x000107c614a8(auStack_78);
  FUN_103873280(param_3,param_4);
  return;
}



/* Entry: 10387391c; end: 1038739d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387391c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa44d0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa44d0,auStack_38,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar2);
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa44d8);
  *(undefined8 *)(unaff_x20 + _DAT_112fa44d8) = uVar2;
  func_0x000107c61574(uVar3);
  func_0x000104875e28(&uStack_40);
  if (1 < uStack_40) {
    func_0x000107c42058(uStack_40);
    FUN_103873534(uStack_40);
  }
  return;
}



/* Entry: 1038739d8; end: 1038739eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038739d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112fa44c8));
  return;
}



/* Entry: 1038739ec; end: 103873acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1038739ec(void)

{
  ulong uVar1;
  ulong uStack_28;
  
  func_0x000104875e28(&uStack_28);
  if (uStack_28 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = uStack_28;
    func_0x000107c42b60(uStack_28);
    FUN_103873534(uStack_28);
  }
  return uVar1;
}



/* Entry: 103873ad0; end: 103873ad3; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouterDidPresentLensExplorer:] */

void FUN_103873ad0(void)

{
  return;
}



/* Entry: 103873ad4; end: 103873ad7; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_103873ad4(void)

{
  return;
}



/* Entry: 103873ad8; end: 103873b1b; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouterDidDismissLensExplorer:] */

void FUN_103873ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x0001038744f8();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103873b1c; end: 103873b23; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouterReplyParameters:] */

void FUN_103873b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103873b24; end: 103873c1b;  */

/* WARNING: Possible PIC construction at 0x000103873bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103873be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103873bd0) */
/* WARNING: Removing unreachable block (ram,0x000103873bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873b24(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long in_x4;
  long in_x5;
  
  in_x4 = in_x4 + _DAT_112fa44f8;
  uVar1 = *(undefined8 *)(in_x4 + 0x18);
  lVar2 = *(long *)(in_x4 + 0x20);
  func_0x0001000a8868(in_x4,uVar1);
  (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
  func_0x0001000a8868(in_x5,*(undefined8 *)(in_x5 + 0x18));
  puVar3 = PTR_PTR_1126b0820;
  func_0x000107c61168(PTR_PTR_1126b0820);
  func_0x000107c4b184();
  func_0x000107c61180();
  func_0x000107c5e848();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103873c1c; end: 103873ceb;  */

/* WARNING: Possible PIC construction at 0x000103873c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103873cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103873c94) */

void FUN_103873c1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  func_0x0001000a8868(param_4,uVar1);
  if (param_3 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2,0,uVar1,lVar2);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0820;
    func_0x000107c61168(PTR_PTR_1126b0820);
    func_0x000107c4b184();
    func_0x000107c61180();
    func_0x000107c5e848();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103873cec; end: 103873d53; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouter:didPickItem:selectionTrigger:] */

/* WARNING: Possible PIC construction at 0x000103873d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103873d40) */

void FUN_103873cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001038745cc(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103873d54; end: 103873d57; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerRouterDidToggleCamera:] */

void FUN_103873d54(void)

{
  return;
}



/* Entry: 103873d58; end: 103873dc3; -[_TtC21ARBarFeatureLEBrowser27ARBarLEBrowserPresenterImpl lensExplorerDidTransitionToCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103873d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uStack_40 = param_3;
  uStack_38 = param_2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 103873dc4; end: 103873e43;  */

undefined * FUN_103873dc4(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 103873e44; end: 103873e7b;  */

ulong FUN_103873e44(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740fc);
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
  FUN_103873dc4(uVar2,uVar4,FUN_103882cd4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740f8);
      (*pcVar1)();
    }
    FUN_1038740fc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103873e7c; end: 103873fab;  */

undefined *
FUN_103873e7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103873fac);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 103873fac; end: 103873fbf;  */

ulong FUN_103873fac(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740fc);
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
  FUN_103873dc4(uVar2,uVar4,FUN_103882d94);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740f8);
      (*pcVar1)();
    }
    (*(code *)0x103874214)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103873fc0; end: 1038740fb;  */

ulong FUN_103873fc0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740fc);
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
  FUN_103873dc4(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038740f8);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1038740fc; end: 10387430b;  */

long FUN_1038740fc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103874210);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103874214);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001038747b4(0,0x112fa4548,&PTR_PTR_1126ad7d8);
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
      func_0x0001038747b4(0,0x112fa4548,&PTR_PTR_1126ad7d8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10387420c);
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



/* Entry: 10387430c; end: 10387434f;  */

void FUN_10387430c(long param_1)

{
  FUN_103873e7c(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112fa4558,&UNK_10dc17b90,0x112fa4550,
                &UNK_10dc17b88);
  return;
}



/* Entry: 103874350; end: 1038746cf;  */

void FUN_103874350(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10387440c);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  uVar7 = 0x112fa4550;
  func_0x0001000285a8(0x112fa4550,&UNK_10dc17b88);
  func_0x000107c61408(lVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103874410);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103874414);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x10;
    uVar3 = lVar8 + 0x20 + param_2 * 0x10;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x10 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103874418);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10387441c);
  (*pcVar6)();
}



/* Entry: 1038746d0; end: 1038746ef;  */

void FUN_1038746d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5800);
  return;
}



/* Entry: 1038746f0; end: 103874733;  */

void FUN_1038746f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
  return;
}



/* Entry: 103874734; end: 10387475f;  */

/* WARNING: Possible PIC construction at 0x000103873bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103873be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103873bd0) */
/* WARNING: Removing unreachable block (ram,0x000103873bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103874734(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112fa44f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  func_0x0001000a8868(lVar4,*(undefined8 *)(lVar4 + 0x18));
  puVar5 = PTR_PTR_1126b0820;
  func_0x000107c61168(PTR_PTR_1126b0820);
  func_0x000107c4b184();
  func_0x000107c61180();
  func_0x000107c5e848();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 103874760; end: 1038747f3;  */

void FUN_103874760(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar1 = *param_1;
  bVar2 = bVar1 - 1 < 2;
  func_0x000107c58cdc(uVar3,param_2,bVar2,bVar2);
  if (bVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_dismissIfNeeded__1125be870,0);
    return;
  }
  return;
}



/* Entry: 1038747f4; end: 103874913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038747f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    lVar7 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000104502340(0);
    func_0x0001004575f0();
    puVar3 = &UNK_11069fae8;
    func_0x000107c613fc(&UNK_11069fae8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    lVar4 = 0;
    func_0x000103877854();
    lVar7 = lVar4;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar7 + _DAT_112fa4760);
    *puVar1 = 0x1038750e0;
    puVar1[1] = puVar3;
    plVar5 = &lStack_58;
    lStack_58 = lVar7;
    lStack_50 = lVar4;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    uVar6 = 0xc;
    func_0x000104501fcc(0xc,uVar2,plVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(plVar5);
    lVar7 = lStack_48;
    func_0x000107c4fbec(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar6);
  }
  return lVar7;
}



/* Entry: 103874914; end: 103874af3;  */

void FUN_103874914(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long alStack_78 [3];
  undefined8 uStack_60;
  
  if ((*(long *)(unaff_x20 + 0x50) != 0) &&
     (func_0x0001000d224c(alStack_78), (char)alStack_78[0] != '\x01')) {
    return;
  }
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000d224c(alStack_78);
  plVar2 = alStack_78;
  func_0x0001000a8868(plVar2,uStack_60);
  FUN_103875edc();
  puVar3 = &UNK_11069fae8;
  func_0x000107c613fc(&UNK_11069fae8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar7 = 0x103875148;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x103875148);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(alStack_78);
  uVar4 = uVar7;
  func_0x000107c614f0(uVar7);
  (**(code **)(puVar5 + 0x10))(uVar1,uVar4,puVar5);
  func_0x000107c615e8(uVar7);
  func_0x0001000d224c(alStack_78);
  func_0x0001000a8868(alStack_78,uStack_60);
  func_0x0001038753b4();
  func_0x0001000834e4(alStack_78);
  func_0x0001000d224c(alStack_78);
  plVar2 = (long *)CONCAT71(alStack_78[0]._1_7_,(char)alStack_78[0]);
  if (plVar2 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar2 + 0x60);
    func_0x000107c6157c(lVar9);
    uVar7 = 0x103875150;
    lVar6 = lVar9;
    (*pcVar8)(0x103875150);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(lVar9);
    uVar4 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(lVar6 + 0x10))(uVar1,uVar4,lVar6);
    func_0x000107c615e8(uVar7);
  }
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103874af4; end: 103874b7f;  */

void FUN_103874af4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc48(uVar2,uVar1);
    uStack_50 = uVar2;
    func_0x000100087c34(&uStack_50);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 103874b80; end: 103874bc7;  */

void FUN_103874b80(void)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  func_0x0001000d224c(auStack_48);
  func_0x0001000a8868(auStack_48,uStack_30);
  FUN_1038758b0();
  func_0x0001000834e4(auStack_48);
  return;
}



/* Entry: 103874bc8; end: 103874d8f;  */

void FUN_103874bc8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61574(uVar1);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x60);
    lVar2 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar2,lVar5);
    func_0x000107c615e8(lVar4);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  *(long *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c615e8(uVar1);
  func_0x000104875e28(auStack_68);
  if (lStack_50 == 0) {
    FUN_103875158(auStack_68);
  }
  else {
    puVar3 = auStack_68;
    func_0x0001000a8868();
    func_0x0001038752fc();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x000107c504e8();
      func_0x000107c615e8(puVar3);
    }
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 103874d90; end: 103874e17;  */

void FUN_103874d90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    func_0x0001000d224c(auStack_60);
    func_0x000107c61574(uVar1);
    func_0x0001000a8868(auStack_60,uStack_48);
    func_0x000103875a64();
    func_0x0001000834e4(auStack_60);
  }
  return;
}



/* Entry: 103874e18; end: 103874ebb;  */

void FUN_103874e18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 103874ebc; end: 103874f8f;  */

void FUN_103874ebc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    return;
  }
  plVar1 = param_1;
  FUN_103874f90();
  puVar2 = &UNK_11069fae8;
  func_0x000107c613fc(&UNK_11069fae8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11069fb10;
  func_0x000107c613fc(&UNK_11069fb10,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = (byte)param_1 & 1;
  pcVar4 = FUN_1038750d4;
  puVar2 = puVar3;
  (**(code **)(*plVar1 + 0x60))();
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  *(code **)(unaff_x20 + 0x58) = pcVar4;
  *(undefined **)(unaff_x20 + 0x60) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 103874f90; end: 103875077;  */

undefined8 FUN_103874f90(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  puVar1 = auStack_58;
  func_0x0001000a8868(puVar1,uStack_40);
  FUN_1038751a0();
  uVar2 = 0x1038750e8;
  func_0x0001000c0ebc(0x1038750e8,0);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_58);
  uVar3 = 0x10387513c;
  func_0x0001000bfde0(0x10387513c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar2);
  func_0x0001000d224c(auStack_58);
  uVar2 = auStack_58[0];
  func_0x000100471e0c(auStack_58[0],1);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(auStack_58[0]);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar2);
  return uVar3;
}



/* Entry: 103875078; end: 1038750d3;  */

void FUN_103875078(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000103874ca4(param_3 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1038750d4; end: 103875157;  */

void FUN_1038750d4(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000103874ca4(bVar1 & 1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103875158; end: 10387519f;  */

undefined8 FUN_103875158(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fa4648;
  func_0x0001000285a8(0x112fa4648,&UNK_10dc17c20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1038751a0; end: 103875243;  */

long FUN_1038751a0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined2 uStack_34;
  undefined1 uStack_32;
  
  lVar1 = *(long *)(unaff_x20 + 0x60);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112fa4738,&UNK_10dc17cb8);
    func_0x000107c613fc();
    lVar2 = 1;
    func_0x00010008747c();
    uStack_32 = 0x80;
    uStack_34 = 0;
    func_0x000100087c34(&uStack_34);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 103875244; end: 103875567;  */

long FUN_103875244(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x88);
  lVar2 = lVar1;
  if (lVar1 == 1) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 == 0) {
      lVar2 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x18));
      lVar2 = lStack_48;
      func_0x000107c4b160();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(uVar3);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long *)(unaff_x20 + 0x88) = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000100d611c0(uVar3);
  }
  func_0x000100d611d0(lVar1);
  return lVar2;
}



/* Entry: 103875568; end: 103875663;  */

undefined * FUN_103875568(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(ulong *)(unaff_x20 + 0x10);
    if ((uVar2 == *(ulong *)(unaff_x20 + 0x20) &&
         *(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x20 + 0x18)) ||
       (func_0x000107c605b8(), puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8, (uVar2 & 1) != 0)) {
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x20) = uVar5;
      *(undefined8 *)(puVar3 + 0x28) = uVar1;
      func_0x000107c61434(uVar1);
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR_PTR_1126ccbc8;
  func_0x000107c610f8(PTR_PTR_1126ccbc8);
  func_0x000107c5fadc(uVar5,uVar1);
  puVar6 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar3);
  func_0x000107c48544(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 103875664; end: 1038758af;  */

void FUN_103875664(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  plVar10 = param_2;
  func_0x000107c4f774();
  func_0x000107c61180();
  if (param_2 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038758b0);
    (*pcVar2)();
  }
  func_0x000107c4f798();
  func_0x000107c61180();
  func_0x000107c61170();
  if (param_2 == (long *)0x0) {
    plVar9 = (long *)0x0;
    plVar10 = (long *)0x0;
    func_0x000104368a6c();
  }
  else {
    plVar9 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x000104368a6c();
    if (plVar10 != (long *)0x0) {
      if (((plVar9 == (long *)*param_2) && (plVar10 == (long *)param_2[1])) ||
         (plVar3 = plVar9, func_0x000107c605b8(plVar9,plVar10,(long *)*param_2,(long *)param_2[1],0)
         , ((ulong)plVar3 & 1) != 0)) {
        uVar11 = 0;
        goto LAB_103875728;
      }
    }
  }
  uVar11 = 1;
LAB_103875728:
  puVar4 = &UNK_11069fbf0;
  func_0x000107c613fc(&UNK_11069fbf0,0x29,7);
  *(long **)(puVar4 + 0x10) = plVar9;
  *(long **)(puVar4 + 0x18) = plVar10;
  *(undefined8 *)(puVar4 + 0x20) = unaff_x20;
  puVar4[0x28] = uVar11;
  puVar5 = &UNK_11069fc18;
  func_0x000107c613fc(&UNK_11069fc18,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x103875e4c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x103876e6c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102e29534;
  puStack_88 = &UNK_11069fc30;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61434(plVar10);
  func_0x000107c6157c();
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11069fc68;
  func_0x000107c613fc(&UNK_11069fc68,0x29,7);
  *(long **)(puVar5 + 0x10) = plVar9;
  *(long **)(puVar5 + 0x18) = plVar10;
  *(undefined8 *)(puVar5 + 0x20) = unaff_x20;
  puVar5[0x28] = uVar11;
  puVar7 = &UNK_11069fc90;
  func_0x000107c613fc(&UNK_11069fc90,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103875e88;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  uStack_80 = 0x103876e60;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11069fca8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c61574(puVar7);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1038758b0; end: 103875c1b;  */

void FUN_1038758b0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar4 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    FUN_103875568();
    puVar1 = puVar4;
    func_0x000107c4fb70();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170();
    func_0x0001038752fc();
    if (param_1 != 0) {
      uVar2 = param_1;
      func_0x000107c3f3fc();
      uVar3 = uVar2;
      FUN_1038751a0();
      if ((uVar2 & 1) != 0) {
        puStack_70 = (undefined *)((ulong)puStack_70._3_5_ << 0x18);
        func_0x000100087c34(&puStack_70);
        func_0x000107c61574(uVar3);
        puVar4 = &UNK_11069fb78;
        func_0x000107c613fc(&UNK_11069fb78,0x18,7);
        func_0x000107c61644(puVar4 + 0x10);
        puVar5 = &UNK_11069fd30;
        func_0x000107c613fc(&UNK_11069fd30,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar5 + 0x18) = puVar1;
        uStack_50 = 0x103876e68;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1024ff1e4;
        puStack_58 = &UNK_11069fd48;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        puVar4 = puStack_48;
        func_0x000107c61174(puVar1);
        func_0x000107c61574(puVar4);
        func_0x000107c50708(param_1);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(param_1);
        return;
      }
      puStack_70 = (undefined *)CONCAT53(puStack_70._3_5_,0x410000);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,0x100);
      func_0x000100087c34(&puStack_70);
      func_0x000107c61574(uVar3);
      func_0x000107c615e8(param_1);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 103875c1c; end: 103875d23;  */

void FUN_103875c1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103875664(param_1,param_3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103875d24; end: 103875def;  */

void FUN_103875d24(undefined8 param_1)

{
  ushort in_w4;
  ushort uStack_24;
  undefined1 uStack_22;
  
  FUN_1038751a0();
  uStack_24 = in_w4 & 0xff;
  uStack_22 = 0x41;
  func_0x000100087c34(&uStack_24);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 103875df0; end: 103875e2f;  */

void FUN_103875df0(void)

{
  func_0x000103875d74();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103875e30; end: 103875e5b;  */

void FUN_103875e30(long param_1,long param_2)

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



/* Entry: 103875e5c; end: 103875e87;  */

void FUN_103875e5c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103875e88; end: 103875e97;  */

void FUN_103875e88(undefined8 param_1)

{
  byte bVar1;
  long unaff_x20;
  ushort uStack_24;
  undefined1 uStack_22;
  
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  FUN_1038751a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uStack_22 = 0x41;
  uStack_24 = (ushort)bVar1;
  func_0x000100087c34(&uStack_24);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 103875e98; end: 103875edb;  */

void FUN_103875e98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103875c1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103875edc; end: 1038760e3;  */

void FUN_103875edc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_48;
  
  FUN_103875244();
  if (param_1 == 0) {
LAB_1038760b0:
    func_0x0001000285a8(0x112fa4740,&UNK_10dc17cc8);
    func_0x000104886440();
  }
  else {
    if ((*(long *)(unaff_x20 + 0x28) == 0) ||
       ((uVar1 = *(ulong *)(unaff_x20 + 0x20),
        uVar1 != *(ulong *)(unaff_x20 + 0x10) ||
        *(long *)(unaff_x20 + 0x28) != *(long *)(unaff_x20 + 0x18) &&
        (func_0x000107c605b8(), (uVar1 & 1) == 0)))) {
LAB_103875f5c:
      lVar2 = param_1;
      func_0x000107c3db5c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c615e8(param_1);
        goto LAB_1038760b0;
      }
    }
    else {
      puStack_48 = PTR_DAT_1126a30c8;
      lVar2 = param_1;
      func_0x000107c61494(param_1,1,&puStack_48);
      if (lVar2 == 0) goto LAB_103875f5c;
      func_0x000107c4cd70();
      func_0x000107c61180();
      if (lVar2 == 0) goto LAB_103875f5c;
    }
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    func_0x000107c61174(lVar2);
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar5 = 0x112f59b48;
    func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
    pcVar4 = FUN_1038760e4;
    func_0x0001000d5158(FUN_1038760e4,0,uVar5);
    func_0x000107c61574(lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
    func_0x0001006c733c(uVar5);
    puVar6 = &UNK_11069fb78;
    func_0x000107c613fc(&UNK_11069fb78,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_11069fd80;
    func_0x000107c613fc(&UNK_11069fd80,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    puVar6 = &UNK_11069fda8;
    func_0x000107c613fc(&UNK_11069fda8,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1038769e8;
    *(undefined **)(puVar6 + 0x18) = puVar7;
    func_0x000107c615f0(param_1);
    func_0x0001000d5158(FUN_103876cdc,puVar6,&UNK_1106a0028);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(pcVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1038760e4; end: 10387613f;  */

void FUN_1038760e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  func_0x000103876de8(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103876140; end: 1038769e7;  */

undefined1  [16] FUN_103876140(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined auStack_90 [32];
  
  puVar11 = auStack_90;
  func_0x000107c61428(param_3 + 0x10,puVar11,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 == 0) {
    puStack_e0 = (undefined *)0x0;
    uVar3 = 0;
    goto LAB_103876970;
  }
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar17 != 0) goto LAB_1038761b8;
LAB_10387650c:
    uStack_108 = 0;
    pcStack_100 = (code *)0x0;
    puVar15 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
    if (uVar17 == 0) goto LAB_10387650c;
LAB_1038761b8:
    if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038769b0);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x0001020a4b50(0,param_1);
    }
    puVar15 = &UNK_11069fdd0;
    func_0x000107c613fc(&UNK_11069fdd0,0x18,7);
    *(undefined ***)(puVar15 + 0x10) = &puStack_98;
    func_0x000100d611b0(0,0);
    puVar11 = &UNK_11069fdf8;
    func_0x000107c613fc(&UNK_11069fdf8,0x20,7);
    pcStack_100 = FUN_103876d84;
    *(code **)(puVar11 + 0x10) = FUN_103876d84;
    *(undefined **)(puVar11 + 0x18) = puVar15;
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b0 = FUN_103876d9c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1020995dc;
    puStack_b8 = &UNK_11069fe10;
    ppuVar4 = &puStack_d0;
    puStack_a8 = puVar11;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_a8);
    puVar20 = &UNK_11069fe48;
    func_0x000107c613fc(&UNK_11069fe48,0x18,7);
    *(undefined ***)(puVar20 + 0x10) = &puStack_a0;
    func_0x000100d611b0(0,0);
    puVar10 = &UNK_11069fe70;
    puVar11 = (undefined *)0x20;
    func_0x000107c613fc(&UNK_11069fe70,0x20,7);
    uStack_108 = 0x103876dbc;
    *(undefined8 *)(puVar10 + 0x10) = 0x103876dbc;
    *(undefined **)(puVar10 + 0x18) = puVar20;
    pcStack_b0 = (code *)0x103876e70;
    puStack_d0 = puVar18;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_102500714;
    puStack_b8 = &UNK_11069fe88;
    ppuVar5 = &puStack_d0;
    puStack_a8 = puVar10;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_a8);
    func_0x000107c4c684(uVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar3);
    lVar14 = uVar17 - 1;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar14 != 0) {
      lVar13 = 5;
      puVar19 = puVar15;
      puVar16 = puVar20;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          lVar6 = *(long *)(param_1 + lVar13 * 8);
          func_0x000107c61174(lVar6);
        }
        else {
          lVar6 = lVar13 + -4;
          func_0x0001020a4b50(lVar6,param_1);
        }
        puVar15 = &UNK_11069fdd0;
        func_0x000107c613fc(&UNK_11069fdd0,0x18,7);
        *(undefined ***)(puVar15 + 0x10) = &puStack_98;
        func_0x000100d611b0(FUN_103876d84,puVar19);
        puVar11 = &UNK_11069fdf8;
        func_0x000107c613fc(&UNK_11069fdf8,0x20,7);
        *(code **)(puVar11 + 0x10) = FUN_103876d84;
        *(undefined **)(puVar11 + 0x18) = puVar15;
        pcStack_b0 = FUN_103876d9c;
        puStack_d0 = puVar18;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1020995dc;
        puStack_b8 = &UNK_11069fe10;
        ppuVar4 = &puStack_d0;
        puStack_a8 = puVar11;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_a8);
        puVar20 = &UNK_11069fe48;
        func_0x000107c613fc(&UNK_11069fe48,0x18,7);
        *(undefined ***)(puVar20 + 0x10) = &puStack_a0;
        func_0x000100d611b0(0x103876dbc,puVar16);
        puVar10 = &UNK_11069fe70;
        puVar11 = (undefined *)0x20;
        func_0x000107c613fc(&UNK_11069fe70,0x20,7);
        *(undefined8 *)(puVar10 + 0x10) = 0x103876dbc;
        *(undefined **)(puVar10 + 0x18) = puVar20;
        pcStack_b0 = (code *)0x103876e70;
        puStack_d0 = puVar18;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_102500714;
        puStack_b8 = &UNK_11069fe88;
        ppuVar5 = &puStack_d0;
        puStack_a8 = puVar10;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_a8);
        func_0x000107c4c684(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar6);
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + -1;
        puVar19 = puVar15;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar16 = puVar20;
      } while (lVar14 != 0);
    }
  }
  puVar18 = puStack_a0;
  puStack_d0 = puStack_98;
  func_0x000107c61434();
  func_0x000107c61434(puVar18);
  func_0x0001024ff974();
  puVar18 = puStack_d0;
  if ((ulong)puStack_d0 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
    if (puVar19 != (undefined *)0x0) goto LAB_103876550;
LAB_103876630:
    func_0x000107c6142c(puVar18);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_d0) {
      puVar19 = puStack_d0;
    }
    func_0x000107c60480();
    if (puVar19 == (undefined *)0x0) goto LAB_103876630;
LAB_103876550:
    puVar11 = (undefined *)((ulong)puVar19 & ((long)puVar19 >> 0x3f ^ 0xffffffffffffffffU));
    puStack_d0 = puVar10;
    func_0x0001019d4adc(0,puVar11,0);
    if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038769b4);
      (*pcVar2)();
    }
    puVar16 = (undefined *)0x0;
    do {
      puVar10 = puStack_d0;
      if (((ulong)puVar18 & 0xc000000000000001) == 0) {
        puVar8 = *(undefined **)(puVar18 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar16;
        puVar11 = puVar18;
        func_0x0001020a4b3c();
      }
      func_0x000107c61174();
      puVar7 = puVar8;
      FUN_1038779b4();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar8);
      uVar17 = *(ulong *)(puVar10 + 0x10);
      puVar8 = (undefined *)(uVar17 + 1);
      puStack_d0 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar17) {
        puVar11 = puVar8;
        func_0x0001019d4adc(1 < *(ulong *)(puVar10 + 0x18),puVar8,1);
      }
      puVar10 = puStack_d0;
      puVar16 = puVar16 + 1;
      *(undefined **)(puStack_d0 + 0x10) = puVar8;
      *(undefined **)(puStack_d0 + uVar17 * 8 + 0x20) = puVar7;
    } while (puVar19 != puVar16);
    func_0x000107c6142c(puVar18);
  }
  puVar18 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar18 + 0x10);
    if (puVar19 != (undefined *)0x0) goto LAB_103876654;
LAB_1038767a0:
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = puVar18;
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar19 = puVar10;
    }
    func_0x000107c60480();
    if (puVar19 == (undefined *)0x0) goto LAB_1038767a0;
LAB_103876654:
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar16 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387678c);
            (*pcVar2)();
          }
          puVar8 = *(undefined **)(puVar10 + (long)puVar16 * 8 + 0x20);
          func_0x000107c61174();
          puVar7 = puVar11;
        }
        else {
          puVar8 = puVar16;
          puVar7 = puVar10;
          func_0x000100ff3f88();
        }
        puVar1 = puVar16 + 1;
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103876788);
          (*pcVar2)();
        }
        puVar9 = puVar8;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar11 = puVar7;
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c5faec();
          puVar11 = puVar7;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar7);
        }
        uVar17 = param_2;
        func_0x000107c40404();
        func_0x000107c61170(puVar9);
        if ((uVar17 & 1) == 0) break;
        func_0x000107c61170(puVar8);
        puVar16 = puVar16 + 1;
        if (puVar1 == puVar19) goto LAB_1038767ac;
      }
      puVar16 = puStack_e0;
      func_0x000107c61558();
      puStack_d0 = puStack_e0;
      if (((ulong)puVar16 & 1) == 0) {
        puVar11 = (undefined *)(*(long *)(puStack_e0 + 0x10) + 1);
        func_0x0001019d4adc(0,puVar11,1);
      }
      uVar17 = *(ulong *)(puStack_d0 + 0x10);
      puVar16 = (undefined *)(uVar17 + 1);
      if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar17) {
        puVar11 = puVar16;
        func_0x0001019d4adc(1 < *(ulong *)(puStack_d0 + 0x18),puVar16,1);
      }
      *(undefined **)(puStack_d0 + 0x10) = puVar16;
      *(undefined **)(puStack_d0 + uVar17 * 8 + 0x20) = puVar8;
      puVar16 = puVar1;
      puStack_e0 = puStack_d0;
    } while (puVar1 != puVar19);
  }
LAB_1038767ac:
  func_0x000107c6142c(puVar10);
  func_0x000107c6157c(puStack_e0);
  uVar17 = param_4;
  func_0x000107c4fe48();
  func_0x000107c61180();
  if (uVar17 == 0) {
LAB_103876850:
    func_0x0001000b44c0();
    uVar3 = 1;
  }
  else {
    uVar12 = uVar17;
    func_0x000107c5c13c();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    if (uVar12 == 0) goto LAB_103876850;
    uVar17 = uVar12;
    func_0x000107c5ee30(uVar12);
    func_0x000107c61170(uVar12);
    if (0xe < (ulong)puVar11 >> 0x3c) goto LAB_103876850;
    func_0x0001000b44c0(uVar17,puVar11);
    func_0x0001000b44c0(0,0xf000000000000000);
    uVar3 = 2;
  }
  uVar17 = (ulong)puStack_e0 >> 0x3e;
  if (uVar17 == 0) {
    puVar11 = *(undefined **)(puStack_e0 + 0x10);
  }
  else {
    puVar11 = puStack_e0;
    func_0x000107c60480();
  }
  func_0x000107c61574(puStack_e0);
  if (puVar11 == (undefined *)0x0) {
    lVar14 = *(long *)(param_3 + 0x58);
joined_r0x0001038768b4:
    if (lVar14 != 0) {
      func_0x000107c6157c(lVar14);
      func_0x0001000d224c(&puStack_d0);
      if (puStack_d0 != (undefined *)0x0) {
        puVar11 = puStack_d0;
        func_0x000107c61174();
        puVar10 = puStack_e0;
        func_0x000107c61550();
        if ((uVar17 != 0) || (puVar18 = puStack_e0, ((ulong)puVar10 & 1) == 0)) {
          if (uVar17 == 0) {
            puVar10 = *(undefined **)((undefined *)((ulong)puStack_e0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_e0) {
              puVar10 = puStack_e0;
            }
            func_0x000107c60480(puVar10);
          }
          puVar18 = (undefined *)0x0;
          func_0x000100fe2a60(0,puVar10 + 1,1,puStack_e0);
        }
        uVar12 = (ulong)puVar18 & 0xffffffffffffff8;
        uVar17 = *(ulong *)(uVar12 + 0x10);
        puStack_e0 = puVar18;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar17) {
          puStack_e0 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          func_0x000100fe2a60(puStack_e0,uVar17 + 1,1,puVar18);
          uVar12 = (ulong)puStack_e0 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar17 + 1;
        *(undefined **)(uVar12 + uVar17 * 8 + 0x20) = puVar11;
        func_0x000107c61170(puVar11);
      }
      func_0x000107c61574(lVar14);
    }
  }
  else {
    func_0x000107c4fe48();
    func_0x000107c61180();
    if (param_4 == 0) {
LAB_10387689c:
      lVar14 = *(long *)(param_3 + 0x50);
      goto joined_r0x0001038768b4;
    }
    uVar12 = param_4;
    func_0x000107c44998();
    func_0x000107c61170(param_4);
    if ((uVar12 & 1) == 0) goto LAB_10387689c;
  }
  func_0x000107c61574(param_3);
  func_0x000107c6142c(puStack_a0);
  func_0x000107c6142c(puStack_98);
  func_0x000100d611b0(pcStack_100,puVar15);
  func_0x000100d611b0(uStack_108,puVar20);
LAB_103876970:
  auVar21._8_8_ = uVar3;
  auVar21._0_8_ = puStack_e0;
  return auVar21;
}



/* Entry: 1038769e8; end: 1038769ef;  */

undefined1  [16] FUN_1038769e8(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined auStack_90 [32];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(ulong *)(unaff_x20 + 0x18);
  puVar14 = auStack_90;
  func_0x000107c61428(lVar3 + 0x10,puVar14,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 == 0) {
    puStack_e0 = (undefined *)0x0;
    uVar4 = 0;
    goto LAB_103876970;
  }
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 >> 0x3e == 0) {
    uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar19 != 0) goto LAB_1038761b8;
LAB_10387650c:
    uStack_108 = 0;
    pcStack_100 = (code *)0x0;
    puVar17 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar19 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar19 = param_1;
    }
    func_0x000107c60480();
    if (uVar19 == 0) goto LAB_10387650c;
LAB_1038761b8:
    if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038769b0);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar4);
    }
    else {
      uVar4 = 0;
      func_0x0001020a4b50(0,param_1);
    }
    puVar17 = &UNK_11069fdd0;
    func_0x000107c613fc(&UNK_11069fdd0,0x18,7);
    *(undefined ***)(puVar17 + 0x10) = &puStack_98;
    func_0x000100d611b0(0,0);
    puVar14 = &UNK_11069fdf8;
    func_0x000107c613fc(&UNK_11069fdf8,0x20,7);
    pcStack_100 = FUN_103876d84;
    *(code **)(puVar14 + 0x10) = FUN_103876d84;
    *(undefined **)(puVar14 + 0x18) = puVar17;
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b0 = FUN_103876d9c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1020995dc;
    puStack_b8 = &UNK_11069fe10;
    ppuVar5 = &puStack_d0;
    puStack_a8 = puVar14;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_a8);
    puVar22 = &UNK_11069fe48;
    func_0x000107c613fc(&UNK_11069fe48,0x18,7);
    *(undefined ***)(puVar22 + 0x10) = &puStack_a0;
    func_0x000100d611b0(0,0);
    puVar13 = &UNK_11069fe70;
    puVar14 = (undefined *)0x20;
    func_0x000107c613fc(&UNK_11069fe70,0x20,7);
    uStack_108 = 0x103876dbc;
    *(undefined8 *)(puVar13 + 0x10) = 0x103876dbc;
    *(undefined **)(puVar13 + 0x18) = puVar22;
    pcStack_b0 = (code *)0x103876e70;
    puStack_d0 = puVar20;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_102500714;
    puStack_b8 = &UNK_11069fe88;
    ppuVar6 = &puStack_d0;
    puStack_a8 = puVar13;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_a8);
    func_0x000107c4c684(uVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar4);
    lVar16 = uVar19 - 1;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar16 != 0) {
      lVar15 = 5;
      puVar21 = puVar17;
      puVar18 = puVar22;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          lVar7 = *(long *)(param_1 + lVar15 * 8);
          func_0x000107c61174(lVar7);
        }
        else {
          lVar7 = lVar15 + -4;
          func_0x0001020a4b50(lVar7,param_1);
        }
        puVar17 = &UNK_11069fdd0;
        func_0x000107c613fc(&UNK_11069fdd0,0x18,7);
        *(undefined ***)(puVar17 + 0x10) = &puStack_98;
        func_0x000100d611b0(FUN_103876d84,puVar21);
        puVar14 = &UNK_11069fdf8;
        func_0x000107c613fc(&UNK_11069fdf8,0x20,7);
        *(code **)(puVar14 + 0x10) = FUN_103876d84;
        *(undefined **)(puVar14 + 0x18) = puVar17;
        pcStack_b0 = FUN_103876d9c;
        puStack_d0 = puVar20;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1020995dc;
        puStack_b8 = &UNK_11069fe10;
        ppuVar5 = &puStack_d0;
        puStack_a8 = puVar14;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_a8);
        puVar22 = &UNK_11069fe48;
        func_0x000107c613fc(&UNK_11069fe48,0x18,7);
        *(undefined ***)(puVar22 + 0x10) = &puStack_a0;
        func_0x000100d611b0(0x103876dbc,puVar18);
        puVar13 = &UNK_11069fe70;
        puVar14 = (undefined *)0x20;
        func_0x000107c613fc(&UNK_11069fe70,0x20,7);
        *(undefined8 *)(puVar13 + 0x10) = 0x103876dbc;
        *(undefined **)(puVar13 + 0x18) = puVar22;
        pcStack_b0 = (code *)0x103876e70;
        puStack_d0 = puVar20;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_102500714;
        puStack_b8 = &UNK_11069fe88;
        ppuVar6 = &puStack_d0;
        puStack_a8 = puVar13;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_a8);
        func_0x000107c4c684(lVar7);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(lVar7);
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + -1;
        puVar21 = puVar17;
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar18 = puVar22;
      } while (lVar16 != 0);
    }
  }
  puVar20 = puStack_a0;
  puStack_d0 = puStack_98;
  func_0x000107c61434();
  func_0x000107c61434(puVar20);
  func_0x0001024ff974();
  puVar20 = puStack_d0;
  if ((ulong)puStack_d0 >> 0x3e == 0) {
    puVar21 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
    if (puVar21 != (undefined *)0x0) goto LAB_103876550;
LAB_103876630:
    func_0x000107c6142c(puVar20);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar21 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_d0) {
      puVar21 = puStack_d0;
    }
    func_0x000107c60480();
    if (puVar21 == (undefined *)0x0) goto LAB_103876630;
LAB_103876550:
    puVar14 = (undefined *)((ulong)puVar21 & ((long)puVar21 >> 0x3f ^ 0xffffffffffffffffU));
    puStack_d0 = puVar13;
    func_0x0001019d4adc(0,puVar14,0);
    if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038769b4);
      (*pcVar2)();
    }
    puVar18 = (undefined *)0x0;
    do {
      puVar13 = puStack_d0;
      if (((ulong)puVar20 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar20 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar18;
        puVar14 = puVar20;
        func_0x0001020a4b3c();
      }
      func_0x000107c61174();
      puVar8 = puVar9;
      FUN_1038779b4();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      uVar19 = *(ulong *)(puVar13 + 0x10);
      puVar9 = (undefined *)(uVar19 + 1);
      puStack_d0 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar19) {
        puVar14 = puVar9;
        func_0x0001019d4adc(1 < *(ulong *)(puVar13 + 0x18),puVar9,1);
      }
      puVar13 = puStack_d0;
      puVar18 = puVar18 + 1;
      *(undefined **)(puStack_d0 + 0x10) = puVar9;
      *(undefined **)(puStack_d0 + uVar19 * 8 + 0x20) = puVar8;
    } while (puVar21 != puVar18);
    func_0x000107c6142c(puVar20);
  }
  puVar20 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar21 = *(undefined **)(puVar20 + 0x10);
    if (puVar21 != (undefined *)0x0) goto LAB_103876654;
LAB_1038767a0:
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar21 = puVar20;
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar21 = puVar13;
    }
    func_0x000107c60480();
    if (puVar21 == (undefined *)0x0) goto LAB_1038767a0;
LAB_103876654:
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar18 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar13 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar20 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387678c);
            (*pcVar2)();
          }
          puVar9 = *(undefined **)(puVar13 + (long)puVar18 * 8 + 0x20);
          func_0x000107c61174();
          puVar8 = puVar14;
        }
        else {
          puVar9 = puVar18;
          puVar8 = puVar13;
          func_0x000100ff3f88();
        }
        puVar1 = puVar18 + 1;
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103876788);
          (*pcVar2)();
        }
        puVar10 = puVar9;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar14 = puVar8;
        if (puVar10 == (undefined *)0x0) {
          func_0x000107c5faec();
          puVar14 = puVar8;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        uVar19 = param_2;
        func_0x000107c40404();
        func_0x000107c61170(puVar10);
        if ((uVar19 & 1) == 0) break;
        func_0x000107c61170(puVar9);
        puVar18 = puVar18 + 1;
        if (puVar1 == puVar21) goto LAB_1038767ac;
      }
      puVar18 = puStack_e0;
      func_0x000107c61558();
      puStack_d0 = puStack_e0;
      if (((ulong)puVar18 & 1) == 0) {
        puVar14 = (undefined *)(*(long *)(puStack_e0 + 0x10) + 1);
        func_0x0001019d4adc(0,puVar14,1);
      }
      uVar19 = *(ulong *)(puStack_d0 + 0x10);
      puVar18 = (undefined *)(uVar19 + 1);
      if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar19) {
        puVar14 = puVar18;
        func_0x0001019d4adc(1 < *(ulong *)(puStack_d0 + 0x18),puVar18,1);
      }
      *(undefined **)(puStack_d0 + 0x10) = puVar18;
      *(undefined **)(puStack_d0 + uVar19 * 8 + 0x20) = puVar9;
      puVar18 = puVar1;
      puStack_e0 = puStack_d0;
    } while (puVar1 != puVar21);
  }
LAB_1038767ac:
  func_0x000107c6142c(puVar13);
  func_0x000107c6157c(puStack_e0);
  uVar19 = uVar12;
  func_0x000107c4fe48();
  func_0x000107c61180();
  if (uVar19 == 0) {
LAB_103876850:
    func_0x0001000b44c0();
    uVar4 = 1;
  }
  else {
    uVar11 = uVar19;
    func_0x000107c5c13c();
    func_0x000107c61180();
    func_0x000107c61170(uVar19);
    if (uVar11 == 0) goto LAB_103876850;
    uVar19 = uVar11;
    func_0x000107c5ee30(uVar11);
    func_0x000107c61170(uVar11);
    if (0xe < (ulong)puVar14 >> 0x3c) goto LAB_103876850;
    func_0x0001000b44c0(uVar19,puVar14);
    func_0x0001000b44c0(0,0xf000000000000000);
    uVar4 = 2;
  }
  uVar19 = (ulong)puStack_e0 >> 0x3e;
  if (uVar19 == 0) {
    puVar14 = *(undefined **)(puStack_e0 + 0x10);
  }
  else {
    puVar14 = puStack_e0;
    func_0x000107c60480();
  }
  func_0x000107c61574(puStack_e0);
  if (puVar14 == (undefined *)0x0) {
    lVar16 = *(long *)(lVar3 + 0x58);
joined_r0x0001038768b4:
    if (lVar16 != 0) {
      func_0x000107c6157c(lVar16);
      func_0x0001000d224c(&puStack_d0);
      if (puStack_d0 != (undefined *)0x0) {
        puVar14 = puStack_d0;
        func_0x000107c61174();
        puVar13 = puStack_e0;
        func_0x000107c61550();
        if ((uVar19 != 0) || (puVar20 = puStack_e0, ((ulong)puVar13 & 1) == 0)) {
          if (uVar19 == 0) {
            puVar13 = *(undefined **)((undefined *)((ulong)puStack_e0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_e0) {
              puVar13 = puStack_e0;
            }
            func_0x000107c60480(puVar13);
          }
          puVar20 = (undefined *)0x0;
          func_0x000100fe2a60(0,puVar13 + 1,1,puStack_e0);
        }
        uVar19 = (ulong)puVar20 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar19 + 0x10);
        puStack_e0 = puVar20;
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar12) {
          puStack_e0 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
          func_0x000100fe2a60(puStack_e0,uVar12 + 1,1,puVar20);
          uVar19 = (ulong)puStack_e0 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar19 + 0x10) = uVar12 + 1;
        *(undefined **)(uVar19 + uVar12 * 8 + 0x20) = puVar14;
        func_0x000107c61170(puVar14);
      }
      func_0x000107c61574(lVar16);
    }
  }
  else {
    func_0x000107c4fe48();
    func_0x000107c61180();
    if (uVar12 == 0) {
LAB_10387689c:
      lVar16 = *(long *)(lVar3 + 0x50);
      goto joined_r0x0001038768b4;
    }
    uVar11 = uVar12;
    func_0x000107c44998();
    func_0x000107c61170(uVar12);
    if ((uVar11 & 1) == 0) goto LAB_10387689c;
  }
  func_0x000107c61574(lVar3);
  func_0x000107c6142c(puStack_a0);
  func_0x000107c6142c(puStack_98);
  func_0x000100d611b0(pcStack_100,puVar17);
  func_0x000100d611b0(uStack_108,puVar22);
LAB_103876970:
  auVar23._8_8_ = uVar4;
  auVar23._0_8_ = puStack_e0;
  return auVar23;
}



/* Entry: 1038769f0; end: 103876cdb;  */

undefined * FUN_1038769f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000103876de8(0,0x112ea2a98,&PTR_PTR_1126ccd78);
  uVar3 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar2);
  func_0x000107c61170(unaff_x20);
  if (uVar3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar8 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c6142c(uVar3);
    uVar2 = 0;
    puVar7 = (undefined *)0x0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103876cdc);
      (*pcVar1)();
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_1033429ec(0,uVar3);
    }
    puVar7 = &UNK_11069fec0;
    func_0x000107c613fc(&UNK_11069fec0,0x18,7);
    *(undefined ***)(puVar7 + 0x10) = &puStack_78;
    func_0x000100d611b0(0,0);
    puVar4 = &UNK_11069fee8;
    func_0x000107c613fc(&UNK_11069fee8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x103876e7c;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    uStack_88 = 0x103876e74;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1020995dc;
    puStack_90 = &UNK_11069ff00;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c688(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    lVar10 = uVar8 - 1;
    if (lVar10 != 0) {
      lVar9 = 5;
      puVar4 = puVar7;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          lVar6 = *(long *)(uVar3 + lVar9 * 8);
          func_0x000107c61174(lVar6);
        }
        else {
          lVar6 = lVar9 + -4;
          FUN_1033429ec(lVar6,uVar3);
        }
        puVar7 = &UNK_11069fec0;
        func_0x000107c613fc(&UNK_11069fec0,0x18,7);
        *(undefined ***)(puVar7 + 0x10) = &puStack_78;
        func_0x000100d611b0(0x103876e7c,puVar4);
        puVar4 = &UNK_11069fee8;
        func_0x000107c613fc(&UNK_11069fee8,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0x103876e7c;
        *(undefined **)(puVar4 + 0x18) = puVar7;
        uStack_88 = 0x103876e74;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1020995dc;
        puStack_90 = &UNK_11069ff00;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_80);
        func_0x000107c4c688(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(lVar6);
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + -1;
        puVar4 = puVar7;
      } while (lVar10 != 0);
    }
    func_0x000107c6142c(uVar3);
    uVar2 = 0x103876e7c;
    puVar4 = puStack_78;
  }
  func_0x000100d611b0(uVar2,puVar7);
  return puVar4;
}



/* Entry: 103876cdc; end: 103876d0f;  */

void FUN_103876cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = (undefined1)param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 103876d10; end: 103876d83;  */

void FUN_103876d10(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x0001024ffb9c();
  uVar2 = *param_2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001020a5124(uVar2,uVar1 + 1,1);
    *param_2 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103876d84; end: 103876d9b;  */

void FUN_103876d84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103876d10(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103876d9c; end: 103876e27;  */

void FUN_103876d9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103876e28; end: 103877063;  */

void FUN_103876e28(long param_1,long param_2)

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



/* Entry: 103877064; end: 1038770af;  */

undefined8 * FUN_103877064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1038770b0; end: 1038770eb;  */

undefined8 * FUN_1038770b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1038770ec; end: 103877443;  */

int FUN_1038770ec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103877444; end: 103877483;  */

void FUN_103877444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa4748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc17dc8;
  func_0x000107c61520(&UNK_10dc17dc8,&UNK_1106a01e0);
  puRam0000000112fa4748 = puVar1;
  return;
}



/* Entry: 103877484; end: 103877487;  */

void FUN_103877484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa4750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc17e30;
  func_0x000107c61520(&UNK_10dc17e30,&UNK_1106a0150);
  puRam0000000112fa4750 = puVar1;
  return;
}



/* Entry: 103877488; end: 1038774c7;  */

void FUN_103877488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa4750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc17e30;
  func_0x000107c61520(&UNK_10dc17e30,&UNK_1106a0150);
  puRam0000000112fa4750 = puVar1;
  return;
}



/* Entry: 1038774c8; end: 10387754b;  */

void FUN_1038774c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10387754c; end: 10387755f;  */

void FUN_10387754c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103877560; end: 10387759f;  */

void FUN_103877560(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa4758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc17ed8;
  func_0x000107c61520(&UNK_10dc17ed8,&UNK_1106a00c0);
  puRam0000000112fa4758 = puVar1;
  return;
}



/* Entry: 1038775a0; end: 1038775ff;  */

undefined1 FUN_1038775a0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103877600; end: 1038777b7;  */

/* WARNING: Possible PIC construction at 0x000103877614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103877618) */

void FUN_103877600(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038777b8; end: 103877813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038777b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4760);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103877814; end: 103877873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103877814(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa4760);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000103877854();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103877874; end: 103877877;  */

void FUN_103877874(void)

{
  return;
}



/* Entry: 103877878; end: 10387787f; -[_TtC21ARBarFeatureLEBrowser36CategoryCarouselDataUpatingContainer contextRequestedUpdatedActive] */

void FUN_103877878(void)

{
  return;
}



/* Entry: 103877880; end: 103877883; -[_TtC21ARBarFeatureLEBrowser36CategoryCarouselDataUpatingContainer contextRequestedUpdatedStop] */

void FUN_103877880(void)

{
  return;
}



/* Entry: 103877884; end: 1038778d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103877884(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_112fa4760);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fa4760))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1038778d4; end: 103877943; -[_TtC21ARBarFeatureLEBrowser36CategoryCarouselDataUpatingContainer contextRequestedUpdatedMoreData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038778d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112fa4760);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fa4760))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103877944; end: 10387799f; -[_TtC21ARBarFeatureLEBrowser36CategoryCarouselDataUpatingContainer init] */

void FUN_103877944(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.CategoryCarouselDataUpatingContainer",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103877970);
  (*pcVar1)();
}



/* Entry: 1038779a0; end: 1038779b3; -[_TtC21ARBarFeatureLEBrowser36CategoryCarouselDataUpatingContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038779a0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112fa4760) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112fa4760))[1]);
    return;
  }
  return;
}



/* Entry: 1038779b4; end: 103877daf;  */

undefined * FUN_1038779b4(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long alStack_a0 [10];
  
  lVar7 = 0x112d36580;
  puVar9 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  lVar7 = unaff_x20;
  func_0x000107c4c010();
  func_0x000107c61180();
  puVar10 = puVar9;
  if (lVar7 == 0) {
LAB_103877a7c:
    lVar7 = 0;
    puVar9 = (undefined *)0xe000000000000000;
  }
  else {
    lVar11 = lVar7;
    func_0x000107c4f8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar10 = puVar9;
    if (lVar11 == 0) goto LAB_103877a7c;
    lVar7 = lVar11;
    func_0x000107c5faec(lVar11);
    puVar10 = puVar9;
    func_0x000107c61170(lVar11);
  }
  lVar11 = unaff_x20;
  func_0x000107c4c010();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar3 = lVar11;
    func_0x000107c4f8c8();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar3 != 0) {
      lVar11 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      goto LAB_103877adc;
    }
  }
  lVar11 = 0;
  puVar10 = (undefined *)0xe000000000000000;
LAB_103877adc:
  puVar4 = PTR_PTR_1126bb898;
  func_0x000107c610f8(PTR_PTR_1126bb898);
  func_0x000107c5fadc(lVar7,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x000107c5fadc(lVar11,puVar10);
  func_0x000107c6142c(puVar10);
  *(undefined8 *)(lVar8 + -8) = 0;
  *(undefined8 *)(lVar8 + -0x10) = 0;
  *(undefined8 *)(lVar8 + -0x18) = 0;
  *(undefined8 *)(lVar8 + -0x20) = 0;
  *(undefined8 *)(lVar8 + -0x28) = 0;
  *(undefined8 *)(lVar8 + -0x30) = 0;
  *(undefined8 *)(lVar8 + -0x38) = 0;
  *(undefined8 *)(lVar8 + -0x40) = 0;
  *(undefined8 *)(lVar8 + -0x48) = 0;
  *(long *)(lVar8 + -0x50) = lVar11;
  func_0x000107c45604(puVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar11);
  puVar9 = PTR_PTR_1126b0820;
  func_0x000107c61168(PTR_PTR_1126b0820);
  func_0x000107c4adb4();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (lVar7 != 0) {
    puVar10 = puVar9;
    func_0x000107c5e650(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar7);
    lVar7 = unaff_x20;
    func_0x000107c4b2c0();
    func_0x000107c61180();
    puVar9 = puVar10;
    func_0x000107c5e6f0(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar7);
    puVar10 = puVar9;
    func_0x000107c5e848(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c44fb4();
    func_0x000107c61180();
    bVar1 = unaff_x20 == 0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(puVar6);
      func_0x000107c61170(unaff_x20);
      unaff_x20 = 0;
      func_0x000107c5ede0();
    }
    lVar11 = *(long *)(unaff_x20 + -8);
    (**(code **)(lVar11 + 0x38))(puVar6,bVar1,1,unaff_x20);
    func_0x0001001021cc(puVar6,lVar8);
    func_0x000107c5ede0(0);
    uVar5 = 1;
    lVar7 = lVar8;
    (**(code **)(lVar11 + 0x30))(lVar8,1,unaff_x20);
    if ((int)lVar7 == 1) {
      func_0x0001000293e4(lVar8);
      lVar7 = 0;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar11 + 8))(lVar8,unaff_x20);
      func_0x000107c5fadc(lVar7,uVar5);
      func_0x000107c6142c(uVar5);
    }
    puVar9 = puVar10;
    func_0x000107c5e59c(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar7);
    puVar10 = puVar9;
    func_0x000107c5e414(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar10;
    func_0x000107c5e850(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar9;
    func_0x000107c3ecc8(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103877db0);
  (*pcVar2)();
}



/* Entry: 103877db0; end: 103877e0f; -[_TtC21ARBarFeatureLEBrowser42ARBarLensExplorerCategoriesProviderFactory init] */

void FUN_103877db0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLensExplorerCategoriesProviderFactory",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103877ddc);
  (*pcVar1)();
}



/* Entry: 103877e10; end: 103877e83; -[_TtC21ARBarFeatureLEBrowser42ARBarLensExplorerCategoriesProviderFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103877e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103877e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103877e40) */
/* WARNING: Removing unreachable block (ram,0x000103877e6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103877e10(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4790));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa4798));
  return;
}



/* Entry: 103877e84; end: 103877ea3;  */

void FUN_103877e84(void)

{
  func_0x000107c61168(&PTR_PTR_1128f5a10);
  return;
}



/* Entry: 103877ea4; end: 103878107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103877ea4(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  plVar5 = &lStack_c0;
  func_0x000107c614f0();
  plVar2 = *(long **)(unaff_x20 + _DAT_112fa4790);
  func_0x000107c3f6ec();
  func_0x000107c61180();
  lVar7 = *(long *)(unaff_x20 + _DAT_112fa4798);
  if (lVar7 != 0) {
    lVar3 = 0;
    FUN_10387d518();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long **)(lVar4 + _DAT_112fa4c38) = plVar2;
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar4 + _DAT_112fa4c40) = uVar6;
    *(long *)(lVar4 + _DAT_112fa4c48) = lVar7;
    param_2 = PTR_s_init_1125d9248;
    lStack_c0 = lVar4;
    lStack_b8 = lVar3;
    func_0x000107c6157c(lVar7);
    func_0x000107c61174(uVar6);
    func_0x000107c61154(&lStack_c0,param_2);
    plVar2 = plVar5;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa47a0);
  lVar7 = puVar1[1];
  if (lVar7 != 0) {
    uVar6 = puVar1[4];
    uVar8 = puVar1[5];
    uVar9 = *puVar1;
    lVar3 = 0;
    FUN_10387f0e4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long **)(lVar4 + _DAT_112fa4cc0) = plVar2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112fa4cc8);
    *puVar1 = uVar9;
    puVar1[1] = lVar7;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112fa4cd0);
    *puVar1 = uVar6;
    puVar1[1] = uVar8;
    param_2 = PTR_s_init_1125d9248;
    lStack_b0 = lVar4;
    lStack_a8 = lVar3;
    func_0x000107c61434(lVar7);
    func_0x000107c61434(uVar8);
    plVar2 = &lStack_b0;
    func_0x000107c61154(plVar2,param_2);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112fa47a8);
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fa47b8);
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    func_0x000107c6157c(lVar7);
    func_0x000107c3f70c(uVar8);
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    FUN_103878108(auStack_88,uVar9,uVar6,param_2);
    func_0x000107c6142c(param_2);
    if (*(long *)(unaff_x20 + _DAT_112fa47b0) == 0) {
      uStack_a0 = 0;
    }
    else {
      func_0x0001000d224c(&uStack_a0);
    }
    lVar3 = 0;
    FUN_10387a728();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long **)(lVar4 + _DAT_112fa4958) = plVar2;
    *(long *)(lVar4 + _DAT_112fa4960) = lVar7;
    *(undefined8 *)(lVar4 + _DAT_112fa4968) = uStack_a0;
    FUN_103878220(auStack_88,lVar4 + _DAT_112fa4970);
    plVar2 = &lStack_98;
    lStack_98 = lVar4;
    lStack_90 = lVar3;
    func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
    func_0x0001000834e4(auStack_88);
  }
  return plVar2;
}



/* Entry: 103878108; end: 1038781b3;  */

void FUN_103878108(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  if (param_2 == 2) {
    lVar1 = 0;
    FUN_10387b888();
    ppuVar3 = &PTR_DAT_1106a04d8;
  }
  else if (param_2 == 1) {
    lVar1 = 0;
    func_0x00010387b828();
    ppuVar3 = &PTR_DAT_1106a04f0;
  }
  else {
    lVar1 = 0;
    FUN_10387b654();
    ppuVar3 = &PTR_DAT_1106a0508;
  }
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x20,7);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(undefined8 *)(lVar2 + 0x18) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}


