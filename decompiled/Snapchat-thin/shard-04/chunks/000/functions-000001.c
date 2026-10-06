/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f32ea8; end: 102f32f4b;  */

void FUN_102f32ea8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f32f4c;
                    /* WARNING: Could not recover jumptable at 0x000102f32f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_4,param_5,0,param_2,param_3)
  ;
  return;
}



/* Entry: 102f32f4c; end: 102f32fa7;  */

void FUN_102f32f4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f32fa8;
  }
  else {
    pcVar1 = FUN_102f330cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f32fa8; end: 102f33077;  */

void FUN_102f32fa8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  if (lVar3 == 0) {
    func_0x0001012b6798(unaff_x22 + 0x10);
    uVar4 = 0;
    uVar2 = 0xe000000000000000;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(uVar2);
    func_0x0001012b6798(unaff_x22 + 0x10);
    func_0x000107c6142c(lVar3);
  }
  *(undefined8 *)(unaff_x22 + 0x108) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  uVar4 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f33078,uVar2,uVar4);
  return;
}



/* Entry: 102f33078; end: 102f330cb;  */

void FUN_102f33078(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  pcVar2 = *(code **)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  (*pcVar2)(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f330c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f330cc; end: 102f33157;  */

void FUN_102f330cc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f33158,uVar2,uVar3);
  return;
}



/* Entry: 102f33158; end: 102f331a3;  */

void FUN_102f33158(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  (*pcVar1)(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f331a4,0,0);
  return;
}



/* Entry: 102f331a4; end: 102f331d3;  */

void FUN_102f331a4(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x000102f331d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f331d4; end: 102f331e7;  */

/* WARNING: Possible PIC construction at 0x000102f34eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f34ebc) */

void FUN_102f331d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_1105ea9c8;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ea9c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar4,FUN_102f3c204,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f331e8; end: 102f333d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f331e8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  lVar1 = param_5 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x78);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112ff5e38);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&lStack_80);
    func_0x000107c61574(uVar5);
    if (lStack_80 != 0) {
      func_0x000107c61428(param_5 + 0x10,&lStack_80,0,0);
      lVar1 = param_5 + 0x10;
      func_0x000107c61648();
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar1 + 0x68);
        func_0x000107c61174();
        func_0x000107c61574(lVar1);
        uVar5 = uVar4;
        func_0x000107c5b4b0();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
      }
      puVar2 = &UNK_1105ea950;
      func_0x000107c613fc(&UNK_1105ea950,0x50,7);
      *(undefined8 *)(puVar2 + 0x18) = uStack_78;
      *(long *)(puVar2 + 0x10) = lStack_80;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      *(undefined8 *)(puVar2 + 0x28) = param_2;
      *(long *)(puVar2 + 0x30) = param_5;
      *(undefined8 *)(puVar2 + 0x38) = uVar5;
      *(code **)(puVar2 + 0x40) = param_3;
      *(undefined8 *)(puVar2 + 0x48) = param_4;
      func_0x000107c61174(uVar5);
      func_0x000107c6157c(param_4);
      func_0x000107c615f0(lStack_80);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(param_5);
      uVar4 = 4;
      func_0x0001001ca524(4,0,0x90,4,0,0,&UNK_10db65cb8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar4);
      return;
    }
  }
  (*param_3)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102f333d8; end: 102f33483;  */

void FUN_102f333d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 0x60);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f33484;
                    /* WARNING: Could not recover jumptable at 0x000102f33480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_4,param_5,0,0,param_2,param_3);
  return;
}



/* Entry: 102f33484; end: 102f334e7;  */

void FUN_102f33484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x90) = param_1;
  *(undefined8 *)(lVar2 + 0x98) = param_2;
  *(undefined8 *)(lVar2 + 0xa0) = param_3;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f334e8;
  }
  else {
    pcVar1 = FUN_102f33c50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f334e8; end: 102f335a7;  */

void FUN_102f334e8(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x98);
  uVar3 = *(ulong *)(unaff_x22 + 0xa0);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434();
  }
  *(ulong *)(unaff_x22 + 0xb0) = uVar6;
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  uVar5 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f335a8,uVar4,uVar5);
  return;
}



/* Entry: 102f335a8; end: 102f33667;  */

/* WARNING: Possible PIC construction at 0x000102f33610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f33614) */

void FUN_102f335a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  FUN_102f33d58(uVar3,uVar5,uVar2,uVar6,uVar1);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c614ac(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f33668,0,0);
  return;
}



/* Entry: 102f33668; end: 102f33847;  */

void FUN_102f33668(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar11 = 0;
  lVar12 = *(long *)(unaff_x22 + 0x90);
  uVar13 = *(ulong *)(lVar12 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    *(undefined **)(unaff_x22 + 0xd8) = puVar7;
    puVar8 = (ulong *)(lVar12 + 0x38 + uVar11 * 0x28);
    do {
      if (uVar13 == uVar11) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar12 = *(long *)(unaff_x22 + 0x70);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x90));
        func_0x000107c6142c(uVar9);
        if (*(long *)(puVar7 + 0x10) != 0 && lVar12 != 0) {
          lVar12 = *(long *)(unaff_x22 + 0x70);
          func_0x000107c5c734();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0xe0) = lVar12;
          if (lVar12 != 0) {
            uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
            uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
            func_0x000107c5fce8();
            *(long *)(unaff_x22 + 0xe8) = lVar12;
            func_0x000107c5fca8(uVar9,uVar10);
            pcVar4 = FUN_102f33848;
            goto LAB_102f3381c;
          }
        }
        uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
        func_0x000107c6142c();
        func_0x000107c5fce8();
        *(undefined **)(unaff_x22 + 0xf8) = puVar7;
        func_0x000107c5fca8(uVar9,uVar10);
        pcVar4 = FUN_102f33c10;
LAB_102f3381c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(pcVar4,uVar9,uVar10);
        return;
      }
      if (*(ulong *)(lVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f33848);
        (*pcVar4)();
      }
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      puVar8 = puVar8 + 5;
      uVar11 = uVar11 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar5 = puVar7;
    func_0x000107c61558();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_102f38e04(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258
                   );
    }
    uVar2 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_102f38e04(puVar7,uVar2 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
    *(ulong *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
  } while( true );
}



/* Entry: 102f33848; end: 102f338f3;  */

void FUN_102f33848(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x40,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0xb0);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c61574(lVar3);
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xf0) = lVar3;
      func_0x000107c61170(lVar2);
      pcVar1 = FUN_102f33a2c;
      goto LAB_102f338dc;
    }
    func_0x000107c61574();
  }
  pcVar1 = FUN_102f338f4;
LAB_102f338dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f338f4; end: 102f33a2b;  */

void FUN_102f338f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = uVar7;
  func_0x000107c5fc48(uVar7,PTR___sSSN_11034da80);
  uVar3 = 0;
  FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_1105ea978;
  func_0x000107c613fc(&UNK_1105ea978,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x30) = uVar8;
  *(code **)(unaff_x22 + 0x30) = FUN_102f3c1f8;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100f6151c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1105ea990;
  func_0x000107c60bc4();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c5b4f8(uVar1);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f33a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f33a2c; end: 102f33c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f33a2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar2 = *(long *)(unaff_x22 + 0xf0);
  if (lVar2 == 0) {
    uVar9 = 0;
    lVar10 = 0;
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)(lVar2 + _DAT_112f29c90);
    if (lVar8 == 0) {
      uVar9 = 0;
      lVar10 = 0;
      param_2 = 0;
    }
    else {
      func_0x000107c61174();
      func_0x000107c5d984();
      func_0x000107c61180();
      lVar10 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar8);
      uVar9 = *(undefined8 *)(lVar2 + _DAT_112f29c90);
    }
    func_0x000107c61174(uVar9);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = uVar11;
  func_0x000107c5fc48(uVar11,PTR___sSSN_11034da80);
  uVar4 = 0;
  FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar5 = &UNK_1105ea978;
  func_0x000107c613fc(&UNK_1105ea978,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar11;
  *(long *)(puVar5 + 0x20) = lVar10;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x38) = uVar14;
  *(undefined8 *)(puVar5 + 0x30) = uVar13;
  *(code **)(unaff_x22 + 0x30) = FUN_102f3c1f8;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100f6151c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1105ea990;
  func_0x000107c60bc4();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c5b4f8(uVar1);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f33c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f33c10; end: 102f33c4f;  */

void FUN_102f33c10(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  (*pcVar1)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102f33c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f33c50; end: 102f33cdb;  */

void FUN_102f33c50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f33cdc,uVar2,uVar3);
  return;
}



/* Entry: 102f33cdc; end: 102f33d27;  */

void FUN_102f33cdc(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  (*pcVar1)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f33d28,0,0);
  return;
}



/* Entry: 102f33d28; end: 102f33d57;  */

void FUN_102f33d28(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000102f33d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f33d58; end: 102f33e33;  */

void FUN_102f33d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(lVar1 + 0xb8) = param_2;
    *(undefined8 *)(lVar1 + 0xc0) = param_3;
    func_0x000107c61434(param_3);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 200) = param_4;
    *(undefined8 *)(param_1 + 0xd0) = param_5;
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_5);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102f33e34; end: 102f34127;  */

undefined * FUN_102f33e34(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_102f3bdb4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_102f340e4:
        puStack_58 = (undefined *)0x0;
LAB_102f340e8:
        func_0x00010109bac0(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_102f3bdb4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f34128);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_102f340e4;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_102f340e8;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_102f388bc(0,puVar7 + 1,1,puStack_98,&UNK_10109912c,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_102f388bc(puVar10,uVar13 + 1,1,puStack_98,&UNK_10109912c,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 102f34128; end: 102f34d97;  */

/* WARNING: Possible PIC construction at 0x000102f34348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f344c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f346e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f347e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f348d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f349b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3452c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f344ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f341b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f34530) */
/* WARNING: Removing unreachable block (ram,0x000102f34578) */
/* WARNING: Removing unreachable block (ram,0x000102f34818) */
/* WARNING: Removing unreachable block (ram,0x000102f3486c) */
/* WARNING: Removing unreachable block (ram,0x000102f34958) */
/* WARNING: Removing unreachable block (ram,0x000102f34a8c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a7c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a88) */
/* WARNING: Removing unreachable block (ram,0x000102f34b0c) */
/* WARNING: Removing unreachable block (ram,0x000102f34ab8) */
/* WARNING: Removing unreachable block (ram,0x000102f34b04) */
/* WARNING: Removing unreachable block (ram,0x000102f34afc) */
/* WARNING: Removing unreachable block (ram,0x000102f34b10) */
/* WARNING: Removing unreachable block (ram,0x000102f34a4c) */
/* WARNING: Removing unreachable block (ram,0x000102f34ac8) */
/* WARNING: Removing unreachable block (ram,0x000102f349bc) */
/* WARNING: Removing unreachable block (ram,0x000102f349c4) */
/* WARNING: Removing unreachable block (ram,0x000102f34a74) */
/* WARNING: Removing unreachable block (ram,0x000102f349cc) */
/* WARNING: Removing unreachable block (ram,0x000102f349dc) */
/* WARNING: Removing unreachable block (ram,0x000102f349e4) */
/* WARNING: Removing unreachable block (ram,0x000102f34a3c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a94) */
/* WARNING: Removing unreachable block (ram,0x000102f34a44) */
/* WARNING: Removing unreachable block (ram,0x000102f348d8) */
/* WARNING: Removing unreachable block (ram,0x000102f348e4) */
/* WARNING: Removing unreachable block (ram,0x000102f348f4) */
/* WARNING: Removing unreachable block (ram,0x000102f348fc) */
/* WARNING: Removing unreachable block (ram,0x000102f34a5c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a68) */
/* WARNING: Removing unreachable block (ram,0x000102f347e4) */
/* WARNING: Removing unreachable block (ram,0x000102f3481c) */
/* WARNING: Removing unreachable block (ram,0x000102f34904) */
/* WARNING: Removing unreachable block (ram,0x000102f34950) */
/* WARNING: Removing unreachable block (ram,0x000102f3491c) */
/* WARNING: Removing unreachable block (ram,0x000102f34960) */
/* WARNING: Removing unreachable block (ram,0x000102f34930) */
/* WARNING: Removing unreachable block (ram,0x000102f34968) */
/* WARNING: Removing unreachable block (ram,0x000102f349a4) */
/* WARNING: Removing unreachable block (ram,0x000102f3497c) */
/* WARNING: Removing unreachable block (ram,0x000102f349b4) */
/* WARNING: Removing unreachable block (ram,0x000102f34834) */
/* WARNING: Removing unreachable block (ram,0x000102f3487c) */
/* WARNING: Removing unreachable block (ram,0x000102f34848) */
/* WARNING: Removing unreachable block (ram,0x000102f34884) */
/* WARNING: Removing unreachable block (ram,0x000102f348c0) */
/* WARNING: Removing unreachable block (ram,0x000102f34898) */
/* WARNING: Removing unreachable block (ram,0x000102f348d0) */
/* WARNING: Removing unreachable block (ram,0x000102f34cdc) */
/* WARNING: Removing unreachable block (ram,0x000102f34d30) */
/* WARNING: Removing unreachable block (ram,0x000102f34ca4) */
/* WARNING: Removing unreachable block (ram,0x000102f34ce0) */
/* WARNING: Removing unreachable block (ram,0x000102f34ce4) */
/* WARNING: Removing unreachable block (ram,0x000102f34d70) */
/* WARNING: Removing unreachable block (ram,0x000102f34d78) */
/* WARNING: Removing unreachable block (ram,0x000102f34d84) */
/* WARNING: Removing unreachable block (ram,0x000102f34d00) */
/* WARNING: Removing unreachable block (ram,0x000102f34cac) */
/* WARNING: Removing unreachable block (ram,0x000102f34cb8) */
/* WARNING: Removing unreachable block (ram,0x000102f34d58) */
/* WARNING: Removing unreachable block (ram,0x000102f34750) */
/* WARNING: Removing unreachable block (ram,0x000102f346ec) */
/* WARNING: Removing unreachable block (ram,0x000102f34bec) */
/* WARNING: Removing unreachable block (ram,0x000102f346fc) */
/* WARNING: Removing unreachable block (ram,0x000102f34708) */
/* WARNING: Removing unreachable block (ram,0x000102f3475c) */
/* WARNING: Removing unreachable block (ram,0x000102f347e8) */
/* WARNING: Removing unreachable block (ram,0x000102f34b14) */
/* WARNING: Removing unreachable block (ram,0x000102f34b20) */
/* WARNING: Removing unreachable block (ram,0x000102f34b24) */
/* WARNING: Removing unreachable block (ram,0x000102f34b28) */
/* WARNING: Removing unreachable block (ram,0x000102f34bd8) */
/* WARNING: Removing unreachable block (ram,0x000102f34be0) */
/* WARNING: Removing unreachable block (ram,0x000102f34b30) */
/* WARNING: Removing unreachable block (ram,0x000102f34b38) */
/* WARNING: Removing unreachable block (ram,0x000102f34b68) */
/* WARNING: Removing unreachable block (ram,0x000102f34b9c) */
/* WARNING: Removing unreachable block (ram,0x000102f34b7c) */
/* WARNING: Removing unreachable block (ram,0x000102f34b98) */
/* WARNING: Removing unreachable block (ram,0x000102f34bf4) */
/* WARNING: Removing unreachable block (ram,0x000102f34c00) */
/* WARNING: Removing unreachable block (ram,0x000102f34d5c) */
/* WARNING: Removing unreachable block (ram,0x000102f34d60) */
/* WARNING: Removing unreachable block (ram,0x000102f34c0c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c10) */
/* WARNING: Removing unreachable block (ram,0x000102f34c18) */
/* WARNING: Removing unreachable block (ram,0x000102f34d1c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c20) */
/* WARNING: Removing unreachable block (ram,0x000102f34cbc) */
/* WARNING: Removing unreachable block (ram,0x000102f34c24) */
/* WARNING: Removing unreachable block (ram,0x000102f34d54) */
/* WARNING: Removing unreachable block (ram,0x000102f34c30) */
/* WARNING: Removing unreachable block (ram,0x000102f34c3c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c70) */
/* WARNING: Removing unreachable block (ram,0x000102f34ccc) */
/* WARNING: Removing unreachable block (ram,0x000102f34c7c) */
/* WARNING: Removing unreachable block (ram,0x000102f347a0) */
/* WARNING: Removing unreachable block (ram,0x000102f347d4) */
/* WARNING: Removing unreachable block (ram,0x000102f347f4) */
/* WARNING: Removing unreachable block (ram,0x000102f347dc) */
/* WARNING: Removing unreachable block (ram,0x000102f3471c) */
/* WARNING: Removing unreachable block (ram,0x000102f34754) */
/* WARNING: Removing unreachable block (ram,0x000102f34738) */
/* WARNING: Removing unreachable block (ram,0x000102f34634) */
/* WARNING: Removing unreachable block (ram,0x000102f344cc) */
/* WARNING: Removing unreachable block (ram,0x000102f34544) */
/* WARNING: Removing unreachable block (ram,0x000102f3457c) */
/* WARNING: Removing unreachable block (ram,0x000102f34434) */
/* WARNING: Removing unreachable block (ram,0x000102f3443c) */
/* WARNING: Removing unreachable block (ram,0x000102f344e0) */
/* WARNING: Removing unreachable block (ram,0x000102f34448) */
/* WARNING: Removing unreachable block (ram,0x000102f34458) */
/* WARNING: Removing unreachable block (ram,0x000102f344f8) */
/* WARNING: Removing unreachable block (ram,0x000102f34464) */
/* WARNING: Removing unreachable block (ram,0x000102f344bc) */
/* WARNING: Removing unreachable block (ram,0x000102f3450c) */
/* WARNING: Removing unreachable block (ram,0x000102f344c4) */
/* WARNING: Removing unreachable block (ram,0x000102f3434c) */
/* WARNING: Removing unreachable block (ram,0x000102f34354) */
/* WARNING: Removing unreachable block (ram,0x000102f34368) */
/* WARNING: Removing unreachable block (ram,0x000102f34370) */
/* WARNING: Removing unreachable block (ram,0x000102f344f0) */

void FUN_102f34128(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102f3a948();
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
  }
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar16 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
    puVar17 = puVar3;
  }
  else {
    func_0x000107c61434(param_1);
    lVar15 = 4;
    do {
      uVar14 = lVar15 - 4;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346c0);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(puVar3 + lVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar14;
        param_2 = puVar3;
        func_0x00010103193c();
      }
      puVar1 = (undefined *)(lVar15 - 3);
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346b8);
        (*pcVar4)();
      }
      uVar14 = uVar6;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar14 == 0) {
        func_0x000107c61170(uVar6);
      }
      else {
        uVar7 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        uVar14 = uVar7 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar14 = (ulong)param_2 >> 0x38 & 0xf;
        }
        puVar17 = param_2;
        if (uVar14 == 0) break;
        puVar17 = (undefined *)0x112d67d90;
        FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
        func_0x000107c61174();
        uVar14 = uVar6;
        FUN_102f48440();
        if (param_3 != 0) {
          lVar8 = param_3;
          func_0x000107c61174();
          uVar10 = uVar14;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (uVar10 != 0) {
            uVar14 = uVar10;
            func_0x000107c3e544();
            func_0x000107c61180();
            if (uVar14 == 0) {
              puVar17 = (undefined *)0xe000000000000000;
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(uVar14);
            }
            uVar14 = uVar10;
            func_0x000107c51d04();
            func_0x000107c61180();
            if (uVar14 == 0) {
              func_0x000107c61170(uVar10);
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar14);
            }
            break;
          }
          lVar9 = lVar8;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (lVar9 != 0) {
            lVar15 = lVar9;
            func_0x000107c3e544();
            func_0x000107c61180();
            if (lVar15 == 0) {
              puVar17 = (undefined *)0xe000000000000000;
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(lVar15);
            }
            lVar15 = lVar9;
            func_0x000107c51d04();
            func_0x000107c61180();
            if (lVar15 == 0) {
              func_0x000107c61170(lVar9);
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(lVar9);
              func_0x000107c61170(lVar15);
            }
            break;
          }
          func_0x000107c61170(lVar8);
        }
        func_0x000107c61174();
        puVar17 = puVar5;
        func_0x000107c61558();
        uVar10 = uVar7;
        puVar11 = param_2;
        func_0x000100029284();
        uVar13 = (ulong)~(uint)puVar11 & 1;
        lVar8 = *(long *)(puVar5 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346bc);
          (*pcVar4)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar8) {
          FUN_102f39300(lVar8,puVar17);
          uVar10 = uVar7;
          puVar12 = param_2;
          func_0x000100029284();
          if (((uint)puVar11 & 1) != ((uint)puVar12 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f34d98);
            (*pcVar4)();
          }
        }
        else {
          puVar12 = puVar11;
          if (((ulong)puVar17 & 1) == 0) {
            FUN_102f39190();
          }
        }
        if (((ulong)puVar11 & 1) != 0) {
          *(ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar14;
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar14);
          puVar17 = param_2;
          break;
        }
        *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
        *puVar2 = uVar7;
        puVar2[1] = (ulong)param_2;
        *(ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar14;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar14);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346c4);
          (*pcVar4)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        param_2 = puVar12;
      }
      lVar15 = lVar15 + 1;
      puVar17 = puVar3;
    } while (puVar1 != puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar17);
  return;
}



