/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d4914; end: 1078d4937;  */

void FUN_1078d4914(void)

{
  func_0x0001078d4a98();
  func_0x0001078d4938();
  return;
}



/* Entry: 1078d4de0; end: 1078d503b;  */

/* WARNING: Possible PIC construction at 0x0001078d4f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d4f28) */

long * FUN_1078d4de0(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  plVar1 = &lStack_110;
  func_0x0001078d5418();
  lVar3 = *param_3;
  lStack_e8 = param_3[1];
  lStack_f0 = lVar3;
  uStack_38 = extraout_x8;
  if (lStack_e8 != 0) {
    do {
      func_0x0001078d5428();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(auStack_70,*(long *)(*(long *)(lVar3 + 0x2b0) + 0x150) + 8);
  param_4 = param_4 + 0x38;
  puVar2 = auStack_70;
  func_0x0001078be7f4();
  if ((param_4 == 0) || (*(long *)(puVar2 + 0x38) == 0)) {
    func_0x00010724ef84(&lStack_e0,auStack_70);
    func_0x0001004c3cd0(&uStack_a8,&UNK_10f433cce,&lStack_e0);
    param_1[1] = uStack_a0;
    *param_1 = uStack_a8;
    param_1[2] = uStack_98;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
    func_0x000104c2f714(auStack_70);
    plVar1 = &lStack_f0;
    func_0x0001078d4c58();
    func_0x0001078d5404(uStack_38);
    if ((bool)in_ZR) {
      return plVar1;
    }
    ___stack_chk_fail();
    func_0x0001073c5f18(&lStack_e0);
    func_0x0001078d5448();
    func_0x000104c2f714(&uStack_a8);
    func_0x000104c2f714(auStack_70);
    plVar1 = &lStack_f0;
    func_0x0001078d4c58();
    func_0x0001078d5440();
  }
  else {
    func_0x000104c2f64c(&uStack_a8);
    lStack_100 = lVar3 + 0x208;
    uStack_f8 = 1;
    func_0x00010724e404();
    lVar3 = *(long *)(lVar3 + 0x330);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 8) == 0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            func_0x0001078d5428();
          } while (extraout_w10_01 != 0);
        }
      }
      else {
        func_0x0001003ae9f0(&lStack_e0);
        if (lStack_e0 == 0) {
          lStack_110 = 0;
          lStack_108 = 0;
        }
        else {
          lStack_108 = lStack_d8;
          lStack_110 = lVar3;
          if (lStack_d8 != 0) {
            do {
              func_0x0001078d5428();
            } while (extraout_w10_00 != 0);
          }
        }
        func_0x0001003a90c4(&lStack_e0);
      }
    }
    lStack_110 = 0;
    lStack_108 = 0;
  }
  if (plVar1[1] != 0) {
    func_0x0001000df548();
  }
  return plVar1;
}



/* Entry: 1078d5124; end: 1078d5137;  */

void FUN_1078d5124(void)

{
  func_0x0001078d50f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d5364; end: 1078d53cf;  */

void FUN_1078d5364(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001078bee98(auStack_28,param_1 + 0x18);
  func_0x0001078beedc(param_1 + 0x1a8,auStack_28);
  func_0x0001078bee2c(auStack_28);
  func_0x000108122b44(param_1,param_1 + 0x1a8,1);
  func_0x000108122c38(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),
                      **(undefined4 **)(param_1 + 0x1c0),param_1);
  return;
}



/* Entry: 1078d5be4; end: 1078d5c5f;  */

void FUN_1078d5be4(undefined8 param_1,ulong param_2)

{
  func_0x000104c2d614();
  if ((param_2 & 1) == 0) {
    func_0x0001078c44f4();
  }
  return;
}



/* Entry: 1078d5ec8; end: 1078d5ed7;  */

void FUN_1078d5ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8e50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d60a4; end: 1078d60b3;  */

void FUN_1078d60a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d6b20; end: 1078d6cfb;  */

void FUN_1078d6b20(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1078d72e0; end: 1078d72e7;  */

void FUN_1078d72e0(void)

{
  return;
}



/* Entry: 1078d74bc; end: 1078d74cf;  */

void FUN_1078d74bc(void)

{
  func_0x0001078d7488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d7710; end: 1078d782b;  */

void FUN_1078d7710(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long lStack_30;
  float fStack_28;
  float fStack_24;
  
  func_0x0001078bee98(&lStack_30,param_1 + 0x18);
  func_0x0001078beedc(param_1 + 0x1b0,&lStack_30);
  func_0x0001078bee2c(&lStack_30);
  uVar5 = param_1 + 0x1b8;
  func_0x000104c2d614();
  if ((uVar5 & 1) == 0) {
    FUN_1078bef0c(&lStack_30,param_1 + 0x18);
    func_0x0001078bef50(param_1 + 0x1a8,&lStack_30);
    func_0x0001078bedfc(&lStack_30);
    func_0x00010811e790(*(undefined8 *)(param_1 + 0x1a8),3);
    fVar6 = *(float *)(param_1 + 0x1f0);
    fVar7 = *(float *)(param_1 + 500);
    fStack_28 = fVar6 + 0.0;
    if (fVar7 == 0.0 && fVar6 == 0.0) {
      fStack_28 = 0.0;
    }
    fStack_24 = fVar7 + 0.0;
    lStack_30 = 0;
    if (fVar7 == 0.0 && fVar6 == 0.0) {
      fStack_24 = 0.0;
    }
    func_0x00010811fa78(*(undefined8 *)(param_1 + 0x1a8),&lStack_30);
    lStack_30 = *(long *)(param_1 + 0x1a8);
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    if ((lStack_30 != 0) && (*(long *)(lStack_30 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_30 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010811f0b8(uVar2,&lStack_30);
    func_0x0001078bee2c(&lStack_30);
  }
  func_0x000108122b44(param_1,param_1 + 0x1b0,1);
  func_0x0001078d6e8c(param_1);
  func_0x000108122c38(param_1);
  return;
}



/* Entry: 1078d7c7c; end: 1078d7c83;  */

void FUN_1078d7c7c(void)

{
  return;
}



/* Entry: 1078d7dd4; end: 1078d7de7;  */

void FUN_1078d7dd4(void)

{
  func_0x0001078d7da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d803c; end: 1078d8307;  */

void FUN_1078d803c(float param_1,float param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x0001078bee98(auStack_48,param_3 + 0x18);
  func_0x0001078beedc(param_3 + 0x1e0,auStack_48);
  func_0x0001078bee2c(auStack_48);
  uVar5 = *(undefined8 *)(param_3 + 0x1e0);
  func_0x0001078d8480();
  func_0x000108120484(param_1 * 0.5,uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x1e0);
  func_0x0001078d8480();
  func_0x0001081204c0(param_2 * 0.5,uVar5);
  func_0x0001078d8308(auStack_48,param_3 + 0x18);
  FUN_1078cddcc(param_3 + 0x1d8,auStack_48);
  FUN_1078ce46c(auStack_48);
  func_0x0001072787e4(auStack_48,*(long *)(param_3 + 0x1a8) + 8);
  func_0x0001078d2d24(auStack_50,*(undefined4 *)(param_3 + 0x1b0),param_3 + 0x18,auStack_48);
  func_0x000108128324(*(undefined8 *)(param_3 + 0x1d8),auStack_50);
  func_0x0001081284e8(*(undefined8 *)(param_3 + 0x1d8),2);
  func_0x0001081286c0(*(undefined8 *)(param_3 + 0x1d8),
                      (int)*(float *)(*(long *)(param_3 + 0x1a8) + 100));
  fVar7 = *(float *)(*(long *)(param_3 + 0x1a8) + 0x68);
  func_0x00010812872c(*(undefined8 *)(param_3 + 0x1d8));
  func_0x0001078d7d1c(param_3);
  fVar8 = *(float *)(*(long *)(param_3 + 0x1a8) + 0x30) * *(float *)(param_3 + 0x1b0);
  fVar9 = *(float *)(param_3 + 0x1b0) * *(float *)(*(long *)(param_3 + 0x1a8) + 0x28);
  fStack_60 = fVar7 + fVar8;
  param_2 = param_2 + fVar9;
  uStack_68 = CONCAT44(fVar9,fVar8);
  fStack_5c = param_2;
  func_0x00010811fa78(*(undefined8 *)(param_3 + 0x1d8),&uStack_68);
  func_0x0001078bee98(&uStack_68,param_3 + 0x18);
  func_0x0001078beedc(param_3 + 0x1c8,&uStack_68);
  func_0x0001078bee2c(&uStack_68);
  uVar5 = *(undefined8 *)(param_3 + 0x1c8);
  fVar7 = *(float *)(param_3 + 0x1c0);
  func_0x00010813f2bc(&uStack_68,1);
  func_0x00010811f8f8(uVar5,&uStack_68);
  uVar5 = *(undefined8 *)(param_3 + 0x1c8);
  func_0x0001078d7c84(param_3);
  func_0x0001078d7c84(param_3);
  fStack_60 = fVar7 + 0.0;
  fStack_5c = param_2 + 0.0;
  uStack_68 = 0;
  func_0x00010811fa78(uVar5,&uStack_68);
  uVar4 = *(long *)(param_3 + 0x1a8) + 0x48;
  func_0x0001078d2c60(uVar4);
  func_0x00010811f748(*(undefined8 *)(param_3 + 0x1c8),uVar4 & 0xffffffff);
  uVar4 = *(long *)(param_3 + 0x1a8) + 0x38;
  func_0x0001078d2c60(uVar4);
  func_0x00010811f9c0(*(undefined8 *)(param_3 + 0x1c8),uVar4 & 0xffffffff);
  func_0x00010811f9a8((float)*(double *)(param_3 + 0x1b8),*(undefined8 *)(param_3 + 0x1c8));
  lVar6 = *(long *)(param_3 + 0x1a8);
  uVar4 = lVar6 + 0x78;
  func_0x0001078d2c60(uVar4);
  func_0x000108120334(*(float *)(param_3 + 0x1b0) * *(float *)(lVar6 + 0x6c),
                      *(float *)(param_3 + 0x1b0) * *(float *)(lVar6 + 0x70),
                      *(undefined4 *)(lVar6 + 0x74),*(undefined8 *)(param_3 + 0x1c8),
                      uVar4 & 0xffffffff);
  func_0x00010811f0b8(*(undefined8 *)(param_3 + 0x1e0),param_3 + 0x1c8);
  uStack_68 = *(long *)(param_3 + 0x1d8);
  uVar5 = *(undefined8 *)(param_3 + 0x1e0);
  if ((uStack_68 != 0) && (*(long *)(uStack_68 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(uStack_68 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010811f0b8(uVar5,&uStack_68);
  func_0x0001078bee2c(&uStack_68);
  func_0x000108122b44(param_3,param_3 + 0x1e0,1);
  func_0x0001078d7a34(param_3);
  func_0x000108122c38(param_3);
  func_0x0001078ce490(auStack_50);
  func_0x00010726afc0(auStack_48);
  return;
}



/* Entry: 1078d857c; end: 1078d85eb;  */

float FUN_1078d857c(float param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_2[1];
    if (lVar1 != 0) {
      param_2 = (undefined8 *)*param_2;
      goto LAB_1078d85a4;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_1078d85a4:
    if (*(char *)((long)param_2 + lVar1 + -1) == '%') {
      func_0x0001078d84a0();
      param_1 = param_1 / 100.0;
      goto LAB_1078d85cc;
    }
  }
  func_0x0001078d84a0();
LAB_1078d85cc:
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar3;
  }
  return fVar2;
}



/* Entry: 1078d9360; end: 1078d937b;  */

void FUN_1078d9360(void)

{
  return;
}



/* Entry: 1078da9e8; end: 1078dab9f;  */

void FUN_1078da9e8(undefined8 *param_1,long *param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_80;
  undefined4 uStack_78;
  ulong auStack_70 [2];
  
  uVar1 = ((param_8 & 0xffffffff) - (param_6 & 0xffffffff)) + (param_7 - param_5) * 8;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar3 = param_2[1];
  if ((ulong)(param_2[2] * 0x40) < uVar1 || param_2[2] * 0x40 - uVar1 < uVar3) {
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0;
    plVar4 = param_2;
    func_0x000104becbb8(param_2,uVar3 + uVar1);
    func_0x000104becb10(&lStack_a0,plVar4);
    uStack_98 = param_2[1] + uVar1;
    lStack_80 = lStack_a0;
    uStack_78 = 0;
    func_0x000104becbf8(auStack_70,*param_2,0,param_3,param_4,&lStack_80);
    func_0x0001078dbf60();
    func_0x0001078dbeb0(auStack_70);
    lVar5 = *param_2;
    *param_2 = lStack_a0;
    lVar7 = param_2[2];
    lVar6 = param_2[1];
    param_2[2] = lStack_90;
    param_2[1] = uStack_98;
    lStack_a0 = lVar5;
    uStack_98 = lVar6;
    lStack_90 = lVar7;
    func_0x000104be7d74(&lStack_a0);
  }
  else {
    uVar2 = uVar3 + uVar1;
    param_2[1] = uVar2;
    func_0x0001078dbeb0(&lStack_a0,param_3,param_4,*param_2 + (uVar3 >> 6) * 8,uVar3 & 0x3f,
                        *param_2 + (uVar2 >> 6) * 8,(uint)uVar2 & 0x3f);
    lStack_a0 = *param_2;
    uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
    func_0x000104bed84c(auStack_70,&lStack_a0,(param_3 - lStack_a0) * 8 + (param_4 & 0xffffffff));
    func_0x0001078dbf60();
  }
  auStack_70[0] = uVar1;
  func_0x0001078dbf74(&lStack_a0);
  func_0x000104bed2e8();
  return;
}



/* Entry: 1078db0b4; end: 1078db143;  */

undefined1  [16] FUN_1078db0b4(long *param_1,undefined *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_3 < (ulong)((long)param_2 - (long)param_1 >> 2)) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = (long)param_1 + param_3 * 4;
    return auVar4;
  }
  func_0x0001078dbb54();
  if ((ulong)(((long)param_2 - (long)param_1) / 0x18) <= param_3) {
    func_0x0001078dbb60();
    if (param_2 < (undefined *)((param_1[1] - *param_1) / 0x18)) {
      auVar5._0_8_ = *param_1 + (long)param_2 * 0x18;
      auVar5._8_8_ = param_2;
      return auVar5;
    }
    func_0x0001078dbb60();
    if (param_2 < (undefined *)param_1[1]) {
      auVar7._8_8_ = 1L << ((ulong)param_2 & 0x3f);
      auVar7._0_8_ = *param_1 + ((ulong)param_2 >> 6) * 8;
      return auVar7;
    }
    func_0x0001078db978();
    uVar2 = (uint)param_1;
    if (0xffffffd7 < uVar2 - 0x29) {
      iVar1 = (uVar2 * 0x10 + 0x80) * uVar2;
      if (uVar2 < 2) {
        uVar3 = iVar1 + 0x40;
      }
      else {
        uVar3 = (uVar2 & 0xff) / 7;
        iVar1 = iVar1 + (uVar3 * -0x19 + -0x28) * (uVar3 + 2);
        uVar3 = iVar1 + 0x53;
        if (uVar2 < 7) {
          uVar3 = iVar1 + 0x77;
        }
      }
      auVar9._4_4_ = 0;
      auVar9._0_4_ = uVar3;
      auVar9._8_8_ = param_2;
      return auVar9;
    }
    func_0x0001078dbd18();
    param_2 = &UNK_10f43455d;
    func_0x000107246610();
    func_0x0001078dbcf8();
    func_0x0001078dbd44();
    func_0x0001078dbd0c();
    func_0x0001078dbd3c();
    if ((ulong)(((long)param_2 - (long)param_1) / 0x18) <= param_3) {
      func_0x0001078dbc00();
      iVar1 = *(int *)((long)param_1 + 4);
      if ((iVar1 < 1 || (int)param_1[1] != iVar1) ||
         ((*(int *)((long)param_1 + 0xc) != iVar1 * 3 || (int)param_1[2] != iVar1) ||
          *(int *)((long)param_1 + 0x14) != iVar1)) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        uVar3 = (uint)(iVar1 * 4 <= (int)*param_1 && iVar1 <= (int)param_1[3]);
        uVar2 = 0;
        if (iVar1 * 4 <= (int)param_1[3]) {
          uVar2 = (uint)(iVar1 <= (int)*param_1);
        }
      }
      auVar6._4_4_ = 0;
      auVar6._0_4_ = uVar2 + uVar3;
      auVar6._8_8_ = param_2;
      return auVar6;
    }
  }
  auVar8._0_8_ = param_1 + param_3 * 3;
  auVar8._8_8_ = param_2;
  return auVar8;
}



/* Entry: 1078db468; end: 1078db5f7;  */

/* WARNING: Possible PIC construction at 0x0001078db5f0: Changing call to branch */

long * FUN_1078db468(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plStack_88;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar9 = uVar8;
    puVar9[2] = param_2[2];
    uVar8 = param_2[3];
    puVar9[4] = param_2[4];
    puVar9[3] = uVar8;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar9 = puVar9 + 5;
    plVar6 = param_1;
LAB_1078db5e4:
    param_1[1] = (long)puVar9;
    return plVar6;
  }
  lVar11 = (long)puVar9 - *param_1;
  uVar1 = lVar11 / 0x28 + 1;
  if (uVar1 < 0x666666666666667) {
    uVar4 = (param_1[2] - *param_1) / 0x28;
    uVar10 = uVar4 * 2;
    if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
      uVar10 = uVar1;
    }
    if (0x333333333333332 < uVar4) {
      uVar10 = 0x666666666666666;
    }
    if (uVar10 < 0x666666666666667) {
      lVar5 = uVar10 * 0x28;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar11);
      *puVar2 = *param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
      puVar2[2] = param_2[2];
      uVar8 = param_2[3];
      puVar2[4] = param_2[4];
      puVar2[3] = uVar8;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[2] = 0;
      puVar12 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      lVar11 = (long)puVar3 - (long)puVar12;
      puVar7 = puVar2 + (lVar11 / -0x28) * 5;
      for (puVar9 = puVar12; puVar9 != puVar3; puVar9 = puVar9 + 5) {
        uVar8 = *puVar9;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar7 = uVar8;
        puVar7[2] = puVar9[2];
        uVar8 = puVar9[3];
        puVar7[4] = puVar9[4];
        puVar7[3] = uVar8;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar7 = puVar7 + 5;
      }
      for (; puVar12 != puVar3; puVar12 = puVar12 + 5) {
        func_0x000104be7d74(puVar12 + 2);
      }
      puVar9 = puVar2 + 5;
      plVar6 = (long *)*param_1;
      *param_1 = (long)(puVar2 + (lVar11 / -0x28) * 5);
      param_1[1] = (long)puVar9;
      param_1[2] = lVar5 + uVar10 * 0x28;
      if (plVar6 != (long *)0x0) {
        __ZdlPv();
      }
      goto LAB_1078db5e4;
    }
    func_0x000104bd35f4();
  }
  plVar6 = (long *)&UNK_10f4345a0;
  func_0x000104bd47e8();
  plStack_88 = plVar6;
  func_0x0001078db638(&plStack_88);
  return plVar6;
}



/* Entry: 1078dba48; end: 1078dbb53;  */

undefined1  [16] FUN_1078dba48(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_1 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010729f630(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1078dc844; end: 1078dcd03;  */

ulong FUN_1078dc844(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 - 1;
  if (uVar1 < 2) {
    return param_1;
  }
  if (uVar1 < 4) {
    return 4;
  }
  if (uVar1 < 8) {
    return 8;
  }
  if (uVar1 < 0x10) {
    return 0x10;
  }
  if (uVar1 < 0x20) {
    return 0x20;
  }
  if (uVar1 < 0x40) {
    return 0x40;
  }
  if (uVar1 < 0x80) {
    return 0x80;
  }
  if (uVar1 < 0x100) {
    return 0x100;
  }
  if (uVar1 < 0x200) {
    return 0x200;
  }
  if (uVar1 < 0x400) {
    return 0x400;
  }
  if (uVar1 < 0x800) {
    return 0x800;
  }
  if (uVar1 < 0x1000) {
    return 0x1000;
  }
  if (uVar1 < 0x2000) {
    return 0x2000;
  }
  if (uVar1 < 0x4000) {
    return 0x4000;
  }
  if (uVar1 < 0x8000) {
    return 0x8000;
  }
  if (uVar1 < 0x10000) {
    return 0x10000;
  }
  if (uVar1 < 0x20000) {
    return 0x20000;
  }
  if (uVar1 < 0x40000) {
    return 0x40000;
  }
  if (uVar1 < 0x80000) {
    return 0x80000;
  }
  if (uVar1 < 0x100000) {
    return 0x100000;
  }
  if (uVar1 < 0x200000) {
    return 0x200000;
  }
  if (uVar1 < 0x400000) {
    return 0x400000;
  }
  if (uVar1 < 0x800000) {
    return 0x800000;
  }
  if (uVar1 >> 0x18 == 0) {
    return 0x1000000;
  }
  if (uVar1 >> 0x19 == 0) {
    return 0x2000000;
  }
  if (uVar1 >> 0x1a == 0) {
    return 0x4000000;
  }
  if (uVar1 >> 0x1b == 0) {
    return 0x8000000;
  }
  if (uVar1 >> 0x1c == 0) {
    return 0x10000000;
  }
  if (uVar1 >> 0x1d == 0) {
    return 0x20000000;
  }
  if (uVar1 >> 0x1e == 0) {
    return 0x40000000;
  }
  return (ulong)((uVar1 ^ 0xffffffff) & 0x80000000);
}



/* Entry: 1078dd998; end: 1078ddb0f;  */

undefined8 FUN_1078dd998(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_1 == 0) {
    return 0xb;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    return 0xb;
  }
  if (*plVar7 != 0) {
    return 10;
  }
  lVar4 = plVar7[4];
  param_4 = param_4 * param_3;
  uVar3 = lVar4 + param_4;
  if (lVar4 <= (long)uVar3) {
    uVar5 = plVar7[2];
    if (uVar5 < uVar3) {
      uVar2 = 0x100;
      uVar6 = 0x100;
      if (uVar5 != 0) {
        uVar2 = uVar5;
        uVar6 = uVar5;
      }
      while (uVar6 < uVar3) {
        uVar6 = uVar2 << 1;
        bVar1 = 0x7fffffffffffffff < uVar2;
        uVar2 = uVar6;
        if (bVar1) {
          uVar6 = 0xffffffffffffffff;
        }
      }
      if (uVar6 != uVar5) {
        uVar3 = plVar7[1];
        if (uVar3 == 0) {
          uVar3 = uVar6;
          _malloc();
        }
        else {
          _realloc(uVar3,uVar6);
        }
        plVar7[1] = uVar3;
        if (uVar3 == 0) {
          plVar7[2] = 0;
          plVar7[3] = 0;
          return 0xd;
        }
        plVar7[2] = uVar6;
        lVar4 = plVar7[4];
      }
    }
    _memcpy(plVar7[1] + lVar4,param_2,param_4);
    param_4 = plVar7[4] + param_4;
    plVar7[4] = param_4;
    if (param_4 <= plVar7[3]) {
      return 0;
    }
    plVar7[3] = param_4;
    return 0;
  }
  return 4;
}



/* Entry: 1078e0754; end: 1078e07ef;  */

void FUN_1078e0754(long param_1)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    _free();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(lVar1 + 0x88);
  lStack_50 = *(long *)(lVar1 + 0x80);
  uStack_38 = *(undefined8 *)(lVar1 + 0x98);
  uStack_40 = *(undefined8 *)(lVar1 + 0x90);
  uStack_30 = *(undefined8 *)(lVar1 + 0xa0);
  uStack_88 = *(undefined8 *)(lVar1 + 0x48);
  uStack_90 = *(undefined8 *)(lVar1 + 0x40);
  uStack_78 = *(undefined8 *)(lVar1 + 0x58);
  uStack_80 = *(undefined8 *)(lVar1 + 0x50);
  uStack_68 = *(undefined8 *)(lVar1 + 0x68);
  uStack_70 = *(undefined8 *)(lVar1 + 0x60);
  uStack_58 = *(undefined8 *)(lVar1 + 0x78);
  pcStack_60 = *(code **)(lVar1 + 0x70);
  if (lStack_50 != 0) {
    (*pcStack_60)(&uStack_90);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001078dd390();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    _free();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    _free();
  }
  _free(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1078e150c; end: 1078e150f;  */

long FUN_1078e150c(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return 10;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar13 + 0x80) == 0) {
    return 10;
  }
  lVar14 = *(long *)(param_1 + 0xa0);
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 - 2 < 2) {
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar4 = 0x10;
      uVar2 = *(int *)(param_1 + 0x34) - 1;
      if ((int)uVar2 < 1) goto code_r0x0001078e2b7c;
code_r0x0001078e2b44:
      uVar11 = (ulong)uVar2;
      fVar15 = (float)uVar4;
      if (uVar2 == 1) {
        lVar12 = 0;
        uVar5 = 1;
      }
      else {
        lVar8 = 0;
        lVar12 = 0;
        uVar5 = uVar11 & 1;
        puVar6 = (ulong *)(lVar14 + uVar11 * 0x18 + 0x18);
        uVar10 = uVar11 & 0x7ffffffe;
        do {
          lVar8 = lVar8 + (ulong)(uint)(int)((float)(int)((float)puVar6[3] / fVar15) * fVar15);
          lVar12 = lVar12 + (ulong)(uint)(int)((float)(int)((float)*puVar6 / fVar15) * fVar15);
          uVar10 = uVar10 - 2;
          puVar6 = puVar6 + -6;
        } while (uVar10 != 0);
        lVar12 = lVar12 + lVar8;
        if ((uVar11 & 0x7ffffffe) == uVar11) goto code_r0x0001078e2c28;
      }
      uVar11 = uVar5 + 1;
      puVar6 = (ulong *)(lVar14 + uVar5 * 0x18 + 0x30);
      do {
        lVar12 = lVar12 + (ulong)(uint)(int)((float)(int)((float)*puVar6 / fVar15) * fVar15);
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + -3;
      } while (1 < uVar11);
    }
    else {
      uVar4 = *(uint *)(lVar13 + 0x20) >> 3;
      if ((*(uint *)(lVar13 + 0x20) & 0x18) != 0) {
        uVar2 = uVar4;
        uVar7 = 4;
        do {
          uVar9 = uVar2;
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar7 / uVar9;
          }
          uVar2 = uVar7 - uVar2 * uVar9;
          uVar7 = uVar9;
        } while (uVar2 != 0);
        uVar2 = uVar4 << 2;
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar2 / uVar9;
        }
      }
      uVar2 = *(int *)(param_1 + 0x34) - 1;
      if (0 < (int)uVar2) goto code_r0x0001078e2b44;
code_r0x0001078e2b7c:
      lVar12 = 0;
    }
code_r0x0001078e2c28:
    uVar11 = *(long *)(lVar14 + 0x30) + lVar12;
    if (param_2 == 0) goto code_r0x0001078e2c34;
code_r0x0001078e2adc:
    uVar5 = param_2;
    if (param_3 < uVar11) {
      return 0xb;
    }
  }
  else {
    if (uVar1 < 2) {
      uVar11 = *(ulong *)(param_1 + 0x68);
    }
    else {
      uVar11 = 0;
    }
    if (param_2 != 0) goto code_r0x0001078e2adc;
code_r0x0001078e2c34:
    uVar5 = uVar11;
    _malloc();
    *(ulong *)(param_1 + 0x70) = uVar5;
    if (uVar5 == 0) {
      return 0xd;
    }
  }
  if ((uVar1 & 0xfffffffe) == 2) {
    uVar3 = *(ulong *)(param_1 + 0x68);
    _malloc();
    uVar10 = uVar3;
    if (uVar3 == 0) {
      return 0xd;
    }
  }
  else {
    uVar3 = 0;
    uVar10 = uVar5;
  }
  lVar12 = lVar13 + 0x40;
  (**(code **)(lVar13 + 0x60))(lVar12,*(undefined8 *)(lVar14 + 0x18));
  if ((int)lVar12 != 0) goto code_r0x0001078e2cc4;
  lVar12 = lVar13 + 0x40;
  (**(code **)(lVar13 + 0x40))(lVar12,uVar10,*(undefined8 *)(param_1 + 0x68));
  if ((int)lVar12 != 0) goto code_r0x0001078e2cc4;
  if ((uVar1 & 0xfffffffe) == 2) {
    lVar12 = param_1;
    if (*(int *)(param_1 + 0x88) == 3) {
      func_0x0001078e3160(param_1,uVar3,uVar5,uVar11);
    }
    else {
      if (*(int *)(param_1 + 0x88) != 2) goto code_r0x0001078e2d58;
      FUN_1078e2d70(param_1,uVar3,uVar5,uVar11);
    }
    if ((int)lVar12 != 0) {
      if (param_2 == 0) {
        _free(*(undefined8 *)(param_1 + 0x70));
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      goto code_r0x0001078e2cc4;
    }
  }
code_r0x0001078e2d58:
  (**(code **)(lVar13 + 0x70))(lVar13 + 0x40);
  lVar12 = 0;
  *(undefined8 *)(lVar14 + 0x18) = 0;
code_r0x0001078e2cc4:
  _free(uVar3);
  return lVar12;
}



/* Entry: 1078e2d70; end: 1078e336b;  */

undefined8 FUN_1078e2d70(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  uint uVar22;
  
  if (param_2 == 0) {
    return 0xb;
  }
  if (*(int *)(param_1 + 0x88) != 2) {
    return 10;
  }
  uVar15 = *(uint *)(param_1 + 0x34);
  uVar5 = uVar15 * 0x18;
  lVar18 = *(long *)(param_1 + 0xa0);
  uVar7 = (ulong)uVar5;
  _malloc();
  if (uVar7 == 0) {
    return 0xd;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar22 = 0x10;
    uVar8 = 0x27210;
    _malloc();
  }
  else {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0x20);
    uVar22 = uVar4 >> 3;
    if ((uVar4 & 0x18) != 0) {
      uVar4 = uVar22;
      uVar12 = 4;
      do {
        uVar14 = uVar4;
        uVar4 = 0;
        if (uVar14 != 0) {
          uVar4 = uVar12 / uVar14;
        }
        uVar4 = uVar12 - uVar4 * uVar14;
        uVar12 = uVar14;
      } while (uVar4 != 0);
      uVar4 = uVar22 << 2;
      uVar22 = 0;
      if (uVar14 != 0) {
        uVar22 = uVar4 / uVar14;
      }
    }
    uVar8 = 0x27210;
    _malloc();
  }
  if (uVar8 == 0) {
    uVar11 = 0xd;
    goto LAB_1078e3120;
  }
  lVar18 = lVar18 + 0x20;
  *(undefined8 *)(uVar8 + 0x7130) = 0;
  *(undefined8 *)(uVar8 + 0x7128) = 0;
  *(undefined8 *)(uVar8 + 0x7120) = 0;
  *(undefined4 *)(uVar8 + 0x7110) = 0;
  *(undefined8 *)(uVar8 + 29000) = 0;
  *(undefined8 *)(uVar8 + 0x7190) = 0x8000001;
  puVar1 = (undefined8 *)(uVar8 + 0x7158);
  *(undefined8 *)(uVar8 + 0x7060) = 0;
  *(undefined8 *)(uVar8 + 0x71a0) = 0;
  *(undefined8 *)(uVar8 + 0x71c0) = 0;
  *(undefined4 *)(uVar8 + 0x71c8) = 0;
  *(undefined4 *)(uVar8 + 0x71d4) = 0;
  *(undefined4 *)(uVar8 + 0x7150) = 0;
  *(undefined8 *)(uVar8 + 0x7160) = 0;
  *puVar1 = 0;
  *(undefined8 *)(uVar8 + 0x716c) = 0;
  *(undefined8 *)(uVar8 + 0x717c) = 0;
  *(undefined8 *)(uVar8 + 0x7174) = 0;
  *(undefined4 *)(uVar8 + 0x7184) = 0;
  if ((int)(uVar15 - 1) < 0) {
    lVar21 = 0;
  }
  else {
    lVar19 = 0;
    lVar21 = 0;
    do {
      uVar15 = uVar15 - 1;
      plVar13 = (long *)(lVar18 + (ulong)uVar15 * 0x18);
      lVar2 = *plVar13;
      lVar3 = plVar13[1];
      if (*(int *)(uVar8 + 0x7170) == -1) {
LAB_1078e2ee8:
        uVar11 = *(undefined8 *)(uVar8 + 0x7160);
      }
      else {
        if (*(int *)(uVar8 + 0x7170) == 1) {
          *(undefined4 *)(uVar8 + 0x7170) = 0;
          goto LAB_1078e2ee8;
        }
        plVar13 = (long *)*puVar1;
        if (plVar13 != (long *)0x0) {
          pcVar16 = (code *)plVar13[0xd0a];
          lVar9 = plVar13[0xd0b];
          if (*plVar13 == 0) {
            if (pcVar16 != (code *)0x0) goto LAB_1078e2f28;
          }
          else {
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)();
LAB_1078e2f28:
              (*pcVar16)(lVar9,plVar13);
              goto LAB_1078e2f4c;
            }
            _free(*plVar13);
          }
          _free(plVar13);
        }
LAB_1078e2f4c:
        uVar11 = 0;
        *(undefined4 *)(uVar8 + 0x7170) = 0;
        *puVar1 = 0;
        *(undefined8 *)(uVar8 + 0x7160) = 0;
      }
      uVar10 = uVar8;
      func_0x0001000cc0fc(uVar8,param_3 + lVar19,param_4,param_2 + lVar2,lVar3,0,0,uVar11);
      if (0xffffffffffffff88 < uVar10) {
        iVar6 = (int)uVar10;
        if (iVar6 == -0x46) {
LAB_1078e3058:
          uVar11 = 0x13;
        }
        else if (iVar6 == -0x40) {
          uVar11 = 0xd;
        }
        else if (iVar6 == -0x16) {
          uVar11 = 0x14;
        }
        else {
          uVar11 = 1;
        }
        goto LAB_1078e305c;
      }
      if (*(ulong *)(*(long *)(param_1 + 0xa0) + (ulong)uVar15 * 0x18 + 0x30) != uVar10)
      goto LAB_1078e3058;
      plVar13 = (long *)(uVar7 + (ulong)uVar15 * 0x18);
      *plVar13 = lVar19;
      plVar13[1] = uVar10;
      plVar13[2] = uVar10;
      uVar10 = (ulong)(uint)(int)((float)(int)((float)uVar10 / (float)uVar22) * (float)uVar22);
      lVar21 = lVar21 + uVar10;
      lVar19 = lVar19 + uVar10;
      param_4 = param_4 - uVar10;
    } while (0 < (int)uVar15);
  }
  *(long *)(param_1 + 0x68) = lVar21;
  *(undefined4 *)(param_1 + 0x88) = 0;
  _memcpy(lVar18,uVar7,(ulong)uVar5);
  uVar11 = 0;
  *(uint *)(*(long *)(param_1 + 0xa0) + 8) = uVar22;
