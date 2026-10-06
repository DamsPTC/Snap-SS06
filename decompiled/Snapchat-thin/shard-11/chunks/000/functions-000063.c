/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080eaf4c; end: 1080eaf53;  */

void FUN_1080eaf4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080eb3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080eaf54; end: 1080eaf87;  */

undefined8 * FUN_1080eaf54(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a205c8;
  FUN_1080eaf88(param_1 + 1,param_2);
  return param_1;
}



/* Entry: 1080eaf88; end: 1080eaf93;  */

void FUN_1080eaf88(long *param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lStack_50 = 0;
    lStack_48 = 0;
LAB_1080eb050:
    *param_1 = lVar1;
    param_1[1] = 0;
  }
  else {
    lStack_50 = lVar1;
    if (*(long *)(lVar1 + 8) == 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      lStack_48 = lVar2;
      if (lVar2 == 0) goto LAB_1080eb050;
      do {
        func_0x0001080eb38c();
      } while (extraout_w10_00 != 0);
      *param_1 = lVar1;
      param_1[1] = lVar2;
    }
    else {
      func_0x0001003ae9f0(&lStack_40);
      if (lStack_40 == 0) {
        lVar1 = 0;
        lStack_50 = 0;
        lStack_48 = 0;
        lStack_38 = 0;
      }
      else {
        lStack_48 = lStack_38;
        if (lStack_38 != 0) {
          do {
            func_0x0001080eb38c();
          } while (extraout_w10 != 0);
        }
      }
      func_0x0001003a824c(&lStack_40);
      *param_1 = lVar1;
      param_1[1] = lStack_38;
      if (lStack_38 == 0) goto LAB_1080eb0a0;
    }
    do {
      func_0x0001080eb38c();
    } while (extraout_w10_01 != 0);
  }
LAB_1080eb0a0:
  FUN_1080eadc4(&lStack_50);
  return;
}



/* Entry: 1080eaf94; end: 1080eafa7;  */

void FUN_1080eaf94(void)

{
  FUN_1080eb0bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080eafa8; end: 1080eaff3;  */

void FUN_1080eafa8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 8);
      if (lStack_30 != 0) {
        func_0x0001080ebed8();
      }
    }
  }
  FUN_1080eadc4(&lStack_30);
  return;
}



/* Entry: 1080eaff4; end: 1080eb0bb;  */

void FUN_1080eaff4(long *param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
    lStack_50 = 0;
    lStack_48 = 0;
LAB_1080eb050:
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    lStack_50 = param_2;
    if (*(long *)(param_2 + 8) == 0) {
      lVar1 = *(long *)(param_2 + 0x10);
      lStack_48 = lVar1;
      if (lVar1 == 0) goto LAB_1080eb050;
      do {
        func_0x0001080eb38c();
      } while (extraout_w10_00 != 0);
      *param_1 = param_2;
      param_1[1] = lVar1;
    }
    else {
      func_0x0001003ae9f0(&lStack_40);
      if (lStack_40 == 0) {
        param_2 = 0;
        lStack_50 = 0;
        lStack_48 = 0;
        lStack_38 = 0;
      }
      else {
        lStack_48 = lStack_38;
        if (lStack_38 != 0) {
          do {
            func_0x0001080eb38c();
          } while (extraout_w10 != 0);
        }
      }
      func_0x0001003a824c(&lStack_40);
      *param_1 = param_2;
      param_1[1] = lStack_38;
      if (lStack_38 == 0) goto LAB_1080eb0a0;
    }
    do {
      func_0x0001080eb38c();
    } while (extraout_w10_01 != 0);
  }
LAB_1080eb0a0:
  FUN_1080eadc4(&lStack_50);
  return;
}



/* Entry: 1080eb0bc; end: 1080eb0ef;  */

undefined8 * FUN_1080eb0bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a205c8;
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1080eb0f0; end: 1080eb10b;  */

void FUN_1080eb0f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080eb10c; end: 1080eb12f;  */

void FUN_1080eb10c(long param_1)

{
  func_0x0001080eb3ec();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080eb130; end: 1080eb29b;  */

void FUN_1080eb130(long *param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long alStack_a8 [2];
  long alStack_98 [3];
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  func_0x0001080eb37c();
  plVar6 = *(long **)(param_2 + 0x10);
  uStack_48 = extraout_x8;
  func_0x0001080eb3f8(*plVar6,alStack_a8);
  if (alStack_a8[0] != 0) {
    pcStack_78 = (code *)*param_1;
    in_ZR = pcStack_78 == (code *)0x2;
    if ((bool)in_ZR) {
      ppuStack_70 = (undefined **)param_1[1];
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar1 = ppuStack_70 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1080ea1b0(*plVar6,&pcStack_78);
      func_0x0001080e9030(&pcStack_78);
    }
    else {
      plVar5 = *(long **)(alStack_a8[0] + 0x60);
      lVar7 = *plVar6;
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
        do {
          func_0x0001080eb38c();
        } while (extraout_w10 != 0);
      }
      plVar6 = (long *)param_1[1];
      alStack_98[0] = lVar7;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      lStack_80 = param_1[3];
      alStack_98[2] = param_1[2];
      pcStack_78 = FUN_1080ea6d8;
      ppuStack_70 = &PTR_FUN_110a20488;
      plVar4 = (long *)0x20;
      __Znwm();
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
        do {
          func_0x0001080eb38c();
        } while (extraout_w10_00 != 0);
      }
      *plVar4 = lVar7;
      plVar4[1] = (long)plVar6;
      alStack_98[1] = 0;
      plVar4[3] = lStack_80;
      plVar4[2] = alStack_98[2];
      plStack_68 = plVar4;
      (**(code **)(*plVar5 + 0x28))(plVar5,&pcStack_78);
      func_0x0001080eb434(ppuStack_70);
      FUN_1080ea318(alStack_98);
    }
  }
  plVar6 = alStack_a8;
  func_0x0001080ea65c();
  func_0x0001080eb368(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (plVar6[1] == 0) {
      return;
    }
    FUN_1080eadf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080eb29c; end: 1080eb2bb;  */

void FUN_1080eb29c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1080eadf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080eb2bc; end: 1080eb2bf;  */

void FUN_1080eb2bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080eb2c0; end: 1080eb367;  */

void FUN_1080eb2c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a20608;
  plVar1 = (long *)0x8;
  __Znwm();
  lVar2 = *plVar3;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080eb3b0();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar1 = lVar2;
  param_1[1] = plVar1;
  return;
}



