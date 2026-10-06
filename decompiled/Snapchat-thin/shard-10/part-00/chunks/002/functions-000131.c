/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1075251a8; end: 1075251bb;  */

void FUN_1075251a8(void)

{
  FUN_107525184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075251bc; end: 1075251ef;  */

undefined8 FUN_1075251bc(undefined8 param_1)

{
  func_0x000107525674();
  FUN_107525250();
  return param_1;
}



/* Entry: 1075251f0; end: 10752521b;  */

undefined8 FUN_1075251f0(long param_1,undefined8 param_2)

{
  func_0x0001075256c8(param_2,param_1 + 8);
  FUN_107524600();
  return param_2;
}



/* Entry: 10752521c; end: 107525243;  */

void FUN_10752521c(undefined8 param_1)

{
  func_0x000107525734();
  func_0x0001075255d4(param_1,&PTR_DAT_1109b9888);
  func_0x000107525540();
  return;
}



/* Entry: 107525244; end: 10752524f;  */

undefined ** FUN_107525244(void)

{
  return &PTR_DAT_1109b9888;
}



/* Entry: 107525250; end: 10752530f;  */

undefined8 FUN_107525250(undefined8 param_1)

{
  func_0x0001075256c8();
  FUN_107524600();
  return param_1;
}



/* Entry: 107525310; end: 107525323;  */

void FUN_107525310(void)

{
  func_0x0001075252e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107525324; end: 10752535b;  */

undefined8 FUN_107525324(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_107525408();
  return uVar1;
}



/* Entry: 10752535c; end: 10752537f;  */

undefined8 * FUN_10752535c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109b98a8;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  FUN_10752374c(param_2 + 2,param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 6,param_1 + 0x30);
  return param_2;
}



/* Entry: 107525380; end: 1075253d3;  */

void FUN_107525380(long param_1)

{
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_40,param_1 + 0x30);
  uStack_28 = 1;
  FUN_1075249d8(*(undefined8 *)(param_1 + 0x28),auStack_40);
  func_0x0001075255f4();
  return;
}



/* Entry: 1075253d4; end: 1075253fb;  */

void FUN_1075253d4(undefined8 param_1)

{
  func_0x000107525734();
  func_0x0001075255d4(param_1,&PTR_DAT_1109b9908);
  func_0x000107525540();
  return;
}



/* Entry: 1075253fc; end: 107525407;  */

undefined ** FUN_1075253fc(void)

{
  return &PTR_DAT_1109b9908;
}



/* Entry: 107525408; end: 107525463;  */

undefined8 * FUN_107525408(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = &PTR_SUB_1109b98a8;
  *(undefined4 *)(param_1 + 1) = *param_2;
  FUN_10752374c(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 6,param_2 + 10)
  ;
  return param_1;
}



/* Entry: 107525464; end: 10752586b;  */

void FUN_107525464(void)

{
  return;
}



/* Entry: 10752586c; end: 10752588f;  */

void FUN_10752586c(void)

{
  FUN_107524ec4();
  return;
}



/* Entry: 107525890; end: 1075258bf;  */

undefined8 * FUN_107525890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b9938;
  FUN_1075258c0(param_1 + 1);
  return param_1;
}



/* Entry: 1075258c0; end: 107525913;  */

void FUN_1075258c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  FUN_107525ee0();
  *param_1 = puVar1;
  return;
}



/* Entry: 107525914; end: 10752593f;  */

undefined8 * FUN_107525914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b9938;
  func_0x00010752607c(param_1 + 1);
  return param_1;
}



/* Entry: 107525940; end: 107525943;  */

undefined8 * FUN_107525940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b9938;
  func_0x00010752607c(param_1 + 1);
  return param_1;
}



/* Entry: 107525944; end: 107525957;  */

void FUN_107525944(void)

{
  FUN_107525914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107525958; end: 107525cff;  */

void FUN_107525958(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  lVar12 = *(long *)(param_2 + 8);
  FUN_1073ae49c(lVar12 + 0x30);
  plVar5 = *(long **)(param_2 + 8);
  plVar8 = (long *)plVar5[1];
  while (plVar8 != plVar5) {
    if ((plVar8[7] == 0) || (*(long *)(plVar8[7] + 8) == -1)) {
      lVar10 = *plVar8;
      plVar8 = (long *)plVar8[1];
      *(long **)(lVar10 + 8) = plVar8;
      *plVar8 = lVar10;
      plVar5[2] = plVar5[2] + -1;
      FUN_107526004();
      plVar5 = *(long **)(param_2 + 8);
    }
    else {
      plVar8 = (long *)plVar8[1];
    }
  }
  uVar9 = *(undefined8 *)(*param_4 + 0x68);
  func_0x00010076de84(auStack_d0,*param_4 + 0x18,0x7c);
  func_0x000100610910(auStack_b8,auStack_d0,*param_4);
  FUN_107525ea8(&plStack_a0,auStack_b8,0x7c);
  func_0x000100610910(&plStack_88,&plStack_a0,*param_4 + 0x30);
  FUN_107525ea8(&plStack_70,&plStack_88,0x7c);
  func_0x000107878fec(auStack_e8,uVar9);
  func_0x00010533a9c0(&lStack_100,&plStack_70,auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x000107526444();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  plStack_a0 = (long *)0x0;
  puStack_98 = (undefined8 *)0x0;
  lVar13 = *(long *)(param_2 + 8);
  lVar10 = lVar13;
  do {
    do {
      lVar10 = *(long *)(lVar10 + 8);
      lVar11 = lVar13;
      if (lVar10 == lVar13) goto LAB_107525ac4;
    } while ((uint)*(byte *)(lVar10 + 0x10) != (uint)param_3);
    lVar6 = lVar10 + 0x18;
    func_0x0001000e107c(lVar6,&lStack_100);
    lVar11 = lVar10;
  } while ((int)lVar6 == 0);
LAB_107525ac4:
  lVar10 = *(long *)(param_2 + 8);
  if (lVar11 != lVar10) {
    plStack_70 = (long *)0x0;
    puStack_68 = (undefined8 *)0x0;
    lVar10 = *(long *)(lVar11 + 0x38);
    if ((lVar10 != 0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), puStack_68 = (undefined8 *)lVar10, lVar10 != 0)) {
      plStack_70 = *(long **)(lVar11 + 0x30);
    }
    func_0x000107249e44(&plStack_a0,&plStack_70);
    func_0x00010724bd50(&plStack_70);
    plVar8 = plStack_a0;
    if (plStack_a0 != (long *)0x0) goto LAB_107525c40;
    lVar10 = *(long *)(param_2 + 8);
  }
  lVar13 = lVar10 + 0x18;
  FUN_107526108(lVar13,param_3);
  if (lVar10 + 0x20 == lVar13) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(lVar13 + 0x40);
    if (plVar8 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x107525c94);
      (*pcVar4)();
    }
    (**(code **)(*plVar8 + 0x30))(&plStack_88,plVar8,param_4);
    plVar8 = plStack_88;
    if (plStack_88 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = &PTR_DAT_1109b9978;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plStack_88;
    }
    plStack_88 = (long *)0x0;
    puStack_68 = puStack_98;
    plStack_70 = plStack_a0;
    plStack_a0 = plVar8;
    puStack_98 = puVar7;
    func_0x00010724bd50(&plStack_70);
    plVar8 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar5 = *(long **)(param_2 + 8);
    plVar8 = (long *)0x40;
    __Znwm();
    lVar11 = lStack_f0;
    lVar13 = lStack_f8;
    lVar10 = lStack_100;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    if (puStack_98 != (undefined8 *)0x0) {
      plVar1 = puStack_98 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(char *)(plVar8 + 2) = (char)param_3;
    plVar8[4] = lVar13;
    plVar8[3] = lVar10;
    plVar8[5] = lVar11;
    plStack_70 = (long *)0x0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    plVar8[7] = (long)puStack_98;
    plVar8[6] = (long)plStack_a0;
    plStack_88 = (long *)0x0;
    uStack_80 = 0;
    func_0x000107526054(&plStack_88);
    func_0x000107526444();
    plVar8[1] = (long)plVar5;
    lVar10 = *plVar5;
    *plVar8 = lVar10;
    *(long **)(lVar10 + 8) = plVar8;
    *plVar5 = (long)plVar8;
    plVar5[2] = plVar5[2] + 1;
    plVar8 = plStack_a0;
  }
LAB_107525c40:
  puVar7 = puStack_98;
  plStack_a0 = (long *)0x0;
  puStack_98 = (undefined8 *)0x0;
  *param_1 = (long)plVar8;
  param_1[1] = (long)puVar7;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x00010724bd50(&uStack_110);
  func_0x00010724bd50(&plStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_100);
  __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x30);
  return;
}



/* Entry: 107525d00; end: 107525d63;  */

void FUN_107525d00(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 uStack_31;
  
  lVar1 = *(long *)(param_1 + 8);
  uStack_31 = param_2;
  FUN_1073ae49c(lVar1 + 0x30);
  FUN_107525d64(*(long *)(param_1 + 8) + 0x18,&uStack_31);
  FUN_107525d98();
  __ZNSt3__115recursive_mutex6unlockEv(lVar1 + 0x30);
  return;
}



/* Entry: 107525d64; end: 107525d97;  */

long FUN_107525d64(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1075261c4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 107525d98; end: 107525dbb;  */

undefined8 FUN_107525d98(undefined8 param_1)

{
  func_0x000107526380();
  return param_1;
}



/* Entry: 107525dbc; end: 107525e6f;  */

void FUN_107525dbc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 8);
  FUN_1073ae49c(lVar3 + 0x30);
  lVar4 = *(long *)(param_2 + 8);
  lVar1 = lVar4 + 0x18;
  FUN_107526108(lVar1,param_3);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar4 + 0x20 != lVar1) {
    FUN_107525d98(param_1,lVar1 + 0x28);
    lVar2 = *(long *)(param_2 + 8);
    lVar4 = lVar1;
    func_0x00010002c7d4();
    if (*(long *)(lVar2 + 0x18) == lVar1) {
      *(long *)(lVar2 + 0x18) = lVar4;
    }
    *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + -1;
    func_0x00010530d618(*(undefined8 *)(lVar2 + 0x20),lVar1);
    func_0x00010752644c();
    __ZdlPv(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar3 + 0x30);
  return;
}



/* Entry: 107525e70; end: 107525ea7;  */

void FUN_107525e70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1073ae49c(lVar1 + 0x30);
  FUN_107525fac(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar1 + 0x30);
  return;
}



/* Entry: 107525ea8; end: 107525edf;  */

void FUN_107525ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 107525ee0; end: 107525f47;  */

long FUN_107525ee0(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x30);
  return param_1;
}