LAB_1078e305c:
  if (*(long *)(uVar8 + 29000) != 0) goto LAB_1078e3120;
  pcVar16 = *(code **)(uVar8 + 0x7128);
  uVar17 = *(undefined8 *)(uVar8 + 0x7130);
  plVar13 = *(long **)(uVar8 + 0x7158);
  if (plVar13 != (long *)0x0) {
    pcVar20 = (code *)plVar13[0xd0a];
    lVar18 = plVar13[0xd0b];
    if (*plVar13 == 0) {
      if (pcVar20 != (code *)0x0) goto LAB_1078e30a8;
    }
    else {
      if (pcVar20 != (code *)0x0) {
        (*pcVar20)(lVar18);
LAB_1078e30a8:
        (*pcVar20)(lVar18,plVar13);
        goto LAB_1078e30cc;
      }
      _free(*plVar13);
    }
    _free(plVar13);
  }
LAB_1078e30cc:
  *(undefined4 *)(uVar8 + 0x7170) = 0;
  *puVar1 = 0;
  *(undefined8 *)(uVar8 + 0x7160) = 0;
  if (*(long *)(uVar8 + 0x7178) == 0) {
    if (pcVar16 == (code *)0x0) goto LAB_1078e3118;
  }
  else {
    if (pcVar16 == (code *)0x0) {
      _free(*(long *)(uVar8 + 0x7178));
LAB_1078e3118:
      _free(uVar8);
      goto LAB_1078e3120;
    }
    (*pcVar16)(uVar17);
    *(undefined8 *)(uVar8 + 0x7178) = 0;
  }
  (*pcVar16)(uVar17,uVar8);
LAB_1078e3120:
  _free(uVar7);
  return uVar11;
}



/* Entry: 1078e525c; end: 1078e526f;  */

void FUN_1078e525c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078e6378; end: 1078e63c7;  */

void FUN_1078e6378(long param_1,long param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 != param_3) {
    func_0x000107914c78();
    param_3 = *(long *)(param_1 + 8) - param_3;
    if (param_3 != 0) {
      func_0x000107915b84();
      _memmove();
    }
    *(long *)(unaff_x20 + 8) = unaff_x19 + param_3;
  }
  return;
}



/* Entry: 1078e65dc; end: 1078e6647;  */

bool FUN_1078e65dc(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == param_2) {
    return true;
  }
  if (((ulong)ABS(param_1) < 0x7ff0000000000000) && ((ulong)ABS(param_2) < 0x7ff0000000000000)) {
    dVar1 = ABS(param_2);
    if (ABS(param_2) <= ABS(param_1)) {
      dVar1 = ABS(param_1);
    }
    dVar2 = 1.0;
    if (1.0 <= dVar1) {
      dVar2 = dVar1;
    }
    return ABS(param_1 - param_2) <= dVar2 * 2.220446049250313e-16;
  }
  return false;
}



/* Entry: 1078e6794; end: 1078e67a7;  */

void FUN_1078e6794(void)

{
  __ZNSt8bad_castD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078e7ee0; end: 1078e8733;  */

void FUN_1078e7ee0(long ******param_1,undefined8 param_2,long param_3,long ******param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  ulong uVar6;
  undefined1 uVar7;
  bool bVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  undefined *puVar12;
  undefined4 extraout_w8;
  undefined4 uVar13;
  undefined8 extraout_x8;
  long lVar14;
  long ****pppplVar15;
  long *plVar16;
  long ****pppplVar17;
  long *****extraout_x8_00;
  long *****extraout_x8_01;
  long *****ppppplVar18;
  long ******pppppplVar19;
  long lVar20;
  long lVar21;
  long ******pppppplVar22;
  long *****ppppplVar23;
  long ******pppppplVar24;
  undefined8 *puVar25;
  ulong uVar26;
  int iVar27;
  long *****ppppplVar28;
  long ******pppppplVar29;
  long lVar30;
  long *plVar31;
  double dVar32;
  double dVar33;
  long *****in_register_00005008;
  undefined8 in_register_00005028;
  double dVar34;
  long ****pppplStack_330;
  long ****pppplStack_328;
  long *plStack_320;
  long *****ppppplStack_318;
  long *****ppppplStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *****ppppplStack_2c8;
  long ****pppplStack_2c0;
  undefined8 uStack_2b8;
  long ****pppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long *****ppppplStack_280;
  long ****pppplStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  long *plStack_1d0;
  long *****ppppplStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long ****pppplStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  uint uStack_194;
  long ***ppplStack_190;
  long *****ppppplStack_188;
  uint uStack_180;
  undefined1 uStack_179;
  long *plStack_178;
  long alStack_170 [2];
  long ****pppplStack_160;
  long ****pppplStack_158;
  long *plStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long lStack_130;
  long *****ppppplStack_128;
  long ****pppplStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long *****ppppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long *****ppppplStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long *****ppppplStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar14 = param_3;
  func_0x000107913ca4();
  alStack_170[0] = 0;
  alStack_170[1] = 0;
  plStack_178 = alStack_170;
  uStack_78 = extraout_x8;
  func_0x0001078e648c(lVar14 + 0x88);
  pppplStack_1b0 = (long ****)(param_3 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x108);
  lStack_1c0 = param_3 + 0xf8;
  plStack_1d0 = (long *)(param_3 + 0x18);
  ppppplStack_1c8 = (long *****)(param_3 + 0xe0);
  pppplStack_120 = (long ****)0x0;
  uStack_118 = 0;
  puStack_108 = &uStack_179;
  lStack_130 = 0;
  ppppplStack_138 = (long *****)0x0;
  pppppplVar9 = (long ******)0x0;
  lStack_1a8 = param_3;
  pppplStack_160 = pppplStack_1b0;
  pppplStack_158 = pppplStack_1b0;
  plStack_150 = plStack_1d0;
  ppppplStack_148 = ppppplStack_1c8;
  ppppplStack_140 = (long *****)&ppppplStack_138;
  ppppplStack_128 = &pppplStack_120;
  uStack_110 = uStack_1b8;
  func_0x0001078f1e00();
  pppplStack_120 = (long ****)0x0;
  uStack_118 = 0;
  ppppplStack_128 = &pppplStack_120;
  for (ppppplVar23 = (long *****)0x0; lVar14 = *plStack_150,
      ppppplVar23 < (long *****)((plStack_150[1] - lVar14) / 0x1b0);
      ppppplVar23 = (long *****)((long)ppppplVar23 + 1)) {
    for (lVar30 = 0; lVar30 != 0x170; lVar30 = lVar30 + 0xb8) {
      lVar1 = lVar14 + (long)ppppplVar23 * 0x1b0 + 0x28 + lVar30;
      pppplStack_e0 = *(long *****)(lVar1 + 0x18);
      in_register_00005008 = *(long ******)(lVar1 + 0x10);
      param_1 = *(long *******)(lVar1 + 8);
      pppppplVar24 = (long ******)ppppplStack_138;
      pppppplVar22 = &ppppplStack_138;
      pppppplVar10 = &ppppplStack_138;
      ppppplStack_f0 = (long *****)param_1;
      pppplStack_e8 = (long ****)in_register_00005008;
      if ((long ******)ppppplStack_138 != (long ******)0x0) {
        do {
          while( true ) {
            pppppplVar22 = pppppplVar24;
            pppppplVar9 = &ppppplStack_f0;
            func_0x0001079166ec();
            if ((int)pppppplVar9 == 0) break;
            pppppplVar24 = (long ******)*pppppplVar22;
            pppppplVar10 = pppppplVar22;
            if ((long ******)*pppppplVar22 == (long ******)0x0) goto LAB_1078e8018;
          }
          pppppplVar9 = pppppplVar22 + 4;
          func_0x0001078ee35c(pppppplVar9,&ppppplStack_f0);
          if ((int)pppppplVar9 == 0) goto LAB_1078e806c;
          pppppplVar24 = (long ******)pppppplVar22[1];
        } while ((long ******)pppppplVar22[1] != (long ******)0x0);
        pppppplVar10 = pppppplVar22 + 1;
      }
LAB_1078e8018:
      func_0x000107917b94();
      pppppplVar9[5] = (long *****)pppplStack_e8;
      pppppplVar9[4] = ppppplStack_f0;
      pppppplVar9[6] = (long *****)pppplStack_e0;
      pppppplVar9[7] = (long *****)0xffffffffffffffff;
      pppppplVar24 = pppppplVar9;
      param_1 = (long ******)ppppplStack_f0;
      in_register_00005008 = (long *****)pppplStack_e8;
      func_0x0001079155ec();
      pppppplVar24[2] = (long *****)pppppplVar22;
      *pppppplVar10 = (long *****)pppppplVar24;
      if ((long ******)*ppppplStack_140 != (long ******)0x0) {
        ppppplStack_140 = (long *****)*ppppplStack_140;
      }
      func_0x00010002c5b0(ppppplStack_138,pppppplVar9);
      lStack_130 = lStack_130 + 1;
      pppppplVar22 = pppppplVar9;
LAB_1078e806c:
      pppppplVar9 = pppppplVar22 + 8;
      param_4 = (long ******)&pppplStack_f8;
      pppplStack_f8 = (long ****)ppppplVar23;
      func_0x0001078ef1d0();
    }
  }
  pppplStack_100 = (long ****)0x1;
  pppppplVar24 = (long ******)ppppplStack_140;
  while (pppppplVar22 = (long ******)ppppplStack_140, pppppplVar24 != &ppppplStack_138) {
    pppppplVar9 = (long ******)(alStack_170 + 2);
    param_4 = (long ******)&pppplStack_100;
    func_0x0001078f1cac(pppppplVar9,param_4,pppppplVar24 + 4,pppppplVar24 + 7,0xffffffffffffffff);
    func_0x000107914fec();
    pppppplVar24 = pppppplVar9;
  }
  while (pppppplVar22 != &ppppplStack_138) {
    pppppplVar9 = (long ******)pppppplVar22[8];
    while (pppppplVar9 != pppppplVar22 + 9) {
      lVar14 = *plStack_150 + (long)pppppplVar9[4] * 0x1b0;
      if (((*(byte *)(lVar14 + 0x20) & 1) == 0) &&
         (*(int *)(lVar14 + 0x28) != 3 || *(int *)(lVar14 + 0xe0) != 3)) {
        ppppplVar23 = pppppplVar22[4];
        lVar14 = 0x170;
        plVar31 = (long *)(*plStack_150 + (long)pppppplVar9[4] * 0x1b0);
        do {
          if ((((long *****)plVar31[6] == ppppplVar23) &&
              ((long *****)plVar31[8] == pppppplVar22[6])) &&
             ((long *****)plVar31[7] == pppppplVar22[5])) {
            plVar31[0x17] = (long)pppppplVar22[7];
          }
          lVar14 = lVar14 + -0xb8;
          plVar31 = plVar31 + 0x17;
        } while (lVar14 != 0);
      }
      func_0x00010002c7d4();
    }
    func_0x000107914fec();
    pppppplVar22 = pppppplVar9;
  }
  lVar14 = 0x170;
  for (pppppplVar24 = (long ******)0x0; pppppplVar22 = (long ******)ppppplStack_128,
      pppppplVar24 < (long ******)((plStack_150[1] - *plStack_150) / 0x1b0);
      pppppplVar24 = (long ******)((long)pppppplVar24 + 1)) {
    puVar2 = (undefined8 *)(*plStack_150 + lVar14);
    ppppplStack_f0 = (long *****)pppppplVar24;
    if (0 < (long)puVar2[-0x2b]) {
      ppppplStack_f0 = (long *****)-puVar2[-0x2b];
    }
    puVar25 = puVar2 + -0x17;
    ppppplVar23 = (long *****)*puVar25;
    if (ppppplVar23 == (long *****)0xffffffffffffffff) {
      ppppplVar23 = (long *****)0xffffffffffffffff;
    }
    else {
      func_0x000107915f7c();
      *pppppplVar9 = ppppplVar23;
      func_0x000107915f7c();
      pppppplVar9 = pppppplVar9 + 2;
      func_0x000107916d48();
      ppppplVar23 = (long *****)*puVar25;
    }
    ppppplVar28 = (long *****)*puVar2;
    if (ppppplVar28 == (long *****)0xffffffffffffffff) {
      ppppplVar18 = (long *****)0xffffffffffffffff;
    }
    else {
      ppppplVar18 = ppppplVar23;
      if (ppppplVar23 != ppppplVar28) {
        func_0x000107915f70();
        *pppppplVar9 = ppppplVar28;
        func_0x000107915f70();
        pppppplVar9 = pppppplVar9 + 2;
        func_0x000107916d48();
        ppppplVar23 = (long *****)*puVar25;
        ppppplVar18 = (long *****)*puVar2;
      }
    }
    if ((ppppplVar18 != (long *****)0xffffffffffffffff &&
        ppppplVar23 != (long *****)0xffffffffffffffff) && ppppplVar23 != ppppplVar18) {
      func_0x000107915f7c();
      pppppplVar9 = pppppplVar9 + 5;
      func_0x0001078f1f2c(pppppplVar9,puVar2);
      pppppplVar22 = pppppplVar9;
      func_0x000107915f70();
      pppppplVar22 = pppppplVar22 + 5;
      func_0x0001078f1f2c(pppppplVar22,puVar25);
      param_4 = (long ******)ppppplStack_f0;
      pppppplVar10 = pppppplVar9 + 1;
      func_0x0001078f1ad8(pppppplVar10,ppppplStack_f0);
      if (pppppplVar10 == (long ******)0x0) {
        *pppppplVar9 = (long *****)((long)*pppppplVar9 + 1);
        func_0x000107916d48(pppppplVar9 + 1);
        param_4 = (long ******)ppppplStack_f0;
      }
      pppppplVar9 = pppppplVar22 + 1;
      func_0x0001078f1ad8();
      if (pppppplVar9 == (long ******)0x0) {
        func_0x00010791753c();
        pppppplVar9 = pppppplVar22 + 1;
        func_0x000107916d48();
      }
    }
    lVar14 = lVar14 + 0x1b0;
  }
  while (pppppplVar22 != (long ******)&pppplStack_120) {
    if (pppppplVar22[0xc] == (long *****)0x0) {
LAB_1078e832c:
      uVar13 = 1;
    }
    else {
      if (pppppplVar22[0xc] != (long *****)0x1) {
        pppplVar15 = (long ****)0x0;
        pppppplVar9 = (long ******)pppppplVar22[10];
        bVar8 = true;
        while (pppppplVar9 != pppppplVar22 + 0xb) {
          if ((pppppplVar9[5] != (long *****)0x1) ||
             ((pppplVar17 = pppppplVar9[6][4], !bVar8 &&
              (pppplVar17 = pppplVar15, pppplVar15 != pppppplVar9[6][4])))) goto LAB_1078e8334;
          pppplVar15 = pppplVar17;
          func_0x00010002c7d4();
          bVar8 = false;
        }
        goto LAB_1078e832c;
      }
      func_0x0001079173ac(pppppplVar22[10]);
      uVar13 = extraout_w8;
    }
    *(undefined4 *)(pppppplVar22 + 6) = uVar13;
LAB_1078e8334:
    func_0x000107914fec();
    pppppplVar22 = pppppplVar9;
  }
  uVar26 = 0;
  do {
    if (uStack_118 <= uVar26) break;
    uStack_194 = 0;
    uStack_1a0 = uVar26 + 1;
    pppppplVar24 = (long ******)ppppplStack_128;
    while (pppppplVar24 != (long ******)&pppplStack_120) {
      if (*(int *)(pppppplVar24 + 6) == 0) {
        pppplVar15 = (long ****)0x0;
        pppppplVar22 = pppppplVar24 + 0xb;
        uStack_180 = 1;
        pppppplVar10 = (long ******)pppppplVar24[10];
        while (pppppplVar10 != pppppplVar22) {
          ppppplVar23 = pppppplVar10[4];
          pppppplVar11 = (long ******)&pppplStack_120;
          pppppplVar29 = (long ******)&pppplStack_120;
          while (pppppplVar19 = (long ******)*pppppplVar11, pppppplVar19 != (long ******)0x0) {
            lVar14 = 8;
            if ((long)ppppplVar23 <= (long)pppppplVar19[4]) {
              lVar14 = 0;
            }
            pppppplVar11 = (long ******)((long)pppppplVar19 + lVar14);
            if ((long)ppppplVar23 <= (long)pppppplVar19[4]) {
              pppppplVar29 = pppppplVar19;
            }
          }
          if (((long ******)&pppplStack_120 == pppppplVar29) ||
             ((long)ppppplVar23 < (long)pppppplVar29[4])) goto LAB_1078e84f8;
          uVar7 = pppppplVar10[5] != (long *****)0x0;
          if (pppppplVar10[5] != (long *****)0x1) {
            if (*(int *)(pppppplVar29 + 6) != 2) goto LAB_1078e84f8;
            pppppplVar9 = &ppppplStack_f0;
            param_4 = pppppplVar24 + 7;
            func_0x0001078efe58();
            ppplStack_190 = (long ***)pppplVar15;
            ppppplStack_188 = (long *****)pppppplVar22;
            pppppplVar22 = pppppplVar29 + 8;
            pppppplVar11 = (long ******)pppppplVar29[7];
            while (pppppplVar11 != pppppplVar22) {
              pppplStack_f8 = (long ****)pppppplVar11[4];
              pppppplVar9 = &ppppplStack_f0;
              param_4 = (long ******)&pppplStack_f8;
              func_0x0001078f1ffc();
              func_0x000107915114();
              pppppplVar11 = pppppplVar9;
            }
            if ((long *****)pppplStack_e0 != (long *****)0x1) {
LAB_1078e84f4:
              func_0x000107917bac();
              goto LAB_1078e84f8;
            }
            pppppplVar11 = (long ******)pppppplVar29[7];
            while (ppppplVar23 = ppppplStack_148, uVar7 = pppppplVar22 <= pppppplVar11,
                  pppppplVar11 != pppppplVar22) {
              if ((long)pppppplVar11[4] < 0) {
                param_4 = (long ******)-(long)pppppplVar11[4];
                pppppplVar9 = (long ******)ppppplStack_148;
                func_0x0001078f2064();
                if ((long ******)(ppppplVar23 + 1) != pppppplVar9) {
                  pppppplVar11 = pppppplVar9 + 6;
                  pppppplVar19 = (long ******)pppppplVar9[5];
                  while (pppppplVar19 != pppppplVar11) {
                    func_0x0001079166f4();
                    if ((int)pppppplVar9 == 0) goto LAB_1078e84f4;
                    func_0x00010791598c();
                    pppppplVar19 = pppppplVar9;
                  }
                }
              }
              else {
                func_0x0001079166f4();
                if (((ulong)pppppplVar9 & 1) == 0) goto LAB_1078e84f4;
              }
              func_0x000107915114();
              pppppplVar11 = pppppplVar9;
            }
            func_0x000107917bac();
            pppppplVar22 = (long ******)ppppplStack_188;
            pppplVar15 = (long ****)ppplStack_190;
          }
          func_0x000107915f64(*(undefined4 *)(pppppplVar29 + 6));
          if ((bool)uVar7) {
            if ((uStack_180 & 1) == 0) {
              if (pppplVar15 != pppppplVar10[6][4]) goto LAB_1078e84f8;
              uStack_180 = 0;
            }
            else {
              uStack_180 = 0;
              pppplVar15 = pppppplVar10[6][4];
            }
          }
          func_0x000107916674();
          pppppplVar10 = pppppplVar9;
        }
        uStack_194 = 1;
        *(undefined4 *)(pppppplVar24 + 6) = 1;
      }
LAB_1078e84f8:
      func_0x000107914fec();
      pppppplVar24 = pppppplVar9;
    }
    uVar26 = uStack_1a0;
  } while ((uStack_194 & 1) != 0);
  lVar1 = lStack_1a8;
  lVar30 = plStack_150[1];
  for (lVar14 = *plStack_150; lVar14 != lVar30; lVar14 = lVar14 + 0x1b0) {
    for (lVar20 = 0x28; lVar20 != 0x198; lVar20 = lVar20 + 0xb8) {
      lVar21 = *(long *)(lVar14 + lVar20 + 0x90);
      pppppplVar24 = (long ******)&pppplStack_120;
      pppppplVar9 = (long ******)&pppplStack_120;
      while (pppppplVar22 = (long ******)*pppppplVar9, pppppplVar22 != (long ******)0x0) {
        lVar3 = 8;
        if (lVar21 <= (long)pppppplVar22[4]) {
          lVar3 = 0;
        }
        pppppplVar9 = (long ******)((long)pppppplVar22 + lVar3);
        if (lVar21 <= (long)pppppplVar22[4]) {
          pppppplVar24 = pppppplVar22;
        }
      }
      if (((long ******)&pppplStack_120 != pppppplVar24) && ((long)pppppplVar24[4] <= lVar21)) {
        *(bool *)(lVar14 + lVar20 + 0x98) = *(int *)(pppppplVar24 + 6) == 1;
      }
    }
  }
  lVar20 = *(long *)(lStack_1a8 + 0x20);
  lVar30 = *(long *)(lStack_1a8 + 0x18);
  for (lVar14 = lVar30; lVar14 != lVar20; lVar14 = lVar14 + 0x1b0) {
    *(undefined4 *)(lVar14 + 200) = 0;
    *(undefined2 *)(lVar14 + 0xcc) = 0;
    *(undefined4 *)(lVar14 + 0x180) = 0;
    *(undefined2 *)(lVar14 + 0x184) = 0;
  }
  pppplStack_e8 = pppplStack_1b0;
  pppplStack_e0 = (long ****)plStack_1d0;
  ppppplStack_d8 = ppppplStack_1c8;
  uStack_d0 = uStack_1b8;
  puStack_c0 = &uStack_179;
  pppplStack_b8 = pppplStack_1b0;
  pppplStack_b0 = pppplStack_1b0;
  plStack_a8 = plStack_1d0;
  pplStack_a0 = &plStack_178;
  ppppplStack_98 = ppppplStack_1c8;
  lStack_90 = lStack_1c0;
  uStack_88 = uStack_1b8;
  pppplStack_f8 = (long ****)((*(long *)(lStack_1a8 + 0x90) - *(long *)(lStack_1a8 + 0x88)) / 0x18);
  ppppplStack_f0 = (long *****)pppplStack_1b0;
  pppplStack_100 = (long ****)CONCAT71(pppplStack_100._1_7_,1);
  puStack_80 = puStack_c0;
  for (uVar26 = 0; uVar6 = (lVar20 - lVar30) / 0x1b0, uVar7 = uVar26 == uVar6, uVar26 < uVar6;
      uVar26 = uVar26 + 1) {
    lVar30 = lVar30 + uVar26 * 0x1b0;
    if ((*(byte *)(lVar30 + 0x20) & 1) == 0) {
      if (*(int *)(lVar30 + 0x28) == 3) {
        if (*(int *)(lVar30 + 0xe0) != 3) goto LAB_1078e86a8;
      }
      else if ((*(int *)(lVar30 + 0x28) == 4) && (*(int *)(lVar30 + 0xe0) == 4)) {
        param_1 = *(long *******)(lVar30 + 0x70);
        in_register_00005008 = (long *****)0x0;
        param_2 = *(undefined8 *)(lVar30 + 0x128);
        in_register_00005028 = 0;
        func_0x000107915914(&ppppplStack_f0);
        FUN_1078f20b0();
      }
      else {
LAB_1078e86a8:
        for (iVar27 = 0; iVar27 != 2; iVar27 = iVar27 + 1) {
          func_0x000107915914(&ppppplStack_f0);
          FUN_1078f20b0();
        }
      }
    }
    lVar30 = *(long *)(lVar1 + 0x18);
    lVar20 = *(long *)(lVar1 + 0x20);
  }
  func_0x0001078f4748(alStack_170 + 2);
  func_0x0001078f4774(alStack_170[0]);
  func_0x000107913564(uStack_78);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078f4748(alStack_170 + 2);
  lVar14 = alStack_170[0];
  func_0x0001078f4774();
  func_0x000107914aac();
  puVar12 = &UNK_1078e8734;
  func_0x0001079175f0();
  ppppplVar23 = (long *****)0x0;
  pppplStack_2c0 = (long ****)0x0;
  uStack_2b8 = 0;
  ppppplVar28 = (long *****)(lVar14 + 0x40);
  ppppplStack_2c8 = &pppplStack_2c0;
  puStack_1e0 = &stack0xfffffffffffffff0;
  puStack_1d8 = puVar12;
  for (pppplVar15 = *ppppplVar28; pppplVar15 != *(long *****)(lVar14 + 0x48);
      pppplVar15 = pppplVar15 + 4) {
    if ((((*(byte *)((long)pppplVar15 + 0x1a) & 1) == 0) &&
        ((*(byte *)((long)pppplVar15 + 0x19) & 1) == 0)) &&
       ((*(byte *)((long)pppplVar15 + 0x1b) & 1) == 0)) {
      ppppplStack_310 = (long *****)((ulong)ppppplStack_310 & 0xffffffffffff0000);
      uStack_308 = 0xffffffffffffffff;
      uStack_300 = 0xffffffffffffffff;
      uStack_2f8 = 0xffffffffffffffff;
      uStack_2f0 = 0xbff0000000000000;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2e8 = 0;
      ppplVar4 = *pppplVar15;
      ppplVar5 = pppplVar15[1];
      func_0x000107915260();
      FUN_1078f47f8();
      ppppplStack_318 = (long *****)param_1;
      if (ppplVar4 == ppplVar5) {
        pppplStack_330 = (long ****)((ulong)pppplStack_330 & 0xffffffffffffff00);
      }
      else {
        func_0x0001079187d8();
        ppppplStack_280 = (long *****)0x0;
        uStack_270 = 0xffffffffffffffff;
        pppplStack_278 = (long ****)ppppplVar23;
        func_0x000107917e84();
        func_0x000107917ed4();
      }
      func_0x0001078f4acc(&uStack_2e8);
    }
    ppppplVar23 = (long *****)((long)ppppplVar23 + 1);
  }
  ppppplVar23 = (long *****)0x0;
  plVar16 = (long *)(lVar14 + 0x88);
  for (plVar31 = (long *)*plVar16; plVar31 != *(long **)(lVar14 + 0x90); plVar31 = plVar31 + 3) {
    ppppplStack_310 = (long *****)((ulong)ppppplStack_310 & 0xffffffffffff0000);
    uStack_308 = 0xffffffffffffffff;
    uStack_300 = 0xffffffffffffffff;
    uStack_2f8 = 0xffffffffffffffff;
    uStack_2f0 = 0xbff0000000000000;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2e8 = 0;
    lVar30 = *plVar31;
    lVar1 = plVar31[1];
    func_0x000107915260();
    func_0x0001078f4c40();
    ppppplStack_318 = (long *****)param_1;
    if (lVar30 == lVar1) {
      pppplStack_330 = (long ****)((ulong)pppplStack_330 & 0xffffffffffffff00);
    }
    else {
      func_0x0001079187d8();
      ppppplStack_280 = (long *****)0x2;
      uStack_270 = 0xffffffffffffffff;
      pppplStack_278 = (long ****)ppppplVar23;
      func_0x000107917e84();
      func_0x000107917ed4();
    }
    func_0x0001078f4acc(&uStack_2e8);
    ppppplVar23 = (long *****)((long)ppppplVar23 + 1);
  }
  pppplStack_2b0 = (long ****)0x0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  func_0x0001078f4c9c(&pppplStack_298,uStack_2b8);
  lVar30 = 0;
  pppppplVar9 = (long ******)ppppplStack_2c8;
  do {
    bVar8 = &pppplStack_2c0 <= pppppplVar9;
    if (pppppplVar9 == (long ******)&pppplStack_2c0) {
      pppplStack_328 = (long ****)&pppplStack_2b0;
      ppppplStack_318 = (long *****)&ppppplStack_2c8;
      uStack_308 = CONCAT71(uStack_308._1_7_,1);
      pppplStack_330 = (long ****)ppppplVar28;
      plStack_320 = plVar16;
      ppppplStack_310 = (long *****)(lVar14 + 0xf8);
      func_0x000107917008(pppplStack_290);
      ppppplVar23 = extraout_x8_00;
      if (bVar8) {
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        func_0x000107916078();
        ppppplVar18 = extraout_x8_01;
        ppppplVar23 = (long *****)pppplStack_298;
        ppppplStack_280 = (long *****)param_1;
        pppplStack_278 = (long ****)in_register_00005008;
        uStack_270 = param_2;
        uStack_268 = in_register_00005028;
        for (; (long *****)pppplStack_298 != ppppplVar18; pppplStack_298 = pppplStack_298 + 9) {
          func_0x000107917f50(&ppppplStack_280);
          func_0x0001078f503c(&uStack_260,ppppplVar23);
          ppppplVar23 = ppppplVar23 + 9;
          ppppplVar18 = (long *****)pppplStack_290;
        }
        FUN_1078f4de4(&ppppplStack_280,&uStack_260,0,&pppplStack_330);
        func_0x0001078f57e8(&uStack_260);
      }
      else {
        while ((long *****)pppplStack_298 != ppppplVar23) {
          pppplStack_298 = pppplStack_298 + 9;
          for (ppppplVar18 = (long *****)pppplStack_298; ppppplVar18 != ppppplVar23;
              ppppplVar18 = ppppplVar18 + 9) {
            func_0x000107915378(&pppplStack_330);
            func_0x0001078f4ea8();
            ppppplVar23 = (long *****)pppplStack_290;
          }
        }
      }
      pppppplVar9 = (long ******)&pppplStack_298;
      func_0x0001078f4d7c();
      pppppplVar24 = (long ******)ppppplStack_2c8;
      while (pppppplVar22 = (long ******)ppppplStack_2c8,
            pppppplVar24 != (long ******)&pppplStack_2c0) {
        ppppplVar23 = (long *****)-(double)pppppplVar24[10];
        if (*(char *)(pppppplVar24 + 0xb) == '\0') {
          ppppplVar23 = pppppplVar24[10];
        }
        func_0x000107914cfc();
        if ((int)pppppplVar9 == 0) {
          pppppplVar22 = pppppplVar24 + 0xc;
          if ((long)*pppppplVar22 < 0) {
            func_0x0001078ed088(ppppplVar23,0);
            if ((int)pppppplVar9 != 0) {
              *(undefined1 *)(pppppplVar24 + 0xb) = 1;
            }
          }
          else {
            pppppplVar10 = &ppppplStack_2c8;
            func_0x0001078f49f8(pppppplVar10,pppppplVar22);
            pppppplVar11 = pppppplVar10;
            func_0x000107916430(*(undefined1 *)(pppppplVar24 + 0xb),pppppplVar24[10]);
            func_0x0001078ed088(0);
            pppppplVar9 = pppppplVar11;
            func_0x0001078ed088(0,pppppplVar10[3]);
            if (((int)pppppplVar11 != 0) && ((int)pppppplVar9 != 0)) {
              *(undefined1 *)((long)pppppplVar24 + 0x59) = 1;
            }
            if ((((ulong)pppppplVar11 & 1) != 0) || (*(char *)((long)pppppplVar24 + 0x59) == '\x01')
               ) {
              *pppppplVar22 = (long *****)0xffffffffffffffff;
            }
          }
        }
        else {
          *(undefined1 *)((long)pppppplVar24 + 0x59) = 1;
        }
        func_0x000107914fec();
        pppppplVar24 = pppppplVar9;
      }
      while (pppppplVar22 != (long ******)&pppplStack_2c0) {
        if (-1 < (long)pppppplVar22[0xc]) {
          pppppplVar9 = &ppppplStack_2c8;
          func_0x0001078f49f8();
          func_0x000107917e48();
        }
        func_0x000107914fec();
        pppppplVar22 = pppppplVar9;
      }
      pppppplVar9 = (long ******)&pppplStack_2b0;
      func_0x0001078e8d68();
      ppppplStack_280 = (long *****)0x0;
      pppplStack_278 = (long ****)0x0;
      uStack_270 = 0;
      pppppplVar24 = (long ******)ppppplStack_2c8;
      while (pppppplVar24 != (long ******)&pppplStack_2c0) {
        if (((*(byte *)((long)pppppplVar24 + 0x59) & 1) == 0) &&
           (pppppplVar24[0xc] == (long *****)0xffffffffffffffff)) {
          dVar32 = 0.0;
          ppppplStack_318 = (long *****)0x0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          ppppplStack_310 = (long *****)0x0;
          pppplStack_328 = (long ****)0x0;
          pppplStack_330 = (long ****)0x0;
          func_0x0001078f5a58(&pppplStack_330,*ppppplVar28,0,*plVar16,pppppplVar24[4],
                              pppppplVar24[5],*(undefined1 *)(pppppplVar24 + 0xb),0);
          for (ppppplVar23 = pppppplVar24[0x10]; ppppplVar23 != pppppplVar24[0x11];
              ppppplVar23 = ppppplVar23 + 3) {
            pppppplVar9 = &ppppplStack_2c8;
            func_0x0001078f5cdc(pppppplVar9,ppppplVar23);
            if (((long ******)&pppplStack_2c0 != pppppplVar9) &&
               ((*(byte *)((long)pppppplVar9 + 0x59) & 1) == 0)) {
              func_0x0001078f5a58(&pppplStack_330,*ppppplVar28,0,*plVar16,*ppppplVar23,
                                  ppppplVar23[1],*(undefined1 *)(pppppplVar9 + 0xb),1);
            }
          }
          ppppplVar23 = &pppplStack_330;
          func_0x0001078f5d38();
          if ((long *****)0x3 < ppppplVar23) {
            ppppplVar23 = (long *****)pppplStack_330;
            func_0x0001078f4c40(pppplStack_330,pppplStack_328);
            ppppplVar18 = ppppplStack_310;
            dVar34 = 0.0;
            dVar33 = dVar32;
            for (pppppplVar9 = (long ******)ppppplStack_318; pppppplVar9 != (long ******)ppppplVar18
                ; pppppplVar9 = pppppplVar9 + 3) {
              ppppplVar23 = *pppppplVar9;
              func_0x0001078f4c40(ppppplVar23,pppppplVar9[1]);
              dVar34 = dVar34 + dVar33;
            }
            func_0x000107914cfc();
            if ((((ulong)ppppplVar23 & 1) == 0) && (0.0 < dVar32 + dVar34)) {
              func_0x0001078f5d68(param_4,&pppplStack_330);
            }
          }
          pppppplVar9 = (long ******)&pppplStack_330;
          func_0x0001078e6404();
        }
        func_0x000107914fec();
        pppppplVar24 = pppppplVar9;
      }
      func_0x0001078e8d68(&ppppplStack_280);
      func_0x0001078f605c(pppplStack_2c0);
      return;
    }
    ppppplVar23 = pppppplVar9[10];
    func_0x000107916430(*(undefined1 *)(pppppplVar9 + 0xb));
    pppplVar15 = pppplStack_298;
    param_1 = (long ******)ABS((double)ppppplVar23);
    in_register_00005008 = (long *****)0x0;
    puVar2 = (undefined8 *)((long)pppplStack_298 + lVar30);
    ppppplVar18 = pppppplVar9[5];
    ppppplVar23 = pppppplVar9[4];
    puVar2[2] = pppppplVar9[6];
    puVar2[1] = ppppplVar18;
    *puVar2 = ppppplVar23;
    puVar2[3] = param_2;
    puVar2[4] = param_1;
    ppppplVar18 = pppppplVar9[4];
    ppppplVar23 = ppppplVar28;
    if (ppppplVar18 == (long *****)0x0) {
code_r0x0001078e8910:
      pppplVar17 = *ppppplVar23 + (long)pppppplVar9[5] * 4;
code_r0x0001078e892c:
      func_0x0001078f4d90(*pppplVar17,pppplVar17[1],(long)pppplStack_298 + lVar30 + 0x28);
    }
    else {
      if (ppppplVar18 == (long *****)0x2) {
        pppplVar17 = (long ****)(*plVar16 + (long)pppppplVar9[5] * 0x18);
        goto code_r0x0001078e892c;
      }
      if (ppppplVar18 == (long *****)0x1) {
        ppppplVar23 = &pppplStack_2b0;
        goto code_r0x0001078e8910;
      }
    }
    pppppplVar9 = (long ******)((long)pppplVar15 + lVar30 + 0x28);
    func_0x0001078e9c64();
    func_0x000107914fec();
    lVar30 = lVar30 + 0x48;
  } while( true );
}



/* Entry: 1078e9778; end: 1078e97b7;  */

long * FUN_1078e9778(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  func_0x0001078e97f0();
  func_0x000107914c78();
  func_0x000107916138();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010791351c();
  return param_1;
}



/* Entry: 1078e9abc; end: 1078e9b1b;  */

void FUN_1078e9abc(undefined8 param_1,long param_2,long param_3)

{
  double *unaff_x19;
  double *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x000107913cd4();
  func_0x0001078e9b1c((double)*(long *)(param_3 + 0x18) +
                      *(double *)(param_3 + 0x20) *
                      (*(double *)(param_2 + 8) - *(double *)(param_3 + 8)));
  unaff_x21[1] = param_1;
  func_0x0001078e9b1c((double)(long)unaff_x19[2] + unaff_x19[4] * (*unaff_x20 - *unaff_x19));
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1078ea1b4; end: 1078ea40b;  */

void FUN_1078ea1b4(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_2);
  if (ABS(param_2) <= ABS(param_1)) {
    dVar1 = ABS(param_1);
  }
  dVar2 = ABS(param_3);
  if (ABS(param_3) <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = ABS(param_4);
  if (ABS(param_4) <= dVar2) {
    dVar1 = dVar2;
  }
  dVar2 = 1.0;
  if (1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  *param_5 = dVar2;
  return;
}



/* Entry: 1078eb44c; end: 1078eb4a3;  */

void FUN_1078eb44c(ulong param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong unaff_x20;
  int unaff_w26;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    func_0x00010791743c();
    func_0x0001078eb5cc();
    func_0x000107916fb0();
    if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
      func_0x000107916104();
      in_ZR = unaff_w26 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x0001078eb39c();
    }
  }
  return;
}



/* Entry: 1078eb8f8; end: 1078eb953;  */

void FUN_1078eb8f8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x0001078ea4e8();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078ebd70; end: 1078ebe1f;  */

bool FUN_1078ebd70(void)

{
  bool bVar1;
  long unaff_x19;
  int unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001079166d8();
  if (unaff_w20 == -1) {
    bVar1 = *(long *)(unaff_x19 + 0x18) < uStack_28;
  }
  else if (unaff_w20 == 1) {
    bVar1 = uStack_28 < *(long *)(unaff_x19 + 8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1078ec28c; end: 1078ec2c3;  */

undefined8 * FUN_1078ec28c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    func_0x0001078ebe90(*param_1);
    func_0x000107917364();
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1 + 4;
}



/* Entry: 1078ecce8; end: 1078ecceb;  */

void FUN_1078ecce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12domain_errorD2Ev_110346168)();
  return;
}



/* Entry: 1078ece24; end: 1078ece37;  */

void FUN_1078ece24(void)

{
  __ZNSt12domain_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ed0b8; end: 1078ed227;  */

void FUN_1078ed0b8(undefined1 *param_1,undefined8 *param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = *(int *)((long)param_2 + 0xc) == 1;
  *param_1 = param_3;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(ulong *)(param_1 + 0xc) =
       CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),-(uint)((int)((uint)bVar1 << 0x1f) < 0)) &
       0xfffffffefffffffe ^ 0xffffffff00000001;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x1c) = param_2[1];
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  return;
}



