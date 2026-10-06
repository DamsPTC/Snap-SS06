/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102881f14; end: 102881f4f;  */

undefined8 FUN_102881f14(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x102885914)(param_2,param_1);
  return param_2;
}



/* Entry: 102881f50; end: 102881f8f;  */

void FUN_102881f50(void)

{
  FUN_10287c368();
  return;
}



/* Entry: 102881f90; end: 102881fe3;  */

void FUN_102881f90(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102882098;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dbac,0,0);
  return;
}



/* Entry: 102881fe4; end: 102882037;  */

void FUN_102881fe4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10288209c;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dbac,0,0);
  return;
}



/* Entry: 102882038; end: 102882057;  */

void FUN_102882038(long param_1,long param_2)

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



/* Entry: 102882058; end: 10288207f;  */

void FUN_102882058(void)

{
  func_0x000100d0c188();
  return;
}



/* Entry: 102882080; end: 10288209f;  */

void FUN_102882080(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102881f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028820a0; end: 102882227;  */

long FUN_1028820a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  return unaff_x20;
}



/* Entry: 102882228; end: 1028823d3;  */

void FUN_102882228(void)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar7 = &puStack_60;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,2,0);
  if (iVar1 == 0) {
    puVar6 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    pcStack_40 = FUN_1028823d4;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1028823dc;
    puStack_48 = &UNK_11055bef8;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c3e4fc(puVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    FUN_102d7e00c(0);
    func_0x000107c610f8();
    func_0x000102d7df50(puVar6);
  }
  else {
    puVar6 = &UNK_11055bf30;
    func_0x000107c613fc(&UNK_11055bf30,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    uVar5 = 0x112ec58b8;
    func_0x0001000285a8(0x112ec58b8,&UNK_10dae5c90);
    func_0x000107c613fc();
    pcVar2 = FUN_1028824a0;
    func_0x0001000bdd8c(FUN_1028824a0,puVar6,uVar5);
    FUN_1028829cc();
    uVar5 = 0x112ec58c0;
    func_0x0001000285a8(0x112ec58c0,&UNK_10dae5c98);
    pcVar3 = FUN_102882ad0;
    func_0x0001000cb480(FUN_102882ad0,0,uVar5);
    pcVar4 = pcVar3;
    func_0x0001000bf56c();
    uVar5 = 0;
    FUN_102d7e00c(0);
    func_0x000107c610f8();
    func_0x000102d7df50(pcVar4,uVar5);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(pcVar3);
  }
  return;
}



/* Entry: 1028823d4; end: 1028823db;  */

undefined8 FUN_1028823d4(void)

{
  return 0;
}



/* Entry: 1028823dc; end: 102882413;  */

void FUN_1028823dc(long param_1)

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



/* Entry: 102882414; end: 10288242f;  */

void FUN_102882414(long param_1,long param_2)

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



/* Entry: 102882430; end: 10288249f;  */

void FUN_102882430(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_1028824a8();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1028824a0; end: 1028824a7;  */

void FUN_1028824a0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1028824a8();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1028824a8; end: 1028829cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1028824a8(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&lStack_b0 - extraout_x8;
  lVar17 = *(long *)(unaff_x20 + 0x48);
  lVar4 = lVar17;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c42614();
    func_0x000107c615e8(lVar2);
    if ((int)lVar4 != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar13 = puVar3;
      lVar4 = lVar2;
      if (lVar2 == 0) {
        func_0x000107c5faec();
        puVar13 = puVar3;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      func_0x000107c5faec();
      puVar3 = PTR_PTR_1126ba528;
      func_0x000107c61168();
      func_0x000107c41ea0();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (puVar3 == (undefined *)0x0) {
        lVar4 = 0;
        func_0x000107c5ede0();
      }
      else {
        func_0x000107c5edb4(lVar14,puVar3);
        func_0x000107c61170(puVar3);
        lVar4 = 0;
        func_0x000107c5ede0();
      }
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar14,puVar3 == (undefined *)0x0,1);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar16 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113091b70);
      func_0x000107c615f0(uVar16);
      func_0x000107c3e5d8();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c45070();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_80 = uVar5;
      func_0x000107c51d00();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_88 = uVar6;
      func_0x000107c40664();
      func_0x000107c61180();
      lVar4 = *(long *)(unaff_x20 + 0x40);
      func_0x000107c4456c();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028829c4);
        (*pcVar1)();
      }
      lStack_98 = lVar2;
      puStack_90 = puVar13;
      func_0x000107c4cdb8();
      func_0x000107c61180();
      lVar15 = *(long *)(unaff_x20 + 0x58);
      lVar2 = lVar15;
      func_0x000107c5b4b0();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028829c8);
        (*pcVar1)();
      }
      lStack_a8 = lVar17;
      uStack_a0 = uVar16;
      func_0x000107c5b4e4();
      func_0x000107c61180();
      if (lVar15 != 0) {
        lVar7 = 0;
        FUN_1028817e8();
        lStack_b0 = lVar7;
        func_0x000107c610f8();
        lVar17 = _DAT_112ec5718;
        uStack_68 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
        func_0x0001000285a8(0x112ec5708,&UNK_10dae59e0);
        func_0x000107c613fc();
        puVar8 = &uStack_68;
        func_0x00010006c248();
        *(undefined8 **)(lVar7 + lVar17) = puVar8;
        lVar17 = _DAT_112ec5720;
        uStack_68 = 0;
        func_0x0001000285a8(0x112ec5710,&UNK_10dae59e8);
        func_0x000107c613fc();
        puVar8 = &uStack_68;
        func_0x00010006c248();
        *(undefined8 **)(lVar7 + lVar17) = puVar8;
        lVar17 = _DAT_112ec5728;
        uVar9 = 0;
        func_0x0001000c6560();
        func_0x000107c613fc();
        func_0x0001000c6580();
        uVar16 = uStack_80;
        uVar6 = uStack_88;
        *(undefined8 *)(lVar7 + lVar17) = uVar9;
        *(undefined8 *)(lVar7 + _DAT_112ec5730) = uVar11;
        *(undefined8 *)(lVar7 + _DAT_112ec5738) = uStack_80;
        *(undefined8 *)(lVar7 + _DAT_112ec5740) = uStack_88;
        *(undefined8 *)(lVar7 + _DAT_112ec5748) = uVar5;
        *(long *)(lVar7 + _DAT_112ec5750) = lVar4;
        *(long *)(lVar7 + _DAT_112ec5758) = lVar2;
        *(long *)(lVar7 + _DAT_112ec5760) = lVar15;
        func_0x000100029394(lVar14,lVar7 + _DAT_112ec5768);
        plVar12 = (long *)(lVar7 + _DAT_112ec5770);
        *plVar12 = lStack_98;
        plVar12[1] = (long)puStack_90;
        puVar3 = PTR_PTR_1126ab5f8;
        func_0x000107c610f8();
        func_0x000107c61174();
        puStack_90 = (undefined *)uVar11;
        func_0x000107c61174();
        uStack_80 = uVar16;
        func_0x000107c61174();
        uStack_88 = uVar6;
        func_0x000107c61174(uVar5);
        func_0x000107c61174(lVar4);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar15);
        func_0x000107c453e4();
        *(undefined **)(lVar7 + _DAT_112ec5778) = puVar3;
        func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
        lVar17 = lStack_a8;
        lVar10 = lStack_a8;
        func_0x0001000bda74(lStack_a8);
        uVar11 = 0;
        FUN_10287bfb8(0);
        pcVar1 = FUN_10287bf8c;
        func_0x0001000cb480(FUN_10287bf8c,0,uVar11);
        func_0x000107c61574(lVar10);
        *(code **)(lVar7 + _DAT_112ec5780) = pcVar1;
        lStack_70 = lStack_b0;
        plVar12 = &lStack_78;
        lStack_78 = lVar7;
        func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
        func_0x000107c61180();
        uVar11 = uStack_a0;
        FUN_10287bfcc(uStack_a0);
        func_0x000107c61170(puStack_90);
        func_0x000107c61170(uStack_80);
        func_0x000107c61170(uStack_88);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar15);
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(lVar17);
        func_0x000107c61170(plVar12);
        func_0x0001000293e4(lVar14);
        return plVar12;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028829cc);
      (*pcVar1)();
    }
  }
  return (long *)0x0;
}



