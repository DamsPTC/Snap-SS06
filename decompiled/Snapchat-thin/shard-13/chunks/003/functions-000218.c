/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a403654; end: 10a40374b;  */

void FUN_10a403654(long param_1,undefined8 *param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 in_s3;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [64];
  
  FUN_10a40374c(&fStack_9c,param_1 + 0x48,param_2 + 2,*(undefined8 *)((long)param_2 + 0x54),
                *(undefined8 *)((long)param_2 + 0x5c));
  uStack_a8 = 0;
  uStack_a0 = 0;
  fStack_b8 = 1.01;
  bVar1 = *(byte *)(param_2 + 10);
  FUN_10aa1ab28(bVar1);
  uStack_ac = in_s3;
  fVar2 = fStack_9c * 1.01;
  fStack_b4 = fStack_98 * 1.01;
  fStack_b0 = fStack_94 * 1.01;
  FUN_10aafa040(*param_2,auStack_90,&uStack_a8,&fStack_b8,3);
  if ((bVar1 & 5) != 0) {
    func_0x00010aa1abb4(*(undefined1 *)(param_2 + 10));
    fStack_b8 = fVar2;
    uStack_ac = in_s3;
    FUN_10aafaff8(fStack_9c * 1.01,fStack_98 * 1.01,fStack_94 * 1.01,*param_2,auStack_90,&uStack_a8,
                  &fStack_b8,3);
  }
  return;
}



/* Entry: 10a40374c; end: 10a40380b;  */

void FUN_10a40374c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar5 = param_3[1];
  fVar6 = *(float *)(param_3 + 3);
  fVar9 = *(float *)(param_3 + 4);
  fVar10 = *(float *)((long)param_3 + 0x24);
  fVar8 = *(float *)(param_3 + 5);
  if ((param_5 & 0x100000000) == 0) {
    uVar11 = *param_2;
    fVar7 = *(float *)(param_2 + 1);
  }
  else {
    fVar7 = (float)((ulong)param_4 >> 0x20);
    uVar11 = CONCAT44(fVar7 + fVar7,(float)param_4 + (float)param_4);
    fVar7 = (float)param_5 + (float)param_5;
  }
  fVar1 = (float)*param_3;
  fVar3 = (float)param_3[2];
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)((ulong)param_3[2] >> 0x20);
  func_0x00010a008c90((long)param_1 + 0xc,param_3);
  *param_1 = CONCAT44(SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6) *
                      (float)((ulong)uVar11 >> 0x20),
                      SQRT(fVar1 * fVar1 + fVar2 * fVar2 + (float)uVar5 * (float)uVar5) *
                      (float)uVar11);
  *(float *)(param_1 + 1) = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) * fVar7;
  return;
}



/* Entry: 10a40380c; end: 10a4039a3;  */

float FUN_10a40380c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FUN_10a40374c(auStack_70,param_1 + 0x48);
  fVar2 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar1 = fVar5 * fStack_40 + fStack_44 * fVar2 + fStack_3c * fVar6;
  fVar3 = (fStack_60 * fVar5 + fStack_64 * fVar2 + fStack_5c * fVar6) * auStack_70._0_4_ * 0.5;
  fVar2 = (fStack_50 * fVar5 + fStack_54 * fVar2 + fStack_4c * fVar6) * auStack_70._4_4_ * 0.5;
  uVar4 = CONCAT44(fVar2,fVar3) ^
          (CONCAT44(fVar2,fVar3) ^ CONCAT44(-fVar2,-fVar3)) &
          ~CONCAT44(-(uint)(0.0 <= fVar2),-(uint)(0.0 <= fVar3));
  fVar2 = fVar1 * fStack_68 * 0.5;
  if (fVar2 < 0.0) {
    fVar2 = -(fVar1 * fStack_68 * 0.5);
  }
  return (float)uVar4 + (float)(uVar4 >> 0x20) + fVar2;
}



/* Entry: 10a4039a4; end: 10a403aa7;  */

void FUN_10a4039a4(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = (float)*param_4;
  fVar7 = fVar7 + fVar7;
  fVar8 = (float)((ulong)*param_4 >> 0x20);
  fVar8 = fVar8 + fVar8;
  fVar9 = *(float *)(param_4 + 1) + *(float *)(param_4 + 1);
  if (((fVar7 == *(float *)(param_2 + 0x48)) && (fVar8 == *(float *)(param_2 + 0x4c))) &&
     (fVar9 == *(float *)(param_2 + 0x50))) {
    lVar5 = param_3[1];
    uVar6 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    puVar4 = (undefined8 *)0x70;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110bd3ed8;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined8 *)((long)puVar4 + 0x3c) = 0;
    *(undefined4 *)((long)puVar4 + 0x44) = 0;
    *(undefined2 *)((long)puVar4 + 0x54) = 0x203;
    puVar4[0xb] = 0;
    puVar4[6] = &PTR_FUN_110bd3390;
    puVar4[0xc] = CONCAT44(fVar8,fVar7);
    *(float *)(puVar4 + 0xd) = fVar9;
    puVar4[9] = CONCAT44(fVar8 * 0.5,fVar7 * 0.5);
    *(float *)(puVar4 + 10) = fVar9 * 0.5;
    param_1[1] = puVar4;
    puVar4[3] = &PTR_FUN_110bd32e8;
    *param_1 = puVar4 + 3;
  }
  return;
}



/* Entry: 10a403aa8; end: 10a403aeb;  */

float FUN_10a403aa8(long param_1,undefined8 param_2,ulong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)param_3;
  fVar2 = (float)((ulong)param_2 >> 0x20);
  fVar1 = (float)param_2;
  if ((param_3 & 0x100000000) == 0) {
    fVar1 = *(float *)(param_1 + 0x48) * 0.5;
    fVar2 = *(float *)(param_1 + 0x4c) * 0.5;
    fVar3 = *(float *)(param_1 + 0x50) * 0.5;
  }
  return fVar3 * fVar2 * fVar1 * 8.0;
}



/* Entry: 10a403aec; end: 10a403b93;  */

void FUN_10a403aec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  float fStack_18;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    fStack_18 = *(float *)(param_2 + 0x1c);
  }
  else {
    uVar1 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * 0.5,
                     (float)*(undefined8 *)(param_1 + 0x48) * 0.5);
    fStack_18 = *(float *)(param_1 + 0x50) * 0.5;
  }
  fStack_18 = fStack_18 * *(float *)(param_2 + 0x10);
  uStack_20 = CONCAT44((float)((ulong)uVar1 >> 0x20) *
                       (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                       (float)uVar1 * (float)*(undefined8 *)(param_2 + 8));
  FUN_10aa2851c(&uStack_20);
  return;
}



/* Entry: 10a403b94; end: 10a403beb;  */

undefined1  [16] FUN_10a403b94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6564aa;
  return auVar1;
}



/* Entry: 10a403bec; end: 10a403e7b;  */

void FUN_10a403bec(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6564aa,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3e08;
  pppuVar2 = (undefined8 ***)&UNK_10f656142;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x9d;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd3e08;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd3f18;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f5a3e3a,FUN_10a409b40,FUN_10a409bfc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f355a53,FUN_10a409db8,FUN_10a409e74);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65615e,FUN_10a409f6c,FUN_10a40a028);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6564aa,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a403e60);
  (*pcVar6)();
}



/* Entry: 10a403e7c; end: 10a403eab;  */

undefined8 * FUN_10a403e7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a403eac; end: 10a403ebf;  */

long FUN_10a403eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a403ec0; end: 10a403f23;  */

void FUN_10a403ec0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a403f24; end: 10a403fdf;  */

void FUN_10a403f24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd3bc0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)((long)puVar1 + 0x54) = 0x202;
  puVar1[0xb] = 0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_FUN_110bd33f8;
  puVar1[6] = &PTR_FUN_110bd34a0;
  *(undefined8 *)((long)puVar1 + 100) = 0x40c0000041900000;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_2 + 0x48);
  FUN_10a404064(puVar2);
  *(undefined4 *)((long)puVar1 + 100) = *(undefined4 *)(param_2 + 0x4c);
  FUN_10a404064(puVar2);
  *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_2 + 0x50);
  FUN_10a404064(puVar2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a403fe0; end: 10a404063;  */

void FUN_10a403fe0(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd34d8,1);
  *(char *)(param_1 + 0x48) = (char)plVar3;
  uVar5 = 0x41900000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd34f8);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar5 = 0x40c00000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3518);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  fVar6 = *(float *)(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x40);
  *(float *)(param_1 + 0x30) = fVar6;
  *(float *)(param_1 + 0x34) = fVar6;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar6;
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a404064; end: 10a4040bf;  */

void FUN_10a404064(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x40);
  *(float *)(param_1 + 0x30) = fVar4;
  *(float *)(param_1 + 0x34) = fVar4;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar4;
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a4040c0; end: 10a404167;  */

void FUN_10a4040c0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd34d8,(char)param_1[9]);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0x4c),param_2,&PTR_DAT_110bd34f8);
  (**(code **)(*param_2 + 0x60))((int)param_1[10],param_2,&PTR_DAT_110bd3518);
  return;
}



/* Entry: 10a404168; end: 10a40416f;  */

void FUN_10a404168(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + -0x18);
  plVar2 = param_2;
  (**(code **)(*plVar1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd34d8,*(undefined1 *)(param_1 + 0x30));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x34),param_2,&PTR_DAT_110bd34f8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x38),param_2,&PTR_DAT_110bd3518);
  return;
}



/* Entry: 10a404170; end: 10a4041ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a4041dc) */

void FUN_10a404170(void)

{
  FUN_10a0ee900(&UNK_10f656165,0x23);
  return;
}



/* Entry: 10a4041f0; end: 10a40431f;  */

void FUN_10a4041f0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 auStack_70 [64];
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  uStack_a8 = *(undefined4 *)(&UNK_10e49612c + lVar2);
  uStack_98 = *(undefined4 *)(&UNK_10e496138 + lVar2);
  uVar5 = *(undefined4 *)(&UNK_10e496144 + lVar2);
  uVar7 = *(undefined8 *)(&UNK_10e496124 + lVar2);
  uStack_a4 = 0;
  uStack_a0 = *(undefined8 *)(&UNK_10e496130 + lVar2);
  uStack_94 = 0;
  uStack_90 = *(undefined8 *)(&UNK_10e49613c + lVar2);
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_74 = 0x3f800000;
  uStack_b0 = uVar7;
  uStack_88 = uVar5;
  func_0x000109519fd0(auStack_70,param_2 + 2,&uStack_b0);
  uVar6 = (undefined4)uVar7;
  uStack_c0 = 0;
  uStack_b8 = 0;
  fVar3 = *(float *)(param_1 + 0x4c);
  uVar8 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = 0x3f000000;
  fVar9 = fVar3 * 0.5;
  bVar1 = *(byte *)(param_2 + 10);
  FUN_10aa1ab28(bVar1);
  uStack_b0 = CONCAT44(uVar4,fVar3);
  uStack_a8 = uVar5;
  uStack_a4 = uVar6;
  uVar4 = uVar8;
  fVar3 = fVar9;
  FUN_10aafb160(*param_2,1,auStack_70,&uStack_c0,&uStack_b0,3);
  if ((bVar1 & 5) != 0) {
    func_0x00010aa1abb4(*(undefined1 *)(param_2 + 10));
    uStack_b0 = CONCAT44(fVar3,uVar4);
    uStack_a8 = uVar5;
    uStack_a4 = uVar6;
    FUN_10aafba78(uVar8,fVar9,*param_2,1,auStack_70,&uStack_c0,&uStack_b0,3,0x10,0xc);
  }
  return;
}



