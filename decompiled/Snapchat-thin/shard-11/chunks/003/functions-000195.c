/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083b007c; end: 1083b008f;  */

undefined8 FUN_1083b007c(void)

{
  return 0;
}



/* Entry: 1083b0090; end: 1083b0153;  */

void FUN_1083b0090(long param_1,long *param_2)

{
  FUN_1083559b0();
  func_0x0001083b07d4(*(undefined4 *)(param_1 + 0x40));
  func_0x0001083b07d4(*(undefined4 *)(param_1 + 0x44));
                    /* WARNING: Could not recover jumptable at 0x0001083b00d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x48));
  return;
}



/* Entry: 1083b0154; end: 1083b0543;  */

void FUN_1083b0154(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long *plStack_478;
  long *plStack_468;
  ulong uStack_460;
  undefined1 uStack_458;
  long lStack_450;
  int iStack_448;
  int iStack_444;
  long lStack_388;
  long *plStack_380;
  long lStack_300;
  long *plStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [72];
  undefined8 uStack_298;
  long *plStack_290;
  long lStack_288;
  undefined1 auStack_280 [200];
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_130;
  long alStack_128 [19];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_5;
  plVar5 = param_5;
  (**(code **)(*plVar2 + 0x30))();
  plVar3 = plVar2;
  func_0x0001083b07e4();
  FUN_1083415ec(auStack_280,param_5);
  plStack_1b8 = plVar3;
  plStack_1b0 = plVar5;
  FUN_108355e28(&uStack_2e8,param_4,0,auStack_280);
  plVar3 = param_5 + 1;
  lVar4 = param_4;
  FUN_1083b0694(param_4,plVar3,plVar2 != (long *)0x0);
  uVar1 = uStack_2e8;
  fStack_2f0 = (float)param_2;
  fStack_2ec = (float)param_3;
  if ((fStack_2f0 == 0.0) && (fStack_2ec == 0.0)) {
    uStack_2e8 = 0;
    *param_1 = uVar1;
    _memcpy(param_1 + 1,auStack_2e0,0x48);
    uVar1 = uStack_298;
    uStack_298 = 0;
    param_1[10] = uVar1;
    param_1[0xc] = lStack_288;
    param_1[0xb] = plStack_290;
    goto LAB_1083b0454;
  }
  plStack_2f8 = (long *)param_5[0x1a];
  lStack_300 = param_5[0x19];
  if ((plVar2 == (long *)0x0) || (*(int *)(param_4 + 0x48) != 3)) {
    func_0x0001083b07e4();
    plVar5 = &lStack_300;
    lStack_300 = lVar4;
    plStack_2f8 = plVar3;
    func_0x00010821b838(plVar5,param_5 + 0x19);
    if (((ulong)plVar5 & 1) == 0) {
      FUN_10833dd8c(param_1);
      goto LAB_1083b0454;
    }
    if (*(int *)(param_4 + 0x48) != 3) {
      alStack_128[0] = lStack_288;
      plStack_130 = plStack_290;
      FUN_1083584d0(&lStack_450,&uStack_2e8,auStack_280,&plStack_130);
      FUN_10833de08(&uStack_2e8,&lStack_450);
      FUN_1083414c4(&lStack_450);
    }
    if (plVar2 == (long *)0x0) {
      FUN_108357acc(&lStack_450,&uStack_2e8,auStack_280);
      if (lStack_450 == 0) {
        FUN_10833dd8c(param_1);
      }
      else {
        lVar4 = lStack_450;
        FUN_1083415b0();
        plStack_130 = (long *)0x0;
        plStack_478 = plStack_2f8;
        lStack_480 = lStack_300;
        uVar8 = (ulong)(uint)-iStack_448;
        plVar3 = &lStack_480;
        alStack_128[0] = lVar4;
        FUN_108287534(plVar3,uVar8,-iStack_444);
        ppuVar6 = &PTR_PTR_110a3d730;
        plStack_468 = plVar3;
        uStack_460 = uVar8;
        func_0x000108338494(0x44050000,0x44050000,&PTR_PTR_110a3d730,4);
        lStack_488 = lStack_450;
        lStack_450 = 0;
        (**(code **)(*ppuVar6 + 0x20))(&lStack_480,param_2,param_3);
        FUN_1083389b0(&lStack_488);
        lStack_490 = lStack_480;
        lStack_480 = 0;
        lStack_498 = lStack_300;
        FUN_10833ddc8(param_1,&lStack_490,&lStack_498);
        FUN_1083389b0(&lStack_490);
        FUN_1083389b0(&lStack_480);
      }
      FUN_1083389b0(&lStack_450);
      goto LAB_1083b0454;
    }
  }
  FUN_1083415ec(&lStack_450,param_5);
  plStack_380 = plStack_2f8;
  lStack_388 = lStack_300;
  plStack_90 = alStack_128;
  uStack_88 = 0x200000000;
  puStack_78 = auStack_80;
  uStack_70 = 0x200000000;
  plStack_468 = (long *)((ulong)plStack_468 & 0xffffffffffffff00);
  uStack_458 = 0;
  plStack_130 = &lStack_450;
  FUN_1083afa20(&plStack_130,&uStack_2e8,&plStack_468,0,&UNK_10df1cb00);
  FUN_10835a65c(param_1,&plStack_130,&fStack_2f0);
  FUN_108359fc8(&plStack_130);
  FUN_108341670(&lStack_450);
LAB_1083b0454:
  FUN_1083414c4(&uStack_2e8);
  puVar7 = auStack_280;
  FUN_108341670(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083389b0(&lStack_450);
  FUN_1083414c4(&uStack_2e8);
  FUN_108341670(auStack_280);
  do {
    __Unwind_Resume(puVar7);
  } while( true );
}



/* Entry: 1083b0544; end: 1083b0643;  */

void FUN_1083b0544(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1083b0644(param_1,param_2,*param_3,param_3[1],1);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b0644; end: 1083b0693;  */

undefined1  [16]
FUN_1083b0644(float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar2 = &uStack_30;
  uStack_20 = param_5;
  uStack_18 = param_6;
  FUN_1083b0694(param_3,param_4,param_7);
  uVar3 = NEON_fmov(0x40400000,4);
  uStack_30 = CONCAT44(param_2 * (float)((ulong)uVar3 >> 0x20),param_1 * (float)uVar3);
  func_0x000108357874();
  puStack_28 = (undefined1 *)puVar2;
  FUN_10833e0cc(&uStack_20,&puStack_28);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1083b0694; end: 1083b0773;  */

float FUN_1083b0694(float param_1,float param_2,long param_3,undefined8 param_4,ulong param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  FUN_1083b0774(param_4,param_3 + 0x40);
  iVar3 = (int)param_4;
  fVar1 = 532.0;
  if (param_1 <= 532.0) {
    fVar1 = param_1;
  }
  fVar2 = 532.0;
  if (param_2 <= 532.0) {
    fVar2 = param_2;
  }
  if (NAN(fVar1 - fVar1)) {
    fVar4 = 0.0;
    if (NAN(fVar2 - fVar2)) {
      return 0.0;
    }
    if ((param_5 & 1) != 0) {
      return 0.0;
    }
  }
  else {
    if ((param_5 & 1) != 0) {
      if (0.03 < fVar1) {
        return fVar1;
      }
      return 0.0;
    }
    FUN_108338c40(fVar1);
    fVar4 = 0.0;
    if (1 < iVar3) {
      fVar4 = fVar1;
    }
    if (NAN(fVar2 - fVar2)) {
      return fVar4;
    }
  }
  FUN_108338c40(fVar2);
  return fVar4;
}



/* Entry: 1083b0774; end: 1083b07af;  */

void FUN_1083b0774(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  FUN_10816eab0(auStack_48,param_1 + 0x40);
  FUN_1083576dc(param_2,auStack_48);
  return;
}



/* Entry: 1083b07b0; end: 1083b07ef;  */

undefined8 * FUN_1083b07b0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000018;
  
  if (in_stack_00000018 != (long *)0x0) {
    plVar1 = in_stack_00000018 + 1;
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
      (**(code **)(*in_stack_00000018 + 0x10))();
    }
  }
  return &stack0x00000018;
}



/* Entry: 1083b07f0; end: 1083b0a2f;  */

void FUN_1083b07f0(long *param_1,long *param_2,long *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *param_2;
  plVar6 = (long *)*param_3;
  if (lVar8 == 0) {
    *param_3 = 0;
    *param_1 = (long)plVar6;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x40))(plVar6,&uStack_48);
      lVar8 = *param_2;
      if ((int)plVar6 != 0) {
        uStack_58 = uStack_48;
        FUN_1083ade28(&uStack_50,lVar8,&uStack_58);
        uVar4 = uStack_50;
        uStack_50 = 0;
        FUN_108164954(param_2,uVar4);
        FUN_108115b2c(&uStack_50);
        FUN_108115b2c(&uStack_58);
        if (*(int *)(*param_3 + 0x30) < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1083b099c);
          (*pcVar5)();
        }
        lVar8 = **(long **)(*param_3 + 0x10);
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_50 = 0;
        FUN_108167c3c(param_3);
        FUN_10811e834(&uStack_50);
        lVar8 = *param_2;
      }
    }
    lVar9 = *param_3;
    *param_3 = 0;
    *param_1 = lVar9;
    if (lVar8 != 0) {
      puVar7 = (undefined8 *)0x48;
      __Znwm();
      *param_2 = 0;
      *param_1 = 0;
      lStack_68 = lVar9;
      lStack_60 = lVar8;
      FUN_108355794();
      *puVar7 = &PTR_FUN_110a411b0;
      lStack_60 = 0;
      puVar7[8] = lVar8;
      uStack_48 = 0;
      FUN_108167c3c(param_1,puVar7);
      FUN_1083b0cc0();
      FUN_10811e834(&lStack_68);
      FUN_108115b2c(&lStack_60);
    }
  }
  if (*(char *)(param_4 + 0x10) == '\x01') {
    lStack_70 = *param_1;
    *param_1 = 0;
    FUN_1083af024(&uStack_48,param_4,&lStack_70);
    uVar4 = uStack_48;
    uStack_48 = 0;
    FUN_108167c3c(param_1,uVar4);
    FUN_1083b0cc0();
    FUN_10811e834(&lStack_70);
  }
  return;
}