/* Entry: 102f34d98; end: 102f34e23;  */

undefined8 FUN_102f34d98(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_102f39124();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f34e24);
  (*pcVar2)();
}



/* Entry: 102f34e24; end: 102f34e37;  */

/* WARNING: Possible PIC construction at 0x000102f34eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f34ebc) */

void FUN_102f34e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_1105ea928;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ea928,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar4,FUN_102f3c150,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f34e38; end: 102f34edf;  */

/* WARNING: Possible PIC construction at 0x000102f34eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f34ebc) */

void FUN_102f34e38(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c60bc4();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_5,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f34ee0; end: 102f3576b;  */

/* WARNING: Removing unreachable block (ram,0x000102f35758) */
/* WARNING: Removing unreachable block (ram,0x000102f35750) */
/* WARNING: Removing unreachable block (ram,0x000102f35748) */
/* WARNING: Removing unreachable block (ram,0x000102f3574c) */
/* WARNING: Removing unreachable block (ram,0x000102f35754) */
/* WARNING: Removing unreachable block (ram,0x000102f35744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f34ee0(long param_1,code *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,uint param_6,uint param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined1 auStack_110 [96];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  puVar5 = (undefined *)(param_1 + 0x10);
  func_0x000107c61648();
  if (puVar5 == (undefined *)0x0) {
    return;
  }
  puVar6 = puVar5;
  FUN_102f3974c();
  if (puVar6 == (undefined *)0x0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61574(puVar5);
    return;
  }
  puVar8 = puVar6;
  FUN_102f3576c();
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_4) {
      puVar8 = param_4;
    }
    func_0x000107c60480();
    puVar11 = puVar8;
  }
  puVar15 = (undefined *)((ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU));
  puVar16 = puVar15;
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar11 != (undefined *)0x0) {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102f03278(0,puVar15,0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3573c);
      (*pcVar4)();
    }
    puVar24 = (undefined *)0x0;
    do {
      puVar27 = puStack_b0;
      if (((ulong)param_4 & 0xc000000000000001) == 0) {
        if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f356fc);
          (*pcVar4)();
        }
        if (*(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f35700);
          (*pcVar4)();
        }
        puVar8 = *(undefined **)(param_4 + (long)puVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar24;
        puVar16 = param_4;
        FUN_102f45034(puVar24,param_4);
      }
      puVar7 = puVar8;
      FUN_102f357d8();
      func_0x000107c61170(puVar8);
      uVar3 = *(ulong *)(puVar27 + 0x10);
      puVar26 = (undefined *)(uVar3 + 1);
      puStack_b0 = puVar27;
      if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar27 + 0x18));
        puVar16 = puVar26;
        func_0x000102f03278(puVar8,puVar26,1);
      }
      puVar24 = puVar24 + 1;
      *(undefined **)(puStack_b0 + 0x10) = puVar26;
      *(undefined **)(puStack_b0 + uVar3 * 8 + 0x20) = puVar7;
      puVar27 = puStack_b0;
    } while (puVar11 != puVar24);
  }
  if ((ulong)param_5 >> 0x3e == 0) {
    puVar24 = *(undefined **)(((ulong)param_5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_5) {
      puVar8 = param_5;
    }
    func_0x000107c60480();
    puVar24 = puVar8;
  }
  puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar24 != (undefined *)0x0) {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar16 = (undefined *)((ulong)puVar24 & ((long)puVar24 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000102f03278(0,puVar16,0);
    if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f35740);
      (*pcVar4)();
    }
    puVar23 = (undefined *)0x0;
    do {
      puVar7 = puStack_b0;
      if (((ulong)param_5 & 0xc000000000000001) == 0) {
        if ((long)puVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f35704);
          (*pcVar4)();
        }
        if (*(undefined **)(((ulong)param_5 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f35708);
          (*pcVar4)();
        }
        puVar8 = *(undefined **)(param_5 + (long)puVar23 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar23;
        puVar16 = param_5;
        FUN_102f45034(puVar23,param_5);
      }
      puVar25 = puVar8;
      FUN_102f357d8();
      func_0x000107c61170(puVar8);
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar21 = (undefined *)(uVar3 + 1);
      puStack_b0 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        puVar16 = puVar21;
        func_0x000102f03278(puVar8,puVar21,1);
      }
      puVar23 = puVar23 + 1;
      *(undefined **)(puStack_b0 + 0x10) = puVar21;
      *(undefined **)(puStack_b0 + uVar3 * 8 + 0x20) = puVar25;
      puVar7 = puStack_b0;
    } while (puVar24 != puVar23);
  }
  if ((param_6 & 1) == 0) {
    func_0x000102f482a8();
  }
  else {
    FUN_102f481dc();
  }
  puVar24 = PTR_PTR_1126b2890;
  func_0x000107c610f8();
  func_0x000107c5fadc(puVar8,puVar16);
  func_0x000107c6142c(puVar16);
  func_0x000107c48da0();
  func_0x000107c61170(puVar8);
  if ((param_6 & 1) == 0) {
    puStack_88 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    puVar8 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    puVar17 = auStack_110;
    func_0x000107c61534();
    *(undefined8 *)(puVar8 + 0x18) = 8;
    *(undefined8 *)(puVar8 + 0x10) = 4;
    ppuVar22 = &PTR____CFConstantStringClassReference_110f487d8;
    func_0x000107c5faec();
    puVar18 = puVar17;
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f487d8);
    *(undefined ***)(puVar8 + 0x20) = ppuVar22;
    *(undefined1 **)(puVar8 + 0x28) = puVar17;
    ppuVar22 = &PTR____CFConstantStringClassReference_110f48818;
    func_0x000107c5faec();
    puVar17 = puVar18;
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f48818);
    *(undefined ***)(puVar8 + 0x30) = ppuVar22;
    *(undefined1 **)(puVar8 + 0x38) = puVar18;
    ppuVar22 = &PTR____CFConstantStringClassReference_110f48798;
    func_0x000107c5faec();
    puVar18 = puVar17;
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f48798);
    *(undefined ***)(puVar8 + 0x40) = ppuVar22;
    *(undefined1 **)(puVar8 + 0x48) = puVar17;
    ppuVar22 = &PTR____CFConstantStringClassReference_110f489f8;
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f489f8);
    *(undefined ***)(puVar8 + 0x50) = ppuVar22;
    *(undefined1 **)(puVar8 + 0x58) = puVar18;
    puVar16 = puVar8;
    func_0x000100111634();
    func_0x000107c61588(puVar8);
    uVar19 = 4;
    func_0x000107c61408(puVar8 + 0x20,4,PTR___sSSN_11034da80);
    puStack_88 = puVar16;
    if ((param_7 & 1) != 0) {
      ppuVar22 = &PTR____CFConstantStringClassReference_110f488d8;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f488d8);
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110f488d8);
      func_0x000100403b00(&puStack_b0,ppuVar22,uVar19);
      func_0x000107c6142c(uStack_a8);
    }
  }
  puVar16 = puStack_88;
  puVar8 = &UNK_1105ead38;
  func_0x000107c613fc(&UNK_1105ead38,0x18,7);
  *(undefined **)(puVar8 + 0x10) = puVar24;
  puVar23 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c4807c();
  uVar19 = *(undefined8 *)(puVar5 + 0xa8);
  *(undefined **)(puVar5 + 0xa8) = puVar23;
  func_0x000107c61174();
  func_0x000107c61170(uVar19);
  if (puVar11 == (undefined *)0x0) {
    puVar21 = *(undefined **)(puVar26 + 0x10);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (puVar21 == (undefined *)0x0) goto LAB_102f354b4;
  }
  else {
    puStack_b0 = puVar26;
    FUN_102f38de8(0,puVar15,0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f35744);
      (*pcVar4)();
    }
    puVar25 = (undefined *)0x0;
    do {
      puVar26 = puStack_b0;
      if (((ulong)param_4 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(param_4 + (long)puVar25 * 8 + 0x20);
        func_0x000107c61174();
        puVar20 = puVar15;
      }
      else {
        puVar9 = puVar25;
        puVar20 = param_4;
        FUN_102f45034();
      }
      puVar21 = puVar9;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar10 = puVar21;
      func_0x000107c5faec();
      puVar15 = puVar20;
      func_0x000107c61170(puVar21);
      uVar3 = *(ulong *)(puVar26 + 0x10);
      puVar21 = (undefined *)(uVar3 + 1);
      puStack_b0 = puVar26;
      if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar3) {
        puVar15 = puVar21;
        FUN_102f38de8(1 < *(ulong *)(puVar26 + 0x18),puVar21,1);
      }
      puVar25 = puVar25 + 1;
      *(undefined **)(puStack_b0 + 0x10) = puVar21;
      *(undefined **)(puStack_b0 + uVar3 * 0x18 + 0x20) = puVar10;
      *(undefined **)(puStack_b0 + uVar3 * 0x18 + 0x28) = puVar20;
      *(undefined **)(puStack_b0 + uVar3 * 0x18 + 0x30) = puVar9;
      puVar26 = puStack_b0;
    } while (puVar11 != puVar25);
  }
  func_0x0001000285a8(0x112f299f8,&UNK_10db65c88);
  func_0x000107c60498();
  puVar11 = puVar21;
LAB_102f354b4:
  puStack_b0 = puVar11;
  FUN_102f3ac4c(puVar26,1,&puStack_b0);
  func_0x000107c6142c(puVar26);
  puVar15 = puStack_b0;
  uVar19 = *(undefined8 *)(puVar5 + 0x68);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  puVar11 = &UNK_1105ea450;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,puVar5);
  lVar12 = 0;
  func_0x000102f3889c();
  lVar13 = lVar12;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112f299b8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar2 = (undefined8 *)(lVar13 + _DAT_112f299c0);
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined **)(lVar13 + _DAT_112f299a8) = puVar15;
  *(undefined8 *)(lVar13 + _DAT_112f299b0) = uVar19;
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112f299c8);
  *puVar1 = 0x102f3c45c;
  puVar1[1] = puVar11;
  func_0x000100d2c2cc(param_8,param_9);
  func_0x000100d2c2cc(param_2,param_3);
  plVar14 = &lStack_a0;
  lStack_a0 = lVar13;
  lStack_98 = lVar12;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  uVar19 = *(undefined8 *)(puVar5 + 0xa0);
  *(long **)(puVar5 + 0xa0) = plVar14;
  func_0x000107c61174();
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(puVar5 + 0x60);
  func_0x000107c61174(puVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  puVar11 = puVar23;
  func_0x0001043965b4(puVar23,puVar16,puVar27,puVar7,FUN_102f3c454,puVar8,FUN_102f3598c,0,0,0,0,0,
                      plVar14,0);
  func_0x000107c6142c(puVar27);
  func_0x000107c6142c(puVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(plVar14);
  uVar19 = *(undefined8 *)(puVar5 + 0x58);
  func_0x000107c61174(uVar19);
  func_0x000107c42c1c();
  func_0x000107c6142c(puVar16);
  func_0x000107c61170(uVar19);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(plVar14);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar24);
  return;
}



/* Entry: 102f3576c; end: 102f357d7;  */

/* WARNING: Possible PIC construction at 0x000102f35790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f357ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f35794) */
/* WARNING: Removing unreachable block (ram,0x000102f357ac) */
/* WARNING: Removing unreachable block (ram,0x000102f357b0) */
/* WARNING: Removing unreachable block (ram,0x000102f357c4) */

void FUN_102f3576c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    func_0x000107c41864(*(long *)(unaff_x20 + 0xa8),param_2,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  }
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f357d8; end: 102f3598b;  */

/* WARNING: Removing unreachable block (ram,0x000102f35980) */

undefined * FUN_102f357d8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar5 = param_2;
  if (lVar6 == 0) {
    func_0x000107c5faec();
    lVar5 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c48298();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
  lVar6 = param_1;
  func_0x000107c5db08(param_1);
  func_0x000107c61180();
  lVar2 = lVar6;
  func_0x000107c5faec();
  lVar7 = lVar5;
  func_0x000107c61170(lVar6);
  func_0x000107c42120();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(lVar2,lVar5);
  func_0x000107c6142c(lVar5);
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fadc(lVar6,lVar7);
    func_0x000107c6142c(lVar7);
  }
  puVar3 = PTR_PTR_1126b3560;
  func_0x000107c610f8(PTR_PTR_1126b3560);
  func_0x000107c46d94();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
  puVar4 = PTR_PTR_1126b3568;
  func_0x000107c610f8(PTR_PTR_1126b3568);
  func_0x000107c48294();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 102f3598c; end: 102f35a37;  */

undefined * FUN_102f3598c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = param_1;
  func_0x000102f48374();
  if (param_1 >> 0x3e != 0) {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  puVar3 = PTR_PTR_1126b28a0;
  func_0x000107c610f8(PTR_PTR_1126b28a0);
  func_0x000107c5fadc(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48d6c(puVar3);
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 102f35a38; end: 102f35a8b;  */

void FUN_102f35a38(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102f3576c();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102f35a8c; end: 102f35e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f35a8c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  byte param_13)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = param_1;
    FUN_102f3974c();
    if (lVar2 == 0) {
      if (param_2 != (code *)0x0) {
        (*param_2)();
      }
      func_0x000107c61574(param_1);
    }
    else {
      puVar3 = &UNK_1105eaa90;
      func_0x000107c613fc(&UNK_1105eaa90,0x11,7);
      puVar3[0x10] = 0;
      puVar4 = &UNK_1105eaab8;
      func_0x000107c613fc(&UNK_1105eaab8,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      puVar5 = &UNK_1105eaae0;
      func_0x000107c613fc(&UNK_1105eaae0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_6;
      *(undefined8 *)(puVar5 + 0x18) = param_7;
      puVar6 = &UNK_1105eab08;
      func_0x000107c613fc(&UNK_1105eab08,0x30,7);
      *(undefined **)(puVar6 + 0x10) = puVar3;
      *(long *)(puVar6 + 0x18) = lVar2;
      *(code **)(puVar6 + 0x20) = param_2;
      *(undefined8 *)(puVar6 + 0x28) = param_3;
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      func_0x000100d2c2cc(param_4,param_5);
      func_0x000100d2c2cc(param_6,param_7);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(lVar2);
      func_0x000100d2c2cc(param_2,param_3);
      func_0x000107c40c00();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5dbd4();
      func_0x000107c61180();
      puVar8 = PTR_PTR_1126b0c98;
      func_0x000107c610f8(PTR_PTR_1126b0c98);
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar6);
      func_0x000107c615f0(uVar14);
      func_0x000107c47f1c(puVar8);
      lVar9 = *(long *)(param_1 + 0x20);
      func_0x000107c439dc();
      func_0x000107c61180();
      lVar10 = lVar9;
      (**(code **)(lVar9 + 0x10))();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar9);
      lVar9 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar10);
      lVar11 = 0;
      func_0x000102f45650();
      lVar10 = lVar11;
      func_0x000107c610f8();
      *(undefined8 *)(lVar10 + _DAT_112f29bb0) = uVar7;
      *(undefined8 *)(lVar10 + _DAT_112f29bb8) = param_8;
      *(undefined8 *)(lVar10 + _DAT_112f29bc0) = 0;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f29bc8);
      *puVar1 = param_9;
      puVar1[1] = param_10;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f29bd0);
      *puVar1 = param_11;
      puVar1[1] = param_12;
      *(byte *)(lVar10 + _DAT_112f29bd8) = param_13 & 1;
      *(undefined1 *)(lVar10 + _DAT_112f29be0) = 0;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f29be8);
      *puVar1 = FUN_102f3c314;
      puVar1[1] = puVar4;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f29bf0);
      *puVar1 = 0x102f3c31c;
      puVar1[1] = puVar5;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f29bf8);
      *puVar1 = 0x102f3c324;
      puVar1[1] = puVar6;
      *(undefined8 *)(lVar10 + _DAT_112f29c00) = uVar14;
      *(long *)(lVar10 + _DAT_112f29c08) = lVar9;
      puVar8 = PTR_s_init_1125d9248;
      lStack_90 = lVar10;
      lStack_88 = lVar11;
      func_0x000107c61434(param_8);
      func_0x000107c61434(param_10);
      func_0x000107c61434(param_12);
      plVar12 = &lStack_90;
      func_0x000107c61154(plVar12,puVar8);
      plVar13 = plVar12;
      FUN_102f44944();
      uVar7 = 0;
      func_0x000102f47adc(0);
      func_0x000107c610f8();
      func_0x000107c49460();
      func_0x000107c4f018(lVar2);
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(plVar12);
      func_0x000107c61170(plVar13);
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 102f35e7c; end: 102f35f5b;  */