/* Entry: 10a404320; end: 10a40451b;  */

float FUN_10a404320(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar7 = param_2[2];
  fVar3 = fVar5 * param_3[1] + *param_3 * fVar4 + param_3[2] * fVar7;
  fVar8 = fVar5 * param_3[5] + param_3[4] * fVar4 + param_3[6] * fVar7;
  fVar4 = fVar5 * param_3[9] + param_3[8] * fVar4 + param_3[10] * fVar7;
  fVar6 = *(float *)(&UNK_10e496128 + lVar1) * fVar8 + *(float *)(&UNK_10e496124 + lVar1) * fVar3 +
          *(float *)(&UNK_10e49612c + lVar1) * fVar4;
  fVar2 = *(float *)(&UNK_10e496134 + lVar1) * fVar8 + *(float *)(&UNK_10e496130 + lVar1) * fVar3 +
          *(float *)(&UNK_10e496138 + lVar1) * fVar4;
  fVar7 = *(float *)(&UNK_10e496140 + lVar1) * fVar8 + *(float *)(&UNK_10e49613c + lVar1) * fVar3 +
          *(float *)(&UNK_10e496144 + lVar1) * fVar4;
  fVar4 = *(float *)(param_1 + 0x50);
  fVar5 = fVar4 + *(float *)(param_1 + 0x4c) * 0.5;
  fVar3 = fVar4 * fVar6;
  if (fVar3 < 0.0) {
    fVar3 = -(fVar4 * fVar6);
  }
  fVar6 = fVar4 * fVar2;
  if (fVar6 < 0.0) {
    fVar6 = -(fVar4 * fVar2);
  }
  fVar4 = fVar7 * fVar5;
  if (fVar4 < 0.0) {
    fVar4 = -(fVar7 * fVar5);
  }
  return fVar4 + fVar3 + fVar6;
}



/* Entry: 10a40451c; end: 10a40455b;  */

void FUN_10a40451c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  func_0x00010a409a40();
  *puVar1 = &PTR_FUN_110c2e5b8;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a40455c; end: 10a4046df;  */

float FUN_10a40455c(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  return fVar1 * fVar1 * (*(float *)(param_1 + 0x4c) * 3.1415927 + fVar1 * 4.1887903);
}



/* Entry: 10a4046e0; end: 10a40496f;  */

void FUN_10a4046e0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6564df,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3b28;
  pppuVar2 = (undefined8 ***)&UNK_10f656142;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa9;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd3b28;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd3f18;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f5a3e3a,FUN_10a40a168,FUN_10a40a224);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f355a53,FUN_10a40a3bc,FUN_10a40a478);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65615e,FUN_10a40a594,FUN_10a40a650);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6564df,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a404954);
  (*pcVar6)();
}



/* Entry: 10a404970; end: 10a40499f;  */

undefined8 * FUN_10a404970(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a4049a0; end: 10a4049b3;  */

long FUN_10a4049a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a4049b4; end: 10a404a17;  */

void FUN_10a4049b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a404a18; end: 10a404aaf;  */

void FUN_10a404a18(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd3c10;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)((long)puVar1 + 0x54) = 0x204;
  puVar1[0xb] = 0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_FUN_110bd3548;
  puVar1[6] = &PTR_FUN_110bd35f0;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)((long)puVar1 + 100) = *(undefined8 *)(param_2 + 0x4c);
  FUN_10a404ab0(puVar2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a404ab0; end: 10a404b07;  */

void FUN_10a404ab0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x30) = fVar4;
  *(float *)(param_1 + 0x34) = fVar4;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar4;
  lVar3 = *(long *)(param_1 + 0x40);
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a404b08; end: 10a404b8b;  */

void FUN_10a404b08(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd3628,1);
  *(char *)(param_1 + 0x48) = (char)plVar3;
  uVar6 = 0x41900000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3648);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  uVar6 = 0x40c00000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3668);
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  fVar5 = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x30) = fVar5;
  *(float *)(param_1 + 0x34) = fVar5;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar5;
  lVar4 = *(long *)(param_1 + 0x40);
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a404b8c; end: 10a404b93;  */

void FUN_10a404b8c(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd3628,1);
  *(char *)(param_1 + 0x30) = (char)plVar3;
  uVar6 = 0x41900000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3648);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar6 = 0x40c00000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3668);
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  fVar5 = *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x18) = fVar5;
  *(float *)(param_1 + 0x1c) = fVar5;
  pfVar1 = (float *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x20) = fVar5;
  lVar4 = *(long *)(param_1 + 0x28);
  pfVar2 = (float *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x30) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x34) * 0.5;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a404b94; end: 10a404c3b;  */

void FUN_10a404b94(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd3628,(char)param_1[9]);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0x4c),param_2,&PTR_DAT_110bd3648);
  (**(code **)(*param_2 + 0x60))((int)param_1[10],param_2,&PTR_DAT_110bd3668);
  return;
}



/* Entry: 10a404c3c; end: 10a404c43;  */

void FUN_10a404c3c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + -0x18);
  plVar2 = param_2;
  (**(code **)(*plVar1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd3628,*(undefined1 *)(param_1 + 0x30));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x34),param_2,&PTR_DAT_110bd3648);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x38),param_2,&PTR_DAT_110bd3668);
  return;
}



/* Entry: 10a404c44; end: 10a404cbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a404ca8) */

void FUN_10a404c44(void)

{
  FUN_10a0ee900(&UNK_10f656165,0x23);
  return;
}



/* Entry: 10a404cbc; end: 10a404ecf;  */

void FUN_10a404cbc(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uStack_140;
  float fStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined8 uStack_60;
  float fStack_58;
  
  uVar10 = param_2[2];
  fStack_58 = SQRT(*(float *)(param_2 + 6) * *(float *)(param_2 + 6) +
                   *(float *)((long)param_2 + 0x34) * *(float *)((long)param_2 + 0x34) +
                   *(float *)(param_2 + 7) * *(float *)(param_2 + 7));
  fVar3 = (float)uVar10;
  fVar13 = (float)param_2[4];
  fVar8 = (float)((ulong)uVar10 >> 0x20);
  fVar4 = (float)((ulong)param_2[4] >> 0x20);
  uStack_60 = CONCAT44(SQRT(fVar13 * fVar13 + fVar4 * fVar4 +
                            *(float *)(param_2 + 5) * *(float *)(param_2 + 5)),
                       SQRT(fVar3 * fVar3 + fVar8 * fVar8 + (float)param_2[3] * (float)param_2[3]));
  fVar8 = *(float *)(param_1 + 0x4c);
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  FUN_10a404ed0(&uStack_60,*(undefined1 *)(param_1 + 0x48));
  func_0x00010a008c90(auStack_a0,param_2 + 2);
  lVar2 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  uStack_118 = *(undefined4 *)(&UNK_10e49612c + lVar2);
  uStack_108 = *(undefined4 *)(&UNK_10e496138 + lVar2);
  uStack_f8 = *(undefined4 *)(&UNK_10e496144 + lVar2);
  uVar10 = *(undefined8 *)(&UNK_10e496124 + lVar2);
  uStack_114 = 0;
  uStack_110 = *(undefined8 *)(&UNK_10e496130 + lVar2);
  uStack_104 = 0;
  uStack_100 = *(undefined8 *)(&UNK_10e49613c + lVar2);
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_e4 = 0x3f800000;
  uStack_120 = uVar10;
  uVar9 = uStack_108;
  uVar11 = uStack_f8;
  func_0x000109519fd0(auStack_e0,auStack_a0,&uStack_120);
  uVar12 = (undefined4)uVar10;
  uStack_130 = 0;
  fStack_128 = 0.0;
  uVar5 = 0x3f000000;
  fVar13 = fVar8 * 0.5;
  bVar1 = *(byte *)(param_2 + 10);
  FUN_10aa1ab28(bVar1);
  uStack_120 = CONCAT44(uVar9,uVar5);
  uVar7 = uVar6;
  uStack_118 = uVar11;
  uStack_114 = uVar12;
  fVar3 = fVar13;
  FUN_10aafbfc0(*param_2,auStack_e0,&uStack_130,&uStack_120,3);
  uVar9 = (undefined4)uVar7;
  if ((bVar1 & 5) != 0) {
    func_0x00010aa1abb4(*(undefined1 *)(param_2 + 10));
    uStack_140 = CONCAT44(fVar3,uVar9);
    fStack_138 = (float)uVar11;
    uStack_134 = uVar12;
    FUN_10aafc0fc(uVar6,fVar13,*param_2,auStack_e0,&uStack_130,&uStack_140,3,0x18);
  }
  if ((bVar1 >> 3 & 1) != 0) {
    fStack_138 = fStack_128 + fVar13 * -0.5;
    uStack_140 = uStack_130;
    fVar8 = fVar8 * (float)uVar6 * (float)uVar6 * 1.0471976;
    _cbrtf(fVar8);
    FUN_10aafaae4(fVar8 * 0.05,*param_2,auStack_e0,&uStack_140,&uStack_120,6,4,2);
  }
  return;
}



/* Entry: 10a404ed0; end: 10a404f87;  */

float FUN_10a404ed0(float param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = (param_3 + 1) * 0x5556;
  uVar1 = (param_3 + 1) - ((uVar1 >> 0x10) * 2 + (uVar1 >> 0x10)) & 0xffff;
  if (uVar1 == 2) {
    pfVar2 = param_2 + 2;
  }
  else {
    pfVar2 = param_2;
    if (uVar1 == 1) {
      pfVar2 = param_2 + 1;
    }
  }
  uVar1 = (param_3 + 2) * 0x5556;
  uVar1 = (param_3 + 2) - ((uVar1 >> 0x10) * 2 + (uVar1 >> 0x10)) & 0xffff;
  if (uVar1 == 2) {
    param_2 = param_2 + 2;
  }
  else if (uVar1 == 1) {
    param_2 = param_2 + 1;
  }
  fVar3 = *param_2;
  if (*pfVar2 <= *param_2) {
    fVar3 = *pfVar2;
  }
  return param_1 * fVar3;
}



/* Entry: 10a404f88; end: 10a405273;  */

