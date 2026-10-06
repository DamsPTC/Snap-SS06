/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080cbbf0; end: 1080cbc43;  */

void FUN_1080cbbf0(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cbc44; end: 1080cbc63;  */

void FUN_1080cbc44(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cbc64; end: 1080cbc77;  */

void FUN_1080cbc64(void)

{
  FUN_1080cc7e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cbc78; end: 1080cbc83;  */

void FUN_1080cbc78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080cc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080cbc84; end: 1080cbc97;  */

void FUN_1080cbc84(void)

{
  FUN_1080cbee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cbc98; end: 1080cbc9b;  */

undefined8 FUN_1080cbc98(void)

{
  return 1;
}



/* Entry: 1080cbc9c; end: 1080cbcd3;  */

void FUN_1080cbc9c(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b9a8e18(auStack_30);
  func_0x000104bf351c(param_1,auStack_30);
  func_0x00010b9a8d98(auStack_30);
  return;
}



/* Entry: 1080cbcd4; end: 1080cbe57;  */

undefined8 *
FUN_1080cbcd4(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,long *param_7)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar3;
  long lVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  func_0x0001080cc82c();
  uStack_58 = extraout_x8;
  FUN_1080ca570(&uStack_90,param_6);
  plVar3 = *(long **)(param_2 + 0x38);
  func_0x00010b9a9358(&puStack_98,param_3);
  FUN_1080cbf4c(&uStack_c0,param_2);
  uVar1 = uStack_90;
  uStack_b0 = uStack_90;
  uStack_90 = 0;
  lVar4 = *param_7;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  pcStack_88 = FUN_1080cc058;
  ppuStack_80 = &PTR_FUN_110a1e6b0;
  puVar2 = (undefined8 *)0x28;
  lStack_a8 = lVar4;
  uStack_a0 = param_4;
  uStack_9c = param_5;
  __Znwm();
  puVar2[1] = uStack_b8;
  *puVar2 = uStack_c0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  puVar2[2] = uVar1;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10_00 != 0);
  }
  puVar2[3] = lVar4;
  puVar2[4] = CONCAT44(uStack_9c,uStack_a0);
  puStack_78 = puVar2;
  (**(code **)(*plVar3 + 0x20))(param_1,plVar3,&puStack_98,&pcStack_88);
  func_0x0001080cc8bc(ppuStack_80);
  func_0x0001080cc7b4(&uStack_c0);
  puVar2 = puStack_98;
  func_0x0001003a8cb8();
  func_0x0001080cc990();
  func_0x0001080cc800(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080cc8bc(ppuStack_80);
    func_0x0001080cc7b4(&uStack_c0);
    func_0x0001003a8cb8();
    func_0x0001080cc990();
    puVar2 = puStack_98;
    func_0x0001080cc8e8();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_1080cbe90();
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1080cbe58; end: 1080cbe8f;  */

undefined8 * FUN_1080cbe58(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1080cbe90(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 1080cbe90; end: 1080cbedf;  */

void FUN_1080cbe90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000104bfe0dc(param_1,param_4);
    lVar1 = param_1 + 0x10;
    func_0x000104bdd1ac(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 1080cbee0; end: 1080cbf3f;  */

undefined8 * FUN_1080cbee0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e638;
  func_0x0001080cbf20(param_1 + 7);
  func_0x000104bd5214(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080cbf40; end: 1080cbf4b;  */

void FUN_1080cbf40(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cbf4c; end: 1080cc00f;  */

void FUN_1080cbf4c(long *param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
LAB_1080cbfa8:
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar1 = *(long *)(param_2 + 0x10);
      if (lVar1 == 0) goto LAB_1080cbfa8;
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_00 != 0);
      *param_1 = param_2;
      param_1[1] = lVar1;
    }
    else {
      func_0x0001003ae9f0(&lStack_40);
      if (lStack_40 == 0) {
        param_2 = 0;
        lStack_38 = 0;
      }
      else if (lStack_38 != 0) {
        do {
          func_0x0001080cc83c();
        } while (extraout_w10 != 0);
      }
      func_0x0001003a824c(&lStack_40);
      *param_1 = param_2;
      param_1[1] = lStack_38;
      if (lStack_38 == 0) goto LAB_1080cbff8;
    }
    do {
      func_0x0001080cc83c();
    } while (extraout_w10_01 != 0);
  }
LAB_1080cbff8:
  func_0x0001080cca60();
  return;
}



/* Entry: 1080cc010; end: 1080cc057;  */

void FUN_1080cc010(long param_1)

{
  func_0x0001080cca94();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080cc058; end: 1080cc377;  */

void FUN_1080cc058(long *param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  long *plVar4;
  code **ppcVar5;
  long *plVar6;
  code *pcVar7;
  code *pcVar8;
  long lStack_110;
  code **ppcStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x0001080cc82c();
  ppcVar5 = *(code ***)(param_2 + 0x10);
  ppcStack_100 = ppcVar5;
  uStack_68 = extraout_x8;
  FUN_1080cc378();
  if (lStack_110 != 0) {
    in_ZR = *param_1 == 1;
    if ((bool)in_ZR) {
      pcVar8 = ppcVar5[4];
      plVar6 = (long *)param_1[1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      lStack_e8 = param_1[3];
      lStack_f0 = param_1[2];
      iVar1 = (int)&plStack_f8;
      plStack_f8 = plVar6;
      func_0x000108143170();
      if (iVar1 == 0) {
        func_0x00010b981730(&plStack_f8);
        _objc_retainAutoreleasedReturnValue();
        ppcStack_100 = (code **)0x0;
        puVar3 = PTR_PTR_1126b27a8;
        func_0x00010bfe93e0(PTR_PTR_1126b27a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        FUN_1080ca5e4(puVar3,0,ppcVar5 + 2,lStack_110 + 0x30,ppcVar5 + 3);
        func_0x0001080cc8c8();
        func_0x0001080cc8a0();
        func_0x0001080cc8a8();
      }
      else {
        plVar4 = *(long **)(lStack_110 + 0x30);
        FUN_1080cbf4c(&pcStack_e0,lStack_110);
        plVar6 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        }
        plStack_d0 = plVar6;
        lStack_c0 = lStack_e8;
        lStack_c8 = lStack_f0;
        pcVar7 = ppcVar5[2];
        pcStack_b8 = pcVar8;
        if ((pcVar7 != (code *)0x0) && (*(long *)(pcVar7 + 0x10) != 0)) {
          do {
            func_0x0001080cc83c();
          } while (extraout_w10 != 0);
        }
        pcVar8 = ppcVar5[3];
        pcStack_b0 = pcVar7;
        if ((pcVar8 != (code *)0x0) && (*(long *)(pcVar8 + 0x10) != 0)) {
          do {
            func_0x0001080cc83c();
          } while (extraout_w10_00 != 0);
        }
        pcStack_98 = FUN_1080cc3b4;
        ppuStack_90 = &PTR_FUN_110a1e690;
        puVar2 = (undefined8 *)0x40;
        pcStack_a8 = pcVar8;
        __Znwm();
        puVar2[1] = uStack_d8;
        *puVar2 = pcStack_e0;
        uStack_d8 = 0;
        plStack_d0 = (long *)0x0;
        pcStack_e0 = (code *)0x0;
        puVar2[2] = plVar6;
        puVar2[4] = lStack_c0;
        puVar2[3] = lStack_c8;
        puVar2[5] = pcStack_b8;
        if ((pcVar7 != (code *)0x0) && (*(long *)(pcVar7 + 0x10) != 0)) {
          do {
            func_0x0001080cc83c();
            pcVar8 = pcStack_a8;
          } while (extraout_w10_01 != 0);
        }
        puVar2[6] = pcVar7;
        if ((pcVar8 != (code *)0x0) && (*(long *)(pcVar8 + 0x10) != 0)) {
          do {
            func_0x0001080cc83c();
          } while (extraout_w10_02 != 0);
        }
        puVar2[7] = pcVar8;
        ppcStack_100 = &pcStack_98;
        puStack_88 = puVar2;
        (**(code **)(*plVar4 + 0x28))(plVar4);
        func_0x0001080cc8bc(ppuStack_90);
        FUN_1080cc6bc(&pcStack_e0);
      }
      if (plStack_f8 != (long *)0x0) {
        func_0x0001080cc870();
      }
    }
    else {
      pcStack_e0 = (code *)0x2;
      uStack_d8 = 0;
      if (param_1[1] != 0) {
        do {
          func_0x0001080cca48();
          uStack_d8 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      func_0x0001080cca04();
      ppcStack_100 = &pcStack_e0;
      (*extraout_x8_01)();
      func_0x0001080cb554();
    }
  }
  func_0x0001080cca60();
  func_0x0001080cc800(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080cc034(&pcStack_e0);
    plVar6 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      func_0x0001080cc870();
    }
    func_0x0001080cca60();
    func_0x0001080cc8e8();
    *plVar6 = 0;
    plVar6[1] = 0;
    pcVar8 = ppcStack_100[1];
    if (pcVar8 != (code *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar6[1] = (long)pcVar8;
      if (pcVar8 != (code *)0x0) {
        *plVar6 = (long)*ppcStack_100;
      }
    }
    return;
  }
  return;
}



/* Entry: 1080cc378; end: 1080cc3b3;  */

void FUN_1080cc378(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1080cc3b4; end: 1080cc55f;  */

long * FUN_1080cc3b4(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w11;
  int extraout_w11_00;
  long lVar4;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [2];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001080cc82c();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  func_0x00010b973c40();
  func_0x000108143360(&lStack_48,lVar4 + 0x10,param_1,*(undefined4 *)(lVar4 + 0x28),
                      *(undefined4 *)(lVar4 + 0x2c));
  uVar1 = lStack_48 == 1;
  if ((bool)uVar1) {
    func_0x00010b973d20(&lStack_60,&lStack_40);
    uVar1 = lStack_60 == 1;
    if ((bool)uVar1) {
      FUN_1080cc378(&lStack_70,lVar4);
      if (lStack_70 != 0) {
        func_0x00010b98032c(auStack_80,alStack_58);
        func_0x00010b9803d0();
        _objc_retainAutoreleasedReturnValue();
        FUN_1080ca5e4();
        func_0x0001080cc898();
        func_0x00010b980378(auStack_80);
      }
      FUN_1080cc010(&lStack_70);
    }
    else {
      lStack_70 = 2;
      uStack_68 = 0;
      if (alStack_58[0] != 0) {
        do {
          func_0x0001080cca48();
          uStack_68 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      func_0x0001080cca04();
      (*extraout_x8_03)();
      func_0x0001080cc9b4();
    }
    FUN_1080cc560(&lStack_60);
  }
  else {
    lStack_60 = 2;
    alStack_58[0] = 0;
    if (lStack_40 != 0) {
      do {
        func_0x0001080cca48();
        alStack_58[0] = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x0001080cca04();
    (*extraout_x8_01)();
    func_0x0001080cca20();
  }
  plVar2 = &lStack_48;
  func_0x0001080cc588();
  func_0x0001080cc800(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001080cc898();
  func_0x00010b980378(auStack_80);
  FUN_1080cc010(&lStack_70);
  FUN_1080cc560(&lStack_60);
  plVar3 = &lStack_48;
  func_0x0001080cc588();
  func_0x0001080cc8e8();
  if (*plVar3 == 2) {
    func_0x0001003adc0c(plVar3 + 1);
    func_0x000104bda960();
    return plVar2;
  }
  if (*plVar3 != 1) {
    return plVar3;
  }
  plVar3 = plVar3 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001080cc57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar3)();
  return plVar3;
}



/* Entry: 1080cc560; end: 1080cc5ab;  */

void FUN_1080cc560(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001080cc57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[1])();
    return;
  }
  return;
}



/* Entry: 1080cc5ac; end: 1080cc5cb;  */

void FUN_1080cc5ac(void)

{
  func_0x0001080cca28();
  FUN_1080cc5cc();
  return;
}



/* Entry: 1080cc5cc; end: 1080cc5d7;  */

void FUN_1080cc5cc(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cc5d8; end: 1080cc5f7;  */

void FUN_1080cc5d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1080cc6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cc5f8; end: 1080cc5fb;  */

void FUN_1080cc5f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080cc5fc; end: 1080cc6bb;  */

void FUN_1080cc5fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a1e690;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  func_0x000104c6257c(puVar1 + 2,puVar3 + 2);
  puVar1[5] = puVar3[5];
  lVar2 = puVar3[6];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[6] = lVar2;
  lVar2 = puVar3[7];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[7] = lVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1080cc6bc; end: 1080cc6f7;  */

undefined8 FUN_1080cc6bc(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1080cb94c(param_1 + 0x38);
  FUN_1080cb920(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001080cc870();
  }
  func_0x0001080cca94();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1080cc6f8; end: 1080cc717;  */

void FUN_1080cc6f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001080cc7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cc718; end: 1080cc71b;  */

void FUN_1080cc718(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080cc71c; end: 1080cc7e3;  */

void FUN_1080cc71c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a1e6b0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar3[2];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[2] = lVar2;
  lVar2 = puVar3[3];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[3] = lVar2;
  puVar1[4] = puVar3[4];
  param_1[1] = puVar1;
  return;
}



/* Entry: 1080cc7e4; end: 1080ccabb;  */

void FUN_1080cc7e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e5e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080ccabc; end: 1080ccb43; -[SCValdiAttributesBinder initWithNativeAttributesBindingContext:fontManager:] */

undefined1 *
FUN_1080ccabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc6b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x0001080cff6c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x0001080cfea8();
  return (undefined1 *)puVar1;
}



/* Entry: 1080ccb44; end: 1080ccc2b; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withUntypedBlock:resetBlock:] */

void FUN_1080ccb44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long *plVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001080cff7c();
  func_0x0001080cfefc();
  plVar1 = *(long **)(param_1 + 8);
  func_0x0001003ad8f8(&uStack_48,param_3);
  func_0x0001080d01ac(&lStack_58);
  uStack_50 = 0;
  if (lStack_58 != 0) {
    do {
      func_0x0001080d013c();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,&uStack_48,param_4,&uStack_50);
  func_0x0001080ceeb8(uStack_50);
  func_0x0001080d00f0();
  func_0x0001003a8cb8(uStack_48);
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ccc2c; end: 1080ccc9b;  */

void FUN_1080ccc2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001080cff54();
  _objc_retainBlock(param_2);
  FUN_1080ceb90(puVar1,param_2,param_3);
  *puVar1 = &PTR_FUN_110a1e890;
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080ccc9c; end: 1080ccd43; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withStringBlock:resetBlock:] */

void FUN_1080ccc9c(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1e970);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x18));
  FUN_1080cfe44();
  FUN_1080cef7c();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ccd44; end: 1080ccdeb; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withDoubleBlock:resetBlock:] */

void FUN_1080ccd44(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1e9e0);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x20));
  FUN_1080cfe44();
  FUN_1080cefec();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ccdec; end: 1080cce93; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withIntBlock:resetBlock:] */

void FUN_1080ccdec(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1ea50);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x38));
  FUN_1080cfe44();
  FUN_1080cf060();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cce94; end: 1080ccf3b; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withBoolBlock:resetBlock:] */

void FUN_1080cce94(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1eac0);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x30));
  FUN_1080cfe44();
  FUN_1080cf0d4();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ccf3c; end: 1080ccfe3; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withColorBlock:resetBlock:] */

void FUN_1080ccf3c(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1eb30);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x40));
  FUN_1080cfe44();
  FUN_1080cf164();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ccfe4; end: 1080cd08b; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withBordersBlock:resetBlock:] */