void FUN_102f35e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1105eac20;
  func_0x000107c613fc(&UNK_1105eac20,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  uStack_50 = 0x102f3c3d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105eac38;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100d2c2cc(param_3,param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65af0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f35f5c; end: 102f36017;  */

void FUN_102f35f5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1105eabd0;
  func_0x000107c613fc(&UNK_1105eabd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_102f3c3a4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105eabe8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000100d2c2cc(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65af0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f36018; end: 102f361fb;  */

void FUN_102f36018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1105eab30;
  func_0x000107c613fc(&UNK_1105eab30,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  pcStack_50 = FUN_102f3c36c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105eab48;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000100d2c2cc(param_3,param_4);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65af0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f361fc; end: 102f36cb7;  */

void FUN_102f361fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_102f3974c();
    if (lVar1 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      func_0x000103b12474();
      func_0x000107c610f8();
      func_0x000107c61174(in_stack_00000020);
      func_0x000107c61174(puVar2);
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_6);
      func_0x000107c61434(param_9);
      func_0x000107c61434(in_stack_00000030);
      func_0x000107c61174(in_stack_00000018);
      uVar3 = 0;
      func_0x000103b11a64(0,0,1,puVar2,0,0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9,param_10 & 1);
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 == 0) {
        func_0x000107c61574(param_1);
      }
      else {
        func_0x000107c61174();
        uVar5 = uVar3;
        func_0x000107c61174(uVar3);
        func_0x000102f36438(in_stack_00000040);
        FUN_102f3e41c(uVar3,in_stack_00000040,in_stack_00000048);
        func_0x000107c61170(lVar4);
        func_0x000107c6142c(in_stack_00000040);
        func_0x000107c61574(param_1);
        func_0x000107c61170(uVar5);
        uVar3 = uVar5;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 102f36cb8; end: 102f36d93;  */

void FUN_102f36cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1105ea6f8;
  func_0x000107c613fc(&UNK_1105ea6f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uStack_50 = 0x102f3c034;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ea710;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65af0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f36d94; end: 102f36efb;  */

void FUN_102f36d94(ulong param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == 0) goto LAB_102f36edc;
  uVar1 = param_1;
  uVar4 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_102f36e3c:
    func_0x000107c5d8c4();
    func_0x000107c61180();
    if (param_1 == 0) goto LAB_102f36edc;
    uVar1 = param_1;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uVar5 = 0;
        uVar4 = 0xe000000000000000;
      }
      else {
        uVar5 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
        uVar5 = uVar5 & 0xffffffffffff;
      }
      func_0x000107c6142c(uVar4);
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar5 = uVar4 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        func_0x000107c52d10(param_2);
      }
      func_0x000107c61170(param_1);
      param_1 = uVar1;
    }
  }
  else {
    uVar3 = uVar1;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (uVar3 == 0) {
      uVar5 = 0;
      uVar3 = 0xe000000000000000;
      uVar2 = uVar4;
    }
    else {
      uVar5 = uVar3;
      func_0x000107c5faec();
      uVar2 = uVar4;
      func_0x000107c61170(uVar3);
      uVar5 = uVar5 & 0xffffffffffff;
      uVar3 = uVar4;
    }
    uVar4 = uVar2;
    func_0x000107c6142c(uVar3);
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar5 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      func_0x000107c61170(uVar1);
      goto LAB_102f36e3c;
    }
    func_0x000107c52d10(param_2);
    param_1 = uVar1;
  }
  func_0x000107c61170(param_1);
LAB_102f36edc:
  (*param_3)(param_2);
  return;
}



/* Entry: 102f36efc; end: 102f36f73;  */

/* WARNING: Possible PIC construction at 0x000102f36f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f36f5c) */

void FUN_102f36efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102f36f74; end: 102f37123;  */

/* WARNING: Possible PIC construction at 0x000102f37028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3702c) */