/* Entry: 1028829cc; end: 102882acf;  */

void FUN_1028829cc(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  
  plVar2 = *(long **)(unaff_x20 + 0x38);
  func_0x000107c40670();
  func_0x000107c61180();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102882ad0);
    (*pcVar1)();
  }
  plVar3 = plVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(plVar2);
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112df8820,&UNK_10dae9e10);
    plVar2 = plVar3;
    func_0x0001000b637c();
    pcVar5 = *(code **)(*plVar2 + 0x60);
    func_0x000107c6157c(param_1);
    pcVar1 = FUN_102882f90;
    lVar4 = param_1;
    (*pcVar5)(FUN_102882f90);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(param_1);
    pcVar5 = pcVar1;
    func_0x000107c614f0(pcVar1);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(unaff_x20 + 0x60),pcVar5,lVar4);
    func_0x000107c61170(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
    return;
  }
  return;
}



/* Entry: 102882ad0; end: 102882adb;  */

void FUN_102882ad0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102882adc; end: 102882cb3;  */

void FUN_102882adc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_11055bf58;
  func_0x000107c613fc(&UNK_11055bf58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102882f98;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102882fa0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_11055bf70;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11055bfa8;
  func_0x000107c613fc(&UNK_11055bfa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102882fc0;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = (code *)0x102883080;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_11055bfc0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c5b4(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x70,0x69,0x34,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102882cb0);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x70,0x6b,0x2c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102882cb4);
  (*pcVar1)();
}