void FUN_1080ccfe4(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1eba0);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x48));
  FUN_1080cfe44();
  func_0x0001080cf2cc();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cd08c; end: 1080cd133; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withPercentBlock:resetBlock:] */

void FUN_1080cd08c(void)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cfdb0();
  func_0x0001080cfefc();
  func_0x0001080cfe68();
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_DAT_110a1ec10);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x28));
  FUN_1080cfe44();
  func_0x0001080cf3b8();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cd134; end: 1080cd217; -[SCValdiAttributesBinder bindAttribute:withFunctionBlock:resetBlock:] */

void FUN_1080cd134(void)

{
  func_0x0001080cff74();
  func_0x0001080cff6c();
  func_0x0001080cff84();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  func_0x0001080cfefc();
  func_0x0001080cff6c();
  func_0x0001080d0000();
  func_0x0001080cffe0();
  func_0x0001080d00e8();
  func_0x0001080d00e0();
  func_0x0001080cffd8();
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cd218; end: 1080cd37f;  */

bool FUN_1080cd218(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001080cfee8();
  func_0x0001080cfefc();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x0001080d0094();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001080cfefc();
    lVar2 = unaff_x20;
    func_0x00010bf481c0();
    unaff_x19 = unaff_x20;
    if ((int)lVar2 == 0) {
      unaff_x19 = 0;
    }
  }
  else {
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee400();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080cff14();
    func_0x0001080cff1c();
    lVar2 = unaff_x19;
    func_0x00010bf481c0();
    if ((int)lVar2 == 0) {
      unaff_x19 = 0;
    }
  }
  func_0x0001080d0018();
  func_0x0001080cff2c();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1080d01a4();
  func_0x0001080cff2c();
  if (unaff_x19 != 0) {
    func_0x0001080d01b8(*(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x10));
  }
  func_0x0001080cff1c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return unaff_x19 != 0;
}