/* Entry: 1083b0a30; end: 1083b0a57;  */

undefined8 * FUN_1083b0a30(undefined8 *param_1)

{
  long *plStack_28;
  
  FUN_108115b2c(param_1 + 8);
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b0a58; end: 1083b0a6b;  */

void FUN_1083b0a58(void)

{
  FUN_1083b0a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b0a6c; end: 1083b0a7f;  */

undefined8 FUN_1083b0a6c(void)

{
  return 0;
}



/* Entry: 1083b0a80; end: 1083b0b2b;  */

void FUN_1083b0a80(long param_1,long *param_2)

{
  FUN_1083559b0();
                    /* WARNING: Could not recover jumptable at 0x0001083b0ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1083b0b2c; end: 1083b0b63;  */

undefined8 FUN_1083b0b2c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x40);
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_2 = lVar4;
  }
  return 1;
}



/* Entry: 1083b0b64; end: 1083b0c07;  */

void FUN_1083b0b64(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_a0;
  undefined1 auStack_98 [104];
  
  FUN_108355e28(auStack_98,param_2,0,param_3);
  lStack_a0 = *(long *)(param_2 + 0x40);
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_108358b94(param_1,auStack_98,param_3,&lStack_a0);
  FUN_108115b2c(&lStack_a0);
  FUN_1083414c4(auStack_98);
  return;
}



/* Entry: 1083b0c08; end: 1083b0c47;  */

void FUN_1083b0c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = *(undefined4 *)(param_4 + 2);
  FUN_108355d18(param_1,0,param_2,param_3,&uStack_30);
  return;
}



/* Entry: 1083b0c48; end: 1083b0cbf;  */

void FUN_1083b0c48(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  FUN_10833e038();
  if (iVar1 == 0) {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = *(undefined4 *)(param_4 + 2);
    func_0x000108355db4(param_1,param_2,0,param_3,&uStack_50);
  }
  else {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  return;
}



/* Entry: 1083b0cc0; end: 1083b0cc7;  */

undefined8 * FUN_1083b0cc0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000028;
  
  if (in_stack_00000028 != (long *)0x0) {
    plVar1 = in_stack_00000028 + 1;
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
      (**(code **)(*in_stack_00000028 + 0x10))();
    }
  }
  return &stack0x00000028;
}



/* Entry: 1083b0cc8; end: 1083b0d9f;  */

void FUN_1083b0cc8(undefined8 *param_1,float *param_2,undefined4 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  
  if (*param_2 <= param_2[2]) {
    fVar3 = param_2[2] - *param_2;
    bVar1 = true;
    if ((param_2[1] <= param_2[3]) &&
       (bVar1 = true, !NAN((fVar3 - fVar3) * (param_2[3] - param_2[1])))) {
      bVar1 = false;
    }
    if (!bVar1) {
      puVar2 = (undefined8 *)0x58;
      __Znwm();
      *param_4 = 0;
      FUN_108355794();
      *puVar2 = &PTR_FUN_110a41250;
      uVar4 = *(undefined8 *)param_2;
      puVar2[9] = *(undefined8 *)(param_2 + 2);
      puVar2[8] = uVar4;
      *(undefined4 *)(puVar2 + 10) = param_3;
      *param_1 = puVar2;
      FUN_1083b119c();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b0da0; end: 1083b0de7;  */

void FUN_1083b0da0(void)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  FUN_1083b0cc8(&uStack_30,3,&uStack_38);
  FUN_1083b119c();
  return;
}



/* Entry: 1083b0de8; end: 1083b0deb;  */

undefined8 * FUN_1083b0de8(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b0dec; end: 1083b0dff;  */

void FUN_1083b0dec(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b0e00; end: 1083b0e13;  */

undefined8 FUN_1083b0e00(void)

{
  return 0;
}



/* Entry: 1083b0e14; end: 1083b0f17;  */

void FUN_1083b0e14(long param_1,long *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1083559b0();
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  (**(code **)(*param_2 + 0xb0))(param_2,&uStack_30);
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x50));
  return;
}



/* Entry: 1083b0f18; end: 1083b0f2f;  */

bool FUN_1083b0f18(long param_1)

{
  return *(int *)(param_1 + 0x50) != 3;
}



/* Entry: 1083b0f30; end: 1083b0ffb;  */

void FUN_1083b0f30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_a8 [104];
  
  lVar2 = param_3 + 8;
  lVar1 = param_2;
  FUN_1083b1114(param_2,lVar2,param_3 + 200);
  FUN_1083415ec(&lStack_1f8,param_3);
  lStack_130 = lVar1;
  lStack_128 = lVar2;
  FUN_108355e28(auStack_a8,param_2,0,&lStack_1f8);
  FUN_108341670(&lStack_1f8);
  lVar2 = param_3 + 8;
  lVar1 = param_2;
  func_0x0001083b114c();
  lStack_1f8 = lVar1;
  lStack_1f0 = lVar2;
  FUN_1083584d0(param_1,auStack_a8,param_3,&lStack_1f8,*(undefined4 *)(param_2 + 0x50));
  FUN_1083414c4(auStack_a8);
  return;
}



/* Entry: 1083b0ffc; end: 1083b1113;  */

void FUN_1083b0ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1083b1114();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b1114; end: 1083b119b;  */

void FUN_1083b1114(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x0001083b114c();
  lStack_30 = lVar1;
  uStack_28 = param_2;
  FUN_1083577b0(&lStack_30,*param_3,param_3[1],*(undefined4 *)(param_1 + 0x50));
  return;
}



/* Entry: 1083b119c; end: 1083b11b7;  */

undefined8 * FUN_1083b119c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
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
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 1083b11b8; end: 1083b133f;  */

undefined8 *
FUN_1083b11b8(float param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,undefined8 *param_5
             ,long param_6)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar4;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  
  func_0x0001083b1c3c();
  uVar1 = param_3 | (uint)param_2;
  bVar2 = uVar1 == 4;
  auStack_68[2] = extraout_x8;
  if ((3 < uVar1) || (bVar2 = !NAN(param_1 - param_1), NAN(param_1 - param_1))) {
    *unaff_x19 = 0;
  }
  else {
    auStack_68[0] = *param_4;
    *param_4 = 0;
    auStack_68[1] = *param_5;
    *param_5 = 0;
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    FUN_108355794();
    *puVar3 = &PTR_FUN_110a412f0;
    *(uint *)(puVar3 + 8) = (uint)param_2;
    *(uint *)((long)puVar3 + 0x44) = param_3;
    *(float *)(puVar3 + 9) = param_1;
    *unaff_x19 = puVar3;
    if (*(char *)(param_6 + 0x10) == '\x01') {
      *unaff_x19 = 0;
      puStack_78 = puVar3;
      FUN_1083af024(&uStack_70,param_6,&puStack_78);
      uStack_70 = 0;
      FUN_108167c3c();
      FUN_10811e834(&uStack_70);
      FUN_10811e834(&puStack_78);
    }
    lVar4 = 8;
    do {
      param_2 = (undefined8 *)((long)auStack_68 + lVar4);
      FUN_10811e834();
      lVar4 = lVar4 + -8;
    } while (lVar4 != -8);
    unaff_x19 = (undefined8 *)0xfffffffffffffff8;
    bVar2 = true;
  }
  func_0x0001083b1c50(auStack_68[2]);
  if (bVar2) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_10811e834(&uStack_70);
  FUN_10811e834(&puStack_78);
  FUN_10811e834(unaff_x19);
  lVar4 = 8;
  do {
    FUN_10811e834((long)auStack_68 + lVar4);
    lVar4 = lVar4 + -8;
  } while (lVar4 != -8);
  puVar3 = param_2;
  __Unwind_Resume();
  pcStack_88 = FUN_1083b1340;
  *puVar3 = &PTR_DAT_110a3e8e8;
  puStack_a0 = param_2;
  lStack_98 = lVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_108355f9c(&plStack_a8,1);
  (**(code **)(*plStack_a8 + 0x30))(plStack_a8,puVar3);
  func_0x000108355ecc();
  FUN_108355e78(puVar3 + 2);
  return puVar3;
}



/* Entry: 1083b1340; end: 1083b1343;  */