/* Entry: 107525f48; end: 107525fab;  */

long FUN_107525f48(long param_1)

{
  func_0x000107525f6c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107525fac; end: 107526003;  */

void FUN_107525fac(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_107526004(param_1);
    }
  }
  return;
}



/* Entry: 107526004; end: 10752609f;  */

void FUN_107526004(undefined8 param_1,long param_2)

{
  func_0x000107526028(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1075260a0; end: 1075260b7;  */

void FUN_1075260a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1075260d4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1075260b8; end: 1075260d3;  */

void FUN_1075260b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1075260d4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075260d4; end: 107526107;  */

long FUN_1075260d4(long param_1)

{
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x30);
  FUN_107525f48(param_1 + 0x18);
  FUN_107525fac(param_1);
  return param_1;
}



/* Entry: 107526108; end: 10752615b;  */

long * FUN_107526108(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(byte *)(plVar5 + 4)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(byte *)(plVar5 + 4)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < *(byte *)(plVar3 + 4))) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 10752615c; end: 10752616f;  */

void FUN_10752615c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107526170; end: 107526187;  */

void FUN_107526170(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107526180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107526188; end: 1075261bf;  */

long FUN_107526188(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b99b8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1075261c0; end: 1075261c3;  */

void FUN_1075261c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075261c4; end: 10752626b;  */

undefined1  [16]
FUN_1075261c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10752626c(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x48;
    __Znwm();
    uStack_50 = 1;
    *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)*param_4;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    plStack_58 = param_1 + 1;
    FUN_1075262bc(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x000107526308(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10752626c; end: 1075262bb;  */

long * FUN_10752626c(long param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < *(byte *)(plVar3 + 4)) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_1075262b4;
      }
      if (*param_3 <= *(byte *)(plVar3 + 4)) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_1075262b4:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1075262bc; end: 10752632b;  */

void FUN_1075262bc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10752632c; end: 107526343;  */

void FUN_10752632c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010752644c();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107526344; end: 10752642b;  */

void FUN_107526344(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010752644c();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10752642c; end: 107526453;  */

void FUN_10752642c(void)

{
  return;
}



/* Entry: 107526454; end: 10752649f;  */

void FUN_107526454(void)

{
  long *plVar1;
  
  func_0x000107526c00();
  func_0x0001072ab574();
  plVar1 = (long *)0x1131ad950;
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000107897e94(plVar1[2]);
  }
  func_0x000107526c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1075264a0; end: 1075264e3;  */

void FUN_1075264a0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107526c00();
  func_0x0001072ab574();
  FUN_1075264e4(0x1131ad940,&uStack_28);
  func_0x000107526bf4();
  return;
}



/* Entry: 1075264e4; end: 1075264fb;  */

void FUN_1075264e4(void)

{
  FUN_107526540();
  return;
}



/* Entry: 1075264fc; end: 10752653f;  */

void FUN_1075264fc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107526c00();
  func_0x0001072ab574();
  FUN_1075269a4(0x1131ad940,&uStack_28);
  func_0x000107526bf4();
  return;
}



/* Entry: 107526540; end: 107526573;  */

void FUN_107526540(void)

{
  func_0x000107526558();
  return;
}



/* Entry: 107526574; end: 107526923;  */

undefined1  [16] FUN_107526574(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined1 auVar15 [16];
  
  uVar3 = *param_2;
  FUN_107526924();
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar14 <= uVar3) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar3 / uVar14;
        }
        unaff_x25 = uVar3 - uVar7 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107526638;
          uVar7 = plVar12[1];
          if (uVar7 != uVar3) break;
          if (plVar12[2] == *param_2) {
            uVar4 = 0;
            goto LAB_1075268f0;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar14 <= uVar7) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar7 / uVar14;
          }
          uVar7 = uVar7 - uVar6 * uVar14;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_107526638:
  lVar13 = *param_3;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar3;
  plVar12[2] = lVar13;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_107526874;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_1075266e0:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107526918);
      (*pcVar2)();
    }
    lVar13 = uVar5 << 3;
    __Znwm(lVar13);
    FUN_10752694c(param_1,lVar13);
    param_1[1] = uVar5;
    lVar13 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar13 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar5 - 1;
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar7 * uVar5;
      }
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar13 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar10 * uVar5;
        }
        if (uVar7 != uVar11) {
          if (*(long *)(lVar13 + uVar7 * 8) == 0) {
            *(long **)(lVar13 + uVar7 * 8) = plVar9;
            uVar11 = uVar7;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar13 + uVar7 * 8);
            **(long **)(lVar13 + uVar7 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1075266e0;
      FUN_10752694c(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & uVar3;
  }
  else {
    unaff_x25 = uVar3;
    if (uVar14 <= uVar3) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar3 / uVar14;
      }
      unaff_x25 = uVar3 - uVar5 * uVar14;
    }
  }
LAB_107526874:
  lVar13 = *param_1;
  plVar8 = *(long **)(lVar13 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar13 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar3 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar3 = uVar3 & uVar14 - 1;
      }
      else if (uVar14 <= uVar3) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar3 / uVar14;
        }
        uVar3 = uVar3 - uVar5 * uVar14;
      }
      *(long **)(lVar13 + uVar3 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x000107526c14();
  uVar4 = 1;
LAB_1075268f0:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 107526924; end: 10752694b;  */

void FUN_107526924(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 10752694c; end: 107526963;  */

void FUN_10752694c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107526964; end: 10752698b;  */

undefined8 FUN_107526964(undefined8 param_1)

{
  FUN_10752698c(param_1,0);
  return param_1;
}



/* Entry: 10752698c; end: 1075269a3;  */

void FUN_10752698c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1075269a4; end: 1075269d7;  */

void FUN_1075269a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1075269d8();
  if (lVar1 != 0) {
    FUN_107526aa4(param_1,lVar1);
  }
  return;
}



/* Entry: 1075269d8; end: 107526aa3;  */

long FUN_1075269d8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    FUN_107526924();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar6 != uVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 107526aa4; end: 107526ad7;  */

undefined8 FUN_107526aa4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_107526ad8(auStack_38);
  func_0x000107526c14();
  return uVar1;
}



/* Entry: 107526ad8; end: 107526c27;  */

void FUN_107526ad8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107526b8c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107526b8c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107526b8c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107526c28; end: 107526ccf;  */

void FUN_107526c28(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_3a8 [88];
  undefined1 auStack_350 [192];
  undefined1 auStack_290 [56];
  undefined8 uStack_258;
  undefined8 uStack_178;
  undefined8 uStack_c8;
  undefined8 uStack_18;
  
  func_0x000107527c0c();
  func_0x000107527ca4();
  func_0x000107527cf4();
  func_0x000107527e1c();
  func_0x000107527bf8(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107527c0c();
    func_0x000107527ca4();
    func_0x000107527cf4();
    func_0x000107527e1c();
    func_0x000107527bf8(uStack_c8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107527c0c();
      func_0x000107527ca4();
      func_0x000107527cf4();
      func_0x000107527e1c();
      func_0x000107527bf8(uStack_178);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107527c40();
        uStack_258 = extraout_x8;
        func_0x000107264c5c();
        func_0x000107527d10();
        func_0x000107527cfc();
        func_0x000107527e48();
        func_0x000107527c50();
        func_0x000107527e30();
        func_0x000107527e24();
        func_0x000107527e10();
        func_0x000107527e04();
        func_0x000107527d70();
        func_0x000107527df0();
        func_0x000107527cac();
        func_0x000107527ca4();
        func_0x000107527cf4();
        func_0x00010724b2ac(auStack_350);
        func_0x000104c2f714(auStack_290);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
        func_0x000107527d88();
        func_0x000107527d80();
        func_0x000107527d68();
        func_0x000107527d90();
        func_0x000107527d98();
        func_0x000107527da8();
        func_0x000107527bf8(uStack_258);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000107527d88();
        func_0x000107527d80();
        func_0x000107527d68();
        func_0x000107527d90();
        func_0x000107527d98();
        func_0x000107527da8();
        func_0x000107527c9c();
        FUN_107527890();
        return;
      }
    }
  }
  return;
}



/* Entry: 107526cd0; end: 107526def;  */

void FUN_107526cd0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_198 [88];
  undefined1 auStack_140 [192];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107527c40();
  uStack_48 = extraout_x8;
  func_0x000107264c5c();
  func_0x000107527d10();
  func_0x000107527cfc();
  func_0x000107527e48();
  func_0x000107527c50();
  func_0x000107527e30();
  func_0x000107527e24();
  func_0x000107527e10();
  func_0x000107527e04();
  func_0x000107527d70();
  func_0x000107527df0();
  func_0x000107527cac();
  func_0x000107527ca4();
  func_0x000107527cf4();
  func_0x00010724b2ac(auStack_140);
  func_0x000104c2f714(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  func_0x000107527d88();
  func_0x000107527d80();
  func_0x000107527d68();
  func_0x000107527d90();
  func_0x000107527d98();
  func_0x000107527da8();
  func_0x000107527bf8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107527d88();
  func_0x000107527d80();
  func_0x000107527d68();
  func_0x000107527d90();
  func_0x000107527d98();
  func_0x000107527da8();
  func_0x000107527c9c();
  FUN_107527890();
  return;
}



/* Entry: 107526df0; end: 107526e3f;  */

void FUN_107526df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_70 = &uStack_18;
  puStack_68 = &uStack_20;
  puStack_60 = puStack_70;
  puStack_58 = puStack_68;
  puStack_50 = puStack_70;
  puStack_48 = puStack_68;
  puStack_40 = puStack_70;
  puStack_38 = puStack_68;
  puStack_30 = puStack_70;
  puStack_28 = puStack_68;
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_107527890(param_1,&puStack_30,&puStack_40,&puStack_50,&puStack_60,&puStack_70);
  return;
}



/* Entry: 107526e40; end: 107526f5f;  */