/* Entry: 1080eb368; end: 1080eb447;  */

void FUN_1080eb368(void)

{
  return;
}



/* Entry: 1080eb448; end: 1080ebbdb;  */

undefined8 * FUN_1080eb448(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = param_4[2];
  uVar7 = param_4[1];
  uVar6 = *param_4;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d76a50;
  param_1[1] = 0;
  param_1[4] = uVar7;
  param_1[3] = uVar6;
  param_1[5] = uVar4;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x000104bfe1e0(&uStack_48);
  *param_1 = &PTR_DAT_110a20638;
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = lVar5;
  lVar5 = *param_3;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar5;
  return param_1;
}



/* Entry: 1080ebbdc; end: 1080ebccb;  */

undefined8 *
FUN_1080ebbdc(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20740;
  uVar6 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_3;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[5] = lVar5;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = param_5;
  func_0x00010b9a8f04(param_1 + 7,param_6);
  lVar5 = *param_7;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar2 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[9] = lVar5;
  lVar5 = param_8[1];
  uVar6 = *param_8;
  param_1[0xb] = param_8[1];
  param_1[10] = uVar6;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 1080ebccc; end: 1080ebd3b;  */

undefined8 * FUN_1080ebccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20740;
  func_0x00010b9a1f08(param_1 + 0xe);
  func_0x0001080eb314(param_1 + 0xc);
  func_0x0001080cba7c(param_1 + 10);
  func_0x0001080cbf20(param_1 + 9);
  func_0x00010b9a8d98(param_1 + 7);
  func_0x0001003a8c94(param_1 + 5);
  func_0x0001080eaae4(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ebd3c; end: 1080ebd3f;  */

undefined8 * FUN_1080ebd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20740;
  func_0x00010b9a1f08(param_1 + 0xe);
  func_0x0001080eb314(param_1 + 0xc);
  func_0x0001080cba7c(param_1 + 10);
  func_0x0001080cbf20(param_1 + 9);
  func_0x00010b9a8d98(param_1 + 7);
  func_0x0001003a8c94(param_1 + 5);
  func_0x0001080eaae4(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ebd40; end: 1080ebd53;  */

void FUN_1080ebd40(void)

{
  FUN_1080ebccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ebd54; end: 1080ebf43;  */

void FUN_1080ebd54(long param_1,undefined8 *param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x70;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x0001080ea3b0(&lStack_30);
    func_0x0001080ebf64(*param_2);
  }
  else {
    func_0x0001080ebdc0(param_1 + 0x60,param_2);
  }
  func_0x0001080eb338(&lStack_30);
  return;
}



/* Entry: 1080ebf44; end: 1080ebf6f;  */

void FUN_1080ebf44(void)

{
  return;
}



/* Entry: 1080ebf70; end: 1080ecd9f;  */

void FUN_1080ebf70(undefined8 *param_1)

{
  FUN_10811cd54();
  *param_1 = &PTR_DAT_110a20788;
  return;
}



/* Entry: 1080ecda0; end: 1080ecdcf;  */

undefined8 * FUN_1080ecda0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20920;
  func_0x000104bda388(param_1 + 2);
  return param_1;
}



/* Entry: 1080ecdd0; end: 1080ecdd3;  */

undefined8 * FUN_1080ecdd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20920;
  func_0x000104bda388(param_1 + 2);
  return param_1;
}



/* Entry: 1080ecdd4; end: 1080ecde7;  */

void FUN_1080ecdd4(void)

{
  FUN_1080ecda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ecde8; end: 1080ece2f;  */

long * FUN_1080ecde8(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001080edd28();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x000104bda3ac();
  }
  return param_1;
}



/* Entry: 1080ece30; end: 1080ecf97;  */

void FUN_1080ece30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long unaff_x20;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined ***pppuStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined **ppuStack_e0;
  byte bStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  long *plStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3;
  puVar4 = param_4;
  func_0x0001080edd78();
  uStack_38 = extraout_x8;
  func_0x000108108a8c(&plStack_68,param_2);
  uVar2 = (undefined1)param_2;
  if (plStack_68 != (long *)0x0) {
    lVar1 = plStack_68[6];
    func_0x00010b8a3bac(lVar1,&DAT_10f47a280,0xb);
    uVar2 = (undefined1)lVar1;
    uStack_78 = *param_3;
    uStack_70 = 6;
    puVar3 = &uStack_78;
    puVar4 = (undefined8 *)0x0;
    func_0x00010b8c94cc(plStack_68);
    func_0x00010b9a8d98(&uStack_78);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_88 = *param_3;
    uStack_80 = 6;
    func_0x00010b9aa86c(&uStack_48,&DAT_10f3909e3,4,&uStack_88);
    uStack_98 = *param_4;
    uStack_90 = 6;
    func_0x00010b9aa86c();
    func_0x00010b9a8f04(&uStack_78,&uStack_48);
    func_0x00010b9a8d98(&uStack_98);
    func_0x00010b9a8d98(&uStack_88);
    func_0x00010b9a8d98(&uStack_48);
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    puVar3 = &uStack_48;
    uVar2 = 4;
    puVar4 = (undefined8 *)0x1;
    FUN_1080ecf98(auStack_60,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000104bda914(auStack_60);
    func_0x00010b9a8d98(&uStack_48);
    func_0x00010b9a8d98(&uStack_78);
  }
  func_0x0001080d289c();
  func_0x0001080edd64(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  bStack_d8 = 1;
  ppuStack_e0 = &PTR_DAT_110d7e6e0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_118 = CONCAT71(uStack_118._1_7_,uVar2);
  pppuStack_100 = &ppuStack_e0;
  uStack_f8 = 0;
  puStack_110 = puVar3;
  puStack_108 = puVar4;
  (**(code **)(*plStack_68 + 0x20))(auStack_f0);
  if ((bStack_d8 & 1) == 0) {
    func_0x00010b9a0084(&uStack_118,&ppuStack_e0);
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = uStack_118;
    uStack_118 = 0;
    func_0x000104bda93c(&uStack_118);
  }
  else {
    func_0x000104bf351c(extraout_x8_00,auStack_f0);
  }
  func_0x00010b9a8d98(auStack_f0);
  func_0x00010b9a01e4(&ppuStack_e0);
  return;
}



/* Entry: 1080ecf98; end: 1080ecf9b;  */

void FUN_1080ecf98(undefined8 *param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  bStack_38 = 1;
  ppuStack_40 = &PTR_DAT_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_78 = CONCAT71(uStack_78._1_7_,param_3);
  pppuStack_60 = &ppuStack_40;
  uStack_58 = 0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  (**(code **)(*param_2 + 0x20))(auStack_50,param_2,&uStack_78);
  if ((bStack_38 & 1) == 0) {
    func_0x00010b9a0084(&uStack_78,&ppuStack_40);
    *param_1 = 2;
    param_1[1] = uStack_78;
    uStack_78 = 0;
    func_0x000104bda93c(&uStack_78);
  }
  else {
    func_0x000104bf351c(param_1,auStack_50);
  }
  func_0x00010b9a8d98(auStack_50);
  func_0x00010b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 1080ecf9c; end: 1080ed07b;  */

void FUN_1080ecf9c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x208);
  if ((puVar3 == (undefined8 *)0x0) ||
     (___dynamic_cast(puVar3,&PTR_DAT_110a1f5a8,&PTR_DAT_110a209b0,0), puVar3 == (undefined8 *)0x0))
  {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    plVar4 = puVar3 + 1;
    *plVar4 = 1;
    *puVar3 = &PTR_FUN_110a20920;
    puVar3[2] = 0;
    FUN_1080ed55c(0);
    FUN_1080ed55c(0);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_38 = puVar3;
    func_0x00010811c838(param_1 + 0x208,&puStack_38);
    func_0x0001080db8c0(puStack_38);
  }
  else {
    plVar4 = puVar3 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1080ecde8(puVar3 + 2,param_2);
  FUN_1080ed55c(puVar3);
  return;
}



/* Entry: 1080ed07c; end: 1080ed0ef;  */

undefined8 * FUN_1080ed07c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001080edd28();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1080fd008(param_1,param_2,&UNK_10f47a9c5,&UNK_10f47a9e0,&uStack_28,0);
  func_0x0001080ed580(uStack_28);
  *param_1 = &PTR_FUN_110a20958;
  return param_1;
}



/* Entry: 1080ed0f0; end: 1080ed0f3;  */

undefined8 * FUN_1080ed0f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080ed0f4; end: 1080ed107;  */

void FUN_1080ed0f4(void)

{
  func_0x0001080fd064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ed108; end: 1080ed15b;  */

void FUN_1080ed108(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  FUN_1080db2e0(&lStack_28,param_2 + 0x10);
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_28 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_28;
  func_0x0001078d53f8();
  return;
}



/* Entry: 1080ed15c; end: 1080ed55b;  */

void FUN_1080ed15c(undefined8 param_1,long *param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined **ppuVar7;
  undefined1 auStack_b0 [16];
  undefined8 *apuStack_a0 [5];
  code *pcStack_78;
  undefined **ppuStack_70;
  
  plVar6 = param_2;
  func_0x0001080edd78();
  (**(code **)(*plVar6 + 0x78))(plVar6,6);
  if ((bRam0000000113729360 & 1) == 0) {
    iVar4 = 0x13729360;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f47a1eb);
      func_0x0001080edcf4();
    }
  }
  func_0x0001080edd38(FUN_1080ed5a4);
  func_0x0001080edc64(FUN_1080ed668);
  func_0x000108107d88();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_00 & 1) == 0) {
    iVar4 = 0x13729370;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f31bc73);
      func_0x0001080edcf4();
    }
  }
  pcStack_78 = FUN_1080ed6c0;
  ppuStack_70 = &PTR_FUN_110a20a20;
  func_0x0001080edc64(FUN_1080ed71c);
  func_0x000108107df8();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x30));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_01 & 1) == 0) {
    iVar4 = 0x13729380;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f47a2f6);
      func_0x0001080edcf4();
    }
  }
  func_0x0001080edd38(FUN_1080ed768);
  func_0x0001080edc64(FUN_1080ed834);
  func_0x000108107f90();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x50));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_02 & 1) == 0) {
    iVar4 = 0x13729390;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f47a280);
      func_0x0001080edcf4();
    }
  }
  pcStack_78 = FUN_1080ed89c;
  ppuStack_70 = &PTR_FUN_110a20aa0;
  func_0x0001080edc64(FUN_1080ed914);
  func_0x000108107d88();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_03 & 1) == 0) {
    iVar4 = 0x137293a0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f47a28c);
      func_0x0001080edcf4();
    }
  }
  func_0x0001080edd38(FUN_1080ed974);
  func_0x0001080edc64(FUN_1080ed9dc);
  func_0x000108107d88();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_04 & 1) == 0) {
    iVar4 = 0x137293b0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f47a29f);
      func_0x0001080edcf4();
    }
  }
  pcStack_78 = FUN_1080eda34;
  ppuStack_70 = &PTR_FUN_110a20b20;
  func_0x0001080edc64(FUN_1080eda9c);
  func_0x000108107d88();
  func_0x0001080edc50(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080edcec();
  func_0x0001080edc7c();
  func_0x0001080edc8c();
  func_0x0001080edd1c();
  if ((extraout_x8_05 & 1) == 0) {
    iVar4 = 0x137293c0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080edcfc(&DAT_10f43e969);
      func_0x0001080edcf4();
    }
  }
  pcStack_78 = FUN_1080edaf4;
  ppuStack_70 = &PTR_FUN_110a20b60;
  func_0x0001080edc64(FUN_1080edbf8);
  func_0x000108107d18();
  (**(code **)(*param_2 + 0x18))(param_2,0x1137293b8,0,auStack_b0);
  func_0x0001080edcec();
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  func_0x0001080edd64(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (pppuVar5 != (undefined ***)0x0) {
    pppuVar1 = pppuVar5 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((undefined **)((long)ppuVar7 + -1) == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001080edd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*pppuVar5)[1])();
      return;
    }
  }
  return;
}