/* Entry: 102882cb4; end: 102882d9f;  */

void FUN_102882cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar1 = &UNK_11055bff8;
    func_0x000107c613fc(&UNK_11055bff8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lStack_48);
    puVar2 = &UNK_11055c020;
    func_0x000107c613fc(&UNK_11055c020,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    func_0x000107c61434(param_2);
    uVar3 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5d30,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lStack_48);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102882da0; end: 102882ddf;  */

void FUN_102882da0(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    FUN_10287eda4();
    func_0x000107c61170(lStack_28);
  }
  return;
}



/* Entry: 102882de0; end: 102882f6b;  */

void FUN_102882de0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102882f6c; end: 102882f8f;  */

void FUN_102882f6c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102882228();
  *param_1 = param_2;
  return;
}



/* Entry: 102882f90; end: 102882f9f;  */

void FUN_102882f90(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_11055bf58;
  func_0x000107c613fc(&UNK_11055bf58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102882f98;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102882fa0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_11055bf70;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11055bfa8;
  func_0x000107c613fc(&UNK_11055bfa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102882fc0;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = (code *)0x102883080;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_11055bfc0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c5b4(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x70,0x69,0x34,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102882cb0);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x70,0x6b,0x2c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102882cb4);
  (*pcVar1)();
}



/* Entry: 102882fa0; end: 102882fbf;  */

void FUN_102882fa0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102882fc0; end: 102882fc7;  */

void FUN_102882fc0(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    FUN_10287eda4();
    func_0x000107c61170(lStack_28);
  }
  return;
}



/* Entry: 102882fc8; end: 102883033;  */

void FUN_102882fc8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102883034;
  plVar3[0x3e] = lVar2;
  plVar3[0x3f] = lVar4;
  plVar3[0x3d] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e1c0,0,0);
  return;
}



/* Entry: 102883034; end: 10288306f;  */