void FUN_102f36f74(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102f37124; end: 102f3712f;  */

void FUN_102f37124(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f37130; end: 102f371f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f37130(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = _DAT_112f299a8;
  lVar1 = *param_1;
  uVar3 = param_1[1];
  func_0x000107c61428(param_2 + _DAT_112f299a8,auStack_58,0x20,0);
  lVar4 = *(long *)(param_2 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(lVar4);
      return 0;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_58);
  return 1;
}



/* Entry: 102f371f4; end: 102f3832f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f371f4(undefined *param_1,undefined **param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  long unaff_x20;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined1 auStack_180 [8];
  undefined **ppuStack_178;
  ulong uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_f8;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *apuStack_98 [3];
  long lStack_80;
  undefined *apuStack_70 [2];
  
  lVar6 = 0;
  ppuVar15 = param_2;
  func_0x000107c5ed50();
  lStack_160 = *(long *)(lVar6 + -8);
  lStack_158 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_160 + 0x40));
  apuStack_70[0] = PTR___swiftEmptySetSingleton_11034f1d8;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar19 = param_1;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_168 = param_2;
  if (puVar19 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102f37e50);
          (*pcVar18)();
        }
        puVar8 = *(undefined **)(param_1 + (long)puVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar21;
        func_0x0001011f491c(puVar21,param_1);
      }
      if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102f37e4c);
        (*pcVar18)();
      }
      puVar22 = puVar21 + 1;
      ppuVar15 = apuStack_70;
      puStack_e0 = puVar8;
      FUN_102f383d0(apuStack_98,&puStack_e0,ppuVar15,unaff_x20);
      func_0x000107c61170(puVar8);
      puVar8 = apuStack_98[0];
      if (apuStack_98[0] != (undefined *)0x0) {
        puVar7 = puVar13;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar13 < 0)) ||
           (puVar7 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar7 = puVar13;
            }
            func_0x000107c60480(puVar7);
          }
          ppuVar15 = (undefined **)(puVar7 + 1);
          puVar7 = (undefined *)0x0;
          FUN_102f388bc(0,ppuVar15,1,puVar13,&UNK_1012023c8,0x112d67d90,&PTR_PTR_1126b1440);
        }
        uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar17 = *(ulong *)(uVar16 + 0x10);
        ppuVar20 = (undefined **)(uVar17 + 1);
        puVar13 = puVar7;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          ppuVar15 = ppuVar20;
          FUN_102f388bc(puVar13,ppuVar20,1,puVar7,&UNK_1012023c8,0x112d67d90,&PTR_PTR_1126b1440);
          uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
        }
        *(undefined ***)(uVar16 + 0x10) = ppuVar20;
        *(undefined **)(uVar16 + uVar17 * 8 + 0x20) = puVar8;
      }
      puVar21 = puVar21 + 1;
    } while (puVar22 != puVar19);
  }
  ppuVar20 = ppuStack_168;
  if ((ulong)ppuStack_168 >> 0x3e == 0) {
    ppuVar23 = *(undefined ***)(((ulong)ppuStack_168 & 0xffffffffffffff8) + 0x10);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar9 = ppuStack_128;
  }
  else {
    ppuVar23 = (undefined **)((ulong)ppuStack_168 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuStack_168) {
      ppuVar23 = ppuStack_168;
    }
    func_0x000107c60480();
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar9 = ppuStack_128;
  }
  ppuStack_128 = ppuVar23;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar19;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar23 = (undefined **)0x0;
    uStack_120 = (ulong)ppuVar20 & 0xc000000000000001;
    uStack_170 = (ulong)ppuVar20 & 0xffffffffffffff8;
    ppuStack_178 = ppuVar20 + 4;
    lStack_150 = _DAT_112f299a8;
    do {
      puVar21 = PTR___sypN_11034f1a8;
      if (uStack_120 == 0) {
        if (*(undefined ***)(uStack_170 + 0x10) <= ppuVar23) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102f37e58);
          (*pcVar18)();
        }
        ppuVar9 = (undefined **)ppuStack_178[(long)ppuVar23];
        func_0x000107c61174();
      }
      else {
        ppuVar9 = ppuVar23;
        ppuVar15 = ppuVar20;
        func_0x0001011f491c(ppuVar23,ppuVar20);
      }
      bVar5 = SCARRY8((long)ppuVar23,1);
      ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102f37e54);
        (*pcVar18)();
      }
      ppuVar10 = ppuVar9;
      func_0x000107c4fa44();
      func_0x000107c61180();
      ppuVar11 = ppuVar10;
      func_0x000107c44fdc();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar10);
      ppuStack_e8 = ppuVar11;
      func_0x000107c4fa4c();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar11);
      if (ppuStack_e8 == (undefined **)0x0) {
        ppuStack_e8 = (undefined **)0x0;
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(ppuVar15);
      }
      ppuVar15 = ppuVar9;
      func_0x000107c4e3a4();
      func_0x000107c61180();
      puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (ppuVar15 != (undefined **)0x0) {
        ppuStack_110 = ppuVar9;
        func_0x000107c5ff64(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ed4c(apuStack_98);
        if (lStack_80 == 0) {
          puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar12 = 0;
          FUN_102f3bdb4(0,0x112d715d8,&PTR_PTR_1126b3560);
          puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            while( true ) {
              ppuVar10 = &puStack_e0;
              ppuVar9 = apuStack_98;
              func_0x000107c6147c(ppuVar10,ppuVar9,puVar21 + 8,uVar12,6);
              puVar8 = puStack_e0;
              if (((ulong)ppuVar10 & 1) != 0) break;
              func_0x000107c5ed4c(apuStack_98);
              if (lStack_80 == 0) goto LAB_102f37c6c;
            }
            puVar21 = puStack_e0;
            ppuStack_138 = ppuVar15;
            puStack_108 = puVar13;
            func_0x000107c44fdc();
            func_0x000107c61180();
            puVar13 = puVar21;
            func_0x000107c4fa4c();
            func_0x000107c61180();
            func_0x000107c61170(puVar21);
            puVar21 = puVar13;
            puVar22 = puVar13;
            if (puVar13 == (undefined *)0x0) {
              puVar22 = (undefined *)0x0;
              func_0x000107c5faec(0);
              ppuVar15 = ppuVar9;
              func_0x000107c5fadc();
              func_0x000107c6142c(ppuVar9);
              puVar21 = (undefined *)0x0;
              func_0x000107c5faec();
              ppuVar9 = ppuVar15;
              func_0x000107c5fadc();
              func_0x000107c6142c(ppuVar15);
            }
            puVar7 = puVar13;
            puStack_140 = puVar21;
            puStack_130 = puVar19;
            func_0x000107c5faec();
            puVar19 = apuStack_70[0];
            puStack_118 = puVar8;
            if (*(long *)(apuStack_70[0] + 0x10) == 0) {
              func_0x000107c61174(puVar13);
            }
            else {
              func_0x000107c6068c(&puStack_e0,*(undefined8 *)(apuStack_70[0] + 0x28));
              func_0x000107c61174(puVar13);
              ppuVar15 = &puStack_e0;
              func_0x000107c5fb58(ppuVar15,puVar7,ppuVar9);
              func_0x000107c606a8();
              uVar17 = -1L << ((ulong)(byte)puVar19[0x20] & 0x3f);
              uVar16 = (ulong)ppuVar15 & (uVar17 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar19 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
                do {
                  plVar1 = (long *)(*(long *)(puVar19 + 0x30) + uVar16 * 0x10);
                  puVar13 = (undefined *)*plVar1;
                  ppuVar15 = (undefined **)plVar1[1];
                  puVar21 = puStack_118;
                  if ((puVar13 == puVar7 && ppuVar15 == ppuVar9) ||
                     (func_0x000107c605b8(puVar13,ppuVar15,puVar7,ppuVar9,0), puVar21 = puStack_118,
                     ((ulong)puVar13 & 1) != 0)) goto LAB_102f3791c;
                  uVar16 = uVar16 + 1 & ~uVar17;
                } while ((*(ulong *)(puVar19 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) !=
                         0);
              }
            }
            func_0x000107c61434(ppuVar9);
            func_0x000100403b00(&puStack_e0,puVar7,ppuVar9);
            func_0x000107c6142c(uStack_d8);
            lVar6 = lStack_150;
            ppuVar15 = &puStack_e0;
            func_0x000107c61428(unaff_x20 + lStack_150,ppuVar15,0x20,0);
            puVar21 = puStack_118;
            lVar6 = *(long *)(unaff_x20 + lVar6);
            if (*(long *)(lVar6 + 0x10) == 0) {
LAB_102f377dc:
              func_0x000107c614a8(&puStack_e0);
              puVar19 = PTR_PTR_1126b1440;
              func_0x000107c610f8();
              func_0x000107c453e4();
              func_0x000107c5a344();
              func_0x000107c61170(puVar22);
              puVar13 = puVar21;
              func_0x000107c5db08();
              func_0x000107c61180();
              if (puVar13 == (undefined *)0x0) {
                puVar8 = (undefined *)0x0;
                ppuVar15 = (undefined **)0xe000000000000000;
              }
              else {
                puVar8 = puVar13;
                func_0x000107c5faec();
                func_0x000107c61170(puVar13);
              }
              func_0x000107c5fadc(puVar8,ppuVar15);
              func_0x000107c6142c(ppuVar15);
              func_0x000107c5a42c(puVar19);
              func_0x000107c61170(puVar8);
              puVar13 = puVar21;
              func_0x000107c4d3f8(puVar21);
              func_0x000107c61180();
              func_0x000107c54230(puVar19);
              func_0x000107c61170(puVar13);
              func_0x000107c61174();
              puVar13 = puStack_108;
              puVar8 = puStack_108;
              func_0x000107c61550();
              puVar22 = puVar13;
              if ((int)puVar8 == 0) goto LAB_102f378b8;
LAB_102f378b0:
              puVar22 = puVar13;
              if (((long)puVar13 < 0) || (((ulong)puVar13 >> 0x3e & 1) != 0)) goto LAB_102f378b8;
            }
            else {
              func_0x000107c61434(lVar6);
              puVar19 = puVar7;
              ppuVar15 = ppuVar9;
              func_0x000100029284();
              if (((ulong)ppuVar15 & 1) == 0) {
                func_0x000107c6142c(lVar6);
                goto LAB_102f377dc;
              }
              puVar19 = *(undefined **)(*(long *)(lVar6 + 0x38) + (long)puVar19 * 8);
              func_0x000107c61174();
              func_0x000107c614a8(&puStack_e0);
              func_0x000107c61170(puVar22);
              func_0x000107c6142c(lVar6);
              func_0x000107c61174();
              puVar13 = puStack_108;
              puVar8 = puStack_108;
              func_0x000107c61550();
              puVar22 = puVar13;
              if (((ulong)puVar8 & 1) != 0) goto LAB_102f378b0;
LAB_102f378b8:
              if ((ulong)puVar22 >> 0x3e == 0) {
                puVar8 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar22) {
                  puVar8 = puVar22;
                }
                func_0x000107c60480(puVar8);
              }
              puVar13 = (undefined *)0x0;
              FUN_102f388bc(0,puVar8 + 1,1,puVar22,&UNK_1012023c8,0x112d67d90,&PTR_PTR_1126b1440);
            }
            uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
            uVar17 = *(ulong *)(uVar16 + 0x10);
            puStack_108 = puVar13;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_102f388bc(puVar8,uVar17 + 1,1,puVar13,&UNK_1012023c8,0x112d67d90,
                            &PTR_PTR_1126b1440);
              uVar16 = (ulong)puVar8 & 0xffffffffffffff8;
              puStack_108 = puVar8;
            }
            *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
            *(undefined **)(uVar16 + uVar17 * 8 + 0x20) = puVar19;
            puVar22 = puVar19;
LAB_102f3791c:
            func_0x000107c61170(puVar22);
            lVar6 = lStack_150;
            ppuVar15 = &puStack_e0;
            func_0x000107c61428(unaff_x20 + lStack_150,ppuVar15,0x20,0);
            lVar6 = *(long *)(unaff_x20 + lVar6);
            if (*(long *)(lVar6 + 0x10) == 0) {
LAB_102f379c0:
              func_0x000107c614a8(&puStack_e0);
              puVar19 = (undefined *)0x0;
              puVar8 = (undefined *)0x0;
              ppuVar20 = (undefined **)0xe000000000000000;
            }
            else {
              func_0x000107c61434(lVar6);
              ppuVar20 = ppuVar9;
              func_0x000100029284();
              if (((ulong)ppuVar20 & 1) == 0) {
                func_0x000107c6142c(lVar6);
                ppuVar15 = ppuVar20;
                goto LAB_102f379c0;
              }
              puVar8 = *(undefined **)(*(long *)(lVar6 + 0x38) + (long)puVar7 * 8);
              puVar13 = puVar8;
              func_0x000107c61174(puVar8);
              func_0x000107c614a8(&puStack_e0);
              func_0x000107c6142c(lVar6);
              func_0x000107c5db08(puVar13);
              func_0x000107c61180();
              puVar19 = puVar13;
              func_0x000107c5faec();
              ppuVar15 = ppuVar20;
              func_0x000107c61170(puVar13);
            }
            func_0x000107c4d3f8();
            func_0x000107c61180();
            if (puVar21 == (undefined *)0x0) {
              if (puVar8 != (undefined *)0x0) {
                puVar21 = puVar8;
                func_0x000107c42120();
                func_0x000107c61180();
                if (puVar21 != (undefined *)0x0) goto LAB_102f379e8;
              }
              puVar22 = (undefined *)0x0;
              ppuVar15 = (undefined **)0x0;
            }
            else {
LAB_102f379e8:
              puVar22 = puVar21;
              func_0x000107c5faec();
              func_0x000107c61170(puVar21);
            }
            ppuStack_148 = ppuVar23;
            func_0x000107c61174(puVar8);
            puVar21 = puVar8;
            func_0x000107c3e9e8();
            func_0x000107c61180();
            func_0x000107c61170(puVar8);
            func_0x000107c6142c(ppuVar9);
            func_0x000107c5fadc(puVar19,ppuVar20);
            func_0x000107c6142c(ppuVar20);
            if (ppuVar15 == (undefined **)0x0) {
              puVar22 = (undefined *)0x0;
            }
            else {
              func_0x000107c5fadc(puVar22,ppuVar15);
              func_0x000107c6142c(ppuVar15);
            }
            puVar13 = puStack_108;
            puVar4 = puStack_118;
            puVar14 = PTR_PTR_1126cf678;
            func_0x000107c610f8();
            puVar7 = puStack_140;
            func_0x000107c49280();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar19);
            func_0x000107c61170(puVar22);
            func_0x000107c61174();
            puVar21 = puStack_f8;
            func_0x000107c61550();
            puVar19 = puStack_130;
            if ((((int)puVar21 == 0) || ((long)puStack_f8 < 0)) ||
               (((ulong)puStack_f8 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_f8 >> 0x3e == 0) {
                puVar21 = *(undefined **)(((ulong)puStack_f8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar21 = (undefined *)((ulong)puStack_f8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_f8) {
                  puVar21 = puStack_f8;
                }
                func_0x000107c60480(puVar21);
              }
              puVar22 = (undefined *)0x0;
              FUN_102f38a04(0,puVar21 + 1,1,puStack_f8);
              puStack_f8 = puVar22;
            }
            ppuVar23 = ppuStack_148;
            uVar16 = (ulong)puStack_f8 & 0xffffffffffffff8;
            uVar17 = *(ulong *)(uVar16 + 0x10);
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
              puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_102f38a04(puVar21,uVar17 + 1,1,puStack_f8);
              uVar16 = (ulong)puVar21 & 0xffffffffffffff8;
              puStack_f8 = puVar21;
            }
            *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
            *(undefined **)(uVar16 + uVar17 * 8 + 0x20) = puVar14;
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar4);
            func_0x000107c5ed4c(apuStack_98);
            ppuVar15 = ppuStack_138;
            puVar21 = PTR___sypN_11034f1a8;
            ppuVar20 = ppuStack_168;
          } while (lStack_80 != 0);
        }
LAB_102f37c6c:
        (**(code **)(lStack_160 + 8))
                  (auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_158);
        func_0x000107c61170(ppuVar15);
        ppuVar9 = ppuStack_110;
      }
      puVar21 = PTR_PTR_1126cf670;
      func_0x000107c610f8();
      ppuVar15 = (undefined **)0x0;
      FUN_102f3bdb4(0,0x112f29a00,&PTR_PTR_1126cf678);
      puVar8 = puStack_f8;
      func_0x000107c5fc48(puStack_f8);
      func_0x000107c46c00(0);
      func_0x000107c61170(ppuStack_e8);
      func_0x000107c61170(puVar8);
      ppuVar10 = ppuVar9;
      func_0x000107c4fa44(ppuVar9);
      func_0x000107c61180();
      ppuVar11 = ppuVar10;
      func_0x000107c4d3f8();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar10);
      func_0x000107c56954(puVar21);
      func_0x000107c61170(ppuVar11);
      func_0x000107c61174();
      puVar8 = puVar19;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar19 < 0)) ||
         (puVar8 = puVar19, ((ulong)puVar19 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar19 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar19) {
            puVar8 = puVar19;
          }
          func_0x000107c60480();
        }
        ppuVar15 = (undefined **)(puVar8 + 1);
        puVar8 = (undefined *)0x0;
        FUN_102f388bc(0,ppuVar15,1,puVar19,FUN_102f48154,0x112f29a08,&PTR_PTR_1126cf670);
      }
      uVar16 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar16 + 0x10);
      ppuVar10 = (undefined **)(uVar17 + 1);
      puVar19 = puVar8;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
        ppuVar15 = ppuVar10;
        FUN_102f388bc(puVar19,ppuVar10,1,puVar8,FUN_102f48154,0x112f29a08,&PTR_PTR_1126cf670);
        uVar16 = (ulong)puVar19 & 0xffffffffffffff8;
      }
      *(undefined ***)(uVar16 + 0x10) = ppuVar10;
      *(undefined **)(uVar16 + uVar17 * 8 + 0x20) = puVar21;
      func_0x000107c6142c(puStack_f8);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(ppuVar9);
      ppuVar9 = ppuStack_128;
    } while (ppuVar23 != ppuStack_128);
  }
  ppuStack_128 = ppuVar9;
  (**(code **)(unaff_x20 + _DAT_112f299c8))();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f299b8);
  pcVar18 = (code *)*puVar2;
  if (pcVar18 == (code *)0x0) goto LAB_102f37f24;
  uVar12 = puVar2[1];
  if ((ulong)puVar19 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102f37ef8;
LAB_102f37ed4:
    func_0x000107c61434(puVar19);
    puVar21 = puVar19;
  }
  else {
    puVar21 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar19) {
      puVar21 = puVar19;
    }
    func_0x000107c60480();
    if (puVar21 != (undefined *)0x0) goto LAB_102f37ed4;
LAB_102f37ef8:
    puVar21 = (undefined *)0x0;
  }
  func_0x000107c6157c(uVar12);
  (*pcVar18)(puVar13,puVar21);
  func_0x000107c6142c(puVar21);
  func_0x000100d2bf90(pcVar18,uVar12);
LAB_102f37f24:
  func_0x000107c6142c(puVar13);
  func_0x000107c6142c(puVar19);
  uVar12 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000100d2bf90(uVar12,uVar3);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f299c0);
  uVar12 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000100d2bf90(uVar12,uVar3);
  func_0x000107c6142c(apuStack_70[0]);
  return;
}



/* Entry: 102f38330; end: 102f383cf; -[_TtC18SCCalendarPageImplP33_4AAA4697D6492C1E1B6E57F46CD37C3430CalendarRecipientPickerHandler didConfirmWithSelectedItems:title:uiContainer:] */

/* WARNING: Possible PIC construction at 0x000102f383b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f383bc) */

void FUN_102f38330(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102f3bdb4(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar1);
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102f3b31c(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102f383d0; end: 102f38637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f383d0(undefined8 *param_1,long *param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  
  lVar4 = *param_2;
  lVar7 = lVar4;
  func_0x000107c4fa44();
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar1;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar3 = param_3;
  lVar1 = lVar7;
  if (lVar7 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    puVar3 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  func_0x000107c5faec();
  func_0x000107c61434(puVar3);
  func_0x000100403b00(auStack_68,lVar7,puVar3);
  func_0x000107c6142c(uStack_60);
  lVar6 = _DAT_112f299a8;
  puVar5 = auStack_68;
  func_0x000107c61428(param_4 + _DAT_112f299a8,puVar5,0x20,0);
  lVar6 = *(long *)(param_4 + lVar6);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    puVar5 = puVar3;
    func_0x000100029284();
    if (((ulong)puVar5 & 1) != 0) {
      puVar2 = *(undefined **)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(lVar6);
      goto LAB_102f38614;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_68);
  puVar2 = PTR_PTR_1126b1440;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c6142c(puVar3);
  func_0x000107c5a344(puVar2);
  func_0x000107c61170(lVar1);
  lVar7 = lVar4;
  func_0x000107c4fa44();
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c5db08();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar1 == 0) {
    lVar7 = 0;
    puVar5 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5fadc(lVar7,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c5a42c(puVar2);
  func_0x000107c61170(lVar7);
  func_0x000107c4fa44(lVar4);
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c4d3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c54230(puVar2);
  func_0x000107c61170(lVar7);
LAB_102f38614:
  *param_1 = puVar2;
  return;
}



/* Entry: 102f38638; end: 102f38687; -[_TtC18SCCalendarPageImplP33_4AAA4697D6492C1E1B6E57F46CD37C3430CalendarRecipientPickerHandler didDismissWithSelectedItems:title:] */

void FUN_102f38638(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_102f3bcbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f38688; end: 102f386e7; -[_TtC18SCCalendarPageImplP33_4AAA4697D6492C1E1B6E57F46CD37C3430CalendarRecipientPickerHandler init] */

void FUN_102f38688(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarRecipientPickerHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f386b4);
  (*pcVar1)();
}



/* Entry: 102f386e8; end: 102f3875b; -[_TtC18SCCalendarPageImplP33_4AAA4697D6492C1E1B6E57F46CD37C3430CalendarRecipientPickerHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f386e8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f299a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f299b0));
  func_0x000100d2bf90(*(undefined8 *)(param_1 + _DAT_112f299b8),
                      ((undefined8 *)(param_1 + _DAT_112f299b8))[1]);
  func_0x000100d2bf90(*(undefined8 *)(param_1 + _DAT_112f299c0),
                      ((undefined8 *)(param_1 + _DAT_112f299c0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f299c8 + 8));
  return;
}



/* Entry: 102f3875c; end: 102f3875f;  */

void FUN_102f3875c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102f38760; end: 102f387cf;  */

void FUN_102f38760(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 102f387d0; end: 102f387db;  */

void FUN_102f387d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e739fd0);
  return;
}



/* Entry: 102f387dc; end: 102f388bb;  */

void FUN_102f387dc(undefined8 param_1)

{
  if (lRam0000000112f29850 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73a020);
  return;
}



/* Entry: 102f388bc; end: 102f38a03;  */

ulong FUN_102f388bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f38a04);
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
  FUN_102f38b34(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f38a00);
      (*pcVar1)();
    }
    FUN_102f38bb4(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102f38a04; end: 102f38b33;  */

ulong FUN_102f38a04(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f38b34);
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
  FUN_102f38b34(uVar2,uVar4,0x102f48178);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f38b30);
      (*pcVar1)();
    }
    FUN_102f38cd0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102f38b34; end: 102f38bb3;  */

undefined * FUN_102f38b34(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 102f38bb4; end: 102f38ccf;  */

long FUN_102f38bb4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38ccc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38cd0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102f3bdb4(0,param_5,param_6);
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
      FUN_102f3bdb4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38cc8);
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



/* Entry: 102f38cd0; end: 102f38de7;  */

long FUN_102f38cd0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38de4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38de8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102f3bdb4(0,0x112f29a00,&PTR_PTR_1126cf678);
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
      FUN_102f3bdb4(0,0x112f29a00,&PTR_PTR_1126cf678);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f38de0);
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



/* Entry: 102f38de8; end: 102f38e03;  */

void FUN_102f38de8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000102f38f18();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102f38e04; end: 102f39123;  */

undefined *
FUN_102f38e04(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f38f18);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102f39124; end: 102f3918f;  */

void FUN_102f39124(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  FUN_102f388bc(0,uVar1,0,param_1,&UNK_1012023c8,0x112d67d90,&PTR_PTR_1126b1440);
  return;
}



/* Entry: 102f39190; end: 102f392ff;  */

void FUN_102f39190(void)

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
  
  func_0x0001000285a8(0x112f299f8,&UNK_10db65c88);
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
    if (uVar8 == 0) goto LAB_102f3926c;
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
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102f3926c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102f39300);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102f392d8;
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
LAB_102f392d8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102f39300; end: 102f3974b;  */

void FUN_102f39300(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
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
  uVar6 = 0x112f299f8;
  func_0x0001000285a8(0x112f299f8,&UNK_10db65c88);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102f39568:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102f39598);
          (*pcVar5)();
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
          goto LAB_102f39568;
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
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102f3959c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
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
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102f3974c; end: 102f39a1b;  */

ulong FUN_102f3974c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  
  puVar11 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar11;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar4 = 0;
  FUN_102f3bdb4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar4;
  func_0x000100deaee4();
  puVar11 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar7);
  func_0x000107c61170(puVar3);
  puVar3 = puVar11;
  FUN_102f33e34();
  func_0x000107c6142c(puVar11);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar11 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f399b4);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar3 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar12;
        func_0x0001012bfb38(puVar12,puVar3);
      }
      puVar1 = puVar12 + 1;
      if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f399b0);
        (*pcVar2)();
      }
      puVar6 = puVar5;
      func_0x000107c3d0e4();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c6142c(puVar3);
        puVar11 = puVar5;
        func_0x000107c5e408();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        uVar7 = 0;
        FUN_102f3bdb4(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar3 = puVar11;
        func_0x000107c5fc54(puVar11,uVar7);
        func_0x000107c61170(puVar11);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar11 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar11 != (undefined *)0x0) {
          uVar13 = 0;
          do {
            if (((ulong)puVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102f399bc);
                (*pcVar2)();
              }
              uVar8 = *(ulong *)(puVar3 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar13;
              func_0x000100de9de8(uVar13,puVar3);
            }
            puVar12 = (undefined *)(uVar13 + 1);
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102f399b8);
              (*pcVar2)();
            }
            uVar9 = uVar8;
            func_0x000107c49f64();
            if ((uVar9 & 1) != 0) {
              func_0x000107c6142c(puVar3);
              uVar13 = uVar8;
              func_0x000107c508f0();
              func_0x000107c61180();
              if (uVar13 == 0) {
                func_0x000107c61170(uVar8);
                return 0;
              }
              uVar9 = uVar13;
              func_0x000107c4f078();
              func_0x000107c61180();
              while (uVar9 != 0) {
                func_0x000107c61170(uVar13);
                uVar10 = uVar9;
                func_0x000107c4f078();
                func_0x000107c61180();
                uVar13 = uVar9;
                uVar9 = uVar10;
              }
              func_0x000107c61170(uVar8);
              return uVar13;
            }
            func_0x000107c61170(uVar8);
            uVar13 = uVar13 + 1;
          } while (puVar12 != puVar11);
        }
        break;
      }
      func_0x000107c61170(puVar5);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar11);
  }
  func_0x000107c6142c(puVar3);
  return 0;
}



/* Entry: 102f39a1c; end: 102f39b17;  */

void FUN_102f39a1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar2 = 0xe000000000000000;
      uVar3 = param_2;
    }
    else {
      func_0x000107c5faec();
      uVar3 = param_2;
      func_0x000107c61170(lVar1);
      uVar2 = param_2;
    }
    lVar1 = param_1;
    func_0x000107c51d04();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
      uVar3 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102f39b18; end: 102f3a947;  */