float FUN_10a404f88(long param_1,float *param_2,undefined8 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  
  fVar19 = *(float *)(param_3 + 4);
  fVar20 = *(float *)((long)param_3 + 0x24);
  fVar21 = *(float *)(param_3 + 5);
  fStack_68 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21);
  uVar4 = *(undefined4 *)((long)param_3 + 4);
  fVar11 = *(float *)(param_3 + 1);
  fVar3 = (float)*param_3;
  fVar14 = (float)param_3[2];
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar15 = (float)((ulong)param_3[2] >> 0x20);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x50);
  lVar1 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  fVar16 = *(float *)(&UNK_10e496124 + lVar1);
  fVar18 = *(float *)(&UNK_10e496128 + lVar1);
  fVar17 = *(float *)(&UNK_10e49612c + lVar1);
  fVar12 = *(float *)(&UNK_10e496130 + lVar1);
  fVar22 = *(float *)(&UNK_10e496134 + lVar1);
  fVar7 = *(float *)(&UNK_10e496138 + lVar1);
  fVar13 = *(float *)(&UNK_10e49613c + lVar1);
  fVar8 = *(float *)(&UNK_10e496140 + lVar1);
  fVar9 = *(float *)(&UNK_10e496144 + lVar1);
  uVar10 = *(undefined8 *)((long)param_3 + 0x14);
  fVar23 = (float)((ulong)uVar10 >> 0x20);
  uStack_70 = CONCAT44(SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar23 * fVar23),
                       SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar11 * fVar11));
  FUN_10a404ed0(&uStack_70);
  fStack_b8 = fVar3;
  uStack_b4 = uVar4;
  fStack_b0 = fVar11;
  fStack_ac = fVar14;
  uStack_a8 = uVar10;
  fStack_a0 = fVar19;
  fStack_9c = fVar20;
  fStack_98 = fVar21;
  FUN_10a008b64(&fStack_94,&fStack_b8);
  fVar3 = *param_2;
  fVar6 = param_2[1];
  fVar14 = param_2[2];
  fVar11 = fVar6 * fStack_90 + fStack_94 * fVar3 + fStack_8c * fVar14;
  fVar23 = fVar6 * fStack_84 + fStack_88 * fVar3 + fStack_80 * fVar14;
  fVar3 = fVar6 * fStack_78 + fStack_7c * fVar3 + fStack_74 * fVar14;
  fVar14 = fVar18 * fVar23 + fVar16 * fVar11 + fVar17 * fVar3;
  fVar15 = fVar22 * fVar23 + fVar12 * fVar11 + fVar7 * fVar3;
  fVar6 = fVar8 * fVar23 + fVar13 * fVar11 + fVar9 * fVar3;
  fVar3 = fVar2 * fVar14;
  if (fVar3 < 0.0) {
    fVar3 = -(fVar2 * fVar14);
  }
  fVar14 = fVar2 * fVar15;
  if (fVar14 < 0.0) {
    fVar14 = -(fVar2 * fVar15);
  }
  fVar15 = fVar5 * 0.5 * fVar6;
  if (fVar15 < 0.0) {
    fVar15 = -(fVar5 * 0.5 * fVar6);
  }
  return fVar15 + fVar3 + fVar14;
}



/* Entry: 10a405274; end: 10a405297;  */

void FUN_10a405274(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a405298; end: 10a4052cf;  */

void FUN_10a405298(undefined8 *param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  float fStack_48;
  float fStack_44;
  
  cVar3 = *(char *)(param_2 + 0x48);
  uVar12 = (ulong)*(uint *)(param_2 + 0x4c);
  uVar10 = (ulong)*(uint *)(param_2 + 0x50);
  FUN_10a404ed0(param_3 + 8,cVar3);
  puVar6 = (undefined8 *)0x120;
  __Znwm();
  puVar8 = puVar6 + 8;
  *puVar6 = &PTR_FUN_110c3d0c8;
  fVar9 = (float)uVar10 * (float)uVar10;
  fVar14 = (float)uVar12;
  fVar11 = fVar14 * -0.25;
  fStack_48 = (fVar14 * fVar14 + fVar9 * 4.0) * 0.0375;
  uStack_90 = CONCAT44(uStack_90._4_4_,fStack_48);
  pfVar1 = (float *)&uStack_90;
  fVar13 = fVar11;
  fVar4 = 0.0;
  if (cVar3 == '\x02') {
    fVar13 = 0.0;
    pfVar1 = &fStack_48;
    fVar4 = fVar11;
  }
  pfVar2 = &fStack_44;
  fVar5 = 0.0;
  if (cVar3 != '\x01') {
    pfVar2 = pfVar1;
    fVar5 = fVar13;
  }
  fStack_44 = fStack_48;
  *pfVar2 = fVar9 * 0.3;
  puVar6[5] = 0x3f80000000000000;
  puVar6[4] = 0;
  *(float *)(puVar6 + 2) = fVar14 * fVar9 * 1.0471976;
  *(float *)((long)puVar6 + 0x14) = fVar5;
  fVar13 = 0.0;
  if (cVar3 != '\x01') {
    fVar11 = 0.0;
    fVar13 = fVar4;
  }
  *(float *)(puVar6 + 3) = fVar11;
  *(float *)((long)puVar6 + 0x1c) = fVar13;
  *(float *)(puVar6 + 6) = (float)uStack_90;
  *(float *)((long)puVar6 + 0x34) = fStack_44;
  *(float *)(puVar6 + 7) = fStack_48;
  *puVar6 = &PTR_FUN_110c3d0c8;
  puVar6[1] = puVar8;
  func_0x00010981611c(puVar8,0,1);
  puVar7 = puVar6 + 0x18;
  FUN_10aa68764(uVar10,uVar12,puVar7,cVar3);
  FUN_10aa48018();
  uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar6 + 0x14) >> 0x20) * -0.01,
                       (float)*(undefined8 *)((long)puVar6 + 0x14) * -0.01);
  uStack_58 = (ulong)(uint)(*(float *)((long)puVar6 + 0x1c) * -0.01);
  uStack_88 = puVar7[1];
  uStack_90 = *puVar7;
  uStack_78 = puVar7[3];
  uStack_80 = puVar7[2];
  uStack_68 = puVar7[5];
  uStack_70 = puVar7[4];
  func_0x000109816320(puVar8,&uStack_90,puVar6 + 0x18);
  *(undefined4 *)(puVar6 + 0xb) = 0;
  *param_1 = puVar6;
  return;
}



/* Entry: 10a4052d0; end: 10a40533f;  */

void FUN_10a4052d0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 0x48);
  fVar4 = *(float *)(param_2 + 0x4c);
  fVar3 = *(float *)(param_2 + 0x50);
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  puVar2[5] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(float *)(puVar2 + 2) = fVar4 * fVar3 * fVar3 * 1.0471976;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_FUN_110c3d120;
  puVar2[1] = puVar2 + 8;
  FUN_10aa68764(fVar3,fVar4,puVar2 + 8,uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10a405340; end: 10a4055cf;  */

void FUN_10a405340(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f656508,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3b40;
  pppuVar2 = (undefined8 ***)&UNK_10f656142;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa9;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd3b40;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd3f18;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f5a3e3a,FUN_10a40a790,FUN_10a40a84c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f355a53,FUN_10a40a9e4,FUN_10a40aaa0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65615e,FUN_10a40ab98,FUN_10a40ac54);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f656508,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4055b4);
  (*pcVar6)();
}



/* Entry: 10a4055d0; end: 10a4055ff;  */

undefined8 * FUN_10a4055d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a405600; end: 10a405613;  */

long FUN_10a405600(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a405614; end: 10a405677;  */

void FUN_10a405614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a405678; end: 10a40570f;  */

void FUN_10a405678(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd3c60;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)((long)puVar1 + 0x54) = 0x205;
  puVar1[0xb] = 0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_FUN_110bd3698;
  puVar1[6] = &PTR_FUN_110bd3740;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)((long)puVar1 + 100) = *(undefined8 *)(param_2 + 0x4c);
  FUN_10a405710(puVar2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a405710; end: 10a405767;  */

void FUN_10a405710(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x30) = fVar4;
  *(float *)(param_1 + 0x34) = fVar4;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar4;
  lVar3 = *(long *)(param_1 + 0x40);
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a405768; end: 10a4057eb;  */

void FUN_10a405768(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd3778,1);
  *(char *)(param_1 + 0x48) = (char)plVar3;
  uVar6 = 0x41900000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3798);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  uVar6 = 0x40c00000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd37b8);
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  fVar5 = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x30) = fVar5;
  *(float *)(param_1 + 0x34) = fVar5;
  pfVar1 = (float *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x38) = fVar5;
  lVar4 = *(long *)(param_1 + 0x40);
  pfVar2 = (float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x4c) * 0.5;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a4057ec; end: 10a4057f3;  */

void FUN_10a4057ec(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd3778,1);
  *(char *)(param_1 + 0x30) = (char)plVar3;
  uVar6 = 0x41900000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd3798);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar6 = 0x40c00000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd37b8);
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  fVar5 = *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x18) = fVar5;
  *(float *)(param_1 + 0x1c) = fVar5;
  pfVar1 = (float *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    pfVar1 = (float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x20) = fVar5;
  lVar4 = *(long *)(param_1 + 0x28);
  pfVar2 = (float *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x30) != '\x02') {
    pfVar2 = pfVar1;
  }
  *pfVar2 = *(float *)(param_1 + 0x34) * 0.5;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a4057f4; end: 10a40589b;  */

void FUN_10a4057f4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd3778,(char)param_1[9]);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0x4c),param_2,&PTR_DAT_110bd3798);
  (**(code **)(*param_2 + 0x60))((int)param_1[10],param_2,&PTR_DAT_110bd37b8);
  return;
}



/* Entry: 10a40589c; end: 10a4058a3;  */

void FUN_10a40589c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + -0x18);
  plVar2 = param_2;
  (**(code **)(*plVar1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd3778,*(undefined1 *)(param_1 + 0x30));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x34),param_2,&PTR_DAT_110bd3798);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x38),param_2,&PTR_DAT_110bd37b8);
  return;
}



/* Entry: 10a4058a4; end: 10a40591f;  */

/* WARNING: Removing unreachable block (ram,0x00010a40590c) */

void FUN_10a4058a4(void)

{
  FUN_10a0ee900(&UNK_10f656165,0x23);
  return;
}



/* Entry: 10a405920; end: 10a405ad3;  */

void FUN_10a405920(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined8 uStack_50;
  float fStack_48;
  
  uVar11 = param_2[2];
  fStack_48 = SQRT(*(float *)(param_2 + 6) * *(float *)(param_2 + 6) +
                   *(float *)((long)param_2 + 0x34) * *(float *)((long)param_2 + 0x34) +
                   *(float *)(param_2 + 7) * *(float *)(param_2 + 7));
  fVar3 = (float)uVar11;
  fVar4 = (float)param_2[4];
  fVar9 = (float)((ulong)uVar11 >> 0x20);
  fVar5 = (float)((ulong)param_2[4] >> 0x20);
  uStack_50 = CONCAT44(SQRT(fVar4 * fVar4 + fVar5 * fVar5 +
                            *(float *)(param_2 + 5) * *(float *)(param_2 + 5)),
                       SQRT(fVar3 * fVar3 + fVar9 * fVar9 + (float)param_2[3] * (float)param_2[3]));
  fVar9 = *(float *)(param_1 + 0x4c);
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  FUN_10a405ad4(&uStack_50,*(undefined1 *)(param_1 + 0x48));
  func_0x00010a008c90(auStack_90,param_2 + 2);
  lVar2 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  uStack_108 = *(undefined4 *)(&UNK_10e49612c + lVar2);
  uStack_f8 = *(undefined4 *)(&UNK_10e496138 + lVar2);
  uStack_e8 = *(undefined4 *)(&UNK_10e496144 + lVar2);
  uVar11 = *(undefined8 *)(&UNK_10e496124 + lVar2);
  uStack_104 = 0;
  uStack_100 = *(undefined8 *)(&UNK_10e496130 + lVar2);
  uStack_f4 = 0;
  uStack_f0 = *(undefined8 *)(&UNK_10e49613c + lVar2);
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_d4 = 0x3f800000;
  uStack_110 = uVar11;
  uVar10 = uStack_f8;
  uVar12 = uStack_e8;
  func_0x000109519fd0(auStack_d0,auStack_90,&uStack_110);
  uVar13 = (undefined4)uVar11;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar6 = 0x3f000000;
  bVar1 = *(byte *)(param_2 + 10);
  FUN_10aa1ab28(bVar1);
  uStack_110 = CONCAT44(uVar10,uVar6);
  uVar8 = uVar7;
  uStack_108 = uVar12;
  uStack_104 = uVar13;
  fVar3 = fVar9 * 0.5;
  FUN_10aafb160(*param_2,0,auStack_d0,&uStack_120,&uStack_110,3);
  uVar10 = (undefined4)uVar8;
  if ((bVar1 & 5) != 0) {
    func_0x00010aa1abb4(*(undefined1 *)(param_2 + 10));
    uStack_110 = CONCAT44(fVar3,uVar10);
    uStack_108 = uVar12;
    uStack_104 = uVar13;
    FUN_10aafba78(uVar7,fVar9 * 0.5,*param_2,0,auStack_d0,&uStack_120,&uStack_110,3,0x18,2);
  }
  return;
}