/* Entry: 1078ed490; end: 1078ed69b;  */

void FUN_1078ed490(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  uVar3 = *param_1;
  uVar4 = 0;
  func_0x0001079143ec(uVar3,param_1[2]);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar3;
  uStack_88 = uVar6;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar3;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078edbc0();
  func_0x000107913794();
  FUN_1078edc38();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078ed4f8;
      func_0x000107916ef0();
      func_0x000107913df4();
      func_0x0001078edfec();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001078edca4();
    }
    else {
LAB_1078ed4f8:
      func_0x000107913f30();
      func_0x0001078edeb4();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916ef0();
          func_0x000107915338();
          func_0x000107913880(&uStack_50);
          func_0x0001078edca4();
          func_0x000107913894(&uStack_50);
          func_0x0001078edca4();
          goto LAB_1078ed580;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078edeb4();
    func_0x000107913f10();
    func_0x0001078edeb4();
  }
LAB_1078ed580:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
LAB_1078ed5f0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078ed5f8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x0001078edeb4();
      func_0x000107913ec0();
      func_0x0001078edeb4();
      goto LAB_1078ed5f0;
    }
    func_0x000107913d34();
    uStack_50 = uVar3;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    uStack_38 = uVar6;
    func_0x000107915504();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_140,&uStack_a8);
    func_0x0001078edca4();
    func_0x000107913650();
    func_0x0001078edca4();
LAB_1078ed5f8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001078edca4();
      goto LAB_1078ed61c;
    }
  }
  func_0x000107914848();
  func_0x0001078edeb4();
LAB_1078ed61c:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078edca4();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078edeb4();
  }
  func_0x0001078ee07c(auStack_120);
  func_0x000107916e98();
  func_0x000107916ce0();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 1078edc38; end: 1078edca3;  */

void FUN_1078edc38(ulong param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  undefined8 uVar3;
  undefined8 *unaff_x27;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    uVar3 = *unaff_x27;
    func_0x0001079161e4();
    func_0x0001078edf64();
    uVar2 = unaff_x23;
    func_0x0001078edf64();
    if (((param_1 & 1) != 0) || ((uint)uVar2 != 0)) {
      uVar1 = unaff_x19;
      if (((uint)param_1 & (uint)uVar2) == 0) {
        uVar1 = unaff_x21;
      }
      in_ZR = (uint)param_1 == 0;
      uVar2 = uVar1;
      if ((bool)in_ZR) {
        uVar2 = unaff_x20;
      }
      func_0x0001078edb44(uVar2,uVar3);
    }
    unaff_x27 = unaff_x27 + 1;
    param_1 = uVar2;
  }
  return;
}



/* Entry: 1078ee020; end: 1078ee027;  */

void FUN_1078ee020(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  uVar3 = *param_1;
  uVar4 = 0;
  func_0x0001079143ec(uVar3,param_1[2]);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar3;
  uStack_88 = uVar6;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar3;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078edbc0();
  func_0x000107913794();
  FUN_1078edc38();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078ed4f8;
      func_0x000107916ef0();
      func_0x000107913df4();
      func_0x0001078edfec();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001078edca4();
    }
    else {
LAB_1078ed4f8:
      func_0x000107913f30();
      func_0x0001078edeb4();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916ef0();
          func_0x000107915338();
          func_0x000107913880(&uStack_50);
          func_0x0001078edca4();
          func_0x000107913894(&uStack_50);
          func_0x0001078edca4();
          goto LAB_1078ed580;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078edeb4();
    func_0x000107913f10();
    func_0x0001078edeb4();
  }
LAB_1078ed580:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
LAB_1078ed5f0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078ed5f8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x0001078edeb4();
      func_0x000107913ec0();
      func_0x0001078edeb4();
      goto LAB_1078ed5f0;
    }
    func_0x000107913d34();
    uStack_50 = uVar3;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    uStack_38 = uVar6;
    func_0x000107915504();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_140,&uStack_a8);
    func_0x0001078edca4();
    func_0x000107913650();
    func_0x0001078edca4();
LAB_1078ed5f8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001078edca4();
      goto LAB_1078ed61c;
    }
  }
  func_0x000107914848();
  func_0x0001078edeb4();
LAB_1078ed61c:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078edca4();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078edeb4();
  }
  func_0x0001078ee07c(auStack_120);
  func_0x000107916e98();
  func_0x000107916ce0();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 1078ee390; end: 1078ee47b;  */

/* WARNING: Possible PIC construction at 0x0001078ee660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ee474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ee664) */

void FUN_1078ee390(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar10;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *extraout_x9;
  ulong uVar11;
  long *unaff_x19;
  long *plVar12;
  undefined8 *unaff_x21;
  long *plVar13;
  long lVar14;
  long **pplVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long in_register_00005008;
  undefined8 uVar19;
  long lVar20;
  long in_register_00005028;
  undefined8 uVar21;
  long lVar22;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000107914d70();
  if ((ulong)param_3[1] < (ulong)param_3[2]) {
    func_0x000107914db0();
    extraout_x9[4] = extraout_x8;
    extraout_x9[1] = in_register_00005008;
    *extraout_x9 = param_1;
    extraout_x9[3] = in_register_00005028;
    extraout_x9[2] = param_2;
    plVar16 = extraout_x9 + 5;
LAB_1078ee468:
    unaff_x19[1] = (long)plVar16;
    return;
  }
  plVar12 = (long *)*unaff_x19;
  lVar14 = param_3[1] - (long)plVar12;
  uVar10 = lVar14 / 0x28 + 1;
  uVar4 = 0x666666666666665 < uVar10;
  uVar5 = uVar10 == 0x666666666666666;
  if (uVar10 < 0x666666666666667) {
    uVar2 = (param_3[2] - (long)plVar12) / 0x28;
    uVar11 = uVar2 * 2;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0x333333333333332 < uVar2) {
      uVar11 = 0x666666666666666;
    }
    uVar4 = 0x666666666666665 < uVar11;
    uVar5 = uVar11 == 0x666666666666666;
    if (uVar11 < 0x666666666666667) {
      lVar6 = uVar11 * 0x28;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + lVar14);
      uVar18 = *unaff_x21;
      uVar21 = unaff_x21[3];
      uVar19 = unaff_x21[2];
      puVar1[1] = unaff_x21[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar21;
      puVar1[2] = uVar19;
      puVar1[4] = unaff_x21[4];
      plVar16 = puVar1 + 5;
      func_0x000107913970();
      *unaff_x19 = (long)(puVar1 + (lVar14 / -0x28) * 5);
      unaff_x19[1] = (long)plVar16;
      unaff_x19[2] = lVar6 + uVar11 * 0x28;
      if (plVar12 != (long *)0x0) {
        func_0x000107914d94();
      }
      goto LAB_1078ee468;
    }
    plVar16 = (long *)&SUB_1078ee47c;
    func_0x000104bd35f4();
  }
  else {
    plVar16 = (long *)0x1078ee478;
  }
  puVar17 = &UNK_1078ee488;
  plStack_50 = (long *)&stack0xfffffffffffffff0;
  plStack_48 = plVar16;
  func_0x000107913ad0();
  pplVar15 = &plStack_50;
code_r0x0001078ee488:
  func_0x000107916658();
  in_stack_00000070 = pplVar15;
  in_stack_00000078 = puVar17;
  func_0x000107913e28();
code_r0x0001078ee4a8:
  plStack_48 = unaff_x19 + -10;
  plStack_50 = unaff_x19 + -0xf;
  plVar16 = plVar12;
code_r0x0001078ee4bc:
  func_0x000107916210();
  if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001078ee75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078ee760 + (ulong)*(byte *)((long)plVar16 + 0x10dedb8bc) * 4))();
    return;
  }
  if ((long)extraout_x8_00 < 0x3c0) {
    if ((param_6 & 1) == 0) {
      if (plVar12 == unaff_x19) {
        return;
      }
      plVar16 = plVar12 + -5;
      while (plVar12 = plVar12 + 5, plVar12 != unaff_x19) {
        func_0x000107914e28();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x0001079182e4();
          plVar8 = plVar16;
          do {
            plVar13 = plVar8;
            lVar6 = plVar13[6];
            lVar14 = plVar13[5];
            lVar22 = plVar13[8];
            lVar20 = plVar13[7];
            plVar13[0xb] = lVar6;
            plVar13[10] = lVar14;
            plVar13[0xd] = lVar22;
            plVar13[0xc] = lVar20;
            plVar13[0xe] = plVar13[9];
            func_0x00010791760c();
            func_0x0001078eea1c();
            plVar8 = plVar13 + -5;
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          plVar13[9] = extraout_x8_07;
          plVar13[6] = lVar6;
          plVar13[5] = lVar14;
          plVar13[8] = lVar22;
          plVar13[7] = lVar20;
        }
        plVar16 = plVar16 + 5;
      }
      return;
    }
    if (plVar12 == unaff_x19) {
      return;
    }
    lVar14 = 0;
    plVar16 = plVar12;
    goto code_r0x0001078ee80c;
  }
  if (lVar14 != 0) {
    plVar16 = plVar12 + ((ulong)plVar16 >> 1) * 5;
    if (extraout_x8_00 < 0x1401) {
      func_0x000107915378(plVar16);
      func_0x0001078eea90();
    }
    else {
      func_0x000107914c3c();
      func_0x0001078eea90();
      func_0x0001078eea90(plVar12 + 5,plVar16 + -5,plStack_48);
      func_0x0001078eea90(plVar12 + 10,plVar16 + 5,plStack_50);
      func_0x0001079171fc();
      func_0x0001078eea90();
      func_0x00010791561c();
      func_0x000107915344();
      in_register_00005008 = plVar16[1];
      param_1 = *plVar16;
      in_register_00005028 = plVar16[3];
      param_2 = plVar16[2];
      func_0x0001079158c0(plVar16[4]);
      func_0x000107914058();
    }
    lVar14 = lVar14 + -1;
    if ((param_6 & 1) != 0) {
code_r0x0001078ee55c:
      lVar6 = 0;
      func_0x00010791561c();
      do {
        lVar6 = lVar6 + 0x28;
        puVar9 = (undefined1 *)(lVar6 + (long)plVar12);
        func_0x0001078eea1c(puVar9,&stack0xffffffffffffffc0);
      } while (((ulong)puVar9 & 1) != 0);
      plVar8 = (long *)((long)plVar12 + lVar6);
      plVar16 = plVar8;
      plVar13 = unaff_x19;
      if (lVar6 == 0x28) {
        do {
          if (unaff_x19 <= plVar8) break;
          func_0x000107916f24();
        } while (((ulong)puVar9 & 1) == 0);
      }
      else {
        do {
          func_0x000107916f24();
        } while ((int)puVar9 == 0);
      }
      while (plVar16 < plVar13) {
        func_0x000107917744();
        func_0x000107915344();
        func_0x000107916544();
        plVar16[4] = extraout_x8_01;
        plVar16[1] = in_register_00005008;
        *plVar16 = param_1;
        plVar16[3] = in_register_00005028;
        plVar16[2] = param_2;
        func_0x000107915108();
        plVar13[4] = extraout_x8_02;
        plVar13[1] = in_register_00005008;
        *plVar13 = param_1;
        plVar13[3] = in_register_00005028;
        plVar13[2] = param_2;
        do {
          plVar16 = plVar16 + 5;
          plVar7 = plVar16;
          func_0x0001078eea1c(plVar16,&stack0xffffffffffffffc0);
        } while (((ulong)plVar7 & 1) != 0);
        do {
          plVar13 = plVar13 + -5;
          plVar7 = plVar13;
          func_0x0001078eea1c(plVar13,&stack0xffffffffffffffc0);
        } while (((ulong)plVar7 & 1) == 0);
      }
      plVar13 = plVar16 + -5;
      if (plVar12 != plVar13) {
        func_0x000107916544();
        func_0x0001079158c0();
      }
      func_0x0001079150cc();
      uVar4 = unaff_x19 <= plVar8;
      uVar5 = plVar8 == unaff_x19;
      if ((bool)uVar4) {
        plVar8 = plVar12;
        func_0x0001078eec20(plVar12,plVar13);
        param_3 = plVar16;
        func_0x0001078eec20(plVar16,unaff_x19);
        if ((int)param_3 != 0) goto code_r0x0001078ee73c;
        if (((ulong)plVar8 & 1) != 0) goto code_r0x0001078ee4bc;
      }
      param_6 = (ulong)((uint)param_6 & 1);
      puVar17 = &UNK_1078ee664;
      param_3 = plVar12;
      pplVar15 = &stack0x00000070;
      goto code_r0x0001078ee488;
    }
    plVar16 = plVar12 + -5;
    func_0x0001078eea1c(plVar16,plVar12);
    if (((ulong)plVar16 & 1) != 0) goto code_r0x0001078ee55c;
    func_0x00010791561c();
    param_3 = (long *)&stack0xffffffffffffffc0;
    func_0x0001078eea1c(param_3,unaff_x19 + -5);
    plVar16 = plVar12;
    if (((ulong)param_3 & 1) == 0) {
      do {
        plVar16 = plVar16 + 5;
        if (unaff_x19 <= plVar16) break;
        func_0x000107916400();
      } while ((int)param_3 == 0);
    }
    else {
      do {
        plVar16 = plVar16 + 5;
        func_0x000107916400();
      } while (((ulong)param_3 & 1) == 0);
    }
    if (plVar16 < unaff_x19) {
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    while (plVar16 < unaff_x19) {
      func_0x000107917744();
      func_0x000107915344();
      in_register_00005008 = unaff_x19[1];
      param_1 = *unaff_x19;
      in_register_00005028 = unaff_x19[3];
      param_2 = unaff_x19[2];
      plVar16[4] = unaff_x19[4];
      plVar16[1] = in_register_00005008;
      *plVar16 = param_1;
      plVar16[3] = in_register_00005028;
      plVar16[2] = param_2;
      func_0x000107915108();
      unaff_x19[4] = extraout_x8_03;
      unaff_x19[1] = in_register_00005008;
      *unaff_x19 = param_1;
      unaff_x19[3] = in_register_00005028;
      unaff_x19[2] = param_2;
      do {
        plVar16 = plVar16 + 5;
        func_0x000107916400();
      } while ((int)param_3 == 0);
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    plVar8 = plVar16 + -5;
    uVar4 = plVar8 <= plVar12;
    uVar5 = plVar12 == plVar8;
    if (!(bool)uVar5) {
      in_register_00005008 = plVar16[-4];
      param_1 = *plVar8;
      in_register_00005028 = plVar16[-2];
      param_2 = plVar16[-3];
      plVar12[4] = plVar16[-1];
      plVar12[1] = in_register_00005008;
      *plVar12 = param_1;
      plVar12[3] = in_register_00005028;
      plVar12[2] = param_2;
    }
    param_6 = 0;
    func_0x0001079150e0();
    goto code_r0x0001078ee4bc;
  }
  if (plVar12 == unaff_x19) {
    return;
  }
  func_0x0001079181fc();
  lVar14 = 0;
  do {
    func_0x000107914c3c();
    func_0x0001078eeea0();
    lVar14 = lVar14 + -1;
  } while (-1 < lVar14);
  do {
    if ((long)plVar16 < 2) {
      return;
    }
    uVar10 = 0;
    lVar6 = plVar12[1];
    lVar14 = *plVar12;
    lVar22 = plVar12[3];
    lVar20 = plVar12[2];
    plVar8 = plVar12;
    do {
      uVar2 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      plVar13 = plVar8 + uVar10 * 5 + 5;
      uVar3 = uVar2;
      if ((long)uVar11 < (long)plVar16) {
        func_0x000107915260();
        func_0x0001078eea1c();
        plVar13 = plVar8 + uVar10 * 5 + 10;
        uVar3 = uVar11;
        if ((int)param_3 == 0) {
          plVar13 = plVar8 + uVar10 * 5 + 5;
          uVar3 = uVar2;
        }
      }
      uVar10 = uVar3;
      func_0x000107914db0();
      plVar8[4] = extraout_x8_04;
      plVar8[1] = lVar6;
      *plVar8 = lVar14;
      plVar8[3] = lVar22;
      plVar8[2] = lVar20;
      plVar8 = plVar13;
    } while ((long)uVar10 <= (long)((ulong)((long)plVar16 - 2U) >> 1));
    plVar8 = unaff_x19 + -5;
    if (plVar13 == plVar8) {
      func_0x000107915b08();
      func_0x0001079156d8();
    }
    else {
      lVar6 = unaff_x19[-4];
      lVar14 = *plVar8;
      lVar22 = unaff_x19[-2];
      lVar20 = unaff_x19[-3];
      func_0x0001079156d8(unaff_x19[-1]);
      func_0x000107915b08();
      unaff_x19[-1] = extraout_x8_05;
      unaff_x19[-4] = lVar6;
      *plVar8 = lVar14;
      unaff_x19[-2] = lVar22;
      unaff_x19[-3] = lVar20;
      puVar9 = (undefined1 *)((long)plVar13 + (0x28 - (long)plVar12));
      if (0x28 < (long)puVar9) {
        uVar10 = (ulong)puVar9 / 0x28 - 2 >> 1;
        func_0x000107915248();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x00010791407c();
          plVar13 = plVar12 + uVar10 * 5;
          do {
            plVar7 = plVar13;
            func_0x000107915308();
            func_0x0001079156d8();
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            plVar13 = plVar12 + uVar10 * 5;
            param_3 = plVar13;
            func_0x0001078eea1c(plVar13,&stack0xfffffffffffffff0);
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          plVar7[4] = extraout_x8_06;
          plVar7[1] = lVar6;
          *plVar7 = lVar14;
          plVar7[3] = lVar22;
          plVar7[2] = lVar20;
        }
      }
    }
    plVar16 = (long *)((long)plVar16 + -1);
    unaff_x19 = plVar8;
  } while( true );
code_r0x0001078ee80c:
  plVar16 = plVar16 + 5;
  if (plVar16 == unaff_x19) {
    return;
  }
  plVar8 = plVar16;
  func_0x0001078eea1c();
  if ((int)plVar8 != 0) {
    func_0x0001079182e4();
    lVar6 = lVar14;
    do {
      lVar20 = lVar6;
      func_0x000107914728((undefined1 *)((long)plVar12 + lVar20));
      plVar8 = plVar12;
      if (lVar20 == 0) goto code_r0x0001078ee85c;
      puVar9 = &stack0xfffffffffffffff0;
      func_0x0001078eea1c(puVar9,(undefined1 *)(lVar20 + -0x28 + (long)plVar12));
      lVar6 = lVar20 + -0x28;
    } while (((ulong)puVar9 & 1) != 0);
    plVar8 = (long *)((long)plVar12 + lVar20);
code_r0x0001078ee85c:
    func_0x0001079150f4(plVar8);
  }
  lVar14 = lVar14 + 0x28;
  goto code_r0x0001078ee80c;
code_r0x0001078ee73c:
  unaff_x19 = plVar13;
  if (((ulong)plVar8 & 1) != 0) {
    return;
  }
  goto code_r0x0001078ee4a8;
}



/* Entry: 1078eee50; end: 1078eee9f;  */

bool FUN_1078eee50(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x9;
  long extraout_x11;
  double dVar2;
  
  dVar2 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10));
  uVar1 = dVar2 == 50.0;
  if (dVar2 < 50.0) {
    func_0x000107916810();
    func_0x00010791723c();
    func_0x0001079173dc();
    return (bool)uVar1 && extraout_x9 == extraout_x11;
  }
  return false;
}



/* Entry: 1078ef25c; end: 1078ef3f3;  */

void FUN_1078ef25c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  long lStack_58;
  
  func_0x000107914d64();
  if (param_1 != param_2) {
    plVar4 = (long *)*unaff_x20;
    if (unaff_x19[2] != 0) {
      lVar1 = *unaff_x19;
      plVar2 = unaff_x19 + 1;
      *unaff_x19 = (long)plVar2;
      *(undefined8 *)(*plVar2 + 0x10) = 0;
      *plVar2 = 0;
      unaff_x19[2] = 0;
      lVar3 = *(long *)(lVar1 + 8);
      if (lVar3 != 0) {
        lVar1 = lVar3;
      }
      func_0x0001078f011c(&stack0xffffffffffffff98);
      while (lStack_58 != 0 && plVar4 != unaff_x20 + 1) {
        *(long *)(lStack_58 + 0x20) = plVar4[4];
        func_0x000107915a64();
        func_0x0001078f017c();
        func_0x0001004d770c();
        plVar4 = (long *)&stack0xffffffffffffff98;
        func_0x0001078f011c();
        func_0x000107916674();
      }
      func_0x0001079164c8();
      func_0x0001078f0080();
      if (lVar1 != 0) {
        do {
          lVar3 = lVar1;
          lVar1 = *(long *)(lVar3 + 0x10);
        } while (lVar1 != 0);
        func_0x0001078f0080(unaff_x19,lVar3);
      }
    }
    while (plVar4 != unaff_x20 + 1) {
      lVar3 = plVar4[4];
      lVar1 = 0x28;
      __Znwm();
      *(long *)(lVar1 + 0x20) = lVar3;
      if ((unaff_x19 + 1 != (long *)*unaff_x19) &&
         (plVar4 = unaff_x19 + 1, func_0x00010002c810(), *(long *)(lVar1 + 0x20) < plVar4[4])) {
        func_0x000107915a64();
        func_0x0001078f017c();
      }
      plVar4 = unaff_x19;
      func_0x0001004d770c();
      func_0x000107917db8();
      func_0x000107916674();
    }
  }
  unaff_x19[3] = unaff_x20[3];
  return;
}



/* Entry: 1078efbe0; end: 1078efc9f;  */

/* WARNING: Possible PIC construction at 0x0001078efccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078efd38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078efcd0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd3c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd48) */
/* WARNING: Removing unreachable block (ram,0x0001078efd5c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd84) */
/* WARNING: Removing unreachable block (ram,0x0001078efd78) */
/* WARNING: Removing unreachable block (ram,0x0001078efd8c) */
/* WARNING: Removing unreachable block (ram,0x0001078efda8) */
/* WARNING: Removing unreachable block (ram,0x0001078efdac) */
/* WARNING: Removing unreachable block (ram,0x0001079133d0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd64) */

void FUN_1078efbe0(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar7;
  long lVar8;
  long extraout_x10;
  long extraout_x10_00;
  long lVar9;
  long extraout_x12;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x24;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000107913ca4();
  cVar2 = SBORROW8(param_2,2);
  lVar7 = param_2 + -2;
  cVar3 = lVar7 < 0;
  uVar4 = lVar7 == 0;
  if ((1 < param_2) && (func_0x0001079176d8(lVar7), cVar3 == cVar2)) {
    func_0x000107916ab4();
    lVar7 = extraout_x9;
    if (cVar3 != cVar2) {
      lVar7 = 0x18;
      if (*(long *)(extraout_x9 + 0x10) <= *(long *)(extraout_x9 + 0x28)) {
        lVar7 = 0;
      }
      lVar7 = extraout_x9 + lVar7;
    }
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar8 = param_3[2];
    cVar3 = SBORROW8(lVar9,lVar8);
    lVar7 = lVar9 - lVar8;
    uVar4 = lVar9 == lVar8;
    if (lVar9 <= lVar8) {
      uVar11 = param_3[1];
      uVar10 = *param_3;
      do {
        cVar2 = lVar7 < 0;
        func_0x000107916b0c();
        lVar8 = extraout_x10;
        if (cVar2 != cVar3) break;
        func_0x0001079171e0();
        lVar7 = extraout_x9_00;
        if (cVar2 != cVar3) {
          lVar7 = extraout_x12;
          if (*(long *)(extraout_x9_00 + 0x10) <= *(long *)(extraout_x9_00 + 0x28)) {
            lVar7 = 0;
          }
          lVar7 = extraout_x9_00 + lVar7;
        }
        lVar9 = *(long *)(lVar7 + 0x10);
        cVar3 = SBORROW8(lVar9,extraout_x10_00);
        lVar7 = lVar9 - extraout_x10_00;
        uVar4 = lVar9 == extraout_x10_00;
        lVar8 = extraout_x10_00;
      } while (lVar9 <= extraout_x10_00);
      param_3[1] = uVar11;
      *param_3 = uVar10;
      param_3[2] = lVar8;
    }
  }
  func_0x000107913564(extraout_x8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107917a38();
  func_0x000107914d70();
  uVar6 = *(ulong *)(param_1 + 8);
  bVar1 = *(ulong *)(unaff_x19 + 0x10) <= uVar6;
  bVar5 = uVar6 == *(ulong *)(unaff_x19 + 0x10);
  if (!bVar1) goto code_r0x0001078efdc0;
  func_0x0001079146e8(0x555555555555555);
  if (bVar1 && !bVar5) {
    func_0x0001078efe28();
    unaff_x21 = param_2;
code_r0x0001078efdbc:
    func_0x000104bd35f4();
  }
  else {
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 != 0) {
      unaff_x21 = param_2;
      if (extraout_x8_00 < unaff_x24) goto code_r0x0001078efdbc;
      uVar6 = unaff_x24 * 0x30;
      __Znwm();
    }
    func_0x000107915248();
    unaff_x21 = param_2;
  }
code_r0x0001078efdc0:
  func_0x0001078efde4();
  uVar10 = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(uVar6 + 0x28) = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined8 *)(uVar6 + 0x20) = uVar10;
  return;
}



/* Entry: 1078efeec; end: 1078f005b;  */

void FUN_1078efeec(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  func_0x000107917aac();
  func_0x0001078eff68();
  if (*param_1 == 0) {
    func_0x0001004d76ec();
    param_1[4] = *param_4;
    func_0x0001004d76fc();
    func_0x000107917db8();
  }
  func_0x00010791535c();
  return;
}



/* Entry: 1078f0840; end: 1078f0913;  */

void FUN_1078f0840(void)

{
  int iVar1;
  ulong in_x3;
  
  func_0x0001079144b8();
  func_0x0001079162f0();
  iVar1 = (int)in_x3;
  func_0x000107914edc();
  func_0x0001078f0668();
  if ((in_x3 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010791360c();
      func_0x0001079156f4();
      func_0x0001078f0668();
      if (iVar1 != 0) {
        func_0x00010791345c();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x00010791345c();
      func_0x000107914edc();
      func_0x0001078f0668();
      if (iVar1 == 0) {
        return;
      }
      func_0x00010791360c();
    }
    else {
      func_0x000107914468();
    }
    func_0x0001079158c0();
  }
  return;
}



/* Entry: 1078f0ca4; end: 1078f0cc3;  */

undefined1  [16] FUN_1078f0ca4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107914090();
  func_0x0001078f0acc();
  return auStack_20;
}



/* Entry: 1078f1654; end: 1078f179b;  */

void FUN_1078f1654(int param_1)

{
  int unaff_w19;
  int unaff_w22;
  
  func_0x0001079189bc();
  func_0x000107913a74();
  func_0x0001078f1558();
  func_0x00010791406c();
  func_0x0001079164c8();
  func_0x0001078f1458();
  if (param_1 != 0) {
    func_0x000107913ce4();
    func_0x000107914498();
    func_0x0001079146a0();
    func_0x00010791406c();
    func_0x000107916938();
    func_0x0001078f1458();
    if (unaff_w22 != 0) {
      func_0x000107913a24();
      func_0x000107913ce4();
      func_0x0001079146c0();
      func_0x00010791406c();
      func_0x000107914d7c();
      func_0x0001078f1458();
      if (unaff_w19 != 0) {
        func_0x000107913d48();
        func_0x000107913cfc();
        func_0x000107913e60();
      }
    }
  }
  return;
}



/* Entry: 1078f1c0c; end: 1078f1c5b;  */

void FUN_1078f1c0c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107914c78();
  func_0x00010002c7d4();
  if (*unaff_x20 == unaff_x19) {
    *unaff_x20 = param_2;
  }
  unaff_x20[2] = unaff_x20[2] + -1;
  func_0x00010530d618(unaff_x20[1]);
  func_0x0001078f005c(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078f20b0; end: 1078f24b7;  */

void FUN_1078f20b0(long param_1,long param_2,long param_3,ulong param_4,long *param_5,long *param_6,
                  undefined1 *param_7)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar8;
  long extraout_x9;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  long unaff_x22;
  ulong uVar15;
  long lVar16;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000030;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  func_0x000107916658();
  param_2 = param_2 + (param_4 & 0xffffffff) * 0xb8;
  if (*(int *)(param_2 + 200) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x90) != '\x01') {
    return;
  }
  if ((*(byte *)(param_2 + 0xcc) & 1) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x28) != 4 && *(int *)(param_2 + 0x28) != 1) {
    return;
  }
  func_0x0001004d7694();
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  func_0x000107917990(*(undefined8 *)(param_1 + 0x48));
  lVar16 = extraout_x8 + param_3 * extraout_x9;
  puVar6 = &stack0x00000008;
  func_0x0001078f24b8(puVar6,lVar16,*(undefined8 *)(param_1 + 0x68));
  _iStack0000000000000050 = CONCAT44(uStack0000000000000054,(int)param_4);
  in_stack_00000020 = unaff_x22;
  func_0x0001079152e8();
  func_0x0001078f2518();
  if ((int)puVar6 != 0) {
LAB_1078f2158:
    lVar16 = *param_6;
    plVar12 = *(long **)(unaff_x20 + 0x48);
    lVar13 = *plVar12;
    *param_7 = 0;
    func_0x0001078f4654(param_5,lVar16);
    lVar16 = lVar13 + unaff_x22 * 0x1b0 + (param_4 & 0xffffffff) * 0xb8;
    in_stack_00000010 = in_stack_00000008;
    *(undefined4 *)(lVar16 + 200) = 4;
    *(undefined1 *)(lVar16 + 0xcc) = 1;
    lVar13 = plVar12[1];
    for (lVar16 = *plVar12; lVar16 != lVar13; lVar16 = lVar16 + 0x1b0) {
      for (lVar11 = 0; lVar11 != 0x170; lVar11 = lVar11 + 0xb8) {
        lVar9 = lVar16 + lVar11;
        if (((*(byte *)(lVar9 + 0xcc) & 1) == 0) && ((*(byte *)(lVar9 + 0xcd) & 1) == 0)) {
          *(undefined4 *)(lVar9 + 200) = 0;
        }
      }
    }
    goto LAB_1078f2478;
  }
  lVar11 = lVar16 + (param_4 & 0xffffffff) * 0xb8;
  lVar13 = lVar11;
  if (in_stack_00000020 != unaff_x22) {
    lVar9 = **(long **)(unaff_x20 + 0x48);
    if ((0 < *(long *)(lVar16 + 0x18)) &&
       (lVar13 = lVar9 + in_stack_00000020 * 0x1b0,
       *(long *)(lVar13 + 0x18) == *(long *)(lVar16 + 0x18))) {
      lVar13 = lVar13 + (long)iStack0000000000000050 * 0xb8;
      lVar16 = *(long *)(lVar13 + 0x88);
      if (lVar16 == -1) {
        lVar16 = *(long *)(lVar13 + 0x80);
      }
      if (lVar16 == unaff_x22) goto LAB_1078f229c;
    }
    lVar16 = (((*(long **)(unaff_x20 + 0x48))[1] - lVar9) / 0x1b0) * 2 + 4;
    do {
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) goto LAB_1078f2158;
      func_0x0001079152e8();
      func_0x0001078f2518();
      if ((int)puVar6 != 0) goto LAB_1078f2158;
      lVar13 = lVar11;
    } while (in_stack_00000020 != unaff_x22 || iStack0000000000000050 != (int)param_4);
  }