void FUN_102f39b18(undefined8 *param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  
  lVar6 = 0;
  puStack_100 = param_1;
  func_0x000107c5ef5c();
  lStack_168 = *(long *)(lVar6 + -8);
  lStack_150 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lVar6 = 0;
  puStack_160 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef64();
  lStack_148 = *(long *)(lVar6 + -8);
  lStack_140 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_148 + 0x40));
  lVar11 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_158 = lVar11;
  func_0x000107c5eea4();
  uStack_120 = *(ulong *)(lVar6 + -8);
  lStack_128 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_120 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puStack_118 = (undefined *)lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  puStack_110 = (undefined *)lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_00;
  lStack_138 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lVar6 = 0;
  lStack_130 = lVar11;
  func_0x000107c5ef14();
  lStack_108 = *(long *)(lVar6 + -8);
  lStack_d8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar11 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d48c78;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar18 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar18 - extraout_x12_02;
  lVar7 = 0;
  func_0x000107c5efa8();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar19 = lVar6 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  uVar20 = *(undefined8 *)(param_3 + 0x88);
  uVar21 = *(undefined8 *)(param_3 + 0x90);
  lStack_d0 = param_3;
  func_0x000107c61434(uVar21);
  uStack_f0 = uVar21;
  uStack_e8 = uVar20;
  func_0x000107c5ef90(lVar6,uVar20,uVar21);
  FUN_102f3c860(lVar6,lVar18,0x112d48c78,&UNK_10d90f8c0);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar6 = lVar18;
  (*pcVar14)(lVar18,1,lVar7);
  lStack_f8 = lVar13;
  if ((int)lVar6 == 1) {
    func_0x000107c5efa4(lVar19);
    lVar6 = lVar18;
    (*pcVar14)(lVar18,1,lVar7);
    if ((int)lVar6 != 1) {
      func_0x000102f3c8a8(lVar18,0x112d48c78,&UNK_10d90f8c0);
    }
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar19,lVar18,lVar7);
  }
  lVar6 = lStack_d0;
  uVar20 = *(undefined8 *)(lStack_d0 + 0x98);
  uVar21 = *(undefined8 *)(lStack_d0 + 0xa0);
  lVar13 = *(long *)(lStack_d0 + 0xa8);
  lStack_e0 = lVar7;
  if (*(char *)(lStack_d0 + 0xb0) == '\x01') {
    puVar8 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar17 = 0x4f505f53555f6e65;
    func_0x000107c5eed0(lVar11,0x4f505f53555f6e65,0xeb00000000584953);
    func_0x000107c5ef00();
    (**(code **)(lStack_108 + 8))(lVar11,lStack_d8);
    func_0x000107c5601c(puVar8);
    func_0x000107c61170(uVar17);
    uVar17 = 0x2d4d4d2d79797979;
    func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
    func_0x000107c53e28(puVar8);
    func_0x000107c61170(uVar17);
    func_0x000107c5ef9c();
    func_0x000107c59d94(puVar8);
    func_0x000107c61170(uVar17);
    func_0x000107c5fadc(uVar20,uVar21);
    puVar9 = puVar8;
    func_0x000107c41344();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    puVar10 = puStack_118;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar8);
      lVar7 = 0;
    }
    else {
      func_0x000107c5ee94(puStack_118,puVar9);
      func_0x000107c61170(puVar9);
      puVar9 = puStack_110;
      uVar4 = uStack_120;
      lVar6 = lStack_128;
      (**(code **)(uStack_120 + 0x20))(puStack_110,puVar10,lStack_128);
      func_0x000107c5ee8c();
      func_0x000107c61170(puVar8);
      (**(code **)(uVar4 + 8))(puVar9,lVar6);
      param_2 = param_2 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a420);
        (*pcVar14)();
      }
      if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a428);
        (*pcVar14)();
      }
      if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a430);
        (*pcVar14)();
      }
      lVar7 = (long)param_2;
    }
    lVar11 = lVar13 * 0x15180;
    if (SUB168(SEXT816(lVar13) * SEXT816(0x15180),8) != lVar11 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a41c);
      (*pcVar14)();
    }
    puStack_118 = (undefined *)0x0;
    puStack_110 = (undefined *)0x0;
    uStack_120 = CONCAT44(uStack_120._4_4_,1);
    lVar6 = lStack_d0;
    lStack_108 = lVar7;
  }
  else {
    if (*(char *)(lStack_d0 + 0xb0) == -1) {
      lVar13 = 0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar17 = 0x4f505f53555f6e65;
      func_0x000107c5eed0(lVar11,0x4f505f53555f6e65,0xeb00000000584953);
      func_0x000107c5ef00();
      (**(code **)(lStack_108 + 8))(lVar11,lStack_d8);
      func_0x000107c5601c(puVar10);
      func_0x000107c61170(uVar17);
      uVar17 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010ef33bf0);
      func_0x000107c53e28(puVar10);
      func_0x000107c61170(uVar17);
      func_0x000107c5ef9c();
      func_0x000107c59d94(puVar10);
      func_0x000107c61170(uVar17);
      func_0x000107c5fadc(uVar20,uVar21);
      puVar8 = puVar10;
      func_0x000107c41344();
      func_0x000107c61180();
      func_0x000107c61170(uVar20);
      lVar7 = lStack_138;
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c5ee94(lStack_138,puVar8);
        func_0x000107c61170(puVar8);
        lVar11 = lStack_128;
        (**(code **)(uStack_120 + 0x20))(lStack_130,lVar7,lStack_128);
        func_0x000107c5ee8c();
        lVar6 = lStack_158;
        param_2 = param_2 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a424);
          (*pcVar14)();
        }
        if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a42c);
          (*pcVar14)();
        }
        lStack_138 = lVar19;
        lStack_d8 = lVar13;
        if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x102f3a434);
          (*pcVar14)();
        }
        lStack_108 = (long)param_2;
        func_0x000107c5ef54(lStack_158);
        lVar7 = lStack_150;
        puVar3 = puStack_160;
        lVar19 = lStack_168;
        pcVar14 = *(code **)(lStack_168 + 0x68);
        (*pcVar14)(puStack_160,
                   *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80,
                   lStack_150);
        lVar13 = lStack_130;
        func_0x000107c5ef60(puVar3,lStack_130);
        pcVar16 = *(code **)(lVar19 + 8);
        (*pcVar16)(puVar3,lVar7);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ed0();
        puStack_110 = puVar8;
        (*pcVar14)(puVar3,*(undefined4 *)
                           PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_110350d98,lVar7);
        func_0x000107c5ef60(puVar3,lVar13);
        (*pcVar16)(puVar3,lVar7);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ed0();
        puStack_118 = puVar8;
        func_0x000107c61170(puVar10);
        (**(code **)(lStack_148 + 8))(lVar6,lStack_140);
        (**(code **)(uStack_120 + 8))(lVar13,lVar11);
        uStack_120 = uStack_120 & 0xffffffff00000000;
        lVar6 = lStack_d0;
        lVar19 = lStack_138;
        lVar11 = lStack_d8;
        goto LAB_102f3a320;
      }
      func_0x000107c61170(puVar10);
    }
    uStack_120 = uStack_120 & 0xffffffff00000000;
    puStack_118 = (undefined *)0x0;
    puStack_110 = (undefined *)0x0;
    lStack_108 = 0;
    lVar11 = lVar13;
  }
LAB_102f3a320:
  puVar5 = puStack_100;
  uStack_98 = *(undefined8 *)(lVar6 + 0x68);
  uStack_a0 = *(undefined8 *)(lVar6 + 0x60);
  uStack_88 = *(undefined8 *)(lVar6 + 0x78);
  uStack_90 = *(undefined8 *)(lVar6 + 0x70);
  cStack_80 = *(char *)(lVar6 + 0x80);
  uVar20 = uStack_a0;
  uVar21 = uStack_98;
  if ((cStack_80 != '\x01') && (cStack_80 == -1)) {
    uVar20 = 0;
    uVar21 = 0;
  }
  lStack_d8 = lVar11;
  if (*(long *)(lVar6 + 0xc0) == 0) {
    uVar17 = 0;
    uVar15 = 0xe000000000000000;
  }
  else {
    uVar17 = *(undefined8 *)(lVar6 + 200);
    uVar15 = *(undefined8 *)(lVar6 + 0xd0);
    func_0x000107c61434(uVar15);
  }
  uVar1 = *(undefined8 *)(lVar6 + 0x40);
  uVar2 = *(undefined8 *)(lVar6 + 0x48);
  func_0x000102f3bfc0(&uStack_a0,auStack_c8);
  pcVar14 = *(code **)(lStack_f8 + 8);
  func_0x000107c61434(uVar2);
  (*pcVar14)(lVar19,lStack_e0);
  uVar12 = *(undefined8 *)(lVar6 + 0x38);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = lStack_108;
  puVar5[3] = puStack_110;
  puVar5[4] = puStack_118;
  puVar5[5] = uVar20;
  puVar5[6] = uVar21;
  *(undefined1 *)(puVar5 + 7) = 0;
  puVar5[8] = uVar17;
  puVar5[9] = uVar15;
  puVar5[10] = uVar12;
  puVar5[0xb] = uStack_e8;
  puVar5[0xc] = uStack_f0;
  *(char *)(puVar5 + 0xd) = (char)uStack_120;
  puVar5[0xe] = lStack_d8;
  return;
}



/* Entry: 102f3a948; end: 102f3aa47;  */

undefined * FUN_102f3a948(long param_1)

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
    func_0x0001000285a8(0x112f299f8,&UNK_10db65c88);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3aa44);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3aa48);
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



/* Entry: 102f3aa48; end: 102f3ab73;  */

void FUN_102f3aa48(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab50);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab54);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab6c);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab70);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab74);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 102f3ab74; end: 102f3ac4b;  */

/* WARNING: Removing unreachable block (ram,0x000102f3ab70) */

void FUN_102f3ab74(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ac28);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ac40);
    (*pcVar6)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ac44);
    (*pcVar6)();
  }
  lVar5 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffff8;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ac4c);
      (*pcVar6)();
    }
    func_0x000102f3905c(uVar9 + lVar5,1);
    lVar5 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab50);
      (*pcVar6)();
    }
    uVar9 = *unaff_x20;
    uVar10 = uVar9 & 0xffffffffffffff8;
    puVar1 = (undefined8 *)(uVar10 + 0x20 + param_1 * 8);
    uVar7 = 0;
    FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
    func_0x000107c61408(puVar1,lVar5,uVar7);
    lVar4 = 1 - lVar5;
    if (SBORROW8(1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab54);
      (*pcVar6)();
    }
    if (lVar4 != 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
        lVar5 = uVar8 - param_2;
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        lVar5 = uVar8 - param_2;
      }
      if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab6c);
        (*pcVar6)();
      }
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)(uVar10 + 0x20 + param_2 * 8);
      if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
        func_0x000107c610b8(puVar2,puVar3,lVar5 << 3);
      }
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ab70);
        (*pcVar6)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + lVar4;
    }
    *puVar1 = param_3;
    func_0x000107c61174(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102f3ac48);
  (*pcVar6)();
}



/* Entry: 102f3ac4c; end: 102f3aeff;  */

void FUN_102f3ac4c(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
LAB_102f3aef8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3aefc);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    FUN_102f39300(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_102f3ad00:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3ad10);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_102f39190();
    lVar13 = *param_3;
    goto joined_r0x000102f3ad74;
  }
  lVar13 = *param_3;
joined_r0x000102f3ad74:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_102f3aefc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f3af00);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c61174();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
    func_0x000107c61170(uVar12);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar9;
      if (SCARRY8(lVar7,uVar9)) goto LAB_102f3aef8;
      if (*(long *)(lVar11 + 0x18) < lVar13) {
        FUN_102f39300(lVar13,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) goto LAB_102f3ad00;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_102f3aefc;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c61174();
        func_0x000107c61170(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
        func_0x000107c61170(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 102f3af00; end: 102f3b0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3af00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112f299a8;
  lStack_88 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x38);
  lVar10 = 0;
LAB_102f3af6c:
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3b0d0);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar15) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lStack_88,param_3);
          return;
        }
        uVar12 = ((ulong *)(param_3 + 0x38))[lVar15];
        lVar10 = lVar10 + 1;
      } while (uVar12 == 0);
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar10;
    }
    uVar9 = LZCOUNT(uVar8);
    plVar1 = (long *)(*(long *)(param_3 + 0x30) + (uVar9 | lVar15 << 6) * 0x10);
    lVar5 = *plVar1;
    uVar8 = plVar1[1];
    func_0x000107c61428(param_4 + lVar2,auStack_78,0x20,0);
    lVar13 = *(long *)(param_4 + lVar2);
    lVar14 = *(long *)(lVar13 + 0x10);
    func_0x000107c61434(uVar8);
    lVar10 = lVar15;
    if (lVar14 != 0) {
      func_0x000107c61434(lVar13);
      uVar7 = uVar8;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + lVar5 * 8);
        func_0x000107c61174(uVar6);
        func_0x000107c614a8(auStack_78);
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(lVar13);
        goto LAB_102f3af6c;
      }
      func_0x000107c6142c(lVar13);
    }
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(uVar8);
    uVar8 = (uVar9 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
    *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar9 & 0x3f);
    bVar4 = SCARRY8(lStack_88,1);
    lStack_88 = lStack_88 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3b08c);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 102f3b0d0; end: 102f3b31b;  */

