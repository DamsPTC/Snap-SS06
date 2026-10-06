/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102567884; end: 1025678e7;  */

void FUN_102567884(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1025678e8;
  plVar5[2] = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[3] = lVar4;
  uVar3 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025645ec,lVar2,uVar3);
  return;
}



/* Entry: 1025678e8; end: 102567923;  */

void FUN_1025678e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102567920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102567924; end: 102567993;  */

void FUN_102567924(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10256813c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102567994; end: 1025679d3;  */

void FUN_102567994(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1025679d4; end: 102567a37;  */

void FUN_1025679d4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102568140;
  plVar7[10] = lVar4;
  plVar7[0xb] = lVar2;
  plVar7[8] = lVar5;
  plVar7[9] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[0xc] = lVar5;
  uVar6 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025652b8,lVar4,uVar6);
  return;
}



/* Entry: 102567a38; end: 102567aa7;  */

void FUN_102567a38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102568144;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102567aa8; end: 102567aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567aa8(double param_1,uint param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(auStack_d0 + lVar9);
  func_0x000107c5ee8c();
  (**(code **)(lVar11 + 8))(auStack_d0 + lVar9,lVar3);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f70);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f78);
      (*pcVar2)();
    }
    func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
    lVar3 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102564f78((long)param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(lVar8 + 0x10,auStack_80,0,0);
    lVar3 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102565008(param_2 & 1,(long)param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(lVar8 + 0x10,auStack_98,0,0);
    lVar3 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if ((param_2 & 1) != 0) {
        puVar1 = (undefined8 *)(lVar3 + _DAT_112ea5660);
        *puVar1 = 1;
        *(undefined1 *)(puVar1 + 1) = 0;
        lVar8 = lVar3;
        func_0x000107c424e8();
        func_0x000107c61180();
        (**(code **)(lVar8 + 0x10))();
        func_0x000107c60bd0(lVar8);
        puVar4 = &UNK_110520750;
        func_0x000107c613fc(&UNK_110520750,0x30,7);
        *(long *)(puVar4 + 0x10) = lVar3;
        *(undefined8 *)(puVar4 + 0x18) = uVar6;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        puVar5 = &UNK_110520778;
        func_0x000107c613fc(&UNK_110520778,0x20,7);
        *(undefined **)(puVar5 + 0x10) = &UNK_10dab8c48;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        func_0x000107c61174();
        func_0x000107c61174(uVar6);
        *(undefined **)((long)alStack_e0 + lVar9) = PTR___sytN_11034f1b0 + 8;
        uVar6 = 0x51;
        func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab8c50,puVar5);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(uVar6);
        lVar8 = _DAT_112ea56c0;
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ea56c0);
        func_0x000107c3db38();
        uVar10 = *(undefined8 *)(lVar3 + lVar8);
        puVar4 = &UNK_110520598;
        func_0x000107c613fc(&UNK_110520598,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar3);
        puVar5 = &UNK_1105207a0;
        func_0x000107c613fc(&UNK_1105207a0,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = uVar6;
        pcStack_a8 = FUN_102567bc0;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_1105207b8;
        ppuVar7 = &puStack_c8;
        puStack_a0 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        puVar4 = puStack_a0;
        func_0x000107c61174(uVar10);
        func_0x000107c61574(puVar4);
        func_0x000107c4e560(uVar10);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar10);
        return;
      }
      func_0x000107c61170();
    }
    func_0x000107c61428(lVar8 + 0x10,&puStack_c8,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      lVar9 = lVar8;
      func_0x000107c424e8();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      (**(code **)(lVar9 + 0x10))(lVar9);
      func_0x000107c60bd0(lVar9);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f74);
  (*pcVar2)();
}



/* Entry: 102567ab0; end: 102567aeb;  */

void FUN_102567ab0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102567aec; end: 102567b4f;  */

void FUN_102567aec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102568148;
  plVar7[10] = lVar4;
  plVar7[0xb] = lVar2;
  plVar7[8] = lVar5;
  plVar7[9] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[0xc] = lVar5;
  uVar6 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025652b8,lVar4,uVar6);
  return;
}



/* Entry: 102567b50; end: 102567bbf;  */

void FUN_102567b50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10256814c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102567bc0; end: 102567bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567bc0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112ea56c0);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar3);
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102565154);
      (*pcVar2)();
    }
    func_0x000107c52624(uVar4);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 102567bdc; end: 102567d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = _DAT_112ea5728;
  if (*(long *)(param_4 + _DAT_112ea5728) == 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000103a28f00();
    uStack_60 = param_3;
    func_0x00010008a7c8(&uStack_58,&uStack_60);
    func_0x000100083b20(&uStack_60);
    func_0x000107c61574(uStack_58);
    uVar2 = *(undefined8 *)(param_4 + lVar3);
    *(undefined8 *)(param_4 + lVar3) = uStack_60;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(param_4 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102567d14; end: 102567d8b;  */

void FUN_102567d14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102568150;
  plVar9[0xc] = lVar1;
  plVar9[0xd] = lVar4;
  plVar9[10] = lVar6;
  plVar9[0xb] = lVar3;
  plVar9[8] = lVar7;
  plVar9[9] = lVar2;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar7 = lVar6;
  func_0x000107c5fce8();
  plVar9[0xe] = lVar7;
  uVar8 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10256351c,lVar6,uVar8);
  return;
}



/* Entry: 102567d8c; end: 102567dfb;  */