LAB_1078f229c:
  *(undefined4 *)(lVar13 + 200) = 3;
  uVar10 = in_stack_00000010 - in_stack_00000008;
  lVar16 = in_stack_00000008;
  if (0x30 < uVar10) {
    while (in_stack_00000008 = lVar16, 0x40 < uVar10) {
      iVar5 = (int)puVar6;
      func_0x000107916d1c();
      if (iVar5 == 0) break;
      func_0x0001078f42d8(&stack0x00000008,lVar16);
      func_0x000107916a3c(in_stack_00000008);
      func_0x0001078f3294(&stack0x00000008,extraout_x8_00 + -1);
      puVar6 = &stack0x00000008;
      func_0x0001078e96d4(puVar6,in_stack_00000008);
      lVar16 = in_stack_00000008;
      uVar10 = in_stack_00000010 - in_stack_00000008;
    }
    uVar10 = param_5[1];
    if (uVar10 < (ulong)param_5[2]) {
      func_0x0001078f4328(uVar10,&stack0x00000008);
      lVar16 = uVar10 + 0x18;
      param_5[1] = lVar16;
    }
    else {
      plVar12 = param_5;
      func_0x0001078f43dc(param_5,(long)(uVar10 - *param_5) / 0x18 + 1);
      func_0x0001078f44c4(&stack0x00000020,plVar12,(param_5[1] - *param_5) / 0x18,param_5 + 2);
      func_0x0001078f4328(in_stack_00000030,&stack0x00000008);
      FUN_1078f4408(param_5,&stack0x00000020);
      lVar16 = param_5[1];
      func_0x0001078f4588(&stack0x00000020);
    }
    lVar13 = 0;
    param_5[1] = lVar16;
    puVar14 = *(undefined1 **)(unaff_x20 + 0x50);
    puVar8 = *(ulong **)(unaff_x20 + 0x10);
    uVar15 = *puVar8;
    for (uVar10 = uVar15; uVar3 = puVar8[1] <= uVar10, uVar10 != puVar8[1]; uVar10 = uVar10 + 0x1b0)
    {
      lVar9 = 2;
      uVar4 = 0;
      lVar16 = lVar13;
      lVar11 = lVar13;
      do {
        lVar1 = uVar15 + lVar16;
        func_0x000107915f64(*(undefined4 *)(lVar1 + 200));
        if (!(bool)uVar3 || (bool)uVar4) {
          in_stack_00000020 = *(long *)(lVar1 + 0x30);
          puVar7 = puVar14;
          func_0x0001078f45c8(puVar14,&stack0x00000020);
          *puVar7 = 1;
          uVar3 = 3 < *(uint *)(lVar1 + 0x28);
          uVar4 = *(uint *)(lVar1 + 0x28) == 4;
          if ((bool)uVar4) {
            lVar2 = uVar15 + lVar11;
            in_stack_00000060 = *(undefined8 *)(lVar2 + 0xf8);
            in_stack_00000058 = *(undefined8 *)(lVar2 + 0xf0);
            _iStack0000000000000050 = *(undefined8 *)(lVar2 + 0xe8);
            puVar7 = puVar14;
            func_0x0001078f45c8(puVar14,&stack0x00000050);
            *puVar7 = 1;
          }
          func_0x000107915f64(*(undefined4 *)(lVar1 + 200));
          if (!(bool)uVar3 || (bool)uVar4) {
            *(undefined1 *)(uVar15 + lVar16 + 0xcd) = 1;
          }
        }
        lVar11 = lVar11 + -0xb8;
        lVar16 = lVar16 + 0xb8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      puVar8 = *(ulong **)(unaff_x20 + 0x10);
      lVar13 = lVar13 + 0x1b0;
    }
    *param_6 = *param_6 + 1;
  }
LAB_1078f2478:
  func_0x0001079170f8();
  return;
}



/* Entry: 1078f3550; end: 1078f356f;  */

undefined1  [16] FUN_1078f3550(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107914090();
  func_0x0001078f0acc();
  return auStack_20;
}



/* Entry: 1078f40d8; end: 1078f41df;  */

void FUN_1078f40d8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *extraout_x8;
  int unaff_w22;
  int iVar4;
  int iVar5;
  int unaff_w23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = SBORROW8(param_5,2);
  cVar2 = param_5 + -2 < 0;
  if (1 < param_5) {
    func_0x000107918960();
    func_0x0001079168a0();
    if (cVar2 == cVar1) {
      func_0x00010791416c();
      func_0x000107917798();
      if (cVar2 == cVar1) {
        func_0x000107915de8();
        unaff_x27 = unaff_x26;
        iVar4 = unaff_w22;
      }
      else {
        func_0x000107915de8();
        func_0x0001079138a8();
        func_0x0001079177b0();
        func_0x0001078f3c30();
        iVar4 = unaff_w22 + 0x70;
        if ((int)param_3 == 0) {
          unaff_x27 = unaff_x26;
          iVar4 = unaff_w22;
        }
      }
      func_0x0001079138a8();
      func_0x000107915320();
      func_0x0001078f3c30();
      if ((param_3 & 1) == 0) {
        func_0x000107914498();
        do {
          func_0x000107913ce4();
          cVar1 = SBORROW8(unaff_x25,unaff_x27);
          cVar2 = unaff_x25 - unaff_x27 < 0;
          if (unaff_x25 < unaff_x27) break;
          func_0x0001079165bc();
          if (cVar2 == cVar1) {
            uVar7 = *extraout_x8;
            uVar6 = extraout_x8[1];
            unaff_x27 = unaff_x28;
            iVar5 = iVar4;
          }
          else {
            uVar7 = *extraout_x8;
            uVar6 = extraout_x8[1];
            func_0x000107914c6c();
            func_0x000107916580();
            func_0x000107915320();
            func_0x0001078f3c30();
            iVar5 = iVar4 + 0x70;
            if (unaff_w23 == 0) {
              unaff_x27 = unaff_x28;
              iVar5 = iVar4;
            }
          }
          func_0x000107914c6c();
          iVar3 = iVar5;
          func_0x0001078f3c30(param_1,param_2,uVar7,uVar6);
          unaff_w23 = iVar4;
          iVar4 = iVar5;
        } while (iVar3 == 0);
        func_0x0001079146b0();
      }
    }
    func_0x00010791893c(unaff_x30);
  }
  return;
}



/* Entry: 1078f4408; end: 1078f44b7;  */

void FUN_1078f4408(long *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  long extraout_x10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x000107917aac();
  func_0x000107914c78();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  func_0x0001079174dc(*(undefined8 *)(param_2 + 8));
  lVar5 = extraout_x8 + extraout_x9 * extraout_x10;
  lVar2 = lVar5;
  lVar3 = lVar4;
  while (lVar3 != lVar1) {
    func_0x0001079161c4(lVar2);
    func_0x0001079138d4();
    lVar2 = extraout_x8_00 + 0x18;
    lVar3 = extraout_x9_00 + 0x18;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x00010791667c();
  }
  func_0x0001078f453c();
  *(long *)(unaff_x19 + 8) = lVar5;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010791351c();
  return;
}



/* Entry: 1078f47f8; end: 1078f484b;  */

double FUN_1078f47f8(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0x3f < (ulong)((long)param_2 - (long)param_1)) {
    while (pdVar1 = param_1 + 2, pdVar1 != param_2) {
      dVar2 = dVar2 + (param_1[1] - param_1[3]) * (*param_1 + *pdVar1);
      param_1 = pdVar1;
    }
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}



/* Entry: 1078f4bdc; end: 1078f4c13;  */

/* WARNING: Possible PIC construction at 0x0001078f4c04: Changing call to branch */

double FUN_1078f4bdc(double param_1,double *param_2,double *param_3)

{
  double *extraout_x8;
  double *pdVar1;
  double dVar2;
  
  if (param_3 < (double *)0xaaaaaaaaaaaaaab) {
    func_0x00010791756c();
    return param_1;
  }
  func_0x000107913ad0();
  func_0x000107914b0c();
  if (extraout_x8 <= param_2) {
    func_0x000104bd35f4();
    dVar2 = 0.0;
    if (0x3f < (ulong)((long)param_3 - (long)param_2)) {
      while (pdVar1 = param_2 + 2, pdVar1 != param_3) {
        dVar2 = dVar2 + (param_2[1] - param_2[3]) * (*param_2 + *pdVar1);
        param_2 = pdVar1;
      }
      dVar2 = dVar2 * 0.5;
    }
    return dVar2;
  }
  func_0x000107915538();
  return param_1;
}



/* Entry: 1078f4de4; end: 1078f4ea7;  */

void FUN_1078f4de4(double param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_f0 [112];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  func_0x00010791551c();
  func_0x0001079144cc();
  dStack_80 = param_1 * 0.5;
  uStack_78 = param_2[1];
  uStack_60 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = uStack_78;
  dStack_50 = dStack_80;
  uStack_48 = uStack_68;
  func_0x000107913364();
  func_0x00010791463c(&uStack_60,&dStack_80);
  func_0x0001078f50b8();
  func_0x000107915ec8();
  if (!(bool)in_ZR) {
    func_0x000107913d34();
    func_0x000107916258();
    func_0x0001078f523c();
    func_0x0001079183e8();
    func_0x000107915350();
    func_0x000107914d88();
    func_0x0001078f5110();
    func_0x0001079149c4(auStack_f0);
    func_0x0001078f5208();
    func_0x000107915350();
    func_0x000107913cc4();
    func_0x0001078f5208();
  }
  func_0x000107918208();
  func_0x000107914d88();
  func_0x0001078f5110();
  func_0x000107918854();
  func_0x000107914d88();
  func_0x0001078f5110();
  func_0x000107915b60();
  func_0x0001079159d0();
  func_0x000107915b7c();
  return;
}



/* Entry: 1078f5268; end: 1078f52bb;  */

void FUN_1078f5268(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001078f4ea8();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078f57c8; end: 1078f57e7;  */

void FUN_1078f57c8(void)

{
  func_0x000107913928();
  func_0x0001078f523c();
  func_0x000107917014();
  return;
}



/* Entry: 1078f5b84; end: 1078f5ba7;  */

void FUN_1078f5b84(void)

{
  func_0x000107914c90();
  func_0x0001078f47a4();
  return;
}



/* Entry: 1078f5f44; end: 1078f5f6f;  */

void FUN_1078f5f44(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (param_2 < 0x555555555555556) {
    func_0x0001079175a0();
    return;
  }
  func_0x0001078f5fc8();
  func_0x000107914c78();
  func_0x000107916150();
  lVar2 = extraout_x9;
  while (lVar2 != unaff_x21) {
    func_0x0001079161c4();
    func_0x0001079138d4();
    func_0x000107915d84();
    lVar2 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x30) {
    func_0x0001078e6404();
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x22;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x22;
  unaff_x20[1] = uVar1;
  func_0x00010791351c();
  return;
}



/* Entry: 1078f629c; end: 1078f638b;  */

void FUN_1078f629c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000050;
  long in_stack_00000058;
  
  func_0x000107917aac();
  func_0x000107914d64();
  func_0x000107918644();
  uVar1 = extraout_x10 / 0x30;
  uVar2 = param_2 - uVar1;
  if (param_2 < uVar1 || uVar2 == 0) {
    if (param_2 < uVar1) {
      func_0x000107914c78();
      lVar4 = *(long *)(unaff_x19 + 8);
      while (lVar4 != in_stack_00000058) {
        lVar4 = lVar4 + -0x30;
        func_0x0001078e6404();
      }
      *(long *)(in_stack_00000050 + 8) = in_stack_00000058;
      return;
    }
  }
  else if ((ulong)((*(long *)(unaff_x19 + 0x10) - (long)extraout_x8) / 0x30) < uVar2) {
    func_0x000107914d7c();
    FUN_1078f5f44();
    func_0x0001079172ec();
    func_0x000107917d94();
    func_0x000107918728();
    puVar3 = extraout_x8_00;
    for (lVar4 = extraout_x10_00; lVar4 != 0; lVar4 = lVar4 + -0x30) {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 6;
    }
    func_0x000107915724();
    func_0x0001078f5f70();
    func_0x000107917da0();
  }
  else {
    puVar3 = extraout_x8;
    for (lVar4 = unaff_x20 * 0x30 + uVar1 * -0x30; lVar4 != 0; lVar4 = lVar4 + -0x30) {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 6;
    }
    *(undefined8 **)(unaff_x19 + 8) = extraout_x8 + uVar2 * 6;
  }
  return;
}



/* Entry: 1078f65ec; end: 1078f663f;  */

void FUN_1078f65ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107913d34();
  param_5[1] = in_register_00005008;
  *param_5 = param_1;
  param_5[3] = in_register_00005028;
  param_5[2] = param_2;
  if (param_3 != param_4) {
    func_0x00010791434c();
    for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
      func_0x0001004d77a8();
      func_0x0001078e9c18();
    }
  }
  return;
}



/* Entry: 1078f91b8; end: 1078f920b;  */

void FUN_1078f91b8(long *param_1)

{
  long unaff_x21;
  long lVar1;
  
  func_0x000107913cd4();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x78) {
    func_0x0001078eb308();
    func_0x00010791535c();
    func_0x0001078eb39c();
  }
  return;
}



/* Entry: 1078f96cc; end: 1078f96f7;  */

void FUN_1078f96cc(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078fa864; end: 1078faa17;  */

void FUN_1078fa864(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar5;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  
  func_0x000107916c08();
  func_0x000107914424();
  func_0x0001079149ec(extraout_x8 * 2 + -1);
  if (!(bool)in_ZR) goto LAB_1078fa97c;
  bVar1 = 0xf < extraout_x8_00;
  uVar2 = extraout_x8_00 - 0x10 == 0;
  if (bVar1) {
    func_0x0001079150b8();
  }
  else {
    func_0x000107914998(extraout_x8_00 - 0x10);
    if (bVar1) {
      func_0x000107914980();
      func_0x0001078faac0();
      func_0x000107914554();
      __Znwm(0x1780);
      func_0x0001079179c0();
      uVar3 = 0;
      uVar5 = unaff_x22;
      if ((bool)uVar2) {
        uVar3 = unaff_x28 == unaff_x27;
        if ((bool)uVar3) {
          func_0x000107918610();
          func_0x0001078faac0(1);
          func_0x00010791451c();
          func_0x0001078faa9c();
          func_0x0001079140f0();
          func_0x0001078fab0c();
          func_0x000107915010();
          uVar5 = unaff_x23;
        }
        else {
          func_0x0001079140b0();
        }
      }
      func_0x000107914958();
      while (func_0x000107918764(), !(bool)uVar3) {
        if (unaff_x22 == unaff_x21) {
          uVar3 = uVar5 == unaff_x26;
          if (uVar5 < unaff_x26) {
            func_0x000107914584();
            uVar5 = uVar5 + extraout_x8_01 * 8;
            if (!(bool)uVar3) {
              func_0x00010791548c();
            }
          }
          else {
            uVar3 = unaff_x26 - unaff_x21 == 0;
            lVar4 = (long)(unaff_x26 - unaff_x21) >> 2;
            if ((bool)uVar3) {
              lVar4 = 1;
            }
            func_0x0001078faac0(lVar4);
            func_0x0001079139dc(lVar4 * 2 + 6);
            func_0x000107915f88();
            func_0x0001078faa9c();
            func_0x000107914920();
            func_0x0001078fab0c();
            func_0x000107916300();
          }
        }
        else {
          uVar3 = 0;
        }
        func_0x0001079163f0();
      }
      func_0x0001079140d0();
      func_0x0001078faae8();
      func_0x0001078fab0c(&stack0x00000028);
      goto LAB_1078fa97c;
    }
    __Znwm(0x1780);
    func_0x0001079186f4();
    if (!(bool)uVar2) {
      func_0x000107918770();
      goto LAB_1078fa97c;
    }
    if (unaff_x27 == unaff_x23) {
      func_0x000107914538();
      func_0x0001078faac0();
      func_0x0001079139dc(unaff_x19 + 6);
      func_0x0001079186dc();
      func_0x0001078faa9c();
      func_0x000107914740();
      func_0x0001078fab0c();
    }
    func_0x000107915178();
  }
  func_0x0001078faa2c();
LAB_1078fa97c:
  func_0x0001078faa18();
  func_0x000107917b5c();
  func_0x0001079163d8();
  return;
}



/* Entry: 1078facc0; end: 1078facdf;  */

undefined4 FUN_1078facc0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 extraout_w8;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x0001078fa82c();
  func_0x000107914868();
  dVar5 = (double)param_1;
  dVar6 = (double)param_2;
  dVar7 = (double)param_3;
  func_0x000107917da8();
  cVar4 = NAN(dVar5);
  uVar3 = dVar5 == 0.0;
  cVar2 = dVar5 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar5 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar6 < dVar7) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078fb028; end: 1078fb08b;  */

void FUN_1078fb028(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  param_1[1] = 0x7ff8000000000000;
  *param_1 = 0x7ff8000000000000;
  param_1[3] = 0x8000000000000000;
  param_1[2] = 0x8000000000000000;
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078fb540; end: 1078fb9c7;  */

/* WARNING: Possible PIC construction at 0x0001078fb598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb5d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fb5a4) */
/* WARNING: Removing unreachable block (ram,0x0001078fb59c) */
/* WARNING: Removing unreachable block (ram,0x0001078fb5c0) */
/* WARNING: Removing unreachable block (ram,0x0001078fb5d8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb5e8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6b8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6d8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6e8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6c8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6cc) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6d4) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6f8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb704) */
/* WARNING: Removing unreachable block (ram,0x0001078fb708) */
/* WARNING: Removing unreachable block (ram,0x0001078fb710) */
/* WARNING: Removing unreachable block (ram,0x0001078fb754) */
/* WARNING: Removing unreachable block (ram,0x0001078fb714) */
/* WARNING: Removing unreachable block (ram,0x0001078fb734) */
/* WARNING: Removing unreachable block (ram,0x0001078fb744) */
/* WARNING: Removing unreachable block (ram,0x0001078fb75c) */
/* WARNING: Removing unreachable block (ram,0x0001078fb768) */
/* WARNING: Removing unreachable block (ram,0x0001078fb774) */
/* WARNING: Removing unreachable block (ram,0x0001078fb5e0) */
/* WARNING: Removing unreachable block (ram,0x0001078fb5f8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb600) */
/* WARNING: Removing unreachable block (ram,0x0001078fb608) */
/* WARNING: Removing unreachable block (ram,0x0001078fb624) */
/* WARNING: Removing unreachable block (ram,0x0001078fb628) */
/* WARNING: Removing unreachable block (ram,0x0001078fb63c) */
/* WARNING: Removing unreachable block (ram,0x0001078fb630) */
/* WARNING: Removing unreachable block (ram,0x0001078fb638) */
/* WARNING: Removing unreachable block (ram,0x0001078fb618) */
/* WARNING: Removing unreachable block (ram,0x0001078fb620) */
/* WARNING: Removing unreachable block (ram,0x0001078fb640) */
/* WARNING: Removing unreachable block (ram,0x0001078fb648) */
/* WARNING: Removing unreachable block (ram,0x0001078fb678) */
/* WARNING: Removing unreachable block (ram,0x0001078fb684) */
/* WARNING: Removing unreachable block (ram,0x0001078fb688) */
/* WARNING: Removing unreachable block (ram,0x0001078fb690) */
/* WARNING: Removing unreachable block (ram,0x0001078fb784) */
/* WARNING: Removing unreachable block (ram,0x0001078fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6a4) */
/* WARNING: Removing unreachable block (ram,0x0001078fb6a8) */
/* WARNING: Removing unreachable block (ram,0x0001078fb650) */
/* WARNING: Removing unreachable block (ram,0x0001078fb654) */
/* WARNING: Removing unreachable block (ram,0x0001078fb664) */
/* WARNING: Removing unreachable block (ram,0x0001078fb674) */

void FUN_1078fb540(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 uVar7;
  long extraout_x10;
  undefined8 extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  ulong extraout_x12_00;
  long extraout_x14;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x26;
  undefined8 *puVar10;
  undefined8 unaff_x30;
  undefined *puVar11;
  undefined8 in_register_00005008;
  undefined8 uVar12;
  
  func_0x0001079171b0();
  func_0x000107913e28();
  func_0x000107913ca4();
  func_0x000107917624();
  func_0x000107916210();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078fb7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8f8)[unaff_x26] * 4 + 0x1078fb7a8))();
    return;
  }
  if ((long)extraout_x8_00 < 0x240) {
    bVar3 = unaff_x20 == unaff_x19;
    if ((param_5 & 1) == 0) {
      lVar5 = unaff_x20;
      if (!bVar3) {
        while( true ) {
          unaff_x20 = unaff_x20 + 0x18;
          bVar3 = true;
          if (lVar5 + 0x18 == unaff_x19) break;
          lVar8 = *(long *)(lVar5 + 0x28);
          lVar9 = *(long *)(lVar5 + 0x10);
          cVar1 = SBORROW8(lVar8,lVar9);
          cVar2 = lVar8 - lVar9 < 0;
          uVar4 = lVar8 == lVar9;
          lVar5 = lVar5 + 0x18;
          if (lVar9 < lVar8) {
            func_0x0001079160f4(unaff_x20);
            do {
              func_0x000107916b2c();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x00010791627c();
            lVar5 = extraout_x9_03;
            unaff_x20 = extraout_x8_02;
          }
        }
      }
    }
    else if (!bVar3) {
      lVar5 = 0;
      while( true ) {
        lVar8 = unaff_x20 + 0x18;
        bVar3 = true;
        if (lVar8 == unaff_x19) break;
        if (*(long *)(unaff_x20 + 0x10) < *(long *)(unaff_x20 + 0x28)) {
          func_0x0001079160f4(lVar5);
          do {
            func_0x000107917a20();
            if (extraout_x11 == 0) break;
          } while (*(long *)(extraout_x12 + -8) < extraout_x10);
          func_0x00010791627c();
          lVar5 = extraout_x8_01;
          lVar8 = extraout_x9;
        }
        lVar5 = lVar5 + 0x18;
        unaff_x20 = lVar8;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      puVar10 = (undefined8 *)(unaff_x20 + (unaff_x26 >> 1) * 0x18);
      if (extraout_x8_00 < 0xc01) {
        func_0x000107915378();
        puVar11 = (undefined *)0x1078fb5d8;
      }
      else {
        func_0x000107914c3c();
        puVar11 = (undefined *)0x1078fb59c;
        puVar10 = param_2;
      }
      goto code_r0x0001078fb9c8;
    }
    bVar3 = unaff_x20 == unaff_x19;
    if (!bVar3) {
      func_0x0001079181fc();
      lVar5 = 0;
      do {
        func_0x000107914c3c();
        func_0x0001078fbc44();
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      for (; bVar3 = unaff_x26 == 2, 1 < (long)unaff_x26; unaff_x26 = unaff_x26 - 1) {
        func_0x0001079169b0();
        do {
          func_0x0001079161b0();
          cVar2 = SBORROW8(extraout_x12_00,unaff_x26);
          lVar5 = extraout_x12_00 - unaff_x26;
          bVar3 = extraout_x12_00 == unaff_x26;
          if ((long)extraout_x12_00 < (long)unaff_x26) {
            lVar8 = *(long *)(extraout_x14 + 0x28);
            lVar9 = *(long *)(extraout_x14 + 0x40);
            cVar2 = SBORROW8(lVar8,lVar9);
            lVar5 = lVar8 - lVar9;
            bVar3 = lVar8 == lVar9;
          }
          cVar1 = lVar5 < 0;
          func_0x000107916f70();
        } while (bVar3 || cVar1 != cVar2);
        unaff_x19 = unaff_x19 + -0x18;
        cVar1 = SBORROW8(extraout_x9_00,unaff_x19);
        cVar2 = extraout_x9_00 - unaff_x19 < 0;
        uVar4 = extraout_x9_00 == unaff_x19;
        if ((bool)uVar4) {
          func_0x00010791511c();
        }
        else {
          func_0x000107915bd4();
          if ((cVar2 == cVar1) && (func_0x000107916b4c(), !(bool)uVar4 && cVar2 == cVar1)) {
            in_register_00005008 = extraout_x9_01[1];
            param_1 = *extraout_x9_01;
            do {
              func_0x0001079172c0();
              if (extraout_x11_00 == 0) break;
              func_0x0001079179d8();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x0001079176b4();
            *(undefined8 *)(extraout_x9_02 + 0x10) = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000107913564(extraout_x8);
  if (bVar3) {
    func_0x000107915868(unaff_x30);
    return;
  }
  puVar11 = &SUB_1078fb9c8;
  ___stack_chk_fail();
  puVar10 = param_2;
code_r0x0001078fb9c8:
  lVar5 = *(long *)(param_3 + 0x10);
  if ((long)puVar10[2] < lVar5) {
    if (lVar5 < (long)param_4[2]) {
      uVar6 = puVar10[2];
      in_register_00005008 = puVar10[1];
      param_1 = *puVar10;
      uVar7 = param_4[2];
      uVar12 = *param_4;
      puVar10[1] = param_4[1];
      *puVar10 = uVar12;
      puVar10[2] = uVar7;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(puVar11);
      uVar6 = extraout_x8_04;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar6;
  }
  else if (lVar5 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_03;
    if ((long)puVar10[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078fbdc0; end: 1078fbdcb;  */

/* WARNING: Possible PIC construction at 0x0001078fbf30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fbf34) */

void FUN_1078fbdc0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined *puVar7;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 *in_stack_000000b0;
  undefined *in_stack_000000b8;
  
  puVar7 = &UNK_1078fbdcc;
  func_0x000107913ad0();
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x0001078fbdcc:
  func_0x000107916658();
  in_stack_000000b0 = puVar5;
  in_stack_000000b8 = puVar7;
  func_0x0001079141cc();
code_r0x0001078fbde8:
  func_0x0001079157c0();
code_r0x0001078fbdec:
  while( true ) {
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078fc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1078fc00c + (ulong)*(byte *)((long)unaff_x27 + 0x10dedb904) * 4))();
      return;
    }
    uVar1 = 0x3be < extraout_x8;
    uVar4 = extraout_x8 == 0x3bf;
    if ((long)extraout_x8 < 0x3c0) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 == unaff_x24) {
          return;
        }
        while (puVar5 = unaff_x21, unaff_x21 = puVar5 + 5, unaff_x21 != unaff_x24) {
          func_0x000107914d7c();
          func_0x0001079162e8();
          if (param_3 != 0) {
            func_0x000107915604();
            do {
              puVar6 = puVar5;
              func_0x000107914890();
              func_0x0001078fc210();
              puVar5 = puVar6 + -5;
            } while ((param_3 & 1) != 0);
            func_0x000107915108();
            puVar6[9] = extraout_x8_01;
            puVar6[6] = in_register_00005008;
            puVar6[5] = param_1;
            puVar6[8] = in_register_00005028;
            puVar6[7] = param_2;
          }
        }
        return;
      }
      puVar5 = unaff_x21;
      if (unaff_x21 == unaff_x24) {
        return;
      }
      goto code_r0x0001078fc0a0;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) {
        return;
      }
      func_0x0001079161d0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        FUN_1078fc6d0();
      }
      while( true ) {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)((long)unaff_x27 - 2U) < 0;
        uVar4 = unaff_x27 == (undefined8 *)0x2;
        if ((long)unaff_x27 < 2) break;
        func_0x0001079148d4();
        do {
          func_0x00010791419c();
          if (cVar3 != cVar2) {
            func_0x00010791535c();
            func_0x0001078fc210();
            cVar3 = (int)param_3 < 0;
            uVar4 = param_3 == 0;
            cVar2 = '\0';
          }
          func_0x000107914b7c();
        } while ((bool)uVar4 || cVar3 != cVar2);
        func_0x0001079174ec();
        if ((bool)uVar4) {
          func_0x000107915b08();
          func_0x00010791526c();
        }
        else {
          func_0x0001079143bc();
          if (cVar3 == cVar2) {
            func_0x000107914b9c();
            func_0x0001078fc210();
            if (param_3 != 0) {
              func_0x000107915308();
              func_0x000107915344();
              do {
                func_0x00010791561c();
                func_0x00010791526c();
                func_0x000107918584();
                func_0x000107914d7c();
                func_0x0001078fc210();
              } while ((param_3 & 1) != 0);
              func_0x000107914058();
            }
          }
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 - 1);
      }
      return;
    }
    func_0x0001079163b0();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x0001078fc3d8();
      func_0x0001079157a8();
      func_0x0001078fc3d8();
      func_0x00010791639c();
      func_0x0001078fc3d8();
      func_0x000107915808();
      func_0x0001078fc3d8();
      func_0x00010791407c();
      in_register_00005008 = unaff_x20[1];
      param_1 = *unaff_x20;
      in_register_00005028 = unaff_x20[3];
      param_2 = unaff_x20[2];
      func_0x000107914454(unaff_x20[4]);
      func_0x0001079158c0();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078fc3d8();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) != 0) break;
    func_0x000107915b84();
    func_0x0001078fc210();
    if ((param_3 & 1) != 0) break;
    func_0x000107914484();
    func_0x00010791741c();
    func_0x0001078fc210();
    puVar5 = unaff_x21;
    if ((param_3 & 1) == 0) {
      do {
        func_0x000107917870(puVar5 + 5);
        if ((bool)uVar1) break;
        func_0x000107914668();
        func_0x0001078fc210();
        puVar5 = unaff_x27;
      } while (param_3 == 0);
    }
    else {
      do {
        func_0x000107914508();
        func_0x0001078fc210();
        unaff_x27 = unaff_x21;
      } while ((param_3 & 1) == 0);
    }
    func_0x000107917738();
    if (!(bool)uVar1) {
      do {
        func_0x0001079144e0();
        func_0x0001078fc210();
        unaff_x26 = unaff_x24;
      } while ((param_3 & 1) != 0);
    }
    while (unaff_x27 < unaff_x26) {
      func_0x0001079144f4();
      func_0x000107917744();
      unaff_x27[4] = extraout_x8_00;
      unaff_x27[1] = in_register_00005008;
      *unaff_x27 = param_1;
      unaff_x27[3] = in_register_00005028;
      unaff_x27[2] = param_2;
      func_0x000107914058();
      do {
        func_0x000107914508();
        func_0x0001078fc210();
      } while (param_3 == 0);
      do {
        func_0x0001079144e0();
        func_0x0001078fc210();
      } while ((param_3 & 1) != 0);
    }
    in_CY = unaff_x27 + -5 <= unaff_x21;
    in_ZR = unaff_x21 == unaff_x27 + -5;
    if (!(bool)in_ZR) {
      func_0x0001079160a0();
    }
    unaff_x26 = (undefined8 *)0x0;
    func_0x0001079150e0();
  }
  unaff_x27 = (undefined8 *)0x0;
  func_0x000107914484();
  do {
    unaff_x27 = unaff_x27 + 5;
    func_0x000107915664();
    func_0x0001078fc210();
  } while ((param_3 & 1) != 0);
  func_0x0001079174fc();
  if ((bool)uVar4) {
    do {
      unaff_x20 = unaff_x24;
      if (unaff_x24 < (undefined8 *)0x29) break;
      func_0x000107914440();
      func_0x0001078fc210();
    } while ((param_3 & 1) == 0);
  }
  else {
    do {
      func_0x000107914440();
      func_0x0001078fc210();
    } while (param_3 == 0);
  }
  func_0x0001079178ac();
  while (unaff_x27 < unaff_x28) {
    func_0x00010791424c();
    do {
      unaff_x27 = unaff_x27 + 5;
      func_0x000107915664();
      func_0x0001078fc210();
    } while ((param_3 & 1) != 0);
    do {
      unaff_x28 = unaff_x28 + -5;
      func_0x000107915664();
      func_0x0001078fc210();
    } while ((param_3 & 1) == 0);
  }
  unaff_x28 = unaff_x27 + -5;
  if (unaff_x21 != unaff_x28) {
    func_0x000107916544();
    func_0x0001079156d8();
  }
  func_0x0001079150cc();
  in_CY = unaff_x20 < (undefined8 *)0x29;
  in_ZR = unaff_x20 == (undefined8 *)0x28;
  if ((bool)in_CY) {
    func_0x0001079145cc();
    func_0x0001078fc504();
    func_0x00010791487c();
    func_0x0001078fc504();
    if (param_3 != 0) goto code_r0x0001078fbfe8;
    if (((ulong)unaff_x20 & 1) != 0) goto code_r0x0001078fbdec;
  }
  func_0x0001079141b4();
  puVar7 = &UNK_1078fbf34;
  puVar5 = &stack0x000000b0;
  goto code_r0x0001078fbdcc;
code_r0x0001078fc0a0:
  do {
    puVar5 = puVar5 + 5;
    if (puVar5 == unaff_x24) {
      return;
    }
    func_0x00010791535c();
    func_0x0001078fc210();
  } while (param_3 == 0);
  func_0x000107915670();
  do {
    func_0x000107914728((long)unaff_x21 + unaff_x23);
    if (unaff_x23 == 0) break;
    func_0x00010791608c();
    func_0x0001078fc210();
  } while ((param_3 & 1) != 0);
  func_0x0001079150f4();
  goto code_r0x0001078fc0a0;
code_r0x0001078fbfe8:
  unaff_x24 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) {
    return;
  }
  goto code_r0x0001078fbde8;
}



/* Entry: 1078fc6d0; end: 1078fc783;  */

void FUN_1078fc6d0(ulong param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 unaff_x30;
  
  cVar1 = SBORROW8(param_3,2);
  cVar2 = param_3 + -2 < 0;
  if (1 < param_3) {
    func_0x000107915994();
    func_0x000107914b1c();
    if (cVar2 == cVar1) {
      func_0x00010791416c();
      func_0x0001079163c4();
      if (cVar2 != cVar1) {
        func_0x0001079152e8();
        func_0x0001078fc210();
        cVar2 = (int)param_1 < 0;
        cVar1 = '\0';
      }
      func_0x000107914f88();
      func_0x0001078fc210();
      if ((param_1 & 1) == 0) {
        func_0x000107915750();
        do {
          func_0x000107914f08();
          if (cVar2 != cVar1) break;
          func_0x000107914eec();
          if (cVar2 != cVar1) {
            func_0x000107914f88();
            func_0x0001078fc210();
            cVar2 = (int)param_1 < 0;
            cVar1 = '\0';
          }
          func_0x0001079152e8();
          func_0x0001078fc210();
        } while ((int)param_1 == 0);
        func_0x000107915f50();
      }
    }
    func_0x0001079154c8(unaff_x30);
  }
  return;
}



/* Entry: 1078fcc0c; end: 1078fcc67;  */