undefined8 * FUN_1083b1340(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b1344; end: 1083b1357;  */

void FUN_1083b1344(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b1358; end: 1083b136b;  */

undefined8 FUN_1083b1358(void)

{
  return 0;
}



/* Entry: 1083b136c; end: 1083b141f;  */

void FUN_1083b136c(long param_1,long *param_2)

{
  FUN_1083559b0();
  func_0x0001083b1be0();
  func_0x0001083b1be0();
                    /* WARNING: Could not recover jumptable at 0x0001083b13ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x48),param_2);
  return;
}



/* Entry: 1083b1420; end: 1083b197f;  */

void FUN_1083b1420(undefined8 param_1,float param_2,long param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 in_ZR;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 **ppuVar17;
  undefined *puVar18;
  char *pcVar19;
  int iVar20;
  undefined8 extraout_x8;
  int iVar21;
  float fVar22;
  long lStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_388;
  undefined8 uStack_380;
  long alStack_2f8 [13];
  long lStack_290;
  undefined8 uStack_288;
  long alStack_280 [11];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  char *pcStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [2];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  plVar10 = &lStack_450;
  plVar12 = &lStack_450;
  lVar7 = param_3;
  lVar15 = param_4;
  func_0x0001083b1c3c();
  uVar16 = *(undefined8 *)(lVar15 + 200);
  lVar11 = param_4 + 8;
  uStack_68 = extraout_x8;
  FUN_1083b1aa0(*(undefined4 *)(lVar7 + 0x48),lVar11,uVar16,*(undefined8 *)(param_4 + 0xd0));
  FUN_1083415ec(&uStack_1c0,param_4);
  lStack_f8 = lVar11;
  uStack_f0 = uVar16;
  FUN_108355e28(alStack_280,param_3,1,&uStack_1c0);
  func_0x0001083b1bf0();
  if (alStack_280[0] == 0) {
    func_0x0001083b1c34();
  }
  else {
    lVar7 = param_4 + 8;
    FUN_1083b1aa0(*(undefined4 *)(param_3 + 0x48),lVar7,uStack_228,uStack_220);
    plVar8 = &lStack_290;
    lStack_290 = lVar7;
    uStack_288 = uStack_228;
    func_0x00010821b838(plVar8,(undefined8 *)(lVar15 + 200));
    if (((ulong)plVar8 & 1) == 0) {
      func_0x0001083b1c34();
    }
    else {
      FUN_1083415ec(&lStack_450,param_4);
      uStack_380 = uStack_288;
      lStack_388 = lStack_290;
      lVar7 = lStack_290;
      FUN_1083415ec(&uStack_1c0,&lStack_450);
      uVar3 = uStack_80;
      fVar22 = (float)lVar7;
      uStack_80 = 0;
      FUN_1083b1b2c(uVar3);
      FUN_108355e28(alStack_2f8,param_3,0,&uStack_1c0);
      func_0x0001083b1bf0();
      FUN_108341670(&lStack_450);
      uStack_1c0 = CONCAT44(*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x48));
      FUN_1083b1af0(param_4 + 8,&uStack_1c0);
      if (alStack_2f8[0] == 0) {
        FUN_10814bdfc(&lStack_450,fVar22 * -0.5,param_2 * -0.5);
        auStack_1b8[0] = uStack_448;
        uStack_1c0 = lStack_450;
        uStack_1a8 = uStack_438;
        uStack_1a0 = uStack_430;
        FUN_1083588e4(alStack_280,param_4,&uStack_1c0,&UNK_10df200d8);
      }
      else {
        puStack_120 = auStack_1b8;
        uStack_118 = 0x200000000;
        puStack_108 = auStack_110;
        uStack_100 = 0x200000000;
        uStack_448 = uStack_288;
        lStack_450 = lStack_290;
        uStack_440 = 1;
        uStack_1c0 = param_4;
        FUN_1083afa20(&uStack_1c0,alStack_2f8,&lStack_450,0,&UNK_10df1cb00);
        uStack_440 = 1;
        lStack_450 = lVar11;
        uStack_448 = uVar16;
        FUN_1083afa20(&uStack_1c0,alStack_280,&lStack_450,2,&UNK_10df200d8);
        uStack_448 = uStack_288;
        lStack_450 = lStack_290;
        uStack_440 = 1;
        puVar9 = &uStack_1c0;
        FUN_10835a390();
        bVar5 = false;
        in_ZR = true;
        bVar6 = false;
        if ((int)puVar9 < (int)plVar10) {
          iVar20 = (int)((ulong)puVar9 >> 0x20);
          iVar21 = (int)((ulong)plVar10 >> 0x20);
          bVar6 = SBORROW4(iVar21,iVar20);
          bVar5 = iVar21 - iVar20 < 0;
          in_ZR = iVar21 == iVar20;
        }
        puStack_218 = puVar9;
        puStack_210 = (undefined1 *)plVar10;
        if ((bool)in_ZR || bVar5 != bVar6) {
          func_0x0001083b1c34();
        }
        else {
          plVar10 = &uStack_1c0;
          ppuVar17 = &puStack_218;
          FUN_108359ff4(plVar10,ppuVar17,0);
          if (ppuVar17 == (undefined8 **)0x0) goto LAB_1083b188c;
          lStack_200 = *plVar10;
          if (lStack_200 != 0) {
            piVar1 = (int *)(lStack_200 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          in_ZR = ppuVar17 == (undefined8 **)0x1;
          if ((bool)in_ZR) goto LAB_1083b188c;
          lStack_208 = plVar10[1];
          if (lStack_208 == 0) {
            lStack_208 = 0;
            plStack_1e0 = (long *)0x0;
          }
          else {
            piVar1 = (int *)(lStack_208 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            uVar13 = (ulong)*(uint *)(param_3 + 0x40);
            uVar14 = (ulong)*(uint *)(param_3 + 0x44);
            if (lStack_200 == 0) {
              FUN_1083bae14(&lStack_450,0);
              lVar11 = lStack_200;
              lStack_200 = lStack_450;
              lStack_450 = 0;
              func_0x0001083b1bb4(lVar11);
              func_0x000106f47224(&lStack_450);
            }
            lVar11 = 0x203;
            FUN_10835c894();
            if (lVar11 != 0) {
              piVar1 = (int *)(lVar11 + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lStack_1c8 = lVar11;
            FUN_108165d58(&lStack_450,&lStack_1c8);
            plVar10 = &lStack_1c8;
            FUN_108154c00();
            lStack_1d0 = lStack_200;
            lStack_200 = 0;
            puVar18 = &UNK_10f490898;
            func_0x0001083b1c1c();
            plStack_1e0 = plVar10;
            pcStack_1d8 = puVar18;
            FUN_108165cec(&plStack_1e0,&lStack_1d0);
            plVar10 = &lStack_1d0;
            func_0x000106f47224();
            lStack_1e8 = lStack_208;
            lStack_208 = 0;
            puVar18 = &UNK_10f4908a1;
            func_0x0001083b1c1c();
            plStack_1e0 = plVar10;
            pcStack_1d8 = puVar18;
            FUN_108165cec(&plStack_1e0,&lStack_1e8);
            func_0x000106f47224(&lStack_1e8);
            uStack_1f8 = CONCAT44(param_2,fVar22);
            pcVar19 = "scale";
            func_0x000108165c0c(&lStack_450,"scale",5);
            plStack_1e0 = plVar12;
            pcStack_1d8 = pcVar19;
            FUN_10816a4f0(&plStack_1e0,&uStack_1f8);
            func_0x0001083b1b38();
            func_0x0001083b1c64();
            puVar18 = &UNK_10f4908aa;
            func_0x0001083b1c10();
            uStack_1f8 = uVar13;
            puStack_1f0 = puVar18;
            func_0x0001083b1c28();
            func_0x0001083b1b38();
            func_0x0001083b1c64();
            puVar18 = &UNK_10f4908b2;
            func_0x0001083b1c10();
            uStack_1f8 = uVar14;
            puStack_1f0 = puVar18;
            func_0x0001083b1c28();
            FUN_108394a04(&plStack_1e0,&lStack_450,0);
            FUN_108166068(&lStack_450);
          }
          func_0x000106f47224(&lStack_208);
          func_0x000106f47224(&lStack_200);
          FUN_10835a3d8(&uStack_1c0,&plStack_1e0,&puStack_218,0);
          func_0x000106f47224(&plStack_1e0);
        }
        FUN_108359fc8(&uStack_1c0);
      }
      FUN_1083414c4(alStack_2f8);
    }
  }
  FUN_1083414c4(alStack_280);
  func_0x0001083b1c50(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1083b188c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1083b1890);
  (*pcVar4)();
}



/* Entry: 1083b1980; end: 1083b1a9f;  */

undefined1  [16] FUN_1083b1980(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  FUN_1083b1aa0(*(undefined4 *)(param_1 + 0x48),param_2,*param_3,param_3[1]);
  func_0x0001083b1bf8();
  FUN_108355d18(param_1,1,param_2,auStack_40,auStack_60);
  func_0x0001083b1bf8();
  uVar1 = 0;
  FUN_108355d18(param_1,0,param_2,param_3,auStack_60);
  lStack_70 = param_1;
  uStack_68 = uVar1;
  FUN_10838eae0(auStack_40,&lStack_70);
  return auStack_40;
}



/* Entry: 1083b1aa0; end: 1083b1aef;  */

undefined1  [16]
FUN_1083b1aa0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  float fStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = 0x3f000000;
  param_1 = param_1 * 0.5;
  uStack_30 = (float *)CONCAT44(param_1,param_1);
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_1083b0774(param_2,&uStack_30);
  pfVar2 = &fStack_28;
  fStack_28 = param_1;
  uStack_24 = uVar3;
  func_0x000108357874();
  uStack_30 = pfVar2;
  FUN_10833e0cc(&uStack_20,&uStack_30);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1083b1af0; end: 1083b1b2b;  */

void FUN_1083b1af0(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  FUN_10816eab0(auStack_48,param_1 + 0x40);
  func_0x0001083576a4(param_2,auStack_48);
  return;
}



/* Entry: 1083b1b2c; end: 1083b1b63;  */

void FUN_1083b1b2c(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b1b64; end: 1083b1bb3;  */

long * FUN_1083b1b64(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (FUN_1083931fc(), lVar2 == 0x10)) {
    lVar2 = *param_1;
    FUN_108165fe0();
    uVar3 = *param_2;
    puVar1 = (undefined8 *)(lVar2 + *(long *)(param_1[1] + 0x10));
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
  }
  return param_1;
}



/* Entry: 1083b1bb4; end: 1083b1c77;  */

void FUN_1083b1bb4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001083b1bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083b1c78; end: 1083b1cbf;  */

void FUN_1083b1c78(void)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x0001083b1ff8();
  FUN_1083b1cc0(auStack_28,0,auStack_30);
  func_0x0001083b2014();
  func_0x0001083b201c();
  return;
}



/* Entry: 1083b1cc0; end: 1083b1f93;  */

void FUN_1083b1cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 *param_10,ulong param_11,long *param_12,
                  long param_13)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong auStack_c8 [5];
  undefined1 uStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lStack_68 = *param_12;
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = 0;
  auStack_c8[3] = auStack_c8[3] & 0xffffffffffffff00;
  uStack_a0 = 0;
  uStack_60 = param_6;
  uStack_5c = param_7;
  uStack_58 = param_8;
  uStack_54 = param_9;
  FUN_108167b54(auStack_c8,param_4,param_5,&lStack_68,auStack_c8 + 3);
  auStack_c8[0] = 0;
  func_0x0001083b1ff0();
  func_0x0001083b1fe8();
  FUN_10811e834(&lStack_68);
  uStack_78 = *param_10;
  *param_10 = 0;
  FUN_1083ad49c(auStack_70,&uStack_60,&uStack_78,5);
  uStack_80 = *param_1;
  *param_1 = 0;
  auStack_c8[3] = auStack_c8[3] & 0xffffffffffffff00;
  uStack_a0 = 0;
  FUN_1083b07f0(auStack_c8,auStack_70,&uStack_80,auStack_c8 + 3);
  auStack_c8[0] = 0;
  func_0x0001083b1ff0();
  func_0x0001083b1fe8();
  FUN_10811e834(&uStack_80);
  FUN_108115b2c(auStack_70);
  FUN_10810a400(&uStack_78);
  FUN_10814bdfc(auStack_c8 + 3,param_2,param_3);
  auStack_c8[0] = auStack_c8[0] & 0xffffff0000000000;
  auStack_c8[1] = 0;
  auStack_c8[2] = 1;
  uStack_d0 = *param_1;
  *param_1 = 0;
  FUN_1083b3fc4(&uStack_88,auStack_c8 + 3,auStack_c8,&uStack_d0);
  uStack_88 = 0;
  func_0x0001083b1ff0();
  FUN_10811e834(&uStack_88);
  FUN_10811e834(&uStack_d0);
  if ((param_11 & 1) == 0) {
    uStack_d8 = *param_1;
    *param_1 = 0;
    lStack_e0 = *param_12;
    *param_12 = 0;
    auStack_c8[3] = auStack_c8[3] & 0xffffffffffffff00;
    uStack_a0 = 0;
    FUN_10816b714(auStack_c8,&uStack_d8,&lStack_e0,auStack_c8 + 3);
    auStack_c8[0] = 0;
    func_0x0001083b1ff0();
    func_0x0001083b1fe8();
    FUN_10811e834(&lStack_e0);
    FUN_10811e834(&uStack_d8);
  }
  if (*(char *)(param_13 + 0x10) == '\x01') {
    uStack_e8 = *param_1;
    *param_1 = 0;
    FUN_1083af024(auStack_c8 + 3,param_13,&uStack_e8);
    auStack_c8[3] = 0;
    func_0x0001083b1ff0();
    FUN_10811e834(auStack_c8 + 3);
    FUN_10811e834(&uStack_e8);
  }
  return;
}



/* Entry: 1083b1f94; end: 1083b1fdb;  */

void FUN_1083b1f94(void)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x0001083b1ff8();
  FUN_1083b1cc0(auStack_28,1,auStack_30);
  func_0x0001083b2014();
  func_0x0001083b201c();
  return;
}



/* Entry: 1083b1fdc; end: 1083b202f;  */

undefined8 * FUN_1083b1fdc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000028;
  
  if (in_stack_00000028 != (long *)0x0) {
    plVar1 = in_stack_00000028 + 1;
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
      (**(code **)(*in_stack_00000028 + 0x10))();
    }
  }
  return &stack0x00000028;
}



/* Entry: 1083b2030; end: 1083b21e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083b2030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,long *param_6,float *param_7,float *param_8)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long lStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [40];
  long alStack_58 [2];
  float fStack_48;
  float fStack_44;
  
  if ((((param_7[2] <= *param_7) || (param_7[3] <= param_7[1])) || (param_8[2] <= *param_8)) ||
     ((param_8[3] <= param_8[1] || (lVar4 = *param_6, lVar4 == 0)))) {
    FUN_1083b0cc8(param_1,&stack0xffffffffffffffd0,3,&stack0xffffffffffffffc8);
    FUN_1083b119c();
    return;
  }
  fVar5 = (float)*(int *)(lVar4 + 0x20);
  fVar6 = (float)*(int *)(lVar4 + 0x24);
  alStack_58[1] = 0;
  plVar2 = alStack_58 + 1;
  fStack_48 = fVar5;
  fStack_44 = fVar6;
  FUN_108281a6c(plVar2,param_7);
  if ((int)plVar2 == 0) {
    FUN_10814c9e0(auStack_80,param_7,param_8,0);
    plVar2 = alStack_58 + 1;
    FUN_10838ed10(plVar2,param_7);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000108142084(auStack_80,alStack_58 + 1,1);
      bVar1 = false;
      if ((fVar5 < param_4) && (bVar1 = false, !NAN(fVar6) && !NAN(param_5))) {
        bVar1 = fVar6 < param_5;
      }
      fStack_90 = fVar5;
      fStack_8c = fVar6;
      fStack_88 = param_4;
      fStack_84 = param_5;
      if (bVar1) {
        uVar3 = 0x80;
        __Znwm();
        lStack_98 = *param_6;
        *param_6 = 0;
        FUN_1083b21e8();
        *param_1 = uVar3;
        plVar2 = &lStack_98;
        goto LAB_1083b20fc;
      }
    }
    FUN_1083b0da0(param_1);
  }
  else {
    uVar3 = 0x80;
    __Znwm();
    alStack_58[0] = *param_6;
    *param_6 = 0;
    FUN_1083b21e8();
    *param_1 = uVar3;
    plVar2 = alStack_58;
LAB_1083b20fc:
    func_0x000106f47184(plVar2);
  }
  return;
}



/* Entry: 1083b21e8; end: 1083b225f;  */

void FUN_1083b21e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_108355794(param_1,0,0,0);
  *param_1 = &PTR_FUN_110a41390;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[8] = uVar1;
  uVar1 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar1;
  uVar1 = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xb] = uVar1;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0xf] = param_5[2];
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  return;
}