void FUN_102567d8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102568154;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102567dfc; end: 102567e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567dfc(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar7 = auStack_68;
  func_0x000107c61428(lVar4 + 0x10,puVar7,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      func_0x000107c61174(param_1);
      func_0x000107c3e544();
      func_0x000107c61180();
      uVar5 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      if ((uVar5 == uVar2) && (puVar7 == puVar1)) {
        func_0x000107c6142c(puVar7);
LAB_1025638a8:
        func_0x000107c4d664(uVar6);
        lVar3 = _DAT_112ea5678;
        func_0x000107c61428(lVar4 + _DAT_112ea5678,auStack_80,0x21,0);
        func_0x000107c61174(param_1);
        func_0x000107c61434(puVar1);
        uVar6 = *(undefined8 *)(lVar4 + lVar3);
        func_0x000107c61558(uVar6);
        uVar8 = *(undefined8 *)(lVar4 + lVar3);
        *(undefined8 *)(lVar4 + lVar3) = 0x8000000000000000;
        func_0x000100fdaeac(param_1,uVar2,puVar1,uVar6);
        func_0x000107c6142c(puVar1);
        *(undefined8 *)(lVar4 + lVar3) = uVar8;
        func_0x000107c614a8(auStack_80);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c605b8(uVar5,puVar7,uVar2,puVar1,0);
      func_0x000107c6142c(puVar7);
      if ((uVar5 & 1) != 0) goto LAB_1025638a8;
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
  if (lRam0000000112ea5a50 != -1) {
    func_0x000107c61568(0x112ea5a50,FUN_10255feac);
  }
  func_0x000107c4d664(uVar6);
  return;
}



/* Entry: 102567e08; end: 102567e4b;  */

void FUN_102567e08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 102567e4c; end: 102567e83;  */

void FUN_102567e4c(void)

{
  FUN_102563d0c();
  return;
}



/* Entry: 102567e84; end: 102567e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567e84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ea5640;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = 0;
      FUN_10255b53c(0);
      FUN_10255d0c4(1,uVar3,&PTR_DAT_110520050);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102567e8c; end: 102567ec3;  */

void FUN_102567e8c(void)

{
  func_0x000102563d60();
  return;
}



/* Entry: 102567ec4; end: 102567ee3;  */

void FUN_102567ec4(void)

{
  func_0x0001025612ac();
  return;
}



/* Entry: 102567ee4; end: 102567eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102567ee4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ea5670) = 0;
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112ea56b0);
    uVar2 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar3 = &UNK_110520598;
    func_0x000107c613fc(&UNK_110520598,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    uStack_58 = 0x10256812c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100ff4e10;
    puStack_60 = &UNK_110520ab0;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c42b74(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102567eec; end: 102567f43;  */

void FUN_102567eec(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102568138;
  plVar2[2] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar2[3] = lVar3;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar2[5] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102564428;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (1000000000);
  return;
}



/* Entry: 102567f44; end: 102567f9b;  */

void FUN_102567f44(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102568134;
  plVar2[2] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar2[3] = lVar3;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar2[5] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102563ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(400000000)
  ;
  return;
}



/* Entry: 102567f9c; end: 102567fb3;  */

void FUN_102567f9c(void)

{
  FUN_102565154();
  return;
}



/* Entry: 102567fb4; end: 10256800b;  */

void FUN_102567fb4(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10256800c;
  plVar2[2] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar2[3] = lVar3;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar2[5] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102564428;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (1000000000);
  return;
}



/* Entry: 10256800c; end: 102568047;  */

void FUN_10256800c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102568044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102568048; end: 10256806b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102568048(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ea5690;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4dde4(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10256806c; end: 1025680ab;  */

undefined8 FUN_10256806c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1025680ac; end: 1025682ab;  */

void FUN_1025680ac(long param_1,long param_2)

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



/* Entry: 1025682ac; end: 1025683cb;  */

/* WARNING: Possible PIC construction at 0x0001025682f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102568300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256838c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256839c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102568390) */
/* WARNING: Removing unreachable block (ram,0x000102568304) */
/* WARNING: Removing unreachable block (ram,0x0001025682f4) */
/* WARNING: Removing unreachable block (ram,0x0001025683a0) */

void FUN_1025682ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte in_stack_00000018;
  
  in_stack_00000018 = in_stack_00000018 >> 4;
  if (in_stack_00000018 < 5) {
    if (in_stack_00000018 < 3) {
      if (in_stack_00000018 == 0) {
        func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_retain_11034f4d0)(param_5);
        return;
      }
      param_2 = param_4;
      if (in_stack_00000018 != 1) {
        return;
      }
    }
    else if ((in_stack_00000018 != 3) && (in_stack_00000018 != 4)) {
      return;
    }
  }
  else if (in_stack_00000018 < 7) {
    if (in_stack_00000018 == 5) {
_objc_retain:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (in_stack_00000018 != 6) {
      return;
    }
  }
  else if (in_stack_00000018 != 7) {
    if (in_stack_00000018 != 8) {
      return;
    }
    goto _objc_retain;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1025683cc; end: 102568413;  */

void FUN_1025683cc(undefined8 *param_1)

{
  FUN_102568414(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],*(undefined1 *)(param_1 + 0xb));
  return;
}



/* Entry: 102568414; end: 102568533;  */

/* WARNING: Possible PIC construction at 0x00010256845c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256846c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025684f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102568504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025684f8) */
/* WARNING: Removing unreachable block (ram,0x000102568470) */
/* WARNING: Removing unreachable block (ram,0x000102568460) */
/* WARNING: Removing unreachable block (ram,0x000102568508) */

void FUN_102568414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte in_stack_00000018;
  
  in_stack_00000018 = in_stack_00000018 >> 4;
  if (in_stack_00000018 < 5) {
    if (in_stack_00000018 < 3) {
      if (in_stack_00000018 == 0) {
        func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(param_5);
        return;
      }
      param_1 = param_5;
      if (in_stack_00000018 == 1) goto code_r0x000107c61170;
    }
    else if ((in_stack_00000018 == 3) || (in_stack_00000018 == 4)) goto _swift_bridgeObjectRelease;
    return;
  }
  if (in_stack_00000018 < 7) {
    if (in_stack_00000018 != 5) {
      if (in_stack_00000018 != 6) {
        return;
      }
_swift_bridgeObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  else {
    if (in_stack_00000018 == 7) goto _swift_bridgeObjectRelease;
    if (in_stack_00000018 != 8) {
      return;
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102568534; end: 1025686df;  */

undefined8 * FUN_102568534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar12 = param_2[10];
  uVar11 = *(undefined1 *)(param_2 + 0xb);
  FUN_1025682ac(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  param_1[10] = uVar12;
  *(undefined1 *)(param_1 + 0xb) = uVar11;
  return param_1;
}



/* Entry: 1025686e0; end: 102568763;  */

undefined8 * FUN_1025686e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = param_2[10];
  uVar7 = *(undefined1 *)(param_2 + 0xb);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar12 = param_1[10];
  uVar8 = *(undefined1 *)(param_1 + 0xb);
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[10] = uVar11;
  *(undefined1 *)(param_1 + 0xb) = uVar7;
  FUN_102568414(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar12,uVar8);
  return param_1;
}



/* Entry: 102568764; end: 1025688b7;  */

int FUN_102568764(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x76 < param_2) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + 0x77;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0x16) >> 4) | (*(byte *)(param_1 + 0x16) >> 1 & 7) << 4) ^
          0x7f;
  if (0x75 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1025688b8; end: 1025688f7;  */

void FUN_1025688b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea5ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab8d44;
  func_0x000107c61520(&UNK_10dab8d44,&UNK_110520ba8);
  puRam0000000112ea5ad8 = puVar1;
  return;
}



/* Entry: 1025688f8; end: 102568a47;  */

undefined1  [16] FUN_1025688f8(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  long *unaff_x20;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  bVar5 = *(byte *)(unaff_x20 + 0xb) >> 4;
  if (bVar5 < 7) {
    if (bVar5 == 0) {
      auVar29._8_8_ = 0x800000010f0a96c0;
      auVar29._0_8_ = 0xd000000000000015;
      return auVar29;
    }
    if (bVar5 == 1) {
      auVar30._8_8_ = 0xea00000000006c6c;
      auVar30._0_8_ = 0x6543686374697753;
      return auVar30;
    }
    if (bVar5 == 5) {
      auVar26._8_8_ = 0x800000010f0a96e0;
      auVar26._0_8_ = 0xd000000000000018;
      return auVar26;
    }
  }
  else {
    if (bVar5 == 7) {
      auVar21._8_8_ = 0x800000010f0a96a0;
      auVar21._0_8_ = 0xd000000000000012;
      return auVar21;
    }
    if (bVar5 == 8) {
      auVar31._8_8_ = 0x800000010f0a9680;
      auVar31._0_8_ = 0xd000000000000010;
      return auVar31;
    }
    if (((bVar5 == 9) && (*(byte *)(unaff_x20 + 0xb) == 0x90)) && (*unaff_x20 == 4)) {
      lVar4 = unaff_x20[8];
      lVar3 = unaff_x20[7];
      lVar23 = unaff_x20[10];
      lVar22 = unaff_x20[9];
      lVar25 = unaff_x20[6];
      lVar24 = unaff_x20[5];
      bVar5 = *(byte *)(unaff_x20 + 3) | (byte)lVar3 | (byte)lVar24 | (byte)lVar22;
      bVar6 = *(byte *)((long)unaff_x20 + 0x19) | (byte)((ulong)lVar3 >> 8) |
              (byte)((ulong)lVar24 >> 8) | (byte)((ulong)lVar22 >> 8);
      bVar7 = *(byte *)((long)unaff_x20 + 0x1a) | (byte)((ulong)lVar3 >> 0x10) |
              (byte)((ulong)lVar24 >> 0x10) | (byte)((ulong)lVar22 >> 0x10);
      bVar8 = *(byte *)((long)unaff_x20 + 0x1b) | (byte)((ulong)lVar3 >> 0x18) |
              (byte)((ulong)lVar24 >> 0x18) | (byte)((ulong)lVar22 >> 0x18);
      bVar9 = *(byte *)((long)unaff_x20 + 0x1c) | (byte)((ulong)lVar3 >> 0x20) |
              (byte)((ulong)lVar24 >> 0x20) | (byte)((ulong)lVar22 >> 0x20);
      bVar10 = *(byte *)((long)unaff_x20 + 0x1d) | (byte)((ulong)lVar3 >> 0x28) |
               (byte)((ulong)lVar24 >> 0x28) | (byte)((ulong)lVar22 >> 0x28);
      bVar11 = *(byte *)((long)unaff_x20 + 0x1e) | (byte)((ulong)lVar3 >> 0x30) |
               (byte)((ulong)lVar24 >> 0x30) | (byte)((ulong)lVar22 >> 0x30);
      bVar12 = *(byte *)((long)unaff_x20 + 0x1f) | (byte)((ulong)lVar3 >> 0x38) |
               (byte)((ulong)lVar24 >> 0x38) | (byte)((ulong)lVar22 >> 0x38);
      bVar13 = *(byte *)(unaff_x20 + 4) | (byte)lVar4 | (byte)lVar25 | (byte)lVar23;
      bVar14 = *(byte *)((long)unaff_x20 + 0x21) | (byte)((ulong)lVar4 >> 8) |
               (byte)((ulong)lVar25 >> 8) | (byte)((ulong)lVar23 >> 8);
      bVar15 = *(byte *)((long)unaff_x20 + 0x22) | (byte)((ulong)lVar4 >> 0x10) |
               (byte)((ulong)lVar25 >> 0x10) | (byte)((ulong)lVar23 >> 0x10);
      bVar16 = *(byte *)((long)unaff_x20 + 0x23) | (byte)((ulong)lVar4 >> 0x18) |
               (byte)((ulong)lVar25 >> 0x18) | (byte)((ulong)lVar23 >> 0x18);
      bVar17 = *(byte *)((long)unaff_x20 + 0x24) | (byte)((ulong)lVar4 >> 0x20) |
               (byte)((ulong)lVar25 >> 0x20) | (byte)((ulong)lVar23 >> 0x20);
      bVar18 = *(byte *)((long)unaff_x20 + 0x25) | (byte)((ulong)lVar4 >> 0x28) |
               (byte)((ulong)lVar25 >> 0x28) | (byte)((ulong)lVar23 >> 0x28);
      bVar19 = *(byte *)((long)unaff_x20 + 0x26) | (byte)((ulong)lVar4 >> 0x30) |
               (byte)((ulong)lVar25 >> 0x30) | (byte)((ulong)lVar23 >> 0x30);
      bVar20 = *(byte *)((long)unaff_x20 + 0x27) | (byte)((ulong)lVar4 >> 0x38) |
               (byte)((ulong)lVar25 >> 0x38) | (byte)((ulong)lVar23 >> 0x38);
      auVar1[1] = bVar6;
      auVar1[0] = bVar5;
      auVar1[2] = bVar7;
      auVar1[3] = bVar8;
      auVar1[4] = bVar9;
      auVar1[5] = bVar10;
      auVar1[6] = bVar11;
      auVar1[7] = bVar12;
      auVar1[8] = bVar13;
      auVar1[9] = bVar14;
      auVar1[10] = bVar15;
      auVar1[0xb] = bVar16;
      auVar1[0xc] = bVar17;
      auVar1[0xd] = bVar18;
      auVar1[0xe] = bVar19;
      auVar1[0xf] = bVar20;
      auVar2[1] = bVar6;
      auVar2[0] = bVar5;
      auVar2[2] = bVar7;
      auVar2[3] = bVar8;
      auVar2[4] = bVar9;
      auVar2[5] = bVar10;
      auVar2[6] = bVar11;
      auVar2[7] = bVar12;
      auVar2[8] = bVar13;
      auVar2[9] = bVar14;
      auVar2[10] = bVar15;
      auVar2[0xb] = bVar16;
      auVar2[0xc] = bVar17;
      auVar2[0xd] = bVar18;
      auVar2[0xe] = bVar19;
      auVar2[0xf] = bVar20;
      auVar21 = NEON_ext(auVar1,auVar2,8,1);
      if ((CONCAT17(bVar12 | auVar21[7],
                    CONCAT16(bVar11 | auVar21[6],
                             CONCAT15(bVar10 | auVar21[5],
                                      CONCAT14(bVar9 | auVar21[4],
                                               CONCAT13(bVar8 | auVar21[3],
                                                        CONCAT12(bVar7 | auVar21[2],
                                                                 CONCAT11(bVar6 | auVar21[1],
                                                                          bVar5 | auVar21[0])))))))
           == 0 && unaff_x20[2] == 0) && unaff_x20[1] == 0) {
        auVar27._8_8_ = 0xea00000000006c6c;
        auVar27._0_8_ = 0x65437265746f6f46;
        return auVar27;
      }
    }
  }
  auVar28._8_8_ = 0xe700000000000000;
  auVar28._0_8_ = 0x6c6c6543474953;
  return auVar28;
}



/* Entry: 102568a48; end: 102568bf3;  */

undefined1  [16] FUN_102568a48(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong in_x13;
  ulong in_x14;
  ulong in_x15;
  ulong in_x16;
  ulong in_x17;
  char *pcVar14;
  ulong *unaff_x20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  bVar4 = (byte)unaff_x20[0xb];
  pcVar10 = (char *)(ulong)bVar4;
  pcVar1 = (char *)*unaff_x20;
  pcVar14 = (char *)unaff_x20[1];
  pcVar2 = (char *)unaff_x20[2];
  pcVar3 = (char *)unaff_x20[3];
  bVar5 = bVar4 >> 4;
  uVar12 = (ulong)bVar5;
  uVar9 = (uint)bVar5;
  pcVar7 = (char *)0xe000000000000000;
  pcVar6 = (char *)0x0;
  puVar11 = &UNK_10dab8cc0;
  UNRECOVERED_JUMPTABLE = (code *)(ulong)(byte)(&UNK_10dab8cc0)[uVar12];
  puVar13 = (undefined *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x102568a8c);
  pcVar8 = pcVar7;
  switch(bVar5) {
  default:
    pcVar10 = (char *)(ulong)((uint)pcVar1 & 0xff);
  case 0x7a:
  case 0x94:
  case 0xa2:
    uVar9 = (uint)pcVar10;
    in_CY = 1 < uVar9;
    in_OV = SBORROW4(uVar9,2);
    in_NG = (int)(uVar9 - 2) < 0;
    in_ZR = uVar9 == 2;
code_r0x000102568a94:
    if ((bool)in_ZR || in_NG != in_OV) {
code_r0x000102568a98:
      if ((bool)in_CY) {
        func_0x000102578adc();
code_r0x000102568bb0:
      }
      else {
code_r0x000102568a9c:
        func_0x000102578e0c();
code_r0x000102568aa0:
      }
    }
    else if ((int)pcVar10 == 3) {
      func_0x000102578ba8();
    }
    else {
code_r0x000102568b80:
      if ((int)pcVar10 == 4) {
        func_0x000102578c74();
      }
      else {
code_r0x000102568bbc:
        func_0x000102578d40();
code_r0x000102568bc0:
      }
    }
    break;
  case 1:
    func_0x00010257872c();
    break;
  case 2:
    func_0x000102578748();
  case 0xb:
    break;
  case 3:
    func_0x000102578764();
    break;
  case 4:
    func_0x000102578830();
    break;
  case 5:
  case 8:
  case 0x28:
  case 0xb8:
    break;
  case 6:
    func_0x000107c61434(pcVar14);
    pcVar6 = pcVar1;
    pcVar7 = pcVar14;
    break;
  case 7:
    func_0x000107c61434(pcVar3);
    pcVar6 = pcVar2;
    pcVar7 = pcVar3;
  case 0xc:
    break;
  case 9:
  case 0xe:
    uVar12 = unaff_x20[9];
    puVar13 = (undefined *)unaff_x20[10];
    in_x13 = unaff_x20[7];
    UNRECOVERED_JUMPTABLE = (code *)unaff_x20[8];
    in_x14 = unaff_x20[5];
    puVar11 = (undefined *)unaff_x20[6];
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0x9d:
    in_x15 = unaff_x20[4];
    if (bVar4 == 0x90) {
      in_x16 = (ulong)pcVar1 | (ulong)pcVar14;
      in_x17 = (ulong)pcVar2 | (ulong)pcVar3;
code_r0x000102568acc:
      in_x16 = in_x16 | in_x17 | (ulong)puVar13 | uVar12 | (ulong)UNRECOVERED_JUMPTABLE;
code_r0x000102568adc:
      if (in_x16 == 0 &&
          (((in_x13 == 0 && puVar11 == (undefined *)0x0) && in_x14 == 0) && in_x15 == 0)) {
        func_0x0001025788fc();
        break;
      }
    }
    puVar13 = (undefined *)((ulong)pcVar2 | (ulong)pcVar14 | (ulong)pcVar3 | (ulong)puVar13);
    uVar12 = uVar12 | (ulong)UNRECOVERED_JUMPTABLE | in_x13;
code_r0x000102568b4c:
    uVar12 = (ulong)puVar13 | uVar12 | (ulong)puVar11 | in_x14 | in_x15;
    if ((bVar4 == 0x90) && (pcVar1 == (char *)0x1)) {
code_r0x000102568b6c:
      if (uVar12 == 0) {
code_r0x000102568b70:
        FUN_1025789c8();
        break;
      }
    }
code_r0x000102568b90:
    in_ZR = bVar4 == 0x90;
code_r0x000102568b94:
    if ((bool)in_ZR) {
code_r0x000102568b98:
      in_ZR = pcVar1 == (char *)0x2;
code_r0x000102568b9c:
      if ((bool)in_ZR) {
code_r0x000102568ba0:
        if (uVar12 == 0) {
          FUN_1025789ec();
code_r0x000102568ba8:
          break;
        }
      }
    }
    pcVar6 = (char *)0x0;
    if ((bVar4 == 0x90) && (pcVar1 == (char *)0x3)) {
code_r0x000102568bd8:
      pcVar6 = (char *)0x0;
      if (uVar12 == 0) {
code_r0x000102568bdc:
        pcVar6 = (char *)0x0;
        FUN_102578ab8(0);
      }
    }
    break;
  case 0xd:
    goto code_r0x000102568b4c;
  case 0xf:
    goto code_r0x000102568b80;
  case 0x10:
    goto code_r0x000102568ba0;
  case 0x11:
    goto code_r0x000102568b6c;
  case 0x12:
  case 0x3d:
  case 0xd3:
    goto code_r0x000102568bc0;
  case 0x13:
    goto code_r0x000102568acc;
  case 0x29:
  case 0x88:
  case 0xb9:
    goto LAB_102568c4c;
  case 0x2a:
  case 0xba:
  case 0xd1:
    goto code_r0x000102568c58;
  case 0x2b:
  case 0x33:
  case 0x36:
  case 0x3b:
  case 0x40:
  case 0xbb:
  case 0xd6:
    goto code_r0x000102568c20;
  case 0x2c:
  case 0x2d:
  case 0x37:
  case 0x38:
  case 0x41:
  case 0xbc:
  case 0xbd:
    goto code_r0x000102568c3c;
  case 0x2e:
  case 0xc3:
    goto code_r0x000102568bd8;
  case 0x2f:
  case 0x3e:
  case 0xb1:
  case 0xb6:
  case 0xc1:
  case 0xcc:
  case 0xd0:
  case 0xd4:
  case 0xda:
  case 0xe0:
  case 0xe5:
  case 0xe8:
  case 0xed:
  case 0xf5:
    goto code_r0x000102568c48;
  case 0x30:
  case 0xdd:
    goto code_r0x000102568c60;
  case 0x31:
    goto code_r0x000102568c54;
  case 0x32:
  case 0xb2:
  case 199:
  case 0xe9:
    goto code_r0x000102568c18;
  case 0x35:
  case 0xef:
    goto code_r0x000102568b98;
  case 0x39:
    goto code_r0x000102568be4;
  case 0x3a:
  case 0xb5:
  case 0xc5:
  case 0xec:
    goto code_r0x000102568c30;
  case 0x3c:
  case 0xc4:
    goto code_r0x000102568c68;
  case 0x3f:
  case 0xd5:
    goto code_r0x000102568c1c;
  case 0x44:
    goto code_r0x000102568e60;
  case 0x45:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x85:
  case 0x99:
  case 0xf9:
    goto code_r0x000102568c90;
  case 0x46:
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0xfa:
    pcVar7 = (char *)((ulong)(pcVar10 + 0x920) | 0x8000000000000000);
    pcVar10 = (char *)0xd000000000000014;
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x9e:
    pcVar6 = pcVar10 + 4;
code_r0x000102568d3c:
    auVar18._8_8_ = pcVar7;
    auVar18._0_8_ = pcVar6;
    return auVar18;
  case 0x47:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x87:
  case 0x9b:
  case 0xfb:
    goto code_r0x000102568a94;
  case 0x48:
    auVar19._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar19._0_8_ = 0xd000000000000017;
    return auVar19;
  case 0x49:
  case 0x89:
  case 0xfd:
    goto LAB_102568cc4;
  case 0x4a:
  case 0x8a:
  case 0xfe:
    if (param_4 == 0 && ((in_x17 == 0 && in_x14 == 0) && param_3 == 0)) {
      auVar20._8_8_ = 0x800000010f0a99e0;
      auVar20._0_8_ = 0xd000000000000011;
      return auVar20;
    }
    uVar12 = (ulong)puVar13 | 0x10dab8cc0;
    if (((bVar5 == 0x90) && (pcVar10 == (char *)0x1)) &&
       (((uVar12 == 0 && (UNRECOVERED_JUMPTABLE == (code *)0x0 && in_x15 == 0)) &&
        ((in_x13 == 0 && in_x16 == 0) && in_x17 == 0)) && (in_x14 == 0 && param_3 == 0))) {
      auVar25._8_8_ = 0xe000000000000211;
      auVar25._0_8_ = 0x625f74726f706572;
      return auVar25;
    }
    if (((bVar5 == 0x90) && (pcVar10 == (char *)0x2)) &&
       (((uVar12 == 0 && (UNRECOVERED_JUMPTABLE == (code *)0x0 && in_x15 == 0)) &&
        ((in_x13 == 0 && in_x16 == 0) && in_x17 == 0)) && (in_x14 == 0 && param_3 == 0))) {
      auVar22._8_8_ = 0x800000010f0a99c0;
      auVar22._0_8_ = 0xd000000000000016;
      return auVar22;
    }
    pcVar7 = (char *)0xeb000000006c6c65;
    pcVar6 = (char *)0x635f7265746f6f66;
    if (((bVar5 == 0x90) && (pcVar10 == (char *)0x3)) &&
       (((uVar12 == 0 && (UNRECOVERED_JUMPTABLE == (code *)0x0 && in_x15 == 0)) &&
        ((in_x13 == 0 && in_x16 == 0) && in_x17 == 0)) && (in_x14 == 0 && param_3 == 0))) {
      pcVar6 = (char *)0xd000000000000014;
      pcVar10 = "suggest_a_place_cell";
      goto code_r0x000102568e64;
    }
    goto code_r0x000102568d3c;
  case 0x52:
  case 0x92:
    goto code_r0x000102568a98;
  case 0x54:
    goto code_r0x000102568a9c;
  case 0x58:
  case 0x60:
  case 0x68:
  case 0x70:
    goto code_r0x000102568e30;
  case 0x5c:
    pcVar7 = (char *)0xef6c6c65635f0000;
    pcVar10 = (char *)*unaff_x20;
    puVar11 = (undefined *)(ulong)(byte)((byte)unaff_x20[0xb] >> 4);
    pcVar6 = (char *)0x6f6d5f74736f6867;
    puVar13 = &UNK_10dab8000;
  case 0x82:
  case 0xaa:
    UNRECOVERED_JUMPTABLE =
         (code *)((ulong)(byte)(puVar13 + 0xcca)[(long)puVar11] * 4 + 0x102568d20);
code_r0x000102568d1c:
                    /* WARNING: Could not recover jumptable at 0x000102568d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pcVar10,pcVar6,pcVar7);
    auVar17._8_8_ = pcVar7;
    auVar17._0_8_ = pcVar6;
    return auVar17;
  case 0x5d:
    goto LAB_102568cc0;
  case 0x5e:
    pcVar7 = (char *)((ulong)pcVar10 | 0x8000000000000000);
    pcVar10 = (char *)0xd000000000000014;
  case 0xa8:
    pcVar6 = pcVar10 + 6;
code_r0x000102568e30:
    auVar23._8_8_ = pcVar7;
    auVar23._0_8_ = pcVar6;
    return auVar23;
  case 100:
    goto code_r0x000102568c6c;
  case 0x67:
  case 0x6f:
  case 0x77:
  case 0x9f:
    pcVar10 = "n.WidgetOnboardingWorkflow";
code_r0x000102568e60:
    pcVar10 = pcVar10 + 0x960;
code_r0x000102568e64:
    auVar24._8_8_ = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = pcVar6;
    return auVar24;
  case 0x6c:
  case 200:
  case 0xcf:
    goto code_r0x000102568c2c;
  case 0x74:
    goto code_r0x000102568b9c;
  case 0x80:
    goto code_r0x000102568ccc;
  case 0x81:
  case 0xa9:
    goto code_r0x000102568b70;
  case 0x83:
  case 0xab:
    goto code_r0x000102568aa0;
  case 0x84:
    pcVar6 = (char *)0xd000000000000014;
    pcVar10 = "location_upsell_cell";
    goto code_r0x000102568e64;
  case 0x98:
    auVar21._8_8_ = 0xe000000000000000;
    auVar21._0_8_ = 0x6e656972665f0000;
    return auVar21;
  case 0x9c:
    goto code_r0x000102568adc;
  case 0xb0:
  case 0xe7:
    goto code_r0x000102568bbc;
  case 0xb3:
  case 0xea:
    uVar9 = (uint)(bVar4 >> 4);
    pcVar10 = (char *)(ulong)uVar9;
    in_OV = SBORROW4(uVar9,2);
    in_NG = (int)(uVar9 - 2) < 0;
    in_ZR = uVar9 == 2;
code_r0x000102568c18:
    if ((bool)in_ZR || in_NG != in_OV) {
LAB_102568c4c:
      if ((int)pcVar10 == 0) {
        uVar9 = (uint)pcVar3 & 0xff;
        pcVar10 = (char *)(ulong)uVar9;
        if (uVar9 < 3) {
          if (uVar9 < 2) {
            func_0x000102578660();
          }
          else {
            func_0x00010257832c();
          }
        }
        else if (uVar9 == 3) {
          func_0x0001025783f8();
        }
        else {
code_r0x000102568c90:
          if ((int)pcVar10 == 4) {
            func_0x0001025784c8();
          }
          else {
LAB_102568cc0:
            func_0x000102578594();
          }
        }
LAB_102568cc4:
        pcVar8 = pcVar7;
        goto code_r0x000102568ccc;
      }
      pcVar14 = (char *)0x0;
code_r0x000102568c54:
      in_ZR = (int)pcVar10 == 1;
code_r0x000102568c58:
      pcVar8 = pcVar14;
      if (!(bool)in_ZR) goto code_r0x000102568ccc;
    }
    else {
code_r0x000102568c1c:
      uVar9 = (int)pcVar10 - 3;
code_r0x000102568c20:
      in_CY = 1 < uVar9;
code_r0x000102568c24:
      if ((bool)in_CY) {
        pcVar14 = (char *)0x0;
code_r0x000102568c2c:
        in_ZR = (int)pcVar10 == 7;
code_r0x000102568c30:
        pcVar8 = pcVar14;
        if (!(bool)in_ZR) goto code_r0x000102568ccc;
        pcVar10 = (char *)(ulong)(byte)unaff_x20[4];
        if ((byte)unaff_x20[4] == 0) {
          func_0x0001025780c8();
        }
        else {
code_r0x000102568c3c:
          if ((int)pcVar10 == 1) {
code_r0x000102568c44:
            func_0x000102578194();
code_r0x000102568c48:
          }
          else {
            func_0x000102578260();
          }
        }
        goto LAB_102568cc4;
      }
    }
LAB_102568c5c:
    pcVar14 = (char *)unaff_x20[1];
code_r0x000102568c60:
    func_0x000107c61434(pcVar14);
code_r0x000102568c68:
    pcVar6 = pcVar3;
code_r0x000102568c6c:
    pcVar8 = pcVar14;
code_r0x000102568ccc:
    auVar16._8_8_ = pcVar8;
    auVar16._0_8_ = pcVar6;
    return auVar16;
  case 0xb4:
  case 0xc6:
  case 0xd2:
  case 0xde:
  case 0xdf:
  case 0xeb:
    goto LAB_102568c5c;
  case 0xb7:
  case 0xbf:
  case 0xca:
  case 0xd8:
  case 0xe1:
  case 0xe3:
  case 0xee:
  case 0xf3:
    goto code_r0x000102568c44;
  case 0xbe:
  case 0xc9:
  case 0xd7:
  case 0xe2:
  case 0xf2:
    goto code_r0x000102568bb0;
  case 0xc0:
  case 0xcb:
  case 0xd9:
  case 0xe4:
  case 0xf4:
    goto code_r0x000102568c24;
  case 0xce:
    goto code_r0x000102568ba8;
  case 0xdc:
    goto code_r0x000102568b94;
  case 0xf0:
    goto code_r0x000102568bdc;
  case 0xf1:
  case 0xf8:
    goto code_r0x000102568b90;
  case 0xfc:
    goto code_r0x000102568d1c;
  }
code_r0x000102568be4:
  auVar15._8_8_ = pcVar7;
  auVar15._0_8_ = pcVar6;
  return auVar15;
}



/* Entry: 102568bf4; end: 102568cdb;  */

void FUN_102568bf4(void)

{
  uint uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = (uint)(*(byte *)(unaff_x20 + 0xb) >> 4);
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      uVar1 = (uint)*unaff_x20 & 0xff;
      if (uVar1 < 3) {
        if (uVar1 < 2) {
          func_0x000102578660();
          return;
        }
        func_0x00010257832c();
        return;
      }
      if (uVar1 == 3) {
        func_0x0001025783f8();
        return;
      }
      if (uVar1 == 4) {
        func_0x0001025784c8();
        return;
      }
      func_0x000102578594();
      return;
    }
    if (uVar1 != 1) {
      return;
    }
  }
  else if (1 < uVar1 - 3) {
    if (uVar1 != 7) {
      return;
    }
    if (*(char *)(unaff_x20 + 4) != '\0') {
      if (*(char *)(unaff_x20 + 4) == '\x01') {
        func_0x000102578194();
        return;
      }
      func_0x000102578260();
      return;
    }
    func_0x0001025780c8();
    return;
  }
  func_0x000107c61434(unaff_x20[1]);
  return;
}



/* Entry: 102568cdc; end: 102568f23;  */

/* WARNING: Possible PIC construction at 0x000102569118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025690b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256911c) */

undefined1  [16] FUN_102568cdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong in_x14;
  ulong in_x15;
  ulong in_x16;
  ulong in_x17;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_68 [72];
  
  uVar3 = uRamef6c6c65635f658c;
  uVar10 = uRamef6c6c65635f657c;
  uVar4 = 0xef6c6c65635f6564;
  pcVar5 = *(char **)unaff_x20;
  bVar1 = unaff_x20[0x58];
  uVar6 = (ulong)(bVar1 >> 4);
  pbVar2 = (byte *)0x6f6d5f74736f6867;
  puVar7 = &UNK_10dab8cca;
  uVar9 = (ulong)(byte)(&UNK_10dab8cca)[uVar6];
  uVar8 = uVar9 * 4 + 0x102568d20;
  switch(bVar1 >> 4) {
  default:
    pcVar5 = "n.WidgetOnboardingWorkflow";
  case 0x70:
  case 0x8a:
  case 0x98:
    pcVar5 = pcVar5 + 0x940;
    goto code_r0x000102568d28;
  case 1:
    goto code_r0x000102568d3c;
  case 2:
    auVar14._8_8_ = 0xef6c6c65635f7364;
    auVar14._0_8_ = 0x6e656972665f796d;
    return auVar14;
  case 3:
    pcVar5 = "my_friends_except_cell";
    goto code_r0x000102568de8;
  case 4:
    pcVar5 = "arrival_notifications_cell";
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x93:
    auVar12._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000017;
    return auVar12;
  case 5:
    uVar4 = 0x800000010f0a9a00;
  case 0xe7:
  case 0xee:
    pcVar5 = (char *)0x14;
    goto code_r0x000102568e28;
  case 6:
    pcVar5 = "change_my_outfit_cell";
  case 0xc4:
    uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    goto code_r0x000102568e44;
  case 7:
    pbVar2 = (byte *)0x14;
  case 0x77:
  case 0x9f:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar5 = "location_upsell_cell";
    break;
  case 8:
  case 0x33:
  case 0xc9:
    pbVar2 = (byte *)0xd000000000000014;
    pcVar5 = "custom_subtitle_cell";
    break;
  case 9:
    puVar7 = *(undefined **)(unaff_x20 + 0x48);
    uVar6 = *(ulong *)(unaff_x20 + 0x50);
    in_x15 = *(ulong *)(unaff_x20 + 0x38);
    uVar8 = *(ulong *)(unaff_x20 + 0x40);
    in_x16 = *(ulong *)(unaff_x20 + 0x28);
    uVar9 = *(ulong *)(unaff_x20 + 0x30);
    in_x14 = *(ulong *)(unaff_x20 + 0x18);
    in_x17 = *(ulong *)(unaff_x20 + 0x20);
  case 0x92:
    param_3 = *(ulong *)(unaff_x20 + 8);
    pbVar2 = *(byte **)(unaff_x20 + 0x10);
    if ((bVar1 == 0x90) &&
       ((((uVar6 == 0 && pcVar5 == (char *)0x0) && (puVar7 == (undefined *)0x0 && uVar8 == 0)) &&
        ((in_x15 == 0 && uVar9 == 0) && in_x16 == 0)) &&
        (((in_x17 == 0 && in_x14 == 0) && pbVar2 == (byte *)0x0) && param_3 == 0))) {
      auVar13._8_8_ = 0x800000010f0a99e0;
      auVar13._0_8_ = 0xd000000000000011;
      return auVar13;
    }
code_r0x000102568e70:
    uVar6 = (ulong)puVar7 | uVar6;
code_r0x000102568e74:
    puVar7 = (undefined *)(uVar8 | in_x15);
code_r0x000102568e78:
    uVar6 = uVar6 | (ulong)puVar7 | uVar9 | in_x16 | in_x17 | in_x14 | (ulong)pbVar2 | param_3;
    if ((bVar1 == 0x90) && (pcVar5 == (char *)0x1)) {
code_r0x000102568ea4:
      if (uVar6 == 0) {
        uVar4 = 0xef6c6c65635f6775;
code_r0x000102568eac:
        pbVar2 = (byte *)0x6572;
        goto code_r0x000102568eb0;
      }
    }
code_r0x000102568ec0:
    in_ZR = bVar1 == 0x90;
code_r0x000102568ec4:
    if (((bool)in_ZR) && (pcVar5 == (char *)0x2)) {
code_r0x000102568ed0:
      if (uVar6 == 0) {
        pcVar5 = "n.WidgetOnboardingWorkflow";
code_r0x000102568ed8:
        pcVar5 = pcVar5 + 0x9e0;
        goto code_r0x000102568edc;
      }
    }
code_r0x000102568ee0:
    uVar4 = 0x6c6c65;
code_r0x000102568ee8:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
code_r0x000102568eec:
    pbVar2 = (byte *)0x6f66;
code_r0x000102568ef0:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x746f0000);
code_r0x000102568ef4:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff | 0x635f726500000000);
code_r0x000102568efc:
    in_ZR = bVar1 == 0x90;
code_r0x000102568f00:
    if (((!(bool)in_ZR) || (pcVar5 != (char *)0x3)) || (uVar6 != 0)) goto code_r0x000102568d3c;
    pbVar2 = (byte *)0xd000000000000014;
    pcVar5 = "suggest_a_place_cell";
    break;
  case 0x1e:
  case 0xae:
    goto code_r0x000102568e74;
  case 0x1f:
  case 0x7e:
  case 0xaf:
    goto code_r0x000102568ee0;
  case 0x20:
  case 0xb0:
  case 199:
    goto code_r0x000102568eec;
  case 0x21:
  case 0x29:
  case 0x2c:
  case 0x31:
  case 0x36:
  case 0xb1:
  case 0xcc:
    goto code_r0x000102568eb4;
  case 0x22:
  case 0x23:
  case 0x2d:
  case 0x2e:
  case 0x37:
  case 0xb2:
  case 0xb3:
    goto code_r0x000102568ed0;
  case 0x24:
  case 0xb9:
    goto code_r0x000102568e6c;
  case 0x25:
  case 0x34:
  case 0xa7:
  case 0xac:
  case 0xb7:
  case 0xc2:
  case 0xc6:
  case 0xca:
  case 0xd0:
  case 0xd6:
  case 0xdb:
  case 0xde:
  case 0xe3:
  case 0xeb:
    goto code_r0x000102568edc;
  case 0x26:
  case 0xd3:
    goto code_r0x000102568ef4;
  case 0x27:
    goto code_r0x000102568ee8;
  case 0x28:
  case 0xa8:
  case 0xbd:
  case 0xdf:
    goto code_r0x000102568eac;
  case 0x2b:
  case 0xe5:
    goto code_r0x000102568e2c;
  case 0x2f:
    goto code_r0x000102568e78;
  case 0x30:
  case 0xab:
  case 0xbb:
  case 0xe2:
    goto code_r0x000102568ec4;
  case 0x32:
  case 0xba:
    goto code_r0x000102568efc;
  case 0x35:
  case 0xcb:
    goto code_r0x000102568eb0;
  case 0x3a:
    goto code_r0x0001025690f4;
  case 0x3b:
  case 0x4f:
  case 0x57:
  case 0x5f:
  case 0x67:
  case 0x7b:
  case 0x8f:
  case 0xef:
    pbVar2 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c(auStack_68,0);
    func_0x000107c60690(pbVar2);
  case 0x53:
    func_0x000107c606a8();
code_r0x000102568f58:
code_r0x000102568f60:
    auVar20._8_8_ = uVar4;
    auVar20._0_8_ = pbVar2;
    return auVar20;
  case 0x3c:
  case 0x50:
  case 0x58:
  case 0x60:
  case 0x68:
  case 0x7c:
  case 0x90:
  case 0xf0:
    goto code_r0x000102568fb8;
  case 0x3d:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x7d:
  case 0x91:
  case 0xf1:
    goto code_r0x000102568d28;
  case 0x3e:
    uRam6f6d5f74736f6867 = uRamef6c6c65635f6564;
    uRam6f6d5f74736f686f = uRamef6c6c65635f656c;
    uRam6f6d5f74736f6877 = uRamef6c6c65635f6574;
    uRam6f6d5f74736f687f = uRamef6c6c65635f657c;
    uRam6f6d5f74736f6887 = uRamef6c6c65635f6584;
    uRam6f6d5f74736f688f = uRamef6c6c65635f658c;
    uRam6f6d5f74736f6897 = uRamef6c6c65635f6594;
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
    func_0x000107c61174(uVar3);
    unaff_x19 = pbVar2;
  case 0x40:
  case 0x80:
  case 0xf4:
    auVar22._8_8_ = uVar4;
    auVar22._0_8_ = unaff_x19;
    return auVar22;
  case 0x3f:
  case 0x7f:
  case 0xf3:
    goto code_r0x000102568f58;
  case 0x48:
  case 0x88:
  case 0xfc:
    goto code_r0x000102568d2c;
  case 0x4a:
  case 0xfe:
    goto code_r0x000102568d30;
  case 0x4e:
  case 0x56:
  case 0x5e:
  case 0x66:
    goto code_r0x0001025690c4;
  case 0x52:
    pbVar2 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008);
    func_0x000107c60690(pbVar2);
    func_0x000107c606a8();
  case 0x78:
  case 0xa0:
    auVar21._8_8_ = uVar4;
    auVar21._0_8_ = pbVar2;
    return auVar21;
  case 0x54:
    unaff_x20[0x30] = unaff_x19[0x30];
    pbVar2 = unaff_x20;
  case 0x9e:
code_r0x0001025690c4:
    auVar23._8_8_ = 0xef6c6c65635f6564;
    auVar23._0_8_ = pbVar2;
    return auVar23;
  case 0x5a:
    goto code_r0x000102568f00;
  case 0x5c:
  case 100:
  case 0x6c:
  case 0x94:
    goto code_r0x000102568fcc;
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x95:
    func_0x000107c6142c();
    goto code_r0x0001025690f4;
  case 0x62:
  case 0xbe:
  case 0xc5:
    goto code_r0x000102568ec0;
  case 0x6a:
    goto code_r0x000102568e30;
  case 0x76:
    goto code_r0x000102568f60;
  case 0x79:
  case 0xa1:
    goto code_r0x000102568d34;
  case 0x7a:
    goto code_r0x000102569094;
  case 0x8e:
    unaff_x20[8] = 0x67;
    unaff_x20[9] = 0x68;
    unaff_x20[10] = 0x6f;
    unaff_x20[0xb] = 0x73;
    unaff_x20[0xc] = 0x74;
    unaff_x20[0xd] = 0x5f;
    unaff_x20[0xe] = 0x6d;
    unaff_x20[0xf] = 0x6f;
    func_0x000107c61434();
    func_0x000107c6142c();
    *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c61434();
    func_0x000107c6142c(uVar10);
    goto code_r0x000102569094;
  case 0xa6:
  case 0xdd:
    goto code_r0x000102568e50;
  case 0xa9:
  case 0xe0:
    goto code_r0x000102568ea4;
  case 0xaa:
  case 0xbc:
  case 200:
  case 0xd4:
  case 0xd5:
  case 0xe1:
    goto code_r0x000102568ef0;
  case 0xad:
  case 0xb5:
  case 0xc0:
  case 0xce:
  case 0xd7:
  case 0xd9:
  case 0xe4:
  case 0xe9:
    goto code_r0x000102568ed8;
  case 0xb4:
  case 0xbf:
  case 0xcd:
  case 0xd8:
  case 0xe8:
    goto code_r0x000102568e44;
  case 0xb6:
  case 0xc1:
  case 0xcf:
  case 0xda:
  case 0xea:
    goto code_r0x000102568eb8;
  case 0xd2:
    goto code_r0x000102568e28;
  case 0xe6:
    goto code_r0x000102568e70;
  case 0xf2:
    unaff_x19 = pbVar2;
    goto code_r0x000102568fb8;
  }
  uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
code_r0x000102568e6c:
  auVar18._8_8_ = uVar4;
  auVar18._0_8_ = pbVar2;
  return auVar18;
code_r0x000102569094:
  unaff_x20[0x20] = unaff_x19[0x20];
  pbVar2 = *(byte **)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x000107c61174();
  goto code_r0x000107c61170;
code_r0x000102568fb8:
  func_0x000107c6142c(uRam6f6d5f74736f686f);
  func_0x000107c6142c(*(undefined8 *)(unaff_x19 + 0x18));
  pbVar2 = *(byte **)(unaff_x19 + 0x28);
code_r0x000102568fcc:
  goto code_r0x000107c61170;
code_r0x000102568eb0:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x6f700000);
  goto code_r0x000102568eb4;