/* Entry: 1080ed55c; end: 1080ed5a3;  */

void FUN_1080ed55c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080edd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080ed5a4; end: 1080ed5e3;  */

void FUN_1080ed5a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080edc9c();
  if (lStack_38 != 0) {
    func_0x00010811c7c0(uVar1);
    param_1 = lStack_38;
  }
  func_0x0001080edcdc();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ed5e4; end: 1080ed643;  */

void FUN_1080ed5e4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a24ef0,0);
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010b9a5818(), (uVar1 & 1) != 0))
    goto LAB_1080ed634;
    func_0x00010b9a5890();
  }
  param_2 = 0;
LAB_1080ed634:
  *param_1 = param_2;
  return;
}



/* Entry: 1080ed644; end: 1080ed667;  */

void FUN_1080ed644(void)

{
  return;
}



/* Entry: 1080ed668; end: 1080ed69b;  */

void FUN_1080ed668(void)

{
  long lStack_28;
  
  func_0x0001080edc9c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010811c7c0(0,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080ed69c; end: 1080ed6bf;  */

void FUN_1080ed69c(void)

{
  return;
}



/* Entry: 1080ed6c0; end: 1080ed6f7;  */

void FUN_1080ed6c0(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lStack_28;
  
  uVar1 = *param_3;
  func_0x0001080edc9c();
  if (lStack_28 != 0) {
    *(undefined1 *)(lStack_28 + 0x238) = uVar1;
  }
  *param_1 = 1;
  if (lStack_28 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ed6f8; end: 1080ed71b;  */

void FUN_1080ed6f8(void)

{
  return;
}



/* Entry: 1080ed71c; end: 1080ed743;  */

void FUN_1080ed71c(void)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  func_0x0001080edc9c();
  if (lStack_18 == 0) {
    return;
  }
  *(undefined1 *)(lStack_18 + 0x238) = 0;
  puVar1 = (undefined8 *)(lStack_18 + 8);
  lStack_18 = *(undefined8 *)(lStack_18 + 0x10);
  uStack_20 = *puVar1;
  func_0x0001003a90c4(&uStack_20);
  return;
}



/* Entry: 1080ed744; end: 1080ed767;  */

void FUN_1080ed744(void)

{
  return;
}



/* Entry: 1080ed768; end: 1080ed80f;  */

void FUN_1080ed768(undefined8 *param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_40;
  char cStack_38;
  byte bStack_37;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9a8f04(&lStack_40);
  FUN_1080ed5e4(&lStack_30,*param_1);
  if (lStack_30 == 0) goto LAB_1080ed7f4;
  uStack_28 = 0;
  if (cStack_38 == '\v') {
    if ((bStack_37 & 1) != 0) {
      if (lStack_40 == 0) goto LAB_1080ed7dc;
      do {
        func_0x0001080edd28();
        uStack_28 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  else {
LAB_1080ed7dc:
    uStack_28 = 0;
  }
  FUN_1080ecf9c();
  func_0x000104bda3ac(uStack_28);
LAB_1080ed7f4:
  func_0x0001080edcdc();
  func_0x0001078d53f8();
  func_0x00010b9a8d98(&lStack_40);
  return;
}



/* Entry: 1080ed810; end: 1080ed833;  */

void FUN_1080ed810(void)

{
  return;
}



/* Entry: 1080ed834; end: 1080ed877;  */

void FUN_1080ed834(void)

{
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001080edd10();
  if (lStack_30 != 0) {
    uStack_28 = 0;
    FUN_1080ecf9c(lStack_30,&uStack_28);
    func_0x000104bda3ac(uStack_28);
  }
  func_0x0001078d53f8(lStack_30);
  return;
}



/* Entry: 1080ed878; end: 1080ed89b;  */

void FUN_1080ed878(void)

{
  return;
}



/* Entry: 1080ed89c; end: 1080ed8ef;  */

void FUN_1080ed89c(undefined8 param_1)

{
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001080edd10();
  if (lStack_40 != 0) {
    func_0x0001080edd48();
    uStack_38 = param_1;
    func_0x00010811c7d8(lStack_40,&uStack_38);
  }
  func_0x0001080edcdc();
  func_0x0001078d53f8();
  return;
}



/* Entry: 1080ed8f0; end: 1080ed913;  */

void FUN_1080ed8f0(void)

{
  return;
}



/* Entry: 1080ed914; end: 1080ed94f;  */

void FUN_1080ed914(void)

{
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001080edd10();
  if (lStack_30 != 0) {
    uStack_28 = 0;
    func_0x00010811c7d8(lStack_30,&uStack_28);
  }
  func_0x0001078d53f8(lStack_30);
  return;
}



/* Entry: 1080ed950; end: 1080ed973;  */

void FUN_1080ed950(void)

{
  return;
}



/* Entry: 1080ed974; end: 1080ed9b7;  */

void FUN_1080ed974(undefined8 param_1,long param_2)

{
  long lStack_38;
  
  func_0x0001080edc9c();
  if (lStack_38 != 0) {
    func_0x0001080edd48();
    *(undefined8 *)(lStack_38 + 0x218) = param_1;
    func_0x00010811c4f8();
    param_2 = lStack_38;
  }
  func_0x0001080edcdc();
  if (param_2 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ed9b8; end: 1080ed9db;  */

void FUN_1080ed9b8(void)

{
  return;
}



/* Entry: 1080ed9dc; end: 1080eda0f;  */

void FUN_1080ed9dc(void)

{
  long lStack_28;
  
  func_0x0001080edc9c();
  if (lStack_28 == 0) {
    return;
  }
  *(undefined8 *)(lStack_28 + 0x218) = 0;
  func_0x00010811c4f8(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080eda10; end: 1080eda33;  */

void FUN_1080eda10(void)

{
  return;
}



/* Entry: 1080eda34; end: 1080eda77;  */

void FUN_1080eda34(undefined8 param_1,long param_2)

{
  long lStack_38;
  
  func_0x0001080edc9c();
  if (lStack_38 != 0) {
    func_0x0001080edd48();
    *(undefined8 *)(lStack_38 + 0x220) = param_1;
    func_0x00010811c4f8();
    param_2 = lStack_38;
  }
  func_0x0001080edcdc();
  if (param_2 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080eda78; end: 1080eda9b;  */

void FUN_1080eda78(void)

{
  return;
}



/* Entry: 1080eda9c; end: 1080edacf;  */

void FUN_1080eda9c(void)

{
  long lStack_28;
  
  func_0x0001080edc9c();
  if (lStack_28 == 0) {
    return;
  }
  *(undefined8 *)(lStack_28 + 0x220) = 0;
  func_0x00010811c4f8(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080edad0; end: 1080edaf3;  */

void FUN_1080edad0(void)

{
  return;
}



/* Entry: 1080edaf4; end: 1080edbd3;  */

void FUN_1080edaf4(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_48;
  
  plVar6 = (long *)*param_3;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080edc9c();
  if (lStack_48 != 0) {
    func_0x0001080edca8("none");
    if ((param_2 & 1) == 0) {
      func_0x0001080edca8("fill");
      if ((param_2 & 1) == 0) {
        func_0x0001080edca8(&DAT_10f43e819);
        iVar4 = (int)param_2;
        if ((param_2 & 1) == 0) {
          func_0x0001080edca8(&DAT_10f43e81f);
          if (iVar4 == 0) goto LAB_1080edbac;
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
    func_0x00010811c4e0(lStack_48,uVar5);
  }
LAB_1080edbac:
  *param_1 = 1;
  func_0x0001078d53f8(lStack_48);
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar1 = plVar6 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    func_0x0001003a8364();
    func_0x0001003ac8f0();
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 1080edbd4; end: 1080edbf7;  */

void FUN_1080edbd4(void)

{
  return;
}



/* Entry: 1080edbf8; end: 1080edc2b;  */

void FUN_1080edbf8(void)

{
  long lStack_28;
  
  func_0x0001080edc9c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010811c4e0(lStack_28,0);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080edc2c; end: 1080edd8b;  */

void FUN_1080edc2c(void)

{
  return;
}



/* Entry: 1080edd8c; end: 1080eddcb;  */

void FUN_1080edd8c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080f02ec(param_1,param_2,&PTR_DAT_110a20ba0,&PTR_DAT_110a20ba8,&UNK_10deef2a0);
  return;
}



/* Entry: 1080eddcc; end: 1080ede47;  */

void FUN_1080eddcc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  FUN_1080ede88();
  *param_1 = uVar1;
  return;
}



/* Entry: 1080ede48; end: 1080ede87;  */

void FUN_1080ede48(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080f02ec(param_1,param_2,&PTR_DAT_110a20bb0,&PTR_DAT_110a20bb8,&UNK_10deef2a4);
  return;
}



/* Entry: 1080ede88; end: 1080edf4b;  */

undefined8 *
FUN_1080ede88(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_48;
  
  lStack_48 = *param_3;
  if (lStack_48 != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1080fd008(param_1,param_2,param_4,param_5,&lStack_48,1);
  func_0x0001080ed580(lStack_48);
  *param_1 = &PTR_FUN_110a20bd0;
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar4;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(undefined1 *)((long)param_1 + 0x44) = param_7;
  *(undefined4 *)(param_1 + 9) = param_8;
  return param_1;
}



/* Entry: 1080edf4c; end: 1080edf7f;  */

undefined8 * FUN_1080edf4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20bd0;
  FUN_1080eefa0(param_1[7]);
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080edf80; end: 1080edf83;  */

undefined8 * FUN_1080edf80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20bd0;
  FUN_1080eefa0(param_1[7]);
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080edf84; end: 1080edf97;  */

void FUN_1080edf84(void)

{
  FUN_1080edf4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080edf98; end: 1080edf9f;  */

undefined1 FUN_1080edf98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}



/* Entry: 1080edfa0; end: 1080ee093;  */

void FUN_1080edfa0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x240;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a20c50;
  puVar1 = puVar4 + 3;
  FUN_10811c8ec(puVar1,param_2 + 0x10);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_50 = puVar1;
    puStack_48 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_50);
    func_0x0001003a824c(&puStack_50);
  }
  (**(code **)(puVar4[3] + 0x20))(puVar1);
  FUN_1081286c0(puVar4[0x42],*(undefined4 *)(param_2 + 0x40));
  func_0x000108128500(puVar4[0x42],*(undefined4 *)(param_2 + 0x48));
  if (puVar4[5] != 0) {
    plVar5 = (long *)(puVar4[5] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)puVar1;
  func_0x0001080f0240();
  return;
}



/* Entry: 1080ee094; end: 1080ee31b;  */

undefined1  [16] FUN_1080ee094(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined4 auStack_b0 [2];
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  byte bStack_78;
  undefined1 auStack_70 [8];
  byte bStack_68;
  undefined1 auStack_60 [8];
  byte bStack_58;
  
  func_0x0001080f02c8(auStack_60,param_3,"value");
  func_0x0001080f02c8(auStack_70);
  puVar4 = &DAT_10f47827f;
  func_0x0001080f02c8(auStack_80);
  if ((bStack_58 & 0xfe) == 2) {
    func_0x00010b9a9358(&lStack_98,auStack_60);
    if (lStack_98 == 0) {
      func_0x0001003a8cb8();
      goto LAB_1080ee17c;
    }
    iVar2 = *(int *)(lStack_98 + 0xc);
    func_0x0001003a8cb8();
    if (iVar2 == 0) {
      bVar7 = false;
    }
    else {
LAB_1080ee188:
      if ((bStack_78 & 0xfc) == 4) {
        func_0x0001080f029c(*(undefined8 *)(**(long **)(param_3 + 0x38) + 0x48),
                            *(long **)(param_3 + 0x38),param_4);
        goto LAB_1080ee2e0;
      }
      bVar7 = true;
    }
  }
  else {
    if (bStack_58 == 0xf) {
      FUN_1080cf62c(&lStack_98,auStack_60);
      if (lStack_98 == 0) goto LAB_1080ee188;
      plVar1 = *(long **)(lStack_98 + 0x18);
      for (lVar6 = *(long *)(lStack_98 + 0x20) * 0xf8; lVar6 != 0; lVar6 = lVar6 + -0xf8) {
        if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0xc) != 0)) {
          FUN_1080cf6b0();
          goto LAB_1080ee188;
        }
        plVar1 = plVar1 + 0x1f;
      }
      FUN_1080cf6b0();
    }
LAB_1080ee17c:
    bVar7 = false;
  }
  func_0x000104bd4df4(&lStack_88);
  if (((char)param_4[1] == '\b') && (lVar6 = *param_4, lVar6 != 0)) {
    lVar3 = lVar6 + 0x10;
    func_0x00010527d444();
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x28);
    lStack_98 = lVar3;
    puStack_90 = puVar4;
    while (lStack_98 != lVar5 + lVar6) {
      FUN_1080ee31c(lStack_88 + 0x10,puStack_90);
      func_0x00010b9a9084();
      func_0x00010527d4cc(&lStack_98);
    }
  }
  func_0x00010b9a8f54(&lStack_98,&lStack_88);
  if ((!bVar7) && ((bStack_68 & 0xfe) == 2)) {
    func_0x0001003a83dc(auStack_b0,"value");
    func_0x00010b9aa8d0(&lStack_98,auStack_b0,auStack_70);
    func_0x0001080f0294();
  }
  if ((bStack_78 & 0xfc) != 4) {
    func_0x0001003a83dc(&uStack_a0,&DAT_10f47827f);
    auStack_b0[0] = *(undefined4 *)(param_3 + 0x40);
    uStack_a8 = 4;
    func_0x00010b9aa8d0(&lStack_98,&uStack_a0,auStack_b0);
    func_0x00010b9a8d98(auStack_b0);
    func_0x0001003a8cb8(uStack_a0);
  }
  func_0x0001080f029c(*(undefined8 *)(**(long **)(param_3 + 0x38) + 0x48),*(long **)(param_3 + 0x38)
                      ,&lStack_98);
  func_0x00010b9a8d98(&lStack_98);
  func_0x000104bd4e64(lStack_88);
LAB_1080ee2e0:
  func_0x00010b9a8d98(auStack_80);
  func_0x00010b9a8d98(auStack_70);
  func_0x00010b9a8d98(auStack_60);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1080ee31c; end: 1080ee343;  */

long FUN_1080ee31c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x000105275c00(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1080ee344; end: 1080eee2f;  */

undefined8 * FUN_1080ee344(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  code *extraout_x8_18;
  undefined1 auStack_d0 [15];
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 *apuStack_a0 [5];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0001003a83dc(&pcStack_78,&DAT_10f2c3049);
  uStack_a8 = 1;
  auStack_d0[0] = 1;
  uStack_c1 = 1;
  FUN_1080eee30(&uStack_c0,&pcStack_78,&uStack_a8,auStack_d0,&uStack_c1);
  func_0x0001003a8cb8(pcStack_78);
  if ((bRam00000001137293d0 & 1) == 0) {
    iVar2 = 0x137293d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec("value");
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef010;
  ppuStack_70 = &PTR_FUN_110a20c90;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef1a8);
  func_0x000108107f90();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x58));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8 & 1) == 0) {
    iVar2 = 0x137293e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec("font");
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef210);
  func_0x0001080f00e8(FUN_1080ef278);
  func_0x000108107f90();
  (**(code **)(*param_2 + 0x60))(param_2,0x1137293d8,&uStack_c0,auStack_d0);
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_00 & 1) == 0) {
    iVar2 = 0x137293f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f68f0f0);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef2d4;
  ppuStack_70 = &PTR_FUN_110a20d10;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef338);
  func_0x000108107e68();
  func_0x0001080f0134(*(undefined8 *)(*param_2 + 0x40));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_01 & 1) == 0) {
    iVar2 = 0x13729400;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f2dba2e);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef390);
  func_0x0001080f00e8(FUN_1080ef410);
  func_0x000108107d18();
  func_0x0001080f0134(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_02 & 1) == 0) {
    iVar2 = 0x13729410;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f2dba1f);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef464;
  ppuStack_70 = &PTR_FUN_110a20d90;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef4e4);
  func_0x000108107d18();
  func_0x0001080f0134(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_03 & 1) == 0) {
    iVar2 = 0x13729420;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f47912d);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef538);
  func_0x0001080f00e8(FUN_1080ef5a0);
  func_0x000108107f90();
  func_0x0001080f02bc();
  func_0x0001080f0134();
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_04 & 1) == 0) {
    iVar2 = 0x13729430;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f47828d);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef5fc;
  ppuStack_70 = &PTR_FUN_110a20e10;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef67c);
  func_0x000108107d18();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_05 & 1) == 0) {
    iVar2 = 0x13729440;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f47827f);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef6d0);
  func_0x0001080f00e8(FUN_1080ef738);
  func_0x000108107ed8();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x38));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_06 & 1) == 0) {
    iVar2 = 0x13729450;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f479185);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef794;
  ppuStack_70 = &PTR_FUN_110a20e90;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef7fc);
  func_0x000108107df8();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x30));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_07 & 1) == 0) {
    iVar2 = 0x13729460;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f479202);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef850);
  func_0x0001080f00e8(FUN_1080ef8b4);
  func_0x000108107d88();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_08 & 1) == 0) {
    iVar2 = 0x13729470;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f2db9e8);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080ef90c;
  ppuStack_70 = &PTR_FUN_110a20f10;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080ef970);
  func_0x000108107d88();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_09 & 1) == 0) {
    iVar2 = 0x13729480;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f2db9f6);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080ef9c8);
  func_0x0001080f00e8(FUN_1080efa2c);
  func_0x000108107d88();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_10 & 1) == 0) {
    iVar2 = 0x13729490;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f47826c);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080efa84;
  ppuStack_70 = &PTR_FUN_110a20f90;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080efae8);
  func_0x000108107d88();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_11 & 1) == 0) {
    iVar2 = 0x137294a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f2db30c);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080efb3c);
  func_0x0001080f00e8(FUN_1080efba4);
  func_0x000108107f90();
  func_0x0001080f02bc();
  func_0x0001080f0100();
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_12 & 1) == 0) {
    iVar2 = 0x137294b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f479248);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080efbf8;
  ppuStack_70 = &PTR_FUN_110a21010;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080efc60);
  func_0x000108107f90();
  func_0x0001080f02bc();
  func_0x0001080f0134();
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_13 & 1) == 0) {
    iVar2 = 0x137294c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec("placeholder");
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080efcb4);
  func_0x0001080f00e8(FUN_1080efd2c);
  func_0x000108107d18();
  func_0x0001080f0100(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_14 & 1) == 0) {
    iVar2 = 0x137294d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f47990d);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080efd94;
  ppuStack_70 = &PTR_FUN_110a21090;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080efdf8);
  func_0x000108107e68();
  func_0x0001080f0134(*(undefined8 *)(*param_2 + 0x40));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_15 & 1) == 0) {
    iVar2 = 0x137294e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f479025);
      func_0x0001080f01dc();
    }
  }
  func_0x0001080f0174(FUN_1080efe54);
  func_0x0001080f00e8(FUN_1080efea0);
  func_0x000108107df8();
  func_0x0001080f0134(*(undefined8 *)(*param_2 + 0x30));
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_16 & 1) == 0) {
    iVar2 = 0x137294f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec("selection");
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080efee0;
  ppuStack_70 = &PTR_FUN_110a21110;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080eff54);
  func_0x000108107f90();
  func_0x0001080f02bc();
  func_0x0001080f0134();
  func_0x0001080f01e4();
  func_0x0001080f0124();
  func_0x0001080f0114();
  func_0x0001080f0208();
  if ((extraout_x8_17 & 1) == 0) {
    iVar2 = 0x13729500;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f01ec(&DAT_10f4790a9);
      func_0x0001080f01dc();
    }
  }
  pcStack_78 = FUN_1080eff94;
  ppuStack_70 = &PTR_FUN_110a21150;
  uStack_68 = param_1;
  func_0x0001080f00e8(FUN_1080f0010);
  func_0x000108108000();
  func_0x0001080f02bc();
  (*extraout_x8_18)(param_2,0x1137294f8,0,auStack_d0);
  func_0x0001080f01e4();
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  func_0x0001080f0214();
  func_0x0001003a83dc(&uStack_a8,"font");
  func_0x0001080f0248(0x1080f0050);
  func_0x0001080f0214();
  func_0x0001003a8cb8(CONCAT44(uStack_a4,uStack_a8));
  func_0x0001003a83dc(&uStack_a8,&DAT_10f47912d);
  func_0x0001080f0248(0x1080f0088);
  func_0x0001080f0214();
  func_0x0001003a8cb8(CONCAT44(uStack_a4,uStack_a8));
  puVar3 = &uStack_c0;
  func_0x0001080ceaec();
  func_0x0001080f02f8(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  uVar1 = puVar3[1];
  if (uVar1 < (ulong)puVar3[2]) {
    FUN_1080eee74();
    puVar4 = (undefined8 *)(uVar1 + 0x10);
  }
  else {
    puVar4 = puVar3;
    FUN_1080eeea4();
  }
  puVar3[1] = puVar4;
  return puVar4 + -2;
}