/* Entry: 1083b2260; end: 1083b2287;  */

undefined8 * FUN_1083b2260(undefined8 *param_1)

{
  long *plStack_28;
  
  func_0x000106f47184(param_1 + 8);
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b2288; end: 1083b229b;  */

void FUN_1083b2288(void)

{
  FUN_1083b2260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b229c; end: 1083b22af;  */

undefined8 FUN_1083b229c(void)

{
  return 0;
}



/* Entry: 1083b22b0; end: 1083b2317;  */

void FUN_1083b22b0(long param_1,long *param_2)

{
  func_0x0001083b23fc(*(undefined8 *)(*param_2 + 0xc0),param_1,param_1 + 0x68);
  func_0x0001083b23fc(*(undefined8 *)(*param_2 + 0xb0));
  func_0x0001083b23fc(*(undefined8 *)(*param_2 + 0xb0));
  func_0x0001083b23fc(*(undefined8 *)(*param_2 + 0xd8));
  return;
}



/* Entry: 1083b2318; end: 1083b232b;  */

undefined4 FUN_1083b2318(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* Entry: 1083b232c; end: 1083b239b;  */

void FUN_1083b232c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x40);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_108359c68(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),param_2,&lStack_28,
                param_1 + 0x68);
  func_0x000106f47184(&lStack_28);
  return;
}



/* Entry: 1083b239c; end: 1083b23a7;  */

undefined1  [16] FUN_1083b239c(void)

{
  return ZEXT816(0);
}



/* Entry: 1083b23a8; end: 1083b23ef;  */

void FUN_1083b23a8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = &uStack_30;
  param_6 = param_6 + 0x58;
  FUN_108341348(param_7);
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uStack_24 = param_5;
  FUN_108341380();
  *param_1 = puVar1;
  param_1[1] = param_6;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1083b23f0; end: 1083b240f;  */

void FUN_1083b23f0(void)

{
  return;
}



/* Entry: 1083b2410; end: 1083b2463;  */

void FUN_1083b2410(void)

{
  func_0x0001083b31bc();
  func_0x0001083b3220();
  func_0x0001083b3178();
  return;
}



/* Entry: 1083b2464; end: 1083b2677;  */