void FUN_107526e40(undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 in_ZR;
  char cVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined8 *****pppppuVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined2 *puVar21;
  int iVar22;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x9;
  uint extraout_w10;
  uint uVar23;
  uint uVar24;
  float fVar25;
  double dVar26;
  undefined1 auStack_708 [56];
  undefined1 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 auStack_6b0 [24];
  ulong uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 uStack_5d8;
  undefined1 uStack_5d7;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  char cStack_5a8;
  undefined1 uStack_588;
  uint uStack_584;
  uint uStack_580;
  undefined1 uStack_57c;
  undefined1 auStack_570 [72];
  undefined1 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_4e8;
  undefined4 auStack_430 [2];
  undefined1 auStack_428 [40];
  undefined1 uStack_400;
  undefined1 auStack_3f8 [64];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 ***apppuStack_370 [3];
  undefined8 ****ppppuStack_358;
  ulong uStack_350;
  byte bStack_341;
  undefined1 auStack_340 [72];
  undefined1 uStack_2f8;
  char acStack_2f0 [24];
  char cStack_2d8;
  undefined8 uStack_2b0;
  char acStack_198 [32];
  undefined2 *puStack_178;
  undefined1 auStack_140 [192];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107527c40();
  uStack_48 = extraout_x8;
  func_0x000107264c5c();
  func_0x000107527d10();
  func_0x000107527cfc();
  func_0x000107527e48();
  func_0x000107527c50();
  func_0x000107527e30();
  func_0x000107527e24();
  func_0x000107527e10();
  func_0x000107527e04();
  func_0x000107527d70();
  func_0x000107527df0();
  func_0x000107527cac();
  lVar18 = 6;
  func_0x000107527ca4();
  func_0x000107527cf4();
  func_0x00010724b2ac(auStack_140);
  func_0x000104c2f714(auStack_80);
  pcVar10 = acStack_198;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107527d88();
  func_0x000107527d80();
  func_0x000107527d68();
  func_0x000107527d90();
  func_0x000107527d98();
  func_0x000107527da8();
  func_0x000107527bf8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107527d88();
  func_0x000107527d80();
  func_0x000107527d68();
  func_0x000107527d90();
  func_0x000107527d98();
  func_0x000107527da8();
  puVar21 = puStack_178;
  func_0x000107527c9c();
  lVar19 = lVar18;
  func_0x000107527c40();
  uStack_2b0 = extraout_x8_01;
  func_0x000107264c5c();
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3b8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_3b8);
  pcVar13 = pcVar10 + lVar19;
LAB_107526fcc:
  fVar25 = (float)param_1;
  iVar22 = (int)in_x4;
  uVar9 = pcVar10 == pcVar13;
  if (!(bool)uVar9) {
    acStack_2f0[0] = '{';
    pcVar14 = pcVar10;
    func_0x00010061f9f8(pcVar10,pcVar13,acStack_2f0);
    func_0x0001000da738(&uStack_3b8,pcVar10,pcVar14);
    pcVar10 = pcVar14;
    if (pcVar14 != pcVar13) {
      for (pcVar10 = pcVar14 + 1; pcVar10 != pcVar13; pcVar10 = pcVar10 + 1) {
        puVar16 = &UNK_10de7c448;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                  (&UNK_10de7c448,(long)*pcVar10,0);
        if (puVar16 != (undefined *)0xffffffffffffffff) {
          if (*pcVar10 == '}') {
            func_0x00010533b3bc(auStack_3a0,pcVar14 + 1,pcVar10);
            puVar11 = auStack_3a0;
            func_0x000100152bb8(puVar11,&UNK_10f416217);
            if ((int)puVar11 == 0) {
              puVar11 = auStack_3a0;
              func_0x000100152bb8(puVar11,"range");
              if ((int)puVar11 != 0) {
                FUN_107527bc4(apppuStack_370,*puVar21);
                func_0x00010048a6c8(&ppppuStack_358,apppuStack_370,"-");
                FUN_107527bc4(auStack_388,puVar21[1]);
                func_0x00010533a9c0(auStack_430,&ppppuStack_358,auStack_388);
                func_0x000107527c6c();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
                func_0x000107527d60();
                pppppuVar12 = (undefined8 *****)apppuStack_370;
                goto LAB_107527118;
              }
              acStack_2f0[0] = '\0';
              cStack_2d8 = '\0';
            }
            else {
              func_0x00010786e848(&ppppuStack_358,lVar18);
              uVar3 = uStack_350;
              pppppuVar12 = (undefined8 *****)ppppuStack_358;
              if (-1 < (char)bStack_341) {
                uVar3 = (ulong)bStack_341;
                pppppuVar12 = &ppppuStack_358;
              }
              func_0x000107884bfc(auStack_430,pppppuVar12,uVar3);
              func_0x000107527c6c();
              pppppuVar12 = &ppppuStack_358;
LAB_107527118:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar12);
            }
            if (cStack_2d8 == '\x01') {
              func_0x0001004c3ca0(&uStack_3b8,acStack_2f0);
            }
            else {
              func_0x000107527d50();
              func_0x000107527de4();
              func_0x000107527d38();
            }
            func_0x0001001148fc(acStack_2f0);
            pcVar10 = pcVar10 + 1;
            func_0x000107527da0();
            goto LAB_107526fcc;
          }
          break;
        }
      }
      func_0x0001000da738(&uStack_3b8,pcVar14,pcVar10);
    }
    goto LAB_107526fcc;
  }
  func_0x0001072625b4(acStack_2f0,&uStack_3b8);
  auStack_340[0] = 0;
  uStack_2f8 = 0;
  auStack_430[0] = 0x133;
  auStack_428[0] = 0;
  uStack_400 = 0;
  FUN_107527ba8(auStack_3f8,auStack_430);
  uVar23 = (uint)acStack_2f0;
  puVar11 = auStack_340;
  uVar20 = 4;
  func_0x000107527ca4(extraout_x8_00);
  func_0x00010724b12c(auStack_3f8);
  func_0x00010724b15c(auStack_428);
  func_0x00010724b2ac(auStack_340);
  pcVar10 = acStack_2f0;
  func_0x000104c2f714();
  func_0x000107527d48();
  func_0x000107527bf8(uStack_2b0);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107527d48();
  func_0x000107527c9c();
  pcVar13 = pcVar10;
  func_0x000107527c40();
  puVar16 = &UNK_10f41620f;
  uStack_4e8 = extraout_x8_03;
  func_0x0001072784dc();
  cVar8 = iVar22 < 0;
  uVar9 = iVar22 == 0;
  cVar6 = '\0';
  uVar2 = (1 << (ulong)((uint)puVar11 & 0x1f)) + ~uVar23;
  if ((bool)uVar9) {
    uVar2 = uVar23;
  }
  pcVar14 = pcVar10;
  func_0x000107264c5c();
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6c8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_6c8);
  pcVar1 = pcVar14 + (long)puVar16;
  func_0x000107527c50();
  uVar4 = extraout_x9;
  if ((bool)uVar9 || cVar8 != cVar6) {
    uVar4 = extraout_x8_04;
  }
  uVar23 = (uint)uVar20;
  dVar26 = 1.0;
  _ldexp(0x3ff0000000000000,puVar11);
  iVar22 = (int)((dVar26 - (double)(int)uVar2) + -1.0) * 0x100;
  dVar26 = 156543.03392804097 / dVar26;
LAB_1075273c0:
  do {
    do {
      if (pcVar14 == pcVar1) {
        func_0x0001072625b4(&uStack_520,&uStack_6c8);
        func_0x000104c2fe00(&uStack_5c0,pcVar10);
        bVar5 = false;
        uVar9 = true;
        bVar7 = false;
        if (pcVar13 != (char *)0xffffffffffffffff) {
          bVar5 = false;
          uVar9 = false;
          bVar7 = true;
          if (!NAN(fVar25)) {
            bVar5 = fVar25 < 1.0;
            uVar9 = fVar25 == 1.0;
            bVar7 = false;
          }
        }
        uStack_588 = 1;
        if (!(bool)uVar9 && bVar5 == bVar7) {
          uStack_588 = 2;
        }
        uStack_57c = SUB81(puVar11,0);
        uStack_584 = uVar23;
        uStack_580 = uVar2;
        func_0x00010724afb0(auStack_570,&uStack_5c0);
        uStack_528 = 1;
        auStack_708[0] = 0;
        uStack_6d0 = 0;
        func_0x00010724aea8(extraout_x8_02);
        func_0x00010724b12c(auStack_708);
        func_0x00010724b2ac(auStack_570);
        func_0x000104c2f714(&uStack_5c0);
        func_0x000104c2f714(&uStack_520);
        func_0x000107527d48();
        func_0x000107527bf8(uStack_4e8);
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_680);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_520);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5d8);
          func_0x000107527d60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5f0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_608);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_650);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_620);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_638);
          func_0x000107527da0();
          func_0x000107527d48();
          func_0x000107527c9c();
          FUN_1075278d0();
          return;
        }
        return;
      }
      uStack_5c0 = CONCAT71(uStack_5c0._1_7_,0x7b);
      pcVar15 = pcVar14;
      func_0x00010061f9f8(pcVar14,pcVar1,&uStack_5c0);
      func_0x0001000da738(&uStack_6c8,pcVar14,pcVar15);
      pcVar14 = pcVar15;
    } while (pcVar15 == pcVar1);
    pcVar14 = pcVar15 + 1;
    while( true ) {
      if (pcVar14 == pcVar1) goto LAB_10752746c;
      puVar16 = &UNK_10de7c460;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                (&UNK_10de7c460,(long)*pcVar14,0);
      if (puVar16 != (undefined *)0xffffffffffffffff) break;
      pcVar14 = pcVar14 + 1;
    }
    if (*pcVar14 != '}') break;
    func_0x00010533b3bc(auStack_6b0,pcVar15 + 1,pcVar14);
    puVar17 = auStack_6b0;
    func_0x000100152bb8(puVar17,"z");
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_520,puVar11);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_6b0;
    func_0x000100152bb8(puVar17,&DAT_10f62b0e2);
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_520,uVar20);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_6b0;
    func_0x000100152bb8(puVar17,"y");
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_520,uVar2);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_6b0;
    func_0x000100152bb8(puVar17,&UNK_10f416221);
    if ((int)puVar17 == 0) {
      puVar17 = auStack_6b0;
      func_0x000100152bb8(puVar17,&UNK_10f416229);
      if ((int)puVar17 != 0) {
        func_0x000107527d20(auStack_638,dVar26 * (double)(int)(uVar23 * 0x100) + -20037508.342789244
                           );
        func_0x000107527c90(auStack_620,auStack_638);
        func_0x000107527d20(auStack_650,dVar26 * (double)iVar22 + -20037508.342789244);
        func_0x00010533a9c0(auStack_608,auStack_620,auStack_650);
        func_0x000107527c90(auStack_5f0,auStack_608);
        func_0x000107527d20(auStack_668,
                            dVar26 * (double)(int)(uVar23 * 0x100 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_5d8,auStack_5f0,auStack_668);
        func_0x000107527c90(&uStack_520,&uStack_5d8);
        func_0x000107527d20(auStack_680,dVar26 * (double)(iVar22 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_698,&uStack_520,auStack_680);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_680);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_520);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5d8);
        func_0x000107527d60();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_608);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_650);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_620);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_638);
        uStack_5b8 = uStack_690;
        uStack_5c0 = uStack_698;
        uStack_5b0 = uStack_688;
        uStack_698 = 0;
        uStack_690 = 0;
        uStack_688 = 0;
        cStack_5a8 = '\x01';
        goto LAB_1075274cc;
      }
      puVar17 = auStack_6b0;
      func_0x000100152bb8(puVar17,"prefix");
      if ((int)puVar17 == 0) {
        puVar17 = auStack_6b0;
        func_0x000100152bb8(puVar17,&DAT_10f416249);
        if ((int)puVar17 == 0) {
          uStack_5c0 = uStack_5c0 & 0xffffffffffffff00;
          cStack_5a8 = '\0';
          goto LAB_1075274d0;
        }
        func_0x00010002b838(&uStack_520,uVar4);
      }
      else {
        uStack_5d8 = (&UNK_10f416238)[(int)uVar23 % 0x10];
        uStack_5d7 = (&UNK_10f416238)[(int)uVar2 % 0x10];
        FUN_107527bd0(&uStack_520,&uStack_5d8,2);
      }
      func_0x000107527cd0();
    }
    else {
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_510 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&uStack_520,(long)(int)(uint)puVar11);
      uVar24 = extraout_w10;
      while ('\0' < (char)uVar24) {
        uVar24 = uVar24 - 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_520,
                   -(uVar2 >> (ulong)(uVar24 & 0x1f) & 1) & 2 | uVar23 >> (ulong)(uVar24 & 0x1f) & 1
                   | 0x30);
      }