/* Entry: 1080eee30; end: 1080eee6b;  */

long FUN_1080eee30(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1080eee74();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_1080eeea4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 1080eee6c; end: 1080eee73;  */

undefined8 FUN_1080eee6c(void)

{
  return 1;
}



/* Entry: 1080eee74; end: 1080eeea3;  */

void FUN_1080eee74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1080eef58(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}



/* Entry: 1080eeea4; end: 1080eef57;  */

long FUN_1080eeea4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  FUN_1080ce8cc(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1080ce994(auStack_68,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  FUN_1080eef58(lStack_58,param_2,param_3,param_4,param_5);
  lStack_58 = lStack_58 + 0x10;
  FUN_1080ce90c(param_1,auStack_68);
  lVar2 = param_1[1];
  func_0x0001080cea84(auStack_68);
  return lVar2;
}



/* Entry: 1080eef58; end: 1080eef9f;  */

undefined8 *
FUN_1080eef58(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *param_2 = 0;
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc) = uVar2;
  *(undefined1 *)((long)param_1 + 0xd) = uVar3;
  func_0x0001003a8cb8(0);
  return param_1;
}



/* Entry: 1080eefa0; end: 1080eefcf;  */

void FUN_1080eefa0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080eefc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080eefd0; end: 1080eefe3;  */

void FUN_1080eefd0(void)

{
  func_0x0001080eeff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080eefe4; end: 1080ef00f;  */

void FUN_1080eefe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080eefec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080ef010; end: 1080ef123;  */

void FUN_1080ef010(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_60;
  byte bStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_60;
  plVar1 = &lStack_60;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9a8f04(&lStack_60);
  lVar3 = *(long *)(param_5 + 0x10);
  param_2 = (long *)*param_2;
  FUN_1080ef124(&lStack_50);
  if (lStack_50 == 0) {
LAB_1080ef0f0:
    func_0x0001080f0224();
  }
  else {
    in_ZR = (bStack_58 & 0xfe) == 2;
    if ((bool)in_ZR) {
      func_0x00010b9a9358(&lStack_48,&lStack_60);
      param_2 = &lStack_48;
      FUN_10811cadc(lStack_50);
      func_0x0001003a8cb8(lStack_48);
      goto LAB_1080ef0f0;
    }
    in_ZR = bStack_58 == 0xf;
    if (!(bool)in_ZR) goto LAB_1080ef0f0;
    FUN_108107520(&lStack_48,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10));
    if (lStack_48 == 1) {
      param_2 = &lStack_40;
      func_0x00010811cb7c(lStack_50);
    }
    else {
      *param_1 = 2;
      param_1[1] = lStack_40;
      lStack_40 = 0;
      param_2 = plVar2;
    }
    func_0x0001080f00c0(&lStack_48);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) goto LAB_1080ef0f0;
  }
  func_0x0001080f0240();
  func_0x00010b9a8d98();
  func_0x0001080f02f8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != (long *)0x0) {
    ___dynamic_cast(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25120,0);
    if ((param_2 == (long *)0x0) ||
       (plVar2 = param_2, func_0x00010b9a5818(), ((ulong)plVar2 & 1) != 0)) goto LAB_1080ef174;
    func_0x00010b9a5890();
  }
  param_2 = (long *)0x0;