void FUN_1083b2464(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar4 = *(float *)(param_3 + 1);
  bVar1 = true;
  if ((0.0 <= fVar4) &&
     (bVar1 = true,
     !NAN((fVar4 - fVar4) * *(float *)((long)param_3 + 0xc) * *(float *)((long)param_3 + 4)))) {
    bVar1 = false;
  }
  if (((!bVar1) &&
      (!NAN((*(float *)(param_2 + 1) - *(float *)(param_2 + 1)) * *(float *)((long)param_2 + 0xc))))
     && (!NAN((*(float *)((long)param_2 + 0x14) - *(float *)((long)param_2 + 0x14)) *
              *(float *)(param_2 + 3)))) {
    bVar1 = true;
    if ((ABS(*(float *)((long)param_2 + 0x24)) <= 1.0) &&
       (bVar1 = true,
       !NAN((*(float *)(param_2 + 4) - *(float *)(param_2 + 4)) * *(float *)((long)param_2 + 0x24) *
            *(float *)(param_2 + 2) * *(float *)((long)param_2 + 0x1c)))) {
      bVar1 = false;
    }
    if (!bVar1) {
      uVar3 = *param_4;
      *param_4 = 0;
      *param_1 = uVar3;
      if (*(char *)(param_5 + 0x10) == '\x01') {
        *param_1 = 0;
        uStack_50 = uVar3;
        FUN_1083af024(&uStack_48,param_5,&uStack_50);
        uVar3 = uStack_48;
        uStack_48 = 0;
        FUN_108167c3c(param_1,uVar3);
        func_0x0001083b31a0();
        FUN_10811e834(&uStack_50);
      }
      puVar2 = (undefined8 *)0x78;
      __Znwm();
      uStack_58 = *param_1;
      *param_1 = 0;
      FUN_108355794();
      *puVar2 = &PTR_FUN_110a41430;
      uVar3 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      puVar2[9] = param_2[1];
      puVar2[8] = uVar3;
      puVar2[0xb] = uVar6;
      puVar2[10] = uVar5;
      puVar2[0xc] = param_2[4];
      uVar3 = *param_3;
      puVar2[0xe] = param_3[1];
      puVar2[0xd] = uVar3;
      uStack_48 = 0;
      FUN_108167c3c(param_1,puVar2);
      func_0x0001083b31a0();
      func_0x0001083b318c();
      if (*(char *)(param_5 + 0x10) != '\x01') {
        return;
      }
      uStack_60 = *param_1;
      *param_1 = 0;
      FUN_1083af024(&uStack_48,param_5,&uStack_60);
      uVar3 = uStack_48;
      uStack_48 = 0;
      FUN_108167c3c(param_1,uVar3);
      func_0x0001083b31a0();
      func_0x0001083b3178();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b2678; end: 1083b26cf;  */

void FUN_1083b2678(void)

{
  func_0x0001083b31bc();
  func_0x0001083b3220();
  func_0x0001083b3178();
  return;
}



/* Entry: 1083b26d0; end: 1083b27d3;  */

void FUN_1083b26d0(undefined8 param_1,undefined4 param_2,float param_3,uint param_4,ulong param_5,
                  undefined8 *param_6,undefined8 param_7,undefined4 param_8,undefined8 *param_9,
                  undefined8 param_10)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  
  uVar1 = param_2;
  fVar2 = param_3;
  uVar3 = param_4;
  FUN_1083b27d4(param_7,param_6);
  param_3 = param_3 * 0.017453292;
  _cosf();
  uStack_a8 = 2;
  uStack_a0 = *param_6;
  uStack_98 = *(undefined4 *)(param_6 + 1);
  lStack_b8 = (ulong)param_4 << 0x20;
  uStack_b0 = param_5 & 0xffffffff;
  uStack_c0 = *param_9;
  *param_9 = 0;
  uStack_a4 = param_8;
  uStack_94 = uVar1;
  fStack_90 = fVar2;
  uStack_8c = uVar3;
  uStack_88 = param_2;
  fStack_84 = param_3;
  FUN_1083b2464(param_1,&uStack_a8,&lStack_b8,&uStack_c0,param_10);
  func_0x0001083b3178();
  return;
}



/* Entry: 1083b27d4; end: 1083b27f3;  */

void FUN_1083b27d4(void)

{
  return;
}



/* Entry: 1083b27f4; end: 1083b2857;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001083b2838 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1083b27f4(undefined8 param_1)

{
  func_0x0001083b31ec(param_1,1);
  func_0x0001083b31dc();
  func_0x0001083b318c();
  return;
}



/* Entry: 1083b2858; end: 1083b28bb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001083b289c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1083b2858(undefined8 param_1)

{
  func_0x0001083b31ec(param_1,1);
  func_0x0001083b31dc();
  func_0x0001083b318c();
  return;
}



/* Entry: 1083b28bc; end: 1083b29d3;  */

void FUN_1083b28bc(undefined8 param_1,undefined4 param_2,float param_3,uint param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 *param_10,undefined8 param_11)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  
  uVar1 = param_2;
  fVar2 = param_3;
  uVar3 = param_4;
  FUN_1083b27d4(param_8,param_7);
  fStack_74 = param_3 * 0.017453292;
  _cosf();
  uStack_98 = 2;
  uStack_90 = *param_7;
  uStack_88 = *(undefined4 *)(param_7 + 1);
  uStack_b0 = (ulong)param_4 << 0x20 | 1;
  uStack_a8 = CONCAT17((char)((ulong)param_6 >> 0x18),
                       CONCAT16((char)((ulong)param_6 >> 0x10),
                                CONCAT15((char)((ulong)param_6 >> 8),CONCAT14((char)param_6,param_5)
                                        )));
  uStack_b8 = *param_10;
  *param_10 = 0;
  uStack_94 = param_9;
  uStack_84 = uVar1;
  fStack_80 = fVar2;
  uStack_7c = uVar3;
  uStack_78 = param_2;
  FUN_1083b2464(param_1,&uStack_98,&uStack_b0,&uStack_b8,param_11);
  FUN_10811e834(&uStack_b8);
  return;
}



/* Entry: 1083b29d4; end: 1083b29d7;  */

undefined8 * FUN_1083b29d4(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b29d8; end: 1083b29eb;  */

void FUN_1083b29d8(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b29ec; end: 1083b29ff;  */

undefined8 FUN_1083b29ec(void)

{
  return 0;
}



/* Entry: 1083b2a00; end: 1083b2a9f;  */

void FUN_1083b2a00(long param_1,long *param_2)

{
  FUN_1083559b0();
  func_0x0001083b3208();
  (**(code **)(*param_2 + 0x60))(param_2,*(undefined4 *)(param_1 + 0x44));
  func_0x0001083b31a8();
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x50));
  func_0x0001083b31a8();
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x5c));
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x60));
  func_0x0001083b3160(*(undefined4 *)(param_1 + 100));
  func_0x0001083b3208();
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x6c));
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x70));
  func_0x0001083b3160(*(undefined4 *)(param_1 + 0x74));
  return;
}



/* Entry: 1083b2aa0; end: 1083b2abb;  */

undefined8 FUN_1083b2aa0(void)

{
  return 0xce000000ce000000;
}



/* Entry: 1083b2abc; end: 1083b307f;  */

void FUN_1083b2abc(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  float param_5,long param_6,long param_7)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  long lVar11;
  ulong **ppuVar12;
  undefined8 ***pppuVar13;
  long **pplVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [88];
  float fStack_2a0;
  int iStack_29c;
  float fStack_298;
  uint uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_278;
  undefined8 **ppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  ulong *puStack_210;
  long lStack_208;
  undefined1 uStack_200;
  long lStack_1e0;
  undefined1 auStack_1d8 [152];
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  undefined8 uStack_120;
  ulong *puStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar18 = (float)FUN_1083b30f4(param_7);
  FUN_10816eab0(&lStack_1e0,param_7 + 0x48);
  uVar19 = FUN_108357670(param_6 + 0x48,&lStack_1e0);
  uVar27 = param_3;
  uVar20 = FUN_1083b30f4(param_7);
  lVar11 = param_6 + 0x54;
  uVar21 = FUN_1083b1af0(param_7 + 8);
  uVar22 = FUN_1083b30f4(param_7);
  ppuVar9 = (undefined8 **)(param_7 + 200);
  func_0x0001083b3128();
  uStack_290 = ppuVar9;
  uStack_288 = lVar11;
  FUN_1083415ec(&lStack_1e0,param_7);
  lStack_110 = uStack_288;
  puStack_118 = (ulong *)uStack_290;
  FUN_108355e28(auStack_2f8,param_6,0,&lStack_1e0);
  FUN_108341670(&lStack_1e0);
  fVar24 = SUB84(uStack_290,0);
  uStack_308 = uStack_288;
  uStack_310 = uStack_290;
  plVar10 = &lStack_1e0;
  func_0x000108219544(plVar10,&uStack_290);
  if (((ulong)plVar10 & 1) == 0) {
    uVar28 = (uint)((ulong)*(undefined8 *)(param_7 + 0xd0) >> 0x20);
    uVar4 = *(undefined8 *)(param_7 + 200);
    fVar24 = (float)uVar4;
    uStack_308 = CONCAT44(uStack_288._4_4_ ^
                          (uStack_288._4_4_ ^ uVar28) & -(uint)(uVar28 == uStack_294),
                          (uint)uStack_288 ^
                          ((uint)uStack_288 ^ *(uint *)(param_7 + 0xd0)) &
                          -(uint)((float)*(undefined8 *)(param_7 + 0xd0) == fStack_298));
    uStack_310 = (undefined8 **)
                 CONCAT44(uStack_290._4_4_ ^
                          (uStack_290._4_4_ ^ *(uint *)(param_7 + 0xcc)) &
                          -(uint)((int)((ulong)uVar4 >> 0x20) == iStack_29c),
                          (uint)(float)uStack_290 ^
                          ((uint)(float)uStack_290 ^ *(uint *)(param_7 + 200)) &
                          -(uint)(fVar24 == fStack_2a0));
    param_4 = (float)uStack_290;
    param_5 = fStack_298;
  }
  puStack_140 = auStack_1d8;
  uStack_138 = 0x200000000;
  puStack_128 = auStack_130;
  uStack_120 = 0x200000000;
  lStack_208 = uStack_308;
  puStack_210 = (ulong *)uStack_310;
  uStack_200 = 1;
  lStack_1e0 = param_7;
  FUN_1083afa20(&lStack_1e0,auStack_2f8,&puStack_210,1,&UNK_10df1cb00);
  puStack_210 = (ulong *)((ulong)puStack_210 & 0xffffffffffffff00);
  uStack_200 = 0;
  plVar10 = &lStack_1e0;
  ppuVar12 = &puStack_210;
  FUN_10835a390();
  bVar6 = false;
  bVar7 = true;
  bVar8 = false;
  if ((int)plVar10 < (int)ppuVar12) {
    iVar16 = (int)((ulong)plVar10 >> 0x20);
    iVar17 = (int)((ulong)ppuVar12 >> 0x20);
    bVar8 = SBORROW4(iVar17,iVar16);
    bVar6 = iVar17 - iVar16 < 0;
    bVar7 = iVar17 == iVar16;
  }
  plStack_278 = plVar10;
  ppuStack_270 = ppuVar12;
  if (bVar7 || bVar6 != bVar8) {
    FUN_10833dd8c(param_1);
  }
  else {
    plVar10 = &lStack_1e0;
    pplVar14 = &plStack_278;
    FUN_108359ff4(plVar10,pplVar14,0);
    if (pplVar14 == (long **)0x0) goto LAB_1083b2fb0;
    lStack_260 = *plVar10;
    *plVar10 = 0;
    lVar11 = 0x20a;
    FUN_10835c894();
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_218 = lVar11;
    func_0x0001083b3260();
    func_0x0001083b3230();
    lStack_220 = lStack_260;
    lStack_260 = 0;
    puVar15 = &UNK_10f4908e3;
    ppuVar12 = &puStack_210;
    func_0x000108165cc8(ppuVar12,&UNK_10f4908e3,8);
    uStack_230 = ppuVar12;
    uStack_228 = puVar15;
    func_0x0001083b3254();
    func_0x0001083b3218();
    puStack_238 = (undefined *)uStack_308;
    ppuStack_240 = uStack_310;
    pppuVar13 = &ppuStack_240;
    fVar23 = (float)FUN_10817500c();
    uStack_230 = (ulong **)CONCAT44(fVar24 + 0.5,fVar23 + 0.5);
    uStack_228 = (undefined *)CONCAT44(param_5 + -0.5,param_4 + -0.5);
    puVar15 = &UNK_10f4908ec;
    func_0x0001083b326c();
    uStack_250 = pppuVar13;
    puStack_248 = puVar15;
    func_0x000108359a04(&uStack_250,&uStack_230);
    ppuStack_240 = (undefined8 **)CONCAT44(ppuStack_240._4_4_,-fVar18);
    puVar15 = &UNK_10f4908f7;
    ppuVar12 = &puStack_210;
    func_0x000108165c0c(ppuVar12,&UNK_10f4908f7,0xf);
    uStack_230 = ppuVar12;
    uStack_228 = puVar15;
    func_0x000108165c7c(&uStack_230,&ppuStack_240);
    func_0x0001083b3278(&uStack_258);
    func_0x0001083b3238();
    func_0x000106f47224(&lStack_260);
    uStack_268 = uStack_258;
    uStack_258 = 0;
    iVar16 = *(int *)(param_6 + 0x40);
    uVar28 = *(uint *)(param_6 + 0x44);
    uVar29 = *(undefined4 *)(param_6 + 0x60);
    uVar31 = *(undefined4 *)(param_6 + 100);
    iVar17 = *(int *)(param_6 + 0x68);
    fVar24 = *(float *)(param_6 + 0x70);
    uVar30 = *(undefined4 *)(param_6 + 0x74);
    lVar11 = 0x204;
    FUN_10835c894();
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_218 = lVar11;
    func_0x0001083b3260();
    func_0x0001083b3230();
    lStack_220 = uStack_268;
    uStack_268 = 0;
    puVar15 = &UNK_10f490907;
    ppuVar12 = &puStack_210;
    func_0x000108165cc8(ppuVar12,&UNK_10f490907,9);
    uStack_230 = ppuVar12;
    uStack_228 = puVar15;
    func_0x0001083b3254();
    func_0x0001083b3218();
    uStack_230 = (ulong **)CONCAT44(uVar30,fVar18);
    uVar30 = 0;
    if (iVar17 != 0) {
      uVar30 = 0x3f800000;
    }
    uVar25 = 0xbf800000;
    if (iVar16 != 0) {
      uVar25 = 0x3f800000;
    }
    uVar26 = 0;
    if (iVar16 != 1) {
      uVar26 = uVar25;
    }
    uStack_228 = (undefined *)CONCAT44(uVar26,uVar30);
    puVar15 = &UNK_10f490911;
    ppuVar12 = &puStack_210;
    func_0x000108165c0c(ppuVar12,&UNK_10f490911,0x14);
    ppuStack_240 = ppuVar12;
    puStack_238 = puVar15;
    func_0x0001083b3194();
    uStack_230 = (ulong **)CONCAT44(param_3,uVar19);
    uStack_228 = (undefined *)CONCAT44(uVar29,uVar20);
    puVar15 = &UNK_10f490926;
    ppuVar12 = &puStack_210;
    func_0x000108165c0c(ppuVar12,&UNK_10f490926,0x16);
    ppuStack_240 = ppuVar12;
    puStack_238 = puVar15;
    func_0x0001083b3194();
    uStack_250 = (undefined8 ***)CONCAT44(uVar27,uVar21);
    puStack_248 = (undefined *)CONCAT44(puStack_248._4_4_,uVar22);
    fVar18 = (float)FUN_1081724e8(&uStack_250);
    fVar23 = 1.0 / fVar18;
    if (fVar18 == 0.0) {
      fVar23 = 0.0;
    }
    uStack_230 = (ulong **)
                 CONCAT44((float)((ulong)uStack_250 >> 0x20) * fVar23,SUB84(uStack_250,0) * fVar23);
    uStack_228 = (undefined *)CONCAT44(uVar31,fVar23 * puStack_248._0_4_);
    puVar15 = &UNK_10f49093d;
    ppuVar12 = &puStack_210;
    func_0x000108165c0c(ppuVar12,&UNK_10f49093d,0x15);
    ppuStack_240 = ppuVar12;
    puStack_238 = puVar15;
    func_0x0001083b3194();
    fVar24 = fVar24 / 255.0;
    uVar3 = NEON_ushl(CONCAT44(uVar28,uVar28),0xfffffff8fffffff0,4);
    uVar4 = NEON_ucvtf(uVar3 & 0xff000000ff,4);
    ppuStack_240 = (undefined8 **)
                   CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar24,(float)uVar4 * fVar24);
    puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,fVar24 * (float)(uVar28 & 0xff));
    puVar15 = &UNK_10f490953;
    func_0x0001083b326c();
    uStack_230 = ppuVar12;
    uStack_228 = puVar15;
    FUN_108172520(&uStack_230,&ppuStack_240);
    func_0x0001083b3278(&uStack_230);
    func_0x0001083b3238();
    func_0x000106f47224(&uStack_268);
    func_0x000106f47224(&uStack_258);
    FUN_10835a3d8(param_1,&lStack_1e0,&uStack_230,&plStack_278,0);
    func_0x000106f47224(&uStack_230);
  }
  FUN_108359fc8(&lStack_1e0);
  FUN_1083414c4(auStack_2f8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_1083b2fb0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083b2fb4);
  (*pcVar5)();
}