LAB_1075274c4:
      func_0x000107527cd0();
    }
LAB_1075274cc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
LAB_1075274d0:
    if (cStack_5a8 == '\x01') {
      func_0x0001004c3ca0(&uStack_6c8,&uStack_5c0);
    }
    else {
      func_0x000107527d50();
      func_0x000107527de4();
      func_0x000107527d38();
    }
    func_0x0001001148fc(&uStack_5c0);
    pcVar14 = pcVar14 + 1;
    func_0x000107527da0();
  } while( true );
LAB_10752746c:
  func_0x0001000da738(&uStack_6c8,pcVar15,pcVar14);
  goto LAB_1075273c0;
}



/* Entry: 107526f60; end: 10752726f;  */

void FUN_107526f60(undefined8 param_1,undefined8 param_2,char *param_3,long param_4,
                  undefined2 *param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined8 ***pppuVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  uint extraout_w10;
  uint uVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_4c8 [56];
  undefined1 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_470 [24];
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 uStack_398;
  undefined1 uStack_397;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  char cStack_368;
  undefined1 uStack_348;
  uint uStack_344;
  uint uStack_340;
  undefined1 uStack_33c;
  undefined1 auStack_330 [72];
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2a8;
  undefined4 auStack_1f0 [2];
  undefined1 auStack_1e8 [40];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [64];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 *apuStack_130 [3];
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined1 auStack_100 [72];
  undefined1 uStack_b8;
  char acStack_b0 [24];
  char cStack_98;
  undefined8 uStack_70;
  
  lVar18 = param_4;
  func_0x000107527c40();
  uStack_70 = extraout_x8;
  func_0x000107264c5c();
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_178);
  pcVar12 = param_3 + lVar18;
LAB_107526fcc:
  fVar23 = (float)param_2;
  iVar20 = (int)param_7;
  uVar9 = param_3 == pcVar12;
  if (!(bool)uVar9) {
    acStack_b0[0] = '{';
    pcVar13 = param_3;
    func_0x00010061f9f8(param_3,pcVar12,acStack_b0);
    func_0x0001000da738(&uStack_178,param_3,pcVar13);
    param_3 = pcVar13;
    if (pcVar13 != pcVar12) {
      for (param_3 = pcVar13 + 1; param_3 != pcVar12; param_3 = param_3 + 1) {
        puVar16 = &UNK_10de7c448;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                  (&UNK_10de7c448,(long)*param_3,0);
        if (puVar16 != (undefined *)0xffffffffffffffff) {
          if (*param_3 == '}') {
            func_0x00010533b3bc(auStack_160,pcVar13 + 1,param_3);
            puVar10 = auStack_160;
            func_0x000100152bb8(puVar10,&UNK_10f416217);
            if ((int)puVar10 == 0) {
              puVar10 = auStack_160;
              func_0x000100152bb8(puVar10,"range");
              if ((int)puVar10 != 0) {
                FUN_107527bc4(apuStack_130,*param_5);
                func_0x00010048a6c8(&ppuStack_118,apuStack_130,"-");
                FUN_107527bc4(auStack_148,param_5[1]);
                func_0x00010533a9c0(auStack_1f0,&ppuStack_118,auStack_148);
                func_0x000107527c6c();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
                func_0x000107527d60();
                pppuVar11 = (undefined8 ***)apuStack_130;
                goto LAB_107527118;
              }
              acStack_b0[0] = '\0';
              cStack_98 = '\0';
            }
            else {
              func_0x00010786e848(&ppuStack_118,param_4);
              uVar3 = uStack_110;
              pppuVar11 = (undefined8 ***)ppuStack_118;
              if (-1 < (char)bStack_101) {
                uVar3 = (ulong)bStack_101;
                pppuVar11 = &ppuStack_118;
              }
              func_0x000107884bfc(auStack_1f0,pppuVar11,uVar3);
              func_0x000107527c6c();
              pppuVar11 = &ppuStack_118;
LAB_107527118:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar11);
            }
            if (cStack_98 == '\x01') {
              func_0x0001004c3ca0(&uStack_178,acStack_b0);
            }
            else {
              func_0x000107527d50();
              func_0x000107527de4();
              func_0x000107527d38();
            }
            func_0x0001001148fc(acStack_b0);
            param_3 = param_3 + 1;
            func_0x000107527da0();
            goto LAB_107526fcc;
          }
          break;
        }
      }
      func_0x0001000da738(&uStack_178,pcVar13,param_3);
    }
    goto LAB_107526fcc;
  }
  func_0x0001072625b4(acStack_b0,&uStack_178);
  auStack_100[0] = 0;
  uStack_b8 = 0;
  auStack_1f0[0] = 0x133;
  auStack_1e8[0] = 0;
  uStack_1c0 = 0;
  FUN_107527ba8(auStack_1b8,auStack_1f0);
  uVar21 = (uint)acStack_b0;
  puVar10 = auStack_100;
  uVar19 = 4;
  func_0x000107527ca4(param_1);
  func_0x00010724b12c(auStack_1b8);
  func_0x00010724b15c(auStack_1e8);
  func_0x00010724b2ac(auStack_100);
  pcVar12 = acStack_b0;
  func_0x000104c2f714();
  func_0x000107527d48();
  func_0x000107527bf8(uStack_70);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107527d48();
  func_0x000107527c9c();
  pcVar13 = pcVar12;
  func_0x000107527c40();
  puVar16 = &UNK_10f41620f;
  uStack_2a8 = extraout_x8_01;
  func_0x0001072784dc();
  cVar8 = iVar20 < 0;
  uVar9 = iVar20 == 0;
  cVar6 = '\0';
  uVar2 = (1 << (ulong)((uint)puVar10 & 0x1f)) + ~uVar21;
  if ((bool)uVar9) {
    uVar2 = uVar21;
  }
  pcVar14 = pcVar12;
  func_0x000107264c5c();
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_488 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_488);
  pcVar1 = pcVar14 + (long)puVar16;
  func_0x000107527c50();
  uVar4 = extraout_x9;
  if ((bool)uVar9 || cVar8 != cVar6) {
    uVar4 = extraout_x8_02;
  }
  uVar21 = (uint)uVar19;
  dVar24 = 1.0;
  _ldexp(0x3ff0000000000000,puVar10);
  iVar20 = (int)((dVar24 - (double)(int)uVar2) + -1.0) * 0x100;
  dVar24 = 156543.03392804097 / dVar24;
LAB_1075273c0:
  do {
    do {
      if (pcVar14 == pcVar1) {
        func_0x0001072625b4(&uStack_2e0,&uStack_488);
        func_0x000104c2fe00(&uStack_380,pcVar12);
        bVar5 = false;
        uVar9 = true;
        bVar7 = false;
        if (pcVar13 != (char *)0xffffffffffffffff) {
          bVar5 = false;
          uVar9 = false;
          bVar7 = true;
          if (!NAN(fVar23)) {
            bVar5 = fVar23 < 1.0;
            uVar9 = fVar23 == 1.0;
            bVar7 = false;
          }
        }
        uStack_348 = 1;
        if (!(bool)uVar9 && bVar5 == bVar7) {
          uStack_348 = 2;
        }
        uStack_33c = SUB81(puVar10,0);
        uStack_344 = uVar21;
        uStack_340 = uVar2;
        func_0x00010724afb0(auStack_330,&uStack_380);
        uStack_2e8 = 1;
        auStack_4c8[0] = 0;
        uStack_490 = 0;
        func_0x00010724aea8(extraout_x8_00);
        func_0x00010724b12c(auStack_4c8);
        func_0x00010724b2ac(auStack_330);
        func_0x000104c2f714(&uStack_380);
        func_0x000104c2f714(&uStack_2e0);
        func_0x000107527d48();
        func_0x000107527bf8(uStack_2a8);
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_440);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_398);
          func_0x000107527d60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
          func_0x000107527da0();
          func_0x000107527d48();
          func_0x000107527c9c();
          FUN_1075278d0();
          return;
        }
        return;
      }
      uStack_380 = CONCAT71(uStack_380._1_7_,0x7b);
      pcVar15 = pcVar14;
      func_0x00010061f9f8(pcVar14,pcVar1,&uStack_380);
      func_0x0001000da738(&uStack_488,pcVar14,pcVar15);
      pcVar14 = pcVar15;
    } while (pcVar15 == pcVar1);
    pcVar14 = pcVar15 + 1;
    while( true ) {
      if (pcVar14 == pcVar1) goto LAB_10752746c;
      puVar16 = &UNK_10de7c460;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                (&UNK_10de7c460,(long)*pcVar14,0);
      if (puVar16 != (undefined *)0xffffffffffffffff) break;
      pcVar14 = pcVar14 + 1;
    }
    if (*pcVar14 != '}') break;
    func_0x00010533b3bc(auStack_470,pcVar15 + 1,pcVar14);
    puVar17 = auStack_470;
    func_0x000100152bb8(puVar17,"z");
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_2e0,puVar10);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_470;
    func_0x000100152bb8(puVar17,&DAT_10f62b0e2);
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_2e0,uVar19);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_470;
    func_0x000100152bb8(puVar17,"y");
    if ((int)puVar17 != 0) {
      func_0x000107878f24(&uStack_2e0,uVar2);
      goto LAB_1075274c4;
    }
    puVar17 = auStack_470;
    func_0x000100152bb8(puVar17,&UNK_10f416221);
    if ((int)puVar17 == 0) {
      puVar17 = auStack_470;
      func_0x000100152bb8(puVar17,&UNK_10f416229);
      if ((int)puVar17 != 0) {
        func_0x000107527d20(auStack_3f8,dVar24 * (double)(int)(uVar21 * 0x100) + -20037508.342789244
                           );
        func_0x000107527c90(auStack_3e0,auStack_3f8);
        func_0x000107527d20(auStack_410,dVar24 * (double)iVar20 + -20037508.342789244);
        func_0x00010533a9c0(auStack_3c8,auStack_3e0,auStack_410);
        func_0x000107527c90(auStack_3b0,auStack_3c8);
        func_0x000107527d20(auStack_428,
                            dVar24 * (double)(int)(uVar21 * 0x100 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_398,auStack_3b0,auStack_428);
        func_0x000107527c90(&uStack_2e0,&uStack_398);
        func_0x000107527d20(auStack_440,dVar24 * (double)(iVar20 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_458,&uStack_2e0,auStack_440);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_440);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_398);
        func_0x000107527d60();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
        uStack_378 = uStack_450;
        uStack_380 = uStack_458;
        uStack_370 = uStack_448;
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_448 = 0;
        cStack_368 = '\x01';
        goto LAB_1075274cc;
      }
      puVar17 = auStack_470;
      func_0x000100152bb8(puVar17,"prefix");
      if ((int)puVar17 == 0) {
        puVar17 = auStack_470;
        func_0x000100152bb8(puVar17,&DAT_10f416249);
        if ((int)puVar17 == 0) {
          uStack_380 = uStack_380 & 0xffffffffffffff00;
          cStack_368 = '\0';
          goto LAB_1075274d0;
        }
        func_0x00010002b838(&uStack_2e0,uVar4);
      }
      else {
        uStack_398 = (&UNK_10f416238)[(int)uVar21 % 0x10];
        uStack_397 = (&UNK_10f416238)[(int)uVar2 % 0x10];
        FUN_107527bd0(&uStack_2e0,&uStack_398,2);
      }
      func_0x000107527cd0();
    }
    else {
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&uStack_2e0,(long)(int)(uint)puVar10);
      uVar22 = extraout_w10;
      while ('\0' < (char)uVar22) {
        uVar22 = uVar22 - 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_2e0,
                   -(uVar2 >> (ulong)(uVar22 & 0x1f) & 1) & 2 | uVar21 >> (ulong)(uVar22 & 0x1f) & 1
                   | 0x30);
      }