/* WARNING: Removing unreachable block (ram,0x000102f3bcb8) */
/* WARNING: Removing unreachable block (ram,0x000102f3bcb4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102f3b0d0(undefined **param_1,undefined **param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  long extraout_x8;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **unaff_x21;
  undefined **ppuVar23;
  undefined ***pppuVar24;
  ulong uVar25;
  undefined **ppuVar26;
  undefined **ppuStack_190;
  long lStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_100;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **appuStack_80 [4];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar23 = (undefined **)((1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6);
  uVar25 = (long)ppuVar23 * 8;
  ppuStack_60 = param_2;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar5 = uVar25, func_0x000107c61594(uVar25,8), (uVar5 & 1) == 0)) {
      func_0x000107c6158c(uVar25,0xffffffffffffffff);
      func_0x0001010af89c(appuStack_80);
      ppuVar21 = appuStack_80[0];
      if (unaff_x21 != (undefined **)0x0) {
        ppuVar21 = ppuStack_88;
      }
      ppuVar23 = (undefined **)0xffffffffffffffff;
      func_0x000107c61590(uVar25,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000102f3b2c8;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar21 = (undefined **)((long)&puStack_90 - (uVar25 + 0xf & 0x1ffffffffffffff0));
  func_0x000107c60ee4(ppuVar21,uVar25);
  ppuVar22 = param_2;
  func_0x000107c61174();
  FUN_102f3af00(ppuVar21,ppuVar23,param_1,ppuVar22);
  if (unaff_x21 != (undefined **)0x0) {
    ppuVar21 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c61170(ppuVar22);
joined_r0x000102f3b2c8:
  if (unaff_x21 == (undefined **)0x0) {
    func_0x000107c61170(param_2);
    param_2 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    ppuVar23 = (undefined **)0x12;
    ppuStack_88 = ppuVar21;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      ppuVar23 = (undefined **)0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&ppuStack_88,ppuVar23,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar21;
  }
  func_0x000107c60e78();
  lVar6 = 0;
  func_0x000107c5ed50();
  lStack_188 = *(long *)(lVar6 + -8);
  lStack_180 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_188 + 0x40));
  lStack_150 = (long)&ppuStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppuVar21 = &PTR____CFConstantStringClassReference_110f52c78;
  func_0x000107c5faec();
  ppuStack_168 = ppuVar23;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
  ppuVar22 = &PTR____CFConstantStringClassReference_110f52c98;
  func_0x000107c5faec();
  ppuStack_170 = ppuVar23;
  ppuStack_160 = ppuVar22;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c98);
  ppuVar22 = (undefined **)((ulong)param_2 & 0xffffffffffffff8);
  ppuStack_190 = param_1;
  if ((ulong)param_2 >> 0x3e == 0) {
    ppuVar26 = (undefined **)ppuVar22[2];
  }
  else {
    ppuVar26 = ppuVar22;
    if ((undefined **)0x7fffffffffffffff < param_2) {
      ppuVar26 = param_2;
    }
    func_0x000107c60480();
  }
  uStack_158 = (ulong)param_2 & 0xc000000000000001;
  if (ppuVar26 == (undefined **)0x0) {
    ppuStack_178 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_178 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar11 = (undefined **)0x0;
    do {
      while( true ) {
        if (uStack_158 == 0) {
          if (ppuVar22[2] <= ppuVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc6c);
            (*pcVar2)();
          }
          ppuVar7 = (undefined **)param_2[(long)((long)ppuVar11 + 4)];
          func_0x000107c61174();
          ppuVar10 = ppuVar23;
        }
        else {
          ppuVar7 = ppuVar11;
          ppuVar10 = param_2;
          func_0x0001011f491c();
        }
        ppuVar12 = (undefined **)((long)ppuVar11 + 1);
        if (SCARRY8((long)ppuVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc68);
          (*pcVar2)();
        }
        ppuVar23 = ppuVar7;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar8 = ppuVar23;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar23);
        ppuVar9 = ppuVar8;
        func_0x000107c51cec();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar8);
        ppuVar8 = ppuVar9;
        func_0x000107c5faec();
        ppuVar23 = ppuVar10;
        func_0x000107c61170(ppuVar9);
        if ((ppuVar8 != ppuVar21) || (ppuVar10 != ppuStack_168)) break;
        func_0x000107c6142c(ppuVar10);
LAB_102f3b504:
        ppuVar11 = ppuStack_178;
        ppuVar10 = ppuStack_178;
        func_0x000107c61558();
        ppuStack_138 = ppuVar11;
        if (((ulong)ppuVar10 & 1) == 0) {
          ppuVar23 = (undefined **)(ppuVar11[2] + 1);
          func_0x000102f03278(0,ppuVar23,1);
        }
        puVar19 = ppuStack_138[2];
        ppuVar11 = (undefined **)(puVar19 + 1);
        if ((undefined *)((ulong)ppuStack_138[3] >> 1) <= puVar19) {
          ppuVar23 = ppuVar11;
          func_0x000102f03278((undefined *)0x1 < ppuStack_138[3],ppuVar11,1);
        }
        ppuStack_138[2] = (undefined *)ppuVar11;
        ppuStack_138[(long)(puVar19 + 4)] = (undefined *)ppuVar7;
        ppuVar11 = ppuVar12;
        ppuStack_178 = ppuStack_138;
        if (ppuVar12 == ppuVar26) goto LAB_102f3b5a4;
      }
      ppuVar23 = ppuVar10;
      func_0x000107c605b8(ppuVar8,ppuVar10,ppuVar21,ppuStack_168,0);
      func_0x000107c6142c(ppuVar10);
      if (((ulong)ppuVar8 & 1) != 0) goto LAB_102f3b504;
      func_0x000107c61170(ppuVar7);
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar12 != ppuVar26);
  }
LAB_102f3b5a4:
  func_0x000107c6142c(ppuStack_168);
  ppuVar21 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar26 != (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
    do {
      while( true ) {
        if (uStack_158 == 0) {
          if (ppuVar22[2] <= ppuVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc74);
            (*pcVar2)();
          }
          ppuVar7 = (undefined **)param_2[(long)((long)ppuVar11 + 4)];
          func_0x000107c61174();
          ppuVar10 = ppuVar23;
        }
        else {
          ppuVar7 = ppuVar11;
          ppuVar10 = param_2;
          func_0x0001011f491c();
        }
        ppuVar12 = (undefined **)((long)ppuVar11 + 1);
        if (SCARRY8((long)ppuVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc70);
          (*pcVar2)();
        }
        ppuVar23 = ppuVar7;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar8 = ppuVar23;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar23);
        ppuVar9 = ppuVar8;
        func_0x000107c51cec();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar8);
        ppuVar8 = ppuVar9;
        func_0x000107c5faec();
        ppuVar23 = ppuVar10;
        func_0x000107c61170(ppuVar9);
        if ((ppuVar8 != ppuStack_160) || (ppuVar10 != ppuStack_170)) break;
        func_0x000107c6142c(ppuVar10);
LAB_102f3b6c0:
        ppuVar11 = ppuVar21;
        func_0x000107c61558();
        ppuStack_138 = ppuVar21;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar23 = (undefined **)(ppuVar21[2] + 1);
          func_0x000102f03278(0,ppuVar23,1);
        }
        puVar19 = ppuStack_138[2];
        ppuVar21 = (undefined **)(puVar19 + 1);
        if ((undefined *)((ulong)ppuStack_138[3] >> 1) <= puVar19) {
          ppuVar23 = ppuVar21;
          func_0x000102f03278((undefined *)0x1 < ppuStack_138[3],ppuVar21,1);
        }
        ppuStack_138[2] = (undefined *)ppuVar21;
        ppuStack_138[(long)(puVar19 + 4)] = (undefined *)ppuVar7;
        ppuVar21 = ppuStack_138;
        ppuVar11 = ppuVar12;
        if (ppuVar12 == ppuVar26) goto LAB_102f3b748;
      }
      ppuVar23 = ppuVar10;
      func_0x000107c605b8(ppuVar8,ppuVar10,ppuStack_160,ppuStack_170,0);
      func_0x000107c6142c(ppuVar10);
      if (((ulong)ppuVar8 & 1) != 0) goto LAB_102f3b6c0;
      func_0x000107c61170(ppuVar7);
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar12 != ppuVar26);
  }
LAB_102f3b748:
  ppuStack_160 = ppuVar21;
  func_0x000107c6142c(ppuStack_170);
  if (((long)ppuStack_178 < 0) || (((ulong)ppuStack_178 >> 0x3e & 1) != 0)) {
    ppuVar23 = ppuStack_178;
    func_0x000107c60480();
  }
  else {
    ppuVar23 = (undefined **)ppuStack_178[2];
  }
  ppuVar21 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar23 != (undefined **)0x0) {
    ppuStack_138 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,(ulong)ppuVar23 & ((long)ppuVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)ppuVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bcb4);
      (*pcVar2)();
    }
    ppuVar22 = (undefined **)0x0;
    uVar25 = (ulong)ppuStack_178 & 0xc000000000000001;
    do {
      ppuVar21 = ppuStack_138;
      ppuVar26 = ppuStack_178;
      if (uVar25 == 0) {
        ppuVar11 = (undefined **)ppuStack_178[(long)((long)ppuVar22 + 4)];
        func_0x000107c61174();
      }
      else {
        ppuVar11 = ppuVar22;
        func_0x0001011f491c();
      }
      func_0x000107c61174();
      ppuVar7 = ppuVar11;
      func_0x000107c4fa44();
      func_0x000107c61180();
      ppuVar10 = ppuVar7;
      func_0x000107c44fdc();
      func_0x000107c61180();
      ppuVar12 = ppuVar10;
      func_0x000107c4fa4c();
      func_0x000107c61180();
      ppuVar8 = ppuVar12;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar11);
      func_0x000107c61170(ppuVar11);
      func_0x000107c61170(ppuVar7);
      func_0x000107c61170(ppuVar10);
      func_0x000107c61170(ppuVar12);
      puVar19 = ppuVar21[2];
      ppuStack_138 = ppuVar21;
      if ((undefined *)((ulong)ppuVar21[3] >> 1) <= puVar19) {
        func_0x000100403514((undefined *)0x1 < ppuVar21[3],puVar19 + 1,1);
      }
      ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      ppuStack_138[2] = puVar19 + 1;
      ppuStack_138[(long)puVar19 * 2 + 4] = (undefined *)ppuVar8;
      ppuStack_138[(long)puVar19 * 2 + 5] = (undefined *)ppuVar26;
      ppuVar21 = ppuStack_138;
    } while (ppuVar23 != ppuVar22);
  }
  ppuVar22 = ppuVar21;
  func_0x000100403a6c();
  func_0x000107c6142c(ppuVar21);
  lVar6 = lStack_150;
  ppuVar23 = ppuStack_160;
  ppuStack_100 = ppuVar22;
  if (((long)ppuStack_160 < 0) || (((ulong)ppuStack_160 >> 0x3e & 1) != 0)) {
    ppuVar26 = ppuStack_160;
    func_0x000107c60480();
    puVar19 = PTR___sypN_11034f1a8;
    ppuVar21 = ppuStack_168;
  }
  else {
    ppuVar26 = (undefined **)ppuStack_160[2];
    puVar19 = PTR___sypN_11034f1a8;
    ppuVar21 = ppuStack_168;
  }
  ppuStack_168 = ppuVar26;
  PTR___sypN_11034f1a8 = puVar19;
  if (ppuStack_168 != (undefined **)0x0) {
    ppuVar26 = (undefined **)0x0;
    uStack_158 = (ulong)ppuVar23 & 0xc000000000000001;
    ppuStack_170 = ppuVar23 + 4;
    ppuVar11 = ppuStack_168;
    do {
      while( true ) {
        if (uStack_158 == 0) {
          if (ppuVar23[2] <= ppuVar26) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc7c);
            (*pcVar2)();
          }
          ppuVar21 = (undefined **)ppuStack_170[(long)ppuVar26];
          func_0x000107c61174();
        }
        else {
          ppuVar21 = ppuVar26;
          func_0x0001011f491c(ppuVar26,ppuVar23);
        }
        bVar3 = SCARRY8((long)ppuVar26,1);
        ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bc78);
          (*pcVar2)();
        }
        ppuVar22 = ppuVar21;
        func_0x000107c4e3a4();
        func_0x000107c61180();
        if (ppuVar22 == (undefined **)0x0) break;
        func_0x000107c5ff64(lVar6);
        func_0x000107c5ed4c(&ppuStack_138);
        if (puStack_120 != (undefined *)0x0) {
          uVar13 = 0;
          FUN_102f3bdb4(0,0x112d715d8,&PTR_PTR_1126b3560);
          do {
            puVar14 = &uStack_148;
            pppuVar24 = &ppuStack_138;
            func_0x000107c6147c(puVar14,pppuVar24,puVar19 + 8,uVar13,6);
            uVar1 = uStack_148;
            if (((ulong)puVar14 & 1) != 0) {
              uVar15 = uStack_148;
              func_0x000107c44fdc(uStack_148);
              func_0x000107c61180();
              uVar16 = uVar15;
              func_0x000107c4fa4c();
              func_0x000107c61180();
              func_0x000107c61170(uVar15);
              uVar15 = uVar16;
              func_0x000107c5faec(uVar16);
              func_0x000107c61170(uVar16);
              lVar6 = lStack_150;
              func_0x000100403b00(&uStack_148,uVar15,pppuVar24);
              func_0x000107c61170(uVar1);
              func_0x000107c6142c(uStack_140);
            }
            func_0x000107c5ed4c(&ppuStack_138);
          } while (puStack_120 != (undefined *)0x0);
        }
        (**(code **)(lStack_188 + 8))(lVar6,lStack_180);
        func_0x000107c61170(ppuVar21);
        func_0x000107c61170(ppuVar22);
        ppuVar23 = ppuStack_160;
        ppuVar11 = ppuStack_168;
        ppuVar22 = ppuStack_100;
        ppuVar21 = ppuStack_168;
        if (ppuVar26 == ppuStack_168) goto LAB_102f3ba44;
      }
      func_0x000107c61170(ppuVar21);
      ppuVar22 = ppuStack_100;
      ppuVar21 = ppuStack_168;
    } while (ppuVar26 != ppuVar11);
  }
LAB_102f3ba44:
  ppuStack_168 = ppuVar21;
  ppuVar23 = ppuStack_190;
  func_0x000107c61174();
  ppuVar21 = ppuVar22;
  func_0x000107c61434();
  FUN_102f3b0d0();
  func_0x000107c61170(ppuVar23);
  if ((ppuVar21[2] != (undefined *)0x0) &&
     (lVar6 = *(long *)((long)ppuVar23 + _DAT_112f299b0), lVar6 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      pppuVar24 = (undefined ***)ppuVar21[2];
      if (pppuVar24 == (undefined ***)0x0) {
        func_0x000107c61574(ppuVar21);
        pppuVar17 = (undefined ***)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        pppuVar17 = pppuVar24;
        func_0x00010109b448(pppuVar24,0);
        pppuVar18 = &ppuStack_138;
        func_0x00010109b930(pppuVar18,pppuVar17 + 4,pppuVar24,ppuVar21);
        func_0x00010109bac0(ppuStack_138,uStack_130,puStack_128,puStack_120,pcStack_118);
        if (pppuVar18 != pppuVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f3bae8);
          (*pcVar2)();
        }
      }
      pppuVar24 = pppuVar17;
      func_0x000107c5fc48(pppuVar17,PTR___sSSN_11034da80);
      func_0x000107c61574(pppuVar17);
      ppuVar21 = (undefined **)0x0;
      FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar19 = &UNK_1105ea3b0;
      func_0x000107c613fc(&UNK_1105ea3b0,0x18,7);
      func_0x000107c61614(puVar19 + 0x10,ppuVar23);
      puVar20 = &UNK_1105ea3d8;
      func_0x000107c613fc(&UNK_1105ea3d8,0x28,7);
      *(undefined **)(puVar20 + 0x10) = puVar19;
      *(undefined ***)(puVar20 + 0x18) = ppuStack_178;
      *(undefined ***)(puVar20 + 0x20) = ppuStack_160;
      pcStack_118 = FUN_102f3bd44;
      ppuStack_138 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0x42000000;
      puStack_128 = &UNK_100f6151c;
      puStack_120 = &UNK_1105ea3f0;
      pppuVar17 = &ppuStack_138;
      puStack_110 = puVar20;
      func_0x000107c60bc4(pppuVar17);
      func_0x000107c61574(puStack_110);
      func_0x000107c5b4f8(lVar6);
      func_0x000107c60bd0(pppuVar17);
      func_0x000107c6142c(ppuVar22);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(pppuVar24);
      func_0x000107c61170(ppuVar21);
      return ppuVar21;
    }
  }
  func_0x000107c61574(ppuVar21);
  ppuVar21 = ppuStack_160;
  ppuVar23 = ppuStack_178;
  FUN_102f371f4(ppuStack_178,ppuStack_160);
  func_0x000107c6142c(ppuVar22);
  func_0x000107c61574(ppuVar21);
  func_0x000107c61574(ppuVar23);
  return ppuVar23;
}



/* Entry: 102f3b31c; end: 102f3bcbb;  */