/* Entry: 1083b3080; end: 1083b30e7;  */

void FUN_1083b3080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x0001083b3128();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = param_3;
  uStack_38 = uVar1;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b30e8; end: 1083b30f3;  */

void FUN_1083b30e8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 1083b30f4; end: 1083b315f;  */

float FUN_1083b30f4(float param_1,float param_2,long param_3)

{
  float fStack_18;
  float fStack_14;
  
  fStack_18 = param_1;
  fStack_14 = param_1;
  FUN_1083b1af0(param_3 + 8,&fStack_18);
  return (param_1 + param_2) * 0.5;
}



/* Entry: 1083b3160; end: 1083b3283;  */

void FUN_1083b3160(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001083b316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x28))();
  return;
}



/* Entry: 1083b3284; end: 1083b36fb;  */

void FUN_1083b3284(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                  float *param_5,int *param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 *param_9,long param_10)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar5 = (ulong)*param_4;
  if ((((((int)*param_4 < 1) || ((int)param_4[1] < 1)) || (func_0x000108410038(), 0x100 < uVar5)) ||
      ((param_5 == (float *)0x0 || (*param_6 < 0)))) ||
     (((int)*param_4 <= *param_6 || ((param_6[1] < 0 || ((int)param_4[1] <= param_6[1])))))) {
    *param_1 = 0;
  }
  else {
    uVar8 = *param_9;
    *param_9 = 0;
    *param_1 = uVar8;
    if (((int)param_7 != 3) && ((*(byte *)(param_10 + 0x10) & 1) != 0)) {
      *param_1 = 0;
      uStack_108 = uVar8;
      FUN_1083b0cc8(&lStack_b0,param_10,param_7,&uStack_108);
      lVar10 = lStack_b0;
      lStack_b0 = 0;
      FUN_108167c3c(param_1,lVar10);
      func_0x0001083b3f8c();
      FUN_10811e834(&uStack_108);
    }
    puVar6 = (undefined8 *)0xb0;
    __Znwm();
    FUN_108355794();
    *puVar6 = &PTR_FUN_110a414d0;
    puVar11 = puVar6 + 8;
    *puVar11 = 0;
    uVar2 = *param_4;
    uVar3 = param_4[1];
    *(undefined4 *)(puVar6 + 9) = 0;
    func_0x00010837c6c0(puVar11,uVar3 * uVar2);
    if (*(int *)(puVar6 + 9) != 0) {
      _memcpy(*puVar11,param_5,(long)*(int *)(puVar6 + 9) << 2);
    }
    uVar8 = *(undefined8 *)param_4;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    uVar9 = *(undefined8 *)param_6;
    puVar6[10] = uVar8;
    puVar6[0xb] = uVar9;
    *(undefined4 *)(puVar6 + 0xc) = param_2;
    *(undefined4 *)((long)puVar6 + 100) = param_3;
    *(undefined1 *)(puVar6 + 0xd) = param_8;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    uVar2 = (int)((ulong)uVar8 >> 0x20) * (int)uVar8;
    uVar5 = 0x20800000040;
    if (0x40 < uVar2) {
      uVar5 = 0x20900000100;
    }
    uVar1 = 0x2070000001c;
    if (0x1b < (int)uVar2) {
      uVar1 = uVar5;
    }
    if ((uVar1 & 0xffffffff00000003) == 0x20700000000) {
      puVar6[0x15] = 0x3f80000000000000;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
    }
    else {
      fVar13 = *param_5;
      lVar12 = (long)(int)uVar2;
      fVar15 = fVar13;
      for (lVar10 = 1; lVar10 < lVar12; lVar10 = lVar10 + 1) {
        fVar14 = param_5[lVar10];
        fVar4 = fVar14;
        if (fVar15 <= fVar14) {
          fVar4 = fVar15;
        }
        fVar15 = fVar4;
        if (fVar14 <= fVar13) {
          fVar14 = fVar13;
        }
        fVar13 = fVar14;
      }
      *(float *)(puVar6 + 0x15) = fVar15;
      *(float *)((long)puVar6 + 0xac) = fVar13 - fVar15;
      if (ABS(fVar13 - fVar15) <= 0.00024414062) {
        *(undefined4 *)((long)puVar6 + 0xac) = 0x3f800000;
      }
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_a8 = 0;
      lStack_b0 = 0;
      uStack_b8 = uVar1 & 0x15c | 0x100000000;
      uStack_c8 = 0;
      uStack_c0 = 0x200000001;
      plVar7 = &lStack_b0;
      func_0x00010821afec(plVar7,&uStack_c8);
      FUN_10810a400(&uStack_c8);
      if ((int)plVar7 == 0) {
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
      }
      else {
        for (uVar5 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar5; uVar5 = uVar5 + 1) {
          fVar13 = (float)NEON_fminnm((float)(double)(long)(((param_5[uVar5] - fVar15) * 255.0) /
                                                            *(float *)((long)puVar6 + 0xac) + 0.5),
                                      0x4effffff);
          if (fVar13 <= -2.1474835e+09) {
            fVar13 = -2.1474835e+09;
          }
          *(char *)(lStack_a8 + uVar5) = (char)(int)fVar13;
        }
        for (; lVar12 < (long)(uVar1 & 0x15c); lVar12 = lVar12 + 1) {
          *(undefined1 *)(lStack_a8 + lVar12) = 0;
        }
        if (lStack_b0 != 0) {
          *(undefined1 *)(lStack_b0 + 0x59) = 2;
        }
        FUN_1083304b8(&uStack_100,&lStack_b0);
      }
      func_0x000108330548(&lStack_b0);
    }
    func_0x000108330638(puVar6 + 0xe,&uStack_100);
    func_0x000108330548(&uStack_100);
    uStack_110 = 0;
    FUN_108167c3c(param_1,puVar6);
    FUN_10811e834(&uStack_110);
    if (*(char *)(param_10 + 0x10) == '\x01') {
      uStack_118 = *param_1;
      *param_1 = 0;
      FUN_1083b0cc8(&lStack_b0,param_10,3,&uStack_118);
      lVar10 = lStack_b0;
      lStack_b0 = 0;
      FUN_108167c3c(param_1,lVar10);
      func_0x0001083b3f8c();
      FUN_10811e834(&uStack_118);
    }
  }
  return;
}



