/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a66d9c8; end: 10a66d9fb;  */

undefined1  [16] FUN_10a66d9c8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*param_2;
    func_0x000107c3192c(param_1,puVar2,param_2[1]);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    puVar2 = param_2;
  }
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar2 = (undefined8 *)param_2[4];
    func_0x000107c3192c(param_1 + 4,puVar2,param_2[5]);
  }
  else {
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  param_1[7] = param_2[7];
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    puVar2 = (undefined8 *)param_2[8];
    func_0x000107c3192c(param_1 + 8,puVar2,param_2[9]);
  }
  else {
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  uVar4 = param_2[0xc];
  uVar3 = param_2[0xb];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xb] = uVar3;
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10a66d9fc; end: 10a66daeb;  */

undefined8 * FUN_10a66d9fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  param_1[7] = param_2[7];
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    func_0x000107c3192c(param_1 + 8,param_2[8],param_2[9]);
  }
  else {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
  }
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 10a66daec; end: 10a66db3f;  */

void FUN_10a66daec(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a66db40; end: 10a66dbaf;  */

void FUN_10a66db40(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x70;
        FUN_10a66daec(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a66dbb0; end: 10a66dbe7;  */

long * FUN_10a66dbb0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a36f358();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    return plVar1;
  }
  FUN_10a36f344();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    param_4[3] = param_2[3];
    param_4 = plStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a36f444(&plStack_80);
  return param_4;
}



/* Entry: 10a66dbe8; end: 10a66dcaf;  */

undefined8 *
FUN_10a66dbe8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a36f444(&uStack_60);
  return param_4;
}



/* Entry: 10a66dcb0; end: 10a66dd07;  */

long FUN_10a66dcb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a66dd08; end: 10a66dd2f;  */

void FUN_10a66dd08(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a0d6180();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a66dd30; end: 10a66def3;  */

void FUN_10a66dd30(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0d6180();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a66def4; end: 10a66df3b;  */

void FUN_10a66def4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd8a0;
  __Znwm();
  FUN_10a66df3c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a66df3c; end: 10a66df83;  */

undefined8 * FUN_10a66df3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c07cb8;
  FUN_10a66dfbc(param_1 + 3);
  return param_1;
}



/* Entry: 10a66df84; end: 10a66df93;  */

void FUN_10a66df84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07cb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a66df94; end: 10a66dfb3;  */

void FUN_10a66df94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07cb8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66dfb4; end: 10a66dfbb;  */

void FUN_10a66dfb4(void)

{
  return;
}



/* Entry: 10a66dfbc; end: 10a66e1ab;  */

long FUN_10a66dfbc(long param_1)

{
  undefined1 auVar1 [16];
  
  _bzero(param_1,0xd888);
  *(undefined8 *)(param_1 + 0xc) = 0x447a00003f800000;
  *(undefined8 *)(param_1 + 4) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3a83126f;
  auVar1 = NEON_fmov(0x3f800000,4);
  *(long *)(param_1 + 0x2c) = auVar1._8_8_;
  *(long *)(param_1 + 0x24) = auVar1._0_8_;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  FUN_10ad1e67c(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x418c) = 0;
  *(undefined8 *)(param_1 + 0x4174) = 0;
  *(undefined8 *)(param_1 + 0x416c) = 0;
  *(undefined8 *)(param_1 + 0x4184) = 0;
  *(undefined8 *)(param_1 + 0x417c) = 0;
  *(undefined8 *)(param_1 + 0x4154) = 0;
  *(undefined8 *)(param_1 + 0x414c) = 0;
  *(undefined8 *)(param_1 + 0x4164) = 0;
  *(undefined8 *)(param_1 + 0x415c) = 0;
  *(undefined8 *)(param_1 + 0x4134) = 0;
  *(undefined8 *)(param_1 + 0x412c) = 0;
  *(undefined8 *)(param_1 + 0x4144) = 0;
  *(undefined8 *)(param_1 + 0x413c) = 0;
  *(undefined8 *)(param_1 + 0x4114) = 0;
  *(undefined8 *)(param_1 + 0x410c) = 0;
  *(undefined8 *)(param_1 + 0x4124) = 0;
  *(undefined8 *)(param_1 + 0x411c) = 0;
  *(undefined8 *)(param_1 + 0x40f4) = 0;
  *(undefined8 *)(param_1 + 0x40ec) = 0;
  *(undefined8 *)(param_1 + 0x4104) = 0;
  *(undefined8 *)(param_1 + 0x40fc) = 0;
  *(undefined8 *)(param_1 + 0x40d4) = 0;
  *(undefined8 *)(param_1 + 0x40cc) = 0;
  *(undefined8 *)(param_1 + 0x40e4) = 0;
  *(undefined8 *)(param_1 + 0x40dc) = 0;
  *(undefined8 *)(param_1 + 0x40b4) = 0;
  *(undefined8 *)(param_1 + 0x40ac) = 0;
  *(undefined8 *)(param_1 + 0x40c4) = 0;
  *(undefined8 *)(param_1 + 0x40bc) = 0;
  *(undefined8 *)(param_1 + 0x4094) = 0;
  *(undefined8 *)(param_1 + 0x408c) = 0;
  *(undefined8 *)(param_1 + 0x40a4) = 0;
  *(undefined8 *)(param_1 + 0x409c) = 0;
  *(undefined4 *)(param_1 + 0x41a4) = 0x3f800000;
  _bzero(param_1 + 0x41a8,0x21c);
  *(undefined8 *)(param_1 + 0x4458) = 0;
  *(undefined8 *)(param_1 + 0x4440) = 0;
  *(undefined8 *)(param_1 + 0x4438) = 0;
  *(undefined8 *)(param_1 + 0x4450) = 0;
  *(undefined8 *)(param_1 + 0x4448) = 0;
  *(undefined8 *)(param_1 + 0x4420) = 0;
  *(undefined8 *)(param_1 + 0x4418) = 0;
  *(undefined8 *)(param_1 + 0x4430) = 0;
  *(undefined8 *)(param_1 + 0x4428) = 0;
  *(undefined8 *)(param_1 + 0x4400) = 0;
  *(undefined8 *)(param_1 + 0x43f8) = 0;
  *(undefined8 *)(param_1 + 0x4410) = 0;
  *(undefined8 *)(param_1 + 0x4408) = 0;
  *(undefined8 *)(param_1 + 0x43e0) = 0;
  *(undefined8 *)(param_1 + 0x43d8) = 0;
  *(undefined8 *)(param_1 + 0x43f0) = 0;
  *(undefined8 *)(param_1 + 0x43e8) = 0;
  *(undefined8 *)(param_1 + 0x43d0) = 0;
  *(undefined8 *)(param_1 + 0x43c8) = 0;
  *(undefined4 *)(param_1 + 0x446c) = 0xac44;
  *(undefined8 *)(param_1 + 0x4470) = 0x3dc1e2fa45827800;
  *(undefined4 *)(param_1 + 0x4478) = 0x3fc90fdb;
  *(undefined8 *)(param_1 + 0x419c) = 0x3fc90fdb3dc1e2fa;
  *(undefined8 *)(param_1 + 0x4194) = 0x3fc90fdb3dc1e2fa;
  *(undefined4 *)(param_1 + 0x4460) = 0xac44;
  *(undefined4 *)(param_1 + 0x43c4) = 0xac44;
  *(undefined8 *)(param_1 + 0x4484) = 0;
  *(undefined8 *)(param_1 + 0x447c) = 0;
  *(undefined8 *)(param_1 + 0x4494) = 0;
  *(undefined8 *)(param_1 + 0x448c) = 0;
  *(undefined8 *)(param_1 + 0x44a4) = 0;
  *(undefined8 *)(param_1 + 0x449c) = 0;
  *(undefined8 *)(param_1 + 0x44b4) = 0;
  *(undefined8 *)(param_1 + 0x44ac) = 0;
  *(undefined8 *)(param_1 + 0x44c4) = 0;
  *(undefined8 *)(param_1 + 0x44bc) = 0;
  *(undefined8 *)(param_1 + 0x44d4) = 0;
  *(undefined8 *)(param_1 + 0x44cc) = 0;
  *(undefined8 *)(param_1 + 0x44e4) = 0;
  *(undefined8 *)(param_1 + 0x44dc) = 0;
  *(undefined8 *)(param_1 + 0x44f4) = 0;
  *(undefined8 *)(param_1 + 0x44ec) = 0;
  *(undefined8 *)(param_1 + 0x4504) = 0;
  *(undefined8 *)(param_1 + 0x44fc) = 0;
  *(undefined8 *)(param_1 + 0x4514) = 0;
  *(undefined8 *)(param_1 + 0x450c) = 0;
  *(undefined8 *)(param_1 + 0x4524) = 0;
  *(undefined8 *)(param_1 + 0x451c) = 0;
  *(undefined8 *)(param_1 + 0x4534) = 0;
  *(undefined8 *)(param_1 + 0x452c) = 0;
  *(undefined8 *)(param_1 + 0x4544) = 0;
  *(undefined8 *)(param_1 + 0x453c) = 0;
  *(undefined8 *)(param_1 + 0x4554) = 0;
  *(undefined8 *)(param_1 + 0x454c) = 0;
  *(undefined8 *)(param_1 + 0x4564) = 0;
  *(undefined8 *)(param_1 + 0x455c) = 0;
  *(undefined8 *)(param_1 + 0x4574) = 0;
  *(undefined8 *)(param_1 + 0x456c) = 0;
  *(undefined8 *)(param_1 + 0x457c) = 0;
  *(undefined4 *)(param_1 + 0x4594) = 0x3f800000;
  _bzero(param_1 + 0x4598,0x21c);
  *(undefined8 *)(param_1 + 0x4848) = 0;
  *(undefined8 *)(param_1 + 0x4830) = 0;
  *(undefined8 *)(param_1 + 0x4828) = 0;
  *(undefined8 *)(param_1 + 0x4840) = 0;
  *(undefined8 *)(param_1 + 0x4838) = 0;
  *(undefined8 *)(param_1 + 0x4810) = 0;
  *(undefined8 *)(param_1 + 0x4808) = 0;
  *(undefined8 *)(param_1 + 0x4820) = 0;
  *(undefined8 *)(param_1 + 0x4818) = 0;
  *(undefined8 *)(param_1 + 0x47f0) = 0;
  *(undefined8 *)(param_1 + 0x47e8) = 0;
  *(undefined8 *)(param_1 + 0x4800) = 0;
  *(undefined8 *)(param_1 + 0x47f8) = 0;
  *(undefined8 *)(param_1 + 0x47d0) = 0;
  *(undefined8 *)(param_1 + 0x47c8) = 0;
  *(undefined8 *)(param_1 + 0x47e0) = 0;
  *(undefined8 *)(param_1 + 0x47d8) = 0;
  *(undefined8 *)(param_1 + 0x47c0) = 0;
  *(undefined8 *)(param_1 + 0x47b8) = 0;
  *(undefined4 *)(param_1 + 0x485c) = 0xac44;
  *(undefined8 *)(param_1 + 0x4860) = 0x3dc1e2fa45827800;
  *(undefined4 *)(param_1 + 0x4868) = 0x3fc90fdb;
  *(undefined8 *)(param_1 + 0x458c) = 0x3fc90fdb3dc1e2fa;
  *(undefined8 *)(param_1 + 0x4584) = 0x3fc90fdb3dc1e2fa;
  *(undefined4 *)(param_1 + 0x4850) = 0xac44;
  *(undefined4 *)(param_1 + 0x47b4) = 0xac44;
  _bzero(param_1 + 0x486c,0x1008);
  *(undefined8 *)(param_1 + 0x5874) = 0x3ef942033f273030;
  *(undefined4 *)(param_1 + 0x587c) = 0x3e319fa1;
  _bzero(param_1 + 0x5888,0x8000);
  *(undefined4 *)(param_1 + 0x5883) = 0;
  *(undefined4 *)(param_1 + 0x5880) = 0;
  return param_1;
}



/* Entry: 10a66e1ac; end: 10a66e21b;  */

void FUN_10a66e1ac(undefined8 param_1,float param_2,long param_3,ulong param_4,long param_5,
                  long param_6)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  short *psVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  
  lVar3 = *(long *)(param_6 + 0x10);
  if (*(char *)(lVar3 + 0x5880) != '\x01') {
    if (param_5 != 1) {
      return;
    }
    uVar2 = (int)param_4 - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    lVar3 = (ulong)uVar2 + 1;
    puVar4 = (undefined2 *)(param_3 + (ulong)uVar2 * 2);
    puVar6 = (undefined2 *)(param_3 + (ulong)uVar2 * 4 + 2);
    do {
      uVar1 = *puVar4;
      puVar6[-1] = uVar1;
      *puVar6 = uVar1;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + -1;
      puVar6 = puVar6 + -2;
    } while (lVar3 != 0);
    return;
  }
  if (param_5 == 2) {
    uVar10 = param_4 >> 1;
    if (1 < param_4) {
      psVar5 = (short *)(lVar3 + 0x5888);
      psVar7 = (short *)(param_3 + 2);
      uVar8 = uVar10;
      do {
        *psVar5 = (short)((uint)(int)(short)(*psVar7 - (*psVar7 >> 0xf)) >> 1) +
                  (short)((uint)(int)(short)(psVar7[-1] - (psVar7[-1] >> 0xf)) >> 1);
        uVar8 = uVar8 - 1;
        psVar5 = psVar5 + 1;
        psVar7 = psVar7 + 2;
      } while (uVar8 != 0);
      goto LAB_10ad1f39c;
    }
  }
  else {
    _memcpy(lVar3 + 0x5888,param_3,param_4 << 1);
    uVar10 = param_4;
  }
  if (uVar10 == 0) {
    return;
  }
LAB_10ad1f39c:
  lVar9 = 0x5888;
  puVar4 = (undefined2 *)(param_3 + 2);
  do {
    fVar11 = (float)(int)*(short *)(lVar3 + lVar9) * 3.051851e-05;
    FUN_10ad1f1c4(lVar3);
    puVar4[-1] = (short)(int)(fVar11 * 32767.0);
    *puVar4 = (short)(int)(param_2 * 32767.0);
    lVar9 = lVar9 + 2;
    uVar10 = uVar10 - 1;
    puVar4 = puVar4 + 2;
  } while (uVar10 != 0);
  return;
}