bool FUN_1078fcc0c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + ((ulong)(param_5 + param_2) >> 4) * 8) +
          (param_5 + param_2 & 0xfU) * 0x178;
  if ((*(int *)(lVar1 + 0x28) == 2) && (*(int *)(lVar1 + 0xd0) == 2)) {
    if (*(long *)(lVar1 + 0xb8) != param_3 || *(long *)(lVar1 + 0x160) != param_4) {
      return *(long *)(lVar1 + 0x160) == param_3 && *(long *)(lVar1 + 0xb8) == param_4;
    }
    return true;
  }
  return false;
}



/* Entry: 1078fe348; end: 1078fe353;  */

undefined8 FUN_1078fe348(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 1078fe674; end: 1078fe697;  */

void FUN_1078fe674(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078ff7cc; end: 1078ff82b;  */

undefined8 FUN_1078ff7cc(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
      func_0x000107915d6c();
      while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
        func_0x00010791460c();
        func_0x0001078fe9c0();
        if ((param_1 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* Entry: 1078ffd64; end: 1078ffddf;  */

void FUN_1078ffd64(void)

{
  bool bVar1;
  int extraout_w8;
  long unaff_x20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x0001079189a8();
  func_0x000107914b5c();
  func_0x000107915818();
  for (; bVar1 = unaff_x20 == 8, !bVar1; unaff_x20 = unaff_x20 + 4) {
    func_0x00010791784c();
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000018;
    if ((bVar1) || (uVar2 = in_stack_00000000, uVar3 = in_stack_00000008, extraout_w8 == 1)) {
      in_stack_00000020 = uVar2;
      in_stack_00000028 = uVar3;
      func_0x0001078ec2fc(&stack0x00000020);
      func_0x000107916268();
    }
    else {
      uVar2 = unaff_x24;
      if (unaff_x20 != 0) {
        uVar2 = unaff_x23;
      }
      func_0x000107915768(uVar2);
    }
  }
  return;
}



/* Entry: 1079001c0; end: 1079001ff;  */

void FUN_1079001c0(void)

{
  ___cxa_allocate_exception(0x38);
  func_0x000107900254();
  func_0x000107917f84();
  func_0x00010791649c();
  func_0x000107915574();
  func_0x0001079002bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10790036c; end: 1079003f7;  */

void FUN_10790036c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001079188f8(*(undefined8 *)(param_1 + 0x20));
  if (!(bool)in_ZR) {
    return;
  }
  return;
}



/* Entry: 107900758; end: 10790079f;  */

bool FUN_107900758(long *param_1,long *param_2)

{
  if ((*param_1 == *param_2) && (param_1[5] == param_2[5])) {
    if (param_2[5] != param_1[6]) {
      return param_1[7] == param_2[7];
    }
    return true;
  }
  return false;
}



/* Entry: 1079009f0; end: 107900a1f;  */

void FUN_1079009f0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000107914c78();
  func_0x0001078f4b88();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  func_0x00010791778c();
  return;
}



/* Entry: 107900e78; end: 107900ecb;  */

void FUN_107900e78(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x000107900b6c();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1079013d8; end: 1079013f7;  */

void FUN_1079013d8(void)

{
  func_0x000107913928();
  func_0x000107900e4c();
  func_0x000107917014();
  return;
}



/* Entry: 107901aa4; end: 107901f0b;  */

void FUN_107901aa4(long param_1,undefined8 param_2,long *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong uStack_1e8;
  uint uStack_1a4;
  double *pdStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int aiStack_128 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  byte bStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  
  lVar11 = param_1;
  func_0x0001078e923c();
  if ((int)lVar11 != 0) {
    lVar11 = *param_3;
    lVar12 = param_3[1];
    if (lVar11 != lVar12) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
        func_0x0001078e96d4(&uStack_140,lVar11);
      }
      func_0x0001078f4328(&pdStack_1a0,&uStack_140);
      dStack_168 = 0.0;
      dStack_160 = 0.0;
      uStack_158 = 0;
      uStack_150 = CONCAT11(param_5,param_4);
      pdVar2 = pdStack_1a0;
      func_0x0001078f4d90(pdStack_1a0,pdStack_198,&uStack_188);
      pdVar1 = pdStack_198;
      dStack_160 = dStack_168;
      uVar4 = (long)pdStack_198 - (long)pdStack_1a0;
      dVar19 = dStack_168;
      dVar18 = dStack_168;
      if (0x10 < uVar4 && pdStack_198 != pdStack_1a0) {
        uStack_1e8 = 0;
        uStack_1a4 = 0;
        pdVar8 = (double *)0x0;
        iVar5 = 0;
        lVar11 = 0;
        lVar12 = 0;
        uStack_120 = 0xffffffffffffffff;
        uStack_118 = 0xffffffffffffffff;
        uStack_110 = 0xffffffffffffffff;
        lStack_e8 = -1;
        lStack_e0 = -1;
        uStack_d8 = 0;
        lStack_d0 = 0;
        bStack_c8 = 0;
        lStack_c0 = -1;
        uStack_b8 = 0;
        dStack_100 = 1.79769313486232e+308;
        dStack_108 = 1.79769313486232e+308;
        dStack_f0 = -1.79769313486232e+308;
        dStack_f8 = -1.79769313486232e+308;
        aiStack_128[0] = 0;
        dVar19 = 1.79769313486232e+308;
        dVar20 = -1.79769313486232e+308;
        dVar21 = -1.79769313486232e+308;
        dVar18 = 1.79769313486232e+308;
        uVar10 = 1;
        dVar14 = *pdStack_1a0;
        dVar17 = pdStack_1a0[1];
        pdVar7 = pdStack_1a0;
        while (uVar13 = uStack_d8, pdVar9 = pdVar7 + 2, pdVar9 != pdVar1) {
          dVar16 = *pdVar9;
          dVar15 = pdVar7[3];
          iVar3 = -(uint)(dVar16 < dVar14);
          if (dVar14 < dVar16) {
            iVar3 = 1;
          }
          if (iVar3 == 0) {
            FUN_1078e65dc(dVar14,dVar16);
            if ((int)pdVar2 == 0) {
              iVar3 = 0;
              goto LAB_107901c44;
            }
            func_0x000107916d40(dVar17);
            iVar3 = -99;
            if (((ulong)pdVar2 & 1) == 0) {
              iVar3 = 0;
            }
            pdVar7 = pdVar2;
            if (uVar13 != 0) goto LAB_107901c4c;
LAB_107901c98:
            uStack_120 = 0;
            uStack_118 = 0xffffffffffffffff;
            uStack_110 = 0xffffffffffffffff;
            uVar6 = (uint)pdVar7;
            bStack_c8 = (byte)pdVar7 & 1;
            if (((uVar6 | uVar10 ^ 0xffffffff) & 1) == 0) {
              uVar10 = 0;
              uStack_b8 = CONCAT11(uStack_b8._1_1_,1);
            }
            dVar18 = dVar14;
            if (dVar16 < dVar14) {
              dVar18 = dVar16;
            }
            dVar21 = dVar14;
            if (dVar14 < dVar16) {
              dVar21 = dVar16;
            }
            dVar19 = dVar17;
            if (dVar15 < dVar17) {
              dVar19 = dVar15;
            }
            uVar13 = 0;
            pdVar8 = pdVar7;
            dVar20 = dVar17;
            iVar5 = iVar3;
            uStack_1a4 = uVar6;
            aiStack_128[0] = iVar3;
            dStack_108 = dVar18;
            dStack_100 = dVar19;
            dStack_f8 = dVar21;
            dStack_f0 = dVar17;
            lStack_e8 = lVar11;
            lStack_d0 = (long)uVar4 >> 4;
            lStack_c0 = lVar12;
          }
          else {
LAB_107901c44:
            pdVar7 = (double *)0x0;
            if (uVar13 == 0) goto LAB_107901c98;
LAB_107901c4c:
            uVar6 = (uint)pdVar7;
            if (10 < uVar13 || iVar3 != iVar5) {
              if (((ulong)pdVar8 & 1) == 0) {
                func_0x0001079162c0((long)dStack_160 - (long)dStack_168);
                uStack_1e8 = extraout_x8;
              }
              pdVar2 = &dStack_168;
              func_0x000107902710(pdVar2,aiStack_128);
              uStack_b8 = 0;
              goto LAB_107901c98;
            }
            if (dVar16 < dVar18) {
              dVar18 = dVar16;
              dStack_108 = dVar16;
            }
            if (dVar21 < dVar16) {
              dVar21 = dVar16;
              dStack_f8 = dVar16;
            }
            if (dVar15 < dVar19) {
              dVar19 = dVar15;
              dStack_100 = dVar15;
            }
          }
          if (dVar20 < dVar15) {
            dVar20 = dVar15;
            dStack_f0 = dVar15;
          }
          lVar11 = lVar11 + 1;
          uStack_d8 = uVar13 + 1;
          lVar12 = lVar12 + ((ulong)~uVar6 & 1);
          dVar14 = dVar16;
          dVar17 = dVar15;
          pdVar7 = pdVar9;
          lStack_e0 = lVar11;
        }
        if (uStack_d8 != 0) {
          if ((uStack_1a4 & 1) == 0) {
            uStack_1e8 = ((long)dStack_160 - (long)dStack_168) / 0x78;
          }
          func_0x000107902710(&dStack_168,aiStack_128);
        }
        dVar19 = dStack_160;
        dVar18 = dStack_168;
        func_0x0001079162c0((long)dStack_160 - (long)dStack_168);
        if ((uStack_1e8 < extraout_x8_00) &&
           (lVar11 = (long)dVar18 + uStack_1e8 * 0x78, (*(byte *)(lVar11 + 0x60) & 1) == 0)) {
          *(undefined1 *)(lVar11 + 0x71) = 1;
        }
      }
      for (; dVar18 != dVar19; dVar18 = (double)((long)dVar18 + 0x78)) {
        func_0x0001078e9c64((long)dVar18 + 0x20);
      }
      lVar12 = *(long *)(param_1 + 0x60);
      func_0x0001078f5cb8(lVar12 + -0x58);
      *(double **)(lVar12 + -0x50) = pdStack_198;
      *(double **)(lVar12 + -0x58) = pdStack_1a0;
      *(undefined8 *)(lVar12 + -0x48) = uStack_190;
      pdStack_198 = (double *)0x0;
      uStack_190 = 0;
      pdStack_1a0 = (double *)0x0;
      *(undefined8 *)(lVar12 + -0x38) = uStack_180;
      *(undefined8 *)(lVar12 + -0x40) = uStack_188;
      *(undefined8 *)(lVar12 + -0x28) = uStack_170;
      *(undefined8 *)(lVar12 + -0x30) = uStack_178;
      lVar11 = *(long *)(lVar12 + -0x20);
      if (lVar11 != 0) {
        *(long *)(lVar12 + -0x18) = lVar11;
        __ZdlPv();
        *(long *)(lVar12 + -0x20) = 0;
        *(undefined8 *)(lVar12 + -0x18) = 0;
        *(undefined8 *)(lVar12 + -0x10) = 0;
      }
      *(double *)(lVar12 + -0x18) = dStack_160;
      *(double *)(lVar12 + -0x20) = dStack_168;
      *(undefined8 *)(lVar12 + -0x10) = uStack_158;
      dStack_168 = 0.0;
      dStack_160 = 0.0;
      uStack_158 = 0;
      *(undefined2 *)(lVar12 + -8) = uStack_150;
      func_0x0001078e8d1c(&pdStack_1a0);
      func_0x0001078e64cc(&uStack_140);
    }
  }
  return;
}



/* Entry: 1079023a4; end: 10790240f;  */

void FUN_1079023a4(long *param_1)

{
  if ((ulong)(param_1[2] - *param_1) < 0x11) {
    func_0x0001078e97fc();
    func_0x000107915724();
    func_0x0001078e97b8();
    func_0x000107917d8c();
  }
  return;
}



/* Entry: 1079029d8; end: 107902baf;  */

void FUN_1079029d8(undefined8 param_1,double *param_2,long *param_3)

{
  double *pdVar1;
  double *pdVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  double *pdVar9;
  ulong extraout_x8;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  int *piVar11;
  double dVar12;
  int iStack_78;
  byte bStack_74;
  
  lVar8 = *param_3;
  lVar10 = param_3[1];
  if (((lVar8 != lVar10) && (*(char *)(param_2 + 0x34) == '\x01')) &&
     ((*(byte *)((long)param_2 + 0x1a3) & 1) == 0)) {
    func_0x0001079176a8();
    dVar12 = *param_2;
    iVar5 = (int)param_3 + 0x18;
    func_0x000107914c6c();
    func_0x0001078edf30();
    if (iVar5 != 0) {
      iStack_78 = 0;
      bStack_74 = 0;
      piVar11 = *(int **)(unaff_x19 + 0x38);
      piVar3 = *(int **)(unaff_x19 + 0x40);
      lVar4 = (long)piVar3 - (long)piVar11;
      if ((lVar4 == 0) || ((ulong)(lVar4 / -0x78 + (lVar10 - lVar8 >> 4)) < 0x10)) {
        func_0x000107902ffc(&iStack_78,param_2,lVar8,lVar10);
      }
      else {
        for (; piVar11 != piVar3; piVar11 = piVar11 + 0x1e) {
          if ((*(byte *)(piVar11 + 0x18) & 1) == 0) {
            if (((*(long *)(piVar11 + 0x10) < *(long *)(piVar11 + 0x12)) &&
                (*(double *)(piVar11 + 8) <= dVar12)) && (dVar12 <= *(double *)(piVar11 + 0xc))) {
              pdVar9 = (double *)(lVar8 + *(long *)(piVar11 + 0x10) * 0x10);
              iVar5 = *piVar11;
              pdVar2 = (double *)(lVar8 + 0x10 + *(long *)(piVar11 + 0x12) * 0x10);
              if (iVar5 == 0) {
                piVar7 = &iStack_78;
                func_0x000107902ffc(piVar7,param_2,pdVar9,pdVar2);
                if (((ulong)piVar7 & 1) == 0) break;
              }
              else {
                while (((pdVar1 = pdVar9 + 2, pdVar1 != pdVar2 && (*pdVar9 <= dVar12 || iVar5 != 1))
                       && (dVar12 <= *pdVar9 || iVar5 != -1))) {
                  func_0x000107914c6c();
                  uVar6 = extraout_x8;
                  func_0x0001078f48b8(extraout_x8,pdVar1);
                  pdVar9 = pdVar1;
                  if ((uVar6 & 1) == 0) goto LAB_107902a78;
                }
              }
            }
          }
        }
      }
LAB_107902a78:
      if (((bStack_74 & 1) != 0) || (iStack_78 != 0)) {
        lVar8 = *unaff_x20 + (long)param_2[0x33] * 0x1b0;
        if (bStack_74 != 0) {
          *(undefined1 *)(lVar8 + 0x1a0) = 0;
        }
        if (*(char *)(unaff_x19 + 0x50) == '\x01') {
          lVar10 = *(long *)(lVar8 + 0x1a8) + -1;
        }
        else if (*(char *)(unaff_x19 + 0x51) == '\x01') {
          lVar10 = *(long *)(lVar8 + 0x1a8) + 1;
        }
        else {
          lVar10 = 1;
          *(undefined1 *)(lVar8 + 0x1a3) = 1;
        }
        *(long *)(lVar8 + 0x1a8) = lVar10;
      }
    }
  }
  return;
}



/* Entry: 107902fd0; end: 107902fd7;  */

void FUN_107902fd0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  uVar3 = *param_1;
  uVar4 = 0;
  func_0x0001079143ec(uVar3,param_1[2]);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar3;
  uStack_88 = uVar6;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar3;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107902c2c();
  func_0x000107913794();
  func_0x000107902c98();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x000107902834;
      func_0x000107916ef0();
      func_0x000107913df4();
      func_0x000107902f98();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x000107902d04();
    }
    else {
code_r0x000107902834:
      func_0x000107913f30();
      func_0x000107902f14();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916ef0();
          func_0x000107915338();
          func_0x000107913880(&uStack_50);
          func_0x000107902d04();
          func_0x000107913894(&uStack_50);
          func_0x000107902d04();
          goto code_r0x0001079028bc;
        }
      }
    }
    func_0x000107913f20();
    func_0x000107902f14();
    func_0x000107913f10();
    func_0x000107902f14();
  }
code_r0x0001079028bc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
code_r0x00010790292c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107902934;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x000107902f14();
      func_0x000107913ec0();
      func_0x000107902f14();
      goto code_r0x00010790292c;
    }
    func_0x000107913d34();
    uStack_50 = uVar3;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    uStack_38 = uVar6;
    func_0x000107915510();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_140,&uStack_a8);
    func_0x000107902d04();
    func_0x000107913650();
    func_0x000107902d04();
code_r0x000107902934:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x000107902d04();
      goto code_r0x000107902958;
    }
  }
  func_0x000107914848();
  func_0x000107902f14();
code_r0x000107902958:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x000107902d04();
  }
  else {
    func_0x000107913eb0();
    func_0x000107902f14();
  }
  func_0x000107902fd8(auStack_120);
  func_0x000107916e90();
  func_0x000107916cd8();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 10790319c; end: 1079031eb;  */

void FUN_10790319c(long *param_1)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x20 + 8); lVar1 = lVar1 + 0x10) {
    func_0x000107915724();
    func_0x000107903230();
  }
  return;
}



/* Entry: 1079033b4; end: 10790355f;  */

/* WARNING: Possible PIC construction at 0x00010790343c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790353c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790355c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107903440) */
/* WARNING: Removing unreachable block (ram,0x000107903460) */
/* WARNING: Removing unreachable block (ram,0x000107903474) */
/* WARNING: Removing unreachable block (ram,0x0001079034a0) */
/* WARNING: Removing unreachable block (ram,0x000107903510) */
/* WARNING: Removing unreachable block (ram,0x000107903518) */
/* WARNING: Removing unreachable block (ram,0x000107903530) */
/* WARNING: Removing unreachable block (ram,0x000107903520) */
/* WARNING: Removing unreachable block (ram,0x0001079034a8) */
/* WARNING: Removing unreachable block (ram,0x000107903540) */
/* WARNING: Removing unreachable block (ram,0x000107903550) */

undefined1  [16] FUN_1079033b4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long *plVar4;
  long extraout_x10;
  long unaff_x20;
  long lVar5;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_stack_00000080;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107915994();
  lVar6 = *param_1;
  lVar5 = param_1[1];
  plVar3 = (long *)((lVar5 - lVar6) / 0x18);
  uVar1 = (long)param_2 - (long)plVar3;
  if (param_2 < plVar3 || uVar1 == 0) {
    if (param_2 < plVar3) {
      lVar6 = lVar6 + (long)param_2 * 0x18;
      plVar3 = param_1;
      func_0x0001079154c8(param_1,lVar6);
      func_0x000107914c78();
      plVar4 = (long *)plVar3[1];
      while (plVar4 != param_1) {
        plVar4 = plVar4 + -3;
        plVar3 = plVar4;
        func_0x000107903640(plVar4);
      }
      *(long **)(unaff_x20 + 8) = param_1;
      auVar11._8_8_ = lVar6;
      auVar11._0_8_ = plVar3;
      return auVar11;
    }
  }
  else {
    if ((ulong)((param_1[2] - lVar5) / 0x18) < uVar1) {
      plVar3 = param_2;
      if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
        uVar1 = (param_1[2] - lVar6) / 0x18;
        plVar4 = (long *)(uVar1 * 2);
        if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
          plVar4 = param_2;
        }
        if (0x555555555555554 < uVar1) {
          plVar4 = (long *)0xaaaaaaaaaaaaaaa;
        }
        puVar8 = (undefined *)0x107903440;
        ppuVar2 = (undefined8 **)register0x00000008;
        ppuVar7 = (undefined8 **)&stack0x00000080;
      }
      else {
        ppuVar2 = &puStack_10;
        ppuVar7 = &puStack_10;
        puStack_8 = &SUB_107903560;
        puVar8 = &SUB_10790356c;
        plVar4 = param_1;
        puStack_10 = &stack0x00000080;
        func_0x000107913ad0();
      }
      *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
      *(long **)((long)ppuVar2 + -0x18) = param_1;
      *(undefined8 ***)((long)ppuVar2 + -0x10) = ppuVar7;
      *(undefined **)((long)ppuVar2 + -8) = puVar8;
      func_0x000107914b0c();
      if (extraout_x8_00 <= plVar4) {
        func_0x000104bd35f4();
        *(long **)((long)ppuVar2 + -0x50) = param_2;
        *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_x21;
        *(long *)((long)ppuVar2 + -0x40) = unaff_x20;
        *(long **)((long)ppuVar2 + -0x38) = param_1;
        *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
        *(undefined **)((long)ppuVar2 + -0x28) = &SUB_107903598;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          lVar6 = *(long *)plVar4[1];
          lVar5 = *(long *)plVar4[2];
          while (lVar5 != lVar6) {
            lVar5 = lVar5 + -0x18;
            func_0x000107903640(lVar5);
          }
        }
        auVar9._8_8_ = plVar3;
        auVar9._0_8_ = plVar4;
        return auVar9;
      }
      func_0x000107915538();
      auVar12._8_8_ = param_1;
      auVar12._0_8_ = plVar4;
      return auVar12;
    }
    lVar6 = lVar5 + uVar1 * 0x18;
    plVar4 = param_1;
    if ((long)param_2 * 0x18 + (long)plVar3 * -0x18 != 0) {
      do {
        func_0x0001079161c4(lVar5);
        lVar5 = extraout_x8 + 0x18;
        lVar6 = extraout_x9;
      } while (extraout_x10 != 0x18);
    }
    param_1[1] = lVar6;
    param_1 = plVar4;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 107903738; end: 1079063f7;  */

void FUN_107903738(undefined8 param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
                  ulong *****param_5,long *param_6,ulong *****param_7,ulong ****param_8)

{
  uint *puVar1;
  ulong ***pppuVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  byte bVar14;
  uint extraout_w8;
  uint uVar15;
  undefined8 extraout_x8;
  ulong *****extraout_x8_00;
  ulong *****extraout_x8_01;
  long lVar16;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong ****extraout_x8_11;
  ulong extraout_x8_12;
  long extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  long lVar17;
  long extraout_x8_16;
  ulong ****extraout_x8_17;
  ulong extraout_x8_18;
  long extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong ****extraout_x8_22;
  ulong *****extraout_x8_23;
  ulong *****extraout_x8_24;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  int *piVar18;
  ulong extraout_x9_10;
  long extraout_x9_11;
  ulong extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  uint uVar19;
  ulong extraout_x10;
  ulong *****pppppuVar20;
  ulong uVar21;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong *****pppppuVar22;
  uint uVar23;
  long extraout_x11;
  ulong *****pppppuVar24;
  ulong extraout_x11_00;
  long extraout_x11_01;
  uint uVar25;
  long extraout_x12;
  long extraout_x13;
  uint *puVar26;
  long lVar27;
  ulong *****pppppuVar28;
  ulong *****pppppuVar29;
  ulong *****pppppuVar30;
  ulong *****pppppuVar31;
  long lVar32;
  ulong ****ppppuVar33;
  ulong *****pppppuVar34;
  ulong ****ppppuVar35;
  ulong *puVar36;
  ulong ****ppppuVar37;
  undefined8 uVar38;
  ulong uVar39;
  ulong *****pppppuVar40;
  ulong *****pppppuVar41;
  long lVar42;
  undefined8 *puVar43;
  ulong *****pppppuVar44;
  ulong *****pppppuVar45;
  ulong ***pppuVar46;
  undefined8 *puVar47;
  ulong uVar48;
  ulong ****ppppuVar49;
  double dVar50;
  ulong ****ppppuStack_320;
  ulong **ppuStack_290;
  ulong ****ppppuStack_278;
  ulong ***pppuStack_270;
  ulong uStack_268;
  ulong ****ppppuStack_260;
  ulong ****ppppuStack_258;
  ulong ****ppppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong ****ppppuStack_238;
  ulong ****ppppuStack_228;
  ulong ***pppuStack_220;
  undefined8 uStack_218;
  ulong ****ppppuStack_210;
  ulong ***pppuStack_208;
  long lStack_200;
  undefined1 uStack_1f1;
  ulong ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong ****ppppuStack_1c0;
  ulong ****ppppuStack_1b8;
  ulong ****ppppuStack_1b0;
  ulong ****ppppuStack_1a8;
  ulong ****ppppuStack_1a0;
  ulong ****ppppuStack_198;
  ulong ****ppppuStack_190;
  ulong ****ppppuStack_188;
  ulong ****ppppuStack_180;
  ulong ****ppppuStack_178;
  ulong ****ppppuStack_170;
  ulong ***pppuStack_168;
  ulong ****ppppuStack_160;
  ulong ****ppppuStack_158;
  undefined8 uStack_150;
  ulong ****ppppuStack_140;
  ulong ****ppppuStack_138;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_118;
  ulong ****ppppuStack_108;
  undefined8 uStack_100;
  ulong ****ppppuStack_f8;
  ulong ****ppppuStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ***pppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong ****ppppuStack_c0;
  ulong ***pppuStack_b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  ulong ***pppuStack_90;
  undefined8 uStack_88;
  
  func_0x000107917384();
  pppppuVar44 = param_3;
  func_0x000107913ca4();
  uStack_88 = extraout_x8;
  func_0x0001079064d4();
  ppppuVar37 = *param_4;
  ppppuVar33 = param_4[1];
  do {
    uVar9 = ppppuVar37 == ppppuVar33;
    if ((bool)uVar9) goto LAB_107906008;
    ppppuVar35 = ppppuVar37;
    func_0x0001079064d4();
    ppppuVar37 = ppppuVar37 + 6;
  } while (((ulong)ppppuVar35 & 1) != 0);
  if (((ulong)pppppuVar44 & 1) == 0) {
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    lStack_1d0 = 0;
    lStack_1e8 = 0;
    pppuStack_1f0 = (ulong ***)0x0;
    ppppuStack_260 = (ulong ****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    ppppuStack_250 = (ulong ****)0x0;
    ppppuStack_160 = (ulong ****)0x0;
    ppppuStack_158 = (ulong ****)0x0;
    uStack_150 = 0;
    func_0x000107906504(param_3,&ppppuStack_260);
    pppppuVar29 = &ppppuStack_160;
    func_0x000107906534(param_4,pppppuVar29,1);
    ppppuVar35 = ppppuStack_158;
    ppppuVar33 = ppppuStack_160;
    ppppuVar37 = ppppuStack_258;
    pppppuVar44 = (ulong *****)ppppuStack_260;
    uStack_100 = (ulong *****)((ulong)uStack_100._4_4_ << 0x20);
    ppppuStack_f0 = (ulong ****)CONCAT44(ppppuStack_f0._4_4_,1);
    pppuStack_d0 = (ulong ***)&pppuStack_1f0;
    ppppuStack_c8 = (ulong ****)&uStack_1f1;
    uVar39 = ((long)ppppuStack_258 - (long)ppppuStack_260) / 0x68;
    bVar7 = 0xf < uVar39;
    ppppuStack_f8 = (ulong ****)param_3;
    ppppuStack_e8 = (ulong ****)param_4;
    ppppuStack_e0 = (ulong ****)param_7;
    ppppuStack_d8 = (ulong ****)param_5;
    if ((uVar39 < 0x11) ||
       (func_0x00010791603c((long)ppppuStack_158 - (long)ppppuStack_160), !bVar7)) {
      for (; pppppuVar34 = (ulong *****)ppppuVar33, pppppuVar44 != (ulong *****)ppppuVar37;
          pppppuVar44 = pppppuVar44 + 0xd) {
        for (; pppppuVar34 != (ulong *****)ppppuVar35; pppppuVar34 = pppppuVar34 + 0xd) {
          pppppuVar29 = pppppuVar44;
          func_0x000107906c0c(&uStack_100,pppppuVar44,pppppuVar34);
        }
      }
    }
    else {
      func_0x000107916984();
      func_0x000107915654();
      pppuStack_208 = (ulong ***)0x8000000080000000;
      ppppuStack_210 = (ulong ****)0x7fffffff7fffffff;
      func_0x000107906a10(&ppppuStack_260,&ppppuStack_210,&ppppuStack_1c0);
      func_0x000107906a10(&ppppuStack_160,&ppppuStack_210,&ppppuStack_140);
      pppppuVar29 = &ppppuStack_1c0;
      func_0x000107906a60(&ppppuStack_210,pppppuVar29,&ppppuStack_140,0,&uStack_100);
      func_0x000107907404(&ppppuStack_140);
      func_0x000107916748();
    }
    func_0x0001079092e8(&ppppuStack_160);
    pppppuVar34 = &ppppuStack_260;
    func_0x0001079092e8();
    if (uStack_1c8 != 0) {
      uVar9 = param_3[3] <= param_3[4];
      if (param_3[4] != param_3[3]) {
        func_0x000107915654();
        pppppuVar29 = &ppppuStack_140;
        func_0x000107906504(param_3);
        uStack_100 = param_3;
        ppppuStack_f8 = (ulong ****)param_7;
        func_0x0001079176c0();
        ppppuVar37 = ppppuStack_138;
        pppppuVar34 = (ulong *****)ppppuStack_140;
        ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffff0000000000);
        func_0x00010791603c((long)ppppuStack_138 - (long)ppppuStack_140);
        if ((bool)uVar9) {
          func_0x000107916984();
          ppppuStack_258 = (ulong ****)0x8000000080000000;
          ppppuStack_260 = (ulong ****)0x7fffffff7fffffff;
          func_0x000107916d50();
          func_0x00010791740c(&ppppuStack_260);
          FUN_10790930c();
          func_0x000107916748();
        }
        else {
          while (pppppuVar34 != (ulong *****)ppppuVar37) {
            pppppuVar34 = pppppuVar34 + 0xd;
            for (pppppuVar41 = pppppuVar34; pppppuVar44 = pppppuVar34,
                pppppuVar41 != (ulong *****)ppppuVar37; pppppuVar41 = pppppuVar41 + 0xd) {
              func_0x000107915d60(&uStack_100);
              func_0x0001079093a0();
            }
          }
        }
        pppppuVar34 = &ppppuStack_140;
        func_0x0001079092e8();
      }
      ppppuVar37 = *param_4;
      uVar39 = ((long)param_4[1] - (long)ppppuVar37) / 0x30;
      uVar9 = uVar39 != 0;
      if ((1 < uVar39) ||
         (((long)param_4[1] - (long)ppppuVar37 == 0x30 &&
          (uVar9 = ppppuVar37[3] <= ppppuVar37[4], ppppuVar37[4] != ppppuVar37[3])))) {
        func_0x000107915654();
        pppppuVar29 = &ppppuStack_140;
        func_0x000107906534(param_4,pppppuVar29,0);
        uStack_100 = param_4;
        ppppuStack_f8 = (ulong ****)param_7;
        func_0x0001079176c0();
        ppppuVar37 = ppppuStack_138;
        ppppuStack_d8 = (ulong ****)CONCAT35(ppppuStack_d8._5_3_,1);
        func_0x00010791603c((long)ppppuStack_138 - (long)ppppuStack_140);
        if ((bool)uVar9) {
          func_0x000107916984();
          ppppuStack_258 = (ulong ****)0x8000000080000000;
          ppppuStack_260 = (ulong ****)0x7fffffff7fffffff;
          func_0x000107916d50();
          func_0x00010791740c(&ppppuStack_260);
          func_0x000107909bf0();
          func_0x000107916748();
        }
        else {
          while (ppppuStack_140 != ppppuVar37) {
            ppppuStack_140 = ppppuStack_140 + 0xd;
            for (pppppuVar34 = (ulong *****)ppppuStack_140;
                pppppuVar44 = (ulong *****)ppppuStack_140, pppppuVar34 != (ulong *****)ppppuVar37;
                pppppuVar34 = pppppuVar34 + 0xd) {
              func_0x000107915d60(&uStack_100);
              func_0x000107909c84();
            }
          }
        }
        pppppuVar34 = &ppppuStack_140;
        func_0x0001079092e8();
      }
    }
    pppuStack_208 = (ulong ***)0x0;
    lStack_200 = 0;
    uStack_218 = 0;
    pppuStack_220 = (ulong ***)0x0;
    ppppuStack_f8 = (ulong ****)0x0;
    ppppuStack_f0 = (ulong ****)0x0;
    ppppuStack_140 = (ulong ****)0x0;
    ppppuStack_228 = &pppuStack_220;
    ppppuStack_210 = &pppuStack_208;
    uStack_100 = &ppppuStack_f8;
    func_0x000107915ab4();
    func_0x000107918044();
    func_0x000107915abc();
    ppppuStack_320 = (ulong ****)pppppuVar34;
    pppppuVar41 = param_4;
    while (pppppuVar41 != pppppuVar34) {
      if (*(uint *)(pppppuVar41 + 1) == 7) {
        for (lVar32 = 0x30; lVar32 != 0x170; lVar32 = lVar32 + 0xa0) {
          ppppuStack_1b8 = (ulong ****)((undefined8 *)((long)pppppuVar41 + lVar32))[1];
          ppppuStack_1c0 = *(ulong *****)((long)pppppuVar41 + lVar32);
          ppppuStack_320 = (ulong ****)&uStack_100;
          func_0x0001078eefe8(ppppuStack_320,&ppppuStack_1c0);
          pppppuVar29 = &ppppuStack_140;
          func_0x00010737fce0();
        }
      }
      func_0x0001079161a0();
      pppppuVar41 = pppppuVar41 + 0x2c;
      ppppuStack_140 = (ulong ****)extraout_x8_00;
      if ((long)pppppuVar41 - (long)*pppppuVar44 == 0x1600) {
        pppppuVar44 = pppppuVar44 + 1;
        pppppuVar41 = (ulong *****)*pppppuVar44;
      }
    }
    func_0x000107915ab4();
    pppppuVar34 = (ulong *****)ppppuStack_320;
    pppppuVar44 = pppppuVar29;
    func_0x000107915abc();
    while (pppppuVar29 != pppppuVar34) {
      if (*(uint *)(pppppuVar29 + 1) != 2 && *(uint *)(pppppuVar29 + 1) != 7) {
        for (lVar32 = 0x20; lVar32 != 0x160; lVar32 = lVar32 + 0xa0) {
          pppppuVar44 = *(ulong ******)((long)pppppuVar29 + lVar32 + 0x10);
          pppppuVar24 = (ulong *****)&uStack_100;
          func_0x0001078ef0b4(pppppuVar24,pppppuVar44,
                              *(undefined8 *)((long)pppppuVar29 + lVar32 + 0x18));
          if (&ppppuStack_f8 != pppppuVar24) {
            ppppuVar33 = pppppuVar24[7];
            for (ppppuVar37 = pppppuVar24[6]; ppppuVar37 != ppppuVar33; ppppuVar37 = ppppuVar37 + 1)
            {
              pppppuVar41 = (ulong *****)0x0;
              func_0x0001079184a4(*ppppuVar37);
              lVar16 = extraout_x9 + (extraout_x10 & 0xffffffff) * 0x160;
              for (lVar12 = extraout_x11; lVar12 != 2; lVar12 = lVar12 + 1) {
                pppppuVar45 = pppppuVar29 + lVar12 * 0x14 + 4;
                ppppuVar35 = pppppuVar45[2];
                ppppuVar49 = pppppuVar45[3];
                lVar42 = 2;
                pppppuVar24 = (ulong *****)(lVar16 + 0x28);
                pppppuVar40 = (ulong *****)(lVar16 + 200);
                do {
                  if (ppppuVar49 == pppppuVar24[2] && ppppuVar35 == pppppuVar24[1]) {
                    iVar11 = (int)pppppuVar45 + 8;
                    pppppuVar44 = pppppuVar24;
                    func_0x000107917fc8();
                    if (iVar11 != 0) {
                      pppppuVar20 = pppppuVar29 + lVar12 * -0x14 + 0x19;
                      pppppuVar44 = pppppuVar40;
                      func_0x000107917fc8();
                      pppppuVar41 = (ulong *****)
                                    ((long)pppppuVar41 + ((ulong)pppppuVar20 & 0xffffffff));
                    }
                  }
                  pppppuVar40 = pppppuVar40 + -0x14;
                  pppppuVar24 = pppppuVar24 + 0x14;
                  lVar42 = lVar42 + -1;
                } while (lVar42 != 0);
              }
              if (pppppuVar41 == (ulong *****)0x2) {
                *(undefined1 *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 0x160 + 0x18) = 1;
              }
            }
          }
        }
      }
      func_0x0001079161a0();
      ppppuStack_140 = (ulong ****)extraout_x8_01;
      pppppuVar29 = pppppuVar29 + 0x2c;
      if ((long)pppppuVar29 - (long)*ppppuStack_320 == 0x1600) {
        ppppuStack_320 = ppppuStack_320 + 1;
        pppppuVar29 = (ulong *****)*ppppuStack_320;
      }
    }
    pppppuVar45 = (ulong *****)ppppuStack_f8;
    func_0x0001078ef198();
    func_0x000107915654();
    func_0x000107915ab4();
    pppppuVar40 = pppppuVar45;
    pppppuVar29 = pppppuVar44;
    func_0x000107915abc();
    pppppuVar24 = (ulong *****)0x0;
    pppppuVar34 = (ulong *****)0x0;
    pppppuVar20 = (ulong *****)0x0;
    ppppuVar37 = (ulong ****)0x0;
    do {
      pppppuVar28 = pppppuVar44 + -0x2c0;
      pppppuVar22 = pppppuVar20;
      do {
        pppppuVar20 = (ulong *****)ppppuStack_140;
        if (pppppuVar44 == pppppuVar40) {
          if ((ulong *****)ppppuStack_140 != pppppuVar34) {
            func_0x00010791752c((long)pppppuVar34 - (long)ppppuStack_140 >> 4);
            pppppuVar29 = pppppuVar34;
            func_0x00010790a5a4(pppppuVar20);
          }
          pppppuVar24 = (ulong *****)0x0;
          ppppuStack_260 = (ulong ****)0x0;
          ppppuStack_258 = (ulong ****)0x0;
          ppppuStack_250 = (ulong ****)0x0;
          pppppuVar44 = &ppppuStack_1b8;
          goto LAB_107903e2c;
        }
        pppppuVar20 = pppppuVar22;
        if (((ulong)pppppuVar44[3] & 1) == 0) {
          ppppuVar33 = *pppppuVar44;
          if (pppppuVar34 < pppppuVar24) {
            *pppppuVar34 = ppppuVar37;
            pppppuVar34[1] = ppppuVar33;
          }
          else {
            lVar32 = (long)pppppuVar34 - (long)pppppuVar22;
            uVar39 = (lVar32 >> 4) + 1;
            if (uVar39 >> 0x3c != 0) {
              func_0x00010790a598();
              goto LAB_1079061e0;
            }
            uVar21 = (long)pppppuVar24 - (long)pppppuVar22 >> 3;
            if (uVar21 <= uVar39) {
              uVar21 = uVar39;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppppuVar24 - (long)pppppuVar22)) {
              uVar21 = 0xfffffffffffffff;
            }
            if (uVar21 >> 0x3c != 0) {
              func_0x000104bd35f4();
              goto LAB_1079061e0;
            }
            lVar12 = uVar21 << 4;
            __Znwm();
            pppppuVar34 = (ulong *****)(lVar12 + lVar32);
            pppppuVar24 = (ulong *****)(lVar12 + uVar21 * 0x10);
            *pppppuVar34 = ppppuVar37;
            pppppuVar34[1] = ppppuVar33;
            pppppuVar20 = pppppuVar34 + (lVar32 >> 4) * -2;
            pppppuVar29 = pppppuVar22;
            _memcpy(pppppuVar20,pppppuVar22,lVar32);
            ppppuStack_140 = (ulong ****)pppppuVar20;
            ppppuStack_130 = (ulong ****)pppppuVar24;
            pppppuVar41 = pppppuVar24;
            if (pppppuVar22 != (ulong *****)0x0) {
              __ZdlPv(pppppuVar22);
            }
          }
          pppppuVar34 = pppppuVar34 + 2;
          ppppuStack_138 = (ulong ****)pppppuVar34;
        }
        ppppuVar37 = (ulong ****)((long)ppppuVar37 + 1);
        pppppuVar44 = pppppuVar44 + 0x2c;
        pppppuVar28 = pppppuVar28 + 0x2c;
        pppppuVar22 = pppppuVar20;
      } while ((ulong *****)*pppppuVar45 != pppppuVar28);
      pppppuVar45 = pppppuVar45 + 1;
      pppppuVar44 = (ulong *****)*pppppuVar45;
    } while( true );
  }