/* Entry: 1083b36fc; end: 1083b372b;  */

undefined8 * FUN_1083b36fc(undefined8 *param_1)

{
  long *plStack_28;
  
  FUN_108330548(param_1 + 0xe);
  FUN_1081842d4(param_1 + 8);
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b372c; end: 1083b373f;  */

void FUN_1083b372c(void)

{
  FUN_1083b36fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b3740; end: 1083b3753;  */

undefined8 FUN_1083b3740(void)

{
  return 0;
}



/* Entry: 1083b3754; end: 1083b37cf;  */

void FUN_1083b3754(long param_1,long *param_2)

{
  FUN_1083559b0();
  FUN_1083b3f70();
  FUN_1083b3f70();
  (**(code **)(*param_2 + 0x30))
            (param_2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  func_0x0001083b3f94(*(undefined4 *)(param_1 + 0x60));
  func_0x0001083b3f94(*(undefined4 *)(param_1 + 100));
  FUN_1083b3f70();
  FUN_1083b3f70();
                    /* WARNING: Could not recover jumptable at 0x0001083b37cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined1 *)(param_1 + 0x68));
  return;
}



/* Entry: 1083b37d0; end: 1083b37eb;  */

undefined8 FUN_1083b37d0(void)

{
  return 0xce000000ce000000;
}



/* Entry: 1083b37ec; end: 1083b3d57;  */

void FUN_1083b37ec(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined1 *puStack_300;
  undefined8 **ppuStack_2f8;
  undefined1 auStack_2f0 [88];
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  undefined1 **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined1 auStack_258 [8];
  long lStack_250;
  undefined8 *puStack_248;
  ulong uStack_240;
  undefined1 auStack_238 [40];
  undefined8 *puStack_210;
  undefined8 auStack_208 [19];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined1 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_48;
  
  uVar11 = 0;
  ppuVar14 = &puStack_300;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3 + 0x19;
  puVar9 = param_2;
  FUN_1083b3e68();
  FUN_1083415ec(&puStack_210,param_3);
  puStack_148 = puVar9;
  puStack_140 = puVar13;
  FUN_108355e28(auStack_2f0,param_2,0,&puStack_210);
  FUN_108341670(&puStack_210);
  if ((param_2[0x68] == '\x01') && (*(float *)(param_2 + 100) != 0.0)) {
    ppuStack_2f8 = (undefined8 **)param_3[0x1a];
    puStack_300 = (undefined1 *)param_3[0x19];
LAB_1083b38a8:
    puStack_170 = auStack_208;
    uStack_168 = 0x200000000;
    puStack_158 = auStack_160;
    uStack_150 = 0x200000000;
    puVar9 = param_2;
    puStack_210 = param_3;
    FUN_1083b3e68();
    uStack_b0._0_1_ = 1;
    puStack_c0 = puVar9;
    ppuStack_b8 = (undefined8 **)ppuVar14;
    FUN_1083afa20(&puStack_210,auStack_2f0,&puStack_c0,1,&UNK_10df1cb00);
    ppuStack_b8 = ppuStack_2f8;
    puStack_c0 = puStack_300;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    ppuVar10 = &puStack_210;
    ppuVar14 = &puStack_c0;
    FUN_10835a390();
    bVar6 = false;
    bVar7 = true;
    bVar8 = false;
    if ((int)ppuVar10 < (int)ppuVar14) {
      iVar17 = (int)((ulong)ppuVar10 >> 0x20);
      iVar19 = (int)((ulong)ppuVar14 >> 0x20);
      bVar8 = SBORROW4(iVar19,iVar17);
      bVar6 = iVar19 - iVar17 < 0;
      bVar7 = iVar19 == iVar17;
    }
    ppuStack_280 = ppuVar10;
    ppuStack_278 = ppuVar14;
    if (bVar7 || bVar6 != bVar8) {
      FUN_10833dd8c(param_1);
    }
    else {
      ppuVar10 = &puStack_210;
      pppuVar15 = &ppuStack_280;
      FUN_108359ff4(ppuVar10,pppuVar15,0);
      if (pppuVar15 == (undefined8 ***)0x0) goto LAB_1083b3c8c;
      puStack_270 = *ppuVar10;
      if (puStack_270 != (undefined8 *)0x0) {
        piVar1 = (int *)(puStack_270 + 1);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar3 = *(int *)(param_2 + 0x54) * *(int *)(param_2 + 0x50);
      uVar18 = 0x208;
      if (0x40 < uVar3) {
        uVar18 = 0x209;
      }
      uVar2 = 0x207;
      if (0x1b < (int)uVar3) {
        uVar2 = uVar18;
      }
      uVar11 = (ulong)uVar2;
      if (((int)uVar3 < 0x1c) || ((0 < *(int *)(param_2 + 0x98) && (0 < *(int *)(param_2 + 0x9c)))))
      {
        FUN_10835c894();
        if (uVar11 != 0) {
          piVar1 = (int *)(uVar11 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_240 = uVar11;
        FUN_108165d58(auStack_238,&uStack_240);
        FUN_108154c00(&uStack_240);
        puStack_248 = puStack_270;
        puStack_270 = (undefined8 *)0x0;
        ppuVar10 = (undefined8 **)&UNK_10f47d354;
        puVar9 = auStack_238;
        func_0x000108165cc8(puVar9,&UNK_10f47d354,5);
        puStack_c0 = puVar9;
        ppuStack_b8 = ppuVar10;
        FUN_108165cec(&puStack_c0,&puStack_248);
        func_0x000106f47224(&puStack_248);
        if ((int)uVar3 < 0x1c) {
          _memcpy(&puStack_c0,*(undefined8 *)(param_2 + 0x40),
                  -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
          lVar12 = (long)&puStack_c0 + (long)(int)uVar3 * 4;
          _bzero(lVar12,(ulong)(0x1c - uVar3) << 2);
          puVar16 = &UNK_10f48f1f1;
          func_0x0001083b3fac();
          if ((puVar16 != (undefined *)0x0) && (func_0x0001083b3f80(), lVar12 == 0x70)) {
            func_0x0001083b3fa4();
            _memcpy(lVar12 + *(long *)(puVar16 + 0x10),&puStack_c0,0x70);
          }
LAB_1083b3b44:
          uVar20 = *(undefined8 *)(param_2 + 0x50);
          puVar16 = &DAT_10f68f0dc;
          puVar9 = auStack_238;
          func_0x000108165c0c(puVar9,&DAT_10f68f0dc,4);
          if ((puVar16 != (undefined *)0x0) && (func_0x0001083b3f80(), puVar9 == (undefined1 *)0x8))
          {
            func_0x0001083b3fa4();
            *(undefined8 *)(puVar9 + *(long *)(puVar16 + 0x10)) = uVar20;
          }
          uVar20 = *(undefined8 *)(param_2 + 0x58);
          puVar16 = &DAT_10f63975c;
          func_0x0001083b3fac();
          if ((puVar16 != (undefined *)0x0) && (func_0x0001083b3f80(), puVar9 == (undefined1 *)0x8))
          {
            func_0x0001083b3fa4();
            *(undefined8 *)(puVar9 + *(long *)(puVar16 + 0x10)) = uVar20;
          }
          uStack_268._0_4_ = *(undefined4 *)(param_2 + 0x60);
          uStack_268._4_4_ = *(float *)(param_2 + 100) / 255.0;
          puVar16 = &UNK_10f49098e;
          puVar9 = auStack_238;
          func_0x000108165c0c(puVar9,&UNK_10f49098e,0xb);
          puStack_c0 = puVar9;
          ppuStack_b8 = (undefined8 **)puVar16;
          func_0x0001083b3fb8();
          uStack_268 = (undefined1 *)CONCAT44(uStack_268._4_4_,(uint)(byte)param_2[0x68]);
          ppuVar10 = (undefined8 **)&UNK_10f49099a;
          puVar9 = auStack_238;
          func_0x000108165c0c(puVar9,&UNK_10f49099a,0xd);
          puStack_c0 = puVar9;
          ppuStack_b8 = ppuVar10;
          FUN_1083b3f20(&puStack_c0,&uStack_268);
          FUN_108394a04(&uStack_288,auStack_238,0);
        }
        else {
          (**(code **)(*(long *)*param_3 + 0x28))(&lStack_250,(long *)*param_3,param_2 + 0x70);
          if (lStack_250 == 0) {
            uStack_288 = 0;
          }
          else {
            puStack_c0 = (undefined1 *)((ulong)puStack_c0 & 0xffffff0000000000);
            ppuStack_b8 = (undefined8 **)0x0;
            uStack_b0 = 0;
            FUN_1083b5c3c(auStack_258,lStack_250,&puStack_c0,0);
            puVar16 = &UNK_10f48f1f1;
            puVar9 = auStack_238;
            func_0x000108165cc8(puVar9,&UNK_10f48f1f1,6);
            uStack_268 = puVar9;
            puStack_260 = puVar16;
            FUN_108165cec(&uStack_268,auStack_258);
            func_0x000106f47224(auStack_258);
            uStack_268 = (undefined1 *)NEON_rev64(*(undefined8 *)(param_2 + 0xa8),4);
            ppuVar10 = (undefined8 **)&UNK_10f49097d;
            puVar9 = auStack_238;
            func_0x000108165c0c(puVar9,&UNK_10f49097d,0x10);
            puStack_c0 = puVar9;
            ppuStack_b8 = ppuVar10;
            func_0x0001083b3fb8();
          }
          func_0x000106f47184(&lStack_250);
          if (lStack_250 != 0) goto LAB_1083b3b44;
        }
        FUN_108166068(auStack_238);
      }
      else {
        uStack_288 = 0;
      }
      func_0x000106f47224(&puStack_270);
      FUN_10835a3d8(param_1,&puStack_210,&uStack_288,&ppuStack_280,0);
      func_0x000106f47224(&uStack_288);
    }
    FUN_108359fc8(&puStack_210);
  }
  else {
    auStack_208[0] = uStack_290;
    puStack_210 = puStack_298;
    ppuVar10 = &puStack_210;
    puVar9 = param_2;
    func_0x0001083b3e94();
    puStack_300 = puVar9;
    ppuStack_2f8 = ppuVar10;
    func_0x00010821b838(&puStack_300,param_3 + 0x19);
    if ((uVar11 & 1) != 0) goto LAB_1083b38a8;
    FUN_10833dd8c(param_1);
  }
  FUN_1083414c4(auStack_2f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_1083b3c8c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083b3c90);
  (*pcVar5)();
}



/* Entry: 1083b3d58; end: 1083b3dbf;  */

void FUN_1083b3d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_1083b3e68();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = uVar1;
  uStack_38 = param_3;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b3dc0; end: 1083b3e67;  */

void FUN_1083b3dc0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_34 [16];
  char cStack_24;
  
  if ((*(char *)(param_2 + 0x68) == '\x01') && (*(float *)(param_2 + 100) != 0.0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = *(undefined4 *)(param_4 + 2);
    func_0x000108355db4(auStack_34,param_2,0,param_3,&uStack_50);
    if (cStack_24 != '\x01') {
      *(undefined1 *)param_1 = 0;
    }
    else {
      puVar1 = auStack_34;
      func_0x0001083b3e94();
      *param_1 = param_2;
      param_1[1] = (long)puVar1;
    }
    *(bool *)(param_1 + 2) = cStack_24 == '\x01';
  }
  return;
}



/* Entry: 1083b3e68; end: 1083b3f1f;  */

undefined1  [16] FUN_1083b3e68(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar8._0_8_ = (long)(int)-*(uint *)(param_1 + 0x58) + (long)(int)*param_2;
  auVar8._8_8_ = (long)(int)(*(int *)(param_1 + 0x50) + ~*(uint *)(param_1 + 0x58)) +
                 (long)(int)param_2[1];
  auVar2._8_8_ = 0xffffffff80000001;
  auVar2._0_8_ = 0xffffffff80000001;
  auVar4._8_8_ = -(ulong)(-0x7fffffff < auVar8._8_8_);
  auVar4._0_8_ = -(ulong)(-0x7fffffff < auVar8._0_8_);
  auVar8 = auVar8 ^ (auVar8 ^ auVar2) & ~auVar4;
  auVar5._8_8_ = 0x7fffffff;
  auVar5._0_8_ = 0x7fffffff;
  auVar7._8_8_ = -(ulong)(auVar8._8_8_ < 0x7fffffff);
  auVar7._0_8_ = -(ulong)(auVar8._0_8_ < 0x7fffffff);
  auVar10._0_8_ = (long)(int)-*(uint *)(param_1 + 0x5c) + (*param_2 >> 0x20);
  auVar10._8_8_ =
       (long)(int)(*(int *)(param_1 + 0x54) + ~*(uint *)(param_1 + 0x5c)) + (param_2[1] >> 0x20);
  auVar3._8_8_ = 0xffffffff80000001;
  auVar3._0_8_ = 0xffffffff80000001;
  auVar9._8_8_ = -(ulong)(-0x7fffffff < auVar10._8_8_);
  auVar9._0_8_ = -(ulong)(-0x7fffffff < auVar10._0_8_);
  auVar10 = auVar10 ^ (auVar10 ^ auVar3) & ~auVar9;
  auVar6._8_8_ = 0x7fffffff;
  auVar6._0_8_ = 0x7fffffff;
  auVar1._8_8_ = -(ulong)(auVar10._8_8_ < 0x7fffffff);
  auVar1._0_8_ = -(ulong)(auVar10._0_8_ < 0x7fffffff);
  auVar9 = NEON_sli(auVar8 ^ (auVar8 ^ auVar5) & ~auVar7,auVar10 ^ (auVar10 ^ auVar6) & ~auVar1,0x20
                    ,8);
  return auVar9;
}



/* Entry: 1083b3f20; end: 1083b3f6f;  */

long * FUN_1083b3f20(long *param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (FUN_1083931fc(), lVar1 == 4)) {
    lVar1 = *param_1;
    FUN_108165fe0();
    *(undefined4 *)(lVar1 + *(long *)(param_1[1] + 0x10)) = *param_2;
  }
  return param_1;
}



/* Entry: 1083b3f70; end: 1083b3fc3;  */

void FUN_1083b3f70(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001083b3f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x38))();
  return;
}



/* Entry: 1083b3fc4; end: 1083b409f;  */

void FUN_1083b3fc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  FUN_10818cfd0(param_2,0);
  if (((ulong)puVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
    *param_4 = 0;
    FUN_108355794();
    *puVar1 = &PTR_FUN_110a41570;
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    puVar1[9] = param_2[1];
    puVar1[8] = uVar2;
    puVar1[0xb] = uVar4;
    puVar1[10] = uVar3;
    puVar1[0xc] = param_2[4];
    uVar2 = *param_3;
    puVar1[0xe] = param_3[1];
    puVar1[0xd] = uVar2;
    puVar1[0xf] = param_3[2];
    func_0x0001081421e0(puVar1 + 8);
    *param_1 = puVar1;
    func_0x0001083b452c();
  }
  return;
}



/* Entry: 1083b40a0; end: 1083b418b;  */

void FUN_1083b40a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [5];
  
  FUN_10814bdfc(auStack_58);
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = *param_2;
  *param_2 = 0;
  FUN_1083b3fc4(param_1,auStack_58,&uStack_70,&uStack_78);
  func_0x0001083b452c();
  if (*(char *)(param_3 + 0x10) == '\x01') {
    uStack_80 = *param_1;
    *param_1 = 0;
    FUN_1083af024(auStack_58,param_3,&uStack_80);
    uVar1 = auStack_58[0];
    auStack_58[0] = 0;
    FUN_108167c3c(param_1,uVar1);
    FUN_10811e834(auStack_58);
    FUN_10811e834(&uStack_80);
  }
  return;
}



/* Entry: 1083b418c; end: 1083b418f;  */

undefined8 * FUN_1083b418c(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b4190; end: 1083b41a3;  */

void FUN_1083b4190(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b41a4; end: 1083b41b7;  */

undefined8 FUN_1083b41a4(void)

{
  return 0;
}



/* Entry: 1083b41b8; end: 1083b4287;  */

void FUN_1083b41b8(long param_1,long *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_1083559b0();
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  (**(code **)(*param_2 + 0xa0))(param_2,&uStack_50);
  (**(code **)(*param_2 + 0xc0))(param_2,param_1 + 0x68);
  return;
}



/* Entry: 1083b4288; end: 1083b428f;  */

undefined8 FUN_1083b4288(void)

{
  return 2;
}



/* Entry: 1083b4290; end: 1083b435f;  */

void FUN_1083b4290(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_1f8 [200];
  long lStack_130;
  long lStack_128;
  undefined1 auStack_a8 [104];
  
  lVar2 = param_3 + 8;
  lVar1 = param_2;
  FUN_1083b445c(param_2,lVar2,param_3 + 200);
  FUN_1083415ec(auStack_1f8,param_3);
  lStack_130 = lVar1;
  lStack_128 = lVar2;
  FUN_108355e28(auStack_a8,param_2,0,auStack_1f8);
  FUN_108341670(auStack_1f8);
  func_0x0001083b44e4(auStack_1f8,param_3 + 8,param_2 + 0x40);
  FUN_1083588e4(param_1,auStack_a8,param_3,auStack_1f8,param_2 + 0x68);
  FUN_1083414c4(auStack_a8);
  return;
}



/* Entry: 1083b4360; end: 1083b445b;  */

void FUN_1083b4360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1083b445c();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b445c; end: 1083b4523;  */

undefined1  [16] FUN_1083b445c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001083b44e4(&uStack_58,param_2,param_1 + 0x40);
  puVar1 = &uStack_58;
  FUN_108357948(puVar1,param_3,&uStack_30);
  if ((int)puVar1 == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    param_1 = param_1 + 0x68;
    FUN_1081753ec(param_1,&uStack_58);
    if ((int)param_1 != 0) {
      uStack_58 = 0x100000001;
      FUN_10833e0cc(&uStack_30,&uStack_58);
    }
  }
  auVar2._8_8_ = uStack_28;
  auVar2._0_8_ = uStack_30;
  return auVar2;
}



/* Entry: 1083b4524; end: 1083b4533;  */

void FUN_1083b4524(void)

{
  return;
}



/* Entry: 1083b4534; end: 1083b4647;  */

void FUN_1083b4534(undefined8 *param_1,long param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if ((param_2 != 0) && (0 < param_3)) {
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    FUN_108355794();
    *puVar2 = &PTR_FUN_110a41610;
    *param_1 = puVar2;
    if (*(char *)(param_4 + 0x10) == '\x01') {
      *param_1 = 0;
      puStack_50 = puVar2;
      FUN_1083af024(&uStack_48,param_4,&puStack_50);
      uVar1 = uStack_48;
      uStack_48 = 0;
      FUN_108167c3c(param_1,uVar1);
      FUN_10811e834(&uStack_48);
      FUN_10811e834(&puStack_50);
    }
    return;
  }
  FUN_1083b0cc8(param_1,&stack0xffffffffffffffd0,3,&stack0xffffffffffffffc8);
  FUN_1083b119c();
  return;
}



/* Entry: 1083b4648; end: 1083b464b;  */

undefined8 * FUN_1083b4648(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b464c; end: 1083b465f;  */

void FUN_1083b464c(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