/* WARNING: Removing unreachable block (ram,0x000102f3bcb8) */
/* WARNING: Removing unreachable block (ram,0x000102f3bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3b31c(undefined **param_1,undefined **param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long lVar23;
  long extraout_x8;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long unaff_x20;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined *puStack_e8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_70;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lVar23 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  ppuVar24 = &PTR____CFConstantStringClassReference_110f52c78;
  func_0x000107c5faec();
  ppuVar21 = param_2;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
  ppuVar25 = &PTR____CFConstantStringClassReference_110f52c98;
  func_0x000107c5faec();
  ppuVar29 = ppuVar21;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c98);
  ppuVar30 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    ppuVar32 = (undefined **)ppuVar30[2];
  }
  else {
    ppuVar32 = ppuVar30;
    if ((undefined **)0x7fffffffffffffff < param_1) {
      ppuVar32 = param_1;
    }
    func_0x000107c60480();
  }
  if (ppuVar32 == (undefined **)0x0) {
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar10 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (ppuVar30[2] <= ppuVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc6c);
            (*pcVar3)();
          }
          ppuVar6 = (undefined **)param_1[(long)ppuVar10 + 4];
          func_0x000107c61174();
          ppuVar22 = ppuVar29;
        }
        else {
          ppuVar6 = ppuVar10;
          ppuVar22 = param_1;
          func_0x0001011f491c();
        }
        ppuVar11 = (undefined **)((long)ppuVar10 + 1);
        if (SCARRY8((long)ppuVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc68);
          (*pcVar3)();
        }
        ppuVar29 = ppuVar6;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar7 = ppuVar29;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar29);
        ppuVar8 = ppuVar7;
        func_0x000107c51cec();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar7);
        ppuVar7 = ppuVar8;
        func_0x000107c5faec();
        ppuVar29 = ppuVar22;
        func_0x000107c61170(ppuVar8);
        if ((ppuVar7 != ppuVar24) || (ppuVar22 != param_2)) break;
        func_0x000107c6142c(ppuVar22);
LAB_102f3b504:
        puVar9 = puStack_e8;
        func_0x000107c61558();
        puStack_a8 = puStack_e8;
        if (((ulong)puVar9 & 1) == 0) {
          ppuVar29 = (undefined **)(*(long *)(puStack_e8 + 0x10) + 1);
          func_0x000102f03278(0,ppuVar29,1);
        }
        uVar1 = *(ulong *)(puStack_a8 + 0x10);
        ppuVar10 = (undefined **)(uVar1 + 1);
        if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar1) {
          ppuVar29 = ppuVar10;
          func_0x000102f03278(1 < *(ulong *)(puStack_a8 + 0x18),ppuVar10,1);
        }
        *(undefined ***)(puStack_a8 + 0x10) = ppuVar10;
        *(undefined ***)(puStack_a8 + uVar1 * 8 + 0x20) = ppuVar6;
        ppuVar10 = ppuVar11;
        puStack_e8 = puStack_a8;
        if (ppuVar11 == ppuVar32) goto LAB_102f3b5a4;
      }
      ppuVar29 = ppuVar22;
      func_0x000107c605b8(ppuVar7,ppuVar22,ppuVar24,param_2,0);
      func_0x000107c6142c(ppuVar22);
      if (((ulong)ppuVar7 & 1) != 0) goto LAB_102f3b504;
      func_0x000107c61170(ppuVar6);
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
    } while (ppuVar11 != ppuVar32);
  }
LAB_102f3b5a4:
  func_0x000107c6142c(param_2);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar32 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (ppuVar30[2] <= ppuVar24) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc74);
            (*pcVar3)();
          }
          ppuVar10 = (undefined **)param_1[(long)ppuVar24 + 4];
          func_0x000107c61174();
          ppuVar6 = ppuVar29;
        }
        else {
          ppuVar10 = ppuVar24;
          ppuVar6 = param_1;
          func_0x0001011f491c();
        }
        ppuVar22 = (undefined **)((long)ppuVar24 + 1);
        if (SCARRY8((long)ppuVar24,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc70);
          (*pcVar3)();
        }
        ppuVar29 = ppuVar10;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar11 = ppuVar29;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar29);
        ppuVar7 = ppuVar11;
        func_0x000107c51cec();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar11);
        ppuVar11 = ppuVar7;
        func_0x000107c5faec();
        ppuVar29 = ppuVar6;
        func_0x000107c61170(ppuVar7);
        if ((ppuVar11 != ppuVar25) || (ppuVar6 != ppuVar21)) break;
        func_0x000107c6142c(ppuVar6);
LAB_102f3b6c0:
        puVar27 = puVar9;
        func_0x000107c61558();
        puStack_a8 = puVar9;
        if (((ulong)puVar27 & 1) == 0) {
          ppuVar29 = (undefined **)(*(long *)(puVar9 + 0x10) + 1);
          func_0x000102f03278(0,ppuVar29,1);
        }
        uVar1 = *(ulong *)(puStack_a8 + 0x10);
        ppuVar24 = (undefined **)(uVar1 + 1);
        if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar1) {
          ppuVar29 = ppuVar24;
          func_0x000102f03278(1 < *(ulong *)(puStack_a8 + 0x18),ppuVar24,1);
        }
        *(undefined ***)(puStack_a8 + 0x10) = ppuVar24;
        *(undefined ***)(puStack_a8 + uVar1 * 8 + 0x20) = ppuVar10;
        puVar9 = puStack_a8;
        ppuVar24 = ppuVar22;
        if (ppuVar22 == ppuVar32) goto LAB_102f3b748;
      }
      ppuVar29 = ppuVar6;
      func_0x000107c605b8(ppuVar11,ppuVar6,ppuVar25,ppuVar21,0);
      func_0x000107c6142c(ppuVar6);
      if (((ulong)ppuVar11 & 1) != 0) goto LAB_102f3b6c0;
      func_0x000107c61170(ppuVar10);
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar22 != ppuVar32);
  }
LAB_102f3b748:
  func_0x000107c6142c(ppuVar21);
  if (((long)puStack_e8 < 0) || (((ulong)puStack_e8 >> 0x3e & 1) != 0)) {
    puVar27 = puStack_e8;
    func_0x000107c60480();
  }
  else {
    puVar27 = *(undefined **)(puStack_e8 + 0x10);
  }
  puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar27 != (undefined *)0x0) {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,(ulong)puVar27 & ((long)puVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bcb4);
      (*pcVar3)();
    }
    puVar28 = (undefined *)0x0;
    do {
      puVar26 = puStack_a8;
      puVar31 = puStack_e8;
      if (((ulong)puStack_e8 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(puStack_e8 + (long)puVar28 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar12 = puVar28;
        func_0x0001011f491c();
      }
      func_0x000107c61174();
      puVar13 = puVar12;
      func_0x000107c4fa44();
      func_0x000107c61180();
      puVar14 = puVar13;
      func_0x000107c44fdc();
      func_0x000107c61180();
      puVar15 = puVar14;
      func_0x000107c4fa4c();
      func_0x000107c61180();
      puVar16 = puVar15;
      func_0x000107c5faec();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar15);
      uVar1 = *(ulong *)(puVar26 + 0x10);
      puStack_a8 = puVar26;
      if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar26 + 0x18),uVar1 + 1,1);
      }
      puVar28 = puVar28 + 1;
      *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_a8 + uVar1 * 0x10 + 0x20) = puVar16;
      *(undefined **)(puStack_a8 + uVar1 * 0x10 + 0x28) = puVar31;
      puVar26 = puStack_a8;
    } while (puVar27 != puVar28);
  }
  puVar27 = puVar26;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar26);
  puStack_70 = puVar27;
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar26 = puVar9;
    func_0x000107c60480();
    puVar28 = PTR___sypN_11034f1a8;
  }
  else {
    puVar26 = *(undefined **)(puVar9 + 0x10);
    puVar28 = PTR___sypN_11034f1a8;
  }
  PTR___sypN_11034f1a8 = puVar28;
  if (puVar26 != (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar9 + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc7c);
            (*pcVar3)();
          }
          puVar27 = *(undefined **)(puVar9 + (long)puVar31 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar27 = puVar31;
          func_0x0001011f491c(puVar31,puVar9);
        }
        bVar4 = SCARRY8((long)puVar31,1);
        puVar31 = puVar31 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bc78);
          (*pcVar3)();
        }
        puVar12 = puVar27;
        func_0x000107c4e3a4();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) break;
        func_0x000107c5ff64(&stack0xffffffffffffff00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ed4c(&puStack_a8);
        if (puStack_90 != (undefined *)0x0) {
          uVar17 = 0;
          FUN_102f3bdb4(0,0x112d715d8,&PTR_PTR_1126b3560);
          do {
            puVar18 = &uStack_b8;
            ppuVar29 = &puStack_a8;
            func_0x000107c6147c(puVar18,ppuVar29,puVar28 + 8,uVar17,6);
            uVar2 = uStack_b8;
            if (((ulong)puVar18 & 1) != 0) {
              uVar19 = uStack_b8;
              func_0x000107c44fdc(uStack_b8);
              func_0x000107c61180();
              uVar20 = uVar19;
              func_0x000107c4fa4c();
              func_0x000107c61180();
              func_0x000107c61170(uVar19);
              uVar19 = uVar20;
              func_0x000107c5faec(uVar20);
              func_0x000107c61170(uVar20);
              func_0x000100403b00(&uStack_b8,uVar19,ppuVar29);
              func_0x000107c61170(uVar2);
              func_0x000107c6142c(uStack_b0);
            }
            func_0x000107c5ed4c(&puStack_a8);
          } while (puStack_90 != (undefined *)0x0);
        }
        (**(code **)(lVar23 + 8))
                  (&stack0xffffffffffffff00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
        func_0x000107c61170(puVar27);
        func_0x000107c61170(puVar12);
        puVar27 = puStack_70;
        if (puVar31 == puVar26) goto LAB_102f3ba44;
      }
      func_0x000107c61170(puVar27);
      puVar27 = puStack_70;
    } while (puVar31 != puVar26);
  }
LAB_102f3ba44:
  func_0x000107c61174();
  puVar26 = puVar27;
  func_0x000107c61434();
  FUN_102f3b0d0();
  func_0x000107c61170(unaff_x20);
  if ((*(long *)(puVar26 + 0x10) != 0) &&
     (lVar5 = *(long *)(unaff_x20 + _DAT_112f299b0), lVar5 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      ppuVar29 = *(undefined ***)(puVar26 + 0x10);
      if (ppuVar29 == (undefined **)0x0) {
        func_0x000107c61574(puVar26);
        ppuVar21 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppuVar21 = ppuVar29;
        func_0x00010109b448(ppuVar29,0);
        ppuVar24 = &puStack_a8;
        func_0x00010109b930(ppuVar24,ppuVar21 + 4,ppuVar29,puVar26);
        func_0x00010109bac0(puStack_a8,uStack_a0,puStack_98,puStack_90,pcStack_88);
        if (ppuVar24 != ppuVar29) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f3bae8);
          (*pcVar3)();
        }
      }
      ppuVar29 = ppuVar21;
      func_0x000107c5fc48(ppuVar21,PTR___sSSN_11034da80);
      func_0x000107c61574(ppuVar21);
      uVar17 = 0;
      FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar26 = &UNK_1105ea3b0;
      func_0x000107c613fc(&UNK_1105ea3b0,0x18,7);
      func_0x000107c61614(puVar26 + 0x10,unaff_x20);
      puVar28 = &UNK_1105ea3d8;
      func_0x000107c613fc(&UNK_1105ea3d8,0x28,7);
      *(undefined **)(puVar28 + 0x10) = puVar26;
      *(undefined **)(puVar28 + 0x18) = puStack_e8;
      *(undefined **)(puVar28 + 0x20) = puVar9;
      pcStack_88 = FUN_102f3bd44;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f6151c;
      puStack_90 = &UNK_1105ea3f0;
      ppuVar21 = &puStack_a8;
      puStack_80 = puVar28;
      func_0x000107c60bc4(ppuVar21);
      func_0x000107c61574(puStack_80);
      func_0x000107c5b4f8(lVar5);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c6142c(puVar27);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(ppuVar29);
      func_0x000107c61170(uVar17);
      return;
    }
  }
  func_0x000107c61574(puVar26);
  FUN_102f371f4(puStack_e8,puVar9);
  func_0x000107c6142c(puVar27);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puStack_e8);
  return;
}



/* Entry: 102f3bcbc; end: 102f3bd43;  */

/* WARNING: Possible PIC construction at 0x000102f3bd10: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3bcbc(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  (**(code **)(unaff_x20 + _DAT_112f299c8))();
  plVar1 = (long *)(unaff_x20 + _DAT_112f299c0);
  pcVar6 = (code *)*plVar1;
  if (pcVar6 == (code *)0x0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f299b8);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000100d2bf90(uVar3,uVar4);
    pcVar6 = (code *)*plVar1;
    lVar5 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  else {
    lVar5 = plVar1[1];
    func_0x000107c6157c(lVar5);
    (*pcVar6)();
  }
  if (pcVar6 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar5);
    return;
  }
  return;
}



/* Entry: 102f3bd44; end: 102f3bd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3bd44(undefined1 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  long unaff_x20;
  undefined1 *puVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar12 = auStack_78;
  func_0x000107c61428(lVar8 + 0x10,puVar12,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      puVar23 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((ulong)param_1 >> 0x3e == 0) {
        puVar21 = *(undefined1 **)(puVar23 + 0x10);
        lVar5 = _DAT_112f299a8;
      }
      else {
        puVar21 = param_1;
        if (-1 < (long)param_1) {
          puVar21 = puVar23;
        }
        func_0x000107c60480();
        lVar5 = _DAT_112f299a8;
      }
      _DAT_112f299a8 = lVar5;
      if (puVar21 != (undefined1 *)0x0) {
        lVar22 = 4;
        do {
          uVar16 = lVar22 - 4;
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar23 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102f382d0);
              (*pcVar6)();
            }
            uVar9 = *(ulong *)(param_1 + lVar22 * 8);
            func_0x000107c61174();
            puVar13 = puVar12;
          }
          else {
            uVar9 = uVar16;
            puVar13 = param_1;
            func_0x00010103193c();
          }
          puVar1 = (undefined1 *)(lVar22 + -3);
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102f382cc);
            (*pcVar6)();
          }
          uVar16 = uVar9;
          func_0x000107c5d984();
          func_0x000107c61180();
          puVar12 = puVar13;
          if (uVar16 != 0) {
            uVar10 = uVar16;
            func_0x000107c5faec();
            puVar12 = puVar13;
            func_0x000107c61170(uVar16);
            uVar16 = uVar10 & 0xffffffffffff;
            if (((ulong)puVar13 & 0x2000000000000000) != 0) {
              uVar16 = (ulong)puVar13 >> 0x38 & 0xf;
            }
            if (uVar16 == 0) {
              func_0x000107c6142c(puVar13);
            }
            else {
              FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
              uVar16 = uVar9;
              func_0x000107c61174();
              FUN_102f48440();
              func_0x000107c61428(lVar8 + lVar5,auStack_90,0x21,0);
              uVar18 = *(ulong *)(lVar8 + lVar5);
              if (uVar16 == 0) {
                func_0x000107c61434(uVar18);
                puVar20 = puVar13;
                func_0x000100029284();
                puVar12 = puVar20;
                func_0x000107c6142c(uVar18);
                if (((ulong)puVar20 & 1) == 0) {
                  func_0x000107c6142c(puVar13);
                }
                else {
                  iVar7 = (int)*(undefined8 *)(lVar8 + lVar5);
                  func_0x000107c61558();
                  puVar20 = *(undefined1 **)(lVar8 + lVar5);
                  *(undefined8 *)(lVar8 + lVar5) = 0x8000000000000000;
                  if (iVar7 == 0) {
                    FUN_102f39190();
                  }
                  func_0x000107c6142c(*(undefined8 *)(*(long *)(puVar20 + 0x30) + uVar10 * 0x10 + 8)
                                     );
                  func_0x000107c61170(*(undefined8 *)(*(long *)(puVar20 + 0x38) + uVar10 * 8));
                  puVar12 = puVar20;
                  func_0x000102f3959c(uVar10);
                  func_0x000107c6142c(puVar13);
                  *(undefined1 **)(lVar8 + lVar5) = puVar20;
                }
              }
              else {
                func_0x000107c61558();
                lVar19 = *(long *)(lVar8 + lVar5);
                *(undefined8 *)(lVar8 + lVar5) = 0x8000000000000000;
                uVar11 = uVar10;
                puVar12 = puVar13;
                func_0x000100029284();
                uVar15 = (ulong)~(uint)puVar12 & 1;
                lVar2 = *(long *)(lVar19 + 0x10) + uVar15;
                if (SCARRY8(*(long *)(lVar19 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102f382d4);
                  (*pcVar6)();
                }
                if (*(long *)(lVar19 + 0x18) < lVar2) {
                  FUN_102f39300(lVar2,uVar18);
                  uVar11 = uVar10;
                  puVar20 = puVar13;
                  func_0x000100029284();
                  if (((uint)puVar12 & 1) != ((uint)puVar20 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f38330);
                    (*pcVar6)();
                  }
joined_r0x000102f38258:
                  uVar18 = (ulong)puVar12 & 1;
                  puVar12 = puVar20;
                  if (uVar18 != 0) goto LAB_102f38218;
LAB_102f3825c:
                  lVar2 = lVar19 + (uVar11 >> 6) * 8;
                  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar11 & 0x3f);
                  puVar3 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar11 * 0x10);
                  *puVar3 = uVar10;
                  puVar3[1] = (ulong)puVar13;
                  *(ulong *)(*(long *)(lVar19 + 0x38) + uVar11 * 8) = uVar16;
                  if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102f382d8);
                    (*pcVar6)();
                  }
                  *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
                  puVar12 = puVar20;
                }
                else {
                  puVar20 = puVar12;
                  if ((uVar18 & 1) == 0) {
                    FUN_102f39190();
                    goto joined_r0x000102f38258;
                  }
                  if (((ulong)puVar12 & 1) == 0) goto LAB_102f3825c;
LAB_102f38218:
                  uVar17 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 8);
                  *(ulong *)(*(long *)(lVar19 + 0x38) + uVar11 * 8) = uVar16;
                  func_0x000107c6142c(puVar13);
                  func_0x000107c61170(uVar17);
                }
                *(long *)(lVar8 + lVar5) = lVar19;
              }
              func_0x000107c614a8(auStack_90);
            }
          }
          func_0x000107c61170(uVar9);
          lVar22 = lVar22 + 1;
        } while (puVar1 != puVar21);
      }
    }
    FUN_102f371f4(uVar4,uVar14);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 102f3bd50; end: 102f3bd6b;  */

uint FUN_102f3bd50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102f37130(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 102f3bd6c; end: 102f3bdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f3bd6c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
    lVar3 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112f29c68);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_112f29c68))[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c40);
      func_0x000107c61428(puVar1,auStack_a0,0,0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      func_0x000100d2c2cc(uVar7,uVar8);
      func_0x000107c61170(lVar4);
    }
    FUN_102f2dda0(uVar6,uVar5,uVar7,uVar8);
    func_0x000100d2bf90(uVar7,uVar8);
    func_0x000107c61574(lVar2);
    func_0x000107c6142c(uVar5);
  }
  return uVar6;
}



/* Entry: 102f3bdb4; end: 102f3be47;  */

void FUN_102f3bdb4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102f3be48; end: 102f3bed3;  */

void FUN_102f3be48(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102f3bed4;
  plVar8[0x4a] = lVar3;
  func_0x000107c614f0(uVar6);
  piVar9 = *(int **)(lVar4 + 0x38);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  plVar8[0x4b] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_102f2fb60;
                    /* WARNING: Could not recover jumptable at 0x000102f2fb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(plVar7,plVar8 + 2,uVar2,uVar5,0,uVar6,lVar4);
  return;
}



/* Entry: 102f3bed4; end: 102f3bf0f;  */

void FUN_102f3bed4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f3bf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f3bf10; end: 102f3c00f;  */

void FUN_102f3bf10(long *param_1,code *param_2,long param_3)

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



/* Entry: 102f3c010; end: 102f3c03f;  */

/* WARNING: Possible PIC construction at 0x000102f2f390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2f530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2f394) */
/* WARNING: Removing unreachable block (ram,0x000102f2f534) */

void FUN_102f3c010(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar12 = &puStack_90;
  if (param_1 == 0) {
    (*pcVar2)(0);
    return;
  }
  pcVar13 = pcVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    uVar6 = param_1;
    func_0x000107c5faec();
    uVar1 = uVar6 & 0xffffffffffff;
    if (((ulong)pcVar13 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pcVar13 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar7 = *(long *)(lVar3 + 0x68);
      func_0x000107c5b4b0();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar8 != 0) {
          uVar9 = 0;
          FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar10 = &UNK_1105ea450;
          func_0x000107c613fc(&UNK_1105ea450,0x18,7);
          func_0x000107c61644(puVar10 + 0x10,lVar3);
          puVar11 = &UNK_1105ea658;
          func_0x000107c613fc(&UNK_1105ea658,0x40,7);
          *(ulong *)(puVar11 + 0x10) = uVar6;
          *(code **)(puVar11 + 0x18) = pcVar13;
          *(code **)(puVar11 + 0x20) = pcVar2;
          *(undefined8 *)(puVar11 + 0x28) = uVar4;
          *(undefined **)(puVar11 + 0x30) = puVar10;
          *(undefined8 *)(puVar11 + 0x38) = uVar5;
          uStack_70 = 0x102f3c01c;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_101043a98;
          puStack_78 = &UNK_1105ea670;
          puStack_68 = puVar11;
          func_0x000107c60bc4(&puStack_90);
          puVar10 = puStack_68;
          func_0x000107c6157c(uVar4);
          func_0x000107c61574(puVar10);
          func_0x000107c5b49c(lVar8);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar9);
          return;
        }
      }
      func_0x000107c61170(param_1);
      FUN_102f2f568(uVar6,pcVar13,0,pcVar2,uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar13);
  return;
}



