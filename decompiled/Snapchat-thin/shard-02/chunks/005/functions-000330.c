/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dbf6c0; end: 101dbf727;  */

void FUN_101dbf6c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101dbf724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbf728; end: 101dbf77b;  */

void FUN_101dbf728(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x160) = param_1;
  *(undefined1 *)(lVar1 + 0x169) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbf77c,0,0);
  return;
}



/* Entry: 101dbf77c; end: 101dbfbab;  */

void FUN_101dbf77c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  
  puVar18 = *(undefined **)(unaff_x22 + 0x160);
  if (*(char *)(unaff_x22 + 0x169) == '\x01') {
    *(undefined **)(unaff_x22 + 0xa0) = puVar18;
    iVar5 = 2;
    puVar11 = (undefined1 *)0x12;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      puVar11 = (undefined1 *)0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xa0,puVar11,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x150));
  }
  else {
    puVar11 = *(undefined1 **)(unaff_x22 + 0x150);
    func_0x000107c61574();
    if (puVar18 != (undefined *)0x0) {
      lVar8 = *(long *)(unaff_x22 + 0x160);
      uVar9 = *(ulong *)(unaff_x22 + 0x130);
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbfba0);
          (*pcVar4)();
        }
        uVar6 = *(undefined8 *)(uVar9 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = 0;
        FUN_101dc0444(0,uVar9,&PTR_PTR_1126b25c0,0x112d50c78);
        uVar9 = *(ulong *)(unaff_x22 + 0x130);
      }
      func_0x000107c6142c(uVar9);
      uVar7 = uVar6;
      func_0x000107c5ca90(uVar6);
      func_0x000107c61180();
      func_0x000107c59df8(lVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      lVar13 = lVar8;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (lVar13 != 0) {
        lVar17 = lVar13;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbfba8);
          (*pcVar4)();
        }
        lVar13 = *(long *)(unaff_x22 + 0xd8);
        puVar18 = PTR_PTR_1126b25e8;
        func_0x000107c610f8(PTR_PTR_1126b25e8);
        func_0x000107c453e4();
        func_0x000107c55388(lVar17);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(lVar17);
        if (lVar13 != 0) {
          lVar13 = *(long *)(unaff_x22 + 0xd8);
          func_0x000107c4d1e4();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbfbac);
            (*pcVar4)();
          }
          func_0x000107c449a8();
          func_0x000107c61170(lVar13);
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar2 = *(undefined8 *)(unaff_x22 + 200);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar3 = *(undefined1 *)(unaff_x22 + 0x168);
        func_0x000107c5d38c(uVar6);
        func_0x000107c5d620(uVar15);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar6);
        func_0x000101dc0624(uVar12,uVar3);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(uVar2);
        func_0x000107c615e8(uVar7);
        func_0x000107c615e8(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101dbfb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(lVar8);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbfba4);
      (*pcVar4)();
    }
    func_0x000101b9d5ac();
    puVar18 = &UNK_1106c31f8;
    func_0x000107c613f8(&UNK_1106c31f8,puVar11,0,0);
    *puVar11 = 0x32;
    func_0x000107c61654();
  }
  lVar13 = *(long *)(unaff_x22 + 0x138);
  lVar8 = 0;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar8 + -8);
  uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar9);
  func_0x000107c5eec4(uVar9);
  func_0x000107c5eeac();
  (**(code **)(lVar17 + 8))(uVar9,lVar8);
  func_0x000107c615c0(uVar9);
  if (0 < lVar13) {
    lVar8 = 0;
    uVar9 = *(ulong *)(unaff_x22 + 0x130);
    lVar13 = *(long *)(unaff_x22 + 0x138);
    while( true ) {
      if ((uVar9 & 0xc000000000000001) != 0) {
        FUN_101dc0444(lVar8,*(undefined8 *)(unaff_x22 + 0x130),&PTR_PTR_1126b25c0,0x112d50c78);
        func_0x000107c615e8();
      }
      if (lVar8 + 1 == lVar13) break;
      lVar8 = lVar8 + 1;
      lVar13 = *(long *)(unaff_x22 + 0x138);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    puVar10 = *(undefined1 **)(unaff_x22 + 0x130);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar15 = *(undefined8 *)(unaff_x22 + 200);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x168);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c();
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar10,0,0);
    *puVar10 = 0x32;
    func_0x000107c61654();
    func_0x000107c614ac(puVar18);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    func_0x000101dc0624(uVar7,uVar3);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101dbfabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbfb74);
  (*pcVar4)();
}



/* Entry: 101dbfbac; end: 101dbfc07;  */

void FUN_101dbfbac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101dbfc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbfc08; end: 101dbfc23;  */

void FUN_101dbfc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbfc24,0,0);
  return;
}



/* Entry: 101dbfc24; end: 101dbfe0b;  */

void FUN_101dbfc24(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *apuStack_60 [2];
  
  puVar4 = *(undefined1 **)(unaff_x22 + 0x88);
  apuStack_60[0] = (undefined8 *)0x0;
  func_0x000107c5fc50(puVar4,apuStack_60,PTR___sSSN_11034da80);
  puVar10 = apuStack_60[0];
  *(undefined8 **)(unaff_x22 + 0xa8) = apuStack_60[0];
  if (apuStack_60[0] != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101dbfe0c;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,1);
    func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
    puVar6 = puVar10;
    func_0x000103bcb688();
    uVar7 = *puVar6;
    uVar3 = puVar6[1];
    func_0x000107c61434(uVar3);
    func_0x000107c5fadc(uVar7,uVar3);
    func_0x000107c6142c(uVar3);
    puVar6 = puVar10;
    func_0x000107e666f0(puVar10,uVar9,uVar1,uVar7,*(undefined8 *)(lVar2 + 0x50));
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar10);
    puVar8 = &UNK_110484f10;
    func_0x000107c613fc(&UNK_110484f10,0x18,7);
    puVar10 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar8 + 0x10) = lVar5;
    *(code **)(unaff_x22 + 0x70) = FUN_101dc06e0;
    *(undefined **)(unaff_x22 + 0x78) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100bcda3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110484f28;
    func_0x000107c60bc4(puVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5dc64(puVar6);
    func_0x000107c60bd0(puVar10);
    func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
  *puVar4 = 0x33;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dbfe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbfe0c; end: 101dbfe77;  */

void FUN_101dbfe0c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101dbfe78;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x101dbfeb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dbfe78; end: 101dbfee3;  */

void FUN_101dbfe78(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000101dbfeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Entry: 101dbfee4; end: 101dbff33;  */

void FUN_101dbfee4(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dbff34;
  plVar1[0x15] = param_1;
  plVar1[0x16] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbe84c,0,0);
  return;
}



/* Entry: 101dbff34; end: 101dbff7b;  */

void FUN_101dbff34(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dbff78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dbff7c; end: 101dc00b3;  */

void FUN_101dbff7c(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lStack_38;
  
  if (param_2 == 0) {
    if (param_1 != (undefined1 *)0x0) {
      lStack_38 = 0;
      uVar1 = 0;
      FUN_101dc06a0(0,0x112d63638,&PTR_PTR_1126af4d0);
      func_0x000107c5fc50(param_1,&lStack_38,uVar1);
      if (lStack_38 != 0) {
        **(long **)(*(long *)(param_3 + 0x40) + 0x28) = lStack_38;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
        return;
      }
    }
    func_0x000101b9d5ac();
    puVar2 = &UNK_1106c31f8;
    func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
    *param_1 = 0x35;
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar2;
  }
  else {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar1);
  return;
}



/* Entry: 101dc00b4; end: 101dc0187;  */

void FUN_101dc00b4(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar4 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar4 != (undefined1 *)0x0) {
    **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = param_1;
    func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
    return;
  }
  func_0x000101b9d5ac();
  puVar1 = &UNK_1106c31f8;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0x31;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar2);
  return;
}