/* Entry: 10a405ad4; end: 10a405b8b;  */

float FUN_10a405ad4(float param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = (param_3 + 1) * 0x5556;
  uVar1 = (param_3 + 1) - ((uVar1 >> 0x10) * 2 + (uVar1 >> 0x10)) & 0xffff;
  if (uVar1 == 2) {
    pfVar2 = param_2 + 2;
  }
  else {
    pfVar2 = param_2;
    if (uVar1 == 1) {
      pfVar2 = param_2 + 1;
    }
  }
  uVar1 = (param_3 + 2) * 0x5556;
  uVar1 = (param_3 + 2) - ((uVar1 >> 0x10) * 2 + (uVar1 >> 0x10)) & 0xffff;
  if (uVar1 == 2) {
    param_2 = param_2 + 2;
  }
  else if (uVar1 == 1) {
    param_2 = param_2 + 1;
  }
  fVar3 = *param_2;
  if (*pfVar2 <= *param_2) {
    fVar3 = *pfVar2;
  }
  return param_1 * fVar3;
}



/* Entry: 10a405b8c; end: 10a405e77;  */

float FUN_10a405b8c(long param_1,float *param_2,undefined8 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  
  fVar19 = *(float *)(param_3 + 4);
  fVar20 = *(float *)((long)param_3 + 0x24);
  fVar21 = *(float *)(param_3 + 5);
  fStack_68 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21);
  uVar4 = *(undefined4 *)((long)param_3 + 4);
  fVar11 = *(float *)(param_3 + 1);
  fVar3 = (float)*param_3;
  fVar14 = (float)param_3[2];
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar15 = (float)((ulong)param_3[2] >> 0x20);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x50);
  lVar1 = (ulong)*(byte *)(param_1 + 0x48) * 0x24;
  fVar16 = *(float *)(&UNK_10e496124 + lVar1);
  fVar18 = *(float *)(&UNK_10e496128 + lVar1);
  fVar17 = *(float *)(&UNK_10e49612c + lVar1);
  fVar12 = *(float *)(&UNK_10e496130 + lVar1);
  fVar22 = *(float *)(&UNK_10e496134 + lVar1);
  fVar7 = *(float *)(&UNK_10e496138 + lVar1);
  fVar13 = *(float *)(&UNK_10e49613c + lVar1);
  fVar8 = *(float *)(&UNK_10e496140 + lVar1);
  fVar9 = *(float *)(&UNK_10e496144 + lVar1);
  uVar10 = *(undefined8 *)((long)param_3 + 0x14);
  fVar23 = (float)((ulong)uVar10 >> 0x20);
  uStack_70 = CONCAT44(SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar23 * fVar23),
                       SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar11 * fVar11));
  FUN_10a405ad4(&uStack_70);
  fStack_b8 = fVar3;
  uStack_b4 = uVar4;
  fStack_b0 = fVar11;
  fStack_ac = fVar14;
  uStack_a8 = uVar10;
  fStack_a0 = fVar19;
  fStack_9c = fVar20;
  fStack_98 = fVar21;
  FUN_10a008b64(&fStack_94,&fStack_b8);
  fVar3 = *param_2;
  fVar6 = param_2[1];
  fVar14 = param_2[2];
  fVar11 = fVar6 * fStack_90 + fStack_94 * fVar3 + fStack_8c * fVar14;
  fVar23 = fVar6 * fStack_84 + fStack_88 * fVar3 + fStack_80 * fVar14;
  fVar3 = fVar6 * fStack_78 + fStack_7c * fVar3 + fStack_74 * fVar14;
  fVar14 = fVar18 * fVar23 + fVar16 * fVar11 + fVar17 * fVar3;
  fVar15 = fVar22 * fVar23 + fVar12 * fVar11 + fVar7 * fVar3;
  fVar6 = fVar8 * fVar23 + fVar13 * fVar11 + fVar9 * fVar3;
  fVar3 = fVar2 * fVar14;
  if (fVar3 < 0.0) {
    fVar3 = -(fVar2 * fVar14);
  }
  fVar14 = fVar2 * fVar15;
  if (fVar14 < 0.0) {
    fVar14 = -(fVar2 * fVar15);
  }
  fVar15 = fVar5 * 0.5 * fVar6;
  if (fVar15 < 0.0) {
    fVar15 = -(fVar5 * 0.5 * fVar6);
  }
  return fVar15 + fVar3 + fVar14;
}



/* Entry: 10a405e78; end: 10a405e9b;  */

void FUN_10a405e78(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a405e9c; end: 10a405ed3;  */

void FUN_10a405e9c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  cVar2 = *(char *)(param_2 + 0x48);
  fVar5 = *(float *)(param_2 + 0x4c);
  fVar4 = *(float *)(param_2 + 0x50);
  FUN_10a405ad4(param_3 + 8,cVar2);
  puVar3 = (undefined8 *)0x90;
  __Znwm();
  puVar1 = puVar3 + 8;
  puVar3[5] = 0x3f80000000000000;
  puVar3[4] = 0;
  *(float *)(puVar3 + 2) = fVar5 * fVar4 * fVar4 * 3.1415927;
  *(undefined8 *)((long)puVar3 + 0x14) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *puVar3 = &PTR_FUN_110c3d178;
  puVar3[1] = puVar1;
  fVar4 = fVar4 * 0.01;
  fVar5 = fVar5 * 0.005;
  if (cVar2 == '\x02') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar5 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar4 * 1.0 + -0.04,fVar4 * 1.0 + -0.04);
    fStack_50 = fVar4;
    fStack_4c = fVar4;
    fStack_48 = fVar5;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
    puVar3[8] = &PTR_DAT_110b13b70;
    *(undefined4 *)(puVar3 + 0x11) = 2;
  }
  else if (cVar2 == '\x01') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar4 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar5 * 1.0 + -0.04,fVar4 * 1.0 + -0.04);
    fStack_50 = fVar4;
    fStack_4c = fVar5;
    fStack_48 = fVar4;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
  }
  else if (cVar2 == '\0') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar4 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar4 * 1.0 + -0.04,fVar5 * 1.0 + -0.04);
    fStack_50 = fVar5;
    fStack_4c = fVar4;
    fStack_48 = fVar4;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
    puVar3[8] = &PTR_DAT_110b13aa0;
    *(undefined4 *)(puVar3 + 0x11) = 0;
  }
  *(undefined4 *)(puVar3 + 0xb) = 0;
  (**(code **)(*(long *)puVar3[1] + 0x40))(0x3f800000,(long *)puVar3[1],&fStack_50);
  puVar3[6] = CONCAT44(fStack_4c * 10000.0,fStack_50 * 10000.0);
  *(float *)(puVar3 + 7) = fStack_48 * 10000.0;
  *param_1 = puVar3;
  return;
}



/* Entry: 10a405ed4; end: 10a405f43;  */

void FUN_10a405ed4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  cVar2 = *(char *)(param_2 + 0x48);
  fVar5 = *(float *)(param_2 + 0x4c);
  fVar4 = *(float *)(param_2 + 0x50);
  puVar3 = (undefined8 *)0x90;
  __Znwm();
  puVar1 = puVar3 + 8;
  puVar3[5] = 0x3f80000000000000;
  puVar3[4] = 0;
  *(float *)(puVar3 + 2) = fVar5 * fVar4 * fVar4 * 3.1415927;
  *(undefined8 *)((long)puVar3 + 0x14) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *puVar3 = &PTR_FUN_110c3d178;
  puVar3[1] = puVar1;
  fVar4 = fVar4 * 0.01;
  fVar5 = fVar5 * 0.005;
  if (cVar2 == '\x02') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar5 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar4 * 1.0 + -0.04,fVar4 * 1.0 + -0.04);
    fStack_50 = fVar4;
    fStack_4c = fVar4;
    fStack_48 = fVar5;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
    puVar3[8] = &PTR_DAT_110b13b70;
    *(undefined4 *)(puVar3 + 0x11) = 2;
  }
  else if (cVar2 == '\x01') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar4 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar5 * 1.0 + -0.04,fVar4 * 1.0 + -0.04);
    fStack_50 = fVar4;
    fStack_4c = fVar5;
    fStack_48 = fVar4;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
  }
  else if (cVar2 == '\0') {
    uStack_44 = 0;
    puVar3[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 9) = 0x23;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3d23d70a;
    puVar3[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 0x11) = 1;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xc] = 0x3f8000003f800000;
    puVar3[0xf] = (ulong)(uint)(fVar4 * 1.0 + -0.04);
    puVar3[0xe] = CONCAT44(fVar4 * 1.0 + -0.04,fVar5 * 1.0 + -0.04);
    fStack_50 = fVar5;
    fStack_4c = fVar4;
    fStack_48 = fVar4;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar3 + 9) = 0xd;
    puVar3[8] = &PTR_DAT_110b13aa0;
    *(undefined4 *)(puVar3 + 0x11) = 0;
  }
  *(undefined4 *)(puVar3 + 0xb) = 0;
  (**(code **)(*(long *)puVar3[1] + 0x40))(0x3f800000,(long *)puVar3[1],&fStack_50);
  puVar3[6] = CONCAT44(fStack_4c * 10000.0,fStack_50 * 10000.0);
  *(float *)(puVar3 + 7) = fStack_48 * 10000.0;
  *param_1 = puVar3;
  return;
}



/* Entry: 10a405f44; end: 10a406007;  */