code_r0x000102568e28:
  pcVar5 = (char *)((ulong)pcVar5 & 0xffffffffffff | 0xd000000000000000);
  goto code_r0x000102568e2c;
code_r0x000102568d28:
  pcVar5 = pcVar5 + -0x20;
code_r0x000102568d2c:
  uVar4 = (ulong)pcVar5 | 0x8000000000000000;
code_r0x000102568d30:
  pcVar5 = (char *)0x14;
  goto code_r0x000102568d34;
code_r0x000102568eb4:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x747200000000);
code_r0x000102568eb8:
  auVar19._0_8_ = (ulong)pbVar2 & 0xffffffffffff | 0x625f000000000000;
  auVar19._8_8_ = uVar4;
  return auVar19;
code_r0x000102568e44:
  pbVar2 = (byte *)0xd000000000000015;
code_r0x000102568e50:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = pbVar2;
  return auVar17;
code_r0x000102568e2c:
  pbVar2 = (byte *)(pcVar5 + 6);
code_r0x000102568e30:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = pbVar2;
  return auVar16;
code_r0x000102568edc:
code_r0x000102568de8:
  auVar15._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
  auVar15._0_8_ = 0xd000000000000016;
  return auVar15;
code_r0x0001025690f4:
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  func_0x000107c6142c(uVar3);
  unaff_x20[0x20] = unaff_x19[0x20];
  pbVar2 = *(byte **)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pbVar2);
  auVar24._8_8_ = uVar4;
  auVar24._0_8_ = pbVar2;
  return auVar24;