LAB_1075274c4:
      func_0x000107527cd0();
    }
LAB_1075274cc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
LAB_1075274d0:
    if (cStack_368 == '\x01') {
      func_0x0001004c3ca0(&uStack_488,&uStack_380);
    }
    else {
      func_0x000107527d50();
      func_0x000107527de4();
      func_0x000107527d38();
    }
    func_0x0001001148fc(&uStack_380);
    pcVar14 = pcVar14 + 1;
    func_0x000107527da0();
  } while( true );
LAB_10752746c:
  func_0x0001000da738(&uStack_488,pcVar15,pcVar14);
  goto LAB_1075273c0;
}



/* Entry: 107527270; end: 10752788f;  */

void FUN_107527270(undefined8 param_1,float param_2,char *param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,int param_7)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  uint extraout_w10;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auStack_2c8 [56];
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [24];
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 uStack_198;
  undefined1 uStack_197;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  undefined1 uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined1 uStack_13c;
  undefined1 auStack_130 [72];
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  
  pcVar10 = param_3;
  func_0x000107527c40();
  puVar13 = &UNK_10f41620f;
  uStack_a8 = extraout_x8;
  func_0x0001072784dc();
  cVar8 = param_7 < 0;
  uVar9 = param_7 == 0;
  cVar6 = '\0';
  uVar2 = (1 << (ulong)((uint)param_6 & 0x1f)) + ~param_5;
  if ((bool)uVar9) {
    uVar2 = param_5;
  }
  pcVar11 = param_3;
  func_0x000107264c5c();
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_288);
  pcVar1 = pcVar11 + (long)puVar13;
  func_0x000107527c50();
  uVar3 = extraout_x9;
  if ((bool)uVar9 || cVar8 != cVar6) {
    uVar3 = extraout_x8_00;
  }
  uVar15 = (uint)param_4;
  dVar17 = 1.0;
  _ldexp(0x3ff0000000000000,param_6);
  iVar4 = (int)((dVar17 - (double)(int)uVar2) + -1.0) * 0x100;
  dVar17 = 156543.03392804097 / dVar17;
LAB_1075273c0:
  do {
    do {
      if (pcVar11 == pcVar1) {
        func_0x0001072625b4(&uStack_e0,&uStack_288);
        func_0x000104c2fe00(&uStack_180,param_3);
        bVar5 = false;
        uVar9 = true;
        bVar7 = false;
        if (pcVar10 != (char *)0xffffffffffffffff) {
          bVar5 = false;
          uVar9 = false;
          bVar7 = true;
          if (!NAN(param_2)) {
            bVar5 = param_2 < 1.0;
            uVar9 = param_2 == 1.0;
            bVar7 = false;
          }
        }
        uStack_148 = 1;
        if (!(bool)uVar9 && bVar5 == bVar7) {
          uStack_148 = 2;
        }
        uStack_13c = (undefined1)param_6;
        uStack_144 = uVar15;
        uStack_140 = uVar2;
        func_0x00010724afb0(auStack_130,&uStack_180);
        uStack_e8 = 1;
        auStack_2c8[0] = 0;
        uStack_290 = 0;
        func_0x00010724aea8(param_1);
        func_0x00010724b12c(auStack_2c8);
        func_0x00010724b2ac(auStack_130);
        func_0x000104c2f714(&uStack_180);
        func_0x000104c2f714(&uStack_e0);
        func_0x000107527d48();
        func_0x000107527bf8(uStack_a8);
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
          func_0x000107527d60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
          func_0x000107527da0();
          func_0x000107527d48();
          func_0x000107527c9c();
          FUN_1075278d0();
          return;
        }
        return;
      }
      uStack_180 = CONCAT71(uStack_180._1_7_,0x7b);
      pcVar12 = pcVar11;
      func_0x00010061f9f8(pcVar11,pcVar1,&uStack_180);
      func_0x0001000da738(&uStack_288,pcVar11,pcVar12);
      pcVar11 = pcVar12;
    } while (pcVar12 == pcVar1);
    pcVar11 = pcVar12 + 1;
    while( true ) {
      if (pcVar11 == pcVar1) goto LAB_10752746c;
      puVar13 = &UNK_10de7c460;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                (&UNK_10de7c460,(long)*pcVar11,0);
      if (puVar13 != (undefined *)0xffffffffffffffff) break;
      pcVar11 = pcVar11 + 1;
    }
    if (*pcVar11 != '}') break;
    func_0x00010533b3bc(auStack_270,pcVar12 + 1,pcVar11);
    puVar14 = auStack_270;
    func_0x000100152bb8(puVar14,"z");
    if ((int)puVar14 != 0) {
      func_0x000107878f24(&uStack_e0,param_6);
      goto LAB_1075274c4;
    }
    puVar14 = auStack_270;
    func_0x000100152bb8(puVar14,&DAT_10f62b0e2);
    if ((int)puVar14 != 0) {
      func_0x000107878f24(&uStack_e0,param_4);
      goto LAB_1075274c4;
    }
    puVar14 = auStack_270;
    func_0x000100152bb8(puVar14,"y");
    if ((int)puVar14 != 0) {
      func_0x000107878f24(&uStack_e0,uVar2);
      goto LAB_1075274c4;
    }
    puVar14 = auStack_270;
    func_0x000100152bb8(puVar14,&UNK_10f416221);
    if ((int)puVar14 == 0) {
      puVar14 = auStack_270;
      func_0x000100152bb8(puVar14,&UNK_10f416229);
      if ((int)puVar14 != 0) {
        func_0x000107527d20(auStack_1f8,dVar17 * (double)(int)(uVar15 * 0x100) + -20037508.342789244
                           );
        func_0x000107527c90(auStack_1e0,auStack_1f8);
        func_0x000107527d20(auStack_210,dVar17 * (double)iVar4 + -20037508.342789244);
        func_0x00010533a9c0(auStack_1c8,auStack_1e0,auStack_210);
        func_0x000107527c90(auStack_1b0,auStack_1c8);
        func_0x000107527d20(auStack_228,
                            dVar17 * (double)(int)(uVar15 * 0x100 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_198,auStack_1b0,auStack_228);
        func_0x000107527c90(&uStack_e0,&uStack_198);
        func_0x000107527d20(auStack_240,dVar17 * (double)(iVar4 + 0x100) + -20037508.342789244);
        func_0x00010533a9c0(&uStack_258,&uStack_e0,auStack_240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
        func_0x000107527d60();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
        uStack_178 = uStack_250;
        uStack_180 = uStack_258;
        uStack_170 = uStack_248;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_248 = 0;
        cStack_168 = '\x01';
        goto LAB_1075274cc;
      }
      puVar14 = auStack_270;
      func_0x000100152bb8(puVar14,"prefix");
      if ((int)puVar14 == 0) {
        puVar14 = auStack_270;
        func_0x000100152bb8(puVar14,&DAT_10f416249);
        if ((int)puVar14 == 0) {
          uStack_180 = uStack_180 & 0xffffffffffffff00;
          cStack_168 = '\0';
          goto LAB_1075274d0;
        }
        func_0x00010002b838(&uStack_e0,uVar3);
      }
      else {
        uStack_198 = (&UNK_10f416238)[(int)uVar15 % 0x10];
        uStack_197 = (&UNK_10f416238)[(int)uVar2 % 0x10];
        FUN_107527bd0(&uStack_e0,&uStack_198,2);
      }
      func_0x000107527cd0();
    }
    else {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&uStack_e0,(long)(int)(uint)param_6);
      uVar16 = extraout_w10;
      while ('\0' < (char)uVar16) {
        uVar16 = uVar16 - 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_e0,
                   -(uVar2 >> (ulong)(uVar16 & 0x1f) & 1) & 2 | uVar15 >> (ulong)(uVar16 & 0x1f) & 1
                   | 0x30);
      }
LAB_1075274c4:
      func_0x000107527cd0();
    }
LAB_1075274cc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
LAB_1075274d0:
    if (cStack_168 == '\x01') {
      func_0x0001004c3ca0(&uStack_288,&uStack_180);
    }
    else {
      func_0x000107527d50();
      func_0x000107527de4();
      func_0x000107527d38();
    }
    func_0x0001001148fc(&uStack_180);
    pcVar11 = pcVar11 + 1;
    func_0x000107527da0();
  } while( true );