void FUN_10a405f44(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f656142;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x9d;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a406008(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f656189;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f656142;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x9d;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f656142;
  uStack_48 = 0;
  FUN_10a40ae90();
  FUN_10a40b6bc(param_1);
  return;
}



/* Entry: 10a406008; end: 10a4060df;  */

/* WARNING: Removing unreachable block (ram,0x00010a4060a0) */

undefined1  [16] FUN_10a406008(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f656532,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a40ad94(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4060e0; end: 10a40612b;  */

undefined8 * FUN_10a4060e0(undefined8 *param_1)

{
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  func_0x00010a40b778(param_1 + 9);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a40612c; end: 10a406137;  */

undefined8 * FUN_10a40612c(undefined8 *param_1)

{
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  func_0x00010a40b778(param_1 + 9);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a406138; end: 10a406163;  */

void FUN_10a406138(void)

{
  FUN_10a4060e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a406164; end: 10a406223;  */

void FUN_10a406164(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd3fb0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_FUN_110bd37e8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)((long)puVar1 + 0x54) = 0x100;
  puVar1[6] = &PTR_DAT_110bd3890;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  FUN_10a406224(puVar2,param_2 + 0x48);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a406224; end: 10a4062a3;  */

void FUN_10a406224(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a40668c(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 != 0) && (func_0x00010aae9fd8(), lVar1 != 0)) {
    FUN_10a08d2e0(auStack_38,lVar1 + 0x10);
    FUN_10a406708(param_1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a4062a4; end: 10a406357;  */

long * FUN_10a4062a4(undefined1 *param_1,undefined **param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10a40bb20;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110bd3ca0;
    *(undefined1 **)((long)register0x00000008 + -0x58) = param_1;
    ppuVar4 = &PTR_DAT_110bd3b70;
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x68);
    uVar6 = 0;
    FUN_10a406358(param_2,&PTR_DAT_110bd3b70,puVar5,0);
    plVar2 = (long *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
      return plVar2;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    plVar3 = plVar2;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x88) = plVar2;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a406358;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x160) = *puVar5;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x160);
    (**(code **)(puVar5[1] + 0x10))((undefined1 *)((long)register0x00000008 + -0x158),puVar5 + 1);
    FUN_109ffe064((undefined1 *)((long)register0x00000008 + -0x120),*ppuVar4,ppuVar4[1]);
    *(code **)((long)register0x00000008 + -0x108) = FUN_10a40b864;
    *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_FUN_110bd3ff0;
    unaff_x22 = (undefined8 *)0x58;
    __Znwm();
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x108);
    lVar1 = *(long *)((long)register0x00000008 + -0x158);
    *unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x160);
    (**(code **)(lVar1 + 0x10))(unaff_x22 + 1,(undefined1 *)((long)register0x00000008 + -0x158));
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x22[9] = *(undefined8 *)((long)register0x00000008 + -0x118);
    unaff_x22[8] = uVar7;
    unaff_x22[10] = *(undefined8 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 **)((long)register0x00000008 + -0xf8) = unaff_x22;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x178),&UNK_10f656142);
    plVar2 = plVar3;
    param_2 = ppuVar4;
    (**(code **)(*plVar3 + 0x250))
              (plVar3,ppuVar4,(undefined1 *)((long)register0x00000008 + -0x108),uVar6,
               (undefined1 *)((long)register0x00000008 + -0x178));
    if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))
              ((undefined1 *)((long)register0x00000008 + -0x100));
    if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x158))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -200))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))
              ((undefined1 *)((long)register0x00000008 + -0x100));
    if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x158))
              ((undefined1 *)((long)register0x00000008 + -0x158));
    unaff_x30 = FUN_10a406524;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    unaff_x20 = ppuVar4;
    unaff_x21 = plVar3;
  }
  return plVar2;
}



/* Entry: 10a406358; end: 10a406523;  */

long * FUN_10a406358(long *param_1,undefined **param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  
  while( true ) {
    ppuVar6 = param_2;
    plVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = *param_3;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xf0);
    (**(code **)(param_3[1] + 0x10))((undefined1 *)((long)register0x00000008 + -0xe8),param_3 + 1);
    FUN_109ffe064((undefined1 *)((long)register0x00000008 + -0xb0),*ppuVar6,ppuVar6[1]);
    *(code **)((long)register0x00000008 + -0x98) = FUN_10a40b864;
    *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_FUN_110bd3ff0;
    unaff_x22 = (undefined8 *)0x58;
    __Znwm();
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x98);
    lVar1 = *(long *)((long)register0x00000008 + -0xe8);
    *unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    (**(code **)(lVar1 + 0x10))(unaff_x22 + 1,(undefined1 *)((long)register0x00000008 + -0xe8));
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x22[9] = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x22[8] = uVar8;
    unaff_x22[10] = *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x22;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x108),&UNK_10f656142);
    plVar3 = plVar2;
    ppuVar7 = ppuVar6;
    (**(code **)(*plVar2 + 0x250))
              (plVar2,ppuVar6,(undefined1 *)((long)register0x00000008 + -0x98),param_4,
               (undefined1 *)((long)register0x00000008 + -0x108));
    if (*(char *)((long)register0x00000008 + -0xf1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x108));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))
              ((undefined1 *)((long)register0x00000008 + -0x90));
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xe8);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xe8))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0xf1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x108));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))
              ((undefined1 *)((long)register0x00000008 + -0x90));
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xe8))
              ((undefined1 *)((long)register0x00000008 + -0xe8));
    puVar5 = puVar4;
    __Unwind_Resume();
    *(undefined ***)((long)register0x00000008 + -0x130) = ppuVar6;
    *(undefined1 **)((long)register0x00000008 + -0x128) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x120) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x118) = FUN_10a406524;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0x10a40bb20;
    *(undefined ***)((long)register0x00000008 + -0x170) = &PTR_DAT_110bd3ca0;
    *(undefined1 **)((long)register0x00000008 + -0x168) = puVar5 + -0x18;
    param_2 = &PTR_DAT_110bd3b70;
    param_3 = (undefined8 *)((long)register0x00000008 + -0x178);
    param_4 = 0;
    FUN_10a406358(ppuVar7);
    unaff_x19 = (long *)((long)register0x00000008 + -0x170);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x170))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x138)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x170))
              ((undefined1 *)((long)register0x00000008 + -0x170));
    unaff_x30 = FUN_10a406358;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    unaff_x20 = ppuVar6;
    unaff_x21 = plVar2;
  }
  return plVar3;
}



/* Entry: 10a406524; end: 10a40652b;  */

long * FUN_10a406524(undefined1 *param_1,undefined **param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10a40bb20;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110bd3ca0;
    *(undefined1 **)((long)register0x00000008 + -0x58) = param_1 + -0x18;
    ppuVar4 = &PTR_DAT_110bd3b70;
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x68);
    uVar6 = 0;
    FUN_10a406358(param_2,&PTR_DAT_110bd3b70,puVar5,0);
    plVar2 = (long *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
      return plVar2;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    plVar3 = plVar2;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x88) = plVar2;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a406358;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x160) = *puVar5;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x160);
    (**(code **)(puVar5[1] + 0x10))((undefined1 *)((long)register0x00000008 + -0x158),puVar5 + 1);
    FUN_109ffe064((undefined1 *)((long)register0x00000008 + -0x120),*ppuVar4,ppuVar4[1]);
    *(code **)((long)register0x00000008 + -0x108) = FUN_10a40b864;
    *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_FUN_110bd3ff0;
    unaff_x22 = (undefined8 *)0x58;
    __Znwm();
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x108);
    lVar1 = *(long *)((long)register0x00000008 + -0x158);
    *unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x160);
    (**(code **)(lVar1 + 0x10))(unaff_x22 + 1,(undefined1 *)((long)register0x00000008 + -0x158));
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x22[9] = *(undefined8 *)((long)register0x00000008 + -0x118);
    unaff_x22[8] = uVar7;
    unaff_x22[10] = *(undefined8 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 **)((long)register0x00000008 + -0xf8) = unaff_x22;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x178),&UNK_10f656142);
    plVar2 = plVar3;
    param_2 = ppuVar4;
    (**(code **)(*plVar3 + 0x250))
              (plVar3,ppuVar4,(undefined1 *)((long)register0x00000008 + -0x108),uVar6,
               (undefined1 *)((long)register0x00000008 + -0x178));
    if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))
              ((undefined1 *)((long)register0x00000008 + -0x100));
    if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x158))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -200))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))
              ((undefined1 *)((long)register0x00000008 + -0x100));
    if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x158))
              ((undefined1 *)((long)register0x00000008 + -0x158));
    unaff_x30 = FUN_10a406524;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    unaff_x20 = ppuVar4;
    unaff_x21 = plVar3;
  }
  return plVar2;
}



/* Entry: 10a40652c; end: 10a40661f;  */

void FUN_10a40652c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = param_1;
  plVar4 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar3;
  plStack_28 = plVar4;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  plStack_30 = (long *)&UNK_10f656540;
  plStack_28 = (long *)0x1b;
  plStack_38 = (long *)param_1[10];
  lStack_40 = param_1[9];
  if (param_1[10] != 0) {
    plVar3 = (long *)(param_1[10] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd3b70,&lStack_40,&plStack_30);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a406620; end: 10a406627;  */

void FUN_10a406620(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)(param_1 + -0x18);
  plVar4 = param_2;
  (**(code **)(*plVar3 + 0x38))();
  plStack_30 = plVar3;
  plStack_28 = plVar4;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  plStack_30 = (long *)&UNK_10f656540;
  plStack_28 = (long *)0x1b;
  plStack_38 = *(long **)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd3b70,&uStack_40,&plStack_30);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a406628; end: 10a40668b;  */

/* WARNING: Removing unreachable block (ram,0x00010a406678) */

void FUN_10a406628(void)

{
  FUN_10a0ee900("%s",2);
  return;
}



/* Entry: 10a40668c; end: 10a406707;  */

undefined8 * FUN_10a40668c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a406708; end: 10a406e6b;  */