/* Entry: 10a66e21c; end: 10a66e293;  */

void FUN_10a66e21c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xb1) = 1;
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a66e294; end: 10a66e2f3;  */

void FUN_10a66e294(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a66e2f4; end: 10a66e3a7;  */

void FUN_10a66e2f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e3a8(param_1,param_2,0x100,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e3a8; end: 10a66e42f;  */

void FUN_10a66e3a8(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10a66e430(param_2,param_5);
  FUN_10a076f00(param_7);
  func_0x000109898518(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10a66e430; end: 10a66e497;  */

void FUN_10a66e430(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c05048;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e54c(extraout_x8,plVar4,0x108,1,param_2,param_3,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a66e498; end: 10a66e54b;  */

void FUN_10a66e498(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e54c(param_1,param_2,0x108,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e54c; end: 10a66e5d3;  */

void FUN_10a66e54c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10a66e430(param_2,param_5);
  FUN_10a065020(param_7);
  func_0x00010989847c(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10a66e5d4; end: 10a66e697;  */

void FUN_10a66e5d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e430(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x110))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e698; end: 10a66e75b;  */

void FUN_10a66e698(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e430(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x118))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e75c; end: 10a66e81f;  */

void FUN_10a66e75c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x120))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e820; end: 10a66e887;  */

void FUN_10a66e820(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(plVar4,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar4 + 0x128))();
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar4;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a66e888; end: 10a66e94b;  */

void FUN_10a66e888(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x128))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66e94c; end: 10a66ea03;  */

void FUN_10a66e94c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e3a8(param_1,param_2,FUN_10a64dec8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66ea04; end: 10a66eabb;  */

void FUN_10a66ea04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e430(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66eabc; end: 10a66ec2f;  */

void FUN_10a66eabc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  char in_stack_ffffffffffffffa8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a440f5c(param_5);
  func_0x000109898518(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    if (plVar5[0x43] != 0) {
      fVar1 = (float)*(double *)(param_4 + 0x18);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
        fVar1 = 0.0;
      }
      FUN_10a3dd9ac(&plStack_68,plVar5[0x2e]);
      FUN_10a772390(fVar1,plStack_68,plVar5,param_2);
      if (in_stack_ffffffffffffffa8 == '\x01') {
        __ZNSt3__15mutex6unlockEv(in_stack_ffffffffffffffa0);
      }
      *param_1 = 0;
      plVar5 = plVar4 + 0x4b;
      lVar6 = plVar4[0x59];
      uVar7 = lVar6 - 1;
      plVar4[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar5[lVar6 + 2];
        if (plVar4[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar5;
      lVar11 = plVar4[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar4[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar8 >> 0x3c == 0) {
              lVar3 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar3 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar5 = lVar10;
              plVar4[0x4c] = lVar11 + uVar14 * 0x10;
              plVar4[0x4d] = lVar3 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar4[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar4[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar7;
      return;
    }
    FUN_10a00946c(&UNK_10f66a9de);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a66ec00);
  (*pcVar2)();
}



/* Entry: 10a66ec30; end: 10a66ec87;  */

ulong FUN_10a66ec30(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a66ec88,FUN_10a66ed94);
  }
  return param_1;
}



/* Entry: 10a66ec88; end: 10a66ed93;  */

void FUN_10a66ec88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar6 + 0xf0))(&stack0xffffffffffffffb0,plVar6);
  FUN_10a37eda4(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a66ed94; end: 10a66ef03;  */

/* WARNING: Removing unreachable block (ram,0x00010a66ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010a66ee80) */
/* WARNING: Removing unreachable block (ram,0x00010a66ee88) */
/* WARNING: Removing unreachable block (ram,0x00010a66ee90) */
/* WARNING: Removing unreachable block (ram,0x00010a66ee94) */

void FUN_10a66ed94(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a66ef04(param_5);
  FUN_10a44197c(&stack0xffffffffffffffa0,param_2,param_4);
  (**(code **)(*plVar6 + 0xf8))(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a66ef04; end: 10a66ef27;  */

void FUN_10a66ef04(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_2 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_2);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(plVar3,uVar5);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar3 + 0x150))(plVar3);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)param_1;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a66ef28; end: 10a66efef;  */

void FUN_10a66ef28(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x150))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66eff0; end: 10a66f0a3;  */

void FUN_10a66eff0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x188,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f0a4; end: 10a66f147;  */

void FUN_10a66f0a4(float param_1,undefined4 *param_2,long param_3,code *param_4,ulong param_5,
                  undefined8 param_6,int *param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  uVar6 = param_5;
  FUN_10a66e430(param_3,param_6);
  FUN_10a05ed04(param_8);
  if (*param_7 == 3) {
    if ((param_5 & 1) != 0) {
      param_4 = *(code **)(*(long *)(param_3 + ((long)param_5 >> 1)) + ((ulong)param_4 & 0xffffffff)
                          );
    }
    fVar14 = (float)*(double *)(param_7 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_7 + 2))) {
      fVar14 = 0.0;
    }
    (*param_4)(fVar14);
    *param_2 = 0;
    return;
  }
  plVar3 = (long *)&UNK_10f68f550;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(plVar3,param_6);
  FUN_10a052e3c(uVar6);
  (**(code **)(*plVar3 + 0x160))(plVar3);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)param_1;
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar3;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_c8 = lVar5;
          lStack_c0 = lVar5;
          lStack_b8 = lVar5;
          lStack_b0 = lVar11;
          func_0x00010988c1b8(&lStack_c8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f148; end: 10a66f20f;  */

void FUN_10a66f148(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x160))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f210; end: 10a66f2c3;  */

void FUN_10a66f210(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x158,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f2c4; end: 10a66f38b;  */

void FUN_10a66f2c4(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x140))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f38c; end: 10a66f453;  */

void FUN_10a66f38c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x130))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f454; end: 10a66f507;  */

void FUN_10a66f454(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x180,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f508; end: 10a66f5cb;  */

void FUN_10a66f508(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x198))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f5cc; end: 10a66f67f;  */

void FUN_10a66f5cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e54c(param_1,param_2,400,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f680; end: 10a66f743;  */

void FUN_10a66f680(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x1a8))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f744; end: 10a66f7f7;  */

void FUN_10a66f744(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e54c(param_1,param_2,0x1a0,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f7f8; end: 10a66f8bf;  */

void FUN_10a66f7f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x1b8))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f8c0; end: 10a66f98f;  */

void FUN_10a66f8c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a3baf84(param_5);
  func_0x000109898518(param_2,param_4);
  (**(code **)(*plVar4 + 0x1b0))(plVar4,param_2);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a66f990; end: 10a66fa57;  */

void FUN_10a66f990(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x1d8))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fa58; end: 10a66fb0b;  */

void FUN_10a66fa58(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x1d0,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fb0c; end: 10a66fbd3;  */

void FUN_10a66fb0c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x1c8))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fbd4; end: 10a66fc87;  */

void FUN_10a66fbd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x1c0,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fc88; end: 10a66fd4f;  */

void FUN_10a66fc88(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x1e8))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fd50; end: 10a66fe03;  */

void FUN_10a66fd50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x1e0,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fe04; end: 10a66fec7;  */

void FUN_10a66fe04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x1f8))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66fec8; end: 10a66ff7b;  */

void FUN_10a66fec8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e54c(param_1,param_2,0x1f0,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a66ff7c; end: 10a670043;  */

void FUN_10a66ff7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x208))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670044; end: 10a670113;  */

void FUN_10a670044(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a670114(param_5);
  func_0x000109898518(param_2,param_4);
  (**(code **)(*plVar4 + 0x200))(plVar4,param_2);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a670114; end: 10a670137;  */

void FUN_10a670114(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_2 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_2);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(plVar3,uVar5);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar3 + 0x218))(plVar3);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)param_1;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a670138; end: 10a6701ff;  */

void FUN_10a670138(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x218))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670200; end: 10a6702b3;  */

void FUN_10a670200(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x210,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6702b4; end: 10a670377;  */

void FUN_10a6702b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x228))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670378; end: 10a67042b;  */

void FUN_10a670378(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e54c(param_1,param_2,0x220,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a67042c; end: 10a6704f3;  */

void FUN_10a67042c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x238))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6704f4; end: 10a6705a7;  */

void FUN_10a6704f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x230,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6705a8; end: 10a67066f;  */

void FUN_10a6705a8(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0x248))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670670; end: 10a670723;  */

void FUN_10a670670(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x240,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670724; end: 10a6707f7;  */

void FUN_10a670724(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6707e4);
    (*pcVar3)();
  }
  uVar2 = *(undefined1 *)(param_2[0x41] + 0x5884);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a6707f8; end: 10a6708d3;  */

void FUN_10a6707f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if (plVar4[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6708c0);
    (*pcVar1)();
  }
  *(char *)(plVar4[0x41] + 0x5884) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6708d4; end: 10a6709a7;  */

void FUN_10a6708d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a670994);
    (*pcVar2)();
  }
  fVar14 = *(float *)(param_2[0x41] + 0x50);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6709a8; end: 10a670a5f;  */

void FUN_10a6709a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a66f0a4(param_1,param_2,0x10a64e70c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a670a60; end: 10a670b33;  */

void FUN_10a670a60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a670b20);
    (*pcVar3)();
  }
  uVar2 = *(undefined1 *)(param_2[0x41] + 0x5885);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a670b34; end: 10a670c0f;  */

void FUN_10a670b34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if (plVar4[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a670bfc);
    (*pcVar1)();
  }
  *(char *)(plVar4[0x41] + 0x5885) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a670c10; end: 10a670ce7;  */

void FUN_10a670c10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a670cd4);
    (*pcVar3)();
  }
  iVar2 = *(int *)(param_2[0x41] + 0x486c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a670ce8; end: 10a670dc3;  */

void FUN_10a670ce8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a670dc4(param_5);
  func_0x000109898518(param_2,param_4);
  if (plVar4[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a670db0);
    (*pcVar1)();
  }
  *(int *)(plVar4[0x41] + 0x486c) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a670dc4; end: 10a670de7;  */

void FUN_10a670dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  if (plVar4[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a670ea8);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)(plVar4[0x41] + 0x5886);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a670de8; end: 10a670ebb;  */

void FUN_10a670de8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a66e820(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a670ea8);
    (*pcVar3)();
  }
  uVar2 = *(undefined1 *)(param_2[0x41] + 0x5886);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a670ebc; end: 10a670f97;  */