LAB_10752746c:
  func_0x0001000da738(&uStack_288,pcVar12,pcVar11);
  goto LAB_1075273c0;
}



/* Entry: 107527890; end: 1075278cf;  */

void FUN_107527890(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_5[1];
  uStack_30 = *param_5;
  uStack_18 = param_6[1];
  uStack_20 = *param_6;
  FUN_1075278d0(param_1,&uStack_60);
  return;
}



/* Entry: 1075278d0; end: 1075278ef;  */

void FUN_1075278d0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long unaff_x19;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (*(int *)(param_2 + 5) == 0) {
    func_0x000107527dc0(param_3,param_2);
    func_0x0001000e1048(&puStack_38,extraout_x9);
    func_0x0001072625b4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_38);
  }
  else {
    if (*(int *)(param_2 + 5) == 1) {
      func_0x000107527dc0(param_3 + 0x10,param_2);
      FUN_1075279ac(extraout_x9_00);
      *(undefined4 *)(unaff_x19 + 0x28) = 1;
      *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
      return;
    }
    if (*(int *)(param_2 + 5) == 2) {
      puVar4 = &stack0xffffffffffffffd0;
      func_0x000107527db0(param_3 + 0x20);
      func_0x0001000671d4(&stack0xffffffffffffffd0);
      func_0x000104c302a4(param_1,puVar4,param_2);
      return;
    }
    if (*(int *)(param_2 + 5) == 3) {
      ppuVar5 = &puStack_50;
      puVar7 = (undefined8 *)*param_2;
      puStack_48 = (undefined8 *)(long)*(char *)((long)puVar7 + 0x17);
      puStack_50 = puVar7;
      if ((long)puStack_48 < 0) {
        puStack_50 = (undefined8 *)*puVar7;
        puStack_48 = (undefined8 *)puVar7[1];
      }
      puVar7 = param_2;
      func_0x000107527db0(param_3 + 0x30);
      func_0x0001000671d4();
      puStack_38 = (undefined8 *)param_2[1];
      puStack_40 = (undefined8 *)*param_2;
      if (param_2[1] != 0) {
        plVar1 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_50 = ppuVar5;
      puStack_48 = puVar7;
      func_0x000107527e3c();
      func_0x000104c33970(&puStack_40);
      return;
    }
    puVar6 = param_2;
    func_0x000107527db0(param_3 + 0x40);
    puVar7 = param_2;
    func_0x0001000671d4();
    if (param_2[3] != 0) {
      plVar1 = (long *)(param_2[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_40 = puVar7;
    puStack_38 = puVar6;
    func_0x000107527e3c();
    func_0x000104c33970(&stack0xffffffffffffffd0);
  }
  return;
}



/* Entry: 1075278f0; end: 10752792b;  */

void FUN_1075278f0(void)

{
  undefined8 extraout_x9;
  undefined1 auStack_38 [24];
  
  func_0x000107527dc0();
  func_0x0001000e1048(auStack_38,extraout_x9);
  func_0x0001072625b4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10752792c; end: 10752794f;  */

void FUN_10752792c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (*(int *)(param_2 + 5) == 1) {
    func_0x000107527dc0(param_3 + 0x10,param_2);
    FUN_1075279ac(extraout_x9);
    *(undefined4 *)(unaff_x19 + 0x28) = 1;
    *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
    return;
  }
  if (*(int *)(param_2 + 5) == 2) {
    puVar4 = &stack0xffffffffffffffd0;
    func_0x000107527db0(param_3 + 0x20);
    func_0x0001000671d4(&stack0xffffffffffffffd0);
    func_0x000104c302a4(param_1,puVar4,param_2);
    return;
  }
  if (*(int *)(param_2 + 5) == 3) {
    ppuVar5 = &puStack_50;
    puVar7 = (undefined8 *)*param_2;
    puStack_48 = (undefined8 *)(long)*(char *)((long)puVar7 + 0x17);
    puStack_50 = puVar7;
    if ((long)puStack_48 < 0) {
      puStack_50 = (undefined8 *)*puVar7;
      puStack_48 = (undefined8 *)puVar7[1];
    }
    puVar7 = param_2;
    func_0x000107527db0(param_3 + 0x30);
    func_0x0001000671d4();
    puStack_38 = (undefined8 *)param_2[1];
    puStack_40 = (undefined8 *)*param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_50 = ppuVar5;
    puStack_48 = puVar7;
    func_0x000107527e3c();
    func_0x000104c33970(&puStack_40);
    return;
  }
  puVar6 = param_2;
  func_0x000107527db0(param_3 + 0x40);
  puVar7 = param_2;
  func_0x0001000671d4();
  if (param_2[3] != 0) {
    plVar1 = (long *)(param_2[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_40 = puVar7;
  puStack_38 = puVar6;
  func_0x000107527e3c();
  func_0x000104c33970(&stack0xffffffffffffffd0);
  return;
}



/* Entry: 107527950; end: 107527987;  */

void FUN_107527950(void)

{
  undefined8 extraout_x9;
  long unaff_x19;
  
  func_0x000107527dc0();
  FUN_1075279ac(extraout_x9);
  *(undefined4 *)(unaff_x19 + 0x28) = 1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  return;
}



/* Entry: 107527988; end: 1075279ab;  */

void FUN_107527988(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (*(int *)(param_2 + 5) == 2) {
    puVar4 = &stack0xffffffffffffffd0;
    func_0x000107527db0(param_3 + 0x20);
    func_0x0001000671d4(&stack0xffffffffffffffd0);
    func_0x000104c302a4(param_1,puVar4,param_2);
    return;
  }
  if (*(int *)(param_2 + 5) == 3) {
    ppuVar5 = &puStack_50;
    puVar7 = (undefined8 *)*param_2;
    puStack_48 = (undefined8 *)(long)*(char *)((long)puVar7 + 0x17);
    puStack_50 = puVar7;
    if ((long)puStack_48 < 0) {
      puStack_50 = (undefined8 *)*puVar7;
      puStack_48 = (undefined8 *)puVar7[1];
    }
    puVar7 = param_2;
    func_0x000107527db0(param_3 + 0x30);
    func_0x0001000671d4();
    puStack_38 = (undefined8 *)param_2[1];
    puStack_40 = (undefined8 *)*param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_50 = ppuVar5;
    puStack_48 = puVar7;
    func_0x000107527e3c();
    func_0x000104c33970(&puStack_40);
    return;
  }
  puVar6 = param_2;
  func_0x000107527db0(param_3 + 0x40);
  puVar7 = param_2;
  func_0x0001000671d4();
  if (param_2[3] != 0) {
    plVar1 = (long *)(param_2[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_40 = puVar7;
  puStack_38 = puVar6;
  func_0x000107527e3c();
  func_0x000104c33970(&stack0xffffffffffffffd0);
  return;
}



/* Entry: 1075279ac; end: 107527a73;  */

void FUN_1075279ac(undefined2 *param_1,ushort *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  
  uVar2 = *param_2 - param_3;
  if (*param_2 < param_3) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar1 = param_4;
  if (uVar2 <= param_4) {
    uVar1 = uVar2;
  }
  if (param_4 != 0xffffffffffffffff) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (0x24 < uVar2) {
    uVar1 = 0x25;
  }
  puVar3 = param_1 + 1;
  *(undefined1 *)puVar3 = 0;
  *param_1 = (short)uVar1;
  if (uVar2 != 0) {
    _memcpy(puVar3,(long)param_2 + param_3 + 2,uVar1);
  }
  *(undefined1 *)((long)puVar3 + uVar1) = 0;
  return;
}



/* Entry: 107527a74; end: 107527a9b;  */

void FUN_107527a74(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (*(int *)(param_1 + 5) == 3) {
    ppuVar4 = &puStack_50;
    puVar6 = (undefined8 *)*param_1;
    puStack_48 = (undefined8 *)(long)*(char *)((long)puVar6 + 0x17);
    puStack_50 = puVar6;
    if ((long)puStack_48 < 0) {
      puStack_50 = (undefined8 *)*puVar6;
      puStack_48 = (undefined8 *)puVar6[1];
    }
    puVar6 = param_1;
    func_0x000107527db0(param_2 + 0x30);
    func_0x0001000671d4();
    puStack_38 = (undefined8 *)param_1[1];
    puStack_40 = (undefined8 *)*param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_50 = ppuVar4;
    puStack_48 = puVar6;
    func_0x000107527e3c();
    func_0x000104c33970(&puStack_40);
    return;
  }
  puVar5 = param_1;
  func_0x000107527db0(param_2 + 0x40);
  puVar6 = param_1;
  func_0x0001000671d4();
  if (param_1[3] != 0) {
    plVar1 = (long *)(param_1[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_40 = puVar6;
  puStack_38 = puVar5;
  func_0x000107527e3c();
  func_0x000104c33970(&stack0xffffffffffffffd0);
  return;
}



/* Entry: 107527a9c; end: 107527b33;  */

void FUN_107527a9c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_50;
  puVar5 = (undefined8 *)*param_2;
  puStack_48 = (undefined8 *)(long)*(char *)((long)puVar5 + 0x17);
  puStack_50 = puVar5;
  if ((long)puStack_48 < 0) {
    puStack_50 = (undefined8 *)*puVar5;
    puStack_48 = (undefined8 *)puVar5[1];
  }
  puVar5 = param_2;
  func_0x000107527db0();
  func_0x0001000671d4();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_50 = ppuVar4;
  puStack_48 = puVar5;
  func_0x000107527e3c();
  func_0x000104c33970(&uStack_40);
  return;
}



/* Entry: 107527b34; end: 107527ba7;  */

void FUN_107527b34(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107527db0();
  func_0x0001000671d4();
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  if (*(long *)(param_2 + 0x18) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107527e3c();
  func_0x000104c33970(&uStack_30);
  return;
}



/* Entry: 107527ba8; end: 107527bc3;  */

void FUN_107527ba8(long param_1)

{
  func_0x00010724b038();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107527bc4; end: 107527bcf;  */

void FUN_107527bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_e8 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_48 [40];
  
  func_0x000107879230(param_1,param_2,param_2);
  func_0x000107879198();
  func_0x000107878f60(auStack_48);
  func_0x00010787924c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107879230();
    func_0x0001078791b8();
    func_0x000107878f60(auStack_98);
    func_0x00010787924c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107879230();
      func_0x000107879210();
      iVar2 = (int)auStack_e8;
      func_0x000107878f60();
      func_0x00010787924c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        puVar1 = &UNK_10f430942;
        if (iVar2 == 0) {
          puVar1 = &UNK_10f430947;
        }
        func_0x0001003a91d4(puVar1);
        func_0x0001003a9204(extraout_x8);
        return;
      }
    }
  }
  return;
}



/* Entry: 107527bd0; end: 107527bf7;  */

undefined8 FUN_107527bd0(undefined8 param_1,long param_2,long param_3)

{
  func_0x00010533b3bc(param_1,param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 107527bf8; end: 107527e53;  */

void FUN_107527bf8(void)

{
  return;
}



/* Entry: 107527e54; end: 107527e9b;  */

void FUN_107527e54(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001075280b8();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_107527f08();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 107527e9c; end: 107527ec3;  */

undefined8 FUN_107527e9c(undefined8 param_1,undefined8 *param_2)

{
  FUN_107527ec4(param_1,*param_2);
  return param_1;
}



/* Entry: 107527ec4; end: 107527f07;  */

void FUN_107527ec4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001075280b8();
  FUN_107528018();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 107527f08; end: 107527f8f;  */

undefined8 * FUN_107527f08(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010002b838(param_1 + 3,&UNK_10f41624f);
  func_0x00010002b838(param_1 + 6,&UNK_10f41626b);
  func_0x00010002b838(param_1 + 9,&UNK_10f416274);
  param_1[0xc] = 0x3200000;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 107527f90; end: 107527fb3;  */

undefined8 FUN_107527f90(undefined8 param_1)

{
  FUN_107527fb4(param_1,0);
  return param_1;
}



/* Entry: 107527fb4; end: 107527fcb;  */

void FUN_107527fb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107527fe8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107527fcc; end: 107527fe7;  */

void FUN_107527fcc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107527fe8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107527fe8; end: 107528017;  */

void FUN_107527fe8(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  func_0x0001075280b0();
  func_0x0001075280a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 107528018; end: 107528093;  */

long FUN_107528018(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x30,param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  return param_1;
}



/* Entry: 107528094; end: 1075280c3;  */

void FUN_107528094(void)

{
  return;
}



/* Entry: 1075280c4; end: 107528167;  */

undefined1 *
FUN_1075280c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010724b830(auStack_58,param_5);
  func_0x00010724bb40(param_1,param_2,param_3,param_4,auStack_58);
  puVar1 = auStack_58;
  func_0x00010724b884();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010724b884(auStack_58);
  __Unwind_Resume();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    *(undefined8 *)(puVar1 + 0x18) = 0;
  }
  else if (lVar2 == param_2) {
    *(undefined1 **)(puVar1 + 0x18) = puVar1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),puVar1);
  }
  else {
    *(long *)(puVar1 + 0x18) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return puVar1;
}



/* Entry: 107528168; end: 1075281c7;  */

long FUN_107528168(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1075281c8; end: 10752824f;  */

void FUN_1075281c8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_107528250();
  return;
}



/* Entry: 107528250; end: 107528313;  */

undefined1 * FUN_107528250(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  *param_1 = *param_2;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_107528314(&uStack_28);
    uVar3 = uStack_28;
  }
  uStack_28 = 0;
  func_0x00010724b300(param_1 + 0x10,uVar3);
  func_0x0001072d6f8c(&uStack_28);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  param_1[0x1a] = param_2[0x1a];
  func_0x0001072631dc(param_1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar2 = param_2[0x48];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = uVar2;
  func_0x0001002a969c(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  param_1[0x74] = param_2[0x74];
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



/* Entry: 107528314; end: 107528367;  */

void FUN_107528314(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  FUN_107371e6c();
  *param_1 = uVar1;
  return;
}



/* Entry: 107528368; end: 1075283f3;  */

undefined8 *
FUN_107528368(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_1109b99d8;
  *param_2 = 0;
  param_1[1] = uVar1;
  uVar1 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[4] = uVar1;
  param_1[5] = param_5;
  func_0x00010726ed14(param_1 + 6);
  param_1[8] = param_1;
  return param_1;
}



/* Entry: 1075283f4; end: 107528453;  */

undefined8 * FUN_1075283f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109b99d8;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010752ab24(param_1 + 4);
  func_0x0001072aa1a4(param_1 + 2);
  func_0x00010752ab00(param_1 + 1);
  return param_1;
}



/* Entry: 107528454; end: 107528457;  */

undefined8 * FUN_107528454(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109b99d8;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010752ab24(param_1 + 4);
  func_0x0001072aa1a4(param_1 + 2);
  func_0x00010752ab00(param_1 + 1);
  return param_1;
}



/* Entry: 107528458; end: 10752846b;  */

void FUN_107528458(void)

{
  FUN_1075283f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752846c; end: 107528fd7;  */

void FUN_10752846c(long param_1,long *param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
                  undefined **param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_838;
  undefined **ppuStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined *puStack_810;
  undefined **ppuStack_808;
  ulong uStack_800;
  undefined8 *puStack_7f8;
  undefined1 auStack_7f0 [24];
  undefined1 uStack_7d8;
  undefined *puStack_7d0;
  long lStack_7c8;
  undefined *puStack_7c0;
  long lStack_7b8;
  undefined1 auStack_7b0 [16];
  undefined1 auStack_7a0 [16];
  undefined1 auStack_790 [104];
  undefined8 uStack_728;
  undefined8 uStack_720;
  long alStack_718 [3];
  long *plStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined4 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_650;
  undefined1 uStack_648;
  undefined4 uStack_618;
  undefined1 uStack_610;
  undefined4 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [16];
  undefined **ppuStack_568;
  undefined8 uStack_560;
  undefined8 uStack_54c;
  undefined8 uStack_544;
  undefined *puStack_538;
  ulong uStack_530;
  ulong uStack_528;
  undefined1 auStack_520 [24];
  undefined1 uStack_508;
  undefined1 auStack_500 [24];
  undefined1 uStack_4e8;
  undefined1 auStack_4e0 [24];
  undefined1 uStack_4c8;
  undefined1 uStack_4c0;
  undefined1 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_328;
  undefined1 uStack_320;
  undefined1 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [24];
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined1 uStack_250;
  undefined4 uStack_248;
  undefined8 **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_e0 [22];
  short sStack_ca;
  int iStack_88;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_107326d6c(auStack_e0,0,0x400,0);
  puStack_260 = (undefined *)CONCAT44(puStack_260._4_4_,9);
  uStack_248 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  ppuStack_240 = (undefined8 **)&PTR_DAT_110996720;
  uStack_220 = 9;
  uStack_218 = 0;
  uStack_214 = 1;
  uStack_200 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  FUN_10743cc34(&lStack_1f0,&puStack_260,7);
  FUN_10743d7bc(auStack_790,&lStack_1f0);
  func_0x000107288cd8(&lStack_1f0);
  func_0x000107262330(&puStack_260);
  uVar6 = *(char *)((long)param_2 + 0x17) == '\0';
  plVar7 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar7 = param_2;
  }
  FUN_1075222a8(auStack_e0,plVar7);
  FUN_10743d7e4(auStack_790);
  if (iStack_88 == 0) {
    uVar6 = sStack_ca == 3;
    if ((bool)uVar6) {
      uVar20 = *(undefined8 *)(param_1 + 8);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107529644(auStack_790,auStack_e0);
      plStack_700 = alStack_718;
      plVar7 = (long *)param_9[3];
      uStack_728 = uVar20;
      uStack_720 = uVar21;
      if (plVar7 != (long *)0x0) {
        if (plVar7 == param_9) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plStack_700);
          plVar7 = plStack_700;
        }
        else {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      plStack_700 = plVar7;
      uStack_680 = 0;
      uStack_688 = 0;
      uStack_690 = 0;
      uStack_698 = 0;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_6b8 = 0;
      uStack_6c0 = 0;
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      puStack_6f8 = (undefined *)0x0;
      uStack_678 = 0x3f800000;
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      uStack_650 = 0x3f800000;
      uStack_648 = 0;
      uStack_618 = 1;
      uStack_610 = 0;
      uStack_5e0 = 1;
      uStack_5c8 = 30000000;
      uStack_5d0 = 30000000;
      uStack_5b8 = 300000000;
      uStack_5c0 = 0;
      uStack_5d8 = 300000000;
      uStack_5b0 = 1;
      uStack_5a0 = 0;
      uStack_5a8 = 0;
      uStack_598 = 1;
      func_0x0001077ae0f8(auStack_590);
      func_0x0001077b4e14(auStack_578);
      uStack_560 = 0;
      ppuStack_568 = &PTR_DAT_1109ed050;
      uStack_544 = 0;
      uStack_54c = 0;
      uStack_508 = 0;
      auStack_500[0] = 0;
      uStack_4e8 = 0;
      auStack_4e0[0] = 0;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_490 = 0;
      puStack_538 = (undefined *)0x0;
      uStack_528 = 0;
      uStack_530 = 0;
      auStack_520[0] = 0;
      uStack_480 = 0;
      uStack_488 = 0;
      uStack_470 = 0;
      uStack_478 = 0;
      uStack_460 = 0;
      uStack_468 = 0;
      uStack_450 = 0;
      uStack_458 = 0;
      puStack_448 = &UNK_10e52b660;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_410 = 0;
      uStack_408 = 0x3f800000;
      uStack_400 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_300 = 0;
      puStack_2f8 = &UNK_10e52b660;
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      puStack_2d8 = &UNK_10e52b660;
      uStack_2c0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      puStack_2b8 = &uStack_2b0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      func_0x00010726acf0(auStack_2a0);
      lStack_290 = param_1 + 0x30;
      FUN_1073af27c(&lStack_1f0,0,0);
      uStack_280 = uStack_1e8;
      lStack_288 = lStack_1f0;
      uStack_1e8 = 0;
      lStack_1f0 = 0;
      plVar7 = &lStack_1f0;
      func_0x00010724b8b8();
      FUN_1073af260();
      (**(code **)(*plVar7 + 0x20))(auStack_278);
      FUN_1073e61f8(&puStack_7c0);
      lStack_7c8 = lStack_7b8;
      puStack_7d0 = puStack_7c0;
      if (lStack_7b8 != 0) {
        plVar7 = (long *)(lStack_7b8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_258 = *(undefined ***)(param_1 + 0x18);
      puStack_260 = *(undefined **)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x18) != 0) {
        plVar7 = (long *)(*(long *)(param_1 + 0x18) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_250 = 1;
      puStack_810 = (undefined *)((ulong)puStack_810 & 0xffffffffffffff00);
      uStack_800 = uStack_800 & 0xffffffffffffff00;
      auStack_7f0[0] = 0;
      uStack_7d8 = 0;
      FUN_1075375e8(&lStack_1f0,&puStack_7d0,&puStack_260,&puStack_810,auStack_7f0);
      func_0x0001001148fc(auStack_7f0);
      func_0x000107323f70(&puStack_810);
      FUN_107323ef8(&puStack_260);
      ppuVar9 = &puStack_7d0;
      FUN_107323f90();
      func_0x00010752acec();
      if ((int)ppuVar9 != 0) {
        func_0x00010752ace4();
        if ((*(ushort *)((long)ppuVar9 + 0x16) >> 10 & 1) != 0) {
          if ((*(ushort *)((long)ppuVar9 + 0x16) >> 0xc & 1) == 0) {
            iVar2 = *(int *)ppuVar9;
            ppuVar9 = (undefined **)ppuVar9[1];
          }
          else {
            iVar2 = 0x15 - *(char *)((long)ppuVar9 + 0x15);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                    (&puStack_260,ppuVar9,iVar2);
          func_0x000100066230(&puStack_538,&puStack_260);
          ppuVar9 = &puStack_260;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
      }
      func_0x00010752acec();
      if ((int)ppuVar9 == 0) {
LAB_1075289dc:
        func_0x00010752acec();
        ppuVar10 = ppuVar9;
        if ((int)ppuVar9 != 0) {
          func_0x00010752ace4();
          ppuVar10 = &puStack_6f8;
          func_0x0001077caa84(&puStack_6f8,ppuVar9,&lStack_1f0);
        }
        func_0x00010752acec();
        if ((int)ppuVar10 != 0) {
          func_0x00010752ace4();
          func_0x0001077ca410(&puStack_260,&puStack_7c0,ppuVar10);
          FUN_107528fd8(&puStack_7c0,&puStack_260);
          ppuVar10 = &puStack_260;
          FUN_107323f90();
        }
        func_0x00010752acec();
        if ((int)ppuVar10 == 0) {
          func_0x00010752ad04();
        }
        else {
          func_0x00010752ace4();
          if ((*(ushort *)((long)ppuVar10 + 0x16) >> 10 & 1) == 0) {
            func_0x00010752ad04();
          }
          else {
            if ((*(ushort *)((long)ppuVar10 + 0x16) >> 0xc & 1) == 0) {
              iVar2 = *(int *)ppuVar10;
              ppuVar10 = (undefined **)ppuVar10[1];
            }
            else {
              iVar2 = 0x15 - *(char *)((long)ppuVar10 + 0x15);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                      (&puStack_260,ppuVar10,iVar2);
            func_0x000100066230(&puStack_6f8,&puStack_260);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_260);
            func_0x000107262e9c(&puStack_260,&puStack_6f8);
            func_0x00010724b810(param_7,&puStack_260);
            ppuVar10 = &puStack_260;
            func_0x000104c2f714();
          }
        }
        func_0x00010785f1f4();
        puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffffffffff00);
        cVar3 = (char)ppuVar10 + -0x30;
        func_0x00010752ad64();
        cRam00000001131ad3b0 = cVar3;
        puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffffffffff00);
        ppuVar9 = ppuVar10 + 0x38;
        func_0x00010752ad64(ppuVar9);
        puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffffffffff00);
        ppuVar10 = ppuVar10 + 0x178;
        func_0x00010752ad64();
        puStack_810 = &UNK_10e52b660;
        ppuStack_808 = (undefined **)0x0;
        uStack_800 = 0;
        puStack_7f8 = (undefined8 *)0x0;
        ppuVar19 = &puStack_810;
        FUN_10752b170(ppuVar19,999,ppuVar10);
        FUN_1075317c0(&puStack_810,param_8,0x14);
        FUN_10752f724(auStack_790,&puStack_810,10,ppuVar9);
        FUN_10752cc38(auStack_790,&puStack_810,0);
        FUN_107531eb0(auStack_790,&puStack_810,0);
        FUN_107530ee8(&puStack_810,param_10,param_11,param_12,5);
        if ((int)ppuVar10 != 0) {
          puVar12 = puStack_810;
          param_10 = ppuStack_808;
          FUN_107529014();
          puStack_260 = puVar12;
          ppuStack_258 = param_10;
          while (puStack_260 != (undefined *)0x0) {
            if ((undefined **)ppuStack_258[7] != ppuVar19) {
              param_10 = ppuVar19;
              FUN_10752903c();
            }
            func_0x000107529088(&puStack_260);
          }
        }
        puStack_828 = (undefined8 *)0x0;
        puStack_820 = (undefined8 *)0x0;
        puStack_818 = (undefined8 *)0x0;
        if (puStack_7f8 != (undefined8 *)0x0) {
          if ((ulong)puStack_7f8 >> 0x3d != 0) goto LAB_107528dc0;
          puVar8 = puStack_7f8;
          ppuStack_240 = &puStack_818;
          FUN_107529de8();
          puVar16 = (undefined8 *)((long)puVar8 - ((long)puStack_820 - (long)puStack_828));
          _memcpy(puVar16);
          puVar13 = puStack_828;
          puStack_828 = puVar16;
          puStack_820 = puVar8;
          puStack_818 = puVar8 + (long)param_10;
          func_0x00010752ac90(puVar13);
        }
        puVar12 = puStack_810;
        ppuVar9 = ppuStack_808;
        FUN_107529014();
        puStack_838 = puVar12;
        puVar13 = puStack_828;
        while (ppuStack_830 = ppuVar9, puStack_828 = puVar13, puStack_838 != (undefined *)0x0) {
          if (puStack_820 < puStack_818) {
            puVar12 = ppuVar9[7];
            ppuVar9[7] = (undefined *)0x0;
            puVar18 = puStack_820 + 1;
            *puStack_820 = puVar12;
          }
          else {
            lVar17 = (long)puStack_820 - (long)puVar13;
            lVar14 = lVar17 >> 3;
            uVar1 = lVar14 + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_107529dd4();
              goto LAB_107528dc4;
            }
            uVar15 = (long)puStack_818 - (long)puVar13 >> 2;
            if (uVar15 <= uVar1) {
              uVar15 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_818 - (long)puVar13)) {
              uVar15 = 0x1fffffffffffffff;
            }
            if (uVar15 == 0) {
              puVar13 = (undefined8 *)0x0;
              lVar11 = lVar17;
              ppuStack_240 = &puStack_818;
            }
            else {
              ppuStack_240 = &puStack_818;
              FUN_107529de8();
              lVar14 = (long)puStack_820 - (long)puStack_828 >> 3;
              lVar11 = (long)puStack_820 - (long)puStack_828;
            }
            puVar8 = (undefined8 *)(uVar15 + lVar17);
            puVar12 = ppuVar9[7];
            ppuVar9[7] = (undefined *)0x0;
            puVar18 = puVar8 + 1;
            *puVar8 = puVar12;
            _memcpy(puVar8 + -lVar14,puStack_828,lVar11);
            puVar16 = puStack_828;
            puStack_828 = puVar8 + -lVar14;
            puStack_820 = puVar18;
            puStack_818 = (undefined8 *)(uVar15 + (long)puVar13 * 8);
            func_0x00010752ac90(puVar16);
          }
          puStack_820 = puVar18;
          func_0x000107529088(&puStack_838);
          ppuVar9 = ppuStack_830;
          puVar13 = puStack_828;
        }
        uVar6 = puVar13 == puStack_820;
        if (!(bool)uVar6) {
          FUN_107529f9c(puVar13,puStack_820,
                        LZCOUNT((long)puStack_820 - (long)puVar13 >> 3) << 1 ^ 0x7e,1);
        }
        FUN_10752e170(&puStack_260,&puStack_828,auStack_790,&lStack_1f0,param_5);
        FUN_10752e2ac(puStack_260);
        FUN_10752abd8(&puStack_260);
        func_0x00010752a9a0(&puStack_828);
        FUN_10752aa28(&puStack_810);
      }
      else {
        func_0x00010752ace4();
        ppuVar10 = &puStack_6f8;
        func_0x0001077ca988(&puStack_6f8,ppuVar9,&lStack_1f0);
        uVar1 = uStack_530;
        if (-1 < (long)uStack_528) {
          uVar1 = uStack_528 >> 0x38;
        }
        if (uVar1 == 0) {
          ppuVar19 = (undefined **)0x0;
          ppuVar9 = ppuVar10;
        }
        else {
          ppuVar19 = &puStack_538;
          func_0x0001000e107c(ppuVar19,param_4);
          ppuVar9 = ppuVar19;
        }
        if ((((*(byte *)(param_4 + 0x30) & 1) == 0) && ((*(byte *)(param_4 + 0x50) & 1) == 0)) &&
           ((*(byte *)(param_4 + 0x70) & 1) == 0)) goto LAB_1075289dc;
        ppuVar9 = (undefined **)auStack_520;
        func_0x0001072eba10(ppuVar9,param_4 + 0x18);
        if ((int)ppuVar9 == 0) goto LAB_1075289dc;
        ppuVar9 = (undefined **)auStack_500;
        func_0x0001072eba10(ppuVar9,param_4 + 0x38);
        if ((int)ppuVar9 == 0) goto LAB_1075289dc;
        ppuVar9 = (undefined **)auStack_4e0;
        func_0x0001072eba10(ppuVar9,param_4 + 0x58);
        uVar6 = ((param_3 ^ 1) & (uint)ppuVar19) == 1;
        if ((!(bool)uVar6) || ((int)ppuVar9 == 0)) goto LAB_1075289dc;
        func_0x000104c003e8(param_6);
      }
      func_0x000107324968(&lStack_1f0);
      FUN_107323f90(&puStack_7c0);
      func_0x00010752aaa0(auStack_790);
    }
    else {
      __ZNSt13runtime_errorC1EPKc(auStack_7b0,&UNK_10f416276);
      func_0x0001052b2bd0(&lStack_1f0,auStack_7b0);
      func_0x00010752ab68(auStack_790,&lStack_1f0);
      func_0x00010752ad58();
      func_0x00010752acf4();
      __ZNSt13exception_ptrD1Ev(&lStack_1f0);
      __ZNSt13runtime_errorD1Ev(auStack_7b0);
    }
  }
  else {
    func_0x000107878d14(&lStack_1f0,auStack_e0);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_7a0,&lStack_1f0);
    func_0x0001052b2bd0(&puStack_260,auStack_7a0);
    func_0x00010752ab68(auStack_790,&puStack_260);
    func_0x00010752ad58();
    func_0x00010752acf4();
    __ZNSt13exception_ptrD1Ev(&puStack_260);
    __ZNSt13runtime_errorD1Ev(auStack_7a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1f0);
  }
  FUN_107326ea8(auStack_e0);
  func_0x00010752ad8c(uStack_78);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_107528dc0:
  FUN_107529dd4();
LAB_107528dc4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x107528dc8);
  (*pcVar5)();
}



/* Entry: 107528fd8; end: 107529013;  */

undefined8 * FUN_107528fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_107323f90(&uStack_30);
  return param_1;
}