undefined8 FUN_10a406708(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  ushort *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  int *piStack_e8;
  int *piStack_e0;
  float fStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  byte *pbStack_a0;
  byte *pbStack_98;
  long lStack_90;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&pbStack_a0,*param_2,param_2[1]);
  }
  else {
    pbStack_98 = (byte *)param_2[1];
    pbStack_a0 = (byte *)*param_2;
    lStack_90 = param_2[2];
  }
  FUN_10ad00a7c(&piStack_e8,&pbStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(pbStack_a0);
  }
  uVar16 = (long)piStack_e0 - (long)piStack_e8;
  if (uVar16 < 4) {
    puVar12 = &UNK_10f6561ba;
  }
  else {
    if (piStack_e0 == piStack_e8) goto LAB_10a406df4;
    iVar19 = *piStack_e8;
    if ((iVar19 == 300) || (iVar19 == 200)) {
      uVar28 = 0x40;
      if (iVar19 != 300) {
        uVar28 = 0x38;
      }
      if (uVar28 <= uVar16) {
        iVar20 = 0;
        fVar35 = (float)piStack_e8[3];
        uVar36 = *(undefined8 *)(piStack_e8 + 1);
        uVar32 = *(undefined8 *)(piStack_e8 + 4);
        fVar34 = (float)piStack_e8[6];
        uVar18 = *(undefined8 *)(piStack_e8 + 7);
        *(int *)(param_1 + 0x60) = piStack_e8[9];
        *(undefined8 *)(param_1 + 0x58) = uVar18;
        uVar18 = *(undefined8 *)(piStack_e8 + 10);
        *(int *)(param_1 + 0x6c) = piStack_e8[0xc];
        *(undefined8 *)(param_1 + 100) = uVar18;
        iVar24 = *(int *)(param_1 + 100);
        iVar2 = *(int *)(param_1 + 0x68);
        uVar5 = *(uint *)(param_1 + 0x6c);
        puVar12 = &UNK_10f63b8ac;
        while ((iVar23 = iVar2, iVar20 == 1 || (iVar23 = iVar24, iVar20 != 2))) {
          bVar9 = 0 < iVar23;
          while (iVar20 = iVar20 + 1, !bVar9) {
            if (iVar20 == 2) goto LAB_10a406df0;
            bVar9 = false;
          }
        }
        if (((int)uVar5 < 1) ||
           (((long)iVar24 * (long)iVar2 - (long)(int)((long)iVar24 * (long)iVar2) != 0 ||
            (lVar21 = (long)(int)uVar5 * (long)(iVar24 * iVar2), lVar21 - (int)lVar21 != 0)))) {
          puVar12 = &UNK_10f63b8ac;
          goto LAB_10a406df0;
        }
        if (uVar16 < 0x35) goto LAB_10a406df4;
        *(int *)(param_1 + 0x70) = piStack_e8[0xd];
        if (iVar19 == 300) {
          if (uVar16 < 0x39) goto LAB_10a406df4;
          fVar37 = (float)piStack_e8[0xe];
          fVar38 = (float)piStack_e8[0xf];
          uVar28 = 0x40;
        }
        else {
          fVar38 = 0.0;
          uVar28 = 0x38;
          fVar37 = 0.0;
        }
        lVar21 = (ulong)uVar5 * (long)iVar2;
        uVar1 = uVar28 + lVar21;
        if (uVar1 <= uVar16) {
          FUN_10a0dc020(&pbStack_a0,lVar21);
          if ((pbStack_98 != pbStack_a0) && (uVar28 < (ulong)((long)piStack_e0 - (long)piStack_e8)))
          {
            _memcpy(pbStack_a0,(long)piStack_e8 + uVar28,lVar21);
            if (iVar2 == 0) {
              lVar29 = 0;
            }
            else {
              if ((ulong)((long)pbStack_98 - (long)pbStack_a0) <= lVar21 - 1U) goto LAB_10a406df4;
              lVar29 = 0;
              pbVar17 = pbStack_a0;
              do {
                lVar29 = lVar29 + (ulong)*pbVar17;
                lVar21 = lVar21 + -1;
                pbVar17 = pbVar17 + 1;
              } while (lVar21 != 0);
            }
            uVar16 = uVar1 + lVar29 * 2;
            if ((ulong)((long)piStack_e0 - (long)piStack_e8) < uVar16) {
              FUN_10a00946c(&UNK_10f65622d);
              goto LAB_10a406df4;
            }
            FUN_10a0dc020(&lStack_b8,lVar29 << 1);
            if ((lStack_b0 == lStack_b8) || ((ulong)((long)piStack_e0 - (long)piStack_e8) <= uVar1))
            goto LAB_10a406df4;
            _memcpy(lStack_b8,(long)piStack_e8 + uVar1,lVar29 << 1);
            lVar21 = 0;
            if (lVar29 != 0) {
              uVar5 = *(uint *)(param_1 + 100);
              uVar28 = 1;
              pbVar17 = (byte *)(lStack_b8 + 1);
              do {
                if (((ulong)(lStack_b0 - lStack_b8) <= uVar28 - 1) ||
                   ((ulong)(lStack_b0 - lStack_b8) <= uVar28)) goto LAB_10a406df4;
                bVar6 = *pbVar17;
                bVar9 = false;
                bVar10 = true;
                bVar11 = false;
                if ((uint)pbVar17[-1] <= (uint)bVar6) {
                  uVar22 = (uint)bVar6;
                  bVar11 = SBORROW4(uVar5,uVar22);
                  bVar9 = (int)(uVar5 - uVar22) < 0;
                  bVar10 = uVar5 == uVar22;
                }
                if (bVar10 || bVar9 != bVar11) {
                  FUN_10a00946c(&UNK_10f65625d);
                  goto LAB_10a406df4;
                }
                lVar21 = lVar21 + (ulong)((uint)bVar6 - (uint)pbVar17[-1]) + 1;
                uVar28 = uVar28 + 2;
                lVar29 = lVar29 + -1;
                pbVar17 = pbVar17 + 2;
              } while (lVar29 != 0);
            }
            lVar29 = 1;
            if (iVar19 != 300) {
              lVar29 = 2;
            }
            if ((lVar21 << lVar29) + uVar16 != (long)piStack_e0 - (long)piStack_e8) {
              FUN_10a00946c(&UNK_10f656293);
              goto LAB_10a406df4;
            }
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
            fStack_d0 = *(float *)(param_1 + 0x70) * 1.7320508 + 1.0;
            func_0x00010817850c(param_1 + 0x78,
                                (long)*(int *)(param_1 + 0x68) * (long)*(int *)(param_1 + 100) *
                                (long)*(int *)(param_1 + 0x6c),&fStack_d0);
            if (iVar19 == 200) {
              FUN_10a132380(&fStack_d0,lVar21);
              if ((lStack_c8 == CONCAT44(uStack_cc,fStack_d0)) ||
                 ((ulong)((long)piStack_e0 - (long)piStack_e8) <= uVar16)) goto LAB_10a406df4;
              _memcpy(CONCAT44(uStack_cc,fStack_d0),(long)piStack_e8 + uVar16,lVar21 << 2);
              uVar5 = *(uint *)(param_1 + 0x6c);
              if (0 < (int)uVar5) {
                iVar20 = 0;
                uVar16 = 0;
                iVar19 = 0;
                lVar21 = 0;
                uVar22 = *(uint *)(param_1 + 0x68);
                do {
                  if (0 < (int)uVar22) {
                    uVar28 = 0;
                    iVar24 = iVar20;
                    do {
                      uVar1 = uVar28 + uVar16 * uVar22;
                      if ((ulong)((long)pbStack_98 - (long)pbStack_a0) <= uVar1) goto LAB_10a406df4;
                      uVar15 = (uint)pbStack_a0[uVar1];
                      if (pbStack_a0[uVar1] != 0) {
                        uVar13 = 0;
                        uVar14 = lStack_c8 - CONCAT44(uStack_cc,fStack_d0) >> 2;
                        lVar21 = (long)(int)lVar21;
                        do {
                          if ((ulong)(lStack_b0 - lStack_b8) <= (ulong)(lVar21 * 2))
                          goto LAB_10a406df4;
                          uVar25 = lVar21 * 2 | 1;
                          if ((ulong)(lStack_b0 - lStack_b8) <= uVar25) goto LAB_10a406df4;
                          bVar6 = *(byte *)(lStack_b8 + lVar21 * 2);
                          bVar7 = *(byte *)(lStack_b8 + uVar25);
                          if (bVar6 <= bVar7) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            lVar4 = *(long *)(param_1 + 0x80);
                            lVar29 = 0;
                            if ((ulong)(long)iVar19 <= uVar14) {
                              lVar29 = uVar14 - (long)iVar19;
                            }
                            lVar30 = ((ulong)bVar7 - (ulong)bVar6) + 1;
                            uVar25 = (ulong)bVar6 + (long)(iVar24 * *(int *)(param_1 + 100));
                            puVar27 = (undefined4 *)
                                      (CONCAT44(uStack_cc,fStack_d0) + (long)iVar19 * 4);
                            do {
                              if ((lVar29 == 0) || ((ulong)(lVar4 - lVar3 >> 2) <= uVar25))
                              goto LAB_10a406df4;
                              *(undefined4 *)(lVar3 + uVar25 * 4) = *puVar27;
                              lVar29 = lVar29 + -1;
                              iVar19 = iVar19 + 1;
                              uVar25 = uVar25 + 1;
                              lVar30 = lVar30 + -1;
                              puVar27 = puVar27 + 1;
                            } while (lVar30 != 0);
                            uVar15 = (uint)pbStack_a0[uVar1];
                          }
                          lVar21 = lVar21 + 1;
                          uVar13 = uVar13 + 1;
                        } while (uVar13 < uVar15);
                      }
                      uVar28 = uVar28 + 1;
                      iVar24 = iVar24 + 1;
                    } while (uVar28 != uVar22);
                  }
                  uVar16 = uVar16 + 1;
                  iVar20 = iVar20 + uVar22;
                } while (uVar16 != uVar5);
              }
            }
            else {
              if (iVar19 != 300) goto LAB_10a406d00;
              FUN_10a40944c(&fStack_d0,lVar21);
              if ((lStack_c8 == CONCAT44(uStack_cc,fStack_d0)) ||
                 ((ulong)((long)piStack_e0 - (long)piStack_e8) <= uVar16)) goto LAB_10a406df4;
              _memcpy(CONCAT44(uStack_cc,fStack_d0),(long)piStack_e8 + uVar16,lVar21 << 1);
              uVar5 = *(uint *)(param_1 + 0x6c);
              if (0 < (int)uVar5) {
                iVar20 = 0;
                uVar16 = 0;
                iVar19 = 0;
                lVar21 = 0;
                uVar22 = *(uint *)(param_1 + 0x68);
                do {
                  if (0 < (int)uVar22) {
                    uVar28 = 0;
                    iVar24 = iVar20;
                    do {
                      uVar1 = uVar28 + uVar16 * uVar22;
                      if ((ulong)((long)pbStack_98 - (long)pbStack_a0) <= uVar1) goto LAB_10a406df4;
                      uVar15 = (uint)pbStack_a0[uVar1];
                      if (pbStack_a0[uVar1] != 0) {
                        uVar13 = 0;
                        uVar14 = lStack_c8 - CONCAT44(uStack_cc,fStack_d0) >> 1;
                        lVar21 = (long)(int)lVar21;
                        do {
                          if ((ulong)(lStack_b0 - lStack_b8) <= (ulong)(lVar21 * 2))
                          goto LAB_10a406df4;
                          uVar25 = lVar21 * 2 | 1;
                          if ((ulong)(lStack_b0 - lStack_b8) <= uVar25) goto LAB_10a406df4;
                          bVar6 = *(byte *)(lStack_b8 + lVar21 * 2);
                          bVar7 = *(byte *)(lStack_b8 + uVar25);
                          if (bVar6 <= bVar7) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            lVar4 = *(long *)(param_1 + 0x80);
                            lVar29 = 0;
                            if ((ulong)(long)iVar19 <= uVar14) {
                              lVar29 = uVar14 - (long)iVar19;
                            }
                            lVar30 = ((ulong)bVar7 - (ulong)bVar6) + 1;
                            uVar25 = (ulong)bVar6 + (long)(iVar24 * *(int *)(param_1 + 100));
                            puVar26 = (ushort *)(CONCAT44(uStack_cc,fStack_d0) + (long)iVar19 * 2);
                            do {
                              if ((lVar29 == 0) || ((ulong)(lVar4 - lVar3 >> 2) <= uVar25))
                              goto LAB_10a406df4;
                              *(float *)(lVar3 + uVar25 * 4) =
                                   fVar37 + (fVar38 - fVar37) * ((float)*puVar26 / 65535.0);
                              lVar29 = lVar29 + -1;
                              iVar19 = iVar19 + 1;
                              uVar25 = uVar25 + 1;
                              lVar30 = lVar30 + -1;
                              puVar26 = puVar26 + 1;
                            } while (lVar30 != 0);
                            uVar15 = (uint)pbStack_a0[uVar1];
                          }
                          lVar21 = lVar21 + 1;
                          uVar13 = uVar13 + 1;
                        } while (uVar13 < uVar15);
                      }
                      uVar28 = uVar28 + 1;
                      iVar24 = iVar24 + 1;
                    } while (uVar28 != uVar22);
                  }
                  uVar16 = uVar16 + 1;
                  iVar20 = iVar20 + uVar22;
                } while (uVar16 != uVar5);
              }
            }
            if (CONCAT44(uStack_cc,fStack_d0) != 0) {
              lStack_c8 = CONCAT44(uStack_cc,fStack_d0);
              __ZdlPv();
            }
LAB_10a406d00:
            if (lStack_b8 != 0) {
              lStack_b0 = lStack_b8;
              __ZdlPv();
            }
            if (pbStack_a0 != (byte *)0x0) {
              pbStack_98 = pbStack_a0;
              __ZdlPv();
            }
            fVar31 = (float)uVar32;
            fVar33 = (float)((ulong)uVar32 >> 0x20);
            fVar37 = ((float)uVar36 + fVar31) * 0.5;
            fVar38 = ((float)((ulong)uVar36 >> 0x20) + fVar33) * 0.5;
            fVar35 = (fVar35 + fVar34) * 0.5;
            *(float *)(param_1 + 0x24) = fVar37;
            *(ulong *)(param_1 + 0x30) = CONCAT44(fVar33 - fVar38,fVar31 - fVar37);
            *(ulong *)(param_1 + 0x28) = CONCAT44(fVar35,fVar38);
            *(float *)(param_1 + 0x38) = fVar34 - fVar35;
            if (piStack_e8 != (int *)0x0) {
              piStack_e0 = piStack_e8;
              __ZdlPv();
            }
            return 1;
          }
          goto LAB_10a406df4;
        }
      }
      puVar12 = &UNK_10f65622d;
    }
    else {
      puVar12 = &UNK_10f6561f1;
    }
  }