code_r0x000102568d34:
  pbVar2 = (byte *)(((ulong)pcVar5 & 0xffffffffffff | 0xd000000000000000) + 4);
code_r0x000102568d3c:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = pbVar2;
  return auVar11;
}



/* Entry: 102568f24; end: 102568fd7;  */

void FUN_102568f24(void)

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



/* Entry: 102568fd8; end: 1025690cf;  */

undefined8 * FUN_102568fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1025690d0; end: 102569133;  */

undefined8 * FUN_1025690d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 102569134; end: 1025691e3;  */

int FUN_102569134(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1025691e4; end: 10256921b;  */

undefined8 * FUN_1025691e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 10256921c; end: 102569273;  */

undefined8 * FUN_10256921c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 102569274; end: 1025692b7;  */

undefined8 * FUN_102569274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 1025692b8; end: 10256934f;  */

int FUN_1025692b8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102569350; end: 1025693b3;  */

void FUN_102569350(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1025693b4; end: 102569417;  */

undefined8 * FUN_1025693b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102569418; end: 10256945b;  */

undefined8 * FUN_102569418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10256945c; end: 1025694f3;  */

int FUN_10256945c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1025694f4; end: 10256956b;  */

void FUN_1025694f4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10256956c; end: 1025695db;  */

undefined8 * FUN_10256956c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1025695dc; end: 10256962f;  */

undefined8 * FUN_1025695dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 102569630; end: 102569823;  */

int FUN_102569630(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102569824; end: 102569863;  */

void FUN_102569824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea5ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab8df8;
  func_0x000107c61520(&UNK_10dab8df8,&UNK_110520ee8);
  puRam0000000112ea5ae0 = puVar1;
  return;
}



/* Entry: 102569864; end: 1025698af;  */

undefined1 FUN_102569864(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1025698b0; end: 102569947;  */

undefined1  [16] FUN_1025698b0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = 0;
  uVar1 = (uint)param_2 >> 5 & 7;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      uVar3 = 0;
      if (uVar1 == 0) goto LAB_102569934;
      if ((param_2 & 1) != 0) {
        return ZEXT816(0);
      }
    }
    else {
      uVar3 = 0;
      if (uVar1 != 2) goto LAB_102569934;
    }
    uVar3 = 0;
    func_0x000102578ed8(0,0);
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  }
  if (uVar1 < 6) {
    if (uVar1 == 4) {
      FUN_102578fa4();
      auVar4._8_8_ = param_2;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    FUN_102578fbc();
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = uVar2;
    return auVar7;
  }
  uVar3 = 0;
  if (uVar1 == 6) {
    func_0x000102579088(0,0);
  }
LAB_102569934:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 102569948; end: 1025699a7; -[_TtC39SCLocationSharingSettingsImplementation28MainSettingsPageViewModelBox init] */

void FUN_102569948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.MainSettingsPageViewModelBox",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102569974);
  (*pcVar1)();
}



/* Entry: 1025699a8; end: 1025699b7; -[_TtC39SCLocationSharingSettingsImplementation28MainSettingsPageViewModelBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025699a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea5ae8));
  return;
}



/* Entry: 1025699b8; end: 1025699d7;  */

void FUN_1025699b8(void)

{
  func_0x000107c61168(&PTR_PTR_11284e040);
  return;
}



/* Entry: 1025699d8; end: 102569ae3;  */

undefined1  [16] FUN_1025699d8(void)

{
  return ZEXT816(0x110520f40);
}



/* Entry: 102569ae4; end: 102569b33;  */

undefined8 * FUN_102569ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10255ee50(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10255ee90(uVar3,uVar2);
  return param_1;
}



/* Entry: 102569b34; end: 102569b6f;  */

undefined8 * FUN_102569b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10255ee90(uVar3,uVar2);
  return param_1;
}