/* Entry: 1080cd380; end: 1080cd3e7;  */

void FUN_1080cd380(void)

{
  long unaff_x20;
  
  func_0x0001080cff34();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cffac();
  func_0x0001080cff04();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001080d00f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080cd3e8; end: 1080cd4cb; -[SCValdiAttributesBinder bindAttribute:withActionBlock:resetBlock:] */

void FUN_1080cd3e8(void)

{
  func_0x0001080cff74();
  func_0x0001080cff6c();
  func_0x0001080cff84();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  func_0x0001080cfefc();
  func_0x0001080cff6c();
  func_0x0001080d0000();
  func_0x0001080cffe0();
  func_0x0001080d00e8();
  func_0x0001080d00e0();
  func_0x0001080cffd8();
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cd4cc; end: 1080cd603;  */

bool FUN_1080cd4cc(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001080cfee8();
  func_0x0001080cfefc();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x0001080d0094();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001080cfefc();
    lVar2 = unaff_x20;
    func_0x00010bf481c0();
    if ((int)lVar2 == 0) {
      unaff_x20 = 0;
    }
    func_0x0001080d0018();
  }
  else {
    unaff_x20 = 0;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee400();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080cfe38();
  }
  func_0x0001080cff2c();
  if (unaff_x20 != 0) {
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1080d01a4();
    func_0x0001080cff2c();
    func_0x0001080d01b8(*(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x10));
  }
  func_0x0001080cff1c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return unaff_x20 != 0;
}



/* Entry: 1080cd604; end: 1080cd66b;  */

void FUN_1080cd604(void)

{
  long unaff_x20;
  
  func_0x0001080cff34();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cffac();
  func_0x0001080cff04();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001080d00f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080cd66c; end: 1080cd67b; -[SCValdiAttributesBinder bindAttribute:withFunctionAndPredicateBlock:resetBlock:] */

void FUN_1080cd66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_bindAttribute_additionalAttribut_1125a41b8,param_3,0,param_4,param_5);
  return;
}