LAB_10a406df0:
  FUN_10a00946c(puVar12);
LAB_10a406df4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a406df8);
  (*pcVar8)();
}



/* Entry: 10a406e6c; end: 10a406fc3;  */

undefined8
FUN_10a406e6c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  ulong uStack_58;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  fVar8 = (float)param_1;
  uStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_10aa1ab28(*(undefined1 *)(param_6 + 10));
  iVar3 = *(int *)(param_5 + 100);
  if (iVar3 != 0) {
    uVar5 = 0;
    iVar1 = *(int *)(param_5 + 0x68);
    iVar4 = iVar1;
    fStack_70 = fVar8;
    do {
      if (iVar4 != 0) {
        uVar6 = 0;
        uVar9 = 0;
        iVar3 = *(int *)(param_5 + 0x6c);
        fVar8 = (float)uVar5;
        iVar4 = iVar3;
        do {
          if (iVar4 != 0) {
            uVar7 = 0;
            do {
              uVar2 = uVar5 + (uVar6 + uVar7 * (long)*(int *)(param_5 + 0x68)) *
                              (long)*(int *)(param_5 + 100);
              puStack_60 = &UNK_10f65618f;
              uStack_58 = 0x2a;
              if ((ulong)(*(long *)(param_5 + 0x80) - *(long *)(param_5 + 0x78) >> 2) <= uVar2) {
                FUN_10a0edfc4(&puStack_60);
                return 0;
              }
              fVar8 = *(float *)(*(long *)(param_5 + 0x78) + uVar2 * 4);
              uVar9 = 0;
              if (fVar8 <= 0.0) {
                fVar8 = *(float *)(param_5 + 0x70);
                uVar9 = 0;
                puStack_60 = (undefined *)
                             CONCAT44((float)uVar6 * fVar8 +
                                      (float)((ulong)*(undefined8 *)(param_5 + 0x58) >> 0x20),
                                      (float)uVar5 * fVar8 + (float)*(undefined8 *)(param_5 + 0x58))
                ;
                uStack_58 = (ulong)(uint)(fVar8 * (float)uVar7 + *(float *)(param_5 + 0x60));
                FUN_10aafa040(fVar8,fVar8,fVar8,*param_6,param_6 + 2,&puStack_60,&fStack_70,0);
                iVar3 = *(int *)(param_5 + 0x6c);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (ulong)(long)iVar3);
            iVar1 = *(int *)(param_5 + 0x68);
            iVar4 = iVar3;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulong)(long)iVar1);
        iVar3 = *(int *)(param_5 + 100);
        iVar4 = iVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(long)iVar3);
  }
  return CONCAT44(uVar9,fVar8);
}



/* Entry: 10a406fc4; end: 10a406fd3;  */

undefined8 FUN_10a406fc4(void)

{
  return 0;
}



/* Entry: 10a406fd4; end: 10a407037;  */

void FUN_10a406fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x120;
  __Znwm();
  func_0x00010a409a40();
  *puVar1 = &PTR_FUN_110c2e5f0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)((long)puVar1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x104) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar1 + 0x114) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a407038; end: 10a4070a3;  */

undefined8 FUN_10a407038(void)

{
  return 0;
}



/* Entry: 10a4070a4; end: 10a407333;  */

void FUN_10a4070a4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65655c,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3b58;
  pppuVar2 = (undefined8 ***)&UNK_10f656142;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xb5;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd3b58;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd3f18;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f410265,FUN_10a40bba4,FUN_10a40bc5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638b9c,FUN_10a40be5c,FUN_10a40bf98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6562c7,FUN_10a40c144,FUN_10a40c200);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65655c,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a407318);
  (*pcVar6)();
}



/* Entry: 10a407334; end: 10a407383;  */

undefined8 * FUN_10a407334(undefined8 *param_1)

{
  FUN_10a40c30c(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0xb);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a407384; end: 10a40738f;  */

undefined8 * FUN_10a407384(undefined8 *param_1)

{
  FUN_10a40c30c(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0xb);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a407390; end: 10a4073bb;  */

void FUN_10a407390(void)

{
  FUN_10a407334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4073bc; end: 10a4074b7;  */

void FUN_10a4073bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bd3cc8;
  puVar5[3] = &PTR_FUN_110bd38d8;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined8 *)((long)puVar5 + 0x3c) = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = 0;
  *(undefined8 *)((long)puVar5 + 0x44) = 0;
  *(undefined2 *)((long)puVar5 + 0x54) = 0x106;
  puVar5[0xb] = 0;
  puVar5[6] = &PTR_DAT_110bd3980;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0xd] = uVar7;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  FUN_10a19ad28(puVar5 + 0xe,param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x70) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = puVar5[0x11];
  puVar5[0x11] = uVar8;
  puVar5[0x10] = uVar7;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  bVar2 = *(byte *)(param_2 + 0x48);
  *(byte *)(puVar5 + 0xc) = *(byte *)(puVar5 + 0xc) & 0xfd | bVar2 & 2;
  *(byte *)((long)puVar5 + 0x55) = (*(byte *)((long)puVar5 + 0x55) & 0xfe | bVar2 >> 1 & 1) ^ 1;
  *param_1 = puVar5 + 3;
  param_1[1] = puVar5;
  return;
}



/* Entry: 10a4074b8; end: 10a4076f7;  */

void FUN_10a4074b8(undefined1 *param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  byte bVar8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long *plVar9;
  undefined **unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar4 = param_1;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4[0x48] = puVar4[0x48] & 0xfe;
    lVar7 = *(long *)(puVar4 + 0x40);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x3a0) = 0xffffffffffffffff;
      *(undefined8 *)(lVar7 + 0x3a8) = 0;
    }
    *(undefined **)(puVar4 + 0x50) = param_2[3];
    plVar9 = *(long **)(puVar4 + 0x80);
    *(undefined8 *)(puVar4 + 0x78) = 0;
    *(undefined8 *)(puVar4 + 0x80) = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    ppuVar5 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd39b8,0);
    bVar8 = 2;
    if ((int)ppuVar5 == 0) {
      bVar8 = 0;
    }
    puVar4[0x48] = puVar4[0x48] & 0xfd | bVar8;
    puVar4[0x3d] = puVar4[0x3d] & 0xfe | (byte)ppuVar5 ^ 1;
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a40c3a0;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110bd3d08;
    *(undefined1 **)((long)register0x00000008 + -0x68) = puVar4 + 0x68;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6e696b536873656d;
    *(undefined1 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x49) = 8;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f656142);
    unaff_x22 = param_2;
    (**(code **)(*param_2 + 0x250))
              (param_2,&PTR_DAT_110bd39d8,(undefined1 *)((long)register0x00000008 + -0x78),0,
               (undefined1 *)((long)register0x00000008 + -0xd0));
    if (*(char *)((long)register0x00000008 + -0xb9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xd0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    if (((ulong)unaff_x22 & 1) == 0) {
      lVar7 = *(long *)(puVar4 + 0x70);
      *(undefined8 *)(puVar4 + 0x68) = 0;
      *(undefined8 *)(puVar4 + 0x70) = 0;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_10a40c4e8;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_110bd3d20;
    *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar4;
    ppuVar5 = &PTR_DAT_110bd39f8;
    FUN_10a38b538(param_2,&PTR_DAT_110bd39f8,(undefined1 *)((long)register0x00000008 + -0xb8),0);
    unaff_x19 = unaff_x21;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb0))(unaff_x21);
    unaff_x30 = FUN_10a4076f8;
    puVar6 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    param_1 = puVar6 + -0x18;
    param_2 = ppuVar5;
    unaff_x20 = puVar4;
  }
  return;
}



/* Entry: 10a4076f8; end: 10a4076ff;  */

void FUN_10a4076f8(undefined1 *param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  long lVar6;
  byte bVar7;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long *plVar8;
  undefined1 *unaff_x21;
  undefined **unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar5 = param_1 + -0x18;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_1[0x30] = param_1[0x30] & 0xfe;
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x3a0) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 0x3a8) = 0;
    }
    *(undefined **)(param_1 + 0x38) = param_2[3];
    plVar8 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    ppuVar4 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd39b8,0);
    bVar7 = 2;
    if ((int)ppuVar4 == 0) {
      bVar7 = 0;
    }
    param_1[0x30] = param_1[0x30] & 0xfd | bVar7;
    param_1[0x25] = param_1[0x25] & 0xfe | (byte)ppuVar4 ^ 1;
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a40c3a0;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110bd3d08;
    *(undefined1 **)((long)register0x00000008 + -0x68) = param_1 + 0x50;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6e696b536873656d;
    *(undefined1 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x49) = 8;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f656142);
    unaff_x22 = param_2;
    (**(code **)(*param_2 + 0x250))
              (param_2,&PTR_DAT_110bd39d8,(undefined1 *)((long)register0x00000008 + -0x78),0,
               (undefined1 *)((long)register0x00000008 + -0xd0));
    if (*(char *)((long)register0x00000008 + -0xb9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xd0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    if (((ulong)unaff_x22 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_10a40c4e8;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_110bd3d20;
    *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar5;
    ppuVar4 = &PTR_DAT_110bd39f8;
    FUN_10a38b538(param_2,&PTR_DAT_110bd39f8,(undefined1 *)((long)register0x00000008 + -0xb8),0);
    unaff_x19 = unaff_x21;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb0))(unaff_x21);
    unaff_x30 = FUN_10a4076f8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    param_2 = ppuVar4;
    unaff_x20 = puVar5;
  }
  return;
}



/* Entry: 10a407700; end: 10a4077b3;  */

void FUN_10a407700(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd39b8,*(byte *)(param_1 + 9) >> 1 & 1);
  FUN_10a38b7b4(param_2,&PTR_DAT_110bd39f8,param_1 + 0xb,&UNK_10f6512b9,0x10);
  FUN_10a38b85c(param_2,&PTR_DAT_110bd39d8,param_1 + 0xd,&UNK_10f652b5a,0xe);
  return;
}



/* Entry: 10a4077b4; end: 10a4077bb;  */

void FUN_10a4077b4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + -0x18);
  plVar2 = param_2;
  (**(code **)(*plVar1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd39b8,*(byte *)(param_1 + 0x30) >> 1 & 1);
  FUN_10a38b7b4(param_2,&PTR_DAT_110bd39f8,param_1 + 0x40,&UNK_10f6512b9,0x10);
  FUN_10a38b85c(param_2,&PTR_DAT_110bd39d8,param_1 + 0x50,&UNK_10f652b5a,0xe);
  return;
}



/* Entry: 10a4077bc; end: 10a407a6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a40789c) */