/* Entry: 102569b70; end: 102569c5b;  */

int FUN_102569b70(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x78 < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x79;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 2) >> 5) | (*(byte *)(param_1 + 2) >> 1 & 0xf) << 3) ^ 0x7f;
  if (0x77 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102569c5c; end: 102569c9b;  */

void FUN_102569c5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea5b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab8ebc;
  func_0x000107c61520(&UNK_10dab8ebc,&UNK_110520fd8);
  puRam0000000112ea5b18 = puVar1;
  return;
}



/* Entry: 102569c9c; end: 102569ca3;  */

undefined8 FUN_102569c9c(void)

{
  return 1;
}



/* Entry: 102569ca4; end: 102569d43;  */

void FUN_102569ca4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102569d44; end: 102569d4b;  */

undefined8 * FUN_102569d44(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10255ee50(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 102569d4c; end: 102569f0f;  */

void FUN_102569d4c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_70 = 2;
  lStack_68 = 0;
  uStack_60 = 0;
  func_0x00010008a7c8(&uStack_58,&uStack_70);
  func_0x000100083b20(&uStack_70);
  func_0x000107c61574(uStack_58);
  lVar2 = lStack_68;
  uVar1 = CONCAT71(uStack_6f,uStack_70);
  uVar8 = uVar1;
  func_0x000107c614f0();
  pcVar9 = *(code **)(lVar2 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar9)(param_1,uVar8,lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  func_0x000107c615f0(uVar1);
  func_0x000107c615e8(uVar7);
  uVar7 = uVar8;
  (**(code **)(lVar2 + 0x28))(uVar8,lVar2);
  pcVar3 = "provide(with:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar4 = (long *)pcVar3;
  func_0x000100471e0c();
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(pcVar3);
  puVar5 = &UNK_1105210c0;
  func_0x000107c613fc(&UNK_1105210c0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  pcVar9 = FUN_10256a01c;
  puVar6 = puVar5;
  (**(code **)(*plVar4 + 0x60))();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(code **)(unaff_x20 + 0x28) = pcVar9;
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
  func_0x000107c615e8(uVar7);
  (**(code **)(lVar2 + 0x20))(uVar8,lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar8;
  func_0x000107c61170(uVar7);
  pcVar9 = *(code **)(unaff_x20 + 0x48);
  if (pcVar9 == (code *)0x0) {
    func_0x000107c615e8(uVar1);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c6157c(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uVar1);
    func_0x00010058d43c(pcVar9,uVar8);
  }
  return;
}



/* Entry: 102569f10; end: 102569fb7;  */

void FUN_102569f10(double *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_58 [24];
  
  dVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((0.0 < dVar3) && (dVar3 != *(double *)(param_2 + 0x40))) {
      *(double *)(param_2 + 0x40) = dVar3;
      pcVar1 = *(code **)(param_2 + 0x48);
      if (pcVar1 != (code *)0x0) {
        uVar2 = *(undefined8 *)(param_2 + 0x50);
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61574(param_2);
        func_0x00010058d43c(pcVar1,uVar2);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102569fb8; end: 10256a01b;  */

void FUN_102569fb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10256a01c; end: 10256a023;  */

void FUN_10256a01c(double *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  undefined1 auStack_58 [24];
  
  dVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((0.0 < dVar4) && (dVar4 != *(double *)(lVar1 + 0x40))) {
      *(double *)(lVar1 + 0x40) = dVar4;
      pcVar2 = *(code **)(lVar1 + 0x48);
      if (pcVar2 != (code *)0x0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x50);
        func_0x000107c6157c(uVar3);
        (*pcVar2)();
        func_0x000107c61574(lVar1);
        func_0x00010058d43c(pcVar2,uVar3);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10256a024; end: 10256a083; -[_TtC39SCLocationSharingSettingsImplementation24ReportIssuePageActionBox init] */

void FUN_10256a024(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.ReportIssuePageActionBox",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256a050);
  (*pcVar1)();
}



/* Entry: 10256a084; end: 10256a0af; -[_TtC39SCLocationSharingSettingsImplementation24ReportIssuePageActionBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10256a084(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113804738;
  lVar1 = 0;
  FUN_10256a11c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10256a0b0; end: 10256a11b;  */

void FUN_10256a0b0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10256a11c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 10256a11c; end: 10256a12f;  */

void FUN_10256a11c(undefined8 param_1)

{
  if (lRam0000000112ea5c90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e1d90);
  return;
}



/* Entry: 10256a130; end: 10256a15f;  */

void FUN_10256a130(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10256a160; end: 10256a21b;  */

long * FUN_10256a160(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      func_0x000107c5eff8();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    func_0x000107c6159c(param_1,param_3,!bVar2);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10256a21c; end: 10256a26b;  */

void FUN_10256a21c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5eff8();
                    /* WARNING: Could not recover jumptable at 0x00010256a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10256a26c; end: 10256a38b;  */

undefined8 * FUN_10256a26c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    func_0x000107c5eff8();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  func_0x000107c6159c(param_1,param_3,!bVar1);
  return param_1;
}



/* Entry: 10256a38c; end: 10256a3c7;  */

undefined8 FUN_10256a38c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10256a11c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10256a3c8; end: 10256a4ff;  */

undefined8 FUN_10256a3c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5eff8();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    func_0x000107c6159c(param_1,param_3,1);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 10256a500; end: 10256a52f;  */

void FUN_10256a500(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010256a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10256a530; end: 10256a5a3;  */

void FUN_10256a530(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5eff8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 10256a5a4; end: 10256a603; -[_TtC39SCLocationSharingSettingsImplementation28ReportIssuePageBusinessLogic init] */

void FUN_10256a5a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.ReportIssuePageBusinessLogic",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256a5d0);
  (*pcVar1)();
}



/* Entry: 10256a604; end: 10256a613; -[_TtC39SCLocationSharingSettingsImplementation28ReportIssuePageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10256a604(long param_1)

{
  param_1 = param_1 + _DAT_112ea5cc8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10256a614; end: 10256a633;  */

void FUN_10256a614(void)

{
  func_0x000107c61168(&PTR_PTR_112ea5d10);
  return;
}



/* Entry: 10256a634; end: 10256a6ab; -[_TtC39SCLocationSharingSettingsImplementation28ReportIssuePageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256a634(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  uVar1 = 0x112ea59c0;
  func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
  func_0x000107c61538();
  lVar2 = 0;
  FUN_10256c17c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea5fa0) = uVar1;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10256a6ac; end: 10256a7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256a6ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10256a11c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)(puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_10256a9fc(param_1 + _DAT_113804738,puVar6);
  puVar3 = puVar6;
  func_0x000107c614c4(puVar6,lVar2);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar7 + 0x20))(puVar5,puVar6,lVar1);
    FUN_10256a7e4(puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
  }
  else {
    uVar4 = *puVar6;
    lVar1 = unaff_x20 + _DAT_112ea5cc8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c50264();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10256a7e4; end: 10256a9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256a7e4(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  
  func_0x000107c5eff4();
  if (0 < (long)param_1) {
    return;
  }
  func_0x000107c5efe4();
  if (1 < (long)param_1) {
    return;
  }
  func_0x000107c5efe4();
  if (1 < param_1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10256a9ac);
    (*pcVar12)();
  }
  lVar11 = param_1 * 0x60;
  lVar13 = *(long *)(lVar11 + 0x112ea5d98);
  lVar5 = *(long *)(lVar11 + 0x112ea5da0);
  lVar1 = *(long *)(lVar11 + 0x112ea5da8);
  lVar6 = *(long *)(lVar11 + 0x112ea5db0);
  lVar2 = *(long *)(lVar11 + 0x112ea5db8);
  lVar7 = *(long *)(lVar11 + 0x112ea5dc0);
  lVar3 = *(long *)(lVar11 + 0x112ea5dc8);
  lVar8 = *(long *)(lVar11 + 0x112ea5dd0);
  lVar4 = *(long *)(lVar11 + 0x112ea5dd8);
  lVar9 = *(long *)(lVar11 + 0x112ea5de0);
  lVar14 = *(long *)(lVar11 + 0x112ea5de8);
  bVar10 = *(byte *)(lVar11 + 0x112ea5df0);
  FUN_1025682ac(lVar13,lVar5,lVar1,lVar6,lVar2,lVar7,lVar3,lVar8,lVar4,lVar9,lVar14,bVar10);
  func_0x000107c61408(0x112ea5d98,2,&UNK_110520c38);
  if ((bVar10 & 0xf0) != 0x90) {
LAB_10256a8f8:
    FUN_102568414(lVar13,lVar5,lVar1,lVar6,lVar2,lVar7,lVar3,lVar8,lVar4,lVar9,lVar14,bVar10);
    return;
  }
  if ((bVar10 == 0x90 && lVar13 == 1) &&
      ((((lVar1 == 0 && lVar5 == 0) && (lVar6 == 0 && lVar2 == 0)) &&
       ((lVar7 == 0 && lVar3 == 0) && lVar8 == 0)) && ((lVar4 == 0 && lVar9 == 0) && lVar14 == 0)))
  {
    lVar13 = unaff_x20 + _DAT_112ea5cc8;
    func_0x000107c61618();
    if (lVar13 == 0) {
      return;
    }
    func_0x000107c4efd4();
  }
  else {
    if ((bVar10 != 0x90 || lVar13 != 2) ||
        ((((lVar1 != 0 || lVar5 != 0) || (lVar6 != 0 || lVar2 != 0)) ||
         ((lVar7 != 0 || lVar3 != 0) || lVar8 != 0)) || ((lVar4 != 0 || lVar9 != 0) || lVar14 != 0))
       ) goto LAB_10256a8f8;
    lVar13 = unaff_x20 + _DAT_112ea5cc8;
    func_0x000107c61618();
    if (lVar13 == 0) {
      return;
    }
    func_0x000107c4ef70();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar13);
  return;
}



/* Entry: 10256a9ac; end: 10256a9fb; -[_TtC39SCLocationSharingSettingsImplementation28ReportIssuePageBusinessLogic handleAction:] */

/* WARNING: Possible PIC construction at 0x00010256a9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256a9e8) */

void FUN_10256a9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10256a6ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10256a9fc; end: 10256aa63;  */

undefined8 FUN_10256a9fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10256a11c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10256aa64; end: 10256aac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10256aa64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea5f40;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea5f40);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10256aac8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10256aac8; end: 10256abb7;  */

undefined * FUN_10256aac8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x000107c453e4();
  func_0x000107c566fc(0);
  func_0x000107c566f4(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  func_0x0001025712d8(0);
  func_0x000107c614e8();
  uVar3 = 0x6c6c6543474953;
  func_0x000107c5fadc(0x6c6c6543474953,0xe700000000000000);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c53e08(puVar2);
  func_0x000107c53fcc(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10256abb8; end: 10256adbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10256abb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f40) = 0;
  *(undefined **)(unaff_x20 + _DAT_112ea5f48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5f60) = param_3;
  puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar3,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c3f648();
  func_0x000107c61180();
  func_0x000107c53224();
  func_0x000107c615e8(puVar2);
  func_0x000107c309e0();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x0001025788fc();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c59a8c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  func_0x00010083f5a0();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c53dec(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10256adc0; end: 10256ae4f; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256adc0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea5f40) = 0;
  *(undefined **)(param_1 + _DAT_112ea5f48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112ea5f68) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea5f70) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000048,0x800000010ef27040,
                      "SCLocationSharingSettingsImplementation/ReportIssuePageViewController.swift",
                      0x4b,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256ae50);
  (*pcVar1)();
}



/* Entry: 10256ae50; end: 10256aedf; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256ae50(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea5f40) = 0;
  *(undefined **)(param_1 + _DAT_112ea5f48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112ea5f68) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea5f70) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/ReportIssuePageViewController.swift",
                      0x4b,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256aee0);
  (*pcVar1)();
}



/* Entry: 10256aee0; end: 10256b0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256aee0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  iVar1 = (int)&puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea5f50);
  puVar2 = &UNK_1105210e8;
  func_0x000107c613fc(&UNK_1105210e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_10256c0e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10115ae3c;
  puStack_58 = &UNK_110521100;
  puStack_48 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_48);
  func_0x000107c5bb90(uVar3);
  func_0x000107c60bd0();
  func_0x00010083f5a0();
  if (iVar1 != 0) {
    func_0x000107c44c68();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c53fcc();
      func_0x000107c61170(unaff_x20);
    }
    func_0x00010256afec();
    FUN_10256b0b4();
  }
  return;
}