LAB_107906008:
  func_0x000107913564(uStack_88);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1079061dc:
  func_0x000107911800();
LAB_1079061e0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1079061e4);
  (*pcVar6)();
LAB_107903e2c:
  ppppuVar37 = ppppuStack_258;
  pppppuVar40 = (ulong *****)ppppuStack_258;
  pppppuVar45 = pppppuVar20;
  if (pppppuVar20 == pppppuVar34) goto LAB_107904014;
  while( true ) {
    pppppuVar28 = pppppuVar45 + 2;
    if (pppppuVar28 == pppppuVar34) break;
    uVar15 = *(uint *)((long)pppppuVar20 + 0xc);
    puVar1 = (uint *)((long)pppppuVar45 + 0x1c);
    if ((int)*puVar1 < (int)uVar15) break;
    pppppuVar22 = pppppuVar45 + 3;
    pppppuVar45 = pppppuVar28;
    if (uVar15 == *puVar1 && *(uint *)(pppppuVar20 + 1) == *(uint *)pppppuVar22) {
      pppppuVar41 = (ulong *****)0x0;
      for (pppppuVar29 = pppppuVar24; pppppuVar29 != pppppuVar40; pppppuVar29 = pppppuVar29 + 5) {
        if (*(uint *)(pppppuVar29 + 4) == *(uint *)(pppppuVar20 + 1) &&
            *(uint *)((long)pppppuVar29 + 0x24) == uVar15) goto LAB_107903fd4;
        pppppuVar41 = (ulong *****)((long)pppppuVar41 + 1);
      }
      ppppuStack_1b8 = (ulong ****)0x0;
      ppppuStack_1b0 = (ulong ****)0x0;
      ppppuStack_1a8 = (ulong ****)0x0;
      ppppuStack_1c0 = (ulong ****)pppppuVar44;
      func_0x0001078efe34(&uStack_100,&ppppuStack_1c0);
      ppppuStack_e0 = pppppuVar20[1];
      pppppuVar41 = (ulong *****)(((long)pppppuVar40 - (long)pppppuVar24) / 0x28);
      if (pppppuVar40 < ppppuStack_250) {
        func_0x00010790af4c(pppppuVar40,&uStack_100);
        pppppuVar24 = (ulong *****)ppppuStack_260;
        pppppuVar31 = pppppuVar40;
      }
      else {
        uVar39 = (long)pppppuVar41 + 1;
        if (0x666666666666666 < uVar39) {
          ppppuStack_258 = (ulong ****)pppppuVar40;
          func_0x00010790af70();
          goto LAB_1079061e0;
        }
        uVar48 = ((long)ppppuStack_250 - (long)pppppuVar24) / 0x28;
        uVar21 = uVar48 * 2;
        if (uVar21 < uVar39 || uVar21 - uVar39 == 0) {
          uVar21 = uVar39;
        }
        if (0x333333333333332 < uVar48) {
          uVar21 = 0x666666666666666;
        }
        if (uVar21 == 0) {
          lVar32 = 0;
        }
        else {
          if (0x666666666666666 < uVar21) {
            ppppuStack_258 = (ulong ****)pppppuVar40;
            func_0x000104bd35f4();
            goto LAB_1079061e0;
          }
          lVar32 = uVar21 * 0x28;
          __Znwm();
        }
        pppppuVar31 = (ulong *****)(lVar32 + ((long)pppppuVar40 - (long)pppppuVar24));
        func_0x00010790af4c(pppppuVar31,&uStack_100);
        pppppuVar30 = (ulong *****)ppppuStack_260;
        pppppuVar24 = pppppuVar31 + (((long)pppppuVar40 - (long)ppppuStack_260) / -0x28) * 5;
        pppppuVar22 = pppppuVar24;
        for (pppppuVar29 = (ulong *****)ppppuStack_260; pppppuVar29 != pppppuVar40;
            pppppuVar29 = pppppuVar29 + 5) {
          func_0x00010790af4c(pppppuVar22,pppppuVar29);
          pppppuVar22 = pppppuVar22 + 5;
        }
        for (; pppppuVar30 != pppppuVar40; pppppuVar30 = pppppuVar30 + 5) {
          func_0x0001078f005c(pppppuVar30);
        }
        ppppuStack_250 = (ulong ****)(lVar32 + uVar21 * 0x28);
        bVar7 = (ulong *****)ppppuStack_260 != (ulong *****)0x0;
        ppppuStack_260 = (ulong ****)pppppuVar24;
        if (bVar7) {
          __ZdlPv();
        }
      }
      pppppuVar40 = pppppuVar31 + 5;
      func_0x000107915ca0();
      func_0x0001078f005c(&ppppuStack_1c0);
LAB_107903fd4:
      uStack_100 = (ulong *****)*pppppuVar20;
      func_0x0001078ef1d0(pppppuVar24 + (long)pppppuVar41 * 5,&uStack_100);
      pppppuVar24 = (ulong *****)ppppuStack_260;
      uStack_100 = (ulong *****)*pppppuVar28;
      pppppuVar29 = (ulong *****)&uStack_100;
      func_0x0001078ef1d0(ppppuStack_260 + (long)pppppuVar41 * 5);
    }
  }
  pppppuVar20 = pppppuVar20 + 2;
  ppppuStack_258 = (ulong ****)pppppuVar40;
  goto LAB_107903e2c;
LAB_107904014:
  pppppuVar34 = (ulong *****)0x1;
  for (; pppppuVar24 != (ulong *****)ppppuVar37; pppppuVar24 = pppppuVar24 + 5) {
    uStack_100 = pppppuVar34;
    func_0x0001078ef1d8(&ppppuStack_210,&uStack_100);
    pppppuVar29 = pppppuVar24;
    FUN_1078ef25c();
    pppppuVar34 = (ulong *****)((long)pppppuVar34 + 1);
  }
  func_0x00010790af7c(&ppppuStack_260);
  pppppuVar34 = &ppppuStack_140;
  func_0x00010790afbc();
  lVar32 = lStack_200;
  if (lStack_200 != 0) {
    func_0x000107915ab4();
    pppppuVar44 = pppppuVar34;
    pppppuVar24 = pppppuVar29;
    func_0x000107915abc();
    pppppuVar45 = pppppuVar34;
    do {
      pppppuVar40 = pppppuVar29 + -0x2c0;
      pppppuVar20 = pppppuVar29;
      do {
        uVar9 = 1;
        pppppuVar34 = pppppuVar44;
        pppppuVar29 = pppppuVar24;
        pppppuVar28 = (ulong *****)ppppuStack_210;
        if (pppppuVar20 == pppppuVar44) goto LAB_1079040ac;
        pppppuVar20[2] = (ulong ****)0xffffffffffffffff;
        pppppuVar40 = pppppuVar40 + 0x2c;
        pppppuVar20 = pppppuVar20 + 0x2c;
      } while ((ulong *****)*pppppuVar45 != pppppuVar40);
      pppppuVar45 = pppppuVar45 + 1;
      pppppuVar29 = (ulong *****)*pppppuVar45;
    } while( true );
  }
  goto LAB_107904300;
LAB_1079040ac:
  while (func_0x000107918464(), pppppuVar44 = (ulong *****)ppppuStack_210, !(bool)uVar9) {
    pppppuVar34 = (ulong *****)pppppuVar28[5];
    while (uVar9 = pppppuVar34 == pppppuVar28 + 6, !(bool)uVar9) {
      func_0x00010791879c(pppppuVar28[4]);
      *(undefined8 *)(extraout_x10_00 + (extraout_x9_00 & 0xffffffff) * 0x160 + 0x10) =
           extraout_x8_02;
      func_0x00010002c7d4();
    }
    func_0x000107915114();
    pppppuVar28 = pppppuVar34;
  }
  while (func_0x000107918464(), !(bool)uVar9) {
    pppppuVar34 = (ulong *****)pppppuVar44[5];
    while( true ) {
      uVar9 = true;
      if (pppppuVar34 == pppppuVar44 + 6) goto LAB_107904168;
      func_0x0001079135f0(pppppuVar34[4]);
      lVar12 = extraout_x9_01 + (extraout_x8_03 & 0xffffffff) * 0x160;
      if ((*(int *)(lVar12 + 0x20) == 2) && (*(int *)(lVar12 + 0xc0) == 2)) break;
      func_0x00010002c7d4();
    }
    pppppuVar34 = (ulong *****)pppppuVar44[5];
    while (uVar9 = pppppuVar34 == pppppuVar44 + 6, !(bool)uVar9) {
      func_0x0001079135f0(pppppuVar34[4]);
      *(undefined1 *)(extraout_x9_02 + (extraout_x8_04 & 0xffffffff) * 0x160 + 0x19) = 1;
      func_0x00010002c7d4();
    }
LAB_107904168:
    func_0x000107915114();
    pppppuVar44 = pppppuVar34;
  }
  ppppuStack_f8 = (ulong ****)0x0;
  ppppuStack_f0 = (ulong ****)0x0;
  pppppuVar24 = (ulong *****)ppppuStack_210;
  uStack_100 = &ppppuStack_f8;
  while (pppppuVar24 != (ulong *****)&pppuStack_208) {
    pppppuVar34 = (ulong *****)&uStack_100;
    pppppuVar29 = (ulong *****)ppppuStack_f8;
    func_0x0001078f0080();
    pppppuVar44 = pppppuVar24 + 5;
    pppppuVar45 = (ulong *****)*pppppuVar44;
    ppppuStack_f8 = (ulong ****)0x0;
    ppppuStack_f0 = (ulong ****)0x0;
    uStack_100 = &ppppuStack_f8;
    while (pppppuVar40 = uStack_100, pppppuVar45 != pppppuVar24 + 6) {
      func_0x0001079135f0(pppppuVar45[4]);
      lVar12 = extraout_x9_03 + (extraout_x8_05 & 0xffffffff) * 0x160;
      if ((*(int *)(lVar12 + 0x20) == 1) && (*(int *)(lVar12 + 0xc0) == 1)) {
LAB_107904200:
        pppppuVar34 = (ulong *****)*pppppuVar44;
        while (pppppuVar34 != pppppuVar24 + 6) {
          ppppuVar37 = pppppuVar34[4];
          if (pppppuVar45[4] != ppppuVar37) {
            func_0x000107914a5c(lStack_1d0 + (long)ppppuVar37);
            lVar42 = extraout_x9_04 + (extraout_x8_06 & 0xffffffff) * 0x160;
            pppppuVar41 = *(ulong ******)(lVar42 + 0x38);
            uVar38 = *(undefined8 *)(lVar42 + 0xd0);
            lVar16 = lVar12 + 0x28;
            func_0x00010790b018(lVar16,lVar12 + 200,*(undefined8 *)(lVar42 + 0x30),pppppuVar41,
                                uVar38,*(undefined8 *)(lVar42 + 0xd8));
            if ((int)lVar16 != 0) {
              func_0x00010790b064(lVar42,&uStack_100,ppppuVar37);
              uVar38 = *(undefined8 *)(lVar42 + 0xd0);
              pppppuVar41 = *(ulong ******)(lVar42 + 0x38);
            }
            lVar16 = lVar12 + 200;
            pppppuVar29 = (ulong *****)(lVar12 + 0x28);
            func_0x000107914aa0(lVar16,pppppuVar29,uVar38);
            iVar11 = (int)lVar16;
            func_0x00010790b018();
            if (iVar11 != 0) {
              pppppuVar29 = (ulong *****)&uStack_100;
              func_0x00010790b064(lVar42,pppppuVar29,pppppuVar34[4]);
            }
          }
          func_0x00010002c7d4();
        }
      }
      else {
        pppppuVar29 = (ulong *****)0x1;
        lVar16 = lVar12;
        func_0x00010790afe0(lVar12,1,3);
        if ((int)lVar16 != 0) goto LAB_107904200;
      }
      func_0x00010002c7d4();
      pppppuVar34 = pppppuVar45;
    }
    while (pppppuVar40 != &ppppuStack_f8) {
      pppppuVar29 = pppppuVar40 + 4;
      pppppuVar34 = pppppuVar44;
      func_0x0001078f1ffc();
      func_0x000107915240();
      pppppuVar40 = pppppuVar34;
    }
    func_0x000107914fec();
    pppppuVar24 = pppppuVar34;
  }
  func_0x000107915ca0();
LAB_107904300:
  func_0x000107915ab4();
  func_0x000107918044();
  bVar7 = false;
  pppppuVar24 = (ulong *****)0xffffffffffffffff;
  do {
    pppppuVar45 = pppppuVar41 + -0x2c0;
    do {
      func_0x000107915abc();
      if (pppppuVar41 == pppppuVar34) {
        uVar9 = 1;
        pppppuVar44 = (ulong *****)ppppuStack_210;
        goto LAB_1079043f8;
      }
      uVar15 = *(uint *)(pppppuVar41 + 4);
      if (uVar15 == 3) {
        if (*(uint *)(pppppuVar41 + 0x18) != 3) goto LAB_107904368;
LAB_1079043c4:
        *(undefined1 *)(pppppuVar41 + 3) = 1;
        pppppuVar41[2] = (ulong ****)0xffffffffffffffff;
      }
      else {
        if (uVar15 == 1) {
          if (*(uint *)(pppppuVar41 + 0x18) != 1) goto LAB_107904368;
          goto LAB_1079043c4;
        }
        if ((uVar15 == 0) && (*(uint *)(pppppuVar41 + 0x18) == 0)) goto LAB_1079043c4;
LAB_107904368:
        if ((pppppuVar41[5] == pppppuVar41[0x19]) && ((long)pppppuVar41[2] < 1)) {
          if ((uVar15 != 2) || (*(uint *)(pppppuVar41 + 0x18) != 2)) goto LAB_1079043c4;
        }
        else if ((uVar15 == 4) && (((ulong)pppppuVar41[3] & 1) == 0)) {
          bVar7 = (bool)(*(uint *)(pppppuVar41 + 0x18) == 4 | bVar7);
        }
      }
      pppppuVar45 = pppppuVar45 + 0x2c;
      pppppuVar41 = pppppuVar41 + 0x2c;
    } while ((ulong *****)*pppppuVar44 != pppppuVar45);
    pppppuVar44 = pppppuVar44 + 1;
    pppppuVar41 = (ulong *****)*pppppuVar44;
  } while( true );
LAB_1079043f8:
  func_0x000107918464();
  if ((bool)uVar9) {
    func_0x000107915ab4();
    func_0x000107917618();
    do {
      pppppuVar41 = pppppuVar24 + -0x2c0;
      do {
        func_0x000107915abc();
        if (pppppuVar24 == pppppuVar34) {
          ppppuStack_1b8 = (ulong ****)0x0;
          ppppuStack_1b0 = (ulong ****)0x0;
          ppppuVar37 = &pppuStack_1f0;
          ppppuStack_1c0 = (ulong ****)&ppppuStack_1b8;
          FUN_10790b2b8();
          ppuStack_290 = (ulong **)0x0;
          pppppuVar44 = pppppuVar29;
          goto LAB_107904540;
        }
        if (((((ulong)pppppuVar24[3] & 1) == 0) && (pppppuVar24[5] == pppppuVar24[0x19])) &&
           (pppppuVar34 = pppppuVar24, pppppuVar29 = param_3,
           func_0x00010790b0a0(pppppuVar24,param_3,*param_4,param_4[1]),
           ((ulong)pppppuVar34 & 1) == 0)) {
          *(undefined1 *)(pppppuVar24 + 0x10) = 0;
          *(undefined1 *)(pppppuVar24 + 0x24) = 0;
        }
        pppppuVar24 = pppppuVar24 + 0x2c;
        pppppuVar41 = pppppuVar41 + 0x2c;
      } while ((ulong *****)*pppppuVar44 != pppppuVar41);
      pppppuVar44 = pppppuVar44 + 1;
      pppppuVar24 = (ulong *****)*pppppuVar44;
    } while( true );
  }
  uVar9 = 0;
  if (pppppuVar44[7] != (ulong ****)0x0) {
    pppppuVar29 = (ulong *****)pppppuVar44[4];
    pppppuVar34 = &ppppuStack_210;
    func_0x0001078f2064();
    uVar9 = (ulong *****)&pppuStack_208 == pppppuVar34;
    if (!(bool)uVar9) {
      func_0x000107918820();
      while (uVar9 = pppppuVar34 == (ulong *****)(extraout_x8_07 + 0x30), !(bool)uVar9) {
        func_0x0001079135f0(pppppuVar34[4]);
        lVar12 = extraout_x9_05 + (extraout_x8_08 & 0xffffffff) * 0x160;
        uVar9 = *(long *)(lVar12 + 0x28) == *(long *)(lVar12 + 200);
        if (!(bool)uVar9) goto LAB_107904474;
        func_0x00010002c7d4();
      }
      pppppuVar24 = (ulong *****)pppppuVar44[5];
      func_0x0001079135f0(pppppuVar24[4]);
      pppppuVar34 = (ulong *****)(extraout_x9_06 + (extraout_x8_09 & 0xffffffff) * 0x160);
      pppppuVar29 = param_3;
      func_0x00010790b0a0(pppppuVar34,param_3,*param_4,param_4[1]);
      if (((ulong)pppppuVar34 & 1) == 0) {
        while (uVar9 = pppppuVar24 == pppppuVar44 + 6, !(bool)uVar9) {
          func_0x0001079135f0(pppppuVar24[4]);
          *(undefined1 *)(extraout_x9_07 + (extraout_x8_10 & 0xffffffff) * 0x160 + 0x18) = 1;
          func_0x00010791598c();
          pppppuVar24 = pppppuVar34;
        }
      }
    }
  }
LAB_107904474:
  func_0x000107915114();
  pppppuVar44 = pppppuVar34;
  goto LAB_1079043f8;
LAB_107904540:
  pppppuVar34 = (ulong *****)&pppuStack_1f0;
  func_0x00010790b2d0();
  if (pppppuVar44 == pppppuVar34) goto LAB_107904730;
  if (((ulong)pppppuVar44[3] & 1) == 0) {
    pppuVar46 = (ulong ***)0x0;
    for (lVar12 = 0x20; lVar12 != 0x160; lVar12 = lVar12 + 0xa0) {
      pppuVar2 = (ulong ***)((long)pppppuVar44 + lVar12);
      ppppuStack_f0 = (ulong ****)pppuVar2[3];
      ppppuStack_f8 = (ulong ****)pppuVar2[2];
      uStack_100 = (ulong *****)pppuVar2[1];
      pppppuVar41 = (ulong *****)ppppuStack_1b8;
      pppppuVar29 = &ppppuStack_1b8;
      while (pppppuVar24 = pppppuVar29, pppppuVar41 != (ulong *****)0x0) {
        while( true ) {
          pppppuVar24 = pppppuVar41;
          pppppuVar34 = (ulong *****)&uStack_100;
          func_0x0001079166ec();
          if ((int)pppppuVar34 != 0) break;
          pppppuVar45 = pppppuVar24 + 4;
          pppppuVar29 = (ulong *****)&uStack_100;
          func_0x0001078ee35c();
          if ((int)pppppuVar45 == 0) goto LAB_107904658;
          pppppuVar41 = (ulong *****)pppppuVar24[1];
          if ((ulong *****)pppppuVar24[1] == (ulong *****)0x0) {
            pppppuVar29 = pppppuVar24 + 1;
            pppppuVar34 = pppppuVar45;
            goto LAB_107904610;
          }
        }
        pppppuVar29 = pppppuVar24;
        pppppuVar41 = (ulong *****)*pppppuVar24;
      }
LAB_107904610:
      func_0x000107917ca4();
      pppppuVar41 = pppppuVar34;
      func_0x000107916064();
      pppppuVar41[6] = extraout_x8_11;
      pppppuVar41[7] = (ulong ****)0x0;
      pppppuVar41[8] = (ulong ****)0x0;
      pppppuVar41[9] = (ulong ****)0x0;
      *pppppuVar41 = (ulong ****)0x0;
      pppppuVar41[1] = (ulong ****)0x0;
      pppppuVar41[2] = (ulong ****)pppppuVar24;
      *pppppuVar29 = (ulong ****)pppppuVar41;
      if ((ulong *****)*ppppuStack_1c0 != (ulong *****)0x0) {
        ppppuStack_1c0 = (ulong ****)*ppppuStack_1c0;
      }
      pppppuVar45 = (ulong *****)ppppuStack_1b8;
      pppppuVar29 = pppppuVar34;
      func_0x00010002c5b0();
      ppppuStack_1b0 = (ulong ****)((long)ppppuStack_1b0 + 1);
      pppppuVar24 = pppppuVar34;
LAB_107904658:
      ppppuVar33 = pppppuVar24[8];
      if (ppppuVar33 < pppppuVar24[9]) {
        *ppppuVar33 = (ulong ***)ppuStack_290;
        ppppuVar33[1] = pppuVar46;
        *(undefined1 *)(ppppuVar33 + 2) = 0;
        ppppuVar35 = ppppuVar33 + 5;
        ppppuVar33[3] = (ulong ***)(pppppuVar44 + (long)pppuVar46 * -0x14 + 0x19);
        ppppuVar33[4] = pppuVar2;
        pppppuVar34 = pppppuVar45;
      }
      else {
        pppppuVar41 = (ulong *****)pppppuVar24[7];
        lVar16 = (long)ppppuVar33 - (long)pppppuVar41;
        uVar39 = lVar16 / 0x28 + 1;
        bVar8 = 0x666666666666665 < uVar39;
        if (0x666666666666666 < uVar39) {
          func_0x00010790b2e4();
          goto LAB_1079061e0;
        }
        func_0x000107916990();
        uVar39 = extraout_x8_12;
        if (bVar8) {
          uVar39 = extraout_x11_00;
        }
        if (extraout_x11_00 < uVar39) {
          func_0x000104bd35f4();
          goto LAB_1079061e0;
        }
        lVar42 = uVar39 * 0x28;
        __Znwm();
        puVar36 = (ulong *)(lVar42 + lVar16);
        *puVar36 = (ulong)ppuStack_290;
        puVar36[1] = (ulong)pppuVar46;
        *(undefined1 *)(puVar36 + 2) = 0;
        puVar36[3] = (ulong)(pppppuVar44 + (long)pppuVar46 * -0x14 + 0x19);
        puVar36[4] = (ulong)pppuVar2;
        ppppuVar35 = (ulong ****)(puVar36 + 5);
        pppppuVar45 = (ulong *****)(puVar36 + (lVar16 / -0x28) * 5);
        pppppuVar34 = pppppuVar45;
        pppppuVar29 = pppppuVar41;
        _memcpy(pppppuVar45,pppppuVar41,lVar16);
        pppppuVar24[7] = (ulong ****)pppppuVar45;
        pppppuVar24[8] = ppppuVar35;
        pppppuVar24[9] = (ulong ****)(lVar42 + uVar39 * 0x28);
        if (pppppuVar41 != (ulong *****)0x0) {
          __ZdlPv();
          pppppuVar34 = pppppuVar41;
        }
      }
      pppppuVar24[8] = ppppuVar35;
      pppuVar46 = (ulong ***)((long)pppuVar46 + 1);
    }
  }
  pppppuVar44 = pppppuVar44 + 0x2c;
  if ((long)pppppuVar44 - (long)*ppppuVar37 == 0x1600) {
    ppppuVar37 = ppppuVar37 + 1;
    pppppuVar44 = (ulong *****)*ppppuVar37;
  }
  ppuStack_290 = (ulong **)((long)ppuStack_290 + 1);
  goto LAB_107904540;