/* Entry: 1080cd67c; end: 1080cd997; -[SCValdiAttributesBinder bindAttribute:additionalAttribute:withFunctionAndPredicateBlock:resetBlock:] */

void FUN_1080cd67c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  
  func_0x0001080d01ec();
  func_0x0001080cff74();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  func_0x0001080d0018();
  uVar1 = unaff_x19;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x19;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = unaff_x19;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126b4b08);
  func_0x00010bff4e00();
  puVar4 = PTR_PTR_1126b4b08;
  _objc_alloc(PTR_PTR_1126b4b08);
  func_0x0001080d01c4();
  puVar5 = PTR_PTR_1126b4b08;
  _objc_alloc(PTR_PTR_1126b4b08);
  func_0x0001080d01c4();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar6,param_2,puVar4);
  func_0x00010befa120(puVar6,param_2,puVar5);
  if (unaff_x20 != 0) {
    func_0x00010befa120(puVar6);
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1080cd998;
  puStack_a0 = &UNK_110a1e7d0;
  func_0x0001080cff6c();
  func_0x0001080d01e4();
  func_0x0001080d0018();
  func_0x0001080cff84();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1080cdc9c;
  puStack_d8 = &UNK_110a1e800;
  func_0x0001080cff6c();
  func_0x0001080d01e4();
  func_0x0001080d0018();
  func_0x00010bf1a200(param_1,param_2,uVar2,puVar6,&puStack_b8,&puStack_f0);
  func_0x0001080cffd8();
  _objc_release(uVar2);
  _objc_release(unaff_x19);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(uVar2);
  _objc_release(unaff_x19);
  _objc_release(puVar6);
  func_0x0001080cff2c();
  func_0x0001080d0050();
  func_0x0001080d00d8();
  _objc_release(uVar3);
  func_0x0001080cff14();
  _objc_release(uVar1);
  func_0x0001080cff1c();
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cd998; end: 1080cdc53;  */

bool FUN_1080cd998(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  long unaff_x22;
  
  func_0x0001080d00a4();
  func_0x0001080cfefc();
  func_0x0001080cfefc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class();
  func_0x0001080d0094();
  if (((ulong)puVar3 & 1) == 0) {
    unaff_x20 = 0;
  }
  func_0x0001080cff84();
  func_0x0001080cfeb0();
  uVar4 = unaff_x20;
  func_0x00010bf529e0();
  if (uVar4 < 3) {
    bVar1 = false;
  }
  else {
    uVar4 = unaff_x20;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    iVar2 = (int)uVar4;
    func_0x0001080d01e4();
    func_0x0001080cff2c();
    func_0x00010bf1f3c0();
    func_0x0001080cff14();
    if (iVar2 == 0) {
      uVar4 = unaff_x20;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf481c0();
      if ((int)uVar5 == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      bVar1 = uVar4 != 0;
      if (uVar4 != 0) {
        func_0x00010c2954e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080d01a4();
        func_0x0001080d00d8();
        uVar5 = unaff_x20;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf481c0();
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        func_0x0001080d0050();
        uVar5 = unaff_x20;
        func_0x00010bf529e0();
        if (3 < uVar5) {
          func_0x00010c0dfd40(unaff_x20);
          _objc_retainAutoreleasedReturnValue();
        }
        (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x10))();
        func_0x0001080d0050();
        func_0x0001080d00d8();
      }
      _objc_release(uVar4);
      func_0x0001080cff2c();
    }
    else {
      func_0x00010c2954e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080cffac();
      func_0x0001080cff2c();
      func_0x00010c2954e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080cffac();
      func_0x0001080cff2c();
      func_0x0001080d00f8(*(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x10));
      bVar1 = true;
    }
  }
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return bVar1;
}



/* Entry: 1080cdc54; end: 1080cdc9b;  */

void FUN_1080cdc54(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d0038();
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(unaff_x19 + 0x28));
  __Block_object_assign(unaff_x20 + 0x30,*(undefined8 *)(unaff_x19 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)
            (unaff_x20 + 0x38,*(undefined8 *)(unaff_x19 + 0x38),7);
  return;
}



/* Entry: 1080cdc9c; end: 1080cdd27;  */

void FUN_1080cdc9c(void)

{
  long unaff_x20;
  
  func_0x0001080cff34();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cffac();
  func_0x0001080cff04();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cffac();
  func_0x0001080cff04();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001080d00f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080cdd28; end: 1080cddc3; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withArrayBlock:resetBlock:] */

void FUN_1080cdd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001080cff7c();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1080cddc4;
  puStack_50 = &UNK_110a1e830;
  uStack_48 = param_5;
  func_0x0001080cff6c();
  func_0x00010bf1a180(param_1,param_2,param_3,param_4,&puStack_68,param_6);
  func_0x0001080cffe0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cddc4; end: 1080cde4b;  */

long FUN_1080cddc4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001080d00a4();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class();
  func_0x0001080d0094();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar2 + 0x10))();
  }
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return lVar2;
}