/* Entry: 102f3c040; end: 102f3c0b7;  */

void FUN_102f3c040(void)

{
  long unaff_x20;
  
  FUN_102f30d48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_102f3c6e8,
                &UNK_1105eaf58);
  return;
}



/* Entry: 102f3c0b8; end: 102f3c0c7;  */

void FUN_102f3c0b8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createEventDetailContext()";
  func_0x0001000c10c0("createEventDetailContext()");
  func_0x000107c61180();
  puVar2 = &UNK_1105eae00;
  func_0x000107c613fc(&UNK_1105eae00,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_102f3c5bc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105eae18;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102f3c0c8; end: 102f3c10b;  */

void FUN_102f3c0c8(void)

{
  FUN_102f31c60();
  return;
}



/* Entry: 102f3c10c; end: 102f3c11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3c10c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x78);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112ff5e38);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&lStack_70);
    func_0x000107c61574(uVar4);
    if (lStack_70 != 0) {
      puVar2 = &UNK_1105ea9f0;
      func_0x000107c613fc(&UNK_1105ea9f0,0x40,7);
      *(undefined8 *)(puVar2 + 0x18) = uStack_68;
      *(long *)(puVar2 + 0x10) = lStack_70;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      *(undefined8 *)(puVar2 + 0x28) = param_2;
      *(code **)(puVar2 + 0x30) = param_3;
      *(undefined8 *)(puVar2 + 0x38) = param_4;
      func_0x000107c615f0(lStack_70);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(param_4);
      uVar4 = 3;
      func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10db65cc8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_70);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar4);
      return;
    }
  }
  (*param_3)(0,0xe000000000000000);
  return;
}



/* Entry: 102f3c11c; end: 102f3c14f;  */

void FUN_102f3c11c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 102f3c150; end: 102f3c157;  */

void FUN_102f3c150(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f3c158; end: 102f3c1f7;  */

void FUN_102f3c158(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar11 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x102f3cab0;
  plVar11[0xf] = lVar4;
  plVar11[0x10] = lVar8;
  plVar11[0xd] = lVar3;
  plVar11[0xe] = lVar7;
  plVar11[0xb] = lVar2;
  plVar11[0xc] = lVar6;
  func_0x000107c614f0(uVar9);
  piVar12 = *(int **)(lVar5 + 0x60);
  iVar1 = *piVar12;
  plVar10 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  plVar11[0x11] = (long)plVar10;
  *plVar10 = (long)plVar11;
  plVar10[1] = (long)FUN_102f33484;
                    /* WARNING: Could not recover jumptable at 0x000102f33480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))(lVar2,lVar6,0,0,uVar9,lVar5);
  return;
}



/* Entry: 102f3c1f8; end: 102f3c203;  */

/* WARNING: Possible PIC construction at 0x000102f34348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f344c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f346e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f347e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f348d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f349b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f34814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3452c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f344ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f341b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f34530) */
/* WARNING: Removing unreachable block (ram,0x000102f34578) */
/* WARNING: Removing unreachable block (ram,0x000102f34818) */
/* WARNING: Removing unreachable block (ram,0x000102f3486c) */
/* WARNING: Removing unreachable block (ram,0x000102f34958) */
/* WARNING: Removing unreachable block (ram,0x000102f34a8c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a7c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a88) */
/* WARNING: Removing unreachable block (ram,0x000102f34b0c) */
/* WARNING: Removing unreachable block (ram,0x000102f34ab8) */
/* WARNING: Removing unreachable block (ram,0x000102f34b04) */
/* WARNING: Removing unreachable block (ram,0x000102f34afc) */
/* WARNING: Removing unreachable block (ram,0x000102f34b10) */
/* WARNING: Removing unreachable block (ram,0x000102f34a4c) */
/* WARNING: Removing unreachable block (ram,0x000102f34ac8) */
/* WARNING: Removing unreachable block (ram,0x000102f349bc) */
/* WARNING: Removing unreachable block (ram,0x000102f349c4) */
/* WARNING: Removing unreachable block (ram,0x000102f34a74) */
/* WARNING: Removing unreachable block (ram,0x000102f349cc) */
/* WARNING: Removing unreachable block (ram,0x000102f349dc) */
/* WARNING: Removing unreachable block (ram,0x000102f349e4) */
/* WARNING: Removing unreachable block (ram,0x000102f34a3c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a94) */
/* WARNING: Removing unreachable block (ram,0x000102f34a44) */
/* WARNING: Removing unreachable block (ram,0x000102f348d8) */
/* WARNING: Removing unreachable block (ram,0x000102f348e4) */
/* WARNING: Removing unreachable block (ram,0x000102f348f4) */
/* WARNING: Removing unreachable block (ram,0x000102f348fc) */
/* WARNING: Removing unreachable block (ram,0x000102f34a5c) */
/* WARNING: Removing unreachable block (ram,0x000102f34a68) */
/* WARNING: Removing unreachable block (ram,0x000102f347e4) */
/* WARNING: Removing unreachable block (ram,0x000102f3481c) */
/* WARNING: Removing unreachable block (ram,0x000102f34904) */
/* WARNING: Removing unreachable block (ram,0x000102f34950) */
/* WARNING: Removing unreachable block (ram,0x000102f3491c) */
/* WARNING: Removing unreachable block (ram,0x000102f34960) */
/* WARNING: Removing unreachable block (ram,0x000102f34930) */
/* WARNING: Removing unreachable block (ram,0x000102f34968) */
/* WARNING: Removing unreachable block (ram,0x000102f349a4) */
/* WARNING: Removing unreachable block (ram,0x000102f3497c) */
/* WARNING: Removing unreachable block (ram,0x000102f349b4) */
/* WARNING: Removing unreachable block (ram,0x000102f34834) */
/* WARNING: Removing unreachable block (ram,0x000102f3487c) */
/* WARNING: Removing unreachable block (ram,0x000102f34848) */
/* WARNING: Removing unreachable block (ram,0x000102f34884) */
/* WARNING: Removing unreachable block (ram,0x000102f348c0) */
/* WARNING: Removing unreachable block (ram,0x000102f34898) */
/* WARNING: Removing unreachable block (ram,0x000102f348d0) */
/* WARNING: Removing unreachable block (ram,0x000102f34cdc) */
/* WARNING: Removing unreachable block (ram,0x000102f34d30) */
/* WARNING: Removing unreachable block (ram,0x000102f34ca4) */
/* WARNING: Removing unreachable block (ram,0x000102f34ce0) */
/* WARNING: Removing unreachable block (ram,0x000102f34ce4) */
/* WARNING: Removing unreachable block (ram,0x000102f34d70) */
/* WARNING: Removing unreachable block (ram,0x000102f34d78) */
/* WARNING: Removing unreachable block (ram,0x000102f34d84) */
/* WARNING: Removing unreachable block (ram,0x000102f34d00) */
/* WARNING: Removing unreachable block (ram,0x000102f34cac) */
/* WARNING: Removing unreachable block (ram,0x000102f34cb8) */
/* WARNING: Removing unreachable block (ram,0x000102f34d58) */
/* WARNING: Removing unreachable block (ram,0x000102f34750) */
/* WARNING: Removing unreachable block (ram,0x000102f346ec) */
/* WARNING: Removing unreachable block (ram,0x000102f34bec) */
/* WARNING: Removing unreachable block (ram,0x000102f346fc) */
/* WARNING: Removing unreachable block (ram,0x000102f34708) */
/* WARNING: Removing unreachable block (ram,0x000102f3475c) */
/* WARNING: Removing unreachable block (ram,0x000102f347e8) */
/* WARNING: Removing unreachable block (ram,0x000102f34b14) */
/* WARNING: Removing unreachable block (ram,0x000102f34b20) */
/* WARNING: Removing unreachable block (ram,0x000102f34b24) */
/* WARNING: Removing unreachable block (ram,0x000102f34b28) */
/* WARNING: Removing unreachable block (ram,0x000102f34bd8) */
/* WARNING: Removing unreachable block (ram,0x000102f34be0) */
/* WARNING: Removing unreachable block (ram,0x000102f34b30) */
/* WARNING: Removing unreachable block (ram,0x000102f34b38) */
/* WARNING: Removing unreachable block (ram,0x000102f34b68) */
/* WARNING: Removing unreachable block (ram,0x000102f34b9c) */
/* WARNING: Removing unreachable block (ram,0x000102f34b7c) */
/* WARNING: Removing unreachable block (ram,0x000102f34b98) */
/* WARNING: Removing unreachable block (ram,0x000102f34bf4) */
/* WARNING: Removing unreachable block (ram,0x000102f34c00) */
/* WARNING: Removing unreachable block (ram,0x000102f34d5c) */
/* WARNING: Removing unreachable block (ram,0x000102f34d60) */
/* WARNING: Removing unreachable block (ram,0x000102f34c0c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c10) */
/* WARNING: Removing unreachable block (ram,0x000102f34c18) */
/* WARNING: Removing unreachable block (ram,0x000102f34d1c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c20) */
/* WARNING: Removing unreachable block (ram,0x000102f34cbc) */
/* WARNING: Removing unreachable block (ram,0x000102f34c24) */
/* WARNING: Removing unreachable block (ram,0x000102f34d54) */
/* WARNING: Removing unreachable block (ram,0x000102f34c30) */
/* WARNING: Removing unreachable block (ram,0x000102f34c3c) */
/* WARNING: Removing unreachable block (ram,0x000102f34c70) */
/* WARNING: Removing unreachable block (ram,0x000102f34ccc) */
/* WARNING: Removing unreachable block (ram,0x000102f34c7c) */
/* WARNING: Removing unreachable block (ram,0x000102f347a0) */
/* WARNING: Removing unreachable block (ram,0x000102f347d4) */
/* WARNING: Removing unreachable block (ram,0x000102f347f4) */
/* WARNING: Removing unreachable block (ram,0x000102f347dc) */
/* WARNING: Removing unreachable block (ram,0x000102f3471c) */
/* WARNING: Removing unreachable block (ram,0x000102f34754) */
/* WARNING: Removing unreachable block (ram,0x000102f34738) */
/* WARNING: Removing unreachable block (ram,0x000102f34634) */
/* WARNING: Removing unreachable block (ram,0x000102f344cc) */
/* WARNING: Removing unreachable block (ram,0x000102f34544) */
/* WARNING: Removing unreachable block (ram,0x000102f3457c) */
/* WARNING: Removing unreachable block (ram,0x000102f34434) */
/* WARNING: Removing unreachable block (ram,0x000102f3443c) */
/* WARNING: Removing unreachable block (ram,0x000102f344e0) */
/* WARNING: Removing unreachable block (ram,0x000102f34448) */
/* WARNING: Removing unreachable block (ram,0x000102f34458) */
/* WARNING: Removing unreachable block (ram,0x000102f344f8) */
/* WARNING: Removing unreachable block (ram,0x000102f34464) */
/* WARNING: Removing unreachable block (ram,0x000102f344bc) */
/* WARNING: Removing unreachable block (ram,0x000102f3450c) */
/* WARNING: Removing unreachable block (ram,0x000102f344c4) */
/* WARNING: Removing unreachable block (ram,0x000102f3434c) */
/* WARNING: Removing unreachable block (ram,0x000102f34354) */
/* WARNING: Removing unreachable block (ram,0x000102f34368) */
/* WARNING: Removing unreachable block (ram,0x000102f34370) */
/* WARNING: Removing unreachable block (ram,0x000102f344f0) */

void FUN_102f3c1f8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102f3a948();
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
  }
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar17 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
    puVar18 = puVar3;
  }
  else {
    func_0x000107c61434(param_1);
    lVar16 = 4;
    do {
      uVar15 = lVar16 - 4;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346c0);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(puVar3 + lVar16 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar15;
        param_2 = puVar3;
        func_0x00010103193c();
      }
      puVar1 = (undefined *)(lVar16 - 3);
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346b8);
        (*pcVar4)();
      }
      uVar15 = uVar6;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c61170(uVar6);
      }
      else {
        uVar7 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        uVar15 = uVar7 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)param_2 >> 0x38 & 0xf;
        }
        puVar18 = param_2;
        if (uVar15 == 0) break;
        puVar18 = (undefined *)0x112d67d90;
        FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
        func_0x000107c61174();
        uVar15 = uVar6;
        FUN_102f48440();
        if (lVar10 != 0) {
          lVar8 = lVar10;
          func_0x000107c61174();
          uVar11 = uVar15;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (uVar11 != 0) {
            uVar15 = uVar11;
            func_0x000107c3e544();
            func_0x000107c61180();
            if (uVar15 == 0) {
              puVar18 = (undefined *)0xe000000000000000;
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(uVar15);
            }
            uVar15 = uVar11;
            func_0x000107c51d04();
            func_0x000107c61180();
            if (uVar15 == 0) {
              func_0x000107c61170(uVar11);
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(uVar11);
              func_0x000107c61170(uVar15);
            }
            break;
          }
          lVar9 = lVar8;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (lVar9 != 0) {
            lVar10 = lVar9;
            func_0x000107c3e544();
            func_0x000107c61180();
            if (lVar10 == 0) {
              puVar18 = (undefined *)0xe000000000000000;
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(lVar10);
            }
            lVar10 = lVar9;
            func_0x000107c51d04();
            func_0x000107c61180();
            if (lVar10 == 0) {
              func_0x000107c61170(lVar9);
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(lVar9);
              func_0x000107c61170(lVar10);
            }
            break;
          }
          func_0x000107c61170(lVar8);
        }
        func_0x000107c61174();
        puVar18 = puVar5;
        func_0x000107c61558();
        uVar11 = uVar7;
        puVar12 = param_2;
        func_0x000100029284();
        uVar14 = (ulong)~(uint)puVar12 & 1;
        lVar8 = *(long *)(puVar5 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346bc);
          (*pcVar4)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar8) {
          FUN_102f39300(lVar8,puVar18);
          uVar11 = uVar7;
          puVar13 = param_2;
          func_0x000100029284();
          if (((uint)puVar12 & 1) != ((uint)puVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f34d98);
            (*pcVar4)();
          }
        }
        else {
          puVar13 = puVar12;
          if (((ulong)puVar18 & 1) == 0) {
            FUN_102f39190();
          }
        }
        if (((ulong)puVar12 & 1) != 0) {
          *(ulong *)(*(long *)(puVar5 + 0x38) + uVar11 * 8) = uVar15;
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar15);
          puVar18 = param_2;
          break;
        }
        *(ulong *)(puVar5 + (uVar11 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar5 + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar11 * 0x10);
        *puVar2 = uVar7;
        puVar2[1] = (ulong)param_2;
        *(ulong *)(*(long *)(puVar5 + 0x38) + uVar11 * 8) = uVar15;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar15);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f346c4);
          (*pcVar4)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        param_2 = puVar13;
      }
      lVar16 = lVar16 + 1;
      puVar18 = puVar3;
    } while (puVar1 != puVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar18);
  return;
}



/* Entry: 102f3c204; end: 102f3c23b;  */

void FUN_102f3c204(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f3c23c; end: 102f3c2c7;  */

void FUN_102f3c23c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102f3cab4;
  plVar9[0x1d] = lVar3;
  plVar9[0x1e] = lVar6;
  func_0x000107c614f0(uVar7);
  piVar10 = *(int **)(lVar4 + 0x38);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[0x1f] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_102f32f4c;
                    /* WARNING: Could not recover jumptable at 0x000102f32f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar8,plVar9 + 2,uVar2,uVar5,0,uVar7,lVar4);
  return;
}



/* Entry: 102f3c2c8; end: 102f3c2cf;  */

void FUN_102f3c2c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102f3c2d0; end: 102f3c313;  */

void FUN_102f3c2d0(void)

{
  long unaff_x20;
  
  FUN_102f35a8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined1 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102f3c314; end: 102f3c32f;  */

void FUN_102f3c314(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_1105eac20;
  func_0x000107c613fc(&UNK_1105eac20,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uStack_50 = 0x102f3c3d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105eac38;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000100d2c2cc(uVar1,uVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar3);
  func_0x0001000d76cc(&UNK_10db65af0,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102f3c330; end: 102f3c36b;  */

void FUN_102f3c330(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f3c36c; end: 102f3c377;  */

void FUN_102f3c36c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_a0;
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_70,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    puVar5 = &UNK_1105eab80;
    func_0x000107c613fc(&UNK_1105eab80,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar4;
    uStack_80 = 0x102f3cad4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105eab98;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000100d2c2cc(uVar2,uVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c420a8(uVar3);
    func_0x000107c60bd0(ppuVar6);
  }
  return;
}



/* Entry: 102f3c378; end: 102f3c3a3;  */

void FUN_102f3c378(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f3c3a4; end: 102f3c3a7;  */

void FUN_102f3c3a4(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102f3c3a8; end: 102f3c3fb;  */

void FUN_102f3c3a8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}