LAB_107904730:
  pppppuVar44 = (ulong *****)ppppuStack_1c0;
  while (pppppuVar44 != &ppppuStack_1b8) {
    pppppuVar34 = (ulong *****)pppppuVar44[7];
    pppppuVar29 = (ulong *****)pppppuVar44[8];
    uStack_100 = (ulong *****)&pppuStack_1f0;
    ppppuStack_f8 = (ulong ****)param_3;
    ppppuStack_f0 = (ulong ****)param_4;
    ppppuStack_e8 = (ulong ****)param_5;
    ppppuStack_e0 = (ulong ****)&ppppuStack_140;
    if (pppppuVar34 != pppppuVar29) {
      func_0x000107918228();
      func_0x00010790b2f0();
    }
    func_0x000107915114();
    pppppuVar44 = pppppuVar34;
  }
  pppppuVar24 = (ulong *****)ppppuStack_1c0;
  pppppuVar45 = (ulong *****)ppppuStack_210;
  pppppuVar41 = param_4;
  if (lVar32 != 0) {
    while (pppppuVar45 != (ulong *****)&pppuStack_208) {
      uStack_100 = (ulong *****)0x0;
      ppppuStack_f8 = (ulong ****)0x0;
      ppppuStack_f0 = (ulong ****)0x0;
      ppppuStack_e0 = (ulong ****)0x0;
      ppppuStack_d8 = (ulong ****)0x0;
      if (pppppuVar45[7] != (ulong ****)0x0) {
        iVar11 = 1;
        pppppuVar44 = (ulong *****)pppppuVar45[5];
        while (pppppuVar44 != pppppuVar45 + 6) {
          ppppuVar37 = pppppuVar44[4];
          uVar39 = lStack_1d0 + (long)ppppuVar37;
          puVar43 = (undefined8 *)
                    (*(long *)(lStack_1e8 + (uVar39 >> 4) * 8) + (uVar39 & 0xf) * 0x160);
          if (iVar11 != 0) {
            ppppuStack_140 = (ulong ****)*puVar43;
          }
          puVar47 = puVar43 + 4;
          for (lVar32 = 0; lVar32 != 2; lVar32 = lVar32 + 1) {
            pppppuVar34 = (ulong *****)&uStack_100;
            func_0x00010790bf3c(pppppuVar34,puVar43,puVar47,ppppuVar37,lVar32,param_3,param_4,iVar11
                               );
            iVar11 = 0;
            puVar47 = puVar47 + 0x14;
          }
          func_0x000107915114();
          iVar11 = 0;
          pppppuVar44 = pppppuVar34;
        }
        func_0x00010790bd4c(&uStack_100,&ppppuStack_140);
        ppppuStack_260 = (ulong ****)((ulong)ppppuStack_260 & 0xffffffffffff0000);
        for (uVar39 = 0; pppppuVar44 = uStack_100,
            uVar39 < (ulong)(((long)ppppuStack_f8 - (long)uStack_100) / 0x68); uVar39 = uVar39 + 1)
        {
          if (((*(int *)((long)uStack_100 + uVar39 * 0x68 + 0x24) == 0) &&
              (ppppuVar37 = uStack_100[uVar39 * 0xd + 8], ppppuVar37 < (ulong ****)0x2)) &&
             ((*(byte *)((long)&ppppuStack_260 + (long)ppppuVar37) & 1) == 0)) {
            ppppuVar35 = uStack_100[uVar39 * 0xd + 1];
            bVar8 = true;
            ppppuVar33 = ppppuVar35;
            uVar21 = uVar39;
            while( true ) {
              pppppuVar29 = uStack_100;
              uVar48 = uVar21;
              do {
                uVar21 = 0;
                if (uVar48 + 1 < (ulong)(((long)ppppuStack_f8 - (long)uStack_100) / 0x68)) {
                  uVar21 = uVar48 + 1;
                }
                uVar48 = uVar21;
              } while (uStack_100[uVar21 * 0xd + 8] != ppppuVar37);
              if (uStack_100[uVar21 * 0xd + 1] != ppppuVar33 && !bVar8) {
                func_0x00010790d078(uStack_100,ppppuStack_f8,ppppuVar35,(long)ppppuVar33 - 1,1);
                func_0x00010790d078(uStack_100,ppppuStack_f8,(long)ppppuVar35 + 1,ppppuVar33,2);
              }
              if (uVar21 == uVar39) break;
              iVar11 = *(int *)((long)pppppuVar29 + uVar21 * 0x68 + 0x24);
              if (iVar11 == 1) {
                bVar8 = false;
              }
              else if (iVar11 == 0) {
                ppppuVar35 = pppppuVar29[uVar21 * 0xd + 1];
                bVar8 = true;
              }
              ppppuVar33 = pppppuVar29[uVar21 * 0xd + 1];
            }
            *(undefined1 *)((long)&ppppuStack_260 + (long)pppppuVar44[uVar39 * 0xd + 8]) = 1;
          }
        }
        func_0x000107918388();
        puVar1 = (uint *)((long)pppppuVar44 + 0x24);
        lVar42 = extraout_x10_01;
        lVar16 = extraout_x11_01;
        lVar12 = extraout_x13;
        puVar26 = puVar1;
        for (lVar32 = extraout_x12; extraout_x8_13 != lVar32; lVar32 = lVar32 + 1) {
          lVar27 = *(long *)(puVar26 + -7);
          lVar17 = lVar27;
          if (lVar27 <= lVar42) {
            lVar17 = lVar42;
          }
          if ((*puVar26 == 1) && (1 < *(ulong *)(puVar26 + 3) && *(ulong *)(puVar26 + 1) < 2)) {
            lVar12 = lVar27 + 1;
          }
          lVar3 = lVar32;
          if (lVar16 != 0 || lVar27 != lVar12) {
            lVar3 = lVar16;
          }
          puVar26 = puVar26 + 0x1a;
          lVar42 = lVar17;
          lVar16 = lVar3;
        }
        ppppuVar37 = (ulong ****)0x0;
        pppppuVar29 = (ulong *****)0x0;
        pppppuVar34 = (ulong *****)(lVar42 + 1);
        for (lVar32 = extraout_x8_13; lVar32 != 0; lVar32 = lVar32 + -1) {
          lVar12 = 0;
          if (lVar16 + 1 != extraout_x8_13) {
            lVar12 = lVar16 + 1;
          }
          pppppuVar24 = (ulong *****)pppppuVar44[lVar16 * 0xd + 1];
          if (pppppuVar24 != pppppuVar29) {
            if (pppppuVar24 == pppppuVar34) {
              ppppuVar37 = (ulong ****)((long)ppppuVar37 + 1);
              pppppuVar34 = (ulong *****)(lVar42 + 1);
            }
            pppppuVar29 = pppppuVar24;
            if (*(int *)((long)pppppuVar44 + lVar16 * 0x68 + 0x24) == 1) {
              pppppuVar40 = (ulong *****)0x0;
              if ((long)pppppuVar24 < lVar42) {
                pppppuVar40 = (ulong *****)((long)pppppuVar24 + 1);
              }
              if (pppppuVar44[lVar16 * 0xd + 5] < (ulong ****)0x2 &&
                  (ulong ****)0x1 < pppppuVar44[lVar16 * 0xd + 6]) {
                pppppuVar34 = pppppuVar40;
              }
            }
          }
          pppppuVar44[lVar16 * 0xd + 2] = ppppuVar37;
          lVar16 = lVar12;
        }
        ppppuVar37 = (ulong ****)0x0;
        lVar32 = 0;
        for (lVar12 = extraout_x8_13; lVar12 != 0; lVar12 = lVar12 + -1) {
          lVar16 = lVar32;
          if ((lVar32 < *(long *)(puVar1 + -7)) && (*puVar1 == 1)) {
            uVar15 = (uint)(*(ulong *)(puVar1 + 1) < 2 && 1 < *(ulong *)(puVar1 + 3));
            lVar16 = *(long *)(puVar1 + -7);
            if (uVar15 == 0) {
              lVar16 = lVar32;
            }
            ppppuVar37 = (ulong ****)((long)ppppuVar37 + (ulong)uVar15);
          }
          puVar1 = puVar1 + 0x1a;
          lVar32 = lVar16;
        }
        pppppuVar45[8] = ppppuVar37;
        pppppuVar44 = pppppuVar44 + 6;
        for (lVar32 = extraout_x8_13; lVar32 != 0; lVar32 = lVar32 + -1) {
          if (*(uint *)((long)pppppuVar44 + -0xc) == 1) {
            lVar16 = *(long *)(lStack_1e8 + ((ulong)((long)pppppuVar44[-3] + lStack_1d0) >> 4) * 8)
                     + ((long)pppppuVar44[-3] + lStack_1d0 & 0xfU) * 0x160;
            lVar12 = lVar16 + (long)(int)*(uint *)(pppppuVar44 + -2) * 0xa0;
            ppppuVar37 = *pppppuVar44;
            ppppuVar33 = pppppuVar44[-1];
            *(ulong *****)(lVar12 + 0x90) = *pppppuVar44;
            *(ulong *****)(lVar12 + 0x88) = ppppuVar33;
            ppppuVar33 = pppppuVar44[-5];
            *(ulong *****)(lVar12 + 0xa0) = pppppuVar44[-4];
            *(ulong *****)(lVar12 + 0x98) = ppppuVar33;
            if (*(long *)(lVar16 + 0x28) != *(long *)(lVar16 + 200) && ppppuVar37 != (ulong ****)0x2
               ) {
              *(undefined1 *)(lVar12 + 0x80) = 0;
            }
          }
          pppppuVar44 = pppppuVar44 + 0xd;
        }
      }
      pppppuVar34 = (ulong *****)&uStack_100;
      func_0x00010790d0e0();
      func_0x00010791598c();
      pppppuVar45 = pppppuVar34;
    }
    uVar9 = 1;
    pppppuVar44 = (ulong *****)ppppuStack_210;
    while (func_0x000107918464(), !(bool)uVar9) {
      pppppuVar24 = pppppuVar34;
      pppppuVar34 = (ulong *****)pppppuVar44[5];
      while (pppppuVar45 = pppppuVar34, pppppuVar34 = pppppuVar24,
            uVar9 = pppppuVar45 == pppppuVar44 + 6, !(bool)uVar9) {
        func_0x000107914fec();
        pppppuVar24 = pppppuVar34;
        func_0x0001079135f0(pppppuVar45[4]);
        if (*(char *)(extraout_x9_08 + (extraout_x8_14 & 0xffffffff) * 0x160 + 0x18) == '\x01') {
          pppppuVar24 = pppppuVar44 + 5;
          func_0x0001078f1b98();
          pppppuVar29 = pppppuVar45;
        }
      }
      func_0x000107915114();
      pppppuVar44 = pppppuVar34;
    }
    pppppuVar44 = (ulong *****)0xffffffffffffffff;
    pppppuVar24 = pppppuVar34;
    pppppuVar34 = (ulong *****)ppppuStack_210;
    while (pppppuVar45 = pppppuVar34, pppppuVar34 = pppppuVar24,
          pppppuVar24 = (ulong *****)ppppuStack_1c0, pppppuVar45 != (ulong *****)&pppuStack_208) {
      func_0x000107915240();
      pppppuVar24 = pppppuVar34;
      if (pppppuVar45[7] == (ulong ****)0x1) {
        func_0x0001079135f0(pppppuVar45[5][4]);
        *(undefined8 *)(extraout_x9_09 + (extraout_x8_15 & 0xffffffff) * 0x160 + 0x10) =
             0xffffffffffffffff;
        pppppuVar24 = &ppppuStack_210;
        FUN_1078f1c0c();
        pppppuVar29 = pppppuVar45;
      }
    }
  }
  while (pppppuVar24 != &ppppuStack_1b8) {
    pppppuVar44 = (ulong *****)pppppuVar24[7];
    pppppuVar45 = (ulong *****)pppppuVar24[8];
    if ((long)pppppuVar45 - (long)pppppuVar44 != 0) {
      ppppuStack_f0 = (ulong ****)(((long)pppppuVar45 - (long)pppppuVar44) / 0x28);
      ppppuStack_e8 = (ulong ****)0x0;
      uStack_100 = pppppuVar44;
      ppppuStack_f8 = (ulong ****)pppppuVar44;
      func_0x000107917b9c();
      for (; lVar12 = lStack_1d0, lVar32 = lStack_1e8, pppppuVar44 != pppppuVar45;
          pppppuVar44 = pppppuVar44 + 5) {
        ppppuVar37 = *pppppuVar44;
        ppppuVar33 = pppppuVar44[1];
        uVar39 = lStack_1d0 + (long)ppppuVar37;
        lVar16 = *(long *)(lStack_1e8 + (uVar39 >> 4) * 8);
        if (ppppuVar37 == (ulong ****)*ppppuStack_f8) {
          func_0x000107917b9c();
        }
        lVar16 = lVar16 + (uVar39 & 0xf) * 0x160;
        lVar42 = lVar16 + (long)ppppuVar33 * 0xa0;
        pppppuVar41 = *(ulong ******)(lVar16 + 0x10);
        while( true ) {
          ppppuVar33 = ppppuStack_f8;
          ppppuVar35 = (ulong ****)*ppppuStack_f8;
          uVar39 = (long)ppppuVar35 + lVar12;
          if ((long)pppppuVar41 < 1 || ppppuVar37 == ppppuVar35) break;
          lVar16 = *(long *)(lVar32 + (uVar39 >> 4) * 8);
          lVar17 = lVar16 + (uVar39 & 0xf) * 0x160;
          if (pppppuVar41 != *(ulong ******)(lVar17 + 0x10)) goto LAB_107904ccc;
          pppppuVar34 = (ulong *****)(lVar42 + 0x28);
          pppppuVar29 = (ulong *****)(lVar17 + (long)ppppuStack_f8[1] * 0xa0 + 0x28);
          func_0x0001078eeda4();
          if ((int)pppppuVar34 == 0) goto LAB_107904ccc;
          func_0x000107917b9c();
        }
        lVar16 = *(long *)(lVar32 + (uVar39 >> 4) * 8);
LAB_107904ccc:
        lVar32 = lVar16 + (uVar39 & 0xf) * 0x160 + (long)ppppuVar33[1] * 0xa0;
        *(ulong *****)(lVar42 + 0x70) = ppppuVar35;
        *(ulong ***)(lVar42 + 0x68) = ppppuVar33[4][4];
        if (*(long *)(lVar42 + 0x40) == *(long *)(lVar32 + 0x40)) {
          pppppuVar34 = (ulong *****)(lVar42 + 0x50);
          pppppuVar29 = (ulong *****)(lVar32 + 0x50);
          func_0x0001079089f4();
          if ((int)pppppuVar34 != 0) {
            *(ulong ****)(lVar42 + 0x78) = *ppppuVar33;
          }
        }
        pppppuVar45 = (ulong *****)pppppuVar24[8];
      }
    }
    func_0x000107916674();
    pppppuVar24 = pppppuVar34;
  }
  if (bVar7) {
    func_0x000107915ab4();
    func_0x000107918044();
    lVar12 = lStack_1d0;
    lVar32 = lStack_1e8;
    do {
      pppppuVar24 = pppppuVar41 + -0x2c0;
      do {
        func_0x000107915abc();
        if (pppppuVar41 == pppppuVar34) goto LAB_107904e1c;
        if ((*(uint *)(pppppuVar41 + 0xc) == 0) && (*(uint *)(pppppuVar41 + 0x20) == 0)) {
          ppppuVar37 = pppppuVar41[0xf];
          if (ppppuVar37 == (ulong ****)0xffffffffffffffff) {
            ppppuVar37 = pppppuVar41[0xe];
          }
          ppppuVar33 = pppppuVar41[0x23];
          if (ppppuVar33 == (ulong ****)0xffffffffffffffff) {
            ppppuVar33 = pppppuVar41[0x22];
          }
          if (((-1 < (long)ppppuVar37) && (-1 < (long)ppppuVar33)) && (ppppuVar37 != ppppuVar33)) {
            uVar39 = (long)ppppuVar37 + lVar12;
            piVar18 = (int *)(*(long *)(lVar32 + (uVar39 >> 4) * 8) + (uVar39 & 0xf) * 0x160);
            iVar11 = *(uint *)pppppuVar41 - *piVar18;
            iVar5 = *(uint *)((long)pppppuVar41 + 4) - piVar18[1];
            *(int *)(pppppuVar41 + 0xc) = iVar11 * iVar11 + iVar5 * iVar5;
            uVar39 = (long)ppppuVar33 + lVar12;
            piVar18 = (int *)(*(long *)(lVar32 + (uVar39 >> 4) * 8) + (uVar39 & 0xf) * 0x160);
            iVar11 = *(uint *)pppppuVar41 - *piVar18;
            iVar5 = *(uint *)((long)pppppuVar41 + 4) - piVar18[1];
            *(int *)(pppppuVar41 + 0x20) = iVar11 * iVar11 + iVar5 * iVar5;
          }
        }
        pppppuVar41 = pppppuVar41 + 0x2c;
        pppppuVar24 = pppppuVar24 + 0x2c;
      } while ((ulong *****)*pppppuVar44 != pppppuVar24);
      pppppuVar44 = pppppuVar44 + 1;
      pppppuVar41 = (ulong *****)*pppppuVar44;
    } while( true );
  }
LAB_107904e1c:
  func_0x00010790d154(ppppuStack_1b8);
  uStack_248 = 0;
  ppppuStack_250 = (ulong ****)0x0;
  ppppuStack_238 = (ulong ****)0x0;
  uStack_240 = 0;
  ppppuStack_258 = (ulong ****)0x0;
  ppppuStack_260 = (ulong ****)0x0;
  ppppuStack_1b0 = &pppuStack_1f0;
  ppppuStack_1a8 = (ulong ****)&ppppuStack_210;
  ppppuStack_180 = (ulong ****)0x0;
  ppppuStack_178 = (ulong ****)0x0;
  ppppuStack_190 = (ulong ****)0x0;
  ppppuStack_198 = (ulong ****)0x0;
  pppppuVar34 = (ulong *****)0x0;
  ppppuStack_1c0 = (ulong ****)param_3;
  ppppuStack_1b8 = (ulong ****)param_4;
  ppppuStack_1a0 = (ulong ****)&ppppuStack_198;
  ppppuStack_188 = (ulong ****)&ppppuStack_180;
  ppppuStack_170 = (ulong ****)param_5;
  pppuStack_168 = (ulong ***)param_8;
  func_0x00010790d324();
  ppppuStack_180 = (ulong ****)0x0;
  ppppuStack_178 = (ulong ****)0x0;
  pppppuVar41 = (ulong *****)0x160;
  ppppuStack_188 = (ulong ****)&ppppuStack_180;
  for (pppppuVar44 = (ulong *****)0x0; pppppuVar44 < ppppuStack_1b0[5];
      pppppuVar44 = (ulong *****)((long)pppppuVar44 + 1)) {
    func_0x00010791395c();
    lVar32 = extraout_x8_16 + (extraout_x9_10 & 0xffffffff) * 0x160;
    if ((*(byte *)(lVar32 + 0x18) & 1) == 0) {
      for (lVar12 = 0x20; lVar12 != 0x160; lVar12 = lVar12 + 0xa0) {
        lVar16 = lVar32 + lVar12;
        ppppuStack_f0 = *(ulong *****)(lVar16 + 0x18);
        ppppuStack_f8 = *(ulong *****)(lVar16 + 0x10);
        uStack_100 = *(ulong ******)(lVar16 + 8);
        pppppuVar29 = (ulong *****)ppppuStack_198;
        pppppuVar24 = &ppppuStack_198;
        pppppuVar45 = &ppppuStack_198;
        if ((ulong *****)ppppuStack_198 != (ulong *****)0x0) {
          do {
            while( true ) {
              pppppuVar24 = pppppuVar29;
              pppppuVar34 = (ulong *****)&uStack_100;
              func_0x0001079166ec();
              if ((int)pppppuVar34 == 0) break;
              pppppuVar29 = (ulong *****)*pppppuVar24;
              pppppuVar45 = pppppuVar24;
              if ((ulong *****)*pppppuVar24 == (ulong *****)0x0) goto LAB_107904f28;
            }
            pppppuVar34 = pppppuVar24 + 4;
            func_0x0001078ee35c(pppppuVar34,&uStack_100);
            if ((int)pppppuVar34 == 0) goto LAB_107904f74;
            pppppuVar29 = (ulong *****)pppppuVar24[1];
          } while ((ulong *****)pppppuVar24[1] != (ulong *****)0x0);
          pppppuVar45 = pppppuVar24 + 1;
        }
LAB_107904f28:
        func_0x000107917b94();
        pppppuVar29 = pppppuVar34;
        func_0x000107916064();
        pppppuVar29[6] = extraout_x8_17;
        pppppuVar29[7] = (ulong ****)0xffffffffffffffff;
        func_0x0001079155ec();
        pppppuVar29[2] = (ulong ****)pppppuVar24;
        *pppppuVar45 = (ulong ****)pppppuVar29;
        if ((ulong *****)*ppppuStack_1a0 != (ulong *****)0x0) {
          ppppuStack_1a0 = (ulong ****)*ppppuStack_1a0;
        }
        func_0x00010002c5b0(ppppuStack_198,pppppuVar34);
        ppppuStack_190 = (ulong ****)((long)ppppuStack_190 + 1);
        pppppuVar24 = pppppuVar34;
LAB_107904f74:
        pppppuVar34 = pppppuVar24 + 8;
        pppppuVar29 = &ppppuStack_140;
        ppppuStack_140 = (ulong ****)pppppuVar44;
        func_0x0001078ef1d0();
      }
    }
  }
  ppppuStack_160 = (ulong ****)0x1;
  pppppuVar44 = (ulong *****)ppppuStack_1a0;
  while (pppppuVar24 = (ulong *****)ppppuStack_1a0, pppppuVar44 != &ppppuStack_198) {
    pppppuVar34 = &ppppuStack_1c0;
    pppppuVar29 = &ppppuStack_160;
    FUN_10790d190(pppppuVar34,pppppuVar29,pppppuVar44 + 4,pppppuVar44 + 7,0xffffffffffffffff);
    func_0x000107915240();
    pppppuVar44 = pppppuVar34;
  }
  while (pppppuVar24 != &ppppuStack_198) {
    pppppuVar34 = (ulong *****)pppppuVar24[8];
    pppppuVar41 = pppppuVar24 + 9;
    while (pppppuVar34 != pppppuVar41) {
      func_0x000107913d6c(pppppuVar34[4]);
      lVar32 = extraout_x9_11 + (extraout_x8_18 & 0xf) * 0x160;
      if (((*(byte *)(lVar32 + 0x18) & 1) == 0) &&
         (*(int *)(lVar32 + 0x20) != 3 || *(int *)(lVar32 + 0xc0) != 3)) {
        ppppuVar37 = pppppuVar24[4];
        puVar36 = (ulong *)(extraout_x9_11 + (extraout_x8_18 & 0xf) * 0x160 + 0xa8);
        lVar32 = 0x140;
        do {
          if ((((ulong ****)puVar36[-0x10] == ppppuVar37) &&
              ((ulong ****)puVar36[-0xe] == pppppuVar24[6])) &&
             ((ulong ****)puVar36[-0xf] == pppppuVar24[5])) {
            *puVar36 = (ulong)pppppuVar24[7];
          }
          lVar32 = lVar32 + -0xa0;
          puVar36 = puVar36 + 0x14;
        } while (lVar32 != 0);
      }
      func_0x00010002c7d4();
    }
    func_0x000107915114();
    pppppuVar24 = pppppuVar34;
  }
  for (pppppuVar44 = (ulong *****)0x0; pppppuVar24 = (ulong *****)ppppuStack_188,
      pppppuVar44 < ppppuStack_1b0[5]; pppppuVar44 = (ulong *****)((long)pppppuVar44 + 1)) {
    func_0x00010791395c();
    lVar32 = extraout_x8_19 + (extraout_x9_12 & 0xffffffff) * 0x160;
    uStack_100 = pppppuVar44;
    if (0 < *(long *)(lVar32 + 0x10)) {
      uStack_100 = (ulong *****)-*(long *)(lVar32 + 0x10);
    }
    puVar36 = (ulong *)(lVar32 + 0xa8);
    ppppuVar37 = (ulong ****)*puVar36;
    if (ppppuVar37 == (ulong ****)0xffffffffffffffff) {
      ppppuVar37 = (ulong ****)0xffffffffffffffff;
    }
    else {
      func_0x000107916340();
      *pppppuVar34 = ppppuVar37;
      func_0x000107916340();
      pppppuVar34 = pppppuVar34 + 2;
      func_0x000107916c78();
      ppppuVar37 = (ulong ****)*puVar36;
    }
    ppppuVar33 = *(ulong *****)(lVar32 + 0x148);
    if (ppppuVar33 == (ulong ****)0xffffffffffffffff) {
      ppppuVar35 = (ulong ****)0xffffffffffffffff;
    }
    else {
      ppppuVar35 = ppppuVar37;
      if (ppppuVar37 != ppppuVar33) {
        func_0x000107916334();
        *pppppuVar34 = ppppuVar33;
        func_0x000107916334();
        pppppuVar34 = pppppuVar34 + 2;
        func_0x000107916c78();
        ppppuVar37 = (ulong ****)*puVar36;
        ppppuVar35 = *(ulong *****)(lVar32 + 0x148);
      }
    }
    if ((ppppuVar35 != (ulong ****)0xffffffffffffffff &&
        ppppuVar37 != (ulong ****)0xffffffffffffffff) && ppppuVar37 != ppppuVar35) {
      func_0x000107916340();
      pppppuVar34 = pppppuVar34 + 5;
      func_0x00010790d450(pppppuVar34,lVar32 + 0x148);
      pppppuVar24 = pppppuVar34;
      func_0x000107916334();
      pppppuVar24 = pppppuVar24 + 5;
      func_0x00010790d450(pppppuVar24,puVar36);
      pppppuVar29 = uStack_100;
      pppppuVar45 = pppppuVar34 + 1;
      func_0x0001078f1ad8(pppppuVar45,uStack_100);
      if (pppppuVar45 == (ulong *****)0x0) {
        *pppppuVar34 = (ulong ****)((long)*pppppuVar34 + 1);
        func_0x000107916c78(pppppuVar34 + 1);
        pppppuVar29 = uStack_100;
      }
      pppppuVar34 = pppppuVar24 + 1;
      func_0x0001078f1ad8();
      if (pppppuVar34 == (ulong *****)0x0) {
        *pppppuVar24 = (ulong ****)((long)*pppppuVar24 + 1);
        pppppuVar34 = pppppuVar24 + 1;
        func_0x000107916c78();
      }
    }
  }
  while (pppppuVar24 != &ppppuStack_180) {
    if (pppppuVar24[0xc] == (ulong ****)0x0) {
LAB_107905228:
      uVar15 = 1;
    }
    else {
      if (pppppuVar24[0xc] != (ulong ****)0x1) {
        pppuVar46 = (ulong ***)0x0;
        pppppuVar34 = (ulong *****)pppppuVar24[10];
        bVar7 = true;
        while (pppppuVar34 != pppppuVar24 + 0xb) {
          if ((pppppuVar34[5] != (ulong ****)0x1) ||
             ((pppuVar2 = pppppuVar34[6][4], !bVar7 &&
              (pppuVar2 = pppuVar46, pppuVar46 != pppppuVar34[6][4])))) goto LAB_107905230;
          pppuVar46 = pppuVar2;
          func_0x00010002c7d4();
          bVar7 = false;
        }
        goto LAB_107905228;
      }
      func_0x0001079173ac(pppppuVar24[10]);
      uVar15 = extraout_w8;
    }
    *(uint *)(pppppuVar24 + 6) = uVar15;
LAB_107905230:
    func_0x000107915114();
    pppppuVar24 = pppppuVar34;
  }
  pppppuVar45 = (ulong *****)0x0;
  pppppuVar40 = (ulong *****)0x8;
  do {
    if (ppppuStack_178 <= pppppuVar45) break;
    bVar7 = false;
    pppppuVar45 = (ulong *****)((long)pppppuVar45 + 1);
    pppppuVar44 = (ulong *****)ppppuStack_188;
    while (pppppuVar44 != &ppppuStack_180) {
      if (*(uint *)(pppppuVar44 + 6) == 0) {
        pppuVar46 = (ulong ***)0x0;
        pppppuVar24 = pppppuVar44 + 0xb;
        bVar8 = true;
        pppppuVar20 = (ulong *****)pppppuVar44[10];
        while (pppppuVar20 != pppppuVar24) {
          ppppuVar37 = pppppuVar20[4];
          pppppuVar28 = &ppppuStack_180;
          pppppuVar41 = &ppppuStack_180;
          while (pppppuVar22 = (ulong *****)*pppppuVar28, pppppuVar22 != (ulong *****)0x0) {
            lVar32 = 8;
            if ((long)ppppuVar37 <= (long)pppppuVar22[4]) {
              lVar32 = 0;
            }
            pppppuVar28 = (ulong *****)((long)pppppuVar22 + lVar32);
            if ((long)ppppuVar37 <= (long)pppppuVar22[4]) {
              pppppuVar41 = pppppuVar22;
            }
          }
          if ((&ppppuStack_180 == pppppuVar41) || ((long)ppppuVar37 < (long)pppppuVar41[4]))
          goto LAB_10790540c;
          uVar9 = pppppuVar20[5] != (ulong ****)0x0;
          if (pppppuVar20[5] != (ulong ****)0x1) {
            if (*(uint *)(pppppuVar41 + 6) != 2) goto LAB_10790540c;
            pppppuVar34 = (ulong *****)&uStack_100;
            pppppuVar29 = pppppuVar44 + 7;
            func_0x0001078efe58();
            pppppuVar28 = pppppuVar41 + 8;
            pppppuVar22 = (ulong *****)pppppuVar41[7];
            while (pppppuVar22 != pppppuVar28) {
              ppppuStack_140 = pppppuVar22[4];
              pppppuVar34 = (ulong *****)&uStack_100;
              pppppuVar29 = &ppppuStack_140;
              func_0x0001078f1ffc();
              func_0x000107915240();
              pppppuVar22 = pppppuVar34;
            }
            pppppuVar22 = pppppuVar24;
            if ((ulong *****)ppppuStack_f0 != (ulong *****)0x1) {
LAB_107905408:
              func_0x000107915ca0();
              pppppuVar24 = pppppuVar22;
              goto LAB_10790540c;
            }
            pppppuVar22 = (ulong *****)pppppuVar41[7];
            while (ppppuVar37 = ppppuStack_1a8, uVar9 = pppppuVar28 <= pppppuVar22,
                  pppppuVar22 != pppppuVar28) {
              if ((long)pppppuVar22[4] < 0) {
                pppppuVar29 = (ulong *****)-(long)pppppuVar22[4];
                pppppuVar34 = (ulong *****)ppppuStack_1a8;
                func_0x0001078f2064();
                if ((ulong *****)(ppppuVar37 + 1) != pppppuVar34) {
                  pppppuVar30 = pppppuVar34 + 6;
                  pppppuVar31 = (ulong *****)pppppuVar34[5];
                  while (pppppuVar31 != pppppuVar30) {
                    func_0x000107915130(ppppuStack_1b0);
                    func_0x00010790d4d4();
                    if ((int)pppppuVar34 == 0) goto LAB_107905408;
                    func_0x000107915240();
                    pppppuVar31 = pppppuVar34;
                  }
                }
              }
              else {
                func_0x000107915130(ppppuStack_1b0);
                func_0x00010790d4d4();
                if (((ulong)pppppuVar34 & 1) == 0) goto LAB_107905408;
              }
              func_0x000107915114();
              pppppuVar22 = pppppuVar34;
            }
            func_0x000107915ca0();
          }
          func_0x000107915f64(*(uint *)(pppppuVar41 + 6));
          if ((bool)uVar9) {
            if (bVar8) {
              bVar8 = false;
              pppuVar46 = pppppuVar20[6][4];
            }
            else {
              if (pppuVar46 != pppppuVar20[6][4]) goto LAB_10790540c;
              bVar8 = false;
            }
          }
          func_0x000107917c58();
          pppppuVar20 = pppppuVar34;
        }
        bVar7 = true;
        *(uint *)(pppppuVar44 + 6) = 1;
      }
LAB_10790540c:
      func_0x000107915b68();
      pppppuVar44 = pppppuVar34;
    }
  } while (bVar7);
  pppppuVar34 = (ulong *****)ppppuStack_1b0;
  func_0x00010790a48c(ppppuStack_1b0);
  func_0x000107918044();
  func_0x000107908fb0();
  while (pppppuVar44 != pppppuVar34) {
    for (lVar32 = 0x20; lVar32 != 0x160; lVar32 = lVar32 + 0xa0) {
      lVar12 = *(long *)((long)pppppuVar44 + lVar32 + 0x88);
      pppppuVar20 = &ppppuStack_180;
      pppppuVar45 = &ppppuStack_180;
      while (pppppuVar28 = (ulong *****)*pppppuVar45, pppppuVar28 != (ulong *****)0x0) {
        lVar16 = 8;
        if (lVar12 <= (long)pppppuVar28[4]) {
          lVar16 = 0;
        }
        pppppuVar45 = (ulong *****)((long)pppppuVar28 + lVar16);
        if (lVar12 <= (long)pppppuVar28[4]) {
          pppppuVar20 = pppppuVar28;
        }
      }
      if ((&ppppuStack_180 != pppppuVar20) && ((long)pppppuVar20[4] <= lVar12)) {
        *(bool *)((long)pppppuVar44 + lVar32 + 0x90) = *(uint *)(pppppuVar20 + 6) == 1;
      }
    }
    pppppuVar44 = pppppuVar44 + 0x2c;
    if ((long)pppppuVar44 - (long)*pppppuVar24 == 0x1600) {
      pppppuVar24 = pppppuVar24 + 1;
      pppppuVar44 = (ulong *****)*pppppuVar24;
    }
  }
  func_0x000107915ab4();
  func_0x000107917618();
  do {
    pppppuVar44 = pppppuVar41 + -0x2c0;
    do {
      func_0x000107915abc();
      if (pppppuVar41 == pppppuVar34) {
        uVar39 = 0;
        ppppuStack_f0 = &pppuStack_1f0;
        ppppuStack_b0 = (ulong ****)&ppppuStack_228;
        ppppuStack_e8 = (ulong ****)&ppppuStack_210;
        ppppuStack_140 = ppppuStack_238;
        ppppuStack_160 = (ulong ****)CONCAT62(ppppuStack_160._2_6_,0x101);
        uStack_100 = param_3;
        ppppuStack_f8 = (ulong ****)param_4;
        ppppuStack_e0 = (ulong ****)param_5;
        pppuStack_d0 = (ulong ***)param_8;
        ppppuStack_c8 = (ulong ****)param_3;
        ppppuStack_c0 = (ulong ****)param_4;
        pppuStack_b8 = (ulong ***)ppppuStack_f0;
        ppppuStack_a8 = ppppuStack_e8;
        ppppuStack_a0 = (ulong ****)param_7;
        ppppuStack_98 = (ulong ****)param_5;
        pppuStack_90 = (ulong ***)param_8;
        goto LAB_107905580;
      }
      *(uint *)(pppppuVar41 + 0x17) = 0;
      *(undefined2 *)((long)pppppuVar41 + 0xbc) = 0;
      *(uint *)(pppppuVar41 + 0x2b) = 0;
      *(undefined2 *)((long)pppppuVar41 + 0x15c) = 0;
      pppppuVar44 = pppppuVar44 + 0x2c;
      pppppuVar41 = pppppuVar41 + 0x2c;
    } while ((ulong *****)*pppppuVar24 != pppppuVar44);
    pppppuVar24 = pppppuVar24 + 1;
    pppppuVar41 = (ulong *****)*pppppuVar24;
  } while( true );
LAB_107905580:
  if (uStack_1c8 <= uVar39) goto LAB_107905638;
  func_0x000107914a5c(lStack_1d0 + uVar39);
  pppppuVar41 = (ulong *****)(extraout_x9_13 + (extraout_x8_20 & 0xffffffff) * 0x160);
  if (((ulong)pppppuVar41[3] & 1) == 0) {
    if (*(uint *)(pppppuVar41 + 4) == 3) {
      if (*(uint *)(pppppuVar41 + 0x18) != 3) goto LAB_107905608;
    }
    else if ((*(uint *)(pppppuVar41 + 4) == 4) && (*(uint *)(pppppuVar41 + 0x18) == 4)) {
      func_0x000107915ddc(&uStack_100);
      func_0x00010790d530();
    }
    else {
LAB_107905608:
      for (iVar11 = 0; iVar11 != 2; iVar11 = iVar11 + 1) {
        func_0x000107915ddc(&uStack_100);
        func_0x00010790d530();
      }
    }
  }
  uVar39 = uVar39 + 1;
  goto LAB_107905580;