LAB_1080ef174:
  *plVar1 = (long)param_2;
  return;
}



/* Entry: 1080ef124; end: 1080ef183;  */

void FUN_1080ef124(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25120,0);
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010b9a5818(), (uVar1 & 1) != 0))
    goto LAB_1080ef174;
    func_0x00010b9a5890();
  }
  param_2 = 0;
LAB_1080ef174:
  *param_1 = param_2;
  return;
}



/* Entry: 1080ef184; end: 1080ef1a7;  */

void FUN_1080ef184(void)

{
  return;
}



/* Entry: 1080ef1a8; end: 1080ef1eb;  */

void FUN_1080ef1a8(void)

{
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001080f02d8();
  if (lStack_30 != 0) {
    uStack_28 = 0;
    FUN_10811cadc(lStack_30,&uStack_28);
    func_0x0001003a8cb8(uStack_28);
  }
  func_0x0001080ef004(lStack_30);
  return;
}



/* Entry: 1080ef1ec; end: 1080ef20f;  */

void FUN_1080ef1ec(void)

{
  return;
}



/* Entry: 1080ef210; end: 1080ef253;  */

void FUN_1080ef210(void)

{
  undefined8 uStack_38;
  
  func_0x0001080f0160();
  func_0x0001080f01b4();
  if (uStack_38 == 0) {
    func_0x0001080f0224();
  }
  else {
    func_0x0001080f01f4();
    FUN_1080f9c10();
  }
  func_0x0001080f0240();
  func_0x0001080f028c();
  return;
}