/* Entry: 1080cde4c; end: 1080ce0c7; -[SCValdiAttributesBinder bindCompositeAttribute:parts:withUntypedBlock:resetBlock:] */

void FUN_1080cde4c(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_188;
  ulong auStack_180 [2];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 auStack_118 [2];
  long lStack_108;
  undefined8 uStack_70;
  
  func_0x0001080d01ec();
  uVar1 = param_1;
  func_0x0001080cfeb8();
  uStack_70 = extraout_x8;
  func_0x0001080cff74();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  func_0x0001080d0018();
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  func_0x0001080cfefc();
  func_0x0001080d0058();
  if (uVar1 != 0) {
    lVar5 = *plStack_160;
    do {
      uVar6 = 0;
      do {
        if (*plStack_160 != lVar5) {
          _objc_enumerationMutation();
        }
        func_0x00010b96ed8c(auStack_180,*(undefined8 *)(lStack_168 + uVar6 * 8));
        if (uStack_128 < uStack_120) {
          uVar2 = 0;
          func_0x0001080d00b8();
          uVar3 = extraout_x8_00 + 0x10;
        }
        else {
          plVar4 = &lStack_130;
          FUN_1080ce8cc(plVar4,((long)(uStack_128 - lStack_130) >> 4) + 1);
          FUN_1080ce994(auStack_118,plVar4,(long)(uStack_128 - lStack_130) >> 4,&uStack_120);
          func_0x0001080d00b8(lStack_108);
          lStack_108 = lStack_108 + 0x10;
          FUN_1080ce90c(&lStack_130,auStack_118);
          uVar3 = uStack_128;
          func_0x0001080cea84(auStack_118);
          uVar2 = auStack_180[0];
        }
        uStack_128 = uVar3;
        func_0x0001003a8cb8();
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar1;
      } while (uVar6 < uVar1);
      func_0x0001080d0058();
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  func_0x0001080cfeb0();
  plVar4 = *(long **)(param_1 + 8);
  func_0x0001080d01d0(auStack_118);
  FUN_1080ccc2c(&lStack_188);
  auStack_180[0] = 0;
  if (lStack_188 != 0) {
    do {
      func_0x0001080d013c();
      auStack_180[0] = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,auStack_118,&lStack_130,auStack_180);
  func_0x0001080ceeb8(auStack_180[0]);
  func_0x0001080d00f0();
  func_0x0001003a8cb8(auStack_118[0]);
  plVar4 = &lStack_130;
  func_0x0001080ceaec();
  func_0x0001080cff1c();
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  func_0x0001080cfe24(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080ceeb8(auStack_180[0]);
    func_0x0001080d00f0();
    func_0x0001003a8cb8(auStack_118[0]);
    func_0x0001080ceaec(&lStack_130);
    func_0x0001080cff1c();
    func_0x0001080cff04();
    func_0x0001080cfeb0();
    func_0x0001080cfea8();
    __Unwind_Resume();
    func_0x0001080cff74();
    func_0x0001080cfefc();
    plVar4 = (long *)plVar4[1];
    func_0x0001080d01ac(&lStack_1d0);
    uStack_1c8 = 0;
    if (lStack_1d0 != 0) {
      do {
        func_0x0001080d013c();
        uStack_1c8 = extraout_x8_02;
      } while (extraout_w11_00 != 0);
    }
    (**(code **)(*plVar4 + 0x68))(plVar4,&uStack_1c8);
    func_0x0001080ceeb8(uStack_1c8);
    func_0x0001080cee94(lStack_1d0);
    func_0x0001080cfeb0();
    func_0x0001080cfea8();
    return;
  }
  return;
}



/* Entry: 1080ce0c8; end: 1080ce16f; -[SCValdiAttributesBinder bindTransformAttributesWithUntypedBlock:resetBlock:] */

void FUN_1080ce0c8(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long *plVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001080cff74();
  func_0x0001080cfefc();
  plVar1 = *(long **)(param_1 + 8);
  func_0x0001080d01ac(&lStack_40);
  uStack_38 = 0;
  if (lStack_40 != 0) {
    do {
      func_0x0001080d013c();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  (**(code **)(*plVar1 + 0x68))(plVar1,&uStack_38);
  func_0x0001080ceeb8(uStack_38);
  func_0x0001080cee94(lStack_40);
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce170; end: 1080ce22b; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:deserializer:withUntypedBlock:resetBlock:] */

void FUN_1080ce170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001080cff74();
  func_0x0001080cfefc();
  func_0x0001080cff84();
  func_0x00010bf1a180(param_1,param_2,param_3,param_4,param_6,param_7);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_1080ce22c;
  puStack_50 = &UNK_110a1e860;
  uStack_48 = param_5;
  func_0x00010c126ea0(param_1,param_2,param_3,&puStack_68);
  func_0x0001080cff04();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce22c; end: 1080ce24f;  */

void FUN_1080ce22c(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080ce250; end: 1080ce25b; -[SCValdiAttributesBinder registerPreprocessorForAttribute:withBlock:] */

void FUN_1080ce250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_registerPreprocessorForAttribute_1126275c0,param_3,0,param_4);
  return;
}



/* Entry: 1080ce25c; end: 1080ce377; -[SCValdiAttributesBinder registerPreprocessorForAttribute:enableCache:withBlock:] */

void FUN_1080ce25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  func_0x0001080cfeb8();
  uStack_48 = extraout_x8;
  func_0x0001080cff74();
  _objc_retain(param_5);
  func_0x00010bf51e00();
  func_0x0001080cff2c();
  _objc_retainBlock();
  pcStack_78 = FUN_1080cf3dc;
  ppuStack_70 = &PTR_FUN_110a1ec70;
  plVar1 = *(long **)(param_1 + 8);
  uStack_68 = param_5;
  func_0x0001080d01d0(&lStack_80);
  (**(code **)(*plVar1 + 0x10))(plVar1,&lStack_80,param_4,&pcStack_78);
  func_0x0001003a8cb8(lStack_80);
  func_0x0001080d0170(ppuStack_70);
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  func_0x0001080cfe24(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001003a8cb8();
  func_0x0001080d0170(ppuStack_70);
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  func_0x0001080cff64();
                    /* WARNING: Could not recover jumptable at 0x0001080ce384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lStack_80 + 8) + 0x70))();
  return;
}



/* Entry: 1080ce378; end: 1080ce387; -[SCValdiAttributesBinder bindScrollAttributes] */

void FUN_1080ce378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080ce384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  return;
}



/* Entry: 1080ce388; end: 1080ce44b; -[SCValdiAttributesBinder bindAttribute:invalidateLayoutOnChange:withTextBlock:resetBlock:] */

void FUN_1080ce388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001080d0100();
  func_0x0001080cff7c();
  func_0x0001080cfefc();
  func_0x0001003ad8f8(&stack0x00000008,param_3);
  func_0x0001080cff54();
  func_0x0001080cfe5c();
  func_0x0001080cfdf8();
  func_0x0001080cfe08(&PTR_FUN_110a1eca0);
  do {
    func_0x0001080cfe98();
  } while (extraout_w9 != 0);
  func_0x0001080d0044();
  func_0x0001080cfde4(*(undefined8 *)(extraout_x8 + 0x58));
  FUN_1080cfe44();
  func_0x0001080cf6bc();
  func_0x0001080cff0c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce44c; end: 1080ce45f; -[SCValdiAttributesBinder bindAssetAttributesForOutputType:] */

void FUN_1080ce44c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001080ce45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),param_3);
  return;
}



/* Entry: 1080ce460; end: 1080ce537; -[SCValdiAttributesBinder setPlaceholderViewMeasureDelegate:] */

void FUN_1080ce460(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  func_0x0001080cff74();
  plVar4 = *(long **)(param_1 + 8);
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  func_0x0001080cff6c();
  plVar5 = puVar3 + 1;
  puVar3[2] = 0x32aaaba7;
  *plVar5 = 1;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  *(undefined8 *)((long)puVar3 + 0x59) = 0;
  *(undefined8 *)((long)puVar3 + 0x51) = 0;
  *puVar3 = &PTR_DAT_110a1ed10;
  _objc_retainBlock(param_3);
  func_0x0001080d0134(puVar3 + 0xd);
  func_0x0001080cff1c();
  func_0x0001080cfea8();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x0001080d01d8(*(undefined8 *)(*plVar4 + 0x88));
  FUN_1080d018c();
  func_0x0001080cfa2c();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce538; end: 1080ce607; -[SCValdiAttributesBinder setMeasureDelegate:] */

void FUN_1080ce538(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  func_0x0001080cff74();
  plVar4 = *(long **)(param_1 + 8);
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  func_0x0001080cff6c();
  plVar5 = puVar3 + 1;
  *plVar5 = 1;
  *puVar3 = &PTR_DAT_110a1edb0;
  func_0x00010bf51e00(param_3);
  func_0x0001080d0134(puVar3 + 2);
  func_0x0001080cff1c();
  func_0x0001080cfea8();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x0001080d01d8(*(undefined8 *)(*plVar4 + 0x88));
  FUN_1080d018c();
  func_0x0001080cfc94();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce608; end: 1080ce62b; -[SCValdiAttributesBinder fontManager] */

void FUN_1080ce608(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001080cff6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080ce62c; end: 1080ce637; -[SCValdiAttributesBinder .cxx_destruct] */

void FUN_1080ce62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080ce638; end: 1080ce6bf; -[SCValdiViewLayoutAttributes initWithAttributes:] */

undefined1 * FUN_1080ce638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc6c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001080ce688((undefined1 *)((long)puVar1 + 8),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080ce6c0; end: 1080ce753; -[SCValdiViewLayoutAttributes cppValueForAttributeName:] */

void FUN_1080ce6c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [8];
  
  func_0x0001080cff74();
  func_0x0001080d01d0(auStack_38);
  lVar1 = *(long *)(param_2 + 8) + 0x10;
  puVar2 = auStack_38;
  FUN_1080ce754(lVar1,puVar2);
  if (*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 0x28) == lVar1)
  {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    func_0x00010b9a8f04(param_1,puVar2 + 8);
  }
  func_0x0001080cff0c();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ce754; end: 1080ce77f;  */

long FUN_1080ce754(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x0001080d0038();
  func_0x000104bd9d64();
  plVar1 = unaff_x20;
  FUN_1080cfd0c();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1080ce780; end: 1080ce7df; -[SCValdiViewLayoutAttributes valueForAttributeName:] */

void FUN_1080ce780(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  byte bStack_28;
  
  puVar1 = auStack_30;
  func_0x0001080d017c();
  if (bStack_28 < 2) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x00010b980ac4(auStack_30);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080d009c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080ce7e0; end: 1080ce817; -[SCValdiViewLayoutAttributes boolValueForAttributeName:] */

undefined1 * FUN_1080ce7e0(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001080d017c();
  func_0x00010b9a9608(auStack_30);
  func_0x0001080d009c();
  return puVar1;
}



/* Entry: 1080ce818; end: 1080ce883; -[SCValdiViewLayoutAttributes stringValueForAttributeName:] */

void FUN_1080ce818(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c296e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  func_0x0001080cfefc();
  func_0x0001080cfea8();
  func_0x0001080cfea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080ce884; end: 1080ce8bb; -[SCValdiViewLayoutAttributes doubleValueForAttributeName:] */

undefined8 FUN_1080ce884(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x0001080d017c();
  func_0x00010b9a92f0(auStack_30);
  func_0x0001080d009c();
  return param_1;
}



/* Entry: 1080ce8bc; end: 1080ce8c3; -[SCValdiViewLayoutAttributes .cxx_destruct] */

void FUN_1080ce8bc(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x000104bd4e64();
  return;
}



/* Entry: 1080ce8c4; end: 1080ce8cb; -[SCValdiViewLayoutAttributes .cxx_construct] */

void FUN_1080ce8c4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1080ce8cc; end: 1080ce90b;  */

long * FUN_1080ce8cc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0xfffffffffffffff;
    }
    return plVar3;
  }
  FUN_1080ce988();
  func_0x0001080d0038();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1080cea1c(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1080ce90c; end: 1080ce987;  */

void FUN_1080ce90c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001080d0038();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_1080cea1c(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1080ce988; end: 1080ce993;  */

long * FUN_1080ce988(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080ce9dc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1080ce994; end: 1080ce9ff;  */

long * FUN_1080ce994(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080ce9dc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1080cea00; end: 1080cea1b;  */

void FUN_1080cea00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104bfe188();
    for (puVar2 = param_2; puVar2 != param_3; puVar2 = puVar2 + 2) {
      *param_4 = *puVar2;
      *puVar2 = 0;
      uVar1 = *(undefined4 *)(puVar2 + 1);
      *(undefined2 *)((long)param_4 + 0xc) = *(undefined2 *)((long)puVar2 + 0xc);
      *(undefined4 *)(param_4 + 1) = uVar1;
      param_4 = param_4 + 2;
    }
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      func_0x0001003a8c94();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
  return;
}



/* Entry: 1080cea1c; end: 1080cea53;  */

void FUN_1080cea1c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  for (puVar2 = param_2; puVar2 != param_3; puVar2 = puVar2 + 2) {
    *param_4 = *puVar2;
    *puVar2 = 0;
    uVar1 = *(undefined4 *)(puVar2 + 1);
    *(undefined2 *)((long)param_4 + 0xc) = *(undefined2 *)((long)puVar2 + 0xc);
    *(undefined4 *)(param_4 + 1) = uVar1;
    param_4 = param_4 + 2;
  }
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 1080cea54; end: 1080ceaaf;  */

void FUN_1080cea54(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 1080ceab0; end: 1080ceab7;  */

void FUN_1080ceab0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d0038(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 1080ceab8; end: 1080ceb53;  */

void FUN_1080ceab8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d0038();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 1080ceb54; end: 1080ceb5b;  */

void FUN_1080ceb54(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d0038(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001003a8c94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080ceb5c; end: 1080ceb8f;  */

void FUN_1080ceb5c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d0038();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001003a8c94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080ceb90; end: 1080cec23;  */

void FUN_1080ceb90(void)

{
  undefined8 *unaff_x21;
  
  func_0x0001080cfee8();
  func_0x0001080cfefc();
  *unaff_x21 = &PTR_DAT_110a1e918;
  unaff_x21[1] = 1;
  func_0x00010bf51e00();
  func_0x0001080d0134(unaff_x21 + 2);
  func_0x0001080cff1c();
  func_0x00010bf51e00();
  func_0x0001080d0134(unaff_x21 + 4);
  func_0x0001080cff1c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cec24; end: 1080cec27;  */

undefined8 * FUN_1080cec24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e918;
  func_0x00010b980378(param_1 + 4);
  func_0x00010b980378(param_1 + 2);
  return param_1;
}



/* Entry: 1080cec28; end: 1080cec3b;  */

void FUN_1080cec28(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cec3c; end: 1080ced3b;  */

void FUN_1080cec3c(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = param_2 + 2;
  func_0x00010b9803d0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (plVar1 == (long *)0x0)) {
    func_0x00010b99f5f8(auStack_48,&UNK_10f479fb8);
    func_0x0001080cffe8();
  }
  else {
    uVar2 = *param_6;
    FUN_1080cee70(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*param_2 + 0x40))(param_2,plVar1,param_3,param_5,uVar2);
    if (((ulong)param_2 & 1) == 0) {
      func_0x00010b99f5f8(auStack_48,&UNK_10f479fd4);
      func_0x0001080cffe8();
    }
    else {
      *param_1 = 1;
    }
    func_0x0001080cff1c();
  }
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080ced3c; end: 1080cede3;  */

void FUN_1080ced3c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  func_0x00010b9803d0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *param_4;
    FUN_1080cee70(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))(param_1,param_2,uVar1);
    func_0x0001080cff04();
  }
  func_0x0001080cfeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080cede4; end: 1080cee33;  */

undefined8 FUN_1080cede4(undefined8 param_1)

{
  long unaff_x22;
  
  func_0x0001080d014c();
  func_0x00010b980ac4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d006c(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x0001080cfea8();
  return param_1;
}



/* Entry: 1080cee34; end: 1080cee6f;  */

undefined8 * FUN_1080cee34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e918;
  func_0x00010b980378(param_1 + 4);
  func_0x00010b980378(param_1 + 2);
  return param_1;
}



/* Entry: 1080cee70; end: 1080cee93;  */

void FUN_1080cee70(long param_1)

{
  if (param_1 != 0) {
    func_0x00010b96de64(param_1 + 0x18);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080cee94; end: 1080ceedf;  */

void FUN_1080cee94(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080ceee0; end: 1080ceef3;  */

void FUN_1080ceee0(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ceef4; end: 1080cef7b;  */

long FUN_1080ceef4(void)

{
  long unaff_x22;
  undefined1 auStack_38 [8];
  
  func_0x0001080d014c();
  func_0x00010b9a9358(auStack_38);
  func_0x00010b98101c(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cff0c();
  func_0x0001080d015c(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x0001080cfeb0();
  return unaff_x22;
}



/* Entry: 1080cef7c; end: 1080cefa3;  */

void FUN_1080cef7c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080cefa4; end: 1080cefb7;  */

void FUN_1080cefa4(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cefb8; end: 1080cefeb;  */

void FUN_1080cefb8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x21;
  
  func_0x0001080cfe84();
  func_0x00010b9a92f0();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x10);
  func_0x0001080d0128();
                    /* WARNING: Could not recover jumptable at 0x0001080cefe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1080cefec; end: 1080cf013;  */

void FUN_1080cefec(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080cf014; end: 1080cf027;  */

void FUN_1080cf014(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