LAB_107905638:
  FUN_107911388(&ppppuStack_1c0);
  FUN_10790b2b8(&pppuStack_1f0);
  func_0x000107916c58();
  while( true ) {
    pppppuVar44 = (ulong *****)&pppuStack_1f0;
    func_0x00010790b2d0();
    bVar7 = pppppuVar40 == pppppuVar44;
    if (bVar7) break;
    func_0x0001079174ac();
    if ((!bVar7) || (((ulong)pppppuVar40[3] & 1) == 0)) {
      bVar7 = false;
      bVar8 = false;
      for (lVar32 = 0x20; bVar10 = lVar32 == 0x160, !bVar10; lVar32 = lVar32 + 0xa0) {
        piVar18 = (int *)((long)pppppuVar40 + lVar32);
        ppppuStack_f0 = *(ulong *****)(piVar18 + 6);
        ppppuStack_f8 = *(ulong *****)(piVar18 + 4);
        uStack_100 = *(ulong ******)(piVar18 + 2);
        func_0x0001079174ac();
        if ((!bVar10) && (*(ulong *)(piVar18 + 0x1c) < 3)) goto LAB_107905790;
        if ((*(uint *)(pppppuVar40 + 4) == 3) || (*(uint *)(pppppuVar40 + 0x18) == 3)) {
          func_0x000107915498();
          *(undefined1 *)((long)pppppuVar44 + 1) = 1;
        }
        func_0x000107915498();
        if ((((ulong)*pppppuVar44 & 1) == 0) &&
           (func_0x000107915498(), ((ulong)*pppppuVar44 & 0x100) == 0)) {
          if (bVar8) {
LAB_107905710:
            bVar8 = true;
            if (bVar7) {
LAB_10790578c:
              bVar7 = true;
              goto LAB_107905790;
            }
          }
          else {
            pppppuVar29 = (ulong *****)pppppuVar40[2];
            if ((long)pppppuVar29 < 1) {
              bVar8 = false;
              if (bVar7) goto LAB_10790578c;
            }
            else {
              pppppuVar34 = &ppppuStack_210;
              func_0x0001078f2064();
              if ((ulong *****)&pppuStack_208 != pppppuVar34) {
                bVar7 = false;
                pppppuVar44 = (ulong *****)pppppuVar34[5];
                while (pppppuVar44 != pppppuVar34 + 6) {
                  func_0x0001079135f0(pppppuVar44[4]);
                  lVar12 = extraout_x9_14 + (extraout_x8_21 & 0xffffffff) * 0x160;
                  if ((*(int *)(lVar12 + 0x20) == 3) || (*(int *)(lVar12 + 0xc0) == 3)) {
                    bVar7 = true;
                  }
                  func_0x00010002c7d4();
                }
                goto LAB_107905710;
              }
              bVar8 = true;
              pppppuVar44 = pppppuVar34;
            }
          }
          if ((*piVar18 == 1) && ((*(byte *)((long)pppppuVar40 + 0x19) & 1) == 0)) {
            if ((*(uint *)(pppppuVar40 + 4) == 1) &&
               (bVar10 = *(uint *)(pppppuVar40 + 0x18) == 1, bVar10)) {
              bVar7 = false;
              func_0x0001079174ac();
              if (bVar10) goto LAB_107905798;
            }
            else {
              bVar7 = false;
            }
LAB_107905790:
            func_0x000107915498();
            *(undefined1 *)((long)pppppuVar44 + 1) = 1;
          }
          else {
            bVar7 = false;
          }
        }
LAB_107905798:
      }
    }
    pppppuVar40 = pppppuVar40 + 0x2c;
    if ((long)pppppuVar40 - (long)*pppppuVar41 == 0x1600) {
      pppppuVar41 = pppppuVar41 + 1;
      pppppuVar40 = (ulong *****)*pppppuVar41;
    }
  }
  pppuStack_270 = (ulong ***)0x0;
  uStack_268 = 0;
  ppppuStack_158 = (ulong ****)0x0;
  uStack_150 = 0;
  uStack_100 = (ulong *****)0x0;
  ppppuStack_f8 = (ulong ****)0xffffffffffffffff;
  ppppuStack_f0 = (ulong ****)0xffffffffffffffff;
  ppppuStack_278 = &pppuStack_270;
  ppppuStack_160 = (ulong ****)&ppppuStack_158;
  func_0x0001079180a0();
  func_0x0001079113b4(param_3);
  pppppuVar44 = (ulong *****)0x0;
  for (ppppuVar37 = param_3[3]; ppppuVar37 != param_3[4]; ppppuVar37 = ppppuVar37 + 3) {
    ppppuStack_f0 = (ulong ****)pppppuVar44;
    func_0x0001079180a0();
    func_0x0001079113b4(ppppuVar37);
    pppppuVar44 = (ulong *****)((long)pppppuVar44 + 1);
  }
  pppppuVar44 = (ulong *****)0x0;
  for (ppppuVar37 = *param_4; ppppuVar37 != param_4[1]; ppppuVar37 = ppppuVar37 + 6) {
    uStack_100 = (ulong *****)0x1;
    ppppuStack_f0 = (ulong ****)0xffffffffffffffff;
    ppppuStack_f8 = (ulong ****)pppppuVar44;
    func_0x0001079180a0();
    func_0x000107911404(ppppuVar37);
    pppppuVar34 = (ulong *****)0x0;
    for (pppuVar46 = ppppuVar37[3]; pppuVar46 != ppppuVar37[4]; pppuVar46 = pppuVar46 + 3) {
      ppppuStack_f0 = (ulong ****)pppppuVar34;
      func_0x0001079180a0();
      func_0x000107911404(pppuVar46);
      pppppuVar34 = (ulong *****)((long)pppppuVar34 + 1);
    }
    pppppuVar44 = (ulong *****)((long)pppppuVar44 + 1);
  }
  func_0x000107917cd8();
  pppuStack_270 = (ulong ***)0x0;
  uStack_268 = 0;
  puVar43 = &uStack_100;
  pppppuVar44 = (ulong *****)ppppuStack_160;
  ppppuStack_278 = &pppuStack_270;
  while (pppppuVar44 != &ppppuStack_158) {
    pppppuVar34 = &ppppuStack_228;
    pppppuVar29 = pppppuVar44 + 4;
    func_0x0001079005d8();
    if ((ulong *****)&pppuStack_220 == pppppuVar34) {
      bVar14 = 0;
LAB_107905924:
      if (pppppuVar44[4] == (ulong ****)0x1) {
        pppppuVar34 = (ulong *****)(ulong)*(uint *)((long)pppppuVar44 + 0x3c);
        pppppuVar29 = (ulong *****)(ulong)*(uint *)(pppppuVar44 + 8);
        pppppuVar41 = (ulong *****)*param_4;
        pppppuVar24 = (ulong *****)param_4[1];
        func_0x00010790b12c(pppppuVar34,pppppuVar29,param_3);
        if ((int)pppppuVar34 == 0) {
          ppppuStack_c8 = (ulong ****)0x0;
          pppuStack_d0 = (ulong ***)0x0;
          pppuStack_b8 = (ulong ***)0x0;
          ppppuStack_c0 = (ulong ****)0x0;
          ppppuStack_e8 = (ulong ****)0x0;
          ppppuStack_f0 = (ulong ****)0x0;
          ppppuStack_d8 = (ulong ****)0x0;
          ppppuStack_e0 = (ulong ****)0x0;
          ppppuStack_1a8 = (ulong ****)0x0;
          ppppuStack_1b0 = (ulong ****)0x0;
          ppppuStack_198 = (ulong ****)0x0;
          ppppuStack_1a0 = (ulong ****)0x0;
          ppppuStack_188 = (ulong ****)0x0;
          ppppuStack_190 = (ulong ****)0x0;
          ppppuStack_178 = (ulong ****)0x0;
          ppppuStack_180 = (ulong ****)0x0;
          uVar39 = 0;
          ppppuStack_1c0 = (ulong ****)pppppuVar41;
          ppppuStack_1b8 = (ulong ****)pppppuVar24;
          uStack_100 = pppppuVar24;
          ppppuStack_f8 = (ulong ****)pppppuVar24;
          func_0x0001079115c8();
          func_0x000107917c78();
          if ((uVar39 & 1) == 0) {
            do {
              func_0x000107911584(&ppppuStack_1b0);
              ppppuVar37 = ppppuStack_1c0;
              uVar39 = 0;
              pppppuVar29 = (ulong *****)ppppuStack_1c0;
              func_0x00010791148c();
              if (((ppppuStack_1b0 == ppppuStack_140) && (ppppuStack_188 == ppppuStack_118)) &&
                 ((ppppuStack_118 == ppppuStack_180 || (ppppuStack_178 == ppppuStack_108)))) {
                ppppuStack_1c0 = ppppuVar37 + 6;
                uVar39 = 0;
                func_0x0001079115c8();
              }
              func_0x000107917c78();
              if ((uVar39 & 1) != 0) goto LAB_1079059c0;
              pppppuVar29 = (ulong *****)ppppuStack_178;
              if (ppppuStack_1b0 != ppppuStack_1a8) {
                pppppuVar29 = (ulong *****)ppppuStack_1b0;
              }
              pppppuVar34 = (ulong *****)(ulong)*(uint *)pppppuVar29;
              pppppuVar29 = (ulong *****)(ulong)*(uint *)((long)pppppuVar29 + 4);
              func_0x00010790b12c(pppppuVar34,pppppuVar29,param_3);
            } while ((int)pppppuVar34 == 0);
          }
          else {
LAB_1079059c0:
            pppppuVar34 = (ulong *****)0x0;
          }
        }
LAB_1079059c4:
        if ((int)pppppuVar34 < 1) goto LAB_107905ac0;
      }
      else {
        if (pppppuVar44[4] == (ulong ****)0x0) {
          pppppuVar34 = (ulong *****)(ulong)*(uint *)((long)pppppuVar44 + 0x3c);
          pppppuVar29 = (ulong *****)(ulong)*(uint *)(pppppuVar44 + 8);
          func_0x00010790b0e0(pppppuVar34,pppppuVar29,*param_4,param_4[1]);
          if ((int)pppppuVar34 == 0) {
            pppppuVar29 = param_3;
            func_0x00010791148c(&uStack_100);
            func_0x00010791830c();
            func_0x000107911504();
            ppppuVar33 = ppppuStack_c8;
            ppppuVar37 = ppppuStack_d8;
            pppppuVar41 = uStack_100;
            if ((((ulong *****)ppppuStack_1c0 == uStack_100) && (ppppuStack_198 == ppppuStack_d8))
               && (ppppuStack_d8 == ppppuStack_190 || ppppuStack_188 == ppppuStack_c8))
            goto LAB_1079059c0;
            func_0x000107911584(&ppppuStack_1c0);
            ppppuVar35 = *param_4;
            ppppuVar49 = param_4[1];
            while( true ) {
              if (((ulong *****)ppppuStack_1c0 == pppppuVar41 && ppppuStack_198 == ppppuVar37) &&
                 (ppppuVar37 == ppppuStack_190 || ppppuStack_188 == ppppuVar33)) goto LAB_1079059c0;
              pppppuVar29 = (ulong *****)ppppuStack_188;
              if (ppppuStack_1c0 != ppppuStack_1b8) {
                pppppuVar29 = (ulong *****)ppppuStack_1c0;
              }
              pppppuVar34 = (ulong *****)(ulong)*(uint *)pppppuVar29;
              pppppuVar29 = (ulong *****)(ulong)*(uint *)((long)pppppuVar29 + 4);
              func_0x00010790b0e0(pppppuVar34,pppppuVar29,ppppuVar35,ppppuVar49);
              if ((int)pppppuVar34 != 0) break;
              func_0x000107911584(&ppppuStack_1c0);
            }
          }
          goto LAB_1079059c4;
        }
        if ((bVar14 & 1) == 0) goto LAB_107905ac0;
      }
      ppppuStack_f8 = pppppuVar44[8];
      uStack_100 = (ulong *****)pppppuVar44[7];
      ppppuStack_e8 = pppppuVar44[10];
      ppppuStack_f0 = pppppuVar44[9];
      ppppuStack_d8 = pppppuVar44[0xc];
      ppppuStack_e0 = pppppuVar44[0xb];
      ppppuStack_c8 = pppppuVar44[0xe];
      pppuStack_d0 = (ulong ***)pppppuVar44[0xd];
      func_0x0001079008bc(&ppppuStack_c0,pppppuVar44 + 0xf);
      ppppuStack_e8 = (ulong ****)((ulong)ppppuStack_e8 & 0xffffffffffffff00);
      pppppuVar34 = &ppppuStack_278;
      func_0x0001079063f8(pppppuVar34,pppppuVar44 + 4);
      ppppuVar49 = ppppuStack_c8;
      pppuVar46 = pppuStack_d0;
      ppppuVar35 = ppppuStack_e0;
      ppppuVar33 = ppppuStack_e8;
      param_2 = (ulong *****)ppppuStack_f0;
      ppppuVar37 = ppppuStack_f8;
      pppppuVar44 = uStack_100;
      pppppuVar34[5] = ppppuStack_d8;
      pppppuVar34[4] = ppppuVar35;
      pppppuVar34[7] = ppppuVar49;
      pppppuVar34[6] = (ulong ****)pppuVar46;
      pppppuVar34[1] = ppppuVar37;
      *pppppuVar34 = (ulong ****)pppppuVar44;
      pppppuVar34[3] = ppppuVar33;
      pppppuVar34[2] = (ulong ****)param_2;
      pppppuVar29 = &ppppuStack_c0;
      func_0x0001078f4ae0(pppppuVar34 + 8);
      pppppuVar34 = &ppppuStack_c0;
      func_0x0001078f4acc();
    }
    else if ((((ulong)pppppuVar34[7] & 1) == 0) && ((*(byte *)((long)pppppuVar34 + 0x39) & 1) == 0))
    {
      bVar14 = *(byte *)((long)pppppuVar34 + 0x3a);
      goto LAB_107905924;
    }
LAB_107905ac0:
    func_0x00010791598c();
    pppppuVar44 = pppppuVar34;
  }
  func_0x000107911454(ppppuStack_158);
  ppppuStack_1b8 = (ulong ****)0x0;
  ppppuStack_1c0 = (ulong ****)0x2;
  ppppuStack_1b0 = (ulong ****)0xffffffffffffffff;
  func_0x0001079112fc(&ppppuStack_260);
  func_0x000107917618();
  pppppuVar34 = (ulong *****)0x0;
LAB_107905b88:
  pppppuVar41 = pppppuVar44 + -0x1fe;
LAB_107905b8c:
  func_0x00010790efe4(&ppppuStack_260);
  uVar39 = uStack_268;
  if (pppppuVar44 != pppppuVar29) goto code_r0x000107905b9c;
  func_0x000107915654();
  uStack_100 = &ppppuStack_140;
  ppppuStack_f8 = (ulong ****)((ulong)ppppuStack_f8 & 0xffffffffffffff00);
  if (uVar39 == 0) goto LAB_107905c58;
  if (uVar39 < 0x492492492492493) {
    pppppuVar29 = (ulong *****)(uVar39 * 0x38);
    pppppuVar34 = pppppuVar29;
    __Znwm();
    ppppuStack_138 = (ulong ****)(pppppuVar34 + uVar39 * 7);
    pppppuVar44 = pppppuVar34;
    for (; ppppuStack_140 = (ulong ****)pppppuVar34, ppppuStack_130 = ppppuStack_138,
        pppppuVar29 != (ulong *****)0x0; pppppuVar29 = pppppuVar29 + -7) {
      *pppppuVar44 = (ulong ****)0xffffffffffffffff;
      pppppuVar44[1] = (ulong ****)0xffffffffffffffff;
      pppppuVar44[2] = (ulong ****)0xffffffffffffffff;
      pppppuVar44[3] = (ulong ****)0x0;
      pppppuVar44[4] = (ulong ****)0x0;
      pppppuVar44 = pppppuVar44 + 7;
    }
LAB_107905c58:
    ppppuStack_f8 = (ulong ****)CONCAT71(ppppuStack_f8._1_7_,1);
    pppppuVar44 = (ulong *****)&uStack_100;
    func_0x00010791180c();
    lVar32 = 0;
    lVar12 = 0;
    uVar21 = 0;
    pppppuVar29 = (ulong *****)ppppuStack_278;
    while (pppppuVar34 = (ulong *****)ppppuStack_140, pppppuVar29 != (ulong *****)&pppuStack_270) {
      ppppuVar33 = pppppuVar29[9];
      func_0x000107916430(*(undefined1 *)(pppppuVar29 + 10));
      ppppuVar37 = ppppuStack_140;
      pppppuVar34 = (ulong *****)(ppppuStack_140 + lVar32 * 7);
      ppppuVar49 = pppppuVar29[5];
      ppppuVar35 = pppppuVar29[4];
      pppppuVar34[2] = pppppuVar29[6];
      pppppuVar34[1] = ppppuVar49;
      *pppppuVar34 = ppppuVar35;
      pppppuVar34[3] = (ulong ****)param_2;
      pppppuVar34[4] = (ulong ****)ABS((double)ppppuVar33);
      ppppuVar33 = pppppuVar29[4];
      if (ppppuVar33 == (ulong ****)0x2) {
        pppppuVar44 = (ulong *****)pppppuVar29[5];
        func_0x000107911778(pppppuVar44,&ppppuStack_260);
LAB_107905d28:
        ppppuVar33 = *pppppuVar44;
        ppppuVar35 = pppppuVar44[1];
        ppppuVar37[lVar32 * 7 + 6] = (ulong ***)0x8000000080000000;
        ppppuVar37[lVar32 * 7 + 5] = (ulong ***)0x7fffffff7fffffff;
        if (ppppuVar33 != ppppuVar35) {
          uVar15 = *(uint *)ppppuVar33;
          *(uint *)(ppppuVar37 + lVar32 * 7 + 5) = uVar15;
          uVar19 = *(uint *)((long)ppppuVar33 + 4);
          *(uint *)((long)ppppuVar37 + lVar32 * 0x38 + 0x2c) = uVar19;
          uVar23 = *(uint *)ppppuVar33;
          *(uint *)(ppppuVar37 + lVar32 * 7 + 6) = uVar23;
          uVar4 = *(uint *)((long)ppppuVar33 + 4);
          do {
            uVar25 = uVar4;
            *(uint *)((long)ppppuVar37 + lVar32 * 0x38 + 0x34) = uVar25;
            ppppuVar49 = ppppuVar33;
            do {
              ppppuVar33 = ppppuVar49 + 1;
              if (ppppuVar33 == ppppuVar35) goto LAB_107905db8;
              uVar4 = *(uint *)ppppuVar33;
              if ((int)uVar4 < (int)uVar15) {
                *(uint *)(ppppuVar37 + lVar32 * 7 + 5) = uVar4;
                uVar15 = uVar4;
              }
              if ((int)uVar23 < (int)uVar4) {
                *(uint *)(ppppuVar37 + lVar32 * 7 + 6) = uVar4;
                uVar23 = uVar4;
              }
              uVar4 = *(uint *)((long)ppppuVar49 + 0xc);
              if ((int)uVar4 < (int)uVar19) {
                *(uint *)((long)ppppuVar37 + lVar32 * 0x38 + 0x2c) = uVar4;
                uVar19 = uVar4;
              }
              ppppuVar49 = ppppuVar33;
            } while ((int)uVar4 <= (int)uVar25);
          } while( true );
        }
      }
      else {
        if (ppppuVar33 == (ulong ****)0x1) {
          ppppuVar33 = pppppuVar29[6];
          pppppuVar44 = (ulong *****)(*param_4 + (long)pppppuVar29[5] * 6);
          if (-1 < (long)ppppuVar33) {
            ppppuVar35 = pppppuVar44[3];
LAB_107905d14:
            pppppuVar44 = (ulong *****)(ppppuVar35 + (long)ppppuVar33 * 3);
          }
          goto LAB_107905d28;
        }
        if (ppppuVar33 == (ulong ****)0x0) {
          ppppuVar33 = pppppuVar29[6];
          pppppuVar44 = param_3;
          if (-1 < (long)ppppuVar33) {
            ppppuVar35 = param_3[3];
            goto LAB_107905d14;
          }
          goto LAB_107905d28;
        }
      }
LAB_107905db8:
      if (0.0 < (double)ppppuVar37[lVar32 * 7 + 3]) {
        uVar21 = uVar21 + 1;
        lVar12 = lVar32;
      }
      func_0x00010791598c();
      lVar32 = lVar32 + 1;
      pppppuVar29 = pppppuVar44;
    }
    if (uVar21 == uVar39) {
LAB_107905de8:
      func_0x000107917ba4();
      pppppuVar34 = (ulong *****)ppppuStack_278;
    }
    else {
      bVar7 = uVar21 != 0;
      if (uVar21 == 1) {
        pppppuVar44 = (ulong *****)(ppppuStack_140 + lVar12 * 7);
        ppppuStack_f8 = pppppuVar44[1];
        uStack_100 = (ulong *****)*pppppuVar44;
        ppppuStack_f0 = pppppuVar44[2];
        pppppuVar29 = &ppppuStack_278;
        func_0x0001079063f8(pppppuVar29,&uStack_100);
        pppppuVar44 = pppppuVar29;
        for (pppppuVar34 = (ulong *****)ppppuStack_140; pppppuVar34 != (ulong *****)ppppuStack_138;
            pppppuVar34 = pppppuVar34 + 7) {
          if (lVar12 != 0) {
            pppppuVar44 = &ppppuStack_278;
            func_0x0001079063f8(pppppuVar44,pppppuVar34);
            func_0x000107916064();
            pppppuVar44[6] = extraout_x8_22;
            pppppuVar44 = pppppuVar29 + 8;
            func_0x0001078f59c4(pppppuVar44,pppppuVar34);
          }
          lVar12 = lVar12 + -1;
        }
        goto LAB_107905de8;
      }
      ppppuStack_f0 = (ulong ****)&ppppuStack_260;
      ppppuStack_e8 = (ulong ****)&ppppuStack_278;
      ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffffffffffff00);
      uStack_100 = param_3;
      ppppuStack_f8 = (ulong ****)param_4;
      ppppuStack_e0 = (ulong ****)param_7;
      func_0x000107917008(ppppuStack_138);
      pppppuVar29 = extraout_x8_23;
      if (bVar7) {
        func_0x000107916984();
        ppppuStack_158 = (ulong ****)0x8000000080000000;
        ppppuStack_160 = (ulong ****)0x7fffffff7fffffff;
        pppppuVar44 = extraout_x8_24;
        for (; pppppuVar34 != pppppuVar44; pppppuVar34 = pppppuVar34 + 7) {
          func_0x000107906ecc(&ppppuStack_160,pppppuVar34 + 5);
          func_0x00010791830c();
          func_0x000107911ac8();
          pppppuVar44 = (ulong *****)ppppuStack_138;
        }
        func_0x00010791740c(&ppppuStack_160);
        FUN_107911848();
        pppppuVar44 = &ppppuStack_1c0;
        FUN_1079122ac();
      }
      else {
        while (pppppuVar41 = pppppuVar34, pppppuVar41 != pppppuVar29) {
          for (pppppuVar24 = pppppuVar41 + 7; pppppuVar34 = pppppuVar41 + 7,
              pppppuVar24 != pppppuVar29; pppppuVar24 = pppppuVar24 + 7) {
            pppppuVar44 = (ulong *****)&uStack_100;
            func_0x000107911918(pppppuVar44,pppppuVar41,pppppuVar24);
            pppppuVar29 = (ulong *****)ppppuStack_138;
          }
        }
      }
      func_0x000107917ba4();
      pppppuVar29 = (ulong *****)ppppuStack_278;
      while (pppppuVar34 = (ulong *****)ppppuStack_278, pppppuVar29 != (ulong *****)&pppuStack_270)
      {
        if (-1 < (long)pppppuVar29[0xb]) {
          pppppuVar44 = &ppppuStack_278;
          func_0x0001079063f8();
          pppppuVar44 = pppppuVar44 + 8;
          func_0x0001078f59c4(pppppuVar44,pppppuVar29 + 4);
        }
        func_0x000107915240();
        pppppuVar29 = pppppuVar44;
      }
    }
    while (uVar9 = pppppuVar34 == (ulong *****)&pppuStack_270, !(bool)uVar9) {
      if (((*(byte *)((long)pppppuVar34 + 0x51) & 1) == 0) &&
         (pppppuVar34[0xb] == (ulong ****)0xffffffffffffffff)) {
        ppppuStack_e8 = (ulong ****)0x0;
        ppppuStack_f0 = (ulong ****)0x0;
        ppppuStack_d8 = (ulong ****)0x0;
        ppppuStack_e0 = (ulong ****)0x0;
        ppppuStack_f8 = (ulong ****)0x0;
        uStack_100 = (ulong *****)0x0;
        pppppuVar44 = (ulong *****)pppppuVar34[4];
        ppppuStack_1b8 = pppppuVar34[5];
        ppppuStack_1c0 = (ulong ****)pppppuVar44;
        ppppuStack_1b0 = pppppuVar34[6];
        func_0x000107918158();
        func_0x000107912334();
        for (ppppuVar37 = pppppuVar34[0xf]; ppppuVar33 = ppppuStack_e0,
            pppppuVar41 = (ulong *****)ppppuStack_e8, uVar9 = ppppuVar37 == pppppuVar34[0x10],
            pppppuVar29 = (ulong *****)&pppuStack_270, pppppuVar24 = (ulong *****)&pppuStack_270,
            !(bool)uVar9; ppppuVar37 = ppppuVar37 + 3) {
          while (pppppuVar41 = (ulong *****)*pppppuVar29, pppppuVar41 != (ulong *****)0x0) {
            func_0x000107918928(pppppuVar41 + 4,ppppuVar37);
            lVar32 = 8;
            if ((bool)uVar9) {
              lVar32 = 0;
            }
            pppppuVar29 = (ulong *****)((long)pppppuVar41 + lVar32);
            if ((bool)uVar9) {
              pppppuVar24 = pppppuVar41;
            }
          }
          if ((((ulong *****)&pppuStack_270 != pppppuVar24) &&
              (ppppuVar33 = ppppuVar37, func_0x0001078ee35c(ppppuVar37,pppppuVar24 + 4),
              ((ulong)ppppuVar33 & 1) == 0)) && ((*(byte *)((long)pppppuVar24 + 0x51) & 1) == 0)) {
            pppppuVar44 = (ulong *****)*ppppuVar37;
            ppppuStack_1b8 = (ulong ****)ppppuVar37[1];
            ppppuStack_1c0 = (ulong ****)pppppuVar44;
            ppppuStack_1b0 = (ulong ****)ppppuVar37[2];
            func_0x000107918158();
            func_0x000107912334();
          }
        }
        uVar39 = (long)ppppuStack_f8 - (long)uStack_100 >> 3;
        for (pppppuVar29 = (ulong *****)ppppuStack_e8; pppppuVar29 != (ulong *****)ppppuStack_e0;
            pppppuVar29 = pppppuVar29 + 3) {
          uVar39 = uVar39 + ((long)pppppuVar29[1] - (long)*pppppuVar29 >> 3);
        }
        if (3 < uVar39) {
          pppppuVar29 = uStack_100;
          func_0x000107911728();
          dVar50 = 0.0;
          pppppuVar34 = pppppuVar44;
          for (; pppppuVar41 != (ulong *****)ppppuVar33; pppppuVar41 = pppppuVar41 + 3) {
            pppppuVar29 = (ulong *****)*pppppuVar41;
            func_0x000107911728(pppppuVar29,pppppuVar41[1]);
            dVar50 = dVar50 + (double)pppppuVar34;
          }
          func_0x000107914cfc();
          if ((((ulong)pppppuVar29 & 1) == 0) && (0.0 < (double)pppppuVar44 + dVar50)) {
            uVar39 = param_6[1];
            if (uVar39 < (ulong)param_6[2]) {
              func_0x0001079124d8(uVar39,&uStack_100);
              lVar32 = uVar39 + 0x30;
              param_6[1] = lVar32;
            }
            else {
              plVar13 = param_6;
              func_0x000107903050(param_6,(long)(uVar39 - *param_6) / 0x30 + 1);
              func_0x0001079030e0(&ppppuStack_1c0,plVar13,(param_6[1] - *param_6) / 0x30,param_6 + 2
                                 );
              func_0x0001079124d8(ppppuStack_1b0,&uStack_100);
              ppppuStack_1b0 = ppppuStack_1b0 + 6;
              func_0x00010790307c(param_6,&ppppuStack_1c0);
              lVar32 = param_6[1];
              func_0x000107903128(&ppppuStack_1c0);
            }
            param_6[1] = lVar32;
          }
        }
        pppppuVar44 = (ulong *****)&uStack_100;
        func_0x0001079126fc();
      }
      func_0x000107915114();
      pppppuVar34 = pppppuVar44;
    }
    func_0x000107917cd8();
    func_0x0001079125b8(&ppppuStack_260);
    func_0x0001078f4774(pppuStack_220);
    func_0x0001078f612c(pppuStack_208);
    func_0x000107912678(&pppuStack_1f0);
    goto LAB_107906008;
  }
  goto LAB_1079061dc;
code_r0x000107905b9c:
  func_0x0001079116b8(&uStack_100,pppppuVar44);
  func_0x000107917d18();
  pppppuVar29 = (ulong *****)&uStack_100;
  func_0x0001079064a0();
  pppppuVar24 = &ppppuStack_c0;
  func_0x0001078f4acc();
  func_0x000107917d18();
  *(undefined1 *)(pppppuVar24 + 3) = 0;
  pppppuVar34 = (ulong *****)((long)pppppuVar34 + 1);
  ppppuStack_1b8 = (ulong ****)pppppuVar34;
  pppppuVar44 = pppppuVar44 + 3;
  pppppuVar41 = pppppuVar41 + 3;
  if ((ulong *****)*puVar43 == pppppuVar41) goto code_r0x000107905be0;
  goto LAB_107905b8c;
code_r0x000107905be0:
  puVar43 = puVar43 + 1;
  pppppuVar44 = (ulong *****)*puVar43;
  goto LAB_107905b88;
}



/* Entry: 107906940; end: 107906a03;  */

/* WARNING: Possible PIC construction at 0x0001079069fc: Changing call to branch */

void FUN_107906940(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar1;
  ulong unaff_x24;
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if ((bool)in_CY) {
    func_0x0001079171d4(0x276276276276276);
    func_0x0001079146e8();
    if ((bool)in_CY && !(bool)in_ZR) {
code_r0x000107906a04:
      func_0x000107913ad0();
      func_0x000107913cd4();
      for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x68) {
        func_0x000107917f18();
        func_0x00010791535c();
        func_0x000107906f60();
      }
      return;
    }
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      param_1 = (long *)0x0;
    }
    else {
      if (extraout_x8 < unaff_x24) {
        func_0x000104bd35f4();
        goto code_r0x000107906a04;
      }
      func_0x000107917c18();
    }
    func_0x000107913e1c((long)param_1 + unaff_x22);
    lVar1 = (long)param_1 + unaff_x22 + 0x68;
    func_0x0001079138bc(0xffffffffffffff98);
    func_0x000107916e4c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    func_0x000107913e1c();
    lVar1 = unaff_x22 + 0x68;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 107906fdc; end: 10790700f;  */

void FUN_107906fdc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001079072d4(uVar1,*(undefined4 *)(unaff_x21 + 8));
  func_0x0001079187c4();
  *(undefined4 *)(unaff_x20 + 8) = uVar1;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1079073ac; end: 1079073d3;  */

undefined1  [16] FUN_1079073ac(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079073dc();
  func_0x000107916ef8();
  return auStack_30;
}



/* Entry: 1079081b4; end: 10790822b;  */

long * FUN_1079081b4(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    iVar1 = *(int *)param_1[3];
    iVar2 = ((int *)param_1[3])[1];
    for (uVar4 = 0;
        (plVar3 = (long *)param_1[4], iVar1 == (int)*plVar3 && iVar2 == *(int *)((long)plVar3 + 4)
        && (uVar4 < *(ulong *)(*param_1 + 0x48))); uVar4 = uVar4 + 1) {
      func_0x0001079092b0(param_1 + 4);
    }
    param_1[8] = *plVar3;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1 + 8;
}



/* Entry: 107908b1c; end: 107908cab;  */

void FUN_107908b1c(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_30 [16];
  
  *param_1 = param_2;
  uVar1 = *param_3;
  param_1[1] = uVar1;
  if (uVar1 == 0) {
    func_0x0001078eced4(auStack_30);
    func_0x000107917948();
    func_0x0001079153bc();
LAB_107908c98:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x107908c9c);
    (*pcVar4)();
  }
  if (param_2 == 0) {
    uVar5 = 1;
  }
  else {
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = -0x80000000 / (int)uVar1;
    }
    uVar5 = param_2;
    do {
      uVar7 = uVar5;
      uVar5 = 0x80000000 - iVar3 * uVar1;
    } while (uVar7 == 0x80000000);
    iVar3 = 0;
    if (uVar7 != 0) {
      iVar3 = -0x80000000 / (int)uVar7;
    }
    uVar5 = uVar1;
    do {
      uVar6 = uVar5;
      uVar5 = 0x80000000 - iVar3 * uVar7;
    } while (uVar6 == 0x80000000);
    uVar5 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    uVar7 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = uVar5;
    if (uVar7 <= uVar5) {
      uVar6 = uVar7;
    }
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    uVar7 = uVar6;
    if ((uVar5 != 0) && (uVar7 = uVar5, uVar6 != 0)) {
      uVar7 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      uVar5 = uVar5 >> (ulong)(uVar7 & 0x1f);
      uVar8 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      uVar6 = uVar6 >> (ulong)(uVar8 & 0x1f);
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      while (1 < (int)uVar6) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar8 * uVar6;
        uVar6 = uVar6 - uVar5;
        if (uVar5 == 0) {
          uVar7 = uVar6 << (ulong)(uVar7 & 0x1f);
          goto LAB_107908c28;
        }
        uVar8 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar5 = uVar5 >> (ulong)((uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10) & 0x1f);
        uVar2 = ((ulong)uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | ((ulong)uVar6 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar8 = (int)uVar6 >>
                ((uint)LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
        uVar6 = uVar5;
        if ((int)uVar8 <= (int)uVar5) {
          uVar6 = uVar8;
        }
        if ((int)uVar5 <= (int)uVar8) {
          uVar5 = uVar8;
        }
      }
      if (uVar6 == 1) {
        uVar5 = 1;
      }
      uVar7 = uVar5 << (ulong)(uVar7 & 0x1f);
    }
LAB_107908c28:
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = (int)param_2 / (int)uVar7;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = (int)uVar1 / (int)uVar7;
    }
    *param_1 = uVar6;
    param_1[1] = uVar5;
    if (uVar5 == 0x80000000) {
      func_0x0001078ecef4(auStack_30);
      func_0x000107917948();
      func_0x0001079153bc();
      goto LAB_107908c98;
    }
    if (-1 < (int)uVar5) {
      return;
    }
    *param_1 = -uVar6;
    uVar5 = -uVar5;
  }
  param_1[1] = uVar5;
  return;
}



/* Entry: 107909058; end: 1079090db;  */

void FUN_107909058(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10790930c; end: 10790939f;  */

void FUN_10790930c(void)

{
  undefined1 in_ZR;
  
  func_0x000107913fec();
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if (!(bool)in_ZR) {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x0001079095fc();
    func_0x0001079148c4();
    func_0x000107914aa0();
    func_0x0001079096bc();
    func_0x0001079148b4();
    func_0x000107914aa0();
    func_0x0001079096bc();
  }
  func_0x00010791658c();
  func_0x000107914d88();
  func_0x0001079095fc();
  func_0x0001079165f8();
  func_0x000107914d88();
  func_0x0001079095fc();
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return;
}



/* Entry: 1079097cc; end: 10790997b;  */

void FUN_1079097cc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  FUN_107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_107909880;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_107909808:
    func_0x0001079142a0();
    func_0x00010790997c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto LAB_107909808;
    func_0x000107914d1c();
    func_0x000107913668();
    func_0x0001079099d8();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      func_0x00010791683c();
      func_0x000107913810();
      func_0x0001079099d8();
      func_0x0001079137f8();
      func_0x0001079099d8();
      goto LAB_107909880;
    }
  }
  func_0x000107914290();
  func_0x00010790997c();
  func_0x0001079142b0();
  func_0x00010790997c();
LAB_107909880:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x00010791682c();
      func_0x000107913840();
      func_0x0001079099d8();
      func_0x000107913828();
      func_0x0001079099d8();
    }
    else {
      func_0x0001079145fc();
      func_0x00010790997c();
      func_0x0001079142e0();
      func_0x00010790997c();
    }
  }
  func_0x000107914d34(uStack_60);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x0001079137b0();
    func_0x0001079099d8();
  }
  else {
    func_0x0001079145ec();
    func_0x00010790997c();
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x0001079137c8();
    func_0x0001079099d8();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790997c();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 107909f80; end: 107909fb3;  */

/* WARNING: Possible PIC construction at 0x00010790a2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790a380) */
/* WARNING: Removing unreachable block (ram,0x00010790a378) */
/* WARNING: Removing unreachable block (ram,0x00010790a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010790a2bc) */
/* WARNING: Removing unreachable block (ram,0x00010790a324) */

void FUN_107909f80(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar5;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uStack_f0;
  long *plStack_e8;
  
  uVar3 = param_2[1] - *param_2 == 0x80;
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (uVar3 = param_4 == 99, 99 < param_4))
  goto code_r0x00010790a218;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x00010790a218;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914230(), (bool)uVar1)) {
        func_0x000107914d28();
        uStack_f0 = param_1;
        plStack_e8 = param_2;
        func_0x000107913668();
        func_0x00010790a428();
        func_0x000107914220();
        if (((bool)uVar1) &&
           ((func_0x0001079142c0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x000107916834();
            uStack_f0 = param_1;
            plStack_e8 = param_2;
            func_0x000107913810();
            func_0x00010790a428();
            func_0x0001079137f8();
            func_0x00010790a428();
            goto code_r0x00010790a32c;
          }
        }
        func_0x000107914290();
        unaff_x30 = &UNK_10790a324;
        register0x00000008 = (BADSPACEBASE *)&uStack_f0;
        goto code_r0x00010790a218;
      }
    }
    func_0x0001079142a0();
    unaff_x30 = &UNK_10790a2bc;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
    goto code_r0x00010790a218;
  }
code_r0x00010790a32c:
  func_0x000107915a78();
  if ((bool)uVar3) {
    func_0x0001079176fc();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
code_r0x00010790a390:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914200(), (bool)uVar1)) {
        func_0x0001079137b0();
        func_0x00010790a428();
        func_0x0001079141f0();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107914280(), bVar2)) {
            func_0x0001079137c8();
            func_0x00010790a428();
            func_0x000107914e10();
            func_0x000107914df0();
            func_0x000107914dbc();
            func_0x000107914e18();
            func_0x000107914e20();
            func_0x000107914dc4();
            return;
          }
        }
        func_0x0001079142f0();
        unaff_x30 = &UNK_10790a3c4;
        register0x00000008 = (BADSPACEBASE *)&uStack_f0;
        goto code_r0x00010790a218;
      }
    }
    func_0x0001079145ec();
    unaff_x30 = &UNK_10790a3b4;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
  }
  else {
    func_0x0001079156e4();
    if (((bool)uVar1) && (func_0x000107914210(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x000107916824();
        uStack_f0 = param_1;
        plStack_e8 = param_2;
        func_0x000107913840();
        func_0x00010790a428();
        func_0x000107913828();
        func_0x00010790a428();
        goto code_r0x00010790a390;
      }
    }
    func_0x0001079145fc();
    unaff_x30 = &UNK_10790a378;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
  }
code_r0x00010790a218:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x000107909c84();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}