/* Entry: 101dc0188; end: 101dc01f3;  */

void FUN_101dc0188(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_101dc06a0(0,0x112d62390,&PTR_PTR_1126aff40);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101dc01f4; end: 101dc020b;  */

void FUN_101dc01f4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc020c,0,0);
  return;
}



/* Entry: 101dc020c; end: 101dc02d3;  */

void FUN_101dc020c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101dc0254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dc02d4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110484ec0;
  func_0x000107c613fc(&UNK_110484ec0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101dc0638,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dc02d4; end: 101dc0313;  */

void FUN_101dc02d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc0314,0,0);
  return;
}



/* Entry: 101dc0314; end: 101dc033b;  */

void FUN_101dc0314(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dc0320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dc033c; end: 101dc0403;  */

void FUN_101dc033c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101dc0384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dc0404;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110484ee8;
  func_0x000107c613fc(&UNK_110484ee8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101dc0644,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dc0404; end: 101dc0443;  */

void FUN_101dc0404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dc06f0,0,0);
  return;
}



/* Entry: 101dc0444; end: 101dc05ff;  */

ulong FUN_101dc0444(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc0528);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc052c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101dc06a0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc0600);
  (*pcVar2)();
}



/* Entry: 101dc0600; end: 101dc064f;  */

void FUN_101dc0600(undefined1 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar5 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar5 != (undefined1 *)0x0) {
    **(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28) = param_1;
    func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
  func_0x000101b9d5ac();
  puVar1 = &UNK_1106c31f8;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0x31;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 101dc0650; end: 101dc069f;  */

void FUN_101dc0650(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dc06a0; end: 101dc06df;  */

void FUN_101dc06a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dc06e0; end: 101dc06fb;  */

void FUN_101dc06e0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  long lStack_38;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (undefined1 *)0x0) {
      lStack_38 = 0;
      uVar1 = 0;
      FUN_101dc06a0(0,0x112d63638,&PTR_PTR_1126af4d0);
      func_0x000107c5fc50(param_1,&lStack_38,uVar1);
      if (lStack_38 != 0) {
        **(long **)(*(long *)(lVar5 + 0x40) + 0x28) = lStack_38;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
        return;
      }
    }
    func_0x000101b9d5ac();
    puVar2 = &UNK_1106c31f8;
    func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
    *param_1 = 0x35;
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar2;
  }
  else {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar1);
  return;
}



/* Entry: 101dc06fc; end: 101dc073f;  */

long FUN_101dc06fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101dc0740; end: 101dc081f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101dc0740(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_101dc06fc(param_1,unaff_x20 + _DAT_112e2cf80);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 101dc0820; end: 101dc0853;  */

void FUN_101dc0820(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dc0854; end: 101dc0863; -[MemoriesCollageSnapdocGeneratorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc0854(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112e2cf80))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2cf80));
  return;
}



/* Entry: 101dc0864; end: 101dc0e73;  */

void FUN_101dc0864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  return;
}



/* Entry: 101dc0e74; end: 101dc0e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101dc0e74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d62478,&UNK_10d928340);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112e2d0b8,&UNK_10da16190);
  func_0x0001000bda74();
  lVar7 = 0;
  FUN_101dc4fd0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined1 *)(lVar8 + _DAT_112e2d160) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e2d120) = uVar13;
  *(undefined8 *)(lVar8 + _DAT_112e2d128) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112e2d130) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112e2d138) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112e2d140) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112e2d148) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112e2d150) = uVar6;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar13);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + _DAT_112e2d158) = puVar9;
  plVar10 = &lStack_70;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c5e370(uVar11);
  func_0x000107c61180();
  puVar9 = &UNK_1104850c8;
  func_0x000107c613fc(&UNK_1104850c8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,plVar10);
  pcStack_80 = FUN_101dc1048;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1104850e0;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  uVar13 = uVar11;
  func_0x000107c5c320(uVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e924(uVar13);
  func_0x000107c61170(plVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar13);
  return plVar10;
}



/* Entry: 101dc0e88; end: 101dc0ebf;  */

void FUN_101dc0e88(long param_1)

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



/* Entry: 101dc0ec0; end: 101dc0edb;  */

void FUN_101dc0ec0(long param_1,long param_2)

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



/* Entry: 101dc0edc; end: 101dc1023;  */

/* WARNING: Possible PIC construction at 0x000101dc0ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc0ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc0f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc0f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc0f0c) */
/* WARNING: Removing unreachable block (ram,0x000101dc0efc) */
/* WARNING: Removing unreachable block (ram,0x000101dc0eec) */
/* WARNING: Removing unreachable block (ram,0x000101dc0f1c) */

void FUN_101dc0edc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dc1024; end: 101dc1047;  */

void FUN_101dc1024(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101dc0950();
  *param_1 = param_2;
  return;
}



/* Entry: 101dc1048; end: 101dc1057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc1048(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c50554(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101dc1058; end: 101dc1203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101dc1058(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined8 auStack_80 [6];
  
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + lVar4);
  func_0x000107c5ee8c();
  (**(code **)(lVar10 + 8))(&stack0xffffffffffffffb0 + lVar4,lVar6);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc11fc);
    (*pcVar5)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e2d0c0) + _DAT_112fd9a98);
      uVar8 = *puVar1;
      uVar2 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e2d0c0) + _DAT_112fd9a88);
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      puVar7 = PTR_PTR_1126c39b0;
      func_0x000107c610f8(PTR_PTR_1126c39b0);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar8,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c5fadc(uVar9,uVar3);
      func_0x000107c6142c(uVar3);
      *(undefined8 *)((long)auStack_80 + lVar4 + 0x20) = 0;
      *(undefined8 *)((long)auStack_80 + lVar4 + 0x28) = 0;
      *(undefined8 *)((long)auStack_80 + lVar4 + 0x10) = 0x20000;
      *(undefined8 *)((long)auStack_80 + lVar4 + 0x18) = 0;
      *(undefined8 *)((long)auStack_80 + lVar4) = 0;
      *(undefined8 *)((long)auStack_80 + lVar4 + 8) = uVar9;
      func_0x000107c46ac8(puVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc1204);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc1200);
  (*pcVar5)();
}



/* Entry: 101dc1204; end: 101dc1237; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand getGalleryCollectionSnapClientData] */

void FUN_101dc1204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101dc1058();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101dc1238; end: 101dc124f; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand getGeneratedSnapsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101dc1238(long param_1)

{
  return *(long *)(param_1 + _DAT_112e2d0c8) != 0;
}



/* Entry: 101dc1250; end: 101dc1257; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand getTotalGenerationsCount] */

undefined8 FUN_101dc1250(void)

{
  return 1;
}



/* Entry: 101dc1258; end: 101dc125f; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand getClientExpectedTotalGenerationsCount] */

undefined8 FUN_101dc1258(void)

{
  return 1;
}



/* Entry: 101dc1260; end: 101dc1267; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand priority] */

undefined8 FUN_101dc1260(void)

{
  return 0;
}



/* Entry: 101dc1268; end: 101dc126f; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand clientProcessingBitMaskType] */

undefined8 FUN_101dc1268(void)

{
  return 0x20000;
}



/* Entry: 101dc1270; end: 101dc1433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101dc1270(double param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112e2d0e0;
  lVar6 = lVar5 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112e2d0e0,auStack_78,0,0);
  func_0x0001009f0578(unaff_x20 + lVar3,puVar7);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000d1dcc(puVar7);
    lVar3 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    func_0x000107c5eea0(lVar5);
    func_0x000107c5ee68(lVar6);
    pcVar4 = *(code **)(lVar8 + 8);
    (*pcVar4)(lVar5,lVar1);
    (*pcVar4)(lVar6,lVar1);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dc142c);
      (*pcVar4)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dc1430);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dc1434);
      (*pcVar4)();
    }
    lVar3 = (long)param_1;
  }
  return lVar3;
}



/* Entry: 101dc1434; end: 101dc1467; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand getClientGenLatency] */