void FUN_10a670ebc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a66e430(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if (plVar4[0x41] == 0) {
    FUN_10a00946c(&UNK_10f66aac7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a670f84);
    (*pcVar1)();
  }
  *(char *)(plVar4[0x41] + 0x5886) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a670f98; end: 10a671007;  */

void FUN_10a670f98(undefined8 param_1,float param_2,long param_3,ulong param_4,long param_5,
                  long param_6)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  short *psVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  
  lVar3 = *(long *)(param_6 + 0x10);
  if (*(char *)(lVar3 + 0x5880) != '\x01') {
    if (param_5 != 1) {
      return;
    }
    uVar2 = (int)param_4 - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    lVar3 = (ulong)uVar2 + 1;
    puVar4 = (undefined2 *)(param_3 + (ulong)uVar2 * 2);
    puVar6 = (undefined2 *)(param_3 + (ulong)uVar2 * 4 + 2);
    do {
      uVar1 = *puVar4;
      puVar6[-1] = uVar1;
      *puVar6 = uVar1;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + -1;
      puVar6 = puVar6 + -2;
    } while (lVar3 != 0);
    return;
  }
  if (param_5 == 2) {
    uVar10 = param_4 >> 1;
    if (1 < param_4) {
      psVar5 = (short *)(lVar3 + 0x5888);
      psVar7 = (short *)(param_3 + 2);
      uVar8 = uVar10;
      do {
        *psVar5 = (short)((uint)(int)(short)(*psVar7 - (*psVar7 >> 0xf)) >> 1) +
                  (short)((uint)(int)(short)(psVar7[-1] - (psVar7[-1] >> 0xf)) >> 1);
        uVar8 = uVar8 - 1;
        psVar5 = psVar5 + 1;
        psVar7 = psVar7 + 2;
      } while (uVar8 != 0);
      goto LAB_10ad1f39c;
    }
  }
  else {
    _memcpy(lVar3 + 0x5888,param_3,param_4 << 1);
    uVar10 = param_4;
  }
  if (uVar10 == 0) {
    return;
  }
LAB_10ad1f39c:
  lVar9 = 0x5888;
  puVar4 = (undefined2 *)(param_3 + 2);
  do {
    fVar11 = (float)(int)*(short *)(lVar3 + lVar9) * 3.051851e-05;
    FUN_10ad1f1c4(lVar3);
    puVar4[-1] = (short)(int)(fVar11 * 32767.0);
    *puVar4 = (short)(int)(param_2 * 32767.0);
    lVar9 = lVar9 + 2;
    uVar10 = uVar10 - 1;
    puVar4 = puVar4 + 2;
  } while (uVar10 != 0);
  return;
}



/* Entry: 10a671008; end: 10a6710e3;  */

