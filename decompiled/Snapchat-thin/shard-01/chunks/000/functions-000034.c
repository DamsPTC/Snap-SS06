/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c74994; end: 100c749df;  */

void FUN_100c74994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  func_0x0001008553e8(0,&PTR___NSConcreteGlobalBlock_110d987c8);
  uVar1 = uRam0000000113846ab0;
  uRam0000000113846ab0 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = uRam0000000113846ab0;
  func_0x000107c61174(uRam0000000113846ab0);
  uVar3 = 0;
  func_0x000107c60f94(0,500000000);
  uVar2 = uVar3;
  func_0x0001005855a8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10bcbe374;
  puStack_40 = &UNK_110849530;
  uStack_38 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_58);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c749e0; end: 100c74aaf;  */

void FUN_100c749e0(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = 0;
  func_0x000107c60f94(0,(long)(param_1 * 1e+09));
  uVar2 = uVar1;
  func_0x0001005855a8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10bcbe374;
  puStack_40 = &UNK_110849530;
  uStack_38 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_58);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c74ab0; end: 100c74af3; +[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices sharedInstance] */

void FUN_100c74ab0(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113813758,auStack_38,0,0);
  func_0x000107c6117c(uRam0000000113813758);
  return;
}



/* Entry: 100c74af4; end: 100c74b13; -[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices frameRateMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c74af4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11307cc98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c74b14; end: 100c74b1f; -[SCFrameRateMonitor applicationDidBecomeActive] */

void FUN_100c74b14(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}



/* Entry: 100c74b20; end: 100c74baf; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationDidBecomeActive:] */

/* WARNING: Possible PIC construction at 0x000100c74b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c74b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c74b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c74bb0; end: 100c74bc3;  */

void FUN_100c74bb0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar15 = *unaff_x20;
  puVar10 = *(ulong **)(lVar15 + 0x50);
  uVar12 = puVar10[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar12 + 0x40));
  puVar11 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = 0x112d9dd00;
  func_0x00010002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar10,uVar16,0,0);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(param_1,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar13 = unaff_x20[2];
  lVar14 = lVar13;
  func_0x000107c61434();
  lVar3 = lStack_c8;
  func_0x000107c5fc7c();
  if (lVar14 != 0) {
    lVar14 = 0;
    lStack_b0 = (long)*(int *)(lVar3 + 0x30);
    lStack_b8 = *(long *)(lVar15 + 0x58);
    pcStack_c0 = *(code **)(lStack_b8 + 8);
    lStack_a8 = (long)puVar11 - extraout_x8_00;
    do {
      lVar6 = lStack_a8;
      func_0x000107c5fc98(lStack_a8,lVar14,lVar13,lVar3);
      lVar15 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c755c4);
        (*pcVar2)();
      }
      uVar16 = *(undefined8 *)(lVar6 + lStack_b0);
      (**(code **)(uVar12 + 0x20))(puVar11,lVar6,puVar10);
      puVar7 = puVar10;
      (*pcStack_c0)(puVar10,lStack_b8);
      puVar8 = puVar7;
      FUN_100c755c4();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        func_0x000100083b20(&uStack_a0);
        lVar6 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar3 = lStack_c8;
        (**(code **)(*(long *)(lVar6 + 8) + 0x10))(param_1,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar16);
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
      }
      else {
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
        func_0x000107c61574(uVar16);
      }
      lVar6 = lVar13;
      func_0x000107c5fc7c(lVar13,lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar15 != lVar6);
  }
  func_0x000107c6142c(lVar13);
  return;
}



/* Entry: 100c74bc4; end: 100c74bcf; -[SCApplicationLogger _logApplicationOpenWithType:applicationState:triggerTs:] */

void FUN_100c74bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be504d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logApplicationOpenWithType_appl_112571ad0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 100c74bd0; end: 100c752ff; -[SCApplicationLogger _logApplicationOpenWithType:applicationState:isFromLogin:triggerTs:] */