undefined8 FUN_101dc1434(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101dc1270();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101dc1468; end: 101dc1607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101dc1468(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&puStack_70 - extraout_x8;
  func_0x000107c5eea0(lVar5);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,0,1,lVar1);
  lVar1 = _DAT_112e2d0e0;
  func_0x000107c61428(unaff_x20 + _DAT_112e2d0e0,&puStack_70,0x21,0);
  func_0x000100ed9cbc(lVar5,unaff_x20 + lVar1);
  func_0x000107c614a8(&puStack_70);
  lVar1 = unaff_x20 + _DAT_112e2d0d0;
  func_0x000107c61618();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e2d0c0);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = &UNK_110485220;
  func_0x000107c613fc(&UNK_110485220,0x20,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  uStack_50 = 0x101dc207c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_110485238;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_48;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c408f0(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar1);
  return puVar2;
}



/* Entry: 101dc1608; end: 101dc166f;  */

void FUN_101dc1608(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c61174(param_2);
    FUN_101dc209c(param_3,param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101dc1670; end: 101dc16a3; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand execute] */

void FUN_101dc1670(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101dc1468();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101dc16a4; end: 101dc1903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc16a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2d0c8);
  *(undefined8 *)(unaff_x20 + _DAT_112e2d0c8) = param_1;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2d0d8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e2d0d8))[1];
  puVar5 = &UNK_110485130;
  func_0x000107c613fc(&UNK_110485130,0x28,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar6 = &UNK_110485158;
  func_0x000107c613fc(&UNK_110485158,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101dc1ffc;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101dc2008;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x101dc2098;
  puStack_88 = &UNK_110485170;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c61580(uVar1,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1104851a8;
  func_0x000107c613fc(&UNK_1104851a8,0x28,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  puVar9 = &UNK_1104851d0;
  func_0x000107c613fc(&UNK_1104851d0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_101dc2070;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = (code *)0x101dc2094;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104851e8;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x86,0x58,0x27,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dc1900);
    (*pcVar3)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x86,100,0x14,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101dc1904);
  (*pcVar3)();
}



/* Entry: 101dc1904; end: 101dc1dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc1904(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  lVar9 = *(long *)(param_2 + _DAT_112e2d0c0);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112fd9a98);
  uVar8 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(uVar8,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x746172656e656720,0xee003d64496e6f69);
  puVar2 = (undefined8 *)(lVar9 + _DAT_112fd9a88);
  uVar8 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(uVar8,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(0xe700000000000000);
  uVar8 = *puVar2;
  uVar5 = puVar2[1];
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  uVar3 = *(undefined8 *)(lVar9 + _DAT_112fd9aa8);
  uVar7 = ((undefined8 *)(lVar9 + _DAT_112fd9aa8))[1];
  func_0x000103a6d278(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000103a6cee4(uVar8,uVar5,uVar4,uVar6,0,uVar3,uVar7,0);
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 101dc1dfc; end: 101dc1e4b; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand generationDidFinish:] */

/* WARNING: Possible PIC construction at 0x000101dc1e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc1e38) */

void FUN_101dc1dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101dc16a4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101dc1e4c; end: 101dc1e53; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand disposeUponCompletion] */

undefined8 FUN_101dc1e4c(void)

{
  return 1;
}



/* Entry: 101dc1e54; end: 101dc1eb3; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand init] */

void FUN_101dc1e54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesAISnapsManagerImpl.SCMemoriesAISnapsGenerationCommand",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc1e80);
  (*pcVar1)();
}



/* Entry: 101dc1eb4; end: 101dc1f1f; -[_TtC28SCMemoriesAISnapsManagerImpl34SCMemoriesAISnapsGenerationCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101dc1eb4(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2d0c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2d0c8));
  func_0x000107c61610(param_1 + _DAT_112e2d0d0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d0d8 + 8));
  param_1 = param_1 + _DAT_112e2d0e0;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101dc1f20; end: 101dc1f27;  */

void FUN_101dc1f20(void)

{
  if (lRam0000000112e2d110 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e690d28);
  return;
}



/* Entry: 101dc1f28; end: 101dc1f5f;  */

void FUN_101dc1f28(undefined8 param_1)

{
  if (lRam0000000112e2d110 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e690d28);
  return;
}



/* Entry: 101dc1f60; end: 101dc1ffb;  */

