/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b492330; end: 10b492337;  */

void FUN_10b492330(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b492bd8(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492338; end: 10b49236f;  */

long FUN_10b492338(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cec540);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b492370; end: 10b492373;  */

void FUN_10b492370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492374; end: 10b492397;  */

undefined8 FUN_10b492374(undefined8 param_1)

{
  FUN_10b492398(param_1,0);
  return param_1;
}



/* Entry: 10b492398; end: 10b4923af;  */

void FUN_10b492398(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b492c54(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4923b0; end: 10b4923cb;  */

void FUN_10b4923b0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b492c54(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4923cc; end: 10b492417;  */

void FUN_10b4923cc(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x00010b49259c();
  if (unaff_x21 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110cec560;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = unaff_x21;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10b492418; end: 10b49241b;  */

void FUN_10b492418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49241c; end: 10b49242f;  */

void FUN_10b49241c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492430; end: 10b492437;  */

void FUN_10b492430(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b492c54(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492438; end: 10b49246f;  */

long FUN_10b492438(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cec5a0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b492470; end: 10b4925bb;  */

void FUN_10b492470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4925bc; end: 10b4926bf;  */

bool FUN_10b4925bc(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 auStack_58 [3];
  
  if (*(int *)(*param_1 + 4) == -1) {
    bVar1 = false;
  }
  else {
    func_0x00010b492cd8();
    func_0x00010b492cec();
    _read();
    FUN_10b494a20();
    puVar2 = auStack_58;
    func_0x000107c28148();
    func_0x00010b492d50();
    (*extraout_x8)();
    func_0x00010b492cd0();
    bVar1 = unaff_x20 == param_1;
    if (!bVar1) {
      if (param_1 == (long *)0xffffffffffffffff) {
        ___error();
        func_0x00010b492d3c(*(undefined4 *)puVar2,4,*(undefined4 *)*unaff_x19);
      }
      else {
        FUN_10b494a20();
        func_0x00010b492d44(*(undefined8 *)(*(long *)*puVar2 + 8));
        func_0x00010b492cd0();
      }
    }
  }
  return bVar1;
}



/* Entry: 10b4926c0; end: 10b4926c7;  */

void FUN_10b4926c0(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[1] != -1) {
    FUN_10b490b24(puVar1[1],0,*puVar1);
    _close(puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 10b4926c8; end: 10b492707;  */

void FUN_10b4926c8(undefined4 *param_1)

{
  if (param_1[1] != -1) {
    FUN_10b490b24(param_1[1],0,*param_1);
    _close(param_1[1]);
    param_1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 10b492708; end: 10b4928b3;  */

void FUN_10b492708(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  
  plVar5 = param_2;
  func_0x00010b492d34();
  *plVar5 = 0;
  puVar1 = (undefined4 *)0x10;
  plStack_38 = plVar5;
  __Znwm();
  *puVar1 = param_3;
  puVar1[1] = 0xffffffff;
  *(undefined8 *)(puVar1 + 2) = 0;
  ppuStack_78 = (undefined **)0x0;
  FUN_10b492bfc(plVar5);
  pppuVar2 = &ppuStack_78;
  func_0x00010b492bd8();
  uStack_50 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_40 = 1;
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar5 = param_2;
  }
  pppuStack_48 = pppuVar2;
  _open(plVar5,0x1000000);
  *(int *)(*plStack_38 + 4) = (int)plVar5;
  FUN_10b494a20();
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_110cec4b0;
  uStack_70 = 0;
  uStack_58 = 0x24;
  puVar3 = &uStack_50;
  func_0x000107c28148(puVar3);
  (*(code *)**(undefined8 **)*plVar5)((undefined8 *)*plVar5,&ppuStack_78,puVar3);
  FUN_10b490bf0(&ppuStack_78);
  puVar1 = (undefined4 *)(ulong)*(uint *)(*plStack_38 + 4);
  if (*(uint *)(*plStack_38 + 4) == 0xffffffff) {
    ___error();
    func_0x00010b492d14(*puVar1);
  }
  else {
    _lseek(puVar1,0,2);
    puVar4 = puVar1;
    if (puVar1 != (undefined4 *)0xffffffffffffffff) {
      puVar4 = (undefined4 *)(ulong)*(uint *)(*plStack_38 + 4);
      _lseek(puVar4,0,0);
      plVar5 = plStack_38;
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 **)(*plStack_38 + 8) = puVar1;
        plStack_38 = (long *)0x0;
        goto LAB_10b492850;
      }
    }
    ___error();
    func_0x00010b492d14(*puVar4);
  }
  plVar5 = (long *)0x0;
LAB_10b492850:
  *param_1 = plVar5;
  func_0x00010b492274(&plStack_38);
  return;
}



/* Entry: 10b4928b4; end: 10b4929ab;  */

bool FUN_10b4928b4(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [40];
  undefined8 auStack_48 [3];
  
  if (*(int *)(*param_1 + 4) == -1) {
    bVar1 = false;
  }
  else {
    func_0x00010b492cd8();
    func_0x00010b492cec();
    _write();
    FUN_10b494a20();
    FUN_10b491044(auStack_70,0x27,*(undefined4 *)*unaff_x19);
    puVar2 = auStack_48;
    func_0x000107c28148();
    func_0x00010b492d50();
    (*extraout_x8)();
    func_0x00010b492cd0();
    bVar1 = unaff_x20 == param_1;
    if (!bVar1) {
      if (param_1 == (long *)0xffffffffffffffff) {
        ___error();
        func_0x00010b492d3c(*(undefined4 *)puVar2,6,*(undefined4 *)*unaff_x19);
      }
      else {
        FUN_10b494a20();
        FUN_10b491044(auStack_70,0xb,*(undefined4 *)*unaff_x19);
        func_0x00010b492d44(*(undefined8 *)(*(long *)*puVar2 + 8));
        func_0x00010b492cd0();
      }
    }
  }
  return bVar1;
}



/* Entry: 10b4929ac; end: 10b4929e3;  */

bool FUN_10b4929ac(long *param_1,long param_2)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 4) != -1) && (iVar1 = *(int *)(param_2 + 4), iVar1 != -1)) {
    _fcopyfile(iVar1,*(int *)(*param_1 + 4),0,8);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10b4929e4; end: 10b492a23;  */

void FUN_10b4929e4(undefined4 *param_1)

{
  if (param_1[1] != -1) {
    FUN_10b490b24(param_1[1],1,*param_1);
    _close(param_1[1]);
    param_1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 10b492a24; end: 10b492b83;  */

void FUN_10b492a24(undefined8 *param_1,long *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 auStack_80 [5];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  undefined4 uStack_34;
  
  uStack_34 = param_4;
  FUN_10b492b84(&plStack_40);
  func_0x00010b492ba8(auStack_80,&uStack_34);
  uVar2 = auStack_80[0];
  auStack_80[0] = 0;
  FUN_10b492c78(plStack_40,uVar2);
  puVar3 = auStack_80;
  FUN_10b492c54();
  uStack_58 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_48 = 1;
  uVar1 = 0x1000209;
  if (param_3 == 0) {
    uVar1 = 0x1000601;
  }
  plVar4 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar4 = param_2;
  }
  puStack_50 = puVar3;
  _open(plVar4,uVar1);
  *(int *)(*plStack_40 + 4) = (int)plVar4;
  FUN_10b494a20();
  FUN_10b491044(auStack_80,0x25,uStack_34);
  puVar3 = &uStack_58;
  func_0x000107c28148(puVar3);
  (*(code *)**(undefined8 **)*plVar4)((undefined8 *)*plVar4,auStack_80,puVar3);
  puVar3 = auStack_80;
  FUN_10b490bf0();
  plVar4 = plStack_40;
  if (*(int *)(*plStack_40 + 4) == -1) {
    ___error();
    func_0x00010b492d3c(*(undefined4 *)puVar3,7,uStack_34);
    plVar4 = (long *)0x0;
  }
  else {
    plStack_40 = (long *)0x0;
  }
  *param_1 = plVar4;
  FUN_10b492374(&plStack_40);
  return;
}



/* Entry: 10b492b84; end: 10b492bfb;  */

void FUN_10b492b84(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010b492d34();
  *param_2 = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 10b492bfc; end: 10b492c13;  */

void FUN_10b492bfc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b492c30(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b492c14; end: 10b492c2f;  */

void FUN_10b492c14(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b492c30(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492c30; end: 10b492c53;  */

undefined8 FUN_10b492c30(undefined8 param_1)

{
  FUN_10b4926c8();
  return param_1;
}



/* Entry: 10b492c54; end: 10b492c77;  */

undefined8 FUN_10b492c54(undefined8 param_1)

{
  FUN_10b492c78(param_1,0);
  return param_1;
}



/* Entry: 10b492c78; end: 10b492c8f;  */

void FUN_10b492c78(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b492cac(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b492c90; end: 10b492cab;  */

void FUN_10b492c90(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b492cac(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492cac; end: 10b492ccf;  */

undefined8 FUN_10b492cac(undefined8 param_1)

{
  FUN_10b4929e4();
  return param_1;
}



/* Entry: 10b492cd0; end: 10b492d63;  */

void FUN_10b492cd0(void)

{
  undefined **ppuStack0000000000000000;
  
  ppuStack0000000000000000 = &PTR_FUN_110cec460;
  func_0x000107c278a8(&stack0x00000008);
  return;
}



/* Entry: 10b492d64; end: 10b492f3f;  */

bool FUN_10b492d64(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [40];
  
  if ((*(byte *)((long)param_1 + 0x9b) & 1) == 0) {
    puVar3 = param_1;
    FUN_10b494a20();
    FUN_10b491044(auStack_68,0x12,*(undefined4 *)(param_1 + 1));
    func_0x00010b4947e4(*puVar3);
    func_0x00010b4947d4();
    func_0x00010b494804();
  }
  FUN_10b4912d0(apuStack_78,param_1[2],param_4,param_5);
  if (apuStack_78[0] == (undefined1 *)0x0) {
    FUN_10b494a20();
    func_0x00010b494958();
    func_0x00010b4948fc();
    func_0x00010b4947e4(*param_4);
    func_0x00010b4947d4();
    func_0x00010b494804();
    if (cRam00000001137f64d0 == '\x01') {
      FUN_10b494a20();
      func_0x00010b494958();
      FUN_10b491044(auStack_68,0xf);
      func_0x00010b4947e4(*param_4);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = true;
  }
  else {
    lVar1 = param_3 << 4;
    do {
      lVar6 = lVar1;
      puVar5 = apuStack_78[0];
      if (lVar6 == 0) break;
      puVar4 = apuStack_78[0];
      FUN_10b4928b4(apuStack_78[0],*param_2,param_2[1]);
      puVar5 = apuStack_78[0];
      lVar1 = lVar6 + -0x10;
      param_2 = param_2 + 2;
    } while (((ulong)puVar4 & 1) != 0);
    func_0x00010b4929dc();
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        func_0x00010b49489c();
        func_0x00010b49494c();
        *puVar5 = 1;
        func_0x00010b494844();
      }
    }
    else {
      if ((param_5 & 1) == 0) {
        FUN_10b491414(param_1[2],param_4);
      }
      FUN_10b494a20();
      func_0x00010b494958();
      func_0x00010b4948fc();
      func_0x00010b4947e4(*param_4);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = lVar6 != 0;
  }
  func_0x000105640438(apuStack_78);
  return bVar2;
}



/* Entry: 10b492f40; end: 10b493163;  */

long * FUN_10b492f40(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  plVar4 = param_1 + 3;
  func_0x000107c278c4();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar3 = 0;
        if (plVar6 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar3 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10b493000;
          plVar1 = (long *)plVar5[1];
          if (plVar1 != plVar4) break;
          plVar1 = plVar5 + 2;
          func_0x000107c278d0(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) goto LAB_10b493134;
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar1 = (long *)((ulong)plVar1 & uVar7);
        }
        else if (plVar6 <= plVar1) {
          uVar3 = 0;
          if (plVar6 != (long *)0x0) {
            uVar3 = (ulong)plVar1 / (ulong)plVar6;
          }
          plVar1 = (long *)((long)plVar1 - uVar3 * (long)plVar6);
        }
      } while (plVar1 == unaff_x24);
    }
  }
LAB_10b493000:
  plVar1 = param_1 + 2;
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar5 + 2,param_2);
  *(undefined1 *)(plVar5 + 5) = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    func_0x00010730c3f4(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar2 = *param_1;
  plVar4 = *(long **)(lVar2 + (long)unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar5 = *plVar1;
    *plVar1 = (long)plVar5;
    *(long **)(lVar2 + (long)unaff_x24 * 8) = plVar1;
    if (*plVar5 != 0) {
      plVar4 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
      *(long **)(lVar2 + (long)plVar4 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010b494944();
LAB_10b493134:
  return plVar5 + 5;
}



/* Entry: 10b493164; end: 10b49318b;  */

void FUN_10b493164(void)

{
  func_0x00010b494814();
  func_0x00010b4948c4();
  FUN_10b492d64();
  return;
}



/* Entry: 10b49318c; end: 10b49319b;  */

bool FUN_10b49318c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [40];
  
  if ((*(byte *)((long)param_1 + 0x9b) & 1) == 0) {
    puVar3 = param_1;
    FUN_10b494a20();
    FUN_10b491044(auStack_68,0x12,*(undefined4 *)(param_1 + 1));
    func_0x00010b4947e4(*puVar3);
    func_0x00010b4947d4();
    func_0x00010b494804();
  }
  FUN_10b4912d0(apuStack_78,param_1[2],param_3,0);
  if (apuStack_78[0] == (undefined1 *)0x0) {
    FUN_10b494a20();
    func_0x00010b494958();
    func_0x00010b4948fc();
    func_0x00010b4947e4(*param_3);
    func_0x00010b4947d4();
    func_0x00010b494804();
    if (cRam00000001137f64d0 == '\x01') {
      FUN_10b494a20();
      func_0x00010b494958();
      FUN_10b491044(auStack_68,0xf);
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = true;
  }
  else {
    lVar1 = 0x10;
    do {
      lVar6 = lVar1;
      puVar5 = apuStack_78[0];
      if (lVar6 == 0) break;
      puVar4 = apuStack_78[0];
      FUN_10b4928b4(apuStack_78[0],*param_2,param_2[1]);
      puVar5 = apuStack_78[0];
      lVar1 = lVar6 + -0x10;
      param_2 = param_2 + 2;
    } while (((ulong)puVar4 & 1) != 0);
    func_0x00010b4929dc();
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        func_0x00010b49489c();
        func_0x00010b49494c();
        *puVar5 = 1;
        func_0x00010b494844();
      }
    }
    else {
      FUN_10b491414(param_1[2],param_3);
      FUN_10b494a20();
      func_0x00010b494958();
      func_0x00010b4948fc();
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = lVar6 != 0;
  }
  func_0x000105640438(apuStack_78);
  return bVar2;
}



/* Entry: 10b49319c; end: 10b4931c3;  */

void FUN_10b49319c(void)

{
  func_0x00010b494814();
  func_0x00010b4948c4();
  FUN_10b492d64();
  return;
}



/* Entry: 10b4931c4; end: 10b4931d3;  */

/* WARNING: Removing unreachable block (ram,0x00010b492e10) */

bool FUN_10b4931c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [40];
  
  if ((*(byte *)((long)param_1 + 0x9b) & 1) == 0) {
    puVar3 = param_1;
    FUN_10b494a20();
    FUN_10b491044(auStack_68,0x12,*(undefined4 *)(param_1 + 1));
    func_0x00010b4947e4(*puVar3);
    func_0x00010b4947d4();
    func_0x00010b494804();
  }
  FUN_10b4912d0(apuStack_78,param_1[2],param_3,1);
  if (apuStack_78[0] == (undefined1 *)0x0) {
    FUN_10b494a20();
    func_0x00010b494958();
    func_0x00010b4948fc();
    func_0x00010b4947e4(*param_3);
    func_0x00010b4947d4();
    func_0x00010b494804();
    if (cRam00000001137f64d0 == '\x01') {
      FUN_10b494a20();
      func_0x00010b494958();
      FUN_10b491044(auStack_68,0xf);
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = true;
  }
  else {
    lVar1 = 0x10;
    do {
      lVar6 = lVar1;
      puVar5 = apuStack_78[0];
      if (lVar6 == 0) break;
      puVar4 = apuStack_78[0];
      FUN_10b4928b4(apuStack_78[0],*param_2,param_2[1]);
      puVar5 = apuStack_78[0];
      lVar1 = lVar6 + -0x10;
      param_2 = param_2 + 2;
    } while (((ulong)puVar4 & 1) != 0);
    func_0x00010b4929dc();
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        func_0x00010b49489c();
        func_0x00010b49494c();
        *puVar5 = 1;
        func_0x00010b494844();
      }
    }
    else {
      FUN_10b494a20();
      func_0x00010b494958();
      func_0x00010b4948fc();
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = lVar6 != 0;
  }
  func_0x000105640438(apuStack_78);
  return bVar2;
}



/* Entry: 10b4931d4; end: 10b493287;  */

undefined8 FUN_10b4931d4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  undefined8 *puVar5;
  long *plStack_58;
  long **pplStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  pplVar3 = (long **)(param_2[1] - *param_2 >> 4);
  func_0x000108947890(&lStack_48);
  puVar1 = (undefined8 *)param_2[1];
  for (puVar5 = (undefined8 *)*param_2; puVar5 != puVar1; puVar5 = puVar5 + 2) {
    plVar2 = (long *)*puVar5;
    (**(code **)(*plVar2 + 0x18))();
    pplVar4 = &plStack_58;
    plStack_58 = plVar2;
    pplStack_50 = pplVar3;
    func_0x000108947a70(&lStack_48);
    pplVar3 = pplVar4;
  }
  FUN_10b492d64(param_1,lStack_48,lStack_40 - lStack_48 >> 4,param_3,0);
  func_0x00010894593c(&lStack_48);
  return param_1;
}



/* Entry: 10b493288; end: 10b4932a3;  */

bool FUN_10b493288(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [40];
  
  puVar7 = (undefined8 *)*param_2;
  lVar1 = param_2[1];
  if ((*(byte *)((long)param_1 + 0x9b) & 1) == 0) {
    puVar3 = param_1;
    FUN_10b494a20();
    FUN_10b491044(auStack_68,0x12,*(undefined4 *)(param_1 + 1));
    func_0x00010b4947e4(*puVar3);
    func_0x00010b4947d4();
    func_0x00010b494804();
  }
  FUN_10b4912d0(apuStack_78,param_1[2],param_3,0);
  if (apuStack_78[0] == (undefined1 *)0x0) {
    FUN_10b494a20();
    func_0x00010b494958();
    func_0x00010b4948fc();
    func_0x00010b4947e4(*param_3);
    func_0x00010b4947d4();
    func_0x00010b494804();
    if (cRam00000001137f64d0 == '\x01') {
      FUN_10b494a20();
      func_0x00010b494958();
      FUN_10b491044(auStack_68,0xf);
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = true;
  }
  else {
    lVar1 = (lVar1 - (long)puVar7 >> 4) << 4;
    do {
      lVar6 = lVar1;
      puVar5 = apuStack_78[0];
      if (lVar6 == 0) break;
      puVar4 = apuStack_78[0];
      FUN_10b4928b4(apuStack_78[0],*puVar7,puVar7[1]);
      puVar5 = apuStack_78[0];
      lVar1 = lVar6 + -0x10;
      puVar7 = puVar7 + 2;
    } while (((ulong)puVar4 & 1) != 0);
    func_0x00010b4929dc();
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        func_0x00010b49489c();
        func_0x00010b49494c();
        *puVar5 = 1;
        func_0x00010b494844();
      }
    }
    else {
      FUN_10b491414(param_1[2],param_3);
      FUN_10b494a20();
      func_0x00010b494958();
      func_0x00010b4948fc();
      func_0x00010b4947e4(*param_3);
      func_0x00010b4947d4();
      func_0x00010b494804();
    }
    bVar2 = lVar6 != 0;
  }
  func_0x000105640438(apuStack_78);
  return bVar2;
}



/* Entry: 10b4932a4; end: 10b49349b;  */

undefined8 FUN_10b4932a4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 **appuStack_b8 [2];
  char cStack_a1;
  byte bStack_a0;
  undefined8 **appuStack_98 [2];
  char cStack_81;
  char cStack_80;
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined1 uStack_58;
  
  func_0x000107c316c8(auStack_78,&UNK_10f76f297);
  lVar3 = *param_2;
  if ((lVar3 == 0) || (func_0x00010b49482c(), lVar3 == 0)) {
    uVar7 = 1;
  }
  else {
    FUN_10b49127c(appuStack_98,*(undefined8 *)(lVar3 + 0x10),param_3);
    FUN_10b49127c(appuStack_b8,*(undefined8 *)(param_1 + 0x10),param_4);
    uVar7 = 1;
    if ((cStack_80 == '\x01') && ((bStack_a0 & 1) != 0)) {
      pppuVar4 = (undefined8 ***)appuStack_98[0];
      if (-1 < cStack_81) {
        pppuVar4 = appuStack_98;
      }
      if (-1 < cStack_a1) {
        appuStack_b8[0] = appuStack_b8;
      }
      _rename(pppuVar4,appuStack_b8[0]);
      if ((int)pppuVar4 == 0) {
        lVar1 = param_1 + 0x30;
        lVar2 = lVar3 + 0x30;
        while( true ) {
          uStack_58 = 1;
          lStack_60 = lVar1;
          __ZNSt3__15mutex4lockEv(lVar1);
          lVar5 = lVar2;
          __ZNSt3__15mutex8try_lockEv();
          if ((int)lVar5 != 0) break;
          func_0x00010b4948e8();
          _sched_yield();
          uStack_58 = 1;
          lStack_60 = lVar2;
          __ZNSt3__15mutex4lockEv(lVar2);
          lVar5 = lVar1;
          __ZNSt3__15mutex8try_lockEv();
          if ((int)lVar5 != 0) break;
          func_0x00010b4948e8();
          _sched_yield();
        }
        lStack_60 = 0;
        uStack_58 = 0;
        func_0x00010b4948e8();
        if (*(char *)(lVar3 + 0x98) == '\x01') {
          if (*(char *)(lVar3 + 0x99) == '\x01') {
            func_0x00010b494414(lVar3 + 0x70,param_3);
          }
          else {
            puVar6 = (undefined1 *)(lVar3 + 0x70);
            FUN_10b492f40(puVar6,param_3);
            *puVar6 = 0;
          }
        }
        if (*(char *)(param_1 + 0x98) == '\x01') {
          puVar6 = (undefined1 *)(param_1 + 0x70);
          FUN_10b492f40(puVar6,param_4);
          *puVar6 = 1;
        }
        func_0x00010b4948f0();
        uVar7 = 0;
      }
    }
    func_0x000107c279a4(appuStack_b8);
    func_0x000107c279a4(appuStack_98);
  }
  func_0x000107c316d0(auStack_78);
  return uVar7;
}



/* Entry: 10b49349c; end: 10b4935d7;  */

undefined8 FUN_10b49349c(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  func_0x000107c316c8(auStack_48,&UNK_10f76f297);
  lVar1 = *param_2;
  if ((lVar1 != 0) && (func_0x00010b49482c(), lVar1 != 0)) {
    puVar2 = *(undefined1 **)(param_1 + 0x10);
    FUN_10b49135c(puVar2,*(undefined8 *)(lVar1 + 0x10),param_3,param_4);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b49489c();
      if (*(char *)(param_1 + 0x98) == '\x01') {
        func_0x00010b49494c();
        *puVar2 = 1;
      }
      func_0x00010b494844();
      uVar3 = 0;
      goto LAB_10b49357c;
    }
    FUN_10b494a20();
    func_0x00010b494958();
    FUN_10b491044(auStack_70,0x13);
    func_0x000107c278b8(auStack_88,"reason");
    puVar2 = auStack_70;
    FUN_10b490c34(puVar2,auStack_88,&UNK_10f76f2ab);
    func_0x00010b4947e4(*param_4,puVar2);
    func_0x00010b4947d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    func_0x00010b494930();
  }
  uVar3 = 1;
LAB_10b49357c:
  func_0x000107c316d0(auStack_48);
  return uVar3;
}



/* Entry: 10b4935d8; end: 10b49361b;  */

void FUN_10b4935d8(long param_1,undefined4 param_2)

{
  long extraout_x8;
  undefined8 *unaff_x20;
  
  func_0x00010b4948dc();
  func_0x00010b494878();
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  unaff_x20[1] = param_1;
  *(long *)(param_1 + 0x18) = extraout_x8 + 0x10;
  *unaff_x20 = (long *)(param_1 + 0x18);
  return;
}



/* Entry: 10b49361c; end: 10b493697;  */

void FUN_10b49361c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b4948dc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cec680;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = &PTR_DAT_110cec748;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c27d78(&uStack_40);
  *unaff_x20 = param_1 + 3;
  unaff_x20[1] = param_1;
  return;
}



/* Entry: 10b493698; end: 10b493d53;  */

void FUN_10b493698(long *param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  long extraout_x8;
  int extraout_w10;
  long lVar6;
  undefined8 *unaff_x22;
  long **pplVar7;
  undefined1 auStack_108 [24];
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *aplStack_c0 [2];
  char cStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  byte bStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_58 [24];
  
  func_0x000107c316c8(auStack_108,&UNK_10f76f2b8);
  if ((*(char *)(param_2 + 0xb0) == '\x01') && (*(long *)(param_2 + 0x20) == 0)) {
    if (*(char *)(param_2 + 0x98) == '\x01') {
      func_0x00010b494908();
      lVar6 = param_2 + 0x70;
      FUN_10b49444c(lVar6,param_3);
      if (lVar6 == 0) {
        unaff_x22 = (undefined8 *)(ulong)*(byte *)(param_2 + 0x99);
      }
      else {
        unaff_x22 = (undefined8 *)(ulong)(*(byte *)(lVar6 + 0x28) ^ 1);
      }
      func_0x00010b494910();
      if (((ulong)unaff_x22 & 1) == 0) goto LAB_10b4939a0;
      FUN_10b494a20();
      func_0x00010b494964();
      func_0x00010b4947ac();
      func_0x00010b4947e4(*unaff_x22);
      func_0x00010b4947a0();
      func_0x00010b4947dc();
      func_0x00010b4947f0();
      func_0x00010b49478c();
    }
    else {
LAB_10b4939a0:
      FUN_10b49127c(&uStack_a0,*(undefined8 *)(param_2 + 0x10),param_3);
      if ((bStack_88 & 1) == 0) {
        FUN_10b494a20();
        func_0x00010b494964();
        func_0x00010b4947ac();
        func_0x00010b4947e4(*unaff_x22);
        func_0x00010b4947a0();
        func_0x00010b4947dc();
        func_0x00010b4947f0();
        func_0x00010b49478c();
      }
      else {
        FUN_10b490d5c(aplStack_c0,&uStack_a0,param_2 + 0xa0);
        if (cStack_b0 == '\x01') {
          FUN_10b49361c(&lStack_80,aplStack_c0);
LAB_10b493b6c:
          func_0x00010b49478c();
        }
        else {
          pplVar7 = (long **)0x10;
          bVar5 = true;
          switch(uStack_a8) {
          case 0:
          case 4:
            goto code_r0x00010b493b30;
          case 2:
            pplVar7 = (long **)0x11;
            break;
          case 3:
            pplVar7 = (long **)0x12;
            break;
          case 5:
            pplVar7 = (long **)0x14;
            break;
          case 6:
            pplVar7 = (long **)0x13;
            break;
          case 7:
            pplVar7 = (long **)0x16;
            break;
          case 8:
            pplVar7 = (long **)0x15;
          }
          FUN_10b491044(&plStack_f0,0x2a,*(undefined4 *)(param_2 + 8));
          func_0x000107c278b8(auStack_58,PTR_DAT_113374aa0);
          ppuVar1 = &PTR_DAT_113374aa8 + (long)pplVar7;
          pplVar7 = &plStack_f0;
          FUN_10b490c34(pplVar7,auStack_58,*ppuVar1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
          plVar3 = &lStack_80;
          FUN_10b492194(plVar3,pplVar7);
          func_0x00010b494930();
          FUN_10b494a20();
          func_0x00010b4947e4(*plVar3);
          func_0x00010b4947a0();
          func_0x00010b4947dc();
          bVar5 = false;
code_r0x00010b493b30:
          if ((uStack_a8 < 9) && ((1 << (ulong)(uStack_a8 & 0x1f) & 0x1afU) != 0)) {
            FUN_10b494a20();
            func_0x00010b494964();
            func_0x00010b4947ac();
            func_0x00010b4947e4(*pplVar7);
            func_0x00010b4947a0();
            func_0x00010b4947dc();
            func_0x00010b4947f0();
            goto LAB_10b493b6c;
          }
          if (!bVar5) {
            FUN_10b494a20();
            func_0x00010b494964();
            FUN_10b491044(&lStack_80,0x29);
            func_0x00010b4947e4(*pplVar7);
            func_0x00010b4947a0();
            func_0x00010b4947dc();
          }
          *param_1 = 0;
          param_1[1] = 0;
        }
        func_0x000107c27f18(aplStack_c0);
      }
      func_0x000107c279a4(&uStack_a0);
    }
    if (*param_1 != 0) goto LAB_10b493a7c;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  func_0x00010b10c000(param_1);
  uStack_a0 = *(undefined8 *)(param_2 + 0x10);
  lStack_98 = *(long *)(param_2 + 0x18);
  if (lStack_98 != 0) {
    do {
      func_0x00010b4948b4();
    } while (extraout_w10 != 0);
  }
  FUN_10b4911fc(aplStack_c0);
  if (aplStack_c0[0] == (long *)0x0) {
    FUN_10b494a20();
    func_0x00010b49485c();
    func_0x00010b4947ac();
    func_0x00010b4947c4();
    func_0x00010b4947a0();
    func_0x00010b4947dc();
    func_0x00010b4947f0();
LAB_10b493a68:
    func_0x00010b49478c();
  }
  else {
    lVar6 = *(long *)(*aplStack_c0[0] + 8);
    plVar3 = *(long **)(param_2 + 0x20);
    if (plVar3 == (long *)0x0) {
      if (*(char *)(param_2 + 0xb8) == '\x01') {
        plStack_f0 = (long *)0x0;
        lStack_e8 = 0;
        uStack_e0 = 0;
        func_0x000107c2823c(&plStack_f0,lVar6);
        plVar3 = aplStack_c0[0];
        FUN_10b4925bc(aplStack_c0[0],plStack_f0,lVar6);
        if ((int)plVar3 == 0) {
          func_0x00010b494918();
LAB_10b493a44:
          FUN_10b4926c0(aplStack_c0[0]);
          FUN_10b494a20();
          func_0x00010b49485c();
          func_0x00010b4947ac();
          func_0x00010b4947c4();
          func_0x00010b4947a0();
          func_0x00010b4947dc();
          func_0x00010b4947f0();
          goto LAB_10b493a68;
        }
        FUN_10b4926c0(aplStack_c0[0]);
        func_0x000107c3171c(auStack_58,&plStack_f0);
        FUN_10b49361c(&lStack_80,auStack_58);
        func_0x00010b49478c();
        func_0x000107c27d78(auStack_58);
        func_0x00010b494918();
      }
      else {
        func_0x000107c31718(&plStack_f0,lVar6);
        if (plStack_f0 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else {
          plVar3 = plStack_f0;
          (**(code **)(*plStack_f0 + 0x20))();
        }
        if ((plVar3 == (long *)0x0) && (lVar6 != 0)) {
          FUN_10b4926c0();
          FUN_10b494a20();
          func_0x00010b49485c();
          func_0x00010b4947ac();
          func_0x00010b4947c4();
          func_0x00010b4947a0();
          func_0x00010b4947dc();
          func_0x00010b4947f0();
        }
        else {
          plVar4 = aplStack_c0[0];
          FUN_10b4925bc(aplStack_c0[0],plVar3,lVar6);
          if ((int)plVar4 == 0) {
            func_0x00010b494920();
            goto LAB_10b493a44;
          }
          FUN_10b4926c0(aplStack_c0[0]);
          FUN_10b49361c(&lStack_80,&plStack_f0);
        }
        func_0x00010b49478c();
        func_0x00010b494920();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x10))(&plStack_f0,plVar3,lVar6);
      plVar3 = aplStack_c0[0];
      if (plStack_f0 == (long *)0x0) {
LAB_10b493898:
        FUN_10b4926c0(aplStack_c0[0]);
        FUN_10b494a20();
        func_0x00010b49485c();
        func_0x00010b4947ac();
        func_0x00010b4947c4();
        func_0x00010b4947a0();
        func_0x00010b4947dc();
        func_0x00010b4947f0();
        param_1[1] = lStack_78;
        *param_1 = lStack_80;
      }
      else {
        plVar4 = plStack_f0;
        (**(code **)(*plStack_f0 + 0x18))();
        (**(code **)(*plStack_f0 + 0x18))();
        FUN_10b4925bc(plVar3,plVar4,lVar6);
        if ((int)plVar3 == 0) {
          if (plStack_f0 != (long *)0x0) {
            func_0x00010b494928();
            goto LAB_10b493a44;
          }
          goto LAB_10b493898;
        }
        FUN_10b4926c0(aplStack_c0[0]);
        lVar6 = 0x48;
        __Znwm();
        func_0x00010b494878();
        *(long *)(lVar6 + 0x18) = extraout_x8 + 0x10;
        *(undefined4 *)(lVar6 + 0x20) = 0;
        *(long *)(lVar6 + 0x30) = lStack_e8;
        *(long **)(lVar6 + 0x28) = plStack_f0;
        if (lStack_e8 != 0) {
          plVar3 = (long *)(lStack_e8 + 8);
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = *plVar3 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *param_1 = lVar6 + 0x18;
        param_1[1] = lVar6;
      }
      lStack_80 = 0;
      lStack_78 = 0;
      FUN_10b49469c(&lStack_80);
      func_0x00010b494928();
    }
  }
  func_0x000105640484(aplStack_c0);
  func_0x000107c281dc(&uStack_a0);
LAB_10b493a7c:
  func_0x000107c316d0(auStack_108);
  return;
}



/* Entry: 10b493d54; end: 10b493d5b;  */

void FUN_10b493d54(long param_1)

{
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b49253c(*(undefined8 *)(param_1 + 0x10));
  if (extraout_x9 == 0) {
    *(undefined1 *)unaff_x19 = 0;
  }
  else {
    func_0x00010b492474();
    unaff_x19[1] = uStack_30;
    *unaff_x19 = uStack_38;
    unaff_x19[2] = uStack_28;
    func_0x00010b49248c();
  }
  *(bool *)(unaff_x19 + 3) = extraout_x9 != 0;
  return;
}



/* Entry: 10b493d5c; end: 10b493e77;  */

void FUN_10b493d5c(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 auStack_58 [40];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3f800000;
  plVar5 = (long *)(param_3 + 0x10);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    FUN_10b491414(uVar2,plVar5 + 2);
    puVar3 = param_1;
    FUN_10b11e978(param_1,plVar5 + 2);
    uVar1 = (uint)uVar2 ^ 1;
    *puVar3 = uVar1;
    if ((uVar1 & 1) == 0) {
      if (*(char *)(param_2 + 0x98) == '\x01') {
        func_0x00010b494908();
        if (*(char *)(param_2 + 0x99) == '\x01') {
          func_0x00010b494414(param_2 + 0x70,plVar5 + 2);
        }
        else {
          puVar4 = (undefined1 *)(param_2 + 0x70);
          FUN_10b492f40(puVar4,plVar5 + 2);
          *puVar4 = 0;
        }
        func_0x00010b494910();
      }
    }
    else {
      FUN_10b494a20();
      func_0x00010b49485c();
      FUN_10b491044(auStack_58,0x11);
      func_0x00010b4947c4();
      func_0x00010b4947d4();
      func_0x00010b494894();
    }
  }
  return;
}



/* Entry: 10b493e78; end: 10b493eff;  */

void FUN_10b493e78(long param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  uRam00000001137f64d0 = 1;
  FUN_10b4911c4(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010730c388(param_1 + 0x70,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    lVar2 = *(long *)(param_1 + 0x78);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  func_0x00010b4948a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x30);
  return;
}



/* Entry: 10b493f00; end: 10b493fab;  */

uint FUN_10b493f00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auStack_58 [40];
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x00010b494908();
    lVar1 = param_1 + 0x70;
    FUN_10b49444c(lVar1,param_2);
    if (lVar1 == 0) {
      uVar3 = 0;
      bVar4 = *(byte *)(param_1 + 0x99) ^ 1;
    }
    else {
      bVar4 = 0;
      uVar3 = (uint)*(byte *)(lVar1 + 0x28);
    }
    func_0x00010b494910();
    if (bVar4 == 0) goto LAB_10b493f94;
  }
  FUN_10b494a20();
  func_0x00010b49485c();
  FUN_10b491044(auStack_58,0x23);
  func_0x00010b4947c4();
  func_0x00010b4947d4();
  func_0x00010b494894();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b491b9c(uVar2,param_2);
  uVar3 = (uint)uVar2;
LAB_10b493f94:
  return uVar3 & 1;
}



/* Entry: 10b493fac; end: 10b493ff3;  */

long FUN_10b493fac(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x70))();
  if ((int)plVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[2];
    FUN_10b49153c(lVar2);
    if ((param_2 & 1) == 0) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



/* Entry: 10b493ff4; end: 10b4940fb;  */

void FUN_10b493ff4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined1 extraout_w8;
  undefined *puVar9;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  
  if ((*(byte *)(param_2 + 0x98) & 1) != 0) {
    if (*(char *)(param_2 + 0x9a) == '\x01') {
      FUN_10b4915c8(param_1,*(undefined8 *)(param_2 + 0x10),param_2 + 0x70,param_2 + 0x30);
      func_0x00010b4948a4();
      func_0x00010b49489c();
      plVar8 = *(long **)(param_2 + 0x80);
      while (plVar8 != (long *)0x0) {
        if ((*(byte *)(plVar8 + 5) & 1) == 0) {
          plVar8 = (long *)(param_2 + 0x70);
          FUN_10b494520();
        }
        else {
          plVar8 = (long *)*plVar8;
        }
      }
    }
    else {
      func_0x00010b49489c();
      func_0x00010b4948a4();
      plVar8 = *(long **)(param_2 + 0x80);
      while (plVar8 != (long *)0x0) {
        if ((*(byte *)(plVar8 + 5) & 1) == 0) {
          plVar8 = (long *)(param_2 + 0x70);
          FUN_10b494520();
        }
        else {
          plVar8 = (long *)*plVar8;
        }
      }
      FUN_10b4915c8(param_1,*(undefined8 *)(param_2 + 0x10),param_2 + 0x70,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x30);
    return;
  }
  plVar8 = *(long **)(param_2 + 0x10);
  if (*plVar8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_78 = 0;
    plVar4 = plVar8;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_68 = 1;
    ppuVar2 = &PTR___tlv_bootstrap_11340da38;
    plStack_70 = plVar4;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = &PTR___tlv_bootstrap_11340da50;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = &PTR___tlv_bootstrap_11340da68;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = &PTR___tlv_bootstrap_11340da80;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    puVar9 = PTR___tlv_bootstrap_11340dab0;
    ppuVar2 = &PTR___tlv_bootstrap_11340dab0;
    ppuVar3 = ppuVar2;
    (*(code *)PTR___tlv_bootstrap_11340dab0)();
    ppuVar6 = &PTR___tlv_bootstrap_11340da98;
    if (((ulong)*ppuVar3 & 1) == 0) {
      ppuVar3 = ppuVar6;
      (*(code *)PTR___tlv_bootstrap_11340da98)();
      func_0x00010b4924d4();
      *(undefined1 *)ppuVar3 = extraout_w8;
    }
    puVar1 = PTR___tlv_bootstrap_11340da98;
    ppuVar3 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340da98)();
    func_0x00010563d420();
    plVar4 = (long *)(*plVar8 + 8);
    if (*(char *)(*plVar8 + 0x1f) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    _nftw(plVar4,FUN_10b491818,0x20,5);
    FUN_10b494a20();
    if ((undefined4 *)*plVar8 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*plVar8;
    }
    FUN_10b491044(auStack_a0,1,uVar7);
    func_0x000107c28148(&uStack_78);
    puVar5 = (undefined8 *)*plVar4;
    func_0x00010b492548(*(undefined8 *)*puVar5);
    func_0x00010b492514();
    FUN_10b494a20();
    if ((undefined4 *)*plVar8 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*plVar8;
    }
    FUN_10b491044(auStack_a0,2,uVar7);
    plVar4 = (long *)*puVar5;
    func_0x00010b492548(*(undefined8 *)(*plVar4 + 0x10));
    func_0x00010b492514();
    FUN_10b494a20();
    if ((undefined4 *)*plVar8 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*plVar8;
    }
    FUN_10b491044(auStack_a0,3,uVar7);
    func_0x00010b492548(*(undefined8 *)(*(long *)*plVar4 + 0x10));
    func_0x00010b492514();
    (*(code *)puVar9)();
    if (((ulong)*ppuVar2 & 1) == 0) {
      (*(code *)puVar1)();
      func_0x00010b4924d4();
      *(undefined1 *)ppuVar6 = 1;
    }
    puVar9 = *ppuVar3;
    param_1[1] = ppuVar3[1];
    *param_1 = puVar9;
    param_1[2] = ppuVar3[2];
    ppuVar3[1] = (undefined *)0x0;
    ppuVar3[2] = (undefined *)0x0;
    *ppuVar3 = (undefined *)0x0;
  }
  return;
}



/* Entry: 10b4940fc; end: 10b4941d7;  */

undefined8 *
FUN_10b4940fc(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,byte param_7,undefined8 *param_8,
             undefined1 param_9)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110cec5d8;
  *(undefined4 *)(param_1 + 1) = param_2;
  uVar4 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar4;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  bVar1 = 0;
  if (param_1[2] != 0) {
    bVar1 = param_7 ^ 1;
  }
  *(byte *)(param_1 + 0x13) = bVar1;
  *(undefined2 *)((long)param_1 + 0x99) = 0;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  uVar4 = param_8[2];
  uVar5 = *param_8;
  param_1[0x15] = param_8[1];
  param_1[0x14] = uVar5;
  param_1[0x16] = uVar4;
  *(undefined1 *)(param_1 + 0x17) = param_9;
  FUN_10b4941d8(param_1 + 4,param_4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11383d5d0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam000000011383d5d0 = iRam000000011383d5d0 + 1;
    }
  } while (cVar2 != '\0');
  *(undefined1 *)((long)param_1 + 0x9b) = param_6;
  *(undefined1 *)((long)param_1 + 0x9a) = param_5;
  return param_1;
}



/* Entry: 10b4941d8; end: 10b49428b;  */

undefined8 * FUN_10b4941d8(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b4948b4();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b127f28(&uStack_30);
  return param_1;
}



/* Entry: 10b49428c; end: 10b49428f;  */

undefined8 * FUN_10b49428c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  
  *param_1 = &PTR_FUN_110cec5d8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x11383d5d0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam000000011383d5d0 = iRam000000011383d5d0 + -1;
    }
  } while (cVar1 != '\0');
  func_0x00010730c360(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  FUN_10b127f28(param_1 + 4);
  func_0x000107c281dc(param_1 + 2);
  return param_1;
}



/* Entry: 10b494290; end: 10b4942a3;  */

void FUN_10b494290(void)

{
  func_0x00010b49422c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4942a4; end: 10b4943d3;  */

void FUN_10b4942a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  long lStack_88;
  undefined1 uStack_71;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000107c281d8(&uStack_70);
  uStack_71 = 0;
  uVar1 = uStack_70;
  func_0x000107c2ff58(uStack_70,param_2,param_3,param_4,&uStack_71);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = 0xc0;
    __Znwm(0xc0);
    lStack_88 = lStack_68;
    uStack_90 = uStack_70;
    if (lStack_68 != 0) {
      do {
        func_0x00010b4948b4();
      } while (extraout_w10 != 0);
    }
    uStack_a8 = param_8[1];
    uStack_b0 = *param_8;
    uStack_a0 = param_8[2];
    FUN_10b4940fc(uVar2,param_2,&uStack_90,param_5,param_6,uStack_71,param_7,&uStack_b0,param_9);
    FUN_10b4946c4(param_1,uVar2);
    func_0x000107c281dc(&uStack_90);
  }
  func_0x000107c281dc(&uStack_70);
  return;
}



/* Entry: 10b4943d4; end: 10b4943ef;  */

void FUN_10b4943d4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 10b4943f0; end: 10b49444b;  */

void FUN_10b4943f0(undefined8 param_1,undefined8 param_2)

{
  __ZNSt3__15mutex6unlockEv();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 10b49444c; end: 10b49451f;  */

long FUN_10b49444c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b494520; end: 10b494663;  */

long FUN_10b494520(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  lVar1 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar10 * uVar5;
  }
  lVar8 = *param_1;
  plVar3 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar3;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  lVar9 = lVar1;
  if (plVar6 == param_1 + 2) {
LAB_10b4945b0:
    if (lVar1 == 0) {
LAB_10b4945e4:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar9 = *param_2;
      goto LAB_10b4945ec;
    }
    uVar10 = *(ulong *)(lVar1 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_10b4945e4;
  }
  else {
    uVar10 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_10b4945b0;
LAB_10b4945ec:
    if (lVar9 == 0) goto LAB_10b494624;
  }
  uVar10 = *(ulong *)(lVar9 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar10 = uVar10 & uVar7;
  }
  else if (uVar5 <= uVar10) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar10 / uVar5;
    }
    uVar10 = uVar10 - uVar7 * uVar5;
  }
  if (uVar10 != uVar4) {
    *(long **)(lVar8 + uVar10 * 8) = plVar6;
    lVar9 = *param_2;
  }
LAB_10b494624:
  *plVar6 = lVar9;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010b494944();
  return lVar1;
}



/* Entry: 10b494664; end: 10b494667;  */

void FUN_10b494664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec680;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b494668; end: 10b49467b;  */

void FUN_10b494668(void)

{
  func_0x00010b49468c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49467c; end: 10b49469b;  */

void FUN_10b49467c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b494684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b49469c; end: 10b4946c3;  */

long FUN_10b49469c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b4946c4; end: 10b49471f;  */

undefined8 * FUN_10b4946c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110cec6d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10b494720; end: 10b494723;  */

void FUN_10b494720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b494724; end: 10b494737;  */

void FUN_10b494724(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b494738; end: 10b49474f;  */

void FUN_10b494738(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b494748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10b494750; end: 10b494787;  */

long FUN_10b494750(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cec710);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b494788; end: 10b4949cb;  */

void FUN_10b494788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4949cc; end: 10b4949df;  */

void FUN_10b4949cc(void)

{
  FUN_10b4949e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4949e0; end: 10b494a1f;  */

undefined8 * FUN_10b4949e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cec748;
  func_0x000107c27d78(param_1 + 4);
  func_0x000107c27f10(param_1 + 2);
  return param_1;
}



/* Entry: 10b494a20; end: 10b494abf;  */

undefined8 FUN_10b494a20(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011383d5e0 & 1) == 0) {
    iVar1 = 0x1383d5e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b494ac0(auStack_68);
      puVar2 = auStack_68;
      func_0x000107c301a0();
      puRam000000011383d5d8 = puVar2;
      func_0x000107c27974(auStack_68);
      ___cxa_guard_release(0x11383d5e0);
    }
  }
  return 0x11383d5d8;
}



/* Entry: 10b494ac0; end: 10b494f33;  */

/* WARNING: Possible PIC construction at 0x00010b494af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b494b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b494af8) */
/* WARNING: Removing unreachable block (ram,0x00010b494b1c) */
/* WARNING: Removing unreachable block (ram,0x00010b494e74) */
/* WARNING: Removing unreachable block (ram,0x00010b494e88) */
/* WARNING: Removing unreachable block (ram,0x00010b494ec4) */
/* WARNING: Removing unreachable block (ram,0x00010b494ed4) */
/* WARNING: Removing unreachable block (ram,0x00010b494ee4) */
/* WARNING: Removing unreachable block (ram,0x00010b494f1c) */
/* WARNING: Removing unreachable block (ram,0x00010b494eb0) */

void FUN_10b494ac0(void)

{
  undefined *puVar1;
  undefined1 auStack_458 [1056];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f76f3aa;
  func_0x00010002b82c(auStack_458,&UNK_10f76f3aa);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b494f34; end: 10b494f3b;  */

void FUN_10b494f34(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b494f3c; end: 10b494f87; -[SCNNetworkQualityEstimationNetworkQualityEstimationService uploadBandwidthKbps] */

void FUN_10b494f3c(void)

{
  long extraout_x8;
  
  func_0x000107c39488();
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10b494f88; end: 10b495007; -[SCNNetworkQualityEstimationNetworkQualityEstimationService downloadBandwidthKbpsByHost:] */

long * FUN_10b494f88(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b495340();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b495384();
  func_0x00010b495378(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010b495334();
  func_0x00010b495368();
  return plVar1;
}



/* Entry: 10b495008; end: 10b495087; -[SCNNetworkQualityEstimationNetworkQualityEstimationService uploadBandwidthKbpsByHost:] */

long * FUN_10b495008(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b495340();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b495384();
  func_0x00010b495378(*(undefined8 *)(*plVar1 + 0x28));
  func_0x00010b495334();
  func_0x00010b495368();
  return plVar1;
}



/* Entry: 10b495088; end: 10b4950d3; -[SCNNetworkQualityEstimationNetworkQualityEstimationService httpRTTMs] */

void FUN_10b495088(void)

{
  long extraout_x8;
  
  func_0x000107c39488();
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b4950d4; end: 10b49511f; -[SCNNetworkQualityEstimationNetworkQualityEstimationService transportRTTMs] */

void FUN_10b4950d4(void)

{
  long extraout_x8;
  
  func_0x000107c39488();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10b495120; end: 10b49516f; -[SCNNetworkQualityEstimationNetworkQualityEstimationService networkRequestCount:] */

void FUN_10b495120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c39488(param_1,param_3);
  (**(code **)(extraout_x8 + 0x40))();
  return;
}



/* Entry: 10b495170; end: 10b4951bf; -[SCNNetworkQualityEstimationNetworkQualityEstimationService networkRequestErrorCount:] */

void FUN_10b495170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c39488(param_1,param_3);
  (**(code **)(extraout_x8 + 0x48))();
  return;
}



/* Entry: 10b4951c0; end: 10b49523f; -[SCNNetworkQualityEstimationNetworkQualityEstimationService httpRTTMsByHost:] */

long * FUN_10b4951c0(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b495340();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b495384();
  func_0x00010b495378(*(undefined8 *)(*plVar1 + 0x50));
  func_0x00010b495334();
  func_0x00010b495368();
  return plVar1;
}



/* Entry: 10b495240; end: 10b49528f; -[SCNNetworkQualityEstimationNetworkQualityEstimationService bandwidthClass] */

long FUN_10b495240(int param_1)

{
  long extraout_x8;
  
  func_0x000107c39488();
  (**(code **)(extraout_x8 + 0x58))();
  return (long)param_1;
}



/* Entry: 10b495290; end: 10b495333; -[SCNNetworkQualityEstimationNetworkQualityEstimationService registerBandwidthChangeListener:] */

long FUN_10b495290(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b495340();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b495568(auStack_40);
  (**(code **)(*plVar1 + 0x60))(plVar1,auStack_40);
  func_0x000107c2c6e4(auStack_40);
  func_0x00010b495368();
  return (long)(int)plVar1;
}



/* Entry: 10b495334; end: 10b4953b7;  */

void FUN_10b495334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10b4953b8; end: 10b49540b; -[SCNNetworkTypesAppStateChangeListener .cxx_destruct] */

void FUN_10b4953b8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cec798;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f80((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b49540c; end: 10b495417;  */

void FUN_10b49540c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b495418; end: 10b49542b;  */

void FUN_10b495418(void)

{
  FUN_10b49554c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49542c; end: 10b495437;  */

long FUN_10b49542c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cec800;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b495438; end: 10b495477;  */

void FUN_10b495438(void)

{
  func_0x00010b49555c();
  return;
}



/* Entry: 10b495478; end: 10b4954b7;  */

void FUN_10b495478(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0dd340(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b4954b8; end: 10b49554b;  */

long FUN_10b4954b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cec800;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b49554c; end: 10b495567;  */

void FUN_10b49554c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cec840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b495568; end: 10b4955b7;  */

void FUN_10b495568(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c39498();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b4955b8; end: 10b49560b; -[SCNNetworkTypesBandwidthChangeListener .cxx_destruct] */

void FUN_10b4955b8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cec8e0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c6e4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b49560c; end: 10b495613;  */

void FUN_10b49560c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b495614; end: 10b49568b; -[SCNNetworkTypesBandwidthChangeNotifierCppProxy initWithCpp:] */

undefined1 * FUN_10b495614(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706400;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c394a4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2c540(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b49568c; end: 10b49573b; -[SCNNetworkTypesBandwidthChangeNotifierCppProxy registerDownloadListener:] */

long FUN_10b49568c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b495568(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  func_0x000107c2c6e4(auStack_40);
  func_0x000107c394ac();
  return (long)(int)plVar1;
}



/* Entry: 10b49573c; end: 10b495797; -[SCNNetworkTypesBandwidthChangeNotifierCppProxy .cxx_destruct] */

void FUN_10b49573c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ceca18;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c540((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b495798; end: 10b4957d7; -[SCNNetworkTypesBandwidthChangeNotifierCppProxy .cxx_construct] */

undefined8 * FUN_10b495798(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c394a4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b4957d8; end: 10b4957db;  */

void FUN_10b4957d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4957dc; end: 10b4957ef;  */

void FUN_10b4957dc(void)

{
  FUN_10b49582c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