/* Entry: 1080ef254; end: 1080ef277;  */

void FUN_1080ef254(void)

{
  return;
}



/* Entry: 1080ef278; end: 1080ef2af;  */

void FUN_1080ef278(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_3 + 0x10);
  func_0x0001080f0148();
  if (lStack_28 == 0) {
    return;
  }
  FUN_1080f9c68(*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lStack_28 + 0x1f8));
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080ef2b0; end: 1080ef2d3;  */

void FUN_1080ef2b0(void)

{
  return;
}



/* Entry: 1080ef2d4; end: 1080ef313;  */

void FUN_1080ef2d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080f0148();
  if (lStack_38 != 0) {
    func_0x00010811cc34(lStack_38,(uint)uVar1 >> 8 | (uint)uVar1 << 0x18);
    param_1 = lStack_38;
  }
  func_0x0001080f01cc();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ef314; end: 1080ef337;  */

void FUN_1080ef314(void)

{
  return;
}



/* Entry: 1080ef338; end: 1080ef36b;  */

void FUN_1080ef338(void)

{
  long lStack_28;
  
  func_0x0001080f0148();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010811cc34(lStack_28,0xff000000);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080ef36c; end: 1080ef38f;  */

void FUN_1080ef36c(void)

{
  return;
}



/* Entry: 1080ef390; end: 1080ef3eb;  */

void FUN_1080ef390(void)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  func_0x0001080f0318();
  if (extraout_x8 != 0) {
    do {
      func_0x0001080f02ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f0148();
  if (uStack_38 == 0) {
    func_0x0001080f0224();
  }
  else {
    func_0x0001080f0278();
    FUN_1080f9c94();
  }
  func_0x0001080f0240();
  func_0x0001080f0294();
  return;
}



/* Entry: 1080ef3ec; end: 1080ef40f;  */

void FUN_1080ef3ec(void)

{
  return;
}



/* Entry: 1080ef410; end: 1080ef43f;  */

void FUN_1080ef410(void)

{
  long lStack_28;
  
  func_0x0001080f0148();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080f030c();
  FUN_1081284e8();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}