void FUN_101dc1f60(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10da161c8;
  puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_38 = &UNK_10da161e0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 101dc1ffc; end: 101dc2007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc1ffc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  pcVar8 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c602fc(0x19,lVar10,pcVar8,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(0xe000000000000000);
  lVar10 = *(long *)(lVar10 + _DAT_112e2d0c0);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112fd9a98);
  uVar9 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(uVar9,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x746172656e656720,0xee003d64496e6f69);
  puVar2 = (undefined8 *)(lVar10 + _DAT_112fd9a88);
  uVar9 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(uVar9,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(0xe700000000000000);
  uVar9 = *puVar2;
  uVar5 = puVar2[1];
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  uVar3 = *(undefined8 *)(lVar10 + _DAT_112fd9aa8);
  uVar7 = ((undefined8 *)(lVar10 + _DAT_112fd9aa8))[1];
  func_0x000103a6d278(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000103a6cee4(uVar9,uVar5,uVar4,uVar6,0,uVar3,uVar7,0);
  (*pcVar8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 101dc2008; end: 101dc2027;  */

void FUN_101dc2008(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dc2028; end: 101dc2043;  */

void FUN_101dc2028(long param_1,long param_2)

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



/* Entry: 101dc2044; end: 101dc206f;  */

void FUN_101dc2044(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dc2070; end: 101dc209b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc2070(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long alStack_78 [3];
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  pcVar6 = *(code **)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c614b0(param_1,lVar11,pcVar6,*(undefined8 *)(unaff_x20 + 0x20));
    lVar7 = param_1;
    func_0x000107c5ed2c();
    lVar8 = lVar7;
    func_0x000107c3fcb0();
    func_0x000107c614ac(param_1);
    func_0x000107c61170(lVar7);
    if (lVar8 == 0x11) {
      alStack_78[1] = 0;
      alStack_78[2] = 0xe000000000000000;
      func_0x000107c602fc(0x19);
      func_0x000107c6142c(alStack_78[2]);
      alStack_78[1] = 0x3d6449736e656c;
      alStack_78[2] = 0xe700000000000000;
      lVar11 = *(long *)(lVar11 + _DAT_112e2d0c0);
      uVar10 = *(undefined8 *)(lVar11 + _DAT_112fd9a98);
      uVar9 = ((undefined8 *)(lVar11 + _DAT_112fd9a98))[1];
      func_0x000107c61434(uVar9);
      func_0x000107c5fb78(uVar10,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c5fb78(0x746172656e656720,0xee003d64496e6f69);
      uVar10 = *(undefined8 *)(lVar11 + _DAT_112fd9a88);
      uVar9 = ((undefined8 *)(lVar11 + _DAT_112fd9a88))[1];
      func_0x000107c61434(uVar9);
      func_0x000107c5fb78(uVar10,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(alStack_78[2]);
      uVar10 = 1;
      goto LAB_101dc1d44;
    }
  }
  alStack_78[1] = 0;
  alStack_78[2] = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(alStack_78[2]);
  alStack_78[1] = 0xd000000000000023;
  alStack_78[2] = 0x800000010f0109a0;
  lVar11 = *(long *)(lVar11 + _DAT_112e2d0c0);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_112fd9a98);
  uVar9 = ((undefined8 *)(lVar11 + _DAT_112fd9a98))[1];
  func_0x000107c61434(uVar9);
  func_0x000107c5fb78(uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c6142c(alStack_78[2]);
  alStack_78[1] = 0;
  alStack_78[2] = 0xe000000000000000;
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(alStack_78[2]);
  alStack_78[1] = 0x69746172656e6567;
  alStack_78[2] = 0xed00003d64496e6f;
  uVar10 = *(undefined8 *)(lVar11 + _DAT_112fd9a88);
  uVar9 = ((undefined8 *)(lVar11 + _DAT_112fd9a88))[1];
  func_0x000107c61434(uVar9);
  func_0x000107c5fb78(uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x3d726f72726520,0xe700000000000000);
  alStack_78[0] = param_1;
  func_0x000107c614b0(param_1);
  uVar10 = 0x112d511f8;
  func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
  func_0x000107c5fb18(alStack_78,uVar10);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(alStack_78[2]);
  uVar10 = 2;
LAB_101dc1d44:
  uVar9 = *(undefined8 *)(lVar11 + _DAT_112fd9a88);
  uVar3 = ((undefined8 *)(lVar11 + _DAT_112fd9a88))[1];
  uVar1 = *(undefined8 *)(lVar11 + _DAT_112fd9a98);
  uVar4 = ((undefined8 *)(lVar11 + _DAT_112fd9a98))[1];
  uVar2 = *(undefined8 *)(lVar11 + _DAT_112fd9aa8);
  uVar5 = ((undefined8 *)(lVar11 + _DAT_112fd9aa8))[1];
  func_0x000103a6d278(0);
  func_0x000107c610f8();
  func_0x000107c614b0(param_1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000103a6cee4(uVar9,uVar3,uVar1,uVar4,uVar10,uVar2,uVar5,param_1);
  (*pcVar6)();
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 101dc209c; end: 101dc2197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc209c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  if ((*(byte *)(unaff_x20 + _DAT_112e2d160) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e2d160) = 1;
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c50554(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
  }
  puVar1 = &UNK_110485338;
  func_0x000107c613fc(&UNK_110485338,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x20;
  func_0x0001001ca524(0x20,0,0x48,4,0,0,&UNK_10da16288,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 101dc2198; end: 101dc2213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc2198(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000d224c(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c50554(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101dc2214; end: 101dc226f;  */

void FUN_101dc2214(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_3;
  *(long *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dc2270;
  plVar1[0x2d] = param_4;
  plVar1[0x2e] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc27e8,0,0);
  return;
}



/* Entry: 101dc2270; end: 101dc2307;  */

void FUN_101dc2270(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x40) = param_1;
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x50) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_101dc2308;
    lVar3 = *(long *)(lVar3 + 0x28);
    plVar1[0xd] = param_1;
    plVar1[0xe] = lVar3;
    pcVar2 = FUN_101dc33c0;
  }
  else {
    pcVar2 = FUN_101dc2698;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101dc2308; end: 101dc2367;  */

void FUN_101dc2308(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101dc2368;
  }
  else {
    pcVar1 = FUN_101dc2730;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dc2368; end: 101dc24bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc2368(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x22;
  ulong unaff_x29;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_101dc3668(uVar9,*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    lVar3 = lVar10;
    func_0x000107c5ed2c(lVar10);
    func_0x000107c42d78(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c4d664(uVar9);
    func_0x000107c61170(puVar2);
    func_0x000107c614ac(lVar10);
    func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101dc2428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar10 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  func_0x000107c614f0();
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101dc24c0;
  unaff_x29 = unaff_x29 & 0xefffffffffffffff;
  plVar7 = (long *)0x20;
  func_0x000107c615b8();
  plVar5[2] = (long)plVar7;
  *plVar7 = (long)plVar5;
  plVar7[1] = (long)&UNK_103bd6700;
  unaff_x29 = unaff_x29 & 0xffffffff;
  piVar8 = *(int **)(lVar10 + 8);
  iVar1 = *piVar8;
  puVar6 = (undefined8 *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  plVar7[2] = (long)puVar6;
  *puVar6 = plVar7;
  puVar6[1] = &UNK_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (0,0,uVar9,0x4d,0,0,0,(int)(unaff_x29 >> 0x20),unaff_x29 & 0xffffffffff000000,0,0,0,
             uVar4,lVar10);
  return;
}



/* Entry: 101dc24c0; end: 101dc2543;  */

void FUN_101dc24c0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  if (unaff_x20 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar3);
    pcVar1 = FUN_101dc2544;
  }
  else {
    func_0x000107c615e8(uVar3);
    pcVar1 = FUN_101dc25e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dc2544; end: 101dc25df;  */

void FUN_101dc2544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000107c4d664(uVar5,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101dc25dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc25e0; end: 101dc2697;  */

void FUN_101dc25e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  uVar2 = uVar4;
  func_0x000107c5ed2c(uVar4);
  func_0x000107c42d78(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(uVar3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c614ac(uVar4);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101dc2694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc2698; end: 101dc272f;  */

void FUN_101dc2698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  uVar2 = uVar4;
  func_0x000107c5ed2c(uVar4);
  func_0x000107c42d78(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(uVar3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c614ac(uVar4);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101dc272c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc2730; end: 101dc27cf;  */

void FUN_101dc2730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  uVar2 = uVar4;
  func_0x000107c5ed2c(uVar4);
  func_0x000107c42d78(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(uVar3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c614ac(uVar4);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101dc27cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc27d0; end: 101dc27e7;  */

void FUN_101dc27d0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_1;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc27e8,0,0);
  return;
}



/* Entry: 101dc27e8; end: 101dc30bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc27e8(void)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte **ppbVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long unaff_x22;
  long lVar27;
  byte *pbStack_68;
  ulong uStack_60;
  
  puVar2 = (ulong *)(*(long *)(unaff_x22 + 0x168) + _DAT_112fd9a98);
  pbVar21 = (byte *)*puVar2;
  pbVar19 = (byte *)puVar2[1];
  pbVar17 = (byte *)((ulong)pbVar21 & 0xffffffffffff);
  pbVar20 = (byte *)((ulong)pbVar19 >> 0x38 & 0xf);
  pbVar18 = pbVar17;
  if (((ulong)pbVar19 & 0x2000000000000000) != 0) {
    pbVar18 = pbVar20;
  }
  if (pbVar18 == (byte *)0x0) goto LAB_101dc2a74;
  if (((ulong)pbVar19 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar19 >> 0x3d & 1) != 0) {
      pbStack_68 = pbVar21;
      uStack_60 = (ulong)pbVar19 & 0xffffffffffffff;
      uVar25 = (uint)pbVar21 & 0xff;
      if (uVar25 == 0x2b) {
        if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101dc30bc);
          (*pcVar10)();
        }
        pbVar20 = pbVar20 + -1;
        if (pbVar20 == (byte *)0x0) goto LAB_101dc2a60;
        uVar24 = 0;
        pbVar21 = (byte *)((ulong)&pbStack_68 | 1);
        do {
          if (((9 < *pbVar21 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar24, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*pbVar21 - 0x30), uVar24 = uVar23 + uVar1,
             CARRY8(uVar23,uVar1))) goto LAB_101dc2a60;
          uVar25 = 0;
          pbVar20 = pbVar20 + -1;
          pbVar21 = pbVar21 + 1;
        } while (pbVar20 != (byte *)0x0);
      }
      else if (uVar25 == 0x2d) {
        if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101dc30b4);
          (*pcVar10)();
        }
        pbVar20 = pbVar20 + -1;
        if (pbVar20 == (byte *)0x0) {
LAB_101dc2a60:
          uVar25 = 1;
        }
        else {
          uVar24 = 0;
          pbVar21 = (byte *)((ulong)&pbStack_68 | 1);
          do {
            if (((9 < *pbVar21 - 0x30) ||
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar24, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
               (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*pbVar21 - 0x30),
               uVar24 = uVar23 - uVar1, uVar23 < uVar1)) goto LAB_101dc2a60;
            uVar25 = 0;
            pbVar20 = pbVar20 + -1;
            pbVar21 = pbVar21 + 1;
          } while (pbVar20 != (byte *)0x0);
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) goto LAB_101dc2a60;
        uVar24 = 0;
        ppbVar22 = &pbStack_68;
        do {
          if (((9 < *(byte *)ppbVar22 - 0x30) ||
              (auVar9._8_8_ = 0, auVar9._0_8_ = uVar24, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
             (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30),
             uVar24 = uVar23 + uVar1, CARRY8(uVar23,uVar1))) goto LAB_101dc2a60;
          uVar25 = 0;
          pbVar20 = pbVar20 + -1;
          ppbVar22 = (byte **)((long)ppbVar22 + 1);
        } while (pbVar20 != (byte *)0x0);
      }
      goto LAB_101dc2a68;
    }
    if (((ulong)pbVar21 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      pbVar21 = (byte *)(((ulong)pbVar19 & 0xfffffffffffffff) + 0x20);
      pbVar19 = pbVar17;
    }
    if (*pbVar21 != 0x2b) {
      if (*pbVar21 != 0x2d) {
        if (pbVar19 == (byte *)0x0) goto LAB_101dc2a74;
        uVar24 = 0;
        pbVar18 = pbVar21;
        while (pbVar18 != (byte *)0x0) {
          if (((9 < *pbVar21 - 0x30) ||
              (auVar8._8_8_ = 0, auVar8._0_8_ = uVar24, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
             (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*pbVar21 - 0x30), uVar24 = uVar23 + uVar1,
             CARRY8(uVar23,uVar1))) goto LAB_101dc2a74;
          pbVar19 = pbVar19 + -1;
          pbVar21 = pbVar21 + 1;
          pbVar18 = pbVar19;
        }
        goto LAB_101dc2bc4;
      }
      pbVar18 = pbVar19 + -1;
      if ((long)pbVar19 < 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101dc30b0);
        (*pcVar10)();
      }
      if (pbVar18 != (byte *)0x0) {
        uVar24 = 0;
        do {
          pbVar21 = pbVar21 + 1;
          if (((9 < *pbVar21 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar24, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*pbVar21 - 0x30), uVar24 = uVar23 - uVar1,
             uVar23 < uVar1)) goto LAB_101dc2a74;
          pbVar18 = pbVar18 + -1;
        } while (pbVar18 != (byte *)0x0);
        goto LAB_101dc2bc4;
      }
      goto LAB_101dc2a74;
    }
    pbVar18 = pbVar19 + -1;
    if ((long)pbVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x101dc30b8);
      (*pcVar10)();
    }
    if (pbVar18 == (byte *)0x0) goto LAB_101dc2a74;
    uVar24 = 0;
    do {
      pbVar21 = pbVar21 + 1;
      if (((9 < *pbVar21 - 0x30) ||
          (auVar6._8_8_ = 0, auVar6._0_8_ = uVar24, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
         (uVar23 = uVar24 * 10, uVar1 = (ulong)(byte)(*pbVar21 - 0x30), uVar24 = uVar23 + uVar1,
         CARRY8(uVar23,uVar1))) goto LAB_101dc2a74;
      pbVar18 = pbVar18 + -1;
    } while (pbVar18 != (byte *)0x0);
LAB_101dc2bc4:
    func_0x0001000d224c(unaff_x22 + 0x150);
    lVar27 = *(long *)(unaff_x22 + 0x150);
    *(long *)(unaff_x22 + 0x178) = lVar27;
    if (lVar27 != 0) {
      uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x170) + _DAT_112e2d138);
      func_0x000107e6315c(uVar12,lVar27);
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0x180) = uVar12;
      func_0x0001000d224c(unaff_x22 + 0x158);
      lVar26 = *(long *)(unaff_x22 + 0x158);
      *(long *)(unaff_x22 + 0x188) = lVar26;
      if (lVar26 != 0) {
        plVar16 = (long *)(*(long *)(unaff_x22 + 0x168) + _DAT_112fd9a88);
        lVar27 = *plVar16;
        puVar3 = (undefined8 *)(*(long *)(unaff_x22 + 0x168) + _DAT_112fd9aa8);
        uVar15 = *puVar3;
        lVar13 = puVar3[1];
        func_0x000107c5fadc(lVar27,plVar16[1]);
        if (lVar13 == 0) {
          uVar15 = 0;
        }
        else {
          func_0x000107c5fadc(uVar15,lVar13);
        }
        puVar14 = PTR_PTR_1126a9570;
        func_0x000107c610f8();
        func_0x000107c46b24();
        *(undefined **)(unaff_x22 + 400) = puVar14;
        func_0x000107c61170(uVar15);
        func_0x000107c61170();
        func_0x000100fb0a60();
        func_0x000107c613fc();
        *(undefined8 *)(lVar27 + 0x18) = 3;
        *(undefined8 *)(lVar27 + 0x10) = 1;
        *(undefined8 *)(lVar27 + 0x20) = uVar12;
        uVar15 = 0;
        func_0x000101dc57c4(0,0x112d50c78,&PTR_PTR_1126b25c0);
        func_0x000107c61174(uVar12);
        lVar13 = lVar27;
        func_0x000107c5fc48(lVar27,uVar15);
        func_0x000107c61574(lVar27);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d8();
        func_0x000107c43da8();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x198) = lVar26;
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar13);
        uVar12 = 0x112d62368;
        func_0x0001000285a8(0x112d62368,&UNK_10d928280);
        func_0x000100759c94(lVar26,0,uVar12);
        *(long *)(unaff_x22 + 0x1a0) = lVar26;
        plVar16 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1a8) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_101dc30bc;
                    /* WARNING: Could not recover jumptable at 0x000101dc3064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_101dc01f4();
        return;
      }
      lVar26 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      lVar13 = unaff_x22 + 0xb0;
      func_0x000107c61534();
      *(undefined8 *)(lVar26 + 0x18) = 2;
      *(undefined8 *)(lVar26 + 0x10) = 1;
      uVar15 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar26 + 0x20) = uVar15;
      puVar14 = PTR___sSSN_11034da80;
      *(undefined **)(lVar26 + 0x48) = PTR___sSSN_11034da80;
      *(long *)(lVar26 + 0x28) = lVar13;
      *(undefined8 *)(lVar26 + 0x30) = 0xd000000000000023;
      *(undefined8 *)(lVar26 + 0x38) = 0x800000010f010b50;
      lVar13 = lVar26;
      func_0x000100214a84(lVar26);
      func_0x000107c61588(lVar26);
      func_0x000101dc5784((undefined8 *)(lVar26 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar15 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
      lVar26 = lVar13;
      func_0x000107c5f9dc(lVar13,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar13);
      func_0x000107c466bc(puVar11);
      func_0x000107c61170(lVar26);
      func_0x000107c61170(uVar15);
      func_0x000107c61654();
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(lVar27);
      goto LAB_101dc2ba0;
    }
    lVar27 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar26 = unaff_x22 + 0x60;
    func_0x000107c61534();
    *(undefined8 *)(lVar27 + 0x18) = 2;
    *(undefined8 *)(lVar27 + 0x10) = 1;
    uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar27 + 0x20) = uVar12;
    puVar14 = PTR___sSSN_11034da80;
    *(undefined **)(lVar27 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar27 + 0x28) = lVar26;
    *(undefined8 *)(lVar27 + 0x30) = 0xd00000000000001a;
    *(undefined8 *)(lVar27 + 0x38) = 0x800000010f010b30;
    lVar26 = lVar27;
    func_0x000100214a84(lVar27);
    func_0x000107c61588(lVar27);
    func_0x000101dc5784((undefined8 *)(lVar27 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar12 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar27 = lVar26;
    func_0x000107c5f9dc(lVar26,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar26);
  }
  else {
    func_0x000107c61434(pbVar19);
    pbVar18 = pbVar19;
    FUN_101dc5248(pbVar21,pbVar19,10,&UNK_100f5025c);
    uVar25 = (uint)pbVar18;
    func_0x000107c6142c(pbVar19);
LAB_101dc2a68:
    if ((uVar25 & 0xff) != 1) goto LAB_101dc2bc4;
LAB_101dc2a74:
    lVar27 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar26 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar27 + 0x18) = 2;
    *(undefined8 *)(lVar27 + 0x10) = 1;
    uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar27 + 0x20) = uVar12;
    puVar14 = PTR___sSSN_11034da80;
    *(undefined **)(lVar27 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar27 + 0x28) = lVar26;
    *(undefined8 *)(lVar27 + 0x30) = 0xd000000000000024;
    *(undefined8 *)(lVar27 + 0x38) = 0x800000010f010b00;
    lVar26 = lVar27;
    func_0x000100214a84(lVar27);
    func_0x000107c61588(lVar27);
    func_0x000101dc5784((undefined8 *)(lVar27 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar12 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar27 = lVar26;
    func_0x000107c5f9dc(lVar26,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar26);
  }
  func_0x000107c466bc(puVar11);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar12);
  func_0x000107c61654();
LAB_101dc2ba0:
                    /* WARNING: Could not recover jumptable at 0x000101dc2bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc30bc; end: 101dc310f;  */

void FUN_101dc30bc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1b0) = param_1;
  *(undefined1 *)(lVar1 + 0x1b8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc3110,0,0);
  return;
}



/* Entry: 101dc3110; end: 101dc33a7;  */

void FUN_101dc3110(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x1b0);
  if (*(char *)(unaff_x22 + 0x1b8) == '\x01') {
    *(long *)(unaff_x22 + 0x160) = lVar8;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x160,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar9 = *(undefined8 *)(unaff_x22 + 400);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1a0));
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1a0));
    if (lVar8 != 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar5 = *(undefined8 *)(unaff_x22 + 400);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x180));
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar1);
      func_0x000107c615e8(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101dc3224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar9);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 400);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
    lVar8 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar6 = unaff_x22 + 0x100;
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar8 + 0x20) = uVar5;
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar8 + 0x28) = lVar6;
    *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000019;
    *(undefined8 *)(lVar8 + 0x38) = 0x800000010f010b80;
    lVar6 = lVar8;
    func_0x000100214a84(lVar8);
    func_0x000107c61588(lVar8);
    FUN_101dc5784((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar8 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101dc33a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc33a8; end: 101dc33bf;  */

void FUN_101dc33a8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc33c0,0,0);
  return;
}



/* Entry: 101dc33c0; end: 101dc358f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc33c0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x60);
  lVar6 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x78) = lVar6;
  if (lVar6 != 0) {
    plVar2 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101dc3590;
    lVar5 = *(long *)(unaff_x22 + 0x68);
    plVar2[0x18] = 0;
    plVar2[0x19] = lVar6;
    plVar2[0x17] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc3da0,0,0);
    return;
  }
  lVar6 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
  *(long *)(lVar6 + 0x28) = lVar5;
  *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000019;
  *(undefined8 *)(lVar6 + 0x38) = 0x800000010f010a70;
  lVar5 = lVar6;
  func_0x000100214a84(lVar6);
  func_0x000107c61588(lVar6);
  FUN_101dc5784((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
  lVar6 = lVar5;
  func_0x000107c5f9dc(lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dc358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc3590; end: 101dc35fb;  */

void FUN_101dc3590(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_101dc35fc;
  }
  else {
    pcVar1 = (code *)0x101dc3634;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dc35fc; end: 101dc3667;  */

void FUN_101dc35fc(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000101dc3630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 101dc3668; end: 101dc37e3;  */

void FUN_101dc3668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_110485360;
  func_0x000107c613fc(&UNK_110485360,0x18,7);
  plVar5 = (long *)(puVar1 + 0x10);
  *plVar5 = 0;
  puVar2 = &UNK_110485388;
  func_0x000107c613fc(&UNK_110485388,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104853b0;
  func_0x000107c613fc(&UNK_1104853b0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_60 = FUN_101dc575c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010c3770;
  puStack_68 = &UNK_1104853c8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5d618(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61428(plVar5,&puStack_80,0,0);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    func_0x000107c5b198(param_2);
    func_0x000107c61180();
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c61654();
    func_0x000107c61174(lVar6);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 101dc37e4; end: 101dc37fb;  */

void FUN_101dc37e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc37fc,0,0);
  return;
}



/* Entry: 101dc37fc; end: 101dc38f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc37fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  func_0x0001000285a8(0x112e2d190,&UNK_10da16268);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112e2d120);
  puVar2 = &UNK_1104852e8;
  func_0x000107c613fc(&UNK_1104852e8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(lVar1);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,FUN_101dc523c,puVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  func_0x000107c61574(puVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101dc38f4;
                    /* WARNING: Could not recover jumptable at 0x000101dc38f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101dc53d4();
  return;
}



/* Entry: 101dc38f4; end: 101dc3947;  */

void FUN_101dc38f4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc3948,0,0);
  return;
}



/* Entry: 101dc3948; end: 101dc39f3;  */

void FUN_101dc3948(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101dc39cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101dc39f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101dc39f4; end: 101dc3b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc39f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  lVar5 = 0;
  FUN_101dc1f28();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112e2d0c8) = 0;
  lVar3 = _DAT_112e2d0d0;
  func_0x000107c61614(lVar6 + _DAT_112e2d0d0,0);
  lVar4 = _DAT_112e2d0e0;
  lVar7 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar6 + lVar4,1,1,lVar7);
  *(undefined8 *)(lVar6 + _DAT_112e2d0c0) = param_2;
  func_0x000107c61604(lVar6 + lVar3,param_3);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e2d0d8);
  *puVar1 = FUN_101dc56cc;
  puVar1[1] = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_60,puVar2);
  func_0x000107c3d624(param_4);
  func_0x000107c61170(plVar8);
  return;
}



/* Entry: 101dc3b1c; end: 101dc3c5f; -[_TtC28SCMemoriesAISnapsManagerImpl28SCMemoriesAISnapsManagerImpl submitAISnapGenerationWithRequest:completionHandler:] */

void FUN_101dc3b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110485270;
  func_0x000107c613fc(&UNK_110485270,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110485298;
  func_0x000107c613fc(&UNK_110485298,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da16230;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1104852c0;
  func_0x000107c613fc(&UNK_1104852c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da16240;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da16250,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101dc3c60; end: 101dc3cd3;  */

void FUN_101dc3c60(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x50;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dc3cd4;
  plVar1[3] = param_1;
  plVar1[4] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc37fc,0,0);
  return;
}



/* Entry: 101dc3cd4; end: 101dc3d83;  */

void FUN_101dc3cd4(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x28));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x18) + 0x10))(*(long *)(lVar5 + 0x18),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101dc3d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101dc3d84; end: 101dc3d9f;  */

void FUN_101dc3d84(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc3da0,0,0);
  return;
}



/* Entry: 101dc3da0; end: 101dc3fbb;  */

void FUN_101dc3da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 200);
  func_0x000107c50098(lVar3,param_2,*(undefined8 *)(unaff_x22 + 0xb8),0,
                      *(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar3 + 0x28) = lVar6;
    *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000024;
    *(undefined8 *)(lVar3 + 0x38) = 0x800000010f010a90;
    lVar6 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    FUN_101dc5784((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar3 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dc3fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c506cc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    lVar6 = lVar3;
    func_0x000100759c94(lVar3,0);
    *(long *)(unaff_x22 + 0xd8) = lVar6;
    func_0x000107c61170(lVar3);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101dc3fbc;
                    /* WARNING: Could not recover jumptable at 0x000101dc3e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100ff4658)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc3fbc);
  (*pcVar2)();
}



/* Entry: 101dc3fbc; end: 101dc400f;  */

void FUN_101dc3fbc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xe8) = param_1;
  *(undefined1 *)(lVar1 + 0xf0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc4010,0,0);
  return;
}



/* Entry: 101dc4010; end: 101dc422f;  */

void FUN_101dc4010(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0xe8);
  if (*(char *)(unaff_x22 + 0xf0) == '\x01') {
    *(long *)(unaff_x22 + 0xb0) = lVar7;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xb0,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar6);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101dc40d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar6);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar7 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar4 = unaff_x22 + 0x60;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar7 + 0x28) = lVar4;
    *(undefined8 *)(lVar7 + 0x30) = 0xd00000000000003c;
    *(undefined8 *)(lVar7 + 0x38) = 0x800000010f010ac0;
    lVar4 = lVar7;
    func_0x000100214a84(lVar7);
    func_0x000107c61588(lVar7);
    FUN_101dc5784((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar7 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
  }
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101dc422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc4230; end: 101dc4ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc4230(undefined *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 auStack_130 [80];
  byte *pbStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_130;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  uVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000101dc4bbc();
  if (uVar3 == 0) {
    lVar17 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar17 + 0x18) = 2;
    *(undefined8 *)(lVar17 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar17 + 0x20) = uVar7;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar17 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar17 + 0x28) = puVar10;
    *(undefined8 *)(lVar17 + 0x30) = 0xd000000000000029;
    *(undefined8 *)(lVar17 + 0x38) = 0x800000010f010a10;
    lVar16 = lVar17;
    func_0x000100214a84(lVar17);
    func_0x000107c61588(lVar17);
    func_0x000101dc5784((undefined8 *)(lVar17 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar7 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar17 = lVar16;
    func_0x000107c5f9dc(lVar16,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar16);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
LAB_101dc4754:
    func_0x000107c61170(lVar17);
    func_0x000107c61428(param_3 + 0x10,&pbStack_e0,1,0);
    param_1 = *(undefined **)(param_3 + 0x10);
    *(undefined **)(param_3 + 0x10) = puVar4;
  }
  else {
    pbVar15 = *(byte **)(param_4 + _DAT_112fd9a98);
    pbVar12 = (byte *)((ulong *)(param_4 + _DAT_112fd9a98))[1];
    pbVar9 = (byte *)((ulong)pbVar15 & 0xffffffffffff);
    pbVar14 = (byte *)((ulong)pbVar12 >> 0x38 & 0xf);
    pbVar8 = pbVar9;
    if (((ulong)pbVar12 & 0x2000000000000000) != 0) {
      pbVar8 = pbVar14;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_101dc4624;
    if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
      if (((ulong)pbVar12 >> 0x3d & 1) != 0) {
        pbStack_e0 = pbVar15;
        uStack_d8 = (ulong)pbVar12 & 0xffffffffffffff;
        uVar19 = (uint)pbVar15 & 0xff;
        if (uVar19 == 0x2b) {
          if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb0);
            (*pcVar1)();
          }
          pbVar14 = pbVar14 + -1;
          if (pbVar14 == (byte *)0x0) goto LAB_101dc4610;
          lVar17 = 0;
          pbVar15 = (byte *)((ulong)&pbStack_e0 | 1);
          do {
            if (((9 < *pbVar15 - 0x30) ||
                (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f))
               || (uVar18 = (ulong)(byte)(*pbVar15 - 0x30), lVar17 = lVar16 + uVar18,
                  SCARRY8(lVar16,uVar18))) goto LAB_101dc4610;
            uVar19 = 0;
            pbVar14 = pbVar14 + -1;
            pbVar15 = pbVar15 + 1;
          } while (pbVar14 != (byte *)0x0);
        }
        else if (uVar19 == 0x2d) {
          if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4ba8);
            (*pcVar1)();
          }
          pbVar14 = pbVar14 + -1;
          if (pbVar14 == (byte *)0x0) {
LAB_101dc4610:
            uVar19 = 1;
          }
          else {
            lVar17 = 0;
            pbVar15 = (byte *)((ulong)&pbStack_e0 | 1);
            do {
              if (((9 < *pbVar15 - 0x30) ||
                  (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f))
                 || (uVar18 = (ulong)(byte)(*pbVar15 - 0x30), lVar17 = lVar16 - uVar18,
                    SBORROW8(lVar16,uVar18))) goto LAB_101dc4610;
              uVar19 = 0;
              pbVar14 = pbVar14 + -1;
              pbVar15 = pbVar15 + 1;
            } while (pbVar14 != (byte *)0x0);
          }
        }
        else {
          if (pbVar14 == (byte *)0x0) goto LAB_101dc4610;
          lVar17 = 0;
          ppbVar13 = &pbStack_e0;
          do {
            if (((9 < *(byte *)ppbVar13 - 0x30) ||
                (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f))
               || (uVar18 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), lVar17 = lVar16 + uVar18,
                  SCARRY8(lVar16,uVar18))) goto LAB_101dc4610;
            uVar19 = 0;
            pbVar14 = pbVar14 + -1;
            ppbVar13 = (byte **)((long)ppbVar13 + 1);
          } while (pbVar14 != (byte *)0x0);
        }
        goto LAB_101dc4618;
      }
      if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar12 & 0xfffffffffffffff) + 0x20);
        pbVar12 = pbVar9;
      }
      if (*pbVar15 != 0x2b) {
        if (*pbVar15 != 0x2d) {
          if (pbVar12 == (byte *)0x0) goto LAB_101dc4624;
          lVar17 = 0;
          pbVar8 = pbVar15;
          while (pbVar8 != (byte *)0x0) {
            if (((9 < *pbVar15 - 0x30) ||
                (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f))
               || (uVar18 = (ulong)(byte)(*pbVar15 - 0x30), lVar17 = lVar16 + uVar18,
                  SCARRY8(lVar16,uVar18))) goto LAB_101dc4624;
            pbVar12 = pbVar12 + -1;
            pbVar15 = pbVar15 + 1;
            pbVar8 = pbVar12;
          }
          goto LAB_101dc4778;
        }
        pbVar8 = pbVar12 + -1;
        if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4ba4);
          (*pcVar1)();
        }
        if (pbVar8 != (byte *)0x0) {
          lVar17 = 0;
          do {
            pbVar15 = pbVar15 + 1;
            if (((9 < *pbVar15 - 0x30) ||
                (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f))
               || (uVar18 = (ulong)(byte)(*pbVar15 - 0x30), lVar17 = lVar16 - uVar18,
                  SBORROW8(lVar16,uVar18))) goto LAB_101dc4624;
            pbVar8 = pbVar8 + -1;
          } while (pbVar8 != (byte *)0x0);
          goto LAB_101dc4778;
        }
        goto LAB_101dc4624;
      }
      pbVar8 = pbVar12 + -1;
      if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bac);
        (*pcVar1)();
      }
      if (pbVar8 == (byte *)0x0) goto LAB_101dc4624;
      lVar17 = 0;
      do {
        pbVar15 = pbVar15 + 1;
        if (((9 < *pbVar15 - 0x30) ||
            (lVar16 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
           (uVar18 = (ulong)(byte)(*pbVar15 - 0x30), lVar17 = lVar16 + uVar18,
           SCARRY8(lVar16,uVar18))) goto LAB_101dc4624;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else {
      func_0x000107c61434(pbVar12);
      pbVar8 = pbVar12;
      FUN_101dc5248(pbVar15,pbVar12,10,&UNK_100fb6c80);
      uVar19 = (uint)pbVar8;
      func_0x000107c6142c(pbVar12);
LAB_101dc4618:
      if ((uVar19 & 0xff) == 1) {
LAB_101dc4624:
        lVar17 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        *(undefined8 *)(lVar17 + 0x18) = 2;
        *(undefined8 *)(lVar17 + 0x10) = 1;
        uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x000107c5faec();
        *(undefined8 *)(lVar17 + 0x20) = uVar7;
        puVar5 = PTR___sSSN_11034da80;
        *(undefined **)(lVar17 + 0x48) = PTR___sSSN_11034da80;
        *(undefined1 **)(lVar17 + 0x28) = puVar10;
        *(undefined8 *)(lVar17 + 0x30) = 0xd000000000000023;
        *(undefined8 *)(lVar17 + 0x38) = 0x800000010f010a40;
        lVar16 = lVar17;
        func_0x000100214a84(lVar17);
        func_0x000107c61588(lVar17);
        func_0x000101dc5784((undefined8 *)(lVar17 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8();
        uVar7 = 0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
        lVar17 = lVar16;
        func_0x000107c5f9dc(lVar16,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar16);
        func_0x000107c466bc();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar7);
        goto LAB_101dc4754;
      }
    }
LAB_101dc4778:
    puVar5 = PTR_PTR_1126b00c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c55218();
    puVar4 = puVar5;
    func_0x000107c55bcc(param_1);
    uVar19 = (uint)puVar4;
    puVar4 = param_1;
    func_0x000107e64684();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d8d40;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    uVar18 = ((ulong *)(param_4 + _DAT_112fd9aa8))[1];
    if (uVar18 != 0) {
      uVar21 = *(ulong *)(param_4 + _DAT_112fd9aa8);
      uVar11 = uVar21 & 0xffffffffffff;
      if ((uVar18 & 0x2000000000000000) != 0) {
        uVar11 = uVar18 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        lVar17 = 0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(lVar17 + 0x18) = 2;
        *(undefined8 *)(lVar17 + 0x10) = 1;
        *(undefined **)(lVar17 + 0x38) = PTR___sSSN_11034da80;
        *(ulong *)(lVar17 + 0x20) = uVar21;
        *(ulong *)(lVar17 + 0x28) = uVar18;
        func_0x000101dc57c4(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x000107c61434(uVar18);
        func_0x000107c600f0();
        lVar16 = lVar17;
        func_0x000107c5a440(puVar4);
        uVar19 = (uint)lVar16;
        func_0x000107c61170(lVar17);
      }
    }
    uVar18 = ((undefined8 *)(param_4 + _DAT_112fd9a88))[1];
    func_0x000103ee34e0(*(undefined8 *)(param_4 + _DAT_112fd9a88));
    if ((uVar19 & 0xff) == 1) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126afad0;
      func_0x000107c610f8(PTR_PTR_1126afad0);
      func_0x000107c453e4();
      func_0x000107c55138();
      func_0x000107c5616c(puVar20);
    }
    func_0x000107c54e20(puVar4);
    func_0x000107c61170(puVar20);
    puVar20 = puVar4;
    func_0x000107c4e21c();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb4);
      (*pcVar1)();
    }
    puVar6 = puVar20;
    func_0x000107c5faec();
    uVar21 = uVar18;
    func_0x000107c61170(puVar20);
    func_0x000107c6142c(uVar18);
    uVar11 = (ulong)puVar6 & 0xffffffffffff;
    if ((uVar18 & 0x2000000000000000) != 0) {
      uVar11 = uVar18 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      uVar7 = 0x6e776f6e6b6e75;
      uVar21 = 0xe700000000000000;
      func_0x000107c5fadc(0x6e776f6e6b6e75);
      func_0x000107c57184(puVar4);
      func_0x000107c61170(uVar7);
    }
    puVar20 = puVar4;
    func_0x000107c5c7d8();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb8);
      (*pcVar1)();
    }
    puVar6 = puVar20;
    func_0x000107c5faec();
    uVar11 = uVar21;
    func_0x000107c61170(puVar20);
    func_0x000107c6142c(uVar21);
    uVar18 = (ulong)puVar6 & 0xffffffffffff;
    if ((uVar21 & 0x2000000000000000) != 0) {
      uVar18 = uVar21 >> 0x38 & 0xf;
    }
    if (uVar18 == 0) {
      uVar7 = 0x6e776f6e6b6e75;
      uVar11 = 0xe700000000000000;
      func_0x000107c5fadc(0x6e776f6e6b6e75);
      func_0x000107c59c44(puVar4);
      func_0x000107c61170(uVar7);
    }
    func_0x0001000d224c(&pbStack_e0);
    pbVar15 = pbStack_e0;
    if (pbStack_e0 != (byte *)0x0) {
      pbVar8 = pbStack_e0;
      func_0x000107c43f4c();
      func_0x000107c61180();
      func_0x000107c615e8(pbVar15);
      if (pbVar8 != (byte *)0x0) {
        pbVar15 = pbVar8;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(pbVar8);
        pbVar8 = pbVar15;
        func_0x000107c5faec();
        func_0x000107c61170(pbVar15);
        lVar17 = 0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(lVar17 + 0x18) = 2;
        *(undefined8 *)(lVar17 + 0x10) = 1;
        *(undefined **)(lVar17 + 0x38) = PTR___sSSN_11034da80;
        *(byte **)(lVar17 + 0x20) = pbVar8;
        *(ulong *)(lVar17 + 0x28) = uVar11;
        func_0x000101dc57c4(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x000107c600f0(lVar17);
        func_0x000107c55220(puVar4);
        func_0x000107c61170(lVar17);
      }
    }
    uVar18 = uVar3;
    func_0x000107c542f8();
    func_0x000101dc4d70();
    if ((uVar18 & 1) == 0) {
      func_0x000107c56408(uVar3);
    }
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bbc);
      (*pcVar1)();
    }
    func_0x000107c531d0();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101dc4ed8; end: 101dc4f37; -[_TtC28SCMemoriesAISnapsManagerImpl28SCMemoriesAISnapsManagerImpl init] */

void FUN_101dc4ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesAISnapsManagerImpl.SCMemoriesAISnapsManagerImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4f04);
  (*pcVar1)();
}



/* Entry: 101dc4f38; end: 101dc4fcf; -[_TtC28SCMemoriesAISnapsManagerImpl28SCMemoriesAISnapsManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc4f38(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2d120));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d128));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d130));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2d138));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d140));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d148));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2d150));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2d158));
  return;
}



/* Entry: 101dc4fd0; end: 101dc4fef;  */

void FUN_101dc4fd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128047f8);
  return;
}



/* Entry: 101dc4ff0; end: 101dc505b;  */

void FUN_101dc4ff0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dc505c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar5;
  plVar3[2] = lVar2;
  plVar4 = (long *)0x50;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[5] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101dc3cd4;
  plVar4[3] = lVar2;
  plVar4[4] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc37fc,0,0);
  return;
}



/* Entry: 101dc505c; end: 101dc5097;  */

void FUN_101dc505c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dc5094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dc5098; end: 101dc510f;  */

void FUN_101dc5098(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101dc5860;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}