void FUN_10a4077bc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_21;
  
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    FUN_10a407cc4(param_2);
  }
  uStack_21 = 9;
  uStack_30 = 0x65;
  uStack_38 = 0x706168536873654d;
  lVar1 = *(long *)(param_2 + 0x58);
  if (lVar1 == 0) {
    func_0x000107c2b054(&uStack_50,&DAT_10f6562ce);
  }
  else if (*(char *)(lVar1 + 0x6f) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  }
  else {
    uStack_48 = *(undefined8 *)(lVar1 + 0x60);
    uStack_50 = *(undefined8 *)(lVar1 + 0x58);
    lStack_40 = *(long *)(lVar1 + 0x68);
  }
  FUN_10a0ee900(param_1,&UNK_10f6562d5,0x17);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a407a70; end: 10a407b27;  */

void FUN_10a407a70(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uStack_48;
  undefined1 uStack_41;
  
  uStack_48 = param_4;
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    FUN_10a407cc4(param_2);
  }
  plVar1 = *(long **)(param_2 + 0x78);
  if (plVar1 != (long *)0x0) {
    FUN_10a40c5c4(param_1,&uStack_41,(ulong *)(param_2 + 0x78),&uStack_48);
    (**(code **)(*plVar1 + 0x98))(plVar1,param_3,uStack_48,param_5,*param_1 + 0x18);
    if (((ulong)plVar1 & 1) != 0) {
      return;
    }
    FUN_10a40bb4c(param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a407b28; end: 10a407b2f;  */

void FUN_10a407b28(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a407b30; end: 10a407bfb;  */

float FUN_10a407b30(long param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_28 [12];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  plVar2 = *(long **)(param_1 + 0x58);
  if ((plVar2 != (long *)0x0) && ((*(byte *)(param_1 + 0x48) >> 1 & 1) != 0)) {
    FUN_10a347d04(0);
    if (plVar2 == (long *)0x0) {
      fStack_1c = -3.4028235e+38;
      fStack_14 = fStack_1c;
      fStack_18 = fStack_1c;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(auStack_28);
    }
    iVar3 = 0;
    while ((fVar4 = fStack_18, iVar3 == 1 || (fVar4 = fStack_1c, iVar3 != 2))) {
      bVar1 = fVar4 < 0.0;
      while (iVar3 = iVar3 + 1, bVar1) {
        if (iVar3 == 2) {
          return 0.0;
        }
        bVar1 = true;
      }
    }
    fVar4 = 0.0;
    if (0.0 <= fStack_14) {
      fVar4 = fStack_14 * fStack_18 * fStack_1c;
    }
    return fVar4;
  }
  return 0.0;
}



/* Entry: 10a407bfc; end: 10a407cbb;  */

void FUN_10a407bfc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    FUN_10a407cc4(param_2);
  }
  plVar4 = *(long **)(param_2 + 0x78);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a407c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x90))(param_1,plVar4,*param_3,param_3 + 1);
    return;
  }
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  puVar5[8] = &PTR_DAT_110b13c88;
  uVar3 = uRam0000000113835570;
  uVar2 = uRam0000000113835560;
  uVar1 = CONCAT44(uRam000000011383557c,uRam0000000113835578);
  puVar5[3] = uRam0000000113835568;
  puVar5[2] = uVar2;
  puVar5[5] = uVar1;
  puVar5[4] = uVar3;
  uVar1 = CONCAT44(uRam0000000113835580,uRam000000011383557c);
  *(undefined8 *)((long)puVar5 + 0x34) = uRam0000000113835584;
  *(undefined8 *)((long)puVar5 + 0x2c) = uVar1;
  *puVar5 = &PTR_DAT_110c3b848;
  puVar5[1] = puVar5 + 8;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *(undefined4 *)(puVar5 + 9) = 0x1b;
  puVar5[0xb] = 0xffffffff00000000;
  *param_1 = puVar5;
  return;
}



/* Entry: 10a407cbc; end: 10a407cc3;  */

void FUN_10a407cbc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a407cc4; end: 10a407e77;  */

void FUN_10a407cc4(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  byte bStack_41;
  undefined8 uStack_40;
  long *plStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x48) = bVar1 | 1;
  plVar6 = *(long **)(param_1 + 0x80);
  plStack_38 = *(long **)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6562ed,&UNK_10f656329,0xa3,&UNK_10f65636b);
      }
    }
    else {
      bStack_41 = bVar1 >> 1 & 1;
      FUN_10aa34f1c(&uStack_60,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0xac0));
      FUN_10aa1ba24(&uStack_70,uStack_60,(long *)(param_1 + 0x58),&bStack_41);
      plVar6 = plStack_68;
      uVar4 = uStack_70;
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      plVar7 = *(long **)(param_1 + 0x80);
      *(long **)(param_1 + 0x80) = plVar6;
      *(undefined8 *)(param_1 + 0x78) = uVar4;
      if (plVar7 != (long *)0x0) {
        plVar6 = plVar7 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar5 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_38;
      if (cStack_50 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_58);
        plVar6 = plStack_38;
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a407e78; end: 10a407ec7;  */

void FUN_10a407e78(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x58) != *param_2) {
    FUN_10a19ad28();
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe;
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x3a0) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x3a8) = 0;
    }
  }
  return;
}



/* Entry: 10a407ec8; end: 10a40835b;  */

void FUN_10a407ec8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appuStack_d8,&UNK_10f655229,5);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3f18;
  pppuVar2 = (undefined8 ***)&UNK_10f656142;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_a8 = (undefined **)0x0;
  pcStack_a0 = (code *)0x0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x9d;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bd3f18;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_a8 = (undefined **)0x0;
    pcStack_a0 = (code *)CONCAT71(pcStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_a8 = *(undefined ***)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    pcStack_a0 = *(code **)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar10;
    uStack_90 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar9 & 0xffffffff,uVar5)
    ;
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f655229,5);
      FUN_10a05431c(param_1);
    }
    ppuStack_a8 = (undefined **)0x0;
    pcStack_a0 = (code *)0x0;
    ppuStack_b0 = (undefined8 **)&UNK_10f655229;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f656142;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      ppuStack_b0 = (undefined8 **)FUN_10a40c69c;
      ppuStack_a8 = &PTR_FUN_110bd3d88;
      pcStack_a0 = FUN_10a40835c;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a0544d8(param_1,&UNK_10f65639e,&ppuStack_b0,0,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f6563ae,FUN_10a40c81c,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f6563c2,FUN_10a40c97c,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f6563d4,FUN_10a40cad8,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f6563e7,FUN_10a40cc38,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f6563f6,FUN_10a40cd98,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a408330;
      FUN_10a054dac(param_1,&UNK_10f656406,FUN_10a40cef8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_c1 < '\0') {
      __ZdlPv(appuStack_d8[0]);
    }
    __Unwind_Resume();
    puVar8 = (undefined8 *)0xa0;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110bd3cc8;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(undefined1 *)(puVar8 + 7) = 0;
    *(undefined8 *)((long)puVar8 + 0x3c) = 0;
    *(undefined8 *)((long)puVar8 + 0x4c) = 0;
    *(undefined8 *)((long)puVar8 + 0x44) = 0;
    *(undefined2 *)((long)puVar8 + 0x54) = 0x106;
    puVar8[0xb] = 0;
    puVar8[6] = &PTR_DAT_110bd3980;
    *(undefined1 *)(puVar8 + 0xc) = 0;
    puVar8[0xd] = param_1;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0x13] = 0;
    puVar8[0x12] = 0;
    extraout_x8[1] = puVar8;
    puVar8[3] = &PTR_FUN_110bd38d8;
    *extraout_x8 = puVar8 + 3;
    return;
  }
LAB_10a408330:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a408334);
  (*pcVar6)();
}



/* Entry: 10a40835c; end: 10a40844b;  */

void FUN_10a40835c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd3cc8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)((long)puVar1 + 0x54) = 0x106;
  puVar1[0xb] = 0;
  puVar1[6] = &PTR_DAT_110bd3980;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xd] = param_2;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110bd38d8;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10a40844c; end: 10a40850f;  */

void FUN_10a40844c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_360;
  code *pcStack_358;
  long lStack_328;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2a8;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  long lStack_228;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a40d058;
  puStack_78 = &UNK_10f656532;
  uStack_70 = 0xd;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10a40d0bc;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  uStack_158 = 0x10a40d118;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar2);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  uStack_1d8 = 0x10a40d178;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume(pppuVar2);
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = &PTR_DAT_110b9ec98;
  uStack_258 = 0x10a40d1d8;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_260;
  (*(code *)*ppuStack_260)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_260)(&ppuStack_260);
  __Unwind_Resume(pppuVar2);
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2e0 = &PTR_DAT_110b9ec98;
  uStack_2d8 = 0x10a40d238;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_2e0;
  (*(code *)*ppuStack_2e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_2e0)(&ppuStack_2e0);
  __Unwind_Resume(pppuVar2);
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_360 = &PTR_DAT_110b9ec98;
  pcStack_358 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_360;
  (*(code *)*ppuStack_360)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_360)(&ppuStack_360);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a408510; end: 10a4085d3;  */

void FUN_10a408510(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_2e0;
  code *pcStack_2d8;
  long lStack_2a8;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  long lStack_228;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a40d0bc;
  puStack_78 = &UNK_10f65657a;
  uStack_70 = 0xb;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10a40d118;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  uStack_158 = 0x10a40d178;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar2);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  uStack_1d8 = 0x10a40d1d8;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume(pppuVar2);
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = &PTR_DAT_110b9ec98;
  uStack_258 = 0x10a40d238;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_260;
  (*(code *)*ppuStack_260)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_260)(&ppuStack_260);
  __Unwind_Resume(pppuVar2);
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2e0 = &PTR_DAT_110b9ec98;
  pcStack_2d8 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_2e0;
  (*(code *)*ppuStack_2e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_2e0)(&ppuStack_2e0);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a4085d4; end: 10a408697;  */

void FUN_10a4085d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_260;
  code *pcStack_258;
  long lStack_228;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a40d118;
  puStack_78 = &UNK_10f6564aa;
  uStack_70 = 0xc;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10a40d178;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  uStack_158 = 0x10a40d1d8;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar2);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  uStack_1d8 = 0x10a40d238;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume(pppuVar2);
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = &PTR_DAT_110b9ec98;
  pcStack_258 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_260;
  (*(code *)*ppuStack_260)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_260)(&ppuStack_260);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a408698; end: 10a40875b;  */

void FUN_10a408698(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a40d178;
  puStack_78 = &UNK_10f656499;
  uStack_70 = 8;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10a40d1d8;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  uStack_158 = 0x10a40d238;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar2);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  pcStack_1d8 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a40875c; end: 10a40881f;  */

void FUN_10a40875c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_160;
  code *pcStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a40d1d8;
  puStack_78 = &UNK_10f656508;
  uStack_70 = 0xd;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10a40d238;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  pcStack_158 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a408820; end: 10a4088e3;  */

void FUN_10a408820(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a40d238;
  puStack_78 = &UNK_10f6564df;
  uStack_70 = 9;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10a40d298;
  FUN_10a57077c();
  pppuVar2 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}



/* Entry: 10a4088e4; end: 10a4089a7;  */

void FUN_10a4088e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *extraout_x8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a40d298;
  puStack_78 = &UNK_10f65655c;
  uStack_70 = 9;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar2);
  FUN_10a4089f8();
  if (*extraout_x8 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f656449);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4089e4);
  (*pcVar1)();
}