void FUN_102883034(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010288306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102883070; end: 1028830b3;  */

void FUN_102883070(long param_1,long param_2)

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



/* Entry: 1028830b4; end: 102883187;  */

void FUN_1028830b4(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x72657375 || param_3 != -0x1c00000000000000) {
    uVar1 = 0x72657375;
    func_0x000107c605b8(0x72657375,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x70756f7267;
      if ((param_2 == 0x70756f7267) && (param_3 == -0x1b00000000000000)) {
        func_0x000107c6142c(0xe500000000000000);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x70756f7267,0xe500000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_102883114;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_102883114:
  *param_1 = uVar2;
  return;
}



/* Entry: 102883188; end: 10288319f;  */

undefined1  [16] FUN_102883188(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1028831a0; end: 1028831ef;  */

void FUN_1028831a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1028840e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1028831f0; end: 10288320f;  */

undefined8 FUN_1028831f0(void)

{
  return 1;
}



/* Entry: 102883210; end: 102883293;  */

void FUN_102883210(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x67;
  if (param_2 == 0x644970756f7267 && param_3 == -0x1900000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x644970756f7267,0xe700000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102883294; end: 10288329f;  */

undefined1  [16] FUN_102883294(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1028832a0; end: 1028832ef;  */

void FUN_1028832a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102884128();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1028832f0; end: 10288330b;  */

undefined8 FUN_1028832f0(void)

{
  return 1;
}



/* Entry: 10288330c; end: 10288338b;  */

void FUN_10288330c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x75;
  if (param_2 == 0x644972657375 && param_3 == -0x1a00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x644972657375,0xe600000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10288338c; end: 102883397;  */

undefined1  [16] FUN_10288338c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102883398; end: 1028833e7;  */

void FUN_102883398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102884168();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1028833e8; end: 10288362f;  */

void FUN_1028833e8(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112ec59e8;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112ec59e8,&UNK_10dae5d40);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)&lStack_90 - extraout_x8;
  lVar4 = 0x112ec59f0;
  func_0x0001000285a8(0x112ec59f0,&UNK_10dae5d48);
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = lVar9 - extraout_x8_00;
  lVar5 = 0x112ec59f8;
  func_0x0001000285a8(0x112ec59f8,&UNK_10dae5d50);
  lStack_80 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar7 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1028840e8();
  puVar6 = &UNK_11055c408;
  func_0x000107c606ec(lVar8,&UNK_11055c408,&UNK_11055c408,param_1,uVar1,uVar2);
  if (param_4 == '\x01') {
    uStack_51 = 1;
    func_0x000102884128();
    func_0x000107c6051c(lVar9,&UNK_11055c528,&uStack_51,lVar5,&UNK_11055c528,puVar6);
    func_0x000107c6053c(uStack_78,uStack_70);
    (**(code **)(lStack_88 + 8))(lVar9,lVar3);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  else {
    uStack_52 = 0;
    func_0x000102884168();
    func_0x000107c6051c(lVar7,&UNK_11055c498,&uStack_52,lVar5,&UNK_11055c498,puVar6);
    func_0x000107c6053c(uStack_78,uStack_70);
    (**(code **)(lStack_90 + 8))(lVar7,lVar4);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  return;
}



/* Entry: 102883630; end: 10288365b;  */

void FUN_102883630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_1028841a8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 10288365c; end: 102883677;  */

void FUN_10288365c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1028833e8(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 102883678; end: 102883783;  */

void FUN_102883678(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  cVar3 = *(char *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c60690(cVar3 == '\x01');
  func_0x000107c5fb58(auStack_78,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102883784; end: 10288379f;  */

long FUN_102883784(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if ((lVar1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,param_1[1],*param_2,param_2[1],0);
  return lVar1;
}



/* Entry: 1028837a0; end: 102883823;  */

void FUN_1028837a0(void)

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



/* Entry: 102883824; end: 102883897;  */

undefined1  [16] FUN_102883824(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0xea00000000007265;
  uVar3 = 0x696669746e656469;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xeb00000000656d61;
    uVar3 = 0x4e79616c70736964;
  }
  uVar2 = 0xee0064496e6f6974;
  uVar4 = 0x61737265766e6f63;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 102883898; end: 1028838bb;  */

void FUN_102883898(undefined1 *param_1,undefined1 param_2)

{
  FUN_1028846d4();
  *param_1 = param_2;
  return;
}



/* Entry: 1028838bc; end: 1028838d3;  */

undefined1  [16] FUN_1028838bc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1028838d4; end: 102883923;  */

void FUN_1028838d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102884654();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102883924; end: 102883a83;  */

void FUN_102883924(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  lVar2 = 0x112ec5a18;
  func_0x0001000285a8(0x112ec5a18,&UNK_10dae5d58);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_102884654();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_11055c378,&UNK_11055c378,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x000107c6053c(uVar3,unaff_x20[1],&uStack_70,lVar2);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    uStack_70 = unaff_x20[2];
    uStack_60 = *(undefined1 *)(unaff_x20 + 4);
    uStack_71 = 1;
    func_0x000102884694();
    func_0x000107c60554(&uStack_70,&uStack_71,lVar2,&UNK_11055c150,uVar3);
    uStack_70 = CONCAT71(uStack_70._1_7_,2);
    func_0x000107c6053c(unaff_x20[5],unaff_x20[6],&uStack_70,lVar2);
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,lVar2);
  return;
}



/* Entry: 102883a84; end: 102883acf;  */

void FUN_102883a84(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1028847fc(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 102883ad0; end: 102883ae3;  */

void FUN_102883ad0(void)

{
  FUN_102883924();
  return;
}



/* Entry: 102883ae4; end: 102883c8b;  */

void FUN_102883ae4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  cVar7 = *(char *)(unaff_x20 + 4);
  uVar3 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fb58(auStack_98,uVar1,uVar4);
  func_0x000107c60690(cVar7 == '\x01');
  func_0x000107c5fb58(auStack_98,uVar2,uVar5);
  func_0x000107c5fb58(auStack_98,uVar3,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 102883c8c; end: 102883ce3;  */

uint FUN_102883c8c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_102884598(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102883ce4; end: 102883ceb;  */

undefined8 FUN_102883ce4(void)

{
  return 1;
}



/* Entry: 102883cec; end: 102883d67;  */

void FUN_102883cec(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102883d68; end: 102883d8b;  */

undefined1  [16] FUN_102883d68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006449726573;
  auVar1._0_8_ = 0x55746e6572727563;
  return auVar1;
}



/* Entry: 102883d8c; end: 102883e17;  */

void FUN_102883d8c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x55746e6572727563 && param_3 == -0x12ffff9bb68d9a8d) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102883e18; end: 102883e23;  */

undefined1  [16] FUN_102883e18(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102883e24; end: 102883e73;  */

void FUN_102883e24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102884a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102883e74; end: 102883f9b;  */

/* WARNING: Removing unreachable block (ram,0x000102883f38) */

void FUN_102883e74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112ec5a40;
  func_0x0001000285a8(0x112ec5a40,&UNK_10dae5d68);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102884a18();
  puVar5 = &UNK_11055c2e8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11055c2e8,&UNK_11055c2e8,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102883f9c; end: 10288408b;  */

void FUN_102883f9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112ec5a30;
  func_0x0001000285a8(0x112ec5a30,&UNK_10dae5d60);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102884a18();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11055c2e8,&UNK_11055c2e8,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 10288408c; end: 1028840e7;  */

long FUN_10288408c(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 1028840e8; end: 1028841a7;  */

void FUN_1028840e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae64dc;
  func_0x000107c61520(&UNK_10dae64dc,&UNK_11055c408);
  puRam0000000112ec5a00 = puVar1;
  return;
}



/* Entry: 1028841a8; end: 102884597;  */

/* WARNING: Removing unreachable block (ram,0x000102884530) */
/* WARNING: Removing unreachable block (ram,0x000102884544) */

undefined * FUN_1028841a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long unaff_x21;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_51;
  
  lVar5 = 0x112ec5af0;
  func_0x0001000285a8(0x112ec5af0,&UNK_10dae6538);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0x112ec5af8;
  lStack_a0 = (long)&puStack_b0 - extraout_x8;
  func_0x0001000285a8(0x112ec5af8,&UNK_10dae6540);
  puVar13 = *(undefined **)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(puVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)&puStack_b0 - extraout_x8) - extraout_x8_00;
  lVar6 = 0x112ec5b00;
  func_0x0001000285a8(0x112ec5b00,&UNK_10dae6548);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_1028840e8();
  func_0x000107c606e0(lVar16,&UNK_11055c408,&UNK_11055c408,lVar7,uVar1,uVar2);
  lVar4 = lStack_98;
  lVar7 = lStack_a0;
  if (unaff_x21 == 0) {
    lVar8 = lVar6;
    puStack_b0 = puVar13;
    func_0x000107c60514();
    uVar12 = *(ulong *)(lVar8 + 0x10);
    lVar9 = lVar8;
    func_0x000102885928();
    if ((((uint)lVar9 & 0xff) != 2) && ((uVar12 & 0x7fffffffffffffff) == 0)) {
      uStack_51 = (undefined1)lVar9;
      if (((uint)lVar9 & 0xff) == 1) {
        func_0x000102884128();
        puVar13 = &UNK_11055c528;
        func_0x000107c604cc(lVar7,&UNK_11055c528,&uStack_51,lVar6,&UNK_11055c528,lVar9);
        func_0x000107c604f4();
        (**(code **)(lStack_a8 + 8))(lVar7,lVar4);
        (**(code **)(lVar15 + 8))(lVar16,lVar6);
        func_0x000107c615e8(lVar8);
      }
      else {
        func_0x000102884168();
        puVar13 = &UNK_11055c498;
        func_0x000107c604cc(lVar14,&UNK_11055c498,&uStack_51,lVar6,&UNK_11055c498,lVar9);
        func_0x000107c604f4();
        (**(code **)(puStack_b0 + 8))(lVar14,lVar5);
        (**(code **)(lVar15 + 8))(lVar16,lVar6);
        func_0x000107c615e8(lVar8);
      }
      func_0x0001000834e4(param_1);
      return puVar13;
    }
    puVar10 = (undefined *)0x0;
    func_0x000107c60344();
    puVar13 = puVar10;
    puVar11 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
    func_0x000107c613f8();
    lVar5 = 0x112da1fc8;
    func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
    iVar3 = *(int *)(lVar5 + 0x30);
    *puVar11 = &UNK_11055c150;
    func_0x000107c604d0(lVar6);
    func_0x000107c6033c((long)puVar11 + (long)iVar3);
    (**(code **)(*(long *)(puVar10 + -8) + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580,
               puVar10);
    func_0x000107c61654();
    (**(code **)(lVar15 + 8))(lVar16,lVar6);
    func_0x000107c615e8(lVar8);
  }
  func_0x0001000834e4(param_1);
  return puVar13;
}



/* Entry: 102884598; end: 102884653;  */

/* WARNING: Possible PIC construction at 0x0001028845c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028845cc) */

long FUN_102884598(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == *param_2 && param_1[1] == param_2[1]) {
    uVar2 = param_1[2];
    if ((char)param_1[4] == '\x01') {
      if ((char)param_2[4] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[4] == '\x01') {
      return 0;
    }
    if ((uVar2 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
    lVar1 = param_1[5];
    if ((lVar1 == param_2[5]) && (param_1[6] == param_2[6])) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )();
  return lVar1;
}



/* Entry: 102884654; end: 1028846d3;  */

void FUN_102884654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae63ec;
  func_0x000107c61520(&UNK_10dae63ec,&UNK_11055c378);
  puRam0000000112ec5a20 = puVar1;
  return;
}



/* Entry: 1028846d4; end: 1028847fb;  */

undefined4 FUN_1028846d4(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x61737265766e6f63;
  if ((param_1 == 0x61737265766e6f63 && param_2 == -0x11ff9bb69190968c) ||
     (func_0x000107c605b8(0x61737265766e6f63,0xee0064496e6f6974,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x696669746e656469;
    if (((param_1 == 0x696669746e656469) && (param_2 == -0x15ffffffffff8d9b)) ||
       (func_0x000107c605b8(0x696669746e656469,0xea00000000007265,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x4e79616c70736964) && (param_2 == -0x14ffffffff9a929f)) {
        func_0x000107c6142c(0xeb00000000656d61);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x4e79616c70736964,0xeb00000000656d61,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 1028847fc; end: 102884a17;  */

/* WARNING: Removing unreachable block (ram,0x000102884998) */
/* WARNING: Removing unreachable block (ram,0x00010288494c) */
/* WARNING: Removing unreachable block (ram,0x0001028849b0) */
/* WARNING: Removing unreachable block (ram,0x0001028849c4) */
/* WARNING: Removing unreachable block (ram,0x0001028848cc) */

void FUN_1028847fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x112ec5ae0;
  func_0x0001000285a8(0x112ec5ae0,&UNK_10dae6530);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102884654();
  func_0x000107c606e0((long)&uStack_90 - extraout_x8,&UNK_11055c378,&UNK_11055c378,lVar4,uVar1,uVar2
                     );
  if (unaff_x21 == 0) {
    uStack_78 = 0;
    puVar5 = &uStack_78;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_51 = 1;
    puStack_80 = puVar5;
    func_0x000102885860();
    func_0x000107c60508(&uStack_78,&UNK_11055c150,&uStack_51,lVar3,&UNK_11055c150,puVar5);
    uStack_90 = CONCAT71(uStack_77,uStack_78);
    uStack_88 = uStack_70;
    uStack_78 = 2;
    puVar5 = &uStack_78;
    lVar6 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar7 + 8))((long)&uStack_90 - extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_80;
    param_1[1] = lVar4;
    param_1[2] = uStack_90;
    param_1[3] = uStack_88;
    *(undefined1 *)(param_1 + 4) = uStack_68;
    param_1[5] = puVar5;
    param_1[6] = lVar6;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102884a18; end: 102884a57;  */

void FUN_102884a18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae639c;
  func_0x000107c61520(&UNK_10dae639c,&UNK_11055c2e8);
  puRam0000000112ec5a38 = puVar1;
  return;
}



/* Entry: 102884a58; end: 102884a5b;  */

void FUN_102884a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5e00;
  func_0x000107c61520(&UNK_10dae5e00,&UNK_11055c150);
  puRam0000000112ec5a48 = puVar1;
  return;
}



/* Entry: 102884a5c; end: 102884a9b;  */

void FUN_102884a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5e00;
  func_0x000107c61520(&UNK_10dae5e00,&UNK_11055c150);
  puRam0000000112ec5a48 = puVar1;
  return;
}



/* Entry: 102884a9c; end: 102884a9f;  */

void FUN_102884a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5eb8;
  func_0x000107c61520(&UNK_10dae5eb8,&UNK_11055c248);
  puRam0000000112ec5a50 = puVar1;
  return;
}



/* Entry: 102884aa0; end: 102884adf;  */

void FUN_102884aa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5eb8;
  func_0x000107c61520(&UNK_10dae5eb8,&UNK_11055c248);
  puRam0000000112ec5a50 = puVar1;
  return;
}



/* Entry: 102884ae0; end: 102884ae3;  */

void FUN_102884ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5f30;
  func_0x000107c61520(&UNK_10dae5f30,&UNK_11055c1c8);
  puRam0000000112ec5a58 = puVar1;
  return;
}



/* Entry: 102884ae4; end: 102884b23;  */

void FUN_102884ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5f30;
  func_0x000107c61520(&UNK_10dae5f30,&UNK_11055c1c8);
  puRam0000000112ec5a58 = puVar1;
  return;
}



/* Entry: 102884b24; end: 102884b27;  */

void FUN_102884b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5f58;
  func_0x000107c61520(&UNK_10dae5f58,&UNK_11055c1c8);
  puRam0000000112ec5a60 = puVar1;
  return;
}



/* Entry: 102884b28; end: 102884b67;  */

void FUN_102884b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5f58;
  func_0x000107c61520(&UNK_10dae5f58,&UNK_11055c1c8);
  puRam0000000112ec5a60 = puVar1;
  return;
}



/* Entry: 102884b68; end: 102884b83;  */

void FUN_102884b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5e28;
  func_0x000107c61520(&UNK_10dae5e28,&UNK_11055c248);
  puRam0000000112ec5798 = puVar1;
  return;
}



/* Entry: 102884b84; end: 102884c1f;  */

undefined8 * FUN_102884b84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1028815ec(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 102884c20; end: 102884c63;  */

undefined8 * FUN_102884c20(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001028815f4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 102884c64; end: 102884d1b;  */

int FUN_102884c64(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102884d1c; end: 102884d8b;  */

undefined8 * FUN_102884d1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102884d8c; end: 102884e1f;  */

int FUN_102884d8c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102884e20; end: 102884e7f;  */

long FUN_102884e20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102884e80; end: 102884f8b;  */

undefined8 * FUN_102884e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  FUN_1028815ec(uVar1,uVar2,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar3;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102884f8c; end: 102884feb;  */

undefined8 * FUN_102884f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar2;
  func_0x0001028815f4(uVar1,uVar4,uVar3);
  uVar1 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 102884fec; end: 102885467;  */

int FUN_102884fec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102885468; end: 1028854a7;  */

void FUN_102885468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae6094;
  func_0x000107c61520(&UNK_10dae6094,&UNK_11055c528);
  puRam0000000112ec5a68 = puVar1;
  return;
}



/* Entry: 1028854a8; end: 1028854ab;  */

void FUN_1028854a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae614c;
  func_0x000107c61520(&UNK_10dae614c,&UNK_11055c498);
  puRam0000000112ec5a70 = puVar1;
  return;
}



/* Entry: 1028854ac; end: 1028854eb;  */

void FUN_1028854ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae614c;
  func_0x000107c61520(&UNK_10dae614c,&UNK_11055c498);
  puRam0000000112ec5a70 = puVar1;
  return;
}



/* Entry: 1028854ec; end: 1028854ef;  */

void FUN_1028854ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae6204;
  func_0x000107c61520(&UNK_10dae6204,&UNK_11055c408);
  puRam0000000112ec5a78 = puVar1;
  return;
}



/* Entry: 1028854f0; end: 10288552f;  */

void FUN_1028854f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae6204;
  func_0x000107c61520(&UNK_10dae6204,&UNK_11055c408);
  puRam0000000112ec5a78 = puVar1;
  return;
}



/* Entry: 102885530; end: 102885533;  */

void FUN_102885530(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae62bc;
  func_0x000107c61520(&UNK_10dae62bc,&UNK_11055c378);
  puRam0000000112ec5a80 = puVar1;
  return;
}



/* Entry: 102885534; end: 102885573;  */

void FUN_102885534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae62bc;
  func_0x000107c61520(&UNK_10dae62bc,&UNK_11055c378);
  puRam0000000112ec5a80 = puVar1;
  return;
}



/* Entry: 102885574; end: 102885577;  */

void FUN_102885574(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae6374;
  func_0x000107c61520(&UNK_10dae6374,&UNK_11055c2e8);
  puRam0000000112ec5a88 = puVar1;
  return;
}



/* Entry: 102885578; end: 1028855b7;  */

void FUN_102885578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae6374;
  func_0x000107c61520(&UNK_10dae6374,&UNK_11055c2e8);
  puRam0000000112ec5a88 = puVar1;
  return;
}



/* Entry: 1028855b8; end: 1028855bb;  */

void FUN_1028855b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae630c;
  func_0x000107c61520(&UNK_10dae630c,&UNK_11055c2e8);
  puRam0000000112ec5a90 = puVar1;
  return;
}



/* Entry: 1028855bc; end: 1028855fb;  */

void FUN_1028855bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae630c;
  func_0x000107c61520(&UNK_10dae630c,&UNK_11055c2e8);
  puRam0000000112ec5a90 = puVar1;
  return;
}



/* Entry: 1028855fc; end: 1028855ff;  */

void FUN_1028855fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae62e4;
  func_0x000107c61520(&UNK_10dae62e4,&UNK_11055c2e8);
  puRam0000000112ec5a98 = puVar1;
  return;
}