void FUN_10a671008(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6710e4(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[0x44] = *param_2;
  *(int *)(plVar4 + 0x45) = (int)lVar5;
  if ((*(byte *)((long)plVar4 + 0x22c) & 1) == 0) {
    *(undefined1 *)((long)plVar4 + 0x22c) = 1;
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6710e4; end: 10a67114b;  */

void FUN_10a6710e4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c052d8;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a6710e4(plVar4,param_2);
  FUN_10a1fa9e8(param_4);
  FUN_10a05a42c(plVar4,param_3);
  *(long *)((long)plVar6 + 0x234) = *plVar4;
  *(undefined1 *)((long)plVar6 + 0x231) = 1;
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a67114c; end: 10a67121b;  */

void FUN_10a67114c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6710e4(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *(long *)((long)plVar4 + 0x234) = *param_2;
  *(undefined1 *)((long)plVar4 + 0x231) = 1;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a67121c; end: 10a6712d3;  */

void FUN_10a67121c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6712d4(param_1,param_2,FUN_10a64f2d4,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6712d4; end: 10a6713af;  */

void FUN_10a6712d4(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  FUN_10a6710e4(param_2,param_5);
  FUN_10a2eb2f0(param_7);
  FUN_10a2eb314(&uStack_70,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  lStack_58 = lStack_68;
  uStack_60 = uStack_70;
  uStack_70 = 0;
  lStack_68 = 0;
  (*param_3)(plVar1,&uStack_60);
  if (lStack_58 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_68 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a6713b0; end: 10a671467;  */

void FUN_10a6713b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6712d4(param_1,param_2,0x10a64f30c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a671468; end: 10a67152b;  */

void FUN_10a671468(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6710e4(param_2,param_3);
  FUN_10a67152c(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(ushort *)(plVar4 + 0x43) = (ushort)param_2 | 0x100;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a67152c; end: 10a67154f;  */

void FUN_10a67152c(undefined8 param_1)

{
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a671550; end: 10a671553;  */

void FUN_10a671550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a671554; end: 10a671567;  */

void FUN_10a671554(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a671568; end: 10a671583;  */

void FUN_10a671568(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a671584; end: 10a6715bf;  */

long FUN_10a671584(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a6715c0; end: 10a6715c3;  */

void FUN_10a6715c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6715c4; end: 10a67161b;  */

long FUN_10a6715c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a67161c; end: 10a671bcf;  */

void FUN_10a67161c(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long *plVar18;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s8;
  float fVar33;
  uint auStack_1c0 [2];
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [271];
  undefined1 uStack_91;
  
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar13[0x59] < 8) {
    plVar13[plVar13[0x59] + 0x4e] = plVar13[0x5a];
    plVar13[0x59] = plVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar13 + 0x4b);
  }
  plVar14 = param_2;
  FUN_10a671bd0(param_2,param_3);
  FUN_10a671c38(param_5);
  auStack_1c0[0] = 0;
  puVar1 = auStack_1c0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  uVar6 = *puVar1;
  if (uVar6 < 2) {
    plVar29 = (long *)0x0;
  }
  else {
    plVar29 = param_2;
    func_0x00010a13627c();
  }
  puVar1 = auStack_1c0;
  if (1 < param_5) {
    puVar1 = param_4 + 4;
  }
  uVar7 = *puVar1;
  if (uVar7 < 2) {
    plVar28 = (long *)0x0;
  }
  else {
    plVar28 = param_2;
    func_0x00010a13627c();
  }
  if ((char)plVar14[0xd9] == '\x01') {
    FUN_10a00946c(&UNK_10f66addd);
    goto LAB_10a671b7c;
  }
  if (*(char *)((long)plVar14 + 0x687) < '\0') {
    if (plVar14[0xcf] == 0) goto LAB_10a6719a0;
LAB_10a67171c:
    FUN_10a65af14(plVar14);
    lVar21 = *(long *)(plVar14[0xf4] + 0x430);
    if (lVar21 == 0) {
LAB_10a67198c:
      plVar14 = (long *)0x50;
      __Znwm();
      goto LAB_10a6719a8;
    }
    lVar27 = *(long *)(lVar21 + 0x18);
    lVar25 = *(long *)(lVar21 + 0x20);
    if (lVar27 == lVar25) goto LAB_10a67198c;
    if (uVar6 < 2) {
      plVar29 = (long *)0x0;
    }
    if ((1 < uVar7) && (plVar28 <= plVar29)) {
LAB_10a671b34:
      FUN_109febc44(&plStack_1b0);
      FUN_10a002568(auStack_1a0,&UNK_10f66ae17,0x1d);
      FUN_10a05168c(&uStack_91,auStack_1a0);
LAB_10a671b7c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a671b80);
      (*pcVar11)();
    }
    puVar3 = *(ulong **)(lVar21 + 0x58);
    puVar4 = *(ulong **)(lVar21 + 0x60);
    if (puVar3 == puVar4) goto LAB_10a671b7c;
    if ((long *)puVar4[-6] < plVar29) goto LAB_10a671b34;
    uVar22 = 0;
    bVar10 = false;
    if (uVar7 < 2) {
      plVar28 = (long *)0xffffffffffffffff;
    }
    uVar24 = (long)puVar4 - (long)puVar3 >> 6;
    fVar32 = 0.0;
    uVar23 = 0xffffffffffffffff;
    lVar12 = lVar27;
    do {
      if (*(char *)(lVar12 + 0x38) == '\x01') {
        if (plVar29 <= *(long **)(lVar12 + 0x30) && *(long **)(lVar12 + 0x30) < plVar28) {
          uVar15 = *(ulong *)(lVar12 + 0x40);
          goto LAB_10a6717b0;
        }
      }
      else {
        uVar15 = *(ulong *)(lVar12 + 0x40);
        if (uVar15 < uVar24) {
          iVar8 = (int)plVar14[0xe5];
          if (iVar8 == 5) {
            plVar18 = (long *)puVar3[uVar15 * 8 + 1];
            if ((plVar18 > plVar29 && plVar18 <= plVar28) &&
                (plVar18 <= plVar29 || plVar28 != plVar18)) {
LAB_10a6717b0:
              fVar30 = *(float *)(lVar12 + 0x10) + *(float *)(lVar12 + 0x20);
              fVar31 = *(float *)(lVar12 + 0x18) - *(float *)(lVar12 + 0x20);
              fVar33 = fVar30;
              if (fVar32 <= fVar30) {
                fVar33 = fVar32;
              }
              fVar32 = fVar31;
              if (fVar31 <= unaff_s8) {
                fVar32 = unaff_s8;
              }
              unaff_s8 = fVar32;
              fVar32 = fVar33;
              if (!bVar10) {
                unaff_s8 = fVar31;
                fVar32 = fVar30;
              }
              if (uVar15 <= uVar23) {
                uVar23 = uVar15;
              }
              if (uVar22 <= uVar15) {
                uVar22 = uVar15;
              }
              bVar10 = true;
            }
          }
          else {
            plVar18 = (long *)(puVar3[uVar15 * 8 + 2] - (long)(int)puVar3[uVar15 * 8 + 7]);
            if (((iVar8 == 4 && plVar18 <= plVar28) && (iVar8 != 4 || plVar28 != plVar18)) &&
                plVar29 < plVar18) goto LAB_10a6717b0;
          }
        }
      }
      lVar12 = lVar12 + 0x70;
    } while (lVar12 != lVar25);
    uVar15 = (lVar25 - lVar27 >> 4) * 0x6db6db6db6db6db7;
    puVar17 = puVar3;
    do {
      while ((puVar16 = puVar17 + 8, *(char *)((long)puVar17 + 0x3d) == '\x01' &&
             ((long *)((long)puVar17[2] - (long)(int)puVar17[7]) < plVar28 &&
              plVar29 < (long *)puVar17[2]))) {
        uVar20 = puVar17[3];
        uVar5 = puVar17[4];
        if (*(char *)((long)puVar17 + 0x3e) == '\x01') {
          fVar33 = *(float *)(lVar21 + 0x38);
          lVar25 = uVar5 - uVar20;
          if (uVar20 <= uVar5 && lVar25 != 0) {
            uVar2 = 0;
            if (uVar20 <= uVar15) {
              uVar2 = uVar15 - uVar20;
            }
            if (uVar2 <= uVar5 + ~uVar20) goto LAB_10a671b7c;
            pfVar19 = (float *)(lVar27 + 0x20 + uVar20 * 0x70);
            fVar30 = fVar33;
            do {
              fVar33 = pfVar19[-4] + *pfVar19;
              if (fVar30 <= pfVar19[-4] + *pfVar19) {
                fVar33 = fVar30;
              }
              lVar25 = lVar25 + -1;
              pfVar19 = pfVar19 + 0x1c;
              fVar30 = fVar33;
            } while (lVar25 != 0);
          }
        }
        else {
          fVar33 = *(float *)(lVar21 + 0x30);
          lVar25 = uVar5 - uVar20;
          if (uVar20 <= uVar5 && lVar25 != 0) {
            uVar2 = 0;
            if (uVar20 <= uVar15) {
              uVar2 = uVar15 - uVar20;
            }
            if (uVar2 <= uVar5 + ~uVar20) goto LAB_10a671b7c;
            pfVar19 = (float *)(lVar27 + 0x20 + uVar20 * 0x70);
            fVar30 = fVar33;
            do {
              fVar33 = pfVar19[-2] - *pfVar19;
              if (pfVar19[-2] - *pfVar19 <= fVar30) {
                fVar33 = fVar30;
              }
              lVar25 = lVar25 + -1;
              pfVar19 = pfVar19 + 0x1c;
              fVar30 = fVar33;
            } while (lVar25 != 0);
          }
        }
        uVar20 = *puVar17;
        fVar30 = fVar33;
        if (fVar32 <= fVar33) {
          fVar30 = fVar32;
        }
        fVar32 = fVar33;
        if (fVar33 <= unaff_s8) {
          fVar32 = unaff_s8;
        }
        unaff_s8 = fVar32;
        fVar32 = fVar30;
        if (!bVar10) {
          unaff_s8 = fVar33;
          fVar32 = fVar33;
        }
        if (uVar20 <= uVar23) {
          uVar23 = uVar20;
        }
        if (uVar22 <= uVar20) {
          uVar22 = uVar20;
        }
        bVar10 = true;
        puVar17 = puVar16;
        if (puVar16 == puVar4) goto LAB_10a6719e8;
      }
      puVar17 = puVar16;
    } while (puVar16 != puVar4);
    if (bVar10) {
LAB_10a6719e8:
      if ((uVar24 <= uVar23) || (uVar24 <= uVar22)) goto LAB_10a671b7c;
      fVar30 = *(float *)((long)puVar3 + uVar23 * 0x40 + 0x34);
      fVar33 = *(float *)((long)puVar3 + uVar22 * 0x40 + 0x34) - *(float *)(puVar3 + uVar22 * 8 + 6)
      ;
    }
    else {
      fVar33 = 0.0;
      fVar32 = 0.0;
      unaff_s8 = 0.0;
      fVar30 = 0.0;
      if (uVar23 != 0xffffffffffffffff) {
        plStack_1b0 = (long *)&UNK_10f66ae35;
        plStack_1a8 = (long *)0x41;
        FUN_10a0edfc4(&plStack_1b0);
        goto LAB_10a671b7c;
      }
    }
    fVar31 = *(float *)(plVar14[0xf4] + 0x64c);
    plVar14 = (long *)0x50;
    __Znwm();
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_110bcfba8;
    plStack_1b0 = plVar14 + 3;
    *plStack_1b0 = (long)&PTR_FUN_110c6a8d8;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined1 *)(plVar14 + 7) = 0;
    plVar14[6] = (long)&PTR_FUN_110c6a940;
    *(float *)((long)plVar14 + 0x3c) = fVar32 / fVar31;
    *(float *)(plVar14 + 8) = fVar33 / fVar31;
    *(float *)((long)plVar14 + 0x44) = unaff_s8 / fVar31;
    *(float *)(plVar14 + 9) = fVar30 / fVar31;
  }
  else {
    if (*(char *)((long)plVar14 + 0x687) != '\0') goto LAB_10a67171c;
LAB_10a6719a0:
    plVar14 = (long *)0x50;
    __Znwm();
LAB_10a6719a8:
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_110bcfba8;
    plStack_1b0 = plVar14 + 3;
    *plStack_1b0 = (long)&PTR_FUN_110c6a8d8;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined1 *)(plVar14 + 7) = 0;
    plVar14[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar14 + 0x44) = 0;
    *(undefined8 *)((long)plVar14 + 0x3c) = 0;
  }
  plStack_1a8 = plVar14;
  if ((3 < (int)auStack_1c0[0]) && (puStack_1b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1b8)();
  }
  func_0x00010a20fa88(param_1,param_2,&plStack_1b0);
  plVar14 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar29 = plStack_1a8 + 1;
    do {
      lVar21 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plVar13 + 0x4b;
  lVar21 = plVar13[0x59];
  uVar22 = lVar21 - 1;
  plVar13[0x59] = uVar22;
  if (uVar22 < 8) {
    uVar22 = plVar14[lVar21 + 2];
    if (plVar13[0x5a] == uVar22) {
      return;
    }
  }
  else {
    uVar22 = *(ulong *)(plVar13[0x57] + -8);
    plVar13[0x57] = plVar13[0x57] + -8;
    if (plVar13[0x5a] == uVar22) {
      return;
    }
  }
  lVar21 = *plVar14;
  lVar27 = plVar13[0x4c];
  lVar25 = lVar27 - lVar21;
  uVar23 = lVar25 >> 4;
  if (uVar23 < uVar22) {
    uVar24 = uVar22 - uVar23;
    if ((ulong)(plVar13[0x4d] - lVar27 >> 4) < uVar24) {
      if (uVar22 >> 0x3c == 0) {
        uVar20 = plVar13[0x4d] - lVar21;
        uVar15 = (long)uVar20 >> 3;
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar15 = 0xfffffffffffffff;
        }
        if (uVar15 >> 0x3c == 0) {
          lVar12 = uVar15 << 4;
          __Znwm();
          lVar27 = lVar12 + lVar25;
          _bzero(lVar27,uVar24 * 0x10);
          lVar26 = lVar27 + uVar23 * -0x10;
          _memcpy(lVar26,lVar21,lVar25);
          *plVar14 = lVar26;
          plVar13[0x4c] = lVar27 + uVar24 * 0x10;
          plVar13[0x4d] = lVar12 + uVar15 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff78);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar11)();
    }
    _bzero(lVar27,uVar24 * 0x10);
    plVar13[0x4c] = lVar27 + uVar24 * 0x10;
  }
  else if (uVar22 < uVar23) {
    lVar21 = lVar21 + uVar22 * 0x10;
    while (lVar27 != lVar21) {
      lVar27 = lVar27 + -0x10;
      func_0x00010988c204(lVar27);
    }
    plVar13[0x4c] = lVar21;
  }
code_r0x00010988c138:
  plVar13[0x5a] = uVar22;
  return;
}



/* Entry: 10a671bd0; end: 10a671c37;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a671bd0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long ******pppppplVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  bool bVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 extraout_x8;
  long *plVar21;
  float *pfVar22;
  long ******pppppplVar23;
  long *******ppppppplVar24;
  long *****ppppplVar25;
  ulong uVar26;
  long *******ppppppplVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  uint auStack_220 [2];
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  long *******ppppppplStack_1f8;
  long ******pppppplStack_1f0;
  undefined8 auStack_1e8 [33];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  lVar36 = param_1;
  func_0x000109898688();
  if (lVar36 != 0) {
    FUN_10a053854(param_1,lVar36);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar16 = (uint *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if (((uint)puVar16 == 2) || ((uint)puVar16 < 2)) {
    return;
  }
  plVar17 = (long *)0x2;
  uVar19 = 2;
  FUN_10a052ee0(2,2);
  plVar18 = plVar17;
  (**(code **)(*plVar17 + 0x58))();
  if ((ulong)plVar18[0x59] < 8) {
    plVar18[plVar18[0x59] + 0x4e] = plVar18[0x5a];
    plVar18[0x59] = plVar18[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar18 + 0x4b);
  }
  plVar21 = plVar17;
  FUN_10a671bd0(plVar17,uVar19);
  FUN_10a671c38(param_4);
  auStack_220[0] = 0;
  puVar3 = auStack_220;
  if (param_4 != 0) {
    puVar3 = puVar16;
  }
  uVar6 = *puVar3;
  if (uVar6 < 2) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = plVar17;
    func_0x00010a13627c();
  }
  puVar3 = auStack_220;
  if (1 < param_4) {
    puVar3 = puVar16 + 4;
  }
  uVar7 = *puVar3;
  if (uVar7 < 2) {
    plVar34 = (long *)0x0;
  }
  else {
    plVar34 = plVar17;
    func_0x00010a13627c();
  }
  if ((char)plVar21[0xd9] == '\x01') {
    FUN_10a00946c(&UNK_10f66ae77);
    goto LAB_10a6723c4;
  }
  if (*(char *)((long)plVar21 + 0x687) < '\0') {
    if (plVar21[0xcf] == 0) goto LAB_10a672300;
LAB_10a671d60:
    FUN_10a65af14(plVar21);
    lVar36 = *(long *)(plVar21[0xf4] + 0x430);
    if (lVar36 != 0) {
      puVar5 = *(ulong **)(lVar36 + 0x58);
      puVar28 = *(ulong **)(lVar36 + 0x60);
      if (puVar5 != puVar28) {
        if (uVar6 < 2) {
          plVar33 = (long *)0x0;
        }
        plVar4 = plVar33;
        if (plVar34 <= plVar33) {
          plVar4 = plVar34;
        }
        if (uVar7 < 2) {
          plVar4 = plVar33;
        }
        if ((long *)puVar28[-6] < plVar4) {
          FUN_109febc44(&ppppppplStack_1f8);
          FUN_10a002568(auStack_1e8,&UNK_10f66aeb4,0x1a);
          FUN_10a05168c(&puStack_210,auStack_1e8);
LAB_10a6723c4:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a6723c8);
          (*pcVar13)();
        }
        if (plVar33 <= plVar34) {
          plVar33 = plVar34;
        }
        if (uVar7 < 2) {
          plVar33 = (long *)0xffffffffffffffff;
        }
        lVar15 = plVar21[0xe5];
        fVar38 = *(float *)(plVar21[0xf4] + 0x64c);
        cVar8 = *(char *)((long)plVar21 + 0x309);
        pppppplStack_1f0 = (long ******)0x0;
        auStack_1e8[0] = 0;
        lVar32 = *(long *)(lVar36 + 0x18);
        lVar29 = *(long *)(lVar36 + 0x20);
        ppppppplStack_1f8 = &pppppplStack_1f0;
        if (lVar32 != lVar29) {
          do {
            if (*(char *)(lVar32 + 0x38) == '\x01') {
              if (plVar4 <= *(long **)(lVar32 + 0x30) && *(long **)(lVar32 + 0x30) < plVar33) {
                uVar30 = *(ulong *)(lVar32 + 0x40);
LAB_10a671e64:
                fVar44 = *(float *)(lVar32 + 0x14);
                fVar42 = *(float *)(lVar32 + 0x10) - *(float *)(lVar32 + 0x68);
                fVar39 = *(float *)(lVar32 + 0x1c);
                fVar40 = fVar42 + *(float *)(lVar32 + 100);
                uVar19 = *(undefined8 *)(lVar32 + 0x48);
                ppppppplVar24 = (long *******)&ppppppplStack_1f8;
                uStack_e0 = uVar30;
                uStack_d8 = uVar19;
                FUN_10a6796d4(ppppppplVar24,uVar30,uVar19);
                if (&pppppplStack_1f0 == ppppppplVar24) {
                  ppppppplVar24 = (long *******)&ppppppplStack_1f8;
                  FUN_10a679754(ppppppplVar24,uVar30,uVar19,&uStack_e0);
                  *(float *)(ppppppplVar24 + 6) = fVar42;
                  *(float *)((long)ppppppplVar24 + 0x34) = fVar44;
                  *(float *)(ppppppplVar24 + 7) = fVar40;
                  *(float *)((long)ppppppplVar24 + 0x3c) = fVar39;
                }
                else {
                  auVar41 = *(undefined1 (*) [16])(ppppppplVar24 + 6);
                  auVar9._4_4_ = fVar44;
                  auVar9._0_4_ = fVar42;
                  auVar9._8_4_ = fVar40;
                  auVar9._12_4_ = fVar39;
                  auVar10._4_4_ = -(uint)(fVar44 < auVar41._4_4_);
                  auVar10._0_4_ = -(uint)(fVar42 < auVar41._0_4_);
                  auVar10._8_4_ = -(uint)(auVar41._8_4_ < fVar40);
                  auVar10._12_4_ = -(uint)(auVar41._12_4_ < fVar39);
                  auVar41 = auVar41 ^ (auVar41 ^ auVar9) & auVar10;
                  ppppppplVar24[7] = auVar41._8_8_;
                  ppppppplVar24[6] = auVar41._0_8_;
                }
              }
            }
            else {
              uVar30 = *(ulong *)(lVar32 + 0x40);
              if ((uVar30 < (ulong)(*(long *)(lVar36 + 0x60) - *(long *)(lVar36 + 0x58) >> 6)) &&
                 (((lVar31 = *(long *)(lVar36 + 0x58) + uVar30 * 0x40, (int)lVar15 == 5 &&
                   (plVar4 < *(long **)(lVar31 + 8) && *(long **)(lVar31 + 8) < plVar33)) ||
                  (((int)lVar15 == 4 &&
                   (plVar21 = (long *)(*(long *)(lVar31 + 0x10) - (long)*(int *)(lVar31 + 0x38)),
                   plVar21 < plVar33 && plVar4 < plVar21)))))) goto LAB_10a671e64;
            }
            lVar32 = lVar32 + 0x70;
          } while (lVar32 != lVar29);
          puVar5 = *(ulong **)(lVar36 + 0x58);
          puVar28 = *(ulong **)(lVar36 + 0x60);
        }
        for (; puVar5 != puVar28; puVar5 = puVar5 + 8) {
          if (((*(char *)((long)puVar5 + 0x3d) == '\x01') &&
              (plVar4 < (long *)puVar5[2] &&
               (long *)((long)puVar5[2] - (long)(int)puVar5[7]) < plVar33)) &&
             ((*(byte *)((long)puVar5 + 0x3f) & 1) == 0)) {
            uVar30 = puVar5[3];
            uVar35 = puVar5[4];
            lVar32 = uVar35 - uVar30;
            if (uVar35 < uVar30 || lVar32 == 0) {
              fVar39 = *(float *)(lVar36 + 0x30);
              for (pfVar22 = *(float **)(lVar36 + 0x40); pfVar22 != *(float **)(lVar36 + 0x48);
                  pfVar22 = pfVar22 + 6) {
                if ((*(char *)(pfVar22 + 4) == '\x01') && (*(ulong *)(pfVar22 + 2) == puVar5[1])) {
                  fVar39 = *pfVar22;
                  break;
                }
              }
              fVar42 = *(float *)((long)puVar5 + 0x34);
              fVar45 = fVar42 - *(float *)(puVar5 + 6);
              fVar43 = *(float *)(puVar5 + 6) * 0.25;
              fVar40 = fVar39;
              fVar44 = fVar39 + fVar43;
              if (cVar8 == '\x02') {
                fVar40 = fVar39 - fVar43;
                fVar44 = fVar39;
              }
              fVar46 = fVar39 - fVar43 * 0.5;
              fVar39 = fVar39 + fVar43 * 0.5;
              if (cVar8 != '\x01') {
                fVar46 = fVar40;
                fVar39 = fVar44;
              }
            }
            else {
              lVar29 = *(long *)(lVar36 + 0x18);
              uVar26 = (*(long *)(lVar36 + 0x20) - lVar29 >> 4) * 0x6db6db6db6db6db7;
              uVar37 = 0;
              if (uVar30 <= uVar26) {
                uVar37 = uVar26 - uVar30;
              }
              if (*(char *)((long)puVar5 + 0x3e) == '\x01') {
                if (uVar37 <= uVar35 + ~uVar30) goto LAB_10a6723c4;
                pfVar22 = (float *)(lVar29 + uVar30 * 0x70 + 0x68);
                fVar39 = *(float *)(lVar36 + 0x38);
                do {
                  fVar40 = pfVar22[-0x16] - *pfVar22;
                  if (fVar39 <= pfVar22[-0x16] - *pfVar22) {
                    fVar40 = fVar39;
                  }
                  lVar32 = lVar32 + -1;
                  pfVar22 = pfVar22 + 0x1c;
                  fVar39 = fVar40;
                } while (lVar32 != 0);
              }
              else {
                if (uVar37 <= uVar35 + ~uVar30) goto LAB_10a6723c4;
                pfVar22 = (float *)(lVar29 + uVar30 * 0x70 + 0x68);
                fVar39 = *(float *)(lVar36 + 0x30);
                do {
                  fVar40 = (pfVar22[-0x16] - *pfVar22) + pfVar22[-1];
                  if (fVar40 <= fVar39) {
                    fVar40 = fVar39;
                  }
                  pfVar22 = pfVar22 + 0x1c;
                  lVar32 = lVar32 + -1;
                  fVar39 = fVar40;
                } while (lVar32 != 0);
              }
              fVar44 = *(float *)(puVar5 + 6);
              fVar42 = *(float *)((long)puVar5 + 0x34);
              fVar45 = fVar42 - fVar44;
              fVar39 = -(fVar44 * 0.25);
              if (*(char *)((long)puVar5 + 0x3e) == '\0') {
                fVar39 = fVar44 * 0.25;
              }
              fVar39 = fVar40 + fVar39;
              fVar46 = fVar39;
              if (fVar40 <= fVar39) {
                fVar46 = fVar40;
              }
              if (fVar39 <= fVar40) {
                fVar39 = fVar40;
              }
            }
            uVar30 = *puVar5;
            uStack_d8 = 0xffffffffffffffff;
            ppppppplVar24 = (long *******)&ppppppplStack_1f8;
            uStack_e0 = uVar30;
            FUN_10a6796d4(ppppppplVar24,uVar30,0xffffffffffffffff);
            if (&pppppplStack_1f0 == ppppppplVar24) {
              ppppppplVar24 = (long *******)&ppppppplStack_1f8;
              FUN_10a679754(ppppppplVar24,uVar30,0xffffffffffffffff,&uStack_e0);
              *(float *)(ppppppplVar24 + 6) = fVar46;
              *(float *)((long)ppppppplVar24 + 0x34) = fVar45;
              *(float *)(ppppppplVar24 + 7) = fVar39;
              *(float *)((long)ppppppplVar24 + 0x3c) = fVar42;
            }
            else {
              if (*(float *)(ppppppplVar24 + 6) <= fVar46) {
                fVar46 = *(float *)(ppppppplVar24 + 6);
              }
              if (*(float *)((long)ppppppplVar24 + 0x34) <= fVar45) {
                fVar45 = *(float *)((long)ppppppplVar24 + 0x34);
              }
              if (fVar39 <= *(float *)(ppppppplVar24 + 7)) {
                fVar39 = *(float *)(ppppppplVar24 + 7);
              }
              *(float *)(ppppppplVar24 + 6) = fVar46;
              *(float *)((long)ppppppplVar24 + 0x34) = fVar45;
              if (fVar42 <= *(float *)((long)ppppppplVar24 + 0x3c)) {
                fVar42 = *(float *)((long)ppppppplVar24 + 0x3c);
              }
              *(float *)(ppppppplVar24 + 7) = fVar39;
              *(float *)((long)ppppppplVar24 + 0x3c) = fVar42;
            }
          }
        }
        puStack_210 = (undefined8 *)0x0;
        puStack_208 = (undefined8 *)0x0;
        uStack_200 = 0;
        FUN_10a679580(&puStack_210,auStack_1e8[0]);
        ppppppplVar24 = ppppppplStack_1f8;
        while (ppppppplVar24 != &pppppplStack_1f0) {
          pppppplVar23 = ppppppplVar24[4];
          if ((long ******)(*(long *)(lVar36 + 0x60) - *(long *)(lVar36 + 0x58) >> 6) <=
              pppppplVar23) goto LAB_10a6723c4;
          fVar39 = *(float *)(*(long *)(lVar36 + 0x58) + (long)pppppplVar23 * 0x40 + 0x34);
          *(float *)((long)ppppppplVar24 + 0x3c) = fVar39;
          if ((long ******)(*(long *)(lVar36 + 0x60) - *(long *)(lVar36 + 0x58) >> 6) <=
              pppppplVar23) goto LAB_10a6723c4;
          lVar32 = *(long *)(lVar36 + 0x58) + (long)pppppplVar23 * 0x40;
          fVar40 = *(float *)(lVar32 + 0x34) - *(float *)(lVar32 + 0x30);
          *(float *)((long)ppppppplVar24 + 0x34) = fVar40;
          uStack_d8 = CONCAT44(fVar39 / fVar38,*(float *)(ppppppplVar24 + 7) / fVar38);
          uStack_e0 = CONCAT44(fVar40 / fVar38,*(float *)(ppppppplVar24 + 6) / fVar38);
          func_0x00010a67960c(&puStack_210,&uStack_e0);
          ppppppplVar12 = (long *******)ppppppplVar24[1];
          ppppppplVar27 = ppppppplVar24;
          if ((long *******)ppppppplVar24[1] == (long *******)0x0) {
            do {
              ppppppplVar24 = (long *******)ppppppplVar27[2];
              bVar14 = (long *******)*ppppppplVar24 != ppppppplVar27;
              ppppppplVar27 = ppppppplVar24;
            } while (bVar14);
          }
          else {
            do {
              ppppppplVar24 = ppppppplVar12;
              ppppppplVar12 = (long *******)*ppppppplVar24;
            } while ((long *******)*ppppppplVar24 != (long *******)0x0);
          }
        }
        FUN_10a679850(pppppplStack_1f0);
        lStack_230 = 0;
        uStack_228 = 0;
        lStack_238 = 0;
        FUN_10a65b090(&lStack_238,(long)puStack_208 - (long)puStack_210 >> 4);
        puVar11 = puStack_208;
        for (puVar2 = puStack_210; puVar2 != puVar11; puVar2 = puVar2 + 2) {
          pppppplVar23 = (long ******)0x50;
          __Znwm();
          pppppplVar23[1] = (long *****)0x0;
          pppppplVar23[2] = (long *****)0x0;
          *pppppplVar23 = (long *****)&PTR_FUN_110bcfba8;
          pppppplVar23[4] = (long *****)0x0;
          pppppplVar23[5] = (long *****)0x0;
          *(undefined1 *)(pppppplVar23 + 7) = 0;
          ppppppplStack_1f8 = (long *******)(pppppplVar23 + 3);
          *ppppppplStack_1f8 = (long ******)&PTR_FUN_110c6a8d8;
          pppppplVar23[6] = (long *****)&PTR_FUN_110c6a940;
          *(undefined8 *)((long)pppppplVar23 + 0x3c) = *puVar2;
          *(undefined8 *)((long)pppppplVar23 + 0x44) = puVar2[1];
          pppppplStack_1f0 = pppppplVar23;
          func_0x00010a65b12c(&lStack_238,&ppppppplStack_1f8);
          pppppplVar23 = pppppplStack_1f0;
          if (pppppplStack_1f0 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_1f0 + 1;
            do {
              ppppplVar25 = *pppppplVar1;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar14) {
                *pppppplVar1 = (long *****)((long)ppppplVar25 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (ppppplVar25 == (long *****)0x0) {
              (*(code *)(*pppppplStack_1f0)[2])(pppppplStack_1f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar23);
            }
          }
        }
        if (puStack_210 != (undefined8 *)0x0) {
          puStack_208 = puStack_210;
          __ZdlPv(puStack_210);
        }
        goto LAB_10a672308;
      }
    }
    lStack_238 = 0;
    lStack_230 = 0;
    uStack_228 = 0;
  }
  else {
    if (*(char *)((long)plVar21 + 0x687) != '\0') goto LAB_10a671d60;
LAB_10a672300:
    lStack_238 = 0;
    lStack_230 = 0;
    uStack_228 = 0;
  }
LAB_10a672308:
  if ((3 < (int)auStack_220[0]) && (puStack_218 != (undefined8 *)0x0)) {
    (**(code **)*puStack_218)();
  }
  FUN_10a67249c(extraout_x8,plVar17,lStack_238,lStack_230 - lStack_238 >> 4);
  func_0x00010a66d8c4(&lStack_238);
  plVar17 = plVar18 + 0x4b;
  lVar36 = plVar18[0x59];
  uVar30 = lVar36 - 1;
  plVar18[0x59] = uVar30;
  if (uVar30 < 8) {
    uVar30 = plVar17[lVar36 + 2];
    if (plVar18[0x5a] == uVar30) {
      return;
    }
  }
  else {
    uVar30 = *(ulong *)(plVar18[0x57] + -8);
    plVar18[0x57] = plVar18[0x57] + -8;
    if (plVar18[0x5a] == uVar30) {
      return;
    }
  }
  lVar36 = *plVar17;
  lVar32 = plVar18[0x4c];
  lVar29 = lVar32 - lVar36;
  uVar35 = lVar29 >> 4;
  if (uVar35 < uVar30) {
    uVar37 = uVar30 - uVar35;
    if ((ulong)(plVar18[0x4d] - lVar32 >> 4) < uVar37) {
      if (uVar30 >> 0x3c == 0) {
        uVar20 = plVar18[0x4d] - lVar36;
        uVar26 = (long)uVar20 >> 3;
        if (uVar26 <= uVar30) {
          uVar26 = uVar30;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar26 = 0xfffffffffffffff;
        }
        if (uVar26 >> 0x3c == 0) {
          lVar15 = uVar26 << 4;
          __Znwm();
          lVar32 = lVar15 + lVar29;
          _bzero(lVar32,uVar37 * 0x10);
          lVar31 = lVar32 + uVar35 * -0x10;
          _memcpy(lVar31,lVar36,lVar29);
          *plVar17 = lVar31;
          plVar18[0x4c] = lVar32 + uVar37 * 0x10;
          plVar18[0x4d] = lVar15 + uVar26 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff48);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar13)();
    }
    _bzero(lVar32,uVar37 * 0x10);
    plVar18[0x4c] = lVar32 + uVar37 * 0x10;
  }
  else if (uVar30 < uVar35) {
    lVar36 = lVar36 + uVar30 * 0x10;
    while (lVar32 != lVar36) {
      lVar32 = lVar32 + -0x10;
      func_0x00010988c204(lVar32);
    }
    plVar18[0x4c] = lVar36;
  }
code_r0x00010988c138:
  plVar18[0x5a] = uVar30;
  return;
}



/* Entry: 10a671c38; end: 10a671c5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a671c38(uint *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long ******pppppplVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  long *plVar20;
  float *pfVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  ulong *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  uint auStack_200 [2];
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  long *******ppppppplStack_1d8;
  long ******pppppplStack_1d0;
  undefined8 auStack_1c8 [33];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if (((uint)param_1 == 2) || ((uint)param_1 < 2)) {
    return;
  }
  plVar16 = (long *)0x2;
  uVar18 = 2;
  FUN_10a052ee0(2,2);
  plVar17 = plVar16;
  (**(code **)(*plVar16 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  plVar20 = plVar16;
  FUN_10a671bd0(plVar16,uVar18);
  FUN_10a671c38(param_4);
  auStack_200[0] = 0;
  puVar3 = auStack_200;
  if (param_4 != 0) {
    puVar3 = param_1;
  }
  uVar6 = *puVar3;
  if (uVar6 < 2) {
    plVar32 = (long *)0x0;
  }
  else {
    plVar32 = plVar16;
    func_0x00010a13627c();
  }
  puVar3 = auStack_200;
  if (1 < param_4) {
    puVar3 = param_1 + 4;
  }
  uVar7 = *puVar3;
  if (uVar7 < 2) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = plVar16;
    func_0x00010a13627c();
  }
  if ((char)plVar20[0xd9] == '\x01') {
    FUN_10a00946c(&UNK_10f66ae77);
    goto LAB_10a6723c4;
  }
  if (*(char *)((long)plVar20 + 0x687) < '\0') {
    if (plVar20[0xcf] == 0) goto LAB_10a672300;
LAB_10a671d60:
    FUN_10a65af14(plVar20);
    lVar35 = *(long *)(plVar20[0xf4] + 0x430);
    if (lVar35 != 0) {
      puVar5 = *(ulong **)(lVar35 + 0x58);
      puVar27 = *(ulong **)(lVar35 + 0x60);
      if (puVar5 != puVar27) {
        if (uVar6 < 2) {
          plVar32 = (long *)0x0;
        }
        plVar4 = plVar32;
        if (plVar33 <= plVar32) {
          plVar4 = plVar33;
        }
        if (uVar7 < 2) {
          plVar4 = plVar32;
        }
        if ((long *)puVar27[-6] < plVar4) {
          FUN_109febc44(&ppppppplStack_1d8);
          FUN_10a002568(auStack_1c8,&UNK_10f66aeb4,0x1a);
          FUN_10a05168c(&puStack_1f0,auStack_1c8);
LAB_10a6723c4:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a6723c8);
          (*pcVar13)();
        }
        if (plVar32 <= plVar33) {
          plVar32 = plVar33;
        }
        if (uVar7 < 2) {
          plVar32 = (long *)0xffffffffffffffff;
        }
        lVar15 = plVar20[0xe5];
        fVar37 = *(float *)(plVar20[0xf4] + 0x64c);
        cVar8 = *(char *)((long)plVar20 + 0x309);
        pppppplStack_1d0 = (long ******)0x0;
        auStack_1c8[0] = 0;
        lVar31 = *(long *)(lVar35 + 0x18);
        lVar28 = *(long *)(lVar35 + 0x20);
        ppppppplStack_1d8 = &pppppplStack_1d0;
        if (lVar31 != lVar28) {
          do {
            if (*(char *)(lVar31 + 0x38) == '\x01') {
              if (plVar4 <= *(long **)(lVar31 + 0x30) && *(long **)(lVar31 + 0x30) < plVar32) {
                uVar29 = *(ulong *)(lVar31 + 0x40);
LAB_10a671e64:
                fVar43 = *(float *)(lVar31 + 0x14);
                fVar41 = *(float *)(lVar31 + 0x10) - *(float *)(lVar31 + 0x68);
                fVar38 = *(float *)(lVar31 + 0x1c);
                fVar39 = fVar41 + *(float *)(lVar31 + 100);
                uVar18 = *(undefined8 *)(lVar31 + 0x48);
                ppppppplVar23 = (long *******)&ppppppplStack_1d8;
                uStack_c0 = uVar29;
                uStack_b8 = uVar18;
                FUN_10a6796d4(ppppppplVar23,uVar29,uVar18);
                if (&pppppplStack_1d0 == ppppppplVar23) {
                  ppppppplVar23 = (long *******)&ppppppplStack_1d8;
                  FUN_10a679754(ppppppplVar23,uVar29,uVar18,&uStack_c0);
                  *(float *)(ppppppplVar23 + 6) = fVar41;
                  *(float *)((long)ppppppplVar23 + 0x34) = fVar43;
                  *(float *)(ppppppplVar23 + 7) = fVar39;
                  *(float *)((long)ppppppplVar23 + 0x3c) = fVar38;
                }
                else {
                  auVar40 = *(undefined1 (*) [16])(ppppppplVar23 + 6);
                  auVar9._4_4_ = fVar43;
                  auVar9._0_4_ = fVar41;
                  auVar9._8_4_ = fVar39;
                  auVar9._12_4_ = fVar38;
                  auVar10._4_4_ = -(uint)(fVar43 < auVar40._4_4_);
                  auVar10._0_4_ = -(uint)(fVar41 < auVar40._0_4_);
                  auVar10._8_4_ = -(uint)(auVar40._8_4_ < fVar39);
                  auVar10._12_4_ = -(uint)(auVar40._12_4_ < fVar38);
                  auVar40 = auVar40 ^ (auVar40 ^ auVar9) & auVar10;
                  ppppppplVar23[7] = auVar40._8_8_;
                  ppppppplVar23[6] = auVar40._0_8_;
                }
              }
            }
            else {
              uVar29 = *(ulong *)(lVar31 + 0x40);
              if ((uVar29 < (ulong)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6)) &&
                 (((lVar30 = *(long *)(lVar35 + 0x58) + uVar29 * 0x40, (int)lVar15 == 5 &&
                   (plVar4 < *(long **)(lVar30 + 8) && *(long **)(lVar30 + 8) < plVar32)) ||
                  (((int)lVar15 == 4 &&
                   (plVar20 = (long *)(*(long *)(lVar30 + 0x10) - (long)*(int *)(lVar30 + 0x38)),
                   plVar20 < plVar32 && plVar4 < plVar20)))))) goto LAB_10a671e64;
            }
            lVar31 = lVar31 + 0x70;
          } while (lVar31 != lVar28);
          puVar5 = *(ulong **)(lVar35 + 0x58);
          puVar27 = *(ulong **)(lVar35 + 0x60);
        }
        for (; puVar5 != puVar27; puVar5 = puVar5 + 8) {
          if (((*(char *)((long)puVar5 + 0x3d) == '\x01') &&
              (plVar4 < (long *)puVar5[2] &&
               (long *)((long)puVar5[2] - (long)(int)puVar5[7]) < plVar32)) &&
             ((*(byte *)((long)puVar5 + 0x3f) & 1) == 0)) {
            uVar29 = puVar5[3];
            uVar34 = puVar5[4];
            lVar31 = uVar34 - uVar29;
            if (uVar34 < uVar29 || lVar31 == 0) {
              fVar38 = *(float *)(lVar35 + 0x30);
              for (pfVar21 = *(float **)(lVar35 + 0x40); pfVar21 != *(float **)(lVar35 + 0x48);
                  pfVar21 = pfVar21 + 6) {
                if ((*(char *)(pfVar21 + 4) == '\x01') && (*(ulong *)(pfVar21 + 2) == puVar5[1])) {
                  fVar38 = *pfVar21;
                  break;
                }
              }
              fVar41 = *(float *)((long)puVar5 + 0x34);
              fVar44 = fVar41 - *(float *)(puVar5 + 6);
              fVar42 = *(float *)(puVar5 + 6) * 0.25;
              fVar39 = fVar38;
              fVar43 = fVar38 + fVar42;
              if (cVar8 == '\x02') {
                fVar39 = fVar38 - fVar42;
                fVar43 = fVar38;
              }
              fVar45 = fVar38 - fVar42 * 0.5;
              fVar38 = fVar38 + fVar42 * 0.5;
              if (cVar8 != '\x01') {
                fVar45 = fVar39;
                fVar38 = fVar43;
              }
            }
            else {
              lVar28 = *(long *)(lVar35 + 0x18);
              uVar25 = (*(long *)(lVar35 + 0x20) - lVar28 >> 4) * 0x6db6db6db6db6db7;
              uVar36 = 0;
              if (uVar29 <= uVar25) {
                uVar36 = uVar25 - uVar29;
              }
              if (*(char *)((long)puVar5 + 0x3e) == '\x01') {
                if (uVar36 <= uVar34 + ~uVar29) goto LAB_10a6723c4;
                pfVar21 = (float *)(lVar28 + uVar29 * 0x70 + 0x68);
                fVar38 = *(float *)(lVar35 + 0x38);
                do {
                  fVar39 = pfVar21[-0x16] - *pfVar21;
                  if (fVar38 <= pfVar21[-0x16] - *pfVar21) {
                    fVar39 = fVar38;
                  }
                  lVar31 = lVar31 + -1;
                  pfVar21 = pfVar21 + 0x1c;
                  fVar38 = fVar39;
                } while (lVar31 != 0);
              }
              else {
                if (uVar36 <= uVar34 + ~uVar29) goto LAB_10a6723c4;
                pfVar21 = (float *)(lVar28 + uVar29 * 0x70 + 0x68);
                fVar38 = *(float *)(lVar35 + 0x30);
                do {
                  fVar39 = (pfVar21[-0x16] - *pfVar21) + pfVar21[-1];
                  if (fVar39 <= fVar38) {
                    fVar39 = fVar38;
                  }
                  pfVar21 = pfVar21 + 0x1c;
                  lVar31 = lVar31 + -1;
                  fVar38 = fVar39;
                } while (lVar31 != 0);
              }
              fVar43 = *(float *)(puVar5 + 6);
              fVar41 = *(float *)((long)puVar5 + 0x34);
              fVar44 = fVar41 - fVar43;
              fVar38 = -(fVar43 * 0.25);
              if (*(char *)((long)puVar5 + 0x3e) == '\0') {
                fVar38 = fVar43 * 0.25;
              }
              fVar38 = fVar39 + fVar38;
              fVar45 = fVar38;
              if (fVar39 <= fVar38) {
                fVar45 = fVar39;
              }
              if (fVar38 <= fVar39) {
                fVar38 = fVar39;
              }
            }
            uVar29 = *puVar5;
            uStack_b8 = 0xffffffffffffffff;
            ppppppplVar23 = (long *******)&ppppppplStack_1d8;
            uStack_c0 = uVar29;
            FUN_10a6796d4(ppppppplVar23,uVar29,0xffffffffffffffff);
            if (&pppppplStack_1d0 == ppppppplVar23) {
              ppppppplVar23 = (long *******)&ppppppplStack_1d8;
              FUN_10a679754(ppppppplVar23,uVar29,0xffffffffffffffff,&uStack_c0);
              *(float *)(ppppppplVar23 + 6) = fVar45;
              *(float *)((long)ppppppplVar23 + 0x34) = fVar44;
              *(float *)(ppppppplVar23 + 7) = fVar38;
              *(float *)((long)ppppppplVar23 + 0x3c) = fVar41;
            }
            else {
              if (*(float *)(ppppppplVar23 + 6) <= fVar45) {
                fVar45 = *(float *)(ppppppplVar23 + 6);
              }
              if (*(float *)((long)ppppppplVar23 + 0x34) <= fVar44) {
                fVar44 = *(float *)((long)ppppppplVar23 + 0x34);
              }
              if (fVar38 <= *(float *)(ppppppplVar23 + 7)) {
                fVar38 = *(float *)(ppppppplVar23 + 7);
              }
              *(float *)(ppppppplVar23 + 6) = fVar45;
              *(float *)((long)ppppppplVar23 + 0x34) = fVar44;
              if (fVar41 <= *(float *)((long)ppppppplVar23 + 0x3c)) {
                fVar41 = *(float *)((long)ppppppplVar23 + 0x3c);
              }
              *(float *)(ppppppplVar23 + 7) = fVar38;
              *(float *)((long)ppppppplVar23 + 0x3c) = fVar41;
            }
          }
        }
        puStack_1f0 = (undefined8 *)0x0;
        puStack_1e8 = (undefined8 *)0x0;
        uStack_1e0 = 0;
        FUN_10a679580(&puStack_1f0,auStack_1c8[0]);
        ppppppplVar23 = ppppppplStack_1d8;
        while (ppppppplVar23 != &pppppplStack_1d0) {
          pppppplVar22 = ppppppplVar23[4];
          if ((long ******)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6) <=
              pppppplVar22) goto LAB_10a6723c4;
          fVar38 = *(float *)(*(long *)(lVar35 + 0x58) + (long)pppppplVar22 * 0x40 + 0x34);
          *(float *)((long)ppppppplVar23 + 0x3c) = fVar38;
          if ((long ******)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6) <=
              pppppplVar22) goto LAB_10a6723c4;
          lVar31 = *(long *)(lVar35 + 0x58) + (long)pppppplVar22 * 0x40;
          fVar39 = *(float *)(lVar31 + 0x34) - *(float *)(lVar31 + 0x30);
          *(float *)((long)ppppppplVar23 + 0x34) = fVar39;
          uStack_b8 = CONCAT44(fVar38 / fVar37,*(float *)(ppppppplVar23 + 7) / fVar37);
          uStack_c0 = CONCAT44(fVar39 / fVar37,*(float *)(ppppppplVar23 + 6) / fVar37);
          func_0x00010a67960c(&puStack_1f0,&uStack_c0);
          ppppppplVar12 = (long *******)ppppppplVar23[1];
          ppppppplVar26 = ppppppplVar23;
          if ((long *******)ppppppplVar23[1] == (long *******)0x0) {
            do {
              ppppppplVar23 = (long *******)ppppppplVar26[2];
              bVar14 = (long *******)*ppppppplVar23 != ppppppplVar26;
              ppppppplVar26 = ppppppplVar23;
            } while (bVar14);
          }
          else {
            do {
              ppppppplVar23 = ppppppplVar12;
              ppppppplVar12 = (long *******)*ppppppplVar23;
            } while ((long *******)*ppppppplVar23 != (long *******)0x0);
          }
        }
        FUN_10a679850(pppppplStack_1d0);
        lStack_210 = 0;
        uStack_208 = 0;
        lStack_218 = 0;
        FUN_10a65b090(&lStack_218,(long)puStack_1e8 - (long)puStack_1f0 >> 4);
        puVar11 = puStack_1e8;
        for (puVar2 = puStack_1f0; puVar2 != puVar11; puVar2 = puVar2 + 2) {
          pppppplVar22 = (long ******)0x50;
          __Znwm();
          pppppplVar22[1] = (long *****)0x0;
          pppppplVar22[2] = (long *****)0x0;
          *pppppplVar22 = (long *****)&PTR_FUN_110bcfba8;
          pppppplVar22[4] = (long *****)0x0;
          pppppplVar22[5] = (long *****)0x0;
          *(undefined1 *)(pppppplVar22 + 7) = 0;
          ppppppplStack_1d8 = (long *******)(pppppplVar22 + 3);
          *ppppppplStack_1d8 = (long ******)&PTR_FUN_110c6a8d8;
          pppppplVar22[6] = (long *****)&PTR_FUN_110c6a940;
          *(undefined8 *)((long)pppppplVar22 + 0x3c) = *puVar2;
          *(undefined8 *)((long)pppppplVar22 + 0x44) = puVar2[1];
          pppppplStack_1d0 = pppppplVar22;
          func_0x00010a65b12c(&lStack_218,&ppppppplStack_1d8);
          pppppplVar22 = pppppplStack_1d0;
          if (pppppplStack_1d0 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_1d0 + 1;
            do {
              ppppplVar24 = *pppppplVar1;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar14) {
                *pppppplVar1 = (long *****)((long)ppppplVar24 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (ppppplVar24 == (long *****)0x0) {
              (*(code *)(*pppppplStack_1d0)[2])(pppppplStack_1d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar22);
            }
          }
        }
        if (puStack_1f0 != (undefined8 *)0x0) {
          puStack_1e8 = puStack_1f0;
          __ZdlPv(puStack_1f0);
        }
        goto LAB_10a672308;
      }
    }
    lStack_218 = 0;
    lStack_210 = 0;
    uStack_208 = 0;
  }
  else {
    if (*(char *)((long)plVar20 + 0x687) != '\0') goto LAB_10a671d60;
LAB_10a672300:
    lStack_218 = 0;
    lStack_210 = 0;
    uStack_208 = 0;
  }
LAB_10a672308:
  if ((3 < (int)auStack_200[0]) && (puStack_1f8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1f8)();
  }
  FUN_10a67249c(extraout_x8,plVar16,lStack_218,lStack_210 - lStack_218 >> 4);
  func_0x00010a66d8c4(&lStack_218);
  plVar16 = plVar17 + 0x4b;
  lVar35 = plVar17[0x59];
  uVar29 = lVar35 - 1;
  plVar17[0x59] = uVar29;
  if (uVar29 < 8) {
    uVar29 = plVar16[lVar35 + 2];
    if (plVar17[0x5a] == uVar29) {
      return;
    }
  }
  else {
    uVar29 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar29) {
      return;
    }
  }
  lVar35 = *plVar16;
  lVar31 = plVar17[0x4c];
  lVar28 = lVar31 - lVar35;
  uVar34 = lVar28 >> 4;
  if (uVar34 < uVar29) {
    uVar36 = uVar29 - uVar34;
    if ((ulong)(plVar17[0x4d] - lVar31 >> 4) < uVar36) {
      if (uVar29 >> 0x3c == 0) {
        uVar19 = plVar17[0x4d] - lVar35;
        uVar25 = (long)uVar19 >> 3;
        if (uVar25 <= uVar29) {
          uVar25 = uVar29;
        }
        if (0x7fffffffffffffef < uVar19) {
          uVar25 = 0xfffffffffffffff;
        }
        if (uVar25 >> 0x3c == 0) {
          lVar15 = uVar25 << 4;
          __Znwm();
          lVar31 = lVar15 + lVar28;
          _bzero(lVar31,uVar36 * 0x10);
          lVar30 = lVar31 + uVar34 * -0x10;
          _memcpy(lVar30,lVar35,lVar28);
          *plVar16 = lVar30;
          plVar17[0x4c] = lVar31 + uVar36 * 0x10;
          plVar17[0x4d] = lVar15 + uVar25 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff68);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar13)();
    }
    _bzero(lVar31,uVar36 * 0x10);
    plVar17[0x4c] = lVar31 + uVar36 * 0x10;
  }
  else if (uVar29 < uVar34) {
    lVar35 = lVar35 + uVar29 * 0x10;
    while (lVar31 != lVar35) {
      lVar31 = lVar31 + -0x10;
      func_0x00010988c204(lVar31);
    }
    plVar17[0x4c] = lVar35;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar29;
  return;
}



/* Entry: 10a671c60; end: 10a67249b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a671c60(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  long ******pppppplVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  float *pfVar19;
  long ******pppppplVar20;
  long *******ppppppplVar21;
  long *****ppppplVar22;
  ulong uVar23;
  long *******ppppppplVar24;
  ulong *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  uint auStack_1f0 [2];
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  long *******ppppppplStack_1c8;
  long ******pppppplStack_1c0;
  undefined8 auStack_1b8 [33];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar18 = param_2;
  FUN_10a671bd0(param_2,param_3);
  FUN_10a671c38(param_5);
  auStack_1f0[0] = 0;
  puVar3 = auStack_1f0;
  if (param_5 != 0) {
    puVar3 = param_4;
  }
  uVar6 = *puVar3;
  if (uVar6 < 2) {
    plVar30 = (long *)0x0;
  }
  else {
    plVar30 = param_2;
    func_0x00010a13627c();
  }
  puVar3 = auStack_1f0;
  if (1 < param_5) {
    puVar3 = param_4 + 4;
  }
  uVar7 = *puVar3;
  if (uVar7 < 2) {
    plVar32 = (long *)0x0;
  }
  else {
    plVar32 = param_2;
    func_0x00010a13627c();
  }
  if ((char)plVar18[0xd9] == '\x01') {
    FUN_10a00946c(&UNK_10f66ae77);
    goto LAB_10a6723c4;
  }
  if (*(char *)((long)plVar18 + 0x687) < '\0') {
    if (plVar18[0xcf] == 0) goto LAB_10a672300;
LAB_10a671d60:
    FUN_10a65af14(plVar18);
    lVar34 = *(long *)(plVar18[0xf4] + 0x430);
    if (lVar34 != 0) {
      puVar5 = *(ulong **)(lVar34 + 0x58);
      puVar25 = *(ulong **)(lVar34 + 0x60);
      if (puVar5 != puVar25) {
        if (uVar6 < 2) {
          plVar30 = (long *)0x0;
        }
        plVar4 = plVar30;
        if (plVar32 <= plVar30) {
          plVar4 = plVar32;
        }
        if (uVar7 < 2) {
          plVar4 = plVar30;
        }
        if ((long *)puVar25[-6] < plVar4) {
          FUN_109febc44(&ppppppplStack_1c8);
          FUN_10a002568(auStack_1b8,&UNK_10f66aeb4,0x1a);
          FUN_10a05168c(&puStack_1e0,auStack_1b8);
LAB_10a6723c4:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a6723c8);
          (*pcVar13)();
        }
        if (plVar30 <= plVar32) {
          plVar30 = plVar32;
        }
        if (uVar7 < 2) {
          plVar30 = (long *)0xffffffffffffffff;
        }
        lVar15 = plVar18[0xe5];
        fVar36 = *(float *)(plVar18[0xf4] + 0x64c);
        cVar8 = *(char *)((long)plVar18 + 0x309);
        pppppplStack_1c0 = (long ******)0x0;
        auStack_1b8[0] = 0;
        lVar29 = *(long *)(lVar34 + 0x18);
        lVar26 = *(long *)(lVar34 + 0x20);
        ppppppplStack_1c8 = &pppppplStack_1c0;
        if (lVar29 != lVar26) {
          do {
            if (*(char *)(lVar29 + 0x38) == '\x01') {
              if (plVar4 <= *(long **)(lVar29 + 0x30) && *(long **)(lVar29 + 0x30) < plVar30) {
                uVar27 = *(ulong *)(lVar29 + 0x40);
LAB_10a671e64:
                fVar42 = *(float *)(lVar29 + 0x14);
                fVar40 = *(float *)(lVar29 + 0x10) - *(float *)(lVar29 + 0x68);
                fVar37 = *(float *)(lVar29 + 0x1c);
                fVar38 = fVar40 + *(float *)(lVar29 + 100);
                uVar31 = *(undefined8 *)(lVar29 + 0x48);
                ppppppplVar21 = (long *******)&ppppppplStack_1c8;
                uStack_b0 = uVar27;
                uStack_a8 = uVar31;
                FUN_10a6796d4(ppppppplVar21,uVar27,uVar31);
                if (&pppppplStack_1c0 == ppppppplVar21) {
                  ppppppplVar21 = (long *******)&ppppppplStack_1c8;
                  FUN_10a679754(ppppppplVar21,uVar27,uVar31,&uStack_b0);
                  *(float *)(ppppppplVar21 + 6) = fVar40;
                  *(float *)((long)ppppppplVar21 + 0x34) = fVar42;
                  *(float *)(ppppppplVar21 + 7) = fVar38;
                  *(float *)((long)ppppppplVar21 + 0x3c) = fVar37;
                }
                else {
                  auVar39 = *(undefined1 (*) [16])(ppppppplVar21 + 6);
                  auVar9._4_4_ = fVar42;
                  auVar9._0_4_ = fVar40;
                  auVar9._8_4_ = fVar38;
                  auVar9._12_4_ = fVar37;
                  auVar10._4_4_ = -(uint)(fVar42 < auVar39._4_4_);
                  auVar10._0_4_ = -(uint)(fVar40 < auVar39._0_4_);
                  auVar10._8_4_ = -(uint)(auVar39._8_4_ < fVar38);
                  auVar10._12_4_ = -(uint)(auVar39._12_4_ < fVar37);
                  auVar39 = auVar39 ^ (auVar39 ^ auVar9) & auVar10;
                  ppppppplVar21[7] = auVar39._8_8_;
                  ppppppplVar21[6] = auVar39._0_8_;
                }
              }
            }
            else {
              uVar27 = *(ulong *)(lVar29 + 0x40);
              if ((uVar27 < (ulong)(*(long *)(lVar34 + 0x60) - *(long *)(lVar34 + 0x58) >> 6)) &&
                 (((lVar28 = *(long *)(lVar34 + 0x58) + uVar27 * 0x40, (int)lVar15 == 5 &&
                   (plVar4 < *(long **)(lVar28 + 8) && *(long **)(lVar28 + 8) < plVar30)) ||
                  (((int)lVar15 == 4 &&
                   (plVar18 = (long *)(*(long *)(lVar28 + 0x10) - (long)*(int *)(lVar28 + 0x38)),
                   plVar18 < plVar30 && plVar4 < plVar18)))))) goto LAB_10a671e64;
            }
            lVar29 = lVar29 + 0x70;
          } while (lVar29 != lVar26);
          puVar5 = *(ulong **)(lVar34 + 0x58);
          puVar25 = *(ulong **)(lVar34 + 0x60);
        }
        for (; puVar5 != puVar25; puVar5 = puVar5 + 8) {
          if (((*(char *)((long)puVar5 + 0x3d) == '\x01') &&
              (plVar4 < (long *)puVar5[2] &&
               (long *)((long)puVar5[2] - (long)(int)puVar5[7]) < plVar30)) &&
             ((*(byte *)((long)puVar5 + 0x3f) & 1) == 0)) {
            uVar27 = puVar5[3];
            uVar33 = puVar5[4];
            lVar29 = uVar33 - uVar27;
            if (uVar33 < uVar27 || lVar29 == 0) {
              fVar37 = *(float *)(lVar34 + 0x30);
              for (pfVar19 = *(float **)(lVar34 + 0x40); pfVar19 != *(float **)(lVar34 + 0x48);
                  pfVar19 = pfVar19 + 6) {
                if ((*(char *)(pfVar19 + 4) == '\x01') && (*(ulong *)(pfVar19 + 2) == puVar5[1])) {
                  fVar37 = *pfVar19;
                  break;
                }
              }
              fVar40 = *(float *)((long)puVar5 + 0x34);
              fVar43 = fVar40 - *(float *)(puVar5 + 6);
              fVar41 = *(float *)(puVar5 + 6) * 0.25;
              fVar38 = fVar37;
              fVar42 = fVar37 + fVar41;
              if (cVar8 == '\x02') {
                fVar38 = fVar37 - fVar41;
                fVar42 = fVar37;
              }
              fVar44 = fVar37 - fVar41 * 0.5;
              fVar37 = fVar37 + fVar41 * 0.5;
              if (cVar8 != '\x01') {
                fVar44 = fVar38;
                fVar37 = fVar42;
              }
            }
            else {
              lVar26 = *(long *)(lVar34 + 0x18);
              uVar23 = (*(long *)(lVar34 + 0x20) - lVar26 >> 4) * 0x6db6db6db6db6db7;
              uVar35 = 0;
              if (uVar27 <= uVar23) {
                uVar35 = uVar23 - uVar27;
              }
              if (*(char *)((long)puVar5 + 0x3e) == '\x01') {
                if (uVar35 <= uVar33 + ~uVar27) goto LAB_10a6723c4;
                pfVar19 = (float *)(lVar26 + uVar27 * 0x70 + 0x68);
                fVar37 = *(float *)(lVar34 + 0x38);
                do {
                  fVar38 = pfVar19[-0x16] - *pfVar19;
                  if (fVar37 <= pfVar19[-0x16] - *pfVar19) {
                    fVar38 = fVar37;
                  }
                  lVar29 = lVar29 + -1;
                  pfVar19 = pfVar19 + 0x1c;
                  fVar37 = fVar38;
                } while (lVar29 != 0);
              }
              else {
                if (uVar35 <= uVar33 + ~uVar27) goto LAB_10a6723c4;
                pfVar19 = (float *)(lVar26 + uVar27 * 0x70 + 0x68);
                fVar37 = *(float *)(lVar34 + 0x30);
                do {
                  fVar38 = (pfVar19[-0x16] - *pfVar19) + pfVar19[-1];
                  if (fVar38 <= fVar37) {
                    fVar38 = fVar37;
                  }
                  pfVar19 = pfVar19 + 0x1c;
                  lVar29 = lVar29 + -1;
                  fVar37 = fVar38;
                } while (lVar29 != 0);
              }
              fVar42 = *(float *)(puVar5 + 6);
              fVar40 = *(float *)((long)puVar5 + 0x34);
              fVar43 = fVar40 - fVar42;
              fVar37 = -(fVar42 * 0.25);
              if (*(char *)((long)puVar5 + 0x3e) == '\0') {
                fVar37 = fVar42 * 0.25;
              }
              fVar37 = fVar38 + fVar37;
              fVar44 = fVar37;
              if (fVar38 <= fVar37) {
                fVar44 = fVar38;
              }
              if (fVar37 <= fVar38) {
                fVar37 = fVar38;
              }
            }
            uVar27 = *puVar5;
            uStack_a8 = 0xffffffffffffffff;
            ppppppplVar21 = (long *******)&ppppppplStack_1c8;
            uStack_b0 = uVar27;
            FUN_10a6796d4(ppppppplVar21,uVar27,0xffffffffffffffff);
            if (&pppppplStack_1c0 == ppppppplVar21) {
              ppppppplVar21 = (long *******)&ppppppplStack_1c8;
              FUN_10a679754(ppppppplVar21,uVar27,0xffffffffffffffff,&uStack_b0);
              *(float *)(ppppppplVar21 + 6) = fVar44;
              *(float *)((long)ppppppplVar21 + 0x34) = fVar43;
              *(float *)(ppppppplVar21 + 7) = fVar37;
              *(float *)((long)ppppppplVar21 + 0x3c) = fVar40;
            }
            else {
              if (*(float *)(ppppppplVar21 + 6) <= fVar44) {
                fVar44 = *(float *)(ppppppplVar21 + 6);
              }
              if (*(float *)((long)ppppppplVar21 + 0x34) <= fVar43) {
                fVar43 = *(float *)((long)ppppppplVar21 + 0x34);
              }
              if (fVar37 <= *(float *)(ppppppplVar21 + 7)) {
                fVar37 = *(float *)(ppppppplVar21 + 7);
              }
              *(float *)(ppppppplVar21 + 6) = fVar44;
              *(float *)((long)ppppppplVar21 + 0x34) = fVar43;
              if (fVar40 <= *(float *)((long)ppppppplVar21 + 0x3c)) {
                fVar40 = *(float *)((long)ppppppplVar21 + 0x3c);
              }
              *(float *)(ppppppplVar21 + 7) = fVar37;
              *(float *)((long)ppppppplVar21 + 0x3c) = fVar40;
            }
          }
        }
        puStack_1e0 = (undefined8 *)0x0;
        puStack_1d8 = (undefined8 *)0x0;
        uStack_1d0 = 0;
        FUN_10a679580(&puStack_1e0,auStack_1b8[0]);
        ppppppplVar21 = ppppppplStack_1c8;
        while (ppppppplVar21 != &pppppplStack_1c0) {
          pppppplVar20 = ppppppplVar21[4];
          if ((long ******)(*(long *)(lVar34 + 0x60) - *(long *)(lVar34 + 0x58) >> 6) <=
              pppppplVar20) goto LAB_10a6723c4;
          fVar37 = *(float *)(*(long *)(lVar34 + 0x58) + (long)pppppplVar20 * 0x40 + 0x34);
          *(float *)((long)ppppppplVar21 + 0x3c) = fVar37;
          if ((long ******)(*(long *)(lVar34 + 0x60) - *(long *)(lVar34 + 0x58) >> 6) <=
              pppppplVar20) goto LAB_10a6723c4;
          lVar29 = *(long *)(lVar34 + 0x58) + (long)pppppplVar20 * 0x40;
          fVar38 = *(float *)(lVar29 + 0x34) - *(float *)(lVar29 + 0x30);
          *(float *)((long)ppppppplVar21 + 0x34) = fVar38;
          uStack_a8 = CONCAT44(fVar37 / fVar36,*(float *)(ppppppplVar21 + 7) / fVar36);
          uStack_b0 = CONCAT44(fVar38 / fVar36,*(float *)(ppppppplVar21 + 6) / fVar36);
          func_0x00010a67960c(&puStack_1e0,&uStack_b0);
          ppppppplVar12 = (long *******)ppppppplVar21[1];
          ppppppplVar24 = ppppppplVar21;
          if ((long *******)ppppppplVar21[1] == (long *******)0x0) {
            do {
              ppppppplVar21 = (long *******)ppppppplVar24[2];
              bVar14 = (long *******)*ppppppplVar21 != ppppppplVar24;
              ppppppplVar24 = ppppppplVar21;
            } while (bVar14);
          }
          else {
            do {
              ppppppplVar21 = ppppppplVar12;
              ppppppplVar12 = (long *******)*ppppppplVar21;
            } while ((long *******)*ppppppplVar21 != (long *******)0x0);
          }
        }
        FUN_10a679850(pppppplStack_1c0);
        lStack_200 = 0;
        uStack_1f8 = 0;
        lStack_208 = 0;
        FUN_10a65b090(&lStack_208,(long)puStack_1d8 - (long)puStack_1e0 >> 4);
        puVar11 = puStack_1d8;
        for (puVar2 = puStack_1e0; puVar2 != puVar11; puVar2 = puVar2 + 2) {
          pppppplVar20 = (long ******)0x50;
          __Znwm();
          pppppplVar20[1] = (long *****)0x0;
          pppppplVar20[2] = (long *****)0x0;
          *pppppplVar20 = (long *****)&PTR_FUN_110bcfba8;
          pppppplVar20[4] = (long *****)0x0;
          pppppplVar20[5] = (long *****)0x0;
          *(undefined1 *)(pppppplVar20 + 7) = 0;
          ppppppplStack_1c8 = (long *******)(pppppplVar20 + 3);
          *ppppppplStack_1c8 = (long ******)&PTR_FUN_110c6a8d8;
          pppppplVar20[6] = (long *****)&PTR_FUN_110c6a940;
          *(undefined8 *)((long)pppppplVar20 + 0x3c) = *puVar2;
          *(undefined8 *)((long)pppppplVar20 + 0x44) = puVar2[1];
          pppppplStack_1c0 = pppppplVar20;
          func_0x00010a65b12c(&lStack_208,&ppppppplStack_1c8);
          pppppplVar20 = pppppplStack_1c0;
          if (pppppplStack_1c0 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_1c0 + 1;
            do {
              ppppplVar22 = *pppppplVar1;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar14) {
                *pppppplVar1 = (long *****)((long)ppppplVar22 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (ppppplVar22 == (long *****)0x0) {
              (*(code *)(*pppppplStack_1c0)[2])(pppppplStack_1c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
            }
          }
        }
        if (puStack_1e0 != (undefined8 *)0x0) {
          puStack_1d8 = puStack_1e0;
          __ZdlPv(puStack_1e0);
        }
        goto LAB_10a672308;
      }
    }
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1f8 = 0;
  }
  else {
    if (*(char *)((long)plVar18 + 0x687) != '\0') goto LAB_10a671d60;
LAB_10a672300:
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1f8 = 0;
  }
LAB_10a672308:
  if ((3 < (int)auStack_1f0[0]) && (puStack_1e8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1e8)();
  }
  FUN_10a67249c(param_1,param_2,lStack_208,lStack_200 - lStack_208 >> 4);
  func_0x00010a66d8c4(&lStack_208);
  plVar18 = plVar16 + 0x4b;
  lVar34 = plVar16[0x59];
  uVar27 = lVar34 - 1;
  plVar16[0x59] = uVar27;
  if (uVar27 < 8) {
    uVar27 = plVar18[lVar34 + 2];
    if (plVar16[0x5a] == uVar27) {
      return;
    }
  }
  else {
    uVar27 = *(ulong *)(plVar16[0x57] + -8);
    plVar16[0x57] = plVar16[0x57] + -8;
    if (plVar16[0x5a] == uVar27) {
      return;
    }
  }
  lVar34 = *plVar18;
  lVar29 = plVar16[0x4c];
  lVar26 = lVar29 - lVar34;
  uVar33 = lVar26 >> 4;
  if (uVar33 < uVar27) {
    uVar35 = uVar27 - uVar33;
    if ((ulong)(plVar16[0x4d] - lVar29 >> 4) < uVar35) {
      if (uVar27 >> 0x3c == 0) {
        uVar17 = plVar16[0x4d] - lVar34;
        uVar23 = (long)uVar17 >> 3;
        if (uVar23 <= uVar27) {
          uVar23 = uVar27;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar23 = 0xfffffffffffffff;
        }
        if (uVar23 >> 0x3c == 0) {
          lVar15 = uVar23 << 4;
          __Znwm();
          lVar29 = lVar15 + lVar26;
          _bzero(lVar29,uVar35 * 0x10);
          lVar28 = lVar29 + uVar33 * -0x10;
          _memcpy(lVar28,lVar34,lVar26);
          *plVar18 = lVar28;
          plVar16[0x4c] = lVar29 + uVar35 * 0x10;
          plVar16[0x4d] = lVar15 + uVar23 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff78);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar13)();
    }
    _bzero(lVar29,uVar35 * 0x10);
    plVar16[0x4c] = lVar29 + uVar35 * 0x10;
  }
  else if (uVar27 < uVar33) {
    lVar34 = lVar34 + uVar27 * 0x10;
    while (lVar29 != lVar34) {
      lVar29 = lVar29 + -0x10;
      func_0x00010988c204(lVar29);
    }
    plVar16[0x4c] = lVar34;
  }
code_r0x00010988c138:
  plVar16[0x5a] = uVar27;
  return;
}



/* Entry: 10a67249c; end: 10a6725af;  */

void FUN_10a67249c(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a3b5728(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x10;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a6725b0; end: 10a6726a7;  */

void FUN_10a6725b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a671bd0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a65b20c(&stack0xffffffffffffffa8,plVar4);
  FUN_10a6726a8(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 4);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}