void FUN_100c74bd0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5ba6c();
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126cbf78;
  func_0x000107c3de18();
  func_0x000107c61180();
  lVar3 = param_3;
  FUN_100c7592c(param_3);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5e508(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c3df94();
  func_0x000107c61180();
  func_0x000107c45314();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  if (param_3 == 0) goto LAB_100c752d0;
  puVar2 = PTR_PTR_1126cbf80;
  func_0x000107c610fc(PTR_PTR_1126cbf80);
  if (param_3 == 1) {
    func_0x000107c56fd4(puVar2,param_2,1);
    func_0x000107c56b00(puVar2,param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x000107c56b44(puVar2,param_2,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (param_3 == 3) {
      uVar1 = 3;
    }
    else {
      if (param_3 != 2) goto LAB_100c74d30;
      uVar1 = 2;
    }
    func_0x000107c56fd4(puVar2,param_2,uVar1);
  }
LAB_100c74d30:
  if (param_6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c40ef8();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
    func_0x000107c5279c(puVar2,param_2,param_6);
    func_0x000107c61174(param_6);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_6;
  }
  func_0x000107c61170(uVar5);
  func_0x000107c54cd0(puVar2,param_2,param_5);
  lVar3 = param_1;
  func_0x000107c3b874(param_1);
  func_0x000107c61180();
  func_0x000107c56134(puVar2,param_2,lVar3);
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c5a950();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c59068(puVar2,param_2,uVar1);
  puVar6 = PTR_PTR_1126af388;
  func_0x000107c3ece0(PTR_PTR_1126af388);
  func_0x000107c61180();
  lVar7 = *(long *)(param_1 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar7;
  func_0x000107c4150c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar8;
  func_0x000107c5aae4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  lVar9 = *(long *)(param_1 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar9;
  func_0x000107c414f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = uVar10;
  func_0x000107c44c18();
  func_0x000107c61170(uVar10);
  func_0x000107c53f28(puVar6,param_2,lVar3);
  func_0x000107c59120(puVar6,param_2,uVar5);
  puVar11 = PTR_PTR_1126af390;
  func_0x000107c43b7c(PTR_PTR_1126af390);
  func_0x000107c61180();
  func_0x000107c551e4(puVar6,param_2,puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c55430(puVar2,param_2,puVar6);
  if ((int)uVar8 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    func_0x000107c5c734(uVar12);
    func_0x000107c61180();
    uVar10 = uVar12;
    func_0x000107c414fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    lVar9 = param_1;
    func_0x000107c3c88c(param_1,param_2,uVar10);
    func_0x000107c59558(puVar2,param_2,lVar9);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    func_0x000107c5c734(uVar13);
    func_0x000107c61180();
    uVar12 = uVar13;
    func_0x000107c41508();
    func_0x000107c53f20(puVar2,param_2,uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c53f14(puVar2,param_2,lVar7);
    func_0x000107c57c28(puVar2,param_2,uVar10);
    puVar11 = PTR_PTR_1126cbf78;
    func_0x000107c3de1c(PTR_PTR_1126cbf78);
    func_0x000107c61180();
    FUN_100c6f294(lVar9);
    func_0x000107c61180();
    puVar14 = puVar11;
    func_0x000107c5e508(puVar11,param_2,&PTR____CFConstantStringClassReference_110dae8d8,lVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar9);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c5c734(uVar13);
    func_0x000107c61180();
    uVar12 = uVar13;
    func_0x000107c3df94();
    func_0x000107c61180();
    func_0x000107c45314();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar10);
  }
  if (param_4 < 3) {
    func_0x000107c52854(puVar2,param_2,param_4);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c5c734(uVar10);
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c4bfb0(uVar10,param_2,puVar2);
  }
  else {
    func_0x000107c4bf90(uVar10,param_2,puVar2,*(undefined8 *)(param_1 + 0x28));
  }
  func_0x000107c61170(uVar10);
  func_0x000107c3bde0(param_1);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar14 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  if (puVar14 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x000107c4df8c(&uStack_78,puVar14);
  }
  func_0x000107c51804(puVar11,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = PTR_PTR_1126cbf78;
  func_0x000107c3ce78(PTR_PTR_1126cbf78);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar9 = lVar3;
  func_0x000107c4adac(lVar3);
  func_0x000107c5c1ec(puVar14,param_2,lVar9 != 0);
  func_0x000107c61180();
  puVar16 = puVar15;
  func_0x000107c5e508(puVar15,param_2,&PTR____CFConstantStringClassReference_110e566b8,puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c1ec(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar8);
  func_0x000107c61180();
  puVar15 = puVar16;
  func_0x000107c5e508(puVar16,param_2,&PTR____CFConstantStringClassReference_110e566d8,puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar9 = lVar7;
  func_0x000107c4adac(lVar7);
  func_0x000107c5c1ec(puVar14,param_2,lVar9 != 0);
  func_0x000107c61180();
  puVar16 = puVar15;
  func_0x000107c5e508(puVar15,param_2,&PTR____CFConstantStringClassReference_110e566f8,puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar10);
  func_0x000107c61180();
  uVar8 = uVar10;
  func_0x000107c3df94();
  func_0x000107c61180();
  func_0x000107c45314();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
LAB_100c752d0:
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 100c75300; end: 100c75347;  */

void FUN_100c75300(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4acfc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c75348; end: 100c755c3;  */

void FUN_100c75348(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar15 = *unaff_x20;
  puVar10 = *(ulong **)(lVar15 + 0x50);
  uVar12 = puVar10[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar12 + 0x40));
  puVar11 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = 0x112d9dd00;
  func_0x00010002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar10,uVar16,0,0);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(param_1,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar13 = unaff_x20[2];
  lVar14 = lVar13;
  func_0x000107c61434();
  lVar3 = lStack_c8;
  func_0x000107c5fc7c();
  if (lVar14 != 0) {
    lVar14 = 0;
    lStack_b0 = (long)*(int *)(lVar3 + 0x30);
    lStack_b8 = *(long *)(lVar15 + 0x58);
    pcStack_c0 = *(code **)(lStack_b8 + 8);
    lStack_a8 = (long)puVar11 - extraout_x8_00;
    do {
      lVar6 = lStack_a8;
      func_0x000107c5fc98(lStack_a8,lVar14,lVar13,lVar3);
      lVar15 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c755c4);
        (*pcVar2)();
      }
      uVar16 = *(undefined8 *)(lVar6 + lStack_b0);
      (**(code **)(uVar12 + 0x20))(puVar11,lVar6,puVar10);
      puVar7 = puVar10;
      (*pcStack_c0)(puVar10,lStack_b8);
      puVar8 = puVar7;
      FUN_100c755c4();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        func_0x000100083b20(&uStack_a0);
        lVar6 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar3 = lStack_c8;
        (**(code **)(*(long *)(lVar6 + 8) + 0x10))(param_1,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar16);
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
      }
      else {
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
        func_0x000107c61574(uVar16);
      }
      lVar6 = lVar13;
      func_0x000107c5fc7c(lVar13,lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar15 != lVar6);
  }
  func_0x000107c6142c(lVar13);
  return;
}



/* Entry: 100c755c4; end: 100c755db;  */

undefined * FUN_100c755c4(void)

{
  return &UNK_10dcd3978;
}



/* Entry: 100c755dc; end: 100c7560b; -[SCLogger startBlizzardSession] */

void FUN_100c755dc(undefined8 param_1)

{
  func_0x000107c3eabc();
  func_0x000107c61180();
  func_0x000107c5bbb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c7560c; end: 100c7563b; -[SCBlizzardEventLoggerAdapter startSession] */

void FUN_100c7560c(undefined8 param_1)

{
  func_0x000107c5207c();
  func_0x000107c61180();
  func_0x000107c5bbb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c7563c; end: 100c7565b;  */

void FUN_100c7563c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3d18);
  return;
}



/* Entry: 100c7565c; end: 100c756d7;  */

/* WARNING: Possible PIC construction at 0x000100c756ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c756bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c756b0) */
/* WARNING: Removing unreachable block (ram,0x000100c756c0) */

void FUN_100c7565c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100c7563c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_5;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103fd610;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c756d8; end: 100c756e3;  */

void FUN_100c756d8(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100c7572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c756e4; end: 100c7572f;  */

void FUN_100c756e4(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100c7572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c75730; end: 100c7579f;  */

/* WARNING: Possible PIC construction at 0x000100c75788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7578c) */

void FUN_100c75730(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981308);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100c757a0; end: 100c757a7;  */

void FUN_100c757a0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_100c75878();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a71a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103c5850;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100c757a8; end: 100c757af; -[SCBlizzardEventLoggerAdapter sessionLogger] */

undefined8 FUN_100c757a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100c757b0; end: 100c75877; -[SCBlizzardSessionLogger startSession] */

void FUN_100c757b0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c4c01c(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3d7d8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c75878; end: 100c75897;  */

void FUN_100c75878(void)

{
  func_0x000107c61168(&PTR_PTR_112da2250);
  return;
}



/* Entry: 100c75898; end: 100c758f7;  */

void FUN_100c75898(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  FUN_100c75878();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a71a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103c5850;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c758f8; end: 100c758ff; -[SCBlizzardSessionLogger loggingQueue] */

undefined8 FUN_100c758f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c75900; end: 100c7592b; +[SCGrapheneApplicationMetric appOpen] */

void FUN_100c75900(void)

{
  func_0x000107c610f4(PTR_PTR_1126cbf78);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c7592c; end: 100c7594b;  */

undefined * FUN_100c7592c(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d905d0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c7594c; end: 100c759bf; -[SCGrapheneCoreLocationMetric2 init] */

undefined1 * FUN_100c7594c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e76f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c759c0; end: 100c759c3;  */

void FUN_100c759c0(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  if (uStack_40 == 0) {
    func_0x00010010c498(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,uStack_40);
    uVar1 = uStack_40;
    (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
    if ((uVar1 & 0xff00000000) != 0x200000000) {
      puVar2 = &UNK_1103c58d8;
      func_0x000107c613fc(&UNK_1103c58d8,0x20,7);
      *(int *)(puVar2 + 0x10) = (int)uVar1;
      puVar2[0x14] = (byte)(uVar1 >> 0x20) & 1;
      *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
      puVar3 = &UNK_1103c5900;
      func_0x000107c613fc(&UNK_1103c5900,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10d946868;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x000107c6157c();
      uVar4 = 0x22;
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946870,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 100c759c4; end: 100c75aef;  */

void FUN_100c759c4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  if (uStack_40 == 0) {
    func_0x00010010c498(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,uStack_40);
    uVar1 = uStack_40;
    (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
    if ((uVar1 & 0xff00000000) != 0x200000000) {
      puVar2 = &UNK_1103c58d8;
      func_0x000107c613fc(&UNK_1103c58d8,0x20,7);
      *(int *)(puVar2 + 0x10) = (int)uVar1;
      puVar2[0x14] = (byte)(uVar1 >> 0x20) & 1;
      *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
      puVar3 = &UNK_1103c5900;
      func_0x000107c613fc(&UNK_1103c5900,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10d946868;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x000107c6157c();
      uVar4 = 0x22;
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946870,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 100c75af0; end: 100c75b13;  */

void FUN_100c75af0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c75b14; end: 100c75b1f;  */

void FUN_100c75b14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c75b20; end: 100c75b7f;  */

/* WARNING: Possible PIC construction at 0x000100c75b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c75b5c) */

void FUN_100c75b20(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c52068(param_1);
    func_0x000107c61180();
    func_0x000107c43de0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c75b80; end: 100c75b87; -[SCBlizzardSessionLogger sessionIdProvider] */

undefined8 FUN_100c75b80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c75b88; end: 100c75d6b; -[SCBlizzardSessionIdProvider generateNewSessionId] */

void FUN_100c75b88(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 8;
  func_0x000107c611ec(puVar1);
  if ((param_1[0xc] & 1) == 0) {
    puVar3 = param_1;
    func_0x000107c3c1f8();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    func_0x000107c61170(uVar9);
  }
  param_1[0xc] = 0;
  puVar2 = PTR_PTR_1126d05a8;
  puVar4 = param_1;
  func_0x000107c52060();
  func_0x000107c61180();
  puVar3 = puVar4;
  func_0x000107c53ca8(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c52060();
  func_0x000107c61180();
  func_0x000107c611f0(puVar1);
  func_0x000107c611ec(0x1136c4ba8);
  lVar5 = lRam00000001136c4bb0;
  func_0x000107c40794();
  func_0x000107c611f0(0x1136c4ba8);
  if (param_1 != (undefined *)0x0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x000107c61174(lVar5);
    lVar6 = lVar5;
    func_0x000107c4080c();
    if (lVar6 != 0) {
      lVar10 = *plStack_100;
      do {
        lVar11 = 0;
        do {
          if (*plStack_100 != lVar10) {
            func_0x000107c61128(lVar5);
          }
          lVar7 = *(long *)(lStack_108 + lVar11 * 8);
          (**(code **)(lVar7 + 0x10))(lVar7,param_1);
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar5;
        puVar8 = &uStack_110;
        func_0x000107c4080c();
      } while (lVar6 != 0);
    }
    func_0x000107c61170(lVar5);
    puVar3 = (undefined *)puVar8;
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(0x1136c4ba8);
  func_0x000107c60bd8(param_1);
  func_0x000107c61178();
  FUN_100c75f1c();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_10f3b1707;
  }
  else {
    func_0x000107c613c8();
  }
  PTR_DAT_113170118 = puVar3;
  return;
}



/* Entry: 100c75d6c; end: 100c75d87; +[KSCrash setCurrentSessionID:] */

void FUN_100c75d6c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  func_0x000107c61178();
  FUN_100c75f1c();
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_10f3b1707;
  }
  else {
    func_0x000107c613c8();
  }
  PTR_DAT_113170118 = param_3;
  return;
}



/* Entry: 100c75d88; end: 100c75f1b; -[SCGrapheneRegistry applicationGraphene] */

void FUN_100c75d88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100c75e10;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3a88 != -1) {
    func_0x00010002a2fc(0x1136c3a88,&puStack_48);
  }
  uVar1 = uRam00000001136c3a80;
  func_0x000107c61174(uRam00000001136c3a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c75f1c; end: 100c75f23;  */

void FUN_100c75f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf260f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cStringUsingEncoding__1125a71e0,4);
  return;
}



/* Entry: 100c75f24; end: 100c75f4f;  */

void FUN_100c75f24(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_10f3b1707;
  }
  else {
    func_0x000107c613c8();
  }
  PTR_DAT_113170118 = param_1;
  return;
}



/* Entry: 100c75f50; end: 100c75fa3;  */

void FUN_100c75f50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 100c75fa4; end: 100c75fc3;  */

void FUN_100c75fa4(void)

{
  func_0x000107c61168(&PTR_PTR_112da0428);
  return;
}



/* Entry: 100c75fc4; end: 100c76047;  */

void FUN_100c75fc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100c75fa4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103bd8a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c76048; end: 100c760c7; -[SCAAppApplicationOpen setOpenState:] */

/* WARNING: Possible PIC construction at 0x000100c760b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c760b4) */

void FUN_100c76048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c7592c(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_111015798,0x10,puVar1,3
                      ,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c760c8; end: 100c761cb; -[SCCameraHardwareServicesAPIImpl applicationDidBecomeActive] */

void FUN_100c760c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c4e524(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100c761cc; end: 100c761d3;  */

/* WARNING: Possible PIC construction at 0x000100c762e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c762ec) */

void FUN_100c761cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar3 = param_1;
    func_0x0001000d1f44();
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c56be8(lVar4);
    func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c761d4; end: 100c761d7; -[SCApplicationLifecycleEventsImpl didBecomeActivePublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c761d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091dd8));
  return;
}



/* Entry: 100c761d8; end: 100c7625f; -[SCAAppApplicationOpen setAppOpenTriggerTs:] */

/* WARNING: Possible PIC construction at 0x000100c76228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7622c) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_100c761d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5c9e4(param_3);
    func_0x000107c4d954(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111015678,2,puVar1,5);
  return;
}



/* Entry: 100c76260; end: 100c7630f;  */

/* WARNING: Possible PIC construction at 0x000100c762e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c762ec) */

void FUN_100c76260(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar3 = param_1;
    func_0x0001000d1f44();
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c56be8(param_3);
    func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c76310; end: 100c76397; -[SCAAppApplicationOpen setFromLogin:] */

void FUN_100c76310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf618,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c76398; end: 100c76443; -[SCCameraHardwareServicesAPIImpl _applicationDidBecomeActive] */

/* WARNING: Possible PIC construction at 0x000100c763c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c763f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c763cc) */
/* WARNING: Removing unreachable block (ram,0x000100c763fc) */

void FUN_100c76398(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c53fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c76444; end: 100c765af; -[SCApplicationLogger _getLongClientId] */

void FUN_100c76444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cbf78;
    func_0x000107c41914(PTR_PTR_1126cbf78);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3df94();
    func_0x000107c61180();
    func_0x000107c45318();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c3abc4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100c765b0; end: 100c7664f; -[SCManagedCaptureSessionImpl setDelegate:] */

/* WARNING: Possible PIC construction at 0x000100c76608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7660c) */

void FUN_100c765b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c611a0(param_1 + 0x18,param_3);
  func_0x000107c61174();
  if (param_3 == 0) {
    func_0x000107c3c914(param_1);
    lVar1 = 0;
  }
  else {
    func_0x000107c3c8d4(param_1);
    lVar1 = param_1 + 0x18;
    func_0x000107c61148(lVar1);
    func_0x000107c4a360(param_1);
    func_0x000107c4c230(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c76650; end: 100c766fb; -[SCCrashAppStateTracker updateAppState:] */

/* WARNING: Possible PIC construction at 0x000100c766b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c766b8) */

void FUN_100c76650(long param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (*(char **)(param_1 + 0x28) != (char *)0x0) {
    **(char **)(param_1 + 0x28) = param_3 + '0';
    return;
  }
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c766fc; end: 100c766ff; -[SCCameraHardwareServicesAPIImpl managedCaptureSessionRunningDidChange:] */

void FUN_100c766fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__managedCaptureSessionRunningDid_112574bc0);
  return;
}



/* Entry: 100c76700; end: 100c768df; -[SCCameraHardwareServicesAPIImpl _managedCaptureSessionRunningDidChange:] */

/* WARNING: Possible PIC construction at 0x000100c7674c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7677c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c767d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c768b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c768c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7685c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c768c8) */
/* WARNING: Removing unreachable block (ram,0x000100c768b8) */
/* WARNING: Removing unreachable block (ram,0x000100c767d8) */
/* WARNING: Removing unreachable block (ram,0x000100c76780) */
/* WARNING: Removing unreachable block (ram,0x000100c76798) */
/* WARNING: Removing unreachable block (ram,0x000100c7682c) */
/* WARNING: Removing unreachable block (ram,0x000100c7679c) */
/* WARNING: Removing unreachable block (ram,0x000100c76750) */
/* WARNING: Removing unreachable block (ram,0x000100c76784) */
/* WARNING: Removing unreachable block (ram,0x000100c7675c) */
/* WARNING: Removing unreachable block (ram,0x000100c76860) */
/* WARNING: Removing unreachable block (ram,0x000100c768b0) */

void FUN_100c76700(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c3e0d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c768e0; end: 100c769f3; -[SCCameraHardwareServicesAPIImpl resetExposureAdjustment] */

void FUN_100c768e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c50534();
  func_0x000107c61170(uVar1);
  lVar2 = param_1;
  func_0x000107c3b9b0(param_1);
  func_0x000107c61180();
  func_0x000107c531c8(0x3f400000);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3b9b0();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4f7e8();
  func_0x000107c61180();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_1052efd60;
  puStack_40 = &UNK_110842e18;
  lStack_38 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c4e528(0x3fe19999a0000000,uVar1,param_2,&puStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100c769f4; end: 100c76a8b; -[SCManagedDeviceCapacityAnalyzerImpl resetExposureAdjustment] */

void FUN_100c769f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR_PTR_1126b9df8;
  func_0x000107c41a2c(PTR_PTR_1126b9df8,param_2,1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c76a8c; end: 100c76b43; -[SCManagedStillImageCapturerV2 _didReceiveChangeAdjustingExposureEvent:] */

void FUN_100c76a8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e590(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c76b44; end: 100c76b83;  */

void FUN_100c76b44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x14) = *(undefined1 *)(param_1 + 0x28);
    func_0x000107c3b490(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c76b84; end: 100c76b8b; -[SCManagedStillImageCapturerV2 setCaptureDeadline:] */

void FUN_100c76b84(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 100c76b8c; end: 100c76bff; -[SCRegistrationPreferencesDeviceInfoProvider initWithPreferences:] */

undefined1 * FUN_100c76b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7408;
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



/* Entry: 100c76c00; end: 100c76c9b; -[SCCaptureSessionFixer managedCaptureSessionRunningDidChange:] */

void FUN_100c76c00(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    param_1 = param_1 + 0x38;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    func_0x000107c4e524();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100c76c9c; end: 100c76ca7; -[SCManagedCapturerSessionStateManagerImpl sessionDidStartRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c76c9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  FUN_100c76ca8(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c76ca8; end: 100c77187;  */

/* WARNING: Possible PIC construction at 0x000100c76d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7700c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c77034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c76f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c77138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7711c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c770fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c770bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c770d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c770c0) */
/* WARNING: Removing unreachable block (ram,0x000100c77120) */
/* WARNING: Removing unreachable block (ram,0x000100c76f84) */
/* WARNING: Removing unreachable block (ram,0x000100c77100) */
/* WARNING: Removing unreachable block (ram,0x000100c77138) */
/* WARNING: Removing unreachable block (ram,0x000100c77038) */
/* WARNING: Removing unreachable block (ram,0x000100c77010) */
/* WARNING: Removing unreachable block (ram,0x000100c76f98) */
/* WARNING: Removing unreachable block (ram,0x000100c76e94) */
/* WARNING: Removing unreachable block (ram,0x000100c76e74) */
/* WARNING: Removing unreachable block (ram,0x000100c76ddc) */
/* WARNING: Removing unreachable block (ram,0x000100c76f90) */
/* WARNING: Removing unreachable block (ram,0x000100c76e50) */
/* WARNING: Removing unreachable block (ram,0x000100c76da0) */
/* WARNING: Removing unreachable block (ram,0x000100c76d50) */
/* WARNING: Removing unreachable block (ram,0x000100c7715c) */
/* WARNING: Removing unreachable block (ram,0x000100c76d84) */
/* WARNING: Removing unreachable block (ram,0x000100c76d20) */
/* WARNING: Removing unreachable block (ram,0x000100c770d4) */
/* WARNING: Removing unreachable block (ram,0x000100c770d8) */
/* WARNING: Removing unreachable block (ram,0x000100c7713c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c76ca8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar1 = &UNK_1103bf0a0;
    func_0x000107c613fc(&UNK_1103bf0a0,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = 0x101464e7c;
    *(ulong *)(puVar1 + 0x20) = param_4;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,3);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103bf0c8;
      func_0x000107c613fc(&UNK_1103bf0c8,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1014653d8;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101465290;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103bf0e0;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c61578(param_4,2);
      }
      else {
        uVar4 = param_4;
        FUN_101457920();
        if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61578(param_4,2);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar2);
          puVar3 = puVar1;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100c77188; end: 100c77197;  */

void FUN_100c77188(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c77198; end: 100c77217; -[SCBatteryPageViewLogger _didBecomeActive] */

void FUN_100c77198(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c3b3e4();
  uVar1 = param_1;
  func_0x000107c5ccc4(PTR_PTR_1126ae4f0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100c78b80;
  puStack_50 = &UNK_110858dc0;
  lStack_48 = param_2;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 8),param_3,&puStack_68);
  return;
}



/* Entry: 100c77218; end: 100c7721b;  */

void FUN_100c77218(long param_1,long param_2)

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



/* Entry: 100c7721c; end: 100c772fb; -[SCCaptureSessionFixer applicationDidBecomeActive] */

void FUN_100c7721c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  param_1 = param_1 + 0x38;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4f7e8();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4e590(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c772fc; end: 100c7738b;  */

void FUN_100c772fc(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    func_0x000107c3c418(param_1);
    lVar1 = param_1;
    func_0x000107c3baac();
    if ((int)lVar1 != 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      puStack_38 = &UNK_10702b6a4;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_48);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c7738c; end: 100c773fb; -[SCCaptureSessionFixer _runningConsistencyCheckAndFix] */

void FUN_100c7738c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3e0d8();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be98230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runningARSessionConsistencyChec_112583a28)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be98250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runningAVCaptureSessionConsiste_112583a30);
  return;
}



/* Entry: 100c773fc; end: 100c77403; -[SCRegistrationPreferencesDeviceInfoProvider SC14DaysDeviceId] */

void FUN_100c773fc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = *(undefined **)(param_2 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c4d9c0(puVar1,param_3,&PTR____CFConstantStringClassReference_110dcea38);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c4d9e8(puVar2,param_3,&PTR____CFConstantStringClassReference_110dcea78);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324();
  func_0x000107c61180();
  puVar6 = puVar5;
  if (((puVar3 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) ||
     (func_0x000107c5c9ec(puVar5,param_3,puVar4), 1209600.0 <= param_1)) {
    func_0x00010011df08();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dcea58;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dcea78;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar6;
    puStack_60 = puVar5;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_68,&ppuStack_78,2)
    ;
    func_0x000107c61180();
    func_0x000107c56bcc(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110dcea38);
    func_0x000107c61170(puVar3);
    func_0x000107c5c5d4(puVar1);
    puVar3 = puVar6;
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  puVar6 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    pcStack_88 = FUN_100c77594;
    puVar3 = puVar6 + 0x38;
    puStack_b0 = puVar5;
    puStack_a8 = puVar4;
    puStack_a0 = puVar2;
    puStack_98 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x000107c61148();
    puVar2 = puVar3;
    func_0x000107c3ddc4();
    func_0x000107c61170(puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar6;
      func_0x000107c3baac();
      if ((int)puVar2 != 0) {
        puVar2 = puVar6 + 0x40;
        func_0x000107c61148();
        puVar3 = puVar2;
        func_0x000107c4a360();
        func_0x000107c61170(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
          uVar8 = *(undefined8 *)(puVar6 + 0x88);
          uVar7 = 2;
          func_0x0001003a49a8(2);
          func_0x000107c61180();
          func_0x000107c548e8(uVar8,param_3,2,uVar7);
          func_0x000107c61170(uVar7);
          lVar9 = *(long *)(puVar6 + 0x10);
          func_0x000100078e94();
          func_0x000107c61180();
          if (lVar9 < 0x17) {
            puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d0 = 0xc2000000;
            puStack_c8 = &UNK_107029ef4;
            puStack_c0 = &UNK_110842e18;
            puStack_b8 = puVar6;
            func_0x000107c4e524(uVar7,param_3,&puStack_d8);
            func_0x000107c61170(uVar7);
            puVar2 = puVar6 + 0x40;
            func_0x000107c61148(puVar2);
            func_0x000107c43660();
            func_0x000107c61170(puVar2);
          }
          else {
            puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_f8 = 0xc2000000;
            puStack_f0 = &UNK_107029f3c;
            puStack_e8 = &UNK_110842e18;
            puStack_e0 = puVar6;
            func_0x000107c4e524(uVar7,param_3,&puStack_100);
            func_0x000107c61170(uVar7);
            func_0x000107c3c8ec(puVar6);
          }
          puVar6 = puVar6 + 0x40;
          func_0x000107c61148(puVar6);
          func_0x000107c4a360();
          func_0x000107c61170(puVar6);
          return;
        }
      }
      *(undefined8 *)(puVar6 + 0x10) = 0;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c77404; end: 100c77593;  */

void FUN_100c77404(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar1 = param_2;
  func_0x000107c4d9c0(param_2,param_3,&PTR____CFConstantStringClassReference_110dcea38);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4d9e8(puVar1,param_3,&PTR____CFConstantStringClassReference_110dcea78);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324();
  func_0x000107c61180();
  puVar5 = puVar4;
  if (((puVar2 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) ||
     (func_0x000107c5c9ec(puVar4,param_3,puVar3), 1209600.0 <= param_1)) {
    func_0x00010011df08();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dcea58;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dcea78;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar5;
    puStack_60 = puVar4;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_68,&ppuStack_78,2)
    ;
    func_0x000107c61180();
    func_0x000107c56bcc(param_2,param_3,puVar2,&PTR____CFConstantStringClassReference_110dcea38);
    func_0x000107c61170(puVar2);
    func_0x000107c5c5d4(param_2);
    puVar2 = puVar5;
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  puVar5 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    pcStack_88 = FUN_100c77594;
    puVar2 = puVar5 + 0x38;
    puStack_b0 = puVar4;
    puStack_a8 = puVar3;
    puStack_a0 = puVar1;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x000107c61148();
    puVar1 = puVar2;
    func_0x000107c3ddc4();
    func_0x000107c61170(puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = puVar5;
      func_0x000107c3baac();
      if ((int)puVar1 != 0) {
        puVar1 = puVar5 + 0x40;
        func_0x000107c61148();
        puVar2 = puVar1;
        func_0x000107c4a360();
        func_0x000107c61170(puVar1);
        if (((ulong)puVar2 & 1) == 0) {
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          uVar7 = *(undefined8 *)(puVar5 + 0x88);
          uVar6 = 2;
          func_0x0001003a49a8(2);
          func_0x000107c61180();
          func_0x000107c548e8(uVar7,param_3,2,uVar6);
          func_0x000107c61170(uVar6);
          lVar8 = *(long *)(puVar5 + 0x10);
          func_0x000100078e94();
          func_0x000107c61180();
          if (lVar8 < 0x17) {
            puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d0 = 0xc2000000;
            puStack_c8 = &UNK_107029ef4;
            puStack_c0 = &UNK_110842e18;
            puStack_b8 = puVar5;
            func_0x000107c4e524(uVar6,param_3,&puStack_d8);
            func_0x000107c61170(uVar6);
            puVar1 = puVar5 + 0x40;
            func_0x000107c61148(puVar1);
            func_0x000107c43660();
            func_0x000107c61170(puVar1);
          }
          else {
            puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_f8 = 0xc2000000;
            puStack_f0 = &UNK_107029f3c;
            puStack_e8 = &UNK_110842e18;
            puStack_e0 = puVar5;
            func_0x000107c4e524(uVar6,param_3,&puStack_100);
            func_0x000107c61170(uVar6);
            func_0x000107c3c8ec(puVar5);
          }
          puVar5 = puVar5 + 0x40;
          func_0x000107c61148(puVar5);
          func_0x000107c4a360();
          func_0x000107c61170(puVar5);
          return;
        }
      }
      *(undefined8 *)(puVar5 + 0x10) = 0;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c77594; end: 100c77727; -[SCCaptureSessionFixer _runningAVCaptureSessionConsistencyCheckAndFix] */

void FUN_100c77594(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = param_1 + 0x38;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c3ddc4();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar5 = param_1;
    func_0x000107c3baac();
    if ((int)lVar5 != 0) {
      uVar1 = param_1 + 0x40;
      func_0x000107c61148();
      uVar2 = uVar1;
      func_0x000107c4a360();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) == 0) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        uVar4 = *(undefined8 *)(param_1 + 0x88);
        uVar3 = 2;
        func_0x0001003a49a8(2);
        func_0x000107c61180();
        func_0x000107c548e8(uVar4,param_2,2,uVar3);
        func_0x000107c61170(uVar3);
        lVar5 = *(long *)(param_1 + 0x10);
        func_0x000100078e94();
        func_0x000107c61180();
        if (lVar5 < 0x17) {
          puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_50 = 0xc2000000;
          puStack_48 = &UNK_107029ef4;
          puStack_40 = &UNK_110842e18;
          lStack_38 = param_1;
          func_0x000107c4e524(uVar3,param_2,&puStack_58);
          func_0x000107c61170(uVar3);
          lVar5 = param_1 + 0x40;
          func_0x000107c61148(lVar5);
          func_0x000107c43660();
          func_0x000107c61170(lVar5);
        }
        else {
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0xc2000000;
          puStack_70 = &UNK_107029f3c;
          puStack_68 = &UNK_110842e18;
          lStack_60 = param_1;
          func_0x000107c4e524(uVar3,param_2,&puStack_80);
          func_0x000107c61170(uVar3);
          func_0x000107c3c8ec(param_1);
        }
        param_1 = param_1 + 0x40;
        func_0x000107c61148(param_1);
        func_0x000107c4a360();
        func_0x000107c61170(param_1);
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 100c77728; end: 100c7772b; -[SCCaptureSessionFixer _isCameraActive] */

void FUN_100c77728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraHardwareRequestHandlerTu_1125f9190);
  return;
}



/* Entry: 100c7772c; end: 100c77733; -[SCCaptureSessionFixer isCameraHardwareRequestHandlerTurnedOn] */

undefined1 FUN_100c7772c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 100c77734; end: 100c778cb;  */

void FUN_100c77734(long param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cf10);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cf10,&uStack_80,param_3 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  puVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100c778cc; end: 100c778e3; -[SCAAppApplicationOpen setLongClientId:] */

void FUN_100c778cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,0xc,param_3,0);
  return;
}



/* Entry: 100c778e4; end: 100c77913;  */

void FUN_100c778e4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6e50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 100c77914; end: 100c77a13;  */

undefined1 * FUN_100c77914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a78c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9838);
  func_0x000107c61180();
  func_0x000107c3b364();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c4fc88(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  puVar4 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  func_0x000107c60e78();
  ppuVar5 = &puStack_70;
  pcStack_48 = FUN_100c77a14;
  puStack_68 = PTR_PTR_1126e7398;
  puStack_70 = puVar4;
  puStack_60 = puVar2;
  uStack_58 = uVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    func_0x000107c3fa5c(ppuVar5);
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 100c77a14; end: 100c77a63; -[SCInMemoryDeepLinkInfoService init] */

undefined1 * FUN_100c77a14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7398;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c3fa5c(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c77a64; end: 100c77abf; -[SCInMemoryDeepLinkInfoService clear] */

/* WARNING: Possible PIC construction at 0x000100c77a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c77a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c77a88) */
/* WARNING: Removing unreachable block (ram,0x000100c77aa0) */

void FUN_100c77a64(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c77ac0; end: 100c77ae7; -[SCInMemoryDeepLinkInfoService shareId] */

void FUN_100c77ac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c77ae8; end: 100c77aff; -[SCAAppApplicationOpen setShareId:] */

void FUN_100c77ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcef18,0x16,param_3,0);
  return;
}



/* Entry: 100c77b00; end: 100c77b83; -[SCSnapRendererMemoriesLivePlaybackEntryPoint _createSrPluginFactoryWithPerformer:lensProcessingUseCase:supportedDestinations:] */

void FUN_100c77b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c3b2ac(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126d3368;
  func_0x000107c610f4(PTR_PTR_1126d3368);
  func_0x000107c47294();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c77b84; end: 100c77f53; -[SCSnapRendererMemoriesLivePlaybackEntryPoint _createLensEffectPluginImplWithPerformer:lensProcessingUseCase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c77b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61174();
  if (param_1 == 0) {
    lStack_b8 = 0;
  }
  else {
    lStack_b8 = param_1 + _DAT_1127612b4;
    func_0x000107c61148();
  }
  puVar2 = PTR_PTR_1126d3370;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lStack_c0 = 0;
  }
  else {
    lStack_c0 = param_1 + _DAT_112761294;
    func_0x000107c61148();
  }
  lVar3 = param_1;
  FUN_100c77f54();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4db04();
  func_0x000107c61180();
  lVar5 = param_1;
  FUN_100c77f54();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4db0c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112761290;
    func_0x000107c61148();
  }
  lVar7 = lVar15;
  func_0x000107c3f130();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11276128c;
    func_0x000107c61148();
  }
  lVar8 = lVar16;
  func_0x000107c3dfac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127612ac;
    func_0x000107c61148(lVar17);
  }
  lVar9 = lVar17;
  func_0x000107c4e604(lVar17);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127612b0;
    func_0x000107c61148();
  }
  lVar10 = lVar18;
  func_0x000107c408d0();
  func_0x000107c61180();
  lVar11 = param_1;
  func_0x000107c4ccb0();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c4cbfc();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c43bf4();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127612a0;
    func_0x000107c61148();
  }
  lVar14 = param_1;
  func_0x000107c4e8fc();
  func_0x000107c61180();
  func_0x000107c47104(puVar2);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c77f54; end: 100c77f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c77f54(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112761298);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c77f78; end: 100c78093; +[SCDeviceInstallMetadata buildInstallSessionMetadata] */

void FUN_100c77f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x000107c5aa04(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3da10();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126d6fe8;
  func_0x000107c61160(PTR_PTR_1126d6fe8);
  func_0x000107c54490();
  func_0x000107c52574(puVar2,param_2,puVar3);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c44fe0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c52874(puVar2,param_2,puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x000107c5ce48();
  if ((undefined *)0x2 < puVar1 + -1) {
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c52978(puVar2,param_2,puVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c78094; end: 100c780bf;  */

void FUN_100c78094(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c780c0; end: 100c780c3; -[SCLocationManager _onApplicationDidBecomeActive] */

void FUN_100c780c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppForegrounded_112586138);
  return;
}



/* Entry: 100c780c4; end: 100c780e3; -[SCLocationManager _setAppForegrounded] */

void FUN_100c780c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be86bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__recalculateDesiredLocationSetti_11257f490,
             &PTR____CFConstantStringClassReference_110df1a78,0);
  return;
}



/* Entry: 100c780e4; end: 100c78137;  */

void FUN_100c780e4(undefined8 param_1,code *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    (*param_2)();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100c78138; end: 100c782f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c78138(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = _DAT_112d9d520;
  if (((*(byte *)(unaff_x20 + _DAT_112d9d520) & 1) == 0) &&
     (*(char *)(unaff_x20 + _DAT_112d9d538) != '\x01')) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d9d540);
    func_0x000107c61428(lVar4 + 0x10,auStack_48,0x21,0);
    uVar2 = 0;
    func_0x000107c60b30(0,lVar4 + 0x10);
    func_0x000107c614a8(auStack_48);
    if ((uVar2 & 1) == 0) {
      func_0x000107c60060();
    }
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d9d500);
    func_0x000107c4b940(uVar3);
    if (*(char *)(unaff_x20 + lVar4) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d9d510);
      func_0x000107c61428(lVar4 + 0x10,auStack_48,0x21,0);
      func_0x000107c60b2c(0,lVar4 + 0x10);
      func_0x000107c614a8(auStack_48);
    }
    if (*(char *)(unaff_x20 + _DAT_112d9d538) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d9d548);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar1 = 0x6873617243707061;
        func_0x000107c5fadc(0x6873617243707061,0xed0000524e416465);
        func_0x000107c52de0(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar1);
      }
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112d9d540);
    func_0x000107c61428(lVar4 + 0x10,auStack_48,0x21,0);
    uVar2 = 0;
    func_0x000107c60b30(0,lVar4 + 0x10);
    func_0x000107c614a8(auStack_48);
    if ((uVar2 & 1) == 0) {
      func_0x000107c60060();
    }
    func_0x000107c5d278(uVar3);
  }
  return;
}



/* Entry: 100c782f4; end: 100c7831f;  */

void FUN_100c782f4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c78320; end: 100c78327; -[SCAppUserLifecycleEventHandlerV2 _handleAppDidBecomeActive] */

void FUN_100c78320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppDidBecomeActive_1126163f8);
  return;
}



/* Entry: 100c78328; end: 100c78333; -[SCFriendsFeedReadyLogger onAppDidBecomeActive] */

void FUN_100c78328(void)

{
  return;
}



/* Entry: 100c78334; end: 100c783b3;  */

void FUN_100c78334(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c61174(uVar2);
    uVar1 = uVar2;
    FUN_100c783b4();
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 100c783b4; end: 100c7854b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c783b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  func_0x00010006c804();
  lVar1 = _DAT_112da6f08;
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112da6f08);
  puVar4 = puVar6;
  puVar5 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = (undefined *)0x0;
    puVar5 = *(undefined **)(unaff_x20 + lVar1);
  }
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c61174(puVar6);
  func_0x000107c61174();
  func_0x000107c61170(puVar5);
  if (((*(byte *)(unaff_x20 + _DAT_112da6f10) & 1) == 0) &&
     (*(long *)(unaff_x20 + _DAT_112da6f00) == 0)) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da6f18);
    *(undefined1 *)(unaff_x20 + _DAT_112da6f10) = 1;
    func_0x000100070bfc();
    lVar1 = unaff_x20 + _DAT_112da6f20;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    FUN_100c7854c(lVar1,uVar2);
    puVar5 = &UNK_1103cb608;
    func_0x000107c613fc(&UNK_1103cb608,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_1103cb680;
    func_0x000107c613fc(&UNK_1103cb680,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    pcVar8 = *(code **)(lVar3 + 8);
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(puVar5);
    (*pcVar8)(FUN_100c791b4,puVar6,uVar2,lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
  }
  else {
    func_0x000100070bfc();
  }
  puVar5 = puVar4;
  func_0x000107c43bf4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 100c7854c; end: 100c7856f;  */

long * FUN_100c7854c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100c78570; end: 100c785ff;  */

void FUN_100c78570(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *unaff_x20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100c79168;
  puStack_48 = &UNK_1103cb6c0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c(param_2);
  func_0x000107c44194(uVar2);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 100c78600; end: 100c78617;  */

void FUN_100c78600(long param_1,long param_2)

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


