/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a420078; end: 10a42007f;  */

void FUN_10a420078(long param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar3 = *(long *)(param_1 + 0x108);
  FUN_10a3dd9ac(&lStack_48);
  if (lStack_48 == 0) {
    FUN_10a00946c(&UNK_10f657465);
  }
  else {
    plVar4 = (long *)(param_1 + 0x1b0);
    while( true ) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        if (cStack_38 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_40);
          return;
        }
        return;
      }
      FUN_10ad07dec();
      func_0x0001094ccb54();
      if (lVar3 == 0) break;
      puVar1 = (undefined4 *)(lVar3 + 0x28);
      lVar3 = lStack_48;
      FUN_10a7718b4(*(undefined4 *)(plVar4 + 5),lStack_48,param_1 + -0x68,*puVar1);
    }
    FUN_109ffdddc(&UNK_10f639994);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a420050);
  (*pcVar2)();
}



/* Entry: 10a420080; end: 10a420137;  */

void FUN_10a420080(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_34;
  
  if (*(long *)(param_1 + 0x230) != *param_2) {
    func_0x0001094f1d40(param_1 + 0x208);
    lVar3 = *param_2;
    FUN_10a41f9a4(param_1 + 0x230,lVar3,param_2[1]);
    plVar1 = *(long **)(param_1 + 0x230);
    if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x90))(), (int)plVar1 == 2)) {
      FUN_10ad07dec();
      for (plVar1 = (long *)plVar1[2]; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        uStack_34 = *(undefined4 *)(plVar1 + 5);
        lVar2 = lVar3 + 0x20;
        func_0x00010aaab720(lVar2,&uStack_34);
        if (lVar2 != 0) {
          FUN_10aa89bac(lVar3,*(undefined4 *)(plVar1 + 5));
          FUN_10a41f500(param_1,plVar1 + 2);
        }
      }
    }
  }
  return;
}



/* Entry: 10a420138; end: 10a4201df;  */

float FUN_10a420138(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  fVar3 = (float)((long)plVar1 - *param_1) / 1e+09;
  fVar2 = 0.0;
  if ((*(char *)((long)param_1 + 9) != '\x01') ||
     (fVar2 = fVar3 / *(float *)((long)param_1 + 0xc), fVar2 < 1.0)) {
    if ((*(char *)((long)param_1 + 10) != '\x01') ||
       (fVar2 = fVar3 / *(float *)(param_1 + 2), fVar2 < 1.0)) {
      return *(float *)((long)param_1 + 0x1c) +
             fVar2 * (*(float *)(param_1 + 3) - *(float *)((long)param_1 + 0x1c));
    }
    *param_2 = 1;
    *(undefined1 *)((long)param_1 + 10) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  return *(float *)((long)param_1 + 0x14);
}



/* Entry: 10a4201e0; end: 10a4202bf;  */

undefined1  [16] FUN_10a4201e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f658582;
  return auVar1;
}



/* Entry: 10a4202c0; end: 10a420323;  */

void FUN_10a4202c0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a420324(param_1,&uStack_58);
  FUN_10a4451ec();
  return;
}



/* Entry: 10a420324; end: 10a4203fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a4203bc) */

undefined1  [16] FUN_10a420324(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f658582,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4450f0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4203fc; end: 10a42046f;  */

void FUN_10a4203fc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd7a20;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x3e] = &PTR_DAT_110bd7b50;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a420470; end: 10a42052b;  */

void FUN_10a420470(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bd5620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a42052c; end: 10a420563;  */

void FUN_10a42052c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bd5620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a420564; end: 10a420583;  */

void FUN_10a420564(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 0xb90);
  lStack_28 = param_1;
  if ((*(long *)(lVar1 + 0x38) != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f67511e,&UNK_10f675159,0x7e,&UNK_10f6751cf);
  }
  FUN_10a7ac804(lVar1 + 0x20,&lStack_28,&lStack_28);
  return;
}



/* Entry: 10a420584; end: 10a4205e7;  */

void FUN_10a420584(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1;
  FUN_10a7acbf4(*(long *)(*(long *)(param_1 + 0x170) + 0xb90) + 0x20,&lStack_18);
  return;
}



/* Entry: 10a4205e8; end: 10a4206b7;  */

undefined1  [16] FUN_10a4205e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f6585a3;
  return auVar1;
}



/* Entry: 10a4206b8; end: 10a420f6f;  */

void FUN_10a4206b8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6585a3,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9df0;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
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
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd9df0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c07c30;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f651d0c,FUN_10a4452a8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f64bf63,FUN_10a4453f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f64bf51,FUN_10a445548,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,"snap",FUN_10a445610,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f6574d1,FUN_10a44577c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f6574de,FUN_10a445874,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f6574eb,FUN_10a44596c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f6574f8,FUN_10a445a64,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f651d9a,FUN_10a445b5c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f651dc4,FUN_10a445c78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f651dbc,FUN_10a445d74,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f651da8,FUN_10a445e70,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f64bf84,FUN_10a445fd8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a420f50;
    FUN_10a054dac(param_1,&UNK_10f64bf6f,FUN_10a44609c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657505,FUN_10a446280,FUN_10a4463e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f410265,FUN_10a445b5c,FUN_10a445e70);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f651dd2,FUN_10a44661c,FUN_10a445c78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bf9d,FUN_10a4466fc,FUN_10a4467c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bfaa,FUN_10a446880,FUN_10a446960);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657513,FUN_10a446a50,FUN_10a446b0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657522,FUN_10a446c14,FUN_10a446cd0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65752b,FUN_10a446db4,FUN_10a446e84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657537,FUN_10a446f58,FUN_10a447014);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657545,FUN_10a447104,FUN_10a4471c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657551,FUN_10a4472cc,FUN_10a447388);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657563,FUN_10a447484,FUN_10a447540);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6585a3,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a420f50:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a420f54);
  (*pcVar6)();
}



/* Entry: 10a420f70; end: 10a42114f;  */

void FUN_10a420f70(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plStack_28;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[2] = (long)&PTR_DAT_110bd5880;
  param_1[7] = (long)&PTR_DAT_110bd58d8;
  param_1[0xd] = (long)&PTR_DAT_110bd58f8;
  param_1[0x16] = (long)&PTR_DAT_110bd5968;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[5];
  param_1[0x17] = (long)&PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = (long)&PTR_FUN_110b9ec48;
  plStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&plStack_28);
  plStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&plStack_28);
  plStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&plStack_28);
  plStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&plStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  plStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&plStack_28);
  plStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&plStack_28);
  lVar2 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[99] = (long)&PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar1 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,param_2 + 1);
  return;
}



/* Entry: 10a421150; end: 10a4211c3;  */

void FUN_10a421150(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd5650;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0x9e] = &PTR_DAT_110bd59f8;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bd5a38);
  return;
}



/* Entry: 10a4211c4; end: 10a42127f;  */

void FUN_10a4211c4(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bd5a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a421280; end: 10a4212b7;  */

void FUN_10a421280(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bd5a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4212b8; end: 10a421327;  */

void FUN_10a4212b8(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a421328(param_1 + 0x2a0,&uStack_40);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10a0d4a18(&puStack_28);
  return;
}



/* Entry: 10a421328; end: 10a4213b7;  */

long * FUN_10a421328(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)*param_2;
  if (param_1[1] - *param_1 == param_2[1] - *param_2) {
    do {
      if (plVar1 == (long *)param_1[1]) {
        return param_1;
      }
      lVar3 = *plVar1;
      lVar4 = *plVar2;
      plVar1 = plVar1 + 2;
      plVar2 = plVar2 + 2;
    } while (lVar3 == lVar4);
  }
  FUN_10a447884(param_1);
  FUN_10a0d49bc(param_1);
  lVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010a4478dc(param_1);
  func_0x00010a447948(param_1);
  return param_1;
}



/* Entry: 10a4213b8; end: 10a4213cb;  */

undefined4 FUN_10a4213b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4bc);
}



/* Entry: 10a4213cc; end: 10a4217df;  */

long * FUN_10a4213cc(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [8];
  
  plVar1 = param_1;
  FUN_10a66a824(param_1,param_2 + 1);
  lVar4 = *param_2;
  *plVar1 = lVar4;
  plVar1[2] = (long)&PTR_DAT_110bd5880;
  plVar1[7] = (long)&PTR_DAT_110bd58d8;
  plVar1[0xd] = (long)&PTR_DAT_110bd58f8;
  plVar1[0x16] = (long)&PTR_DAT_110bd5968;
  *(long *)((long)plVar1 + *(long *)(lVar4 + -0x18)) = param_2[5];
  plVar1[0x17] = (long)&PTR_DAT_110bd5998;
  *(undefined1 *)((long)plVar1 + 0x25c) = 0;
  plVar1[0x4d] = 0;
  plVar1[0x4c] = 0;
  plVar1[0x4a] = 0;
  plVar1[0x49] = 0;
  *(undefined1 *)(plVar1 + 0x4b) = 0;
  if (sRam0000000113301f52 == -1) {
    sRam0000000113301f52 = 0x260;
  }
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  if (sRam0000000113300f0a == -1) {
    sRam0000000113300f0a = 0x2a0;
  }
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  if (sRam0000000113300f08 == -1) {
    sRam0000000113300f08 = 0x2f0;
  }
  param_1[0x60] = 0;
  *(undefined2 *)(param_1 + 0x61) = 0x102;
  *(undefined1 *)((long)param_1 + 0x30a) = 1;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[99] = (long)&PTR_DAT_110bd6470;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((long)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x72] = (long)&PTR_FUN_110b9ec48;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x3a2) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 1;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0x400000003f000000;
  *(undefined1 *)((long)param_1 + 0x40c) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x412) = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 1;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x462) = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x93] = 1;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  if ((bRam00000001137eb150 & 1) == 0) {
    bRam00000001137eb150 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x4b9) = 3;
  auVar5 = NEON_fmov(0x3f800000,4);
  *(long *)((long)param_1 + 0x4c4) = auVar5._8_8_;
  *(long *)((long)param_1 + 0x4bc) = auVar5._0_8_;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x3f800000;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[0x9a] = (long)(puVar2 + 3);
  param_1[0x9b] = (long)puVar2;
  FUN_10a5cf1fc(param_1 + 0x9a);
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[0x9c] = (long)(puVar2 + 3);
  param_1[0x9d] = (long)puVar2;
  FUN_10a5cf1fc(param_1 + 0x9c);
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[5] = 0x656c422065646972;
  puVar2[4] = 0x7265766f206c6c69;
  puVar2[7] = 0x6e69206574617453;
  puVar2[6] = 0x736570616853646e;
  *(undefined8 *)((long)puVar2 + 0x44) = 0x2e6873654d726564;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0x6e6552206e692065;
  puVar2[1] = 0x6853646e656c4220;
  *puVar2 = 0x676e697473697845;
  puVar2[3] = 0x7720746e656e6f70;
  puVar2[2] = 0x6d6f632073657061;
  *(undefined1 *)((long)puVar2 + 0x4c) = 0;
  lVar4 = 0x20;
  __Znwm();
  func_0x000107c3192c();
  *(undefined4 *)(lVar4 + 0x18) = 2;
  *(undefined1 *)(lVar4 + 0x1c) = 0;
  lVar3 = param_1[0x71];
  param_1[0x71] = lVar4;
  if (lVar3 != 0) {
    FUN_10a447854();
  }
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10a4217e0; end: 10a42198b;  */

void FUN_10a4217e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar5 = *(long *)(param_1 + 0x168);
  lVar6 = *(long *)(lVar5 + 0x158);
  do {
    if (lVar6 == lVar5 + 0x150) goto LAB_10a421844;
    if (*(long *)(lVar6 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0xb0);
      (**(code **)(*plVar4 + 0x18))(plVar4,0xcc065e1a2996816);
      if (plVar4 != (long *)0x0) {
        FUN_10a3ad44c(&uStack_40);
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = *(long *)(param_1 + 0x278);
        *(long **)(param_1 + 0x278) = plStack_38;
        *(undefined8 *)(param_1 + 0x270) = uStack_40;
        if (lVar6 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar4 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
LAB_10a421844:
        lVar5 = *(long *)(param_1 + 0x168);
        lVar6 = *(long *)(lVar5 + 0x158);
        do {
          if (lVar6 == lVar5 + 0x150) {
            return;
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0xb0);
            (**(code **)(*plVar4 + 0x18))(plVar4,0xd07927f5ab7790e9);
            if (plVar4 != (long *)0x0) {
              func_0x00010a3adfc8(&uStack_40);
              if (plStack_38 != (long *)0x0) {
                plVar4 = plStack_38 + 2;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = *plVar4 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              lVar6 = *(long *)(param_1 + 0x298);
              *(long **)(param_1 + 0x298) = plStack_38;
              *(undefined8 *)(param_1 + 0x290) = uStack_40;
              if (lVar6 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              if (plStack_38 != (long *)0x0) {
                plVar4 = plStack_38 + 1;
                do {
                  lVar6 = *plVar4;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = lVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar6 == 0) {
                  (**(code **)(*plStack_38 + 0x10))(plStack_38);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
                }
              }
              return;
            }
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while( true );
      }
    }
    lVar6 = *(long *)(lVar6 + 8);
  } while( true );
}



/* Entry: 10a42198c; end: 10a421993;  */

void FUN_10a42198c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar5 = *(long *)(param_1 + 0x100);
  lVar6 = *(long *)(lVar5 + 0x158);
  do {
    if (lVar6 == lVar5 + 0x150) goto LAB_10a421844;
    if (*(long *)(lVar6 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0xb0);
      (**(code **)(*plVar4 + 0x18))(plVar4,0xcc065e1a2996816);
      if (plVar4 != (long *)0x0) {
        FUN_10a3ad44c(&uStack_40);
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = *(long *)(param_1 + 0x210);
        *(long **)(param_1 + 0x210) = plStack_38;
        *(undefined8 *)(param_1 + 0x208) = uStack_40;
        if (lVar6 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar4 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
LAB_10a421844:
        lVar5 = *(long *)(param_1 + 0x100);
        lVar6 = *(long *)(lVar5 + 0x158);
        do {
          if (lVar6 == lVar5 + 0x150) {
            return;
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0xb0);
            (**(code **)(*plVar4 + 0x18))(plVar4,0xd07927f5ab7790e9);
            if (plVar4 != (long *)0x0) {
              func_0x00010a3adfc8(&uStack_40);
              if (plStack_38 != (long *)0x0) {
                plVar4 = plStack_38 + 2;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = *plVar4 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              lVar6 = *(long *)(param_1 + 0x230);
              *(long **)(param_1 + 0x230) = plStack_38;
              *(undefined8 *)(param_1 + 0x228) = uStack_40;
              if (lVar6 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              if (plStack_38 != (long *)0x0) {
                plVar4 = plStack_38 + 1;
                do {
                  lVar6 = *plVar4;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = lVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar6 == 0) {
                  (**(code **)(*plStack_38 + 0x10))(plStack_38);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
                }
              }
              return;
            }
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while( true );
      }
    }
    lVar6 = *(long *)(lVar6 + 8);
  } while( true );
}



/* Entry: 10a421994; end: 10a421a7f;  */

void FUN_10a421994(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x238),&PTR_DAT_110c07c30,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x4d0),&PTR_DAT_110bd9df0,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  FUN_10a421a80(&uStack_30,param_1);
  FUN_10a7887b0(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xc50),&uStack_30,1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0xc60);
  lStack_38 = lStack_28;
  uStack_40 = uStack_30;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a7931fc(uVar4,&uStack_40);
  if (lStack_38 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a421a80; end: 10a421b43;  */

void FUN_10a421a80(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_2 + 0x30);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *(long *)(lVar4 + 8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    if (lVar4 != -1) {
      FUN_10a447c64(&uStack_40,param_2);
      param_1[1] = plStack_38;
      *param_1 = uStack_40;
      if (plStack_38 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_38 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 != 0) {
        return;
      }
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a421b44; end: 10a421ba7;  */

void FUN_10a421b44(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x170);
  if (lVar1 != 0) {
    FUN_10a421a80(auStack_30);
    FUN_10a7887b0(*(undefined8 *)(lVar1 + 0xc50),auStack_30,0);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return;
}



/* Entry: 10a421ba8; end: 10a421cf3;  */

void FUN_10a421ba8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(param_1 + 0x170);
  if (lVar7 != 0) {
    for (plVar8 = *(long **)(param_1 + 0x2c8); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (*(char *)(plVar8 + 0x13) == '\x01') {
        uVar5 = *(undefined8 *)(lVar7 + 0xc50);
        plStack_58 = (long *)plVar8[0x10];
        lStack_60 = plVar8[0xf];
        if (plVar8[0x10] != 0) {
          plVar1 = (long *)(plVar8[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_48 = (long *)plVar8[0x12];
        uStack_50 = plVar8[0x11];
        if (plVar8[0x12] != 0) {
          plVar1 = (long *)(plVar8[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar5,&lStack_60);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar6 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar6 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x2b8);
  FUN_10a421b44(param_1);
  return;
}



/* Entry: 10a421cf4; end: 10a421d8b;  */

void FUN_10a421cf4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010a436a08(param_1 + 0x10);
    FUN_10a436b30(param_1);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10a421d8c; end: 10a421edf;  */

void FUN_10a421d8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  for (plVar7 = *(long **)(param_1 + 0x2c8); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if (*(char *)(plVar7 + 0x13) == '\x01') {
      if (*(long *)(param_1 + 0x170) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0xc50);
        plStack_48 = (long *)plVar7[0x10];
        lStack_50 = plVar7[0xf];
        if (plVar7[0x10] != 0) {
          plVar1 = (long *)(plVar7[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_38 = (long *)plVar7[0x12];
        uStack_40 = plVar7[0x11];
        if (plVar7[0x12] != 0) {
          plVar1 = (long *)(plVar7[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar5,&lStack_50);
        plVar1 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar2 = plStack_38 + 1;
          do {
            lVar6 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar6 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      FUN_10a421ee0(plVar7 + 0xf);
      FUN_10a019700(plVar7 + 3);
      func_0x00010a421d30(plVar7 + 5);
    }
  }
  FUN_10a421b44(param_1);
  return;
}



/* Entry: 10a421ee0; end: 10a421f1b;  */

void FUN_10a421ee0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10a436958(param_1 + 0x10);
    func_0x00010a4369b0(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10a421f1c; end: 10a42204f;  */

void FUN_10a421f1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *(long *)(param_1 + 0x170);
  if (lVar7 != 0) {
    lVar5 = *(long *)(lVar7 + 0xc60);
    lStack_40 = *(long *)(param_1 + 0x2e0);
    plStack_38 = *(long **)(param_1 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (lStack_40 != 0) {
      FUN_10a793550(lVar5 + 0xa0,&lStack_40);
    }
    plVar6 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_10a421a80(&uStack_50,param_1);
    uVar4 = *(undefined8 *)(lVar7 + 0xc60);
    lStack_58 = lStack_48;
    uStack_60 = uStack_50;
    if (lStack_48 != 0) {
      plVar6 = (long *)(lStack_48 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a7931fc(uVar4,&uStack_60);
    if (lStack_58 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lStack_48 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return;
  }
  plVar6 = *(long **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a422050; end: 10a42212b;  */

void FUN_10a422050(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a42212c; end: 10a422383;  */

void FUN_10a42212c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar9 = 0;
  do {
    if (param_2[9] != 0) {
      lVar10 = param_2[9] << 3;
      plVar12 = param_2;
      do {
        plVar12 = plVar12 + 1;
        if (*plVar12 == *(long *)((long)&PTR_PTR_110bd9238 + lVar9)) {
          FUN_10a3c73cc(param_1,8);
          if (param_2[9] == 0) goto LAB_10a4221dc;
          lVar9 = param_2[9] << 3;
          plVar12 = param_2;
          goto LAB_10a4221b8;
        }
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    lVar9 = lVar9 + 8;
    if (lVar9 == 0xb8) {
      return;
    }
  } while( true );
LAB_10a4222f8:
  bVar5 = true;
LAB_10a4222fc:
  if (param_2 == plVar12) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar5) {
    if (bVar4) {
      for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        FUN_10a421cf4(plVar12 + 7);
        FUN_10a019700(plVar12 + 3);
        func_0x00010a421d30(plVar12 + 5);
      }
      FUN_10a421b44(param_1);
    }
    if (!bVar6) {
      return;
    }
    for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if ((*(char *)(plVar12 + 0x13) == '\x01') && (plVar12[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto FUN_10a421ba8;
  while (lVar9 = lVar9 + -8, lVar9 != 0) {
LAB_10a4221b8:
    plVar12 = plVar12 + 1;
    if ((undefined **)*plVar12 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(param_1);
      break;
    }
  }
LAB_10a4221dc:
  plVar12 = param_1;
  (**(code **)(*param_1 + 0x1c8))();
  if (((int)plVar12 != 0) && (0x171 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18))) {
    if (param_2[9] == 0) {
      return;
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    plVar12 = param_2 + param_2[9];
LAB_10a422250:
    lVar9 = 0;
    param_2 = param_2 + 1;
    ppuVar11 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar9) == ppuVar11) goto LAB_10a4222f8;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x68);
    lVar9 = 0;
    do {
      iVar13 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar9) == ppuVar11);
      iVar14 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar9) == ppuVar11);
      uVar8 = CONCAT44(iVar14,iVar13);
      uVar15 = NEON_umaxp(uVar8,uVar8,4);
      if ((uVar15 & 1) != 0) break;
      bVar7 = lVar9 != 0x10;
      lVar9 = lVar9 + 0x10;
    } while (bVar7);
    if ((byte)(((byte)iVar13 & 1) + ((byte)iVar14 & 2)) == '\0') {
      if (ppuVar11 != &PTR_DAT_110ba2010) {
        if (((ppuVar11 == &PTR_DAT_110bc32f0) || (ppuVar11 == &PTR_DAT_110bd9f60)) ||
           (ppuVar11 == &PTR_DAT_110bda018)) {
          bVar6 = true;
          bVar4 = true;
        }
        else {
          lVar9 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar9) == ppuVar11) goto LAB_10a4222f8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0xb8);
        }
      }
    }
    else {
      bVar4 = true;
    }
    goto LAB_10a4222fc;
  }
FUN_10a421ba8:
  lVar9 = param_1[0x2e];
  if (lVar9 != 0) {
    for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (*(char *)(plVar12 + 0x13) == '\x01') {
        uVar8 = *(undefined8 *)(lVar9 + 0xc50);
        plStack_58 = (long *)plVar12[0x10];
        lStack_60 = plVar12[0xf];
        if (plVar12[0x10] != 0) {
          plVar1 = (long *)(plVar12[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_48 = (long *)plVar12[0x12];
        uStack_50 = plVar12[0x11];
        if (plVar12[0x12] != 0) {
          plVar1 = (long *)(plVar12[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar8,&lStack_60);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x57);
  FUN_10a421b44(param_1);
  return;
}



/* Entry: 10a422384; end: 10a42238b;  */

void FUN_10a422384(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar9 = (long *)(param_1 + -0xb8);
  lVar10 = 0;
  do {
    if (param_2[9] != 0) {
      lVar11 = param_2[9] << 3;
      plVar13 = param_2;
      do {
        plVar13 = plVar13 + 1;
        if (*plVar13 == *(long *)((long)&PTR_PTR_110bd9238 + lVar10)) {
          FUN_10a3c73cc(plVar9,8);
          if (param_2[9] == 0) goto LAB_10a4221dc;
          lVar10 = param_2[9] << 3;
          plVar13 = param_2;
          goto LAB_10a4221b8;
        }
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar10 = lVar10 + 8;
    if (lVar10 == 0xb8) {
      return;
    }
  } while( true );
LAB_10a4222f8:
  bVar5 = true;
LAB_10a4222fc:
  if (param_2 == plVar13) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar5) {
    if (bVar4) {
      for (plVar13 = *(long **)(param_1 + 0x210); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13
          ) {
        FUN_10a421cf4(plVar13 + 7);
        FUN_10a019700(plVar13 + 3);
        func_0x00010a421d30(plVar13 + 5);
      }
      FUN_10a421b44(plVar9);
    }
    if (!bVar6) {
      return;
    }
    for (plVar9 = *(long **)(param_1 + 0x210); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((*(char *)(plVar9 + 0x13) == '\x01') && (plVar9[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto FUN_10a421ba8;
  while (lVar10 = lVar10 + -8, lVar10 != 0) {
LAB_10a4221b8:
    plVar13 = plVar13 + 1;
    if ((undefined **)*plVar13 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(plVar9);
      break;
    }
  }
LAB_10a4221dc:
  plVar13 = plVar9;
  (**(code **)(*plVar9 + 0x1c8))();
  if (((int)plVar13 != 0) && (0x171 < *(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0xa20) + 0x18))
     ) {
    if (param_2[9] == 0) {
      return;
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    plVar13 = param_2 + param_2[9];
LAB_10a422250:
    lVar10 = 0;
    param_2 = param_2 + 1;
    ppuVar12 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar10) == ppuVar12) goto LAB_10a4222f8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x68);
    lVar10 = 0;
    do {
      iVar14 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar10) == ppuVar12);
      iVar15 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar10) == ppuVar12);
      uVar8 = CONCAT44(iVar15,iVar14);
      uVar16 = NEON_umaxp(uVar8,uVar8,4);
      if ((uVar16 & 1) != 0) break;
      bVar7 = lVar10 != 0x10;
      lVar10 = lVar10 + 0x10;
    } while (bVar7);
    if ((byte)(((byte)iVar14 & 1) + ((byte)iVar15 & 2)) == '\0') {
      if (ppuVar12 != &PTR_DAT_110ba2010) {
        if (((ppuVar12 == &PTR_DAT_110bc32f0) || (ppuVar12 == &PTR_DAT_110bd9f60)) ||
           (ppuVar12 == &PTR_DAT_110bda018)) {
          bVar6 = true;
          bVar4 = true;
        }
        else {
          lVar10 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar10) == ppuVar12) goto LAB_10a4222f8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0xb8);
        }
      }
    }
    else {
      bVar4 = true;
    }
    goto LAB_10a4222fc;
  }
FUN_10a421ba8:
  lVar10 = *(long *)(param_1 + 0xb8);
  if (lVar10 != 0) {
    for (plVar13 = *(long **)(param_1 + 0x210); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13)
    {
      if (*(char *)(plVar13 + 0x13) == '\x01') {
        uVar8 = *(undefined8 *)(lVar10 + 0xc50);
        plStack_58 = (long *)plVar13[0x10];
        lStack_60 = plVar13[0xf];
        if (plVar13[0x10] != 0) {
          plVar1 = (long *)(plVar13[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_48 = (long *)plVar13[0x12];
        uStack_50 = plVar13[0x11];
        if (plVar13[0x12] != 0) {
          plVar1 = (long *)(plVar13[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar8,&lStack_60);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar11 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar11 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x200);
  FUN_10a421b44(plVar9);
  return;
}



/* Entry: 10a42238c; end: 10a4223cb;  */

void FUN_10a42238c(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x238));
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x4d0));
  if (*(long *)(*(long *)(param_1 + 0x4e0) + 0x20) != 0) {
    FUN_10a5ae930();
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    func_0x00010a447708((long *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2c8));
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    lVar1 = *(long *)(param_1 + 0x2c0);
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x2b8) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



/* Entry: 10a4223cc; end: 10a42241b;  */

void FUN_10a4223cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (((0xb0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) &&
      (*(char *)((long)param_1 + 0x20c) == '\x01')) &&
     (lVar2 = *(long *)(param_1[0x2d] + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*param_1 + 0x130))(param_1,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a42241c; end: 10a4229c7;  */

undefined ***
FUN_10a42241c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long *param_5,undefined **param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_178 [8];
  long *plStack_170;
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a66ab78();
  ppuVar4 = &PTR_DAT_110bd5a60;
  ppuVar10 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd5a60,2);
  if (((uint)ppuVar10 & 0xff) < 6) {
    *(char *)(param_5 + 0x61) = (char)ppuVar10;
    (**(code **)(*param_5 + 0x200))(param_5);
    ppuVar4 = param_6;
    (**(code **)(*param_6 + 0x38))
              (param_6,&PTR_DAT_110bd5a80,*(undefined1 *)((long)param_5 + 0x30a));
    *(char *)((long)param_5 + 0x30a) = (char)ppuVar4;
    ppuVar4 = param_6;
    (**(code **)(*param_6 + 0x38))
              (param_6,&PTR_DAT_110bd5aa0,*(undefined1 *)((long)param_5 + 0x309));
    *(char *)((long)param_5 + 0x309) = (char)ppuVar4;
    pcStack_d8 = FUN_10a447f34;
    ppuStack_d0 = &PTR_FUN_110bd9aa8;
    ppuStack_150 = (undefined **)FUN_10a447f34;
    ppuStack_148 = &PTR_FUN_110bd9aa8;
    uStack_100 = CONCAT17(0xd,(undefined7)uStack_100);
    uStack_110 = 0x65;
    uStack_10f = 0x6e657478;
    uStack_10b = 0x547374;
    uStack_108 = 0x7465677261;
    uStack_103 = 0;
    pcStack_98 = FUN_10a447cf4;
    ppuStack_90 = &PTR_FUN_110bd9a90;
    puVar5 = (undefined8 *)0x58;
    plStack_140 = param_5;
    plStack_c8 = param_5;
    __Znwm();
    *puVar5 = FUN_10a447f34;
    puVar5[1] = &PTR_FUN_110bd9aa8;
    puVar5[2] = param_5;
    puVar5[9] = CONCAT26(uStack_102,CONCAT15(uStack_103,uStack_108));
    puVar5[8] = CONCAT35(uStack_10b,CONCAT41(uStack_10f,uStack_110));
    puVar5[10] = uStack_100;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_108 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    puStack_88 = puVar5;
    func_0x000107c2b054(auStack_168,&UNK_10f656650);
    (**(code **)(*param_6 + 0x250))(param_6,&PTR_DAT_110bd5ac0,&pcStack_98,0,auStack_168);
    if (cStack_151 < '\0') {
      __ZdlPv(auStack_168[0]);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (uStack_100 < 0) {
      __ZdlPv(CONCAT35(uStack_10b,CONCAT41(uStack_10f,uStack_110)));
    }
    (*(code *)*ppuStack_148)(&ppuStack_148);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    ppuVar4 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd5ae0,0);
    if ((uint)*(byte *)(param_5 + 0x97) != ((uint)ppuVar4 & 0xff)) {
      *(char *)(param_5 + 0x97) = (char)ppuVar4;
      func_0x00010a1bd170(&ppuStack_150);
      FUN_10a447adc(param_5 + 0x97);
    }
    auVar12 = NEON_fmov(0x3f800000,4);
    ppuStack_148 = auVar12._8_8_;
    ppuStack_150 = auVar12._0_8_;
    uVar11 = (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bd5b00,&ppuStack_150);
    *(undefined4 *)((long)param_5 + 0x4bc) = uVar11;
    *(undefined4 *)(param_5 + 0x98) = param_2;
    *(undefined4 *)((long)param_5 + 0x4c4) = param_3;
    *(undefined4 *)(param_5 + 0x99) = param_4;
    uVar11 = (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd5b20);
    *(undefined4 *)((long)param_5 + 0x4cc) = uVar11;
    ppuVar4 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd5b40,3);
    *(char *)((long)param_5 + 0x4b9) = (char)ppuVar4;
    ppuVar4 = param_6;
    (**(code **)(*param_6 + 0x1f8))(param_6,&PTR_DAT_110bd5b60,param_5 + 99);
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
      ppuStack_150 = &PTR_DAT_110bd6470;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      uStack_118 = uStack_118 & 0xffffff00;
      uStack_114 = 0;
      uStack_110 = 1;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_103 = 0;
      uStack_102 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0x3f800000;
      *(undefined1 *)(param_5 + 100) = 0;
      if ((undefined ***)(param_5 + 99) == &ppuStack_150) {
        param_5[0x6a] = (ulong)uStack_118;
        *(undefined1 *)(param_5 + 0x6b) = 1;
      }
      else {
        *(undefined4 *)(param_5 + 0x69) = 0x3f800000;
        FUN_10a0d51f8(param_5 + 0x65,0,0);
        param_5[0x6a] = CONCAT44(uStack_114,uStack_118);
        *(undefined1 *)(param_5 + 0x6b) = uStack_110;
        *(undefined4 *)(param_5 + 0x70) = uStack_e8;
        FUN_10a0d59e4(param_5 + 0x6c,uStack_f8,0);
      }
      ppuStack_150 = &PTR_DAT_110bd6470;
      func_0x00010a1f9d6c(&uStack_108);
      FUN_10a44a358(&plStack_140);
    }
    puVar5 = (undefined8 *)0x50;
    __Znwm();
    puVar5[5] = 0x656c422065646972;
    puVar5[4] = 0x7265766f206c6c69;
    puVar5[7] = 0x6e69206574617453;
    puVar5[6] = 0x736570616853646e;
    *(undefined8 *)((long)puVar5 + 0x44) = 0x2e6873654d726564;
    *(undefined8 *)((long)puVar5 + 0x3c) = 0x6e6552206e692065;
    puVar5[1] = 0x6853646e656c4220;
    *puVar5 = 0x676e697473697845;
    puVar5[3] = 0x7720746e656e6f70;
    puVar5[2] = 0x6d6f632073657061;
    *(undefined1 *)((long)puVar5 + 0x4c) = 0;
    lVar6 = 0x20;
    __Znwm();
    func_0x000107c3192c();
    *(undefined4 *)(lVar6 + 0x18) = 2;
    *(undefined1 *)(lVar6 + 0x1c) = 0;
    lVar7 = param_5[0x71];
    param_5[0x71] = lVar6;
    if (lVar7 != 0) {
      FUN_10a447854();
    }
    __ZdlPv(puVar5);
    ppuVar10 = (undefined **)(param_5 + 0x5e);
    ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
    ppuStack_150 = ppuVar10;
    FUN_10a2f6e84(ppuVar10);
    ppuVar4 = &PTR_DAT_110bd5b80;
    ppuVar8 = param_6;
    (**(code **)(*param_6 + 0x200))();
    if ((int)ppuVar8 != 0) {
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110bd5b80);
      FUN_10a447fd4(auStack_178,&pcStack_98);
      FUN_10a4229c8(ppuVar10,auStack_178);
      if (plStack_170 != (long *)0x0) {
        plVar1 = plStack_170 + 1;
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
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
        }
      }
      ppuVar4 = param_6;
      (**(code **)(*(long *)*ppuStack_150 + 0x78))();
      (**(code **)(*param_6 + 0x220))(param_6);
    }
    ppuStack_148 = (undefined **)CONCAT71(ppuStack_148._1_7_,1);
    if (*ppuVar10 != (undefined *)0x0) {
      FUN_10a1c08dc(*ppuVar10 + 0xc0);
    }
    pppuVar9 = &ppuStack_150;
    FUN_10a2f6cdc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pppuVar9;
    }
  }
  else {
    pppuVar9 = (undefined ***)&UNK_10f657770;
    FUN_10a00946c();
  }
  ___stack_chk_fail();
  func_0x00010a3f9190(auStack_178);
  FUN_10a2f6cdc(&ppuStack_150);
  __Unwind_Resume();
  ppuVar10 = *pppuVar9;
  if (ppuVar10 != (undefined **)*ppuVar4) {
    if (ppuVar10 != (undefined **)0x0) {
      FUN_10a1bf080(ppuVar10 + 0x18,
                    (undefined *)((long)pppuVar9 + (0xb8 - (ulong)uRam0000000113300f08)));
    }
    func_0x00010a448354(pppuVar9,ppuVar4);
    func_0x00010a4483b8(pppuVar9);
    FUN_10a2f6ee0(pppuVar9);
  }
  return pppuVar9;
}



/* Entry: 10a4229c8; end: 10a422a33;  */

long * FUN_10a4229c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2) {
    if (lVar1 != 0) {
      FUN_10a1bf080(lVar1 + 0xc0,(long)param_1 + (0xb8 - (ulong)uRam0000000113300f08));
    }
    func_0x00010a448354(param_1,param_2);
    func_0x00010a4483b8(param_1);
    FUN_10a2f6ee0(param_1);
  }
  return param_1;
}



/* Entry: 10a422a34; end: 10a422bd3;  */

void FUN_10a422a34(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  func_0x00010a66ab04();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd5a60,*(undefined1 *)(param_1 + 0x308));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd5a80,*(undefined1 *)(param_1 + 0x30a));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd5aa0,*(undefined1 *)(param_1 + 0x309));
  FUN_10a422bd4(param_2,&PTR_DAT_110bd5ac0,param_1 + 0x248,&UNK_10f65862c,0x19);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd5ae0,*(undefined1 *)(param_1 + 0x4b8));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd5b40,*(undefined1 *)(param_1 + 0x4b9));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bd5b00,param_1 + 0x4bc);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x4cc),param_2,&PTR_DAT_110bd5b20);
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bd5b60,param_1 + 0x318);
  if (*(long *)(param_1 + 0x2f0) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd5b80);
    uStack_28 = 0;
    plVar1 = *(long **)(param_1 + 0x2f0);
    puStack_30 = (undefined8 *)(param_1 + 0x2f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
    uStack_28 = 1;
    (**(code **)(*param_2 + 0x20))(param_2);
    FUN_10a2f6cdc(&puStack_30);
  }
  return;
}



/* Entry: 10a422bd4; end: 10a422d1f;  */

void FUN_10a422bd4(long *param_1,undefined8 param_2,long *param_3,undefined *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_70;
  long *plStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  puStack_60 = param_4;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    uStack_58 = param_5;
  }
  else {
    lStack_70 = *param_3;
    if (lStack_70 != 0) {
      param_5 = 0x19;
    }
    if (lStack_70 != 0) {
      puStack_60 = &UNK_10f652d14;
    }
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_68 = plVar4;
      uStack_58 = param_5;
      lStack_50 = lStack_70;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&lStack_70,&puStack_60);
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a422d20; end: 10a422d33;  */

void FUN_10a422d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  *(undefined4 *)(param_5 + 0x4bc) = param_1;
  *(undefined4 *)(param_5 + 0x4c0) = param_2;
  *(undefined4 *)(param_5 + 0x4c4) = param_3;
  *(undefined4 *)(param_5 + 0x4c8) = param_4;
  return;
}



/* Entry: 10a422d34; end: 10a423063;  */

void FUN_10a422d34(long *param_1,long *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_28 [8];
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x128))();
  (**(code **)(*param_2 + 0x130))(param_2);
  if (*(byte *)(param_1 + 0x61) < 6) {
    *(byte *)(param_2 + 0x61) = *(byte *)(param_1 + 0x61);
    (**(code **)(*param_2 + 0x200))(param_2);
    if (2 < *(byte *)((long)param_1 + 0x30a)) goto LAB_10a423024;
    *(byte *)((long)param_2 + 0x30a) = *(byte *)((long)param_1 + 0x30a);
    if (*(byte *)((long)param_1 + 0x309) < 3) {
      *(byte *)((long)param_2 + 0x309) = *(byte *)((long)param_1 + 0x309);
      (**(code **)(*param_2 + 0x1a0))
                (*(undefined4 *)((long)param_1 + 0x4bc),(int)param_1[0x98],
                 *(undefined4 *)((long)param_1 + 0x4c4),(int)param_1[0x99],param_2);
      *(undefined4 *)((long)param_2 + 0x4cc) = *(undefined4 *)((long)param_1 + 0x4cc);
      if ((char)param_2[0x97] != (char)param_1[0x97]) {
        *(char *)(param_2 + 0x97) = (char)param_1[0x97];
        func_0x00010a1bd170(auStack_28);
        FUN_10a447adc(param_2 + 0x97);
      }
      *(undefined1 *)((long)param_2 + 0x4b9) = *(undefined1 *)((long)param_1 + 0x4b9);
      lStack_38 = param_1[0x49];
      lStack_30 = param_1[0x4a];
      if (lStack_30 != 0) {
        plVar4 = (long *)(lStack_30 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a423064(param_2,&lStack_38);
      if (lStack_30 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(char *)(param_2 + 0x73) = (char)param_1[0x73];
      lVar7 = param_1[0x74];
      *(undefined1 *)((long)param_2 + 0x3a2) = *(undefined1 *)((long)param_1 + 0x3a2);
      *(short *)(param_2 + 0x74) = (short)lVar7;
      if (param_2 != param_1) {
        FUN_10a436b88(param_2 + 0x75,param_1[0x75],param_1[0x76],param_1[0x76] - param_1[0x75] >> 4)
        ;
        FUN_10a436b88(param_2 + 0x78,param_1[0x78],param_1[0x79],param_1[0x79] - param_1[0x78] >> 4)
        ;
      }
      lVar8 = param_1[0x7c];
      lVar7 = param_1[0x7b];
      *(int *)(param_2 + 0x7d) = (int)param_1[0x7d];
      param_2[0x7c] = lVar8;
      param_2[0x7b] = lVar7;
      func_0x00010a04a780(param_2 + 0x7e,param_1 + 0x7e);
      lVar7 = param_1[0x80];
      *(undefined8 *)((long)param_2 + 0x405) = *(undefined8 *)((long)param_1 + 0x405);
      param_2[0x80] = lVar7;
      uVar1 = *(undefined1 *)((long)param_1 + 0x412);
      *(short *)(param_2 + 0x82) = (short)param_1[0x82];
      *(undefined1 *)((long)param_2 + 0x412) = uVar1;
      if (param_2 == param_1) {
        lVar8 = param_1[0x8a];
        lVar7 = param_1[0x89];
        *(int *)(param_2 + 0x8b) = (int)param_1[0x8b];
        param_2[0x8a] = lVar8;
        param_2[0x89] = lVar7;
        lVar7 = param_1[0x8c];
        *(undefined1 *)((long)param_2 + 0x462) = *(undefined1 *)((long)param_1 + 0x462);
        *(short *)(param_2 + 0x8c) = (short)lVar7;
      }
      else {
        FUN_10a436b88(param_2 + 0x83,param_1[0x83],param_1[0x84],param_1[0x84] - param_1[0x83] >> 4)
        ;
        FUN_10a436b88(param_2 + 0x86,param_1[0x86],param_1[0x87],param_1[0x87] - param_1[0x86] >> 4)
        ;
        lVar8 = param_1[0x8a];
        lVar7 = param_1[0x89];
        *(int *)(param_2 + 0x8b) = (int)param_1[0x8b];
        param_2[0x8a] = lVar8;
        param_2[0x89] = lVar7;
        lVar7 = param_1[0x8c];
        *(undefined1 *)((long)param_2 + 0x462) = *(undefined1 *)((long)param_1 + 0x462);
        *(short *)(param_2 + 0x8c) = (short)lVar7;
        FUN_10a436b88(param_2 + 0x8d,param_1[0x8d],param_1[0x8e],param_1[0x8e] - param_1[0x8d] >> 4)
        ;
        FUN_10a436b88(param_2 + 0x90,param_1[0x90],param_1[0x91],param_1[0x91] - param_1[0x90] >> 4)
        ;
      }
      lVar8 = param_1[0x94];
      lVar7 = param_1[0x93];
      *(int *)(param_2 + 0x95) = (int)param_1[0x95];
      param_2[0x94] = lVar8;
      param_2[0x93] = lVar7;
      *(char *)(param_2 + 0x96) = (char)param_1[0x96];
      if (param_1[0x5e] != 0) {
        FUN_10acadd4c(auStack_48);
        FUN_10a4229c8(param_2 + 0x5e,auStack_48);
        if (plStack_40 != (long *)0x0) {
          plVar4 = plStack_40 + 1;
          do {
            lVar7 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
          }
        }
      }
      return;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f657770);
LAB_10a423024:
    FUN_10a00946c(&UNK_10f657788);
  }
  puVar5 = &UNK_10f6577bb;
  FUN_10a00946c();
  func_0x00010a3f9190(auStack_48);
  __Unwind_Resume();
  plVar6 = (long *)plVar4[1];
  lVar9 = plVar4[1];
  lVar8 = *plVar4;
  *plVar4 = 0;
  plVar4[1] = 0;
  lVar7 = *(long *)(puVar5 + 0x250);
  *(long *)(puVar5 + 0x250) = lVar9;
  *(long *)(puVar5 + 0x248) = lVar8;
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
    plVar6 = *(long **)(puVar5 + 0x250);
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar6 != (long *)0x0) && (*(long *)(puVar5 + 0x248) != 0)) {
      if (*(long *)(*(long *)(puVar5 + 0x4e0) + 0x20) == 0) {
        FUN_10a5ae998(*(long *)(puVar5 + 0x4e0),&PTR_DAT_110bd9dd0,*(undefined8 *)(puVar5 + 0x170),
                      puVar5);
      }
      goto LAB_10a423104;
    }
  }
  if (*(long *)(*(long *)(puVar5 + 0x4e0) + 0x20) != 0) {
    FUN_10a5ae930();
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_10a423104:
  plVar4 = plVar6 + 1;
  do {
    lVar7 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
  return;
}



/* Entry: 10a423064; end: 10a42316b;  */

void FUN_10a423064(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)param_2[1];
  lVar7 = param_2[1];
  lVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *(long *)(param_1 + 0x250);
  *(long *)(param_1 + 0x250) = lVar7;
  *(long *)(param_1 + 0x248) = lVar6;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar5);
    plVar4 = *(long **)(param_1 + 0x250);
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 != (long *)0x0) && (*(long *)(param_1 + 0x248) != 0)) {
      if (*(long *)(*(long *)(param_1 + 0x4e0) + 0x20) == 0) {
        FUN_10a5ae998(*(long *)(param_1 + 0x4e0),&PTR_DAT_110bd9dd0,*(undefined8 *)(param_1 + 0x170)
                      ,param_1);
      }
      goto LAB_10a423104;
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x4e0) + 0x20) != 0) {
    FUN_10a5ae930();
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_10a423104:
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
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a42316c; end: 10a42381b;  */

void FUN_10a42316c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  long *plStack_70;
  long *plStack_68;
  
  if (param_4 == 0) {
    func_0x00010a0fda30();
  }
  else {
    plStack_70 = (long *)param_2[8];
    plStack_68 = (long *)param_2[9];
    func_0x00010a35bf90(param_4 + 0x88,&plStack_70);
  }
  FUN_10a3dd220(param_2[0x2e]);
  plVar6 = (long *)0x510;
  __Znwm();
  plVar6[0x9e] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar6 + 0xa1) = 0x100;
  plVar6[0xa0] = 0;
  plVar6[0x9f] = 0;
  FUN_10a66a824();
  *plVar6 = (long)&PTR_FUN_110bd5650;
  plVar6[2] = (long)&PTR_DAT_110bd5880;
  plVar6[7] = (long)&PTR_DAT_110bd58d8;
  plVar6[0xd] = (long)&PTR_DAT_110bd58f8;
  plVar6[0x9e] = (long)&PTR_DAT_110bd59f8;
  plVar6[0x16] = (long)&PTR_DAT_110bd5968;
  plVar6[0x17] = (long)&PTR_DAT_110bd5998;
  *(undefined1 *)((long)plVar6 + 0x25c) = 0;
  plVar6[0x4d] = 0;
  plVar6[0x4c] = 0;
  *(undefined1 *)(plVar6 + 0x4b) = 0;
  plVar6[0x4a] = 0;
  plVar6[0x49] = 0;
  if (sRam0000000113301f52 == -1) {
    sRam0000000113301f52 = 0x260;
  }
  plVar6[0x56] = 0;
  plVar6[0x53] = 0;
  plVar6[0x52] = 0;
  plVar6[0x55] = 0;
  plVar6[0x54] = 0;
  plVar6[0x4f] = 0;
  plVar6[0x4e] = 0;
  plVar6[0x51] = 0;
  plVar6[0x50] = 0;
  if (sRam0000000113300f0a == -1) {
    sRam0000000113300f0a = 0x2a0;
  }
  plVar6[0x58] = 0;
  plVar6[0x57] = 0;
  plVar6[0x5a] = 0;
  plVar6[0x59] = 0;
  *(undefined4 *)(plVar6 + 0x5b) = 0x3f800000;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5f] = 0;
  plVar6[0x5e] = 0;
  if (sRam0000000113300f08 == -1) {
    sRam0000000113300f08 = 0x2f0;
  }
  plVar6[0x60] = 0;
  *(undefined2 *)(plVar6 + 0x61) = 0x102;
  *(undefined1 *)((long)plVar6 + 0x30a) = 1;
  plVar6[0x62] = 0;
  *(undefined1 *)(plVar6 + 100) = 0;
  plVar6[99] = (long)&PTR_DAT_110bd6470;
  plVar6[0x66] = 0;
  plVar6[0x65] = 0;
  plVar6[0x68] = 0;
  plVar6[0x67] = 0;
  *(undefined4 *)(plVar6 + 0x69) = 0x3f800000;
  *(undefined1 *)(plVar6 + 0x6a) = 0;
  *(undefined4 *)((long)plVar6 + 0x354) = 0;
  *(undefined1 *)(plVar6 + 0x6b) = 1;
  plVar6[0x6d] = 0;
  plVar6[0x6c] = 0;
  plVar6[0x6f] = 0;
  plVar6[0x6e] = 0;
  *(undefined4 *)(plVar6 + 0x70) = 0x3f800000;
  plVar6[0x71] = 0;
  *(undefined1 *)(plVar6 + 0x73) = 0;
  plVar6[0x72] = (long)&PTR_FUN_110b9ec48;
  *(undefined2 *)(plVar6 + 0x74) = 0;
  *(undefined1 *)((long)plVar6 + 0x3a2) = 0;
  plVar6[0x76] = 0;
  plVar6[0x75] = 0;
  plVar6[0x78] = 0;
  plVar6[0x77] = 0;
  plVar6[0x7a] = 0;
  plVar6[0x79] = 0;
  plVar6[0x7b] = 1;
  plVar6[0x7c] = 0;
  *(undefined4 *)(plVar6 + 0x7d) = 0;
  plVar6[0x7f] = 0;
  plVar6[0x7e] = 0;
  *(undefined1 *)(plVar6 + 0x80) = 0;
  *(undefined8 *)((long)plVar6 + 0x404) = 0x400000003f000000;
  *(undefined1 *)((long)plVar6 + 0x40c) = 0;
  *(undefined2 *)(plVar6 + 0x82) = 0;
  *(undefined1 *)((long)plVar6 + 0x412) = 0;
  plVar6[0x84] = 0;
  plVar6[0x83] = 0;
  plVar6[0x86] = 0;
  plVar6[0x85] = 0;
  plVar6[0x88] = 0;
  plVar6[0x87] = 0;
  plVar6[0x89] = 1;
  plVar6[0x8a] = 0;
  *(undefined4 *)(plVar6 + 0x8b) = 0;
  *(undefined2 *)(plVar6 + 0x8c) = 0;
  *(undefined1 *)((long)plVar6 + 0x462) = 0;
  plVar6[0x90] = 0;
  plVar6[0x8f] = 0;
  plVar6[0x92] = 0;
  plVar6[0x91] = 0;
  plVar6[0x8e] = 0;
  plVar6[0x8d] = 0;
  plVar6[0x93] = 1;
  plVar6[0x94] = 0;
  *(undefined4 *)(plVar6 + 0x95) = 0;
  *(undefined1 *)(plVar6 + 0x96) = 0;
  *(undefined1 *)(plVar6 + 0x97) = 0;
  if ((bRam00000001137eb150 & 1) == 0) {
    bRam00000001137eb150 = 1;
  }
  func_0x00010a1bd170(&plStack_70);
  *(undefined1 *)((long)plVar6 + 0x4b9) = 3;
  auVar12 = NEON_fmov(0x3f800000,4);
  *(long *)((long)plVar6 + 0x4c4) = auVar12._8_8_;
  *(long *)((long)plVar6 + 0x4bc) = auVar12._0_8_;
  *(undefined4 *)((long)plVar6 + 0x4cc) = 0x3f800000;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110bf7fc8;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x4d) = 0;
  *(undefined8 *)((long)puVar7 + 0x45) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  plVar6[0x9a] = (long)(puVar7 + 3);
  plVar6[0x9b] = (long)puVar7;
  FUN_10a5cf1fc(plVar6 + 0x9a);
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110bf7fc8;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x4d) = 0;
  *(undefined8 *)((long)puVar7 + 0x45) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  plVar6[0x9c] = (long)(puVar7 + 3);
  plVar6[0x9d] = (long)puVar7;
  FUN_10a5cf1fc(plVar6 + 0x9c);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  puVar7[5] = 0x656c422065646972;
  puVar7[4] = 0x7265766f206c6c69;
  puVar7[7] = 0x6e69206574617453;
  puVar7[6] = 0x736570616853646e;
  *(undefined8 *)((long)puVar7 + 0x44) = 0x2e6873654d726564;
  *(undefined8 *)((long)puVar7 + 0x3c) = 0x6e6552206e692065;
  puVar7[1] = 0x6853646e656c4220;
  *puVar7 = 0x676e697473697845;
  puVar7[3] = 0x7720746e656e6f70;
  puVar7[2] = 0x6d6f632073657061;
  *(undefined1 *)((long)puVar7 + 0x4c) = 0;
  lVar8 = 0x20;
  __Znwm();
  func_0x000107c3192c();
  *(undefined4 *)(lVar8 + 0x18) = 2;
  *(undefined1 *)(lVar8 + 0x1c) = 0;
  lVar9 = plVar6[0x71];
  plVar6[0x71] = lVar8;
  if (lVar9 != 0) {
    FUN_10a447854();
  }
  __ZdlPv(puVar7);
  plVar10 = (long *)0x28;
  __Znwm();
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  *plVar10 = (long)&PTR_FUN_110bd9ad0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar6;
  plVar10[4] = (long)FUN_10a3df8cc;
  if (plVar6[6] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar10 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[5] = (long)plVar6;
    plVar6[6] = (long)plVar10;
  }
  else {
    if (*(long *)(plVar6[6] + 8) != -1) goto LAB_10a4235bc;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar10 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[5] = (long)plVar6;
    plVar6[6] = (long)plVar10;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar8 = *plVar11;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
LAB_10a4235bc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar6 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar6 + 0x30) & 0xfffc;
  *(ushort *)(plVar6 + 0x30) = uVar3 | *(ushort *)(plVar6 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar6 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_70 = plVar6;
  plStack_68 = plVar10;
  FUN_10a3c7ce8(param_3,&plStack_70);
  plVar11 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar6 + 0x130))(plVar6,plVar11);
  (**(code **)(*param_2 + 0x218))(param_2,plVar6,param_4);
  param_1[1] = plVar10;
  *param_1 = plVar6;
  return;
}



/* Entry: 10a42381c; end: 10a4239a3;  */

void FUN_10a42381c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x12,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x746e756f43736c61;
  *puVar1 = 0x69726574616d202c;
  *(undefined2 *)(puVar1 + 2) = 0x203a;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(long *)(param_2 + 0x2a8) - *(long *)(param_2 + 0x2a0) >> 4);
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a4239a4; end: 10a4239ab;  */

void FUN_10a4239a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x12,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x746e756f43736c61;
  *puVar1 = 0x69726574616d202c;
  *(undefined2 *)(puVar1 + 2) = 0x203a;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(long *)(param_2 + 0x298) - *(long *)(param_2 + 0x290) >> 4);
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a4239ac; end: 10a423b6f;  */

/* WARNING: Possible PIC construction at 0x00010a423c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a423c20) */
/* WARNING: Removing unreachable block (ram,0x00010a423c30) */
/* WARNING: Removing unreachable block (ram,0x00010a423c34) */
/* WARNING: Removing unreachable block (ram,0x00010a423c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a423c44) */
/* WARNING: Removing unreachable block (ram,0x00010a423c48) */
/* WARNING: Removing unreachable block (ram,0x00010a423c60) */
/* WARNING: Removing unreachable block (ram,0x00010a423c78) */

void FUN_10a4239ac(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *unaff_x19;
  long lVar25;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  undefined8 unaff_x22;
  undefined8 uVar27;
  long lVar28;
  undefined8 unaff_x23;
  long lVar29;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar30;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long *aplStack_60 [2];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  pplVar15 = aplStack_60;
  puVar30 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *param_2;
  if (lVar24 == 0) {
    param_1 = (long *)&UNK_10f65758a;
    FUN_10a00946c();
LAB_10a423b50:
    ___stack_chk_fail();
    FUN_10a0617bc(&uStack_50);
    FUN_10a0617bc(&lStack_38);
    unaff_x30 = FUN_10a423b70;
    plVar16 = param_1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)aplStack_60;
    unaff_x19 = param_1;
    unaff_x29 = puVar30;
  }
  else {
    puVar20 = (undefined8 *)param_1[0x54];
    puVar23 = (undefined8 *)param_1[0x55];
    if (puVar20 != puVar23) {
      plStack_30 = (long *)param_2[1];
      if (plStack_30 != (long *)0x0) {
        plVar16 = plStack_30 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = *plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        puVar20 = (undefined8 *)param_1[0x54];
        puVar23 = (undefined8 *)param_1[0x55];
      }
      lStack_38 = lVar24;
      if (puVar20 == puVar23) {
LAB_10a423b40:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10a423b44);
        (*pcVar10)();
      }
      plStack_48 = (long *)puVar20[1];
      uStack_50 = *puVar20;
      if (puVar20[1] != 0) {
        plVar16 = (long *)(puVar20[1] + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = *plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      param_4 = &uStack_50;
      FUN_10a2e20fc(aplStack_60,param_1 + 0x54,&lStack_38,1,param_4,1);
      plVar16 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar17 = plStack_48 + 1;
        do {
          lVar24 = *plVar17;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar9) {
            *plVar17 = lVar24 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      unaff_x20 = plStack_30;
      if (plStack_30 != (long *)0x0) {
        plVar16 = plStack_30 + 1;
        do {
          lVar24 = *plVar16;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = lVar24 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_30 + 0x10))(plStack_30);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
      if (*aplStack_60[0] == aplStack_60[0][1]) goto LAB_10a423b40;
      func_0x00010a015c50();
      FUN_10a2e2234();
      param_1 = (long *)pplVar15;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      goto LAB_10a423b50;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_10a423b50;
    plVar16 = param_1 + 0x54;
  }
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x50);
  plVar17 = (long *)((long)register0x00000008 + -0x50);
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar30 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a1bd170();
  if ((int)plVar17 == 0) {
    lVar24 = param_2[1];
    lVar25 = *param_2;
    *(long *)((long)register0x00000008 + -0x38) = param_2[1];
    *(long *)((long)register0x00000008 + -0x40) = lVar25;
    if (lVar24 != 0) {
      plVar17 = (long *)(lVar24 + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = *plVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    param_4 = (undefined8 *)0x0;
    FUN_10a2e20fc((undefined1 *)((long)register0x00000008 + -0x50),plVar16,
                  (undefined1 *)((long)register0x00000008 + -0x40),1,0,0);
    plVar17 = *(long **)((long)register0x00000008 + -0x50);
    uVar27 = 0x10a423c20;
    plVar13 = param_2;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x28)) {
      ___stack_chk_fail();
      FUN_10a2e2234((undefined1 *)((long)register0x00000008 + -0x50));
      FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0x40));
      plVar13 = plVar17;
      __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x70) = plVar16;
      *(long **)((long)register0x00000008 + -0x68) = plVar17;
      *(undefined1 **)((long)register0x00000008 + -0x60) = puVar30;
      *(code **)((long)register0x00000008 + -0x58) = FUN_10a423cb8;
      lVar24 = *(long *)(plVar13[0x2d] + 0x248);
      if ((lVar24 != 0) && ((*(ushort *)(lVar24 + 0x180) & 0x17) == 0)) {
        plVar16 = plVar13;
        FUN_10a00ff8c();
        if (plVar16 != (long *)0x0) {
          uVar27 = *(undefined8 *)(plVar13[0x2e] + 0xa20);
          FUN_10a394a64(lVar24);
          FUN_10a396450(0x3f800000,uVar27,lVar24 + 0x268,plVar13,
                        (undefined1 *)((long)plVar16 + 0x144),plVar16 + 0x27,0);
        }
                    /* WARNING: Could not recover jumptable at 0x00010a423d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x210))(plVar13,lVar24);
        return;
      }
      return;
    }
    puVar30 = *(undefined1 **)((long)register0x00000008 + -0x10);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -8);
    puVar11 = (undefined1 *)register0x00000008;
    plVar17 = plVar16;
    plVar13 = *(long **)((long)register0x00000008 + -0x18);
    plVar16 = *(long **)((long)register0x00000008 + -0x20);
  }
  *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
  *(long **)(puVar11 + -0x20) = plVar16;
  *(long **)(puVar11 + -0x18) = plVar13;
  *(undefined1 **)(puVar11 + -0x10) = puVar30;
  *(undefined8 *)(puVar11 + -8) = uVar27;
  plVar16 = (long *)plVar17[1];
  if (plVar16 < (long *)plVar17[2]) {
    lVar24 = *param_2;
    plVar14 = plVar16 + 2;
    plVar16[1] = param_2[1];
    *plVar16 = lVar24;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar24 = (long)plVar16 - *plVar17;
    uVar18 = (lVar24 >> 4) + 1;
    if (uVar18 >> 0x3c != 0) {
      plVar16 = plVar17;
      plVar13 = param_2;
      FUN_10a0d93d0();
      *(undefined8 *)(puVar11 + -0xa0) = unaff_x24;
      *(undefined8 *)(puVar11 + -0x98) = unaff_x23;
      *(undefined8 *)(puVar11 + -0x90) = unaff_x22;
      *(long *)(puVar11 + -0x88) = lVar24;
      *(long **)(puVar11 + -0x80) = param_2;
      *(long **)(puVar11 + -0x78) = plVar17;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x10;
      *(code **)(puVar11 + -0x68) = FUN_10a2f4cc4;
      plVar17 = plVar16;
      (**(code **)(*plVar16 + 0x58))();
      if ((ulong)plVar17[0x59] < 8) {
        plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
        plVar17[0x59] = plVar17[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar17 + 0x4b);
      }
      plVar14 = plVar16;
      FUN_10a2f42c4(plVar16,plVar13);
      FUN_10a052e3c(param_4);
      lVar24 = 0x1138353c0;
      if (plVar14[0x54] != plVar14[0x55]) {
        lVar24 = plVar14[0x54];
      }
      FUN_10a066960(extraout_x8,plVar16,lVar24);
      plVar16 = plVar17 + 0x4b;
      uVar27 = *(undefined8 *)(puVar11 + -0x70);
      uVar4 = *(undefined8 *)(puVar11 + -0x68);
      uVar1 = *(undefined8 *)(puVar11 + -0x80);
      uVar5 = *(undefined8 *)(puVar11 + -0x78);
      uVar2 = *(undefined8 *)(puVar11 + -0x90);
      uVar6 = *(undefined8 *)(puVar11 + -0x88);
      uVar3 = *(undefined8 *)(puVar11 + -0xa0);
      uVar7 = *(undefined8 *)(puVar11 + -0x98);
      lVar24 = plVar17[0x59];
      uVar18 = lVar24 - 1;
      plVar17[0x59] = uVar18;
      if (uVar18 < 8) {
        uVar18 = plVar16[lVar24 + 2];
        if (plVar17[0x5a] == uVar18) {
          return;
        }
      }
      else {
        uVar18 = *(ulong *)(plVar17[0x57] + -8);
        plVar17[0x57] = plVar17[0x57] + -8;
        if (plVar17[0x5a] == uVar18) {
          return;
        }
      }
      *(undefined8 *)(puVar11 + -0xc0) = unaff_x28;
      *(undefined8 *)(puVar11 + -0xb8) = unaff_x27;
      *(undefined8 *)(puVar11 + -0xb0) = unaff_x26;
      *(undefined8 *)(puVar11 + -0xa8) = unaff_x25;
      *(undefined8 *)(puVar11 + -0xa0) = uVar3;
      *(undefined8 *)(puVar11 + -0x98) = uVar7;
      *(undefined8 *)(puVar11 + -0x90) = uVar2;
      *(undefined8 *)(puVar11 + -0x88) = uVar6;
      *(undefined8 *)(puVar11 + -0x80) = uVar1;
      *(undefined8 *)(puVar11 + -0x78) = uVar5;
      *(undefined8 *)(puVar11 + -0x70) = uVar27;
      *(undefined8 *)(puVar11 + -0x68) = uVar4;
      lVar24 = *plVar16;
      lVar25 = plVar17[0x4c];
      lVar26 = lVar25 - lVar24;
      uVar22 = lVar26 >> 4;
      if (uVar22 < uVar18) {
        uVar19 = uVar18 - uVar22;
        lVar29 = plVar17[0x4d];
        if ((ulong)(lVar29 - lVar25 >> 4) < uVar19) {
          if (uVar18 >> 0x3c == 0) {
            uVar21 = lVar29 - lVar24 >> 3;
            if (uVar21 <= uVar18) {
              uVar21 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)(lVar29 - lVar24)) {
              uVar21 = 0xfffffffffffffff;
            }
            *(long **)(puVar11 + -200) = plVar16;
            if (uVar21 >> 0x3c == 0) {
              lVar12 = uVar21 << 4;
              __Znwm();
              lVar25 = lVar12 + lVar26;
              _bzero(lVar25,uVar19 * 0x10);
              lVar28 = lVar25 + uVar22 * -0x10;
              _memcpy(lVar28,lVar24,lVar26);
              *plVar16 = lVar28;
              plVar17[0x4c] = lVar25 + uVar19 * 0x10;
              plVar17[0x4d] = lVar12 + uVar21 * 0x10;
              *(long *)(puVar11 + -0xd8) = lVar24;
              *(long *)(puVar11 + -0xd0) = lVar29;
              *(long *)(puVar11 + -0xe8) = lVar24;
              *(long *)(puVar11 + -0xe0) = lVar24;
              func_0x00010988c1b8(puVar11 + -0xe8);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar10)();
        }
        _bzero(lVar25,uVar19 * 0x10);
        plVar17[0x4c] = lVar25 + uVar19 * 0x10;
      }
      else if (uVar18 < uVar22) {
        lVar24 = lVar24 + uVar18 * 0x10;
        while (lVar25 != lVar24) {
          lVar25 = lVar25 + -0x10;
          func_0x00010988c204(lVar25);
        }
        plVar17[0x4c] = lVar24;
      }
code_r0x00010988c138:
      plVar17[0x5a] = uVar18;
      return;
    }
    uVar19 = plVar17[2] - *plVar17;
    uVar22 = (long)uVar19 >> 3;
    if (uVar22 <= uVar18) {
      uVar22 = uVar18;
    }
    if (0x7fffffffffffffef < uVar19) {
      uVar22 = 0xfffffffffffffff;
    }
    *(long **)(puVar11 + -0x38) = plVar17;
    plVar13 = plVar17;
    FUN_10a0d93e4();
    plVar16 = (long *)((long)plVar13 + lVar24);
    lVar24 = *param_2;
    plVar14 = plVar16 + 2;
    plVar16[1] = param_2[1];
    *plVar16 = lVar24;
    *param_2 = 0;
    param_2[1] = 0;
    lVar25 = (long)plVar16 - (plVar17[1] - *plVar17);
    _memcpy(lVar25);
    lVar24 = *plVar17;
    *plVar17 = lVar25;
    plVar17[1] = (long)plVar14;
    lVar25 = plVar17[2];
    plVar17[2] = (long)(plVar13 + uVar22 * 2);
    *(long *)(puVar11 + -0x48) = lVar24;
    *(long *)(puVar11 + -0x40) = lVar25;
    *(long *)(puVar11 + -0x58) = lVar24;
    *(long *)(puVar11 + -0x50) = lVar24;
    func_0x00010a0d9418(puVar11 + -0x58);
  }
  plVar17[1] = (long)plVar14;
  return;
}



/* Entry: 10a423b70; end: 10a423cb7;  */

/* WARNING: Possible PIC construction at 0x00010a423c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a423c20) */
/* WARNING: Removing unreachable block (ram,0x00010a423c30) */
/* WARNING: Removing unreachable block (ram,0x00010a423c34) */
/* WARNING: Removing unreachable block (ram,0x00010a423c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a423c44) */
/* WARNING: Removing unreachable block (ram,0x00010a423c48) */
/* WARNING: Removing unreachable block (ram,0x00010a423c60) */
/* WARNING: Removing unreachable block (ram,0x00010a423c78) */

void FUN_10a423b70(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  ulong uVar20;
  ulong uVar21;
  undefined8 *unaff_x19;
  long lVar22;
  long *unaff_x20;
  long lVar23;
  undefined8 *puVar24;
  undefined8 unaff_x21;
  long lVar25;
  undefined8 unaff_x22;
  undefined8 uVar26;
  long lVar27;
  undefined8 unaff_x23;
  long lVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar16 = aplStack_50;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a1bd170();
  if ((int)pplVar16 == 0) {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar14 = (long *)(param_2[1] + 8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = *plVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    param_4 = 0;
    FUN_10a2e20fc(aplStack_50,param_1,&uStack_40,1,0,0);
    unaff_x30 = 0x10a423c20;
    register0x00000008 = (BADSPACEBASE *)aplStack_50;
    plVar14 = aplStack_50[0];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    plVar14 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
      ___stack_chk_fail();
      FUN_10a2e2234(aplStack_50);
      FUN_10a0617bc(&uStack_40);
      __Unwind_Resume();
      lVar23 = *(long *)((long)pplVar16[0x2d] + 0x248);
      if ((lVar23 != 0) && ((*(ushort *)(lVar23 + 0x180) & 0x17) == 0)) {
        plVar14 = (long *)pplVar16;
        FUN_10a00ff8c();
        if (plVar14 != (long *)0x0) {
          uVar26 = *(undefined8 *)((long)pplVar16[0x2e] + 0xa20);
          FUN_10a394a64(lVar23);
          FUN_10a396450(0x3f800000,uVar26,lVar23 + 0x268,pplVar16,
                        (undefined1 *)((long)plVar14 + 0x144),plVar14 + 0x27,0);
        }
                    /* WARNING: Could not recover jumptable at 0x00010a423d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((long)*pplVar16 + 0x210))(pplVar16,lVar23);
        return;
      }
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined8 *)plVar14[1];
  if (puVar17 < (undefined8 *)plVar14[2]) {
    uVar26 = *param_2;
    puVar24 = puVar17 + 2;
    puVar17[1] = param_2[1];
    *puVar17 = uVar26;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar23 = (long)puVar17 - *plVar14;
    uVar18 = (lVar23 >> 4) + 1;
    if (uVar18 >> 0x3c != 0) {
      plVar13 = plVar14;
      puVar17 = param_2;
      FUN_10a0d93d0();
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x88) = lVar23;
      *(undefined8 **)((long)register0x00000008 + -0x80) = param_2;
      *(long **)((long)register0x00000008 + -0x78) = plVar14;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x68) = FUN_10a2f4cc4;
      plVar14 = plVar13;
      (**(code **)(*plVar13 + 0x58))();
      if ((ulong)plVar14[0x59] < 8) {
        plVar14[plVar14[0x59] + 0x4e] = plVar14[0x5a];
        plVar14[0x59] = plVar14[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar14 + 0x4b);
      }
      plVar15 = plVar13;
      FUN_10a2f42c4(plVar13,puVar17);
      FUN_10a052e3c(param_4);
      lVar23 = 0x1138353c0;
      if (plVar15[0x54] != plVar15[0x55]) {
        lVar23 = plVar15[0x54];
      }
      FUN_10a066960(extraout_x8,plVar13,lVar23);
      plVar13 = plVar14 + 0x4b;
      uVar26 = *(undefined8 *)((long)register0x00000008 + -0x70);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x88);
      uVar4 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x98);
      lVar23 = plVar14[0x59];
      uVar18 = lVar23 - 1;
      plVar14[0x59] = uVar18;
      if (uVar18 < 8) {
        uVar18 = plVar13[lVar23 + 2];
        if (plVar14[0x5a] == uVar18) {
          return;
        }
      }
      else {
        uVar18 = *(ulong *)(plVar14[0x57] + -8);
        plVar14[0x57] = plVar14[0x57] + -8;
        if (plVar14[0x5a] == uVar18) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar4;
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar3;
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar5;
      lVar23 = *plVar13;
      lVar22 = plVar14[0x4c];
      lVar25 = lVar22 - lVar23;
      uVar21 = lVar25 >> 4;
      if (uVar21 < uVar18) {
        uVar19 = uVar18 - uVar21;
        lVar28 = plVar14[0x4d];
        if ((ulong)(lVar28 - lVar22 >> 4) < uVar19) {
          if (uVar18 >> 0x3c == 0) {
            uVar20 = lVar28 - lVar23 >> 3;
            if (uVar20 <= uVar18) {
              uVar20 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)(lVar28 - lVar23)) {
              uVar20 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -200) = plVar13;
            if (uVar20 >> 0x3c == 0) {
              lVar12 = uVar20 << 4;
              __Znwm();
              lVar22 = lVar12 + lVar25;
              _bzero(lVar22,uVar19 * 0x10);
              lVar27 = lVar22 + uVar21 * -0x10;
              _memcpy(lVar27,lVar23,lVar25);
              *plVar13 = lVar27;
              plVar14[0x4c] = lVar22 + uVar19 * 0x10;
              plVar14[0x4d] = lVar12 + uVar20 * 0x10;
              *(long *)((long)register0x00000008 + -0xd8) = lVar23;
              *(long *)((long)register0x00000008 + -0xd0) = lVar28;
              *(long *)((long)register0x00000008 + -0xe8) = lVar23;
              *(long *)((long)register0x00000008 + -0xe0) = lVar23;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0xe8));
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
        _bzero(lVar22,uVar19 * 0x10);
        plVar14[0x4c] = lVar22 + uVar19 * 0x10;
      }
      else if (uVar18 < uVar21) {
        lVar23 = lVar23 + uVar18 * 0x10;
        while (lVar22 != lVar23) {
          lVar22 = lVar22 + -0x10;
          func_0x00010988c204(lVar22);
        }
        plVar14[0x4c] = lVar23;
      }
code_r0x00010988c138:
      plVar14[0x5a] = uVar18;
      return;
    }
    uVar19 = plVar14[2] - *plVar14;
    uVar21 = (long)uVar19 >> 3;
    if (uVar21 <= uVar18) {
      uVar21 = uVar18;
    }
    if (0x7fffffffffffffef < uVar19) {
      uVar21 = 0xfffffffffffffff;
    }
    *(long **)((long)register0x00000008 + -0x38) = plVar14;
    plVar13 = plVar14;
    FUN_10a0d93e4();
    puVar17 = (undefined8 *)((long)plVar13 + lVar23);
    uVar26 = *param_2;
    puVar24 = puVar17 + 2;
    puVar17[1] = param_2[1];
    *puVar17 = uVar26;
    *param_2 = 0;
    param_2[1] = 0;
    lVar22 = (long)puVar17 - (plVar14[1] - *plVar14);
    _memcpy(lVar22);
    lVar23 = *plVar14;
    *plVar14 = lVar22;
    plVar14[1] = (long)puVar24;
    lVar22 = plVar14[2];
    plVar14[2] = (long)(plVar13 + uVar21 * 2);
    *(long *)((long)register0x00000008 + -0x48) = lVar23;
    *(long *)((long)register0x00000008 + -0x40) = lVar22;
    *(long *)((long)register0x00000008 + -0x58) = lVar23;
    *(long *)((long)register0x00000008 + -0x50) = lVar23;
    func_0x00010a0d9418((undefined1 *)((long)register0x00000008 + -0x58));
  }
  plVar14[1] = (long)puVar24;
  return;
}



/* Entry: 10a423cb8; end: 10a423d53;  */

void FUN_10a423cb8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1[0x2d] + 0x248);
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 0x180) & 0x17) == 0)) {
    plVar1 = param_1;
    FUN_10a00ff8c();
    if (plVar1 != (long *)0x0) {
      uVar3 = *(undefined8 *)(param_1[0x2e] + 0xa20);
      FUN_10a394a64(lVar2);
      FUN_10a396450(0x3f800000,uVar3,lVar2 + 0x268,param_1,(long)plVar1 + 0x144,plVar1 + 0x27,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a423d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x210))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 10a423d54; end: 10a423dcb;  */

void FUN_10a423d54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = *param_5;
  uVar7 = *(undefined8 *)((long)param_5 + 4);
  fVar8 = *(float *)(param_5 + 1);
  fVar9 = (float)*param_6;
  fVar10 = (float)((ulong)*param_6 >> 0x20);
  fVar1 = (float)*(undefined8 *)((long)param_4 + 4);
  fVar11 = (float)param_6[2];
  fVar12 = (float)((ulong)param_6[2] >> 0x20);
  fVar2 = (float)param_6[4];
  fVar3 = (float)((ulong)param_6[4] >> 0x20);
  fVar13 = (float)param_6[6];
  fVar14 = (float)((ulong)param_6[6] >> 0x20);
  fVar4 = 2.0 / (float)*param_3;
  fVar5 = 2.0 / (float)((ulong)*param_3 >> 0x20);
  *param_1 = CONCAT44((fVar10 * (float)*param_4 + fVar12 * fVar1 +
                      fVar3 * *(float *)(param_4 + 1) + fVar14) * fVar5,
                      (fVar9 * (float)*param_4 + fVar11 * fVar1 +
                      fVar2 * *(float *)(param_4 + 1) + fVar13) * fVar4);
  fVar1 = (float)uVar7;
  *param_2 = CONCAT44(fVar5 * (fVar10 * (float)uVar6 + fVar12 * fVar1 + fVar14 + fVar3 * fVar8),
                      fVar4 * (fVar9 * (float)uVar6 + fVar11 * fVar1 + fVar13 + fVar2 * fVar8));
  return;
}



/* Entry: 10a423dcc; end: 10a423ee7;  */

void FUN_10a423dcc(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = *(long **)(param_3 + 0x250);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar7 = *(long *)(param_3 + 0x248);
      lStack_50 = lVar7;
      plStack_48 = plVar4;
      if ((param_4 != 0) && (lVar7 != 0)) {
        FUN_10a394a64(param_4);
        lVar5 = param_3;
        FUN_10a00ff8c(param_3);
        lVar6 = *(long *)(param_3 + 0x300);
        if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(lVar6);
        }
        lVar7 = *(long *)(lVar7 + 0x1f0);
        func_0x00010acae698(param_4 + 0x268);
        uStack_58 = param_1;
        uStack_54 = param_2;
        FUN_10a423d54(lVar7 + 0x24,lVar7 + 0x2c,&uStack_58,lVar5 + 0x144,lVar5 + 0x138,lVar6 + 0xc0)
        ;
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a423ee8; end: 10a423fab;  */

void FUN_10a423ee8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[0x4a];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (((param_1[0x49] != 0) && (*(long *)(param_1[0x2d] + 0x248) != 0)) &&
         ((*(ushort *)(*(long *)(param_1[0x2d] + 0x248) + 0x180) & 0x17) == 0)) {
        (**(code **)(*param_1 + 0x210))(param_1);
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
  }
  return;
}



/* Entry: 10a423fac; end: 10a4240cf;  */

void FUN_10a423fac(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  
  plVar1 = *(long **)(param_1 + 0x260);
  if (plVar1 == (long *)0x0) {
    FUN_10a66ac18(param_1);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x168) + 0x140);
    if ((*(byte *)(lVar2 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar2);
      plVar1 = *(long **)(param_1 + 0x260);
    }
    FUN_10a347d04();
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(auStack_78);
    }
  }
  return;
}



/* Entry: 10a4240d0; end: 10a42414f;  */

undefined1 FUN_10a4240d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x288);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = *(undefined1 *)(param_1 + 0x218);
  }
  else {
    if (*(long *)(param_1 + 0x280) == 0) {
      uVar6 = *(undefined1 *)(param_1 + 0x218);
    }
    else {
      uVar6 = 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return uVar6;
}



/* Entry: 10a424150; end: 10a424257;  */

long * FUN_10a424150(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  lVar3 = *(long *)(param_1 + 0x2a8);
  lVar5 = *(long *)(param_1 + 0x2a0);
  if (lVar3 != lVar5) {
    uVar7 = 0;
    do {
      lVar11 = *(long *)(lVar5 + uVar7 * 0x10);
      if (lVar11 != 0) {
        lVar4 = *(long *)(lVar11 + 0x230);
        lVar6 = *(long *)(lVar11 + 0x228);
        if (lVar4 != lVar6) {
          lVar3 = 0;
          uVar9 = 0;
          do {
            puVar1 = *(undefined8 **)(lVar6 + lVar3);
            if (puVar1 != (undefined8 *)0x0) {
              FUN_10a3322b0();
              plVar10 = (long *)*puVar1;
              if (plVar10 != (long *)0x0) {
                plVar8 = *(long **)(param_1 + 0x2f0);
                if (plVar8 != (long *)0x0) {
                  plVar2 = plVar10;
                  (**(code **)(*plVar10 + 0x30))(plVar10);
                  func_0x00010acadc70(plVar8,uVar7,uVar9,plVar2);
                  if (plVar8 != (long *)0x0) {
                    plVar10 = plVar8;
                  }
                }
                return plVar10 + 0x31;
              }
              lVar4 = *(long *)(lVar11 + 0x230);
              lVar6 = *(long *)(lVar11 + 0x228);
            }
            uVar9 = uVar9 + 1;
            lVar3 = lVar3 + 0x10;
          } while (uVar9 < (ulong)(lVar4 - lVar6 >> 4));
          lVar3 = *(long *)(param_1 + 0x2a8);
          lVar5 = *(long *)(param_1 + 0x2a0);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(lVar3 - lVar5 >> 4));
  }
  return (long *)&UNK_10e4ac720;
}



/* Entry: 10a424258; end: 10a4244bf;  */

long FUN_10a424258(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  if (((*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8)) &&
      (lVar1 = **(long **)(param_1 + 0x2a0), lVar1 != 0)) &&
     (*(long **)(lVar1 + 0x228) != *(long **)(lVar1 + 0x230))) {
    lVar1 = **(long **)(lVar1 + 0x228);
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = lVar1;
    FUN_10a336830();
    if ((int)lVar2 != 0) {
      lVar1 = *(long *)(lVar1 + 0x1b8);
      uStack_38 = param_2;
      FUN_10a0da6b4(lVar1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
      lVar2 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x2f0);
      if (lVar1 == 0) {
        return lVar2;
      }
      FUN_10acadb94(lVar1,0,0,param_2);
      if (lVar1 == 0) {
        return lVar2;
      }
      if (*(short *)(lVar1 + 0x20) == *(short *)(lVar2 + 0x20)) {
        return lVar1;
      }
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 10a4244c0; end: 10a4247af;  */

long * FUN_10a4244c0(float param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5,
                    long *param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [12];
  float fStack_84;
  undefined8 uStack_80;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_54;
  
  uVar3 = *(uint *)(param_6 + 0x22);
  if (uVar3 != 0xffffffff) {
    lVar10 = param_6[0x1f];
    uVar11 = (param_6[0x20] - lVar10 >> 3) * 0x6db6db6db6db6db7;
    if (uVar11 < uVar3 || uVar11 - uVar3 == 0) goto LAB_10a42476c;
    if (lVar10 != 0) {
      lVar13 = lVar10 + (ulong)uVar3 * 0x38;
      iVar4 = *(int *)(lVar13 + 0x24);
      if (iVar4 - 1U < 4) {
        if (*(char *)(lVar13 + 0x2c) == '\x01') {
LAB_10a424554:
          if (*(int *)(lVar13 + 0x28) == 3) {
            uVar3 = *(uint *)(param_6 + 0x24);
            if (uVar3 == 0xffffffff) {
              return param_4;
            }
            if (uVar3 <= uVar11 && uVar11 - uVar3 != 0) {
              lVar10 = lVar10 + (ulong)uVar3 * 0x38;
              iVar5 = *(int *)(lVar10 + 0x24);
              if (iVar5 - 1U < 4) {
                if (*(char *)(lVar10 + 0x2c) != '\x01') {
                  return param_4;
                }
              }
              else {
                if (iVar5 == 0) {
                  return param_4;
                }
                if (iVar5 == 8) {
                  return param_4;
                }
              }
              if (*(int *)(lVar10 + 0x28) == 2) {
                if ((iVar4 != 5) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
                  func_0x00010ae06f08(1,2,&UNK_10f6575d6,&UNK_10f657610,0x1ec,&UNK_10f657680);
                }
                if (*(char *)(param_5 + 0x2f0) == '\x01') {
                  FUN_10a42b498(param_5);
                  *(undefined1 *)(param_5 + 0x2f0) = 0;
                }
                lVar2 = 200;
                if (*(ulong *)(param_5 + 0x4d0) < 2) {
                  lVar2 = 0x1e0;
                }
                func_0x000109519fd0(auStack_90,param_5 + lVar2 + 0x388,param_7);
                func_0x00010ab50ad8(&plStack_98,param_6,lVar10);
                param_4 = param_6;
                FUN_10ab4c544(&plStack_a0,param_6,lVar13);
                uVar11 = 0;
                while( true ) {
                  fVar16 = (float)param_3;
                  fVar15 = (float)param_2;
                  uVar3 = *(uint *)(param_6 + 0x1e);
                  if (uVar3 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar9 = (ulong)(param_6[3] - param_6[2]) / (ulong)uVar3;
                    }
                    uVar9 = uVar9 & 0xffffffff;
                  }
                  if (uVar9 <= uVar11) break;
                  (**(code **)(*plStack_a0 + 0x10))(plStack_a0,uVar11);
                  fVar17 = param_1 * fStack_84 + fVar15 * fStack_74 + fVar16 * fStack_64 + fStack_54
                  ;
                  fVar14 = SUB84(auStack_90._0_8_,4) * param_1;
                  param_2 = CONCAT44(fVar17,fVar17);
                  param_1 = (((float)auStack_90._0_8_ * param_1 + (float)uStack_80 * fVar15 +
                             (float)uStack_70 * fVar16 + (float)uStack_60) / fVar17) * 0.5 + 0.5;
                  uStack_a8 = CONCAT44(((fVar14 + (float)((ulong)uStack_80 >> 0x20) * fVar15 +
                                        (float)((ulong)uStack_70 >> 0x20) * fVar16 +
                                        (float)((ulong)uStack_60 >> 0x20)) / fVar17) * 0.5 + 0.5,
                                       param_1);
                  param_4 = plStack_98;
                  param_3 = uStack_60;
                  (**(code **)(*plStack_98 + 0x18))(plStack_98,uVar11,&uStack_a8);
                  uVar11 = uVar11 + 1;
                }
                if (plStack_a0 != (long *)0x0) {
                  (**(code **)(*plStack_a0 + 8))(plStack_a0);
                  param_4 = plStack_a0;
                }
                if (plStack_98 != (long *)0x0) {
                  (**(code **)(*plStack_98 + 8))(plStack_98);
                  param_4 = plStack_98;
                }
              }
              return param_4;
            }
            goto LAB_10a42476c;
          }
        }
      }
      else if (iVar4 != 0 && iVar4 != 8) goto LAB_10a424554;
    }
  }
  param_4 = (long *)&UNK_10f6575b3;
  FUN_10a00946c();
LAB_10a42476c:
  FUN_10ab725fc();
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 8))(plStack_98);
  }
  __Unwind_Resume();
  plVar8 = (long *)param_4[0x53];
  if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0))
  {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)param_4[0x52];
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar12;
}



/* Entry: 10a4247b0; end: 10a42481f;  */

undefined8 FUN_10a4247b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x298);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x290);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return uVar6;
}



/* Entry: 10a424820; end: 10a4248c7;  */

bool FUN_10a424820(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x278);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_1 + 0x270);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar6 != 0) {
      return (*(ushort *)(lVar6 + 0x180) & 0x12) == 0;
    }
  }
  if (*(char *)(param_1 + 0x358) == '\x01') {
    bVar3 = *(long *)(param_1 + 0x340) != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10a4248c8; end: 10a42490b;  */

void FUN_10a4248c8(long *param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar5 = param_1[1] - *param_1 >> 2;
  bVar2 = param_2 < (ulong)(lVar5 * -0x71c71c71c71c71c7);
  puVar4 = (undefined8 *)(param_2 + lVar5 * 0x71c71c71c71c71c7);
  if (bVar2 || puVar4 == (undefined8 *)0x0) {
    if (bVar2) {
      param_1[1] = *param_1 + param_2 * 0x24;
    }
    return;
  }
  puVar7 = (undefined8 *)param_1[1];
  if ((undefined8 *)((param_1[2] - (long)puVar7 >> 2) * -0x71c71c71c71c71c7) < puVar4) {
    lVar5 = (long)puVar7 - *param_1;
    uVar6 = (long)puVar4 + (lVar5 >> 2) * -0x71c71c71c71c71c7;
    if (0x71c71c71c71c71c < uVar6) {
      FUN_10a36a338();
      if (param_4 != 0) {
        FUN_10a2e247c();
        puVar7 = (undefined8 *)param_1[1];
        for (; puVar4 != param_3; puVar4 = puVar4 + 2) {
          lVar5 = puVar4[1];
          uVar11 = *puVar4;
          puVar7[1] = puVar4[1];
          *puVar7 = uVar11;
          if (lVar5 != 0) {
            plVar3 = (long *)(lVar5 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar2) {
                *plVar3 = *plVar3 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          puVar7 = puVar7 + 2;
        }
        param_1[1] = (long)puVar7;
      }
      return;
    }
    lVar8 = param_1[2] - *param_1 >> 2;
    uVar10 = lVar8 * 0x1c71c71c71c71c72;
    if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
      uVar10 = uVar6;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
      uVar10 = 0x71c71c71c71c71c;
    }
    if (uVar10 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a36a34c();
    }
    puVar9 = (undefined8 *)((long)plVar3 + lVar5);
    lVar5 = (long)puVar4 * 0x24;
    puVar7 = puVar9;
    do {
      *(undefined4 *)(puVar7 + 4) = 0x3f800000;
      puVar7[1] = 0;
      *puVar7 = 0x3f800000;
      puVar7[3] = 0;
      puVar7[2] = 0x3f800000;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
      lVar5 = lVar5 + -0x24;
    } while (lVar5 != 0);
    lVar8 = (long)puVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar5 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9 + (long)puVar4 * 0x24;
    param_1[2] = (long)plVar3 + uVar10 * 0x24;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    puVar9 = puVar7;
    if (puVar4 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)((long)puVar7 + (long)puVar4 * 0x24);
      lVar5 = (long)puVar4 * 0x24;
      do {
        *(undefined4 *)(puVar7 + 4) = 0x3f800000;
        puVar7[1] = 0;
        *puVar7 = 0x3f800000;
        puVar7[3] = 0;
        puVar7[2] = 0x3f800000;
        puVar7 = (undefined8 *)((long)puVar7 + 0x24);
        lVar5 = lVar5 + -0x24;
      } while (lVar5 != 0);
    }
    param_1[1] = (long)puVar9;
  }
  return;
}



/* Entry: 10a42490c; end: 10a425ccb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a42490c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  long *****ppppplVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *****ppppplVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  uint *******pppppppuVar11;
  long ******pppppplVar12;
  uint *******pppppppuVar13;
  long *******ppppppplVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  long ****pppplVar23;
  float *pfVar24;
  uint *puVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  undefined8 *puVar33;
  float *pfVar34;
  undefined8 *puVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long lVar40;
  undefined8 *puVar41;
  long *******ppppppplVar42;
  long *******ppppppplVar43;
  long *******ppppppplVar44;
  long lVar45;
  long lVar46;
  long *****ppppplVar47;
  undefined8 *puVar48;
  long *******ppppppplVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long ***ppplVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fStack_250;
  float fStack_24c;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_1e8 [32];
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  uint *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *****ppppplStack_198;
  ulong uStack_190;
  float fStack_188;
  undefined4 uStack_184;
  ulong uStack_180;
  float fStack_178;
  undefined4 uStack_174;
  long lStack_170;
  long *plStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_5[0x4c] == 0) || (plVar9 = *(long **)(param_5[0x4c] + 0xe0), plVar9 == (long *)0x0)) {
LAB_10a4249cc:
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    goto LAB_10a4249dc;
  }
  (**(code **)(*plVar9 + 0x90))();
  lVar40 = *plVar9;
  if (lVar40 == 0) goto LAB_10a4249cc;
  uVar20 = *(uint *)(lVar40 + 0x110);
  if (uVar20 != 0xffffffff) {
    uVar30 = (*(long *)(lVar40 + 0x100) - *(long *)(lVar40 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar20 <= uVar30 && uVar30 - uVar20 != 0) {
      lVar19 = *(long *)(lVar40 + 0xf8) + (ulong)uVar20 * 0x38;
      goto LAB_10a424a28;
    }
    goto LAB_10a425bb8;
  }
  lVar19 = 0;
LAB_10a424a28:
  uVar20 = *(uint *)(lVar40 + 0x114);
  if (uVar20 == 0xffffffff) {
    lVar45 = 0;
  }
  else {
    uVar30 = (*(long *)(lVar40 + 0x100) - *(long *)(lVar40 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar30 < uVar20 || uVar30 - uVar20 == 0) goto LAB_10a425bb8;
    lVar45 = *(long *)(lVar40 + 0xf8) + (ulong)uVar20 * 0x38;
  }
  uVar20 = *(uint *)(lVar40 + 0x120);
  if (uVar20 != 0xffffffff) {
    uVar30 = (*(long *)(lVar40 + 0x100) - *(long *)(lVar40 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar20 <= uVar30 && uVar30 - uVar20 != 0) {
      lVar46 = *(long *)(lVar40 + 0xf8) + (ulong)uVar20 * 0x38;
      if (lVar19 != 0) goto LAB_10a424a9c;
      goto LAB_10a425b94;
    }
    goto LAB_10a425bb8;
  }
  lVar46 = 0;
  if (lVar19 == 0) goto LAB_10a425b94;
LAB_10a424a9c:
  iVar31 = *(int *)(lVar19 + 0x24);
  if (3 < iVar31 - 1U) {
    if ((iVar31 != 0) && (iVar31 != 8)) goto LAB_10a424ac8;
    goto LAB_10a425b94;
  }
  if (*(char *)(lVar19 + 0x2c) != '\x01') goto LAB_10a425b94;
LAB_10a424ac8:
  if (*(int *)(lVar19 + 0x28) != 3) goto LAB_10a425b94;
  if (lVar45 == 0) goto LAB_10a425ba0;
  iVar31 = *(int *)(lVar45 + 0x24);
  if (3 < iVar31 - 1U) {
    if ((iVar31 != 0) && (iVar31 != 8)) goto LAB_10a424b04;
    goto LAB_10a425ba0;
  }
  if (*(char *)(lVar45 + 0x2c) != '\x01') goto LAB_10a425ba0;
LAB_10a424b04:
  if (*(int *)(lVar45 + 0x28) != 3) goto LAB_10a425ba0;
  if (lVar46 == 0) goto LAB_10a425bac;
  iVar31 = *(int *)(lVar46 + 0x24);
  if (3 < iVar31 - 1U) {
    if ((iVar31 != 0) && (iVar31 != 8)) goto LAB_10a424b40;
    goto LAB_10a425bac;
  }
  if (*(char *)(lVar46 + 0x2c) != '\x01') goto LAB_10a425bac;
LAB_10a424b40:
  if (*(int *)(lVar46 + 0x28) != 2) goto LAB_10a425bac;
  func_0x00010ab4d7d8(&plStack_1b8,lVar40);
  func_0x00010ab4d7d8(&plStack_1c0,lVar40,lVar45);
  func_0x00010ab4d4d0(&plStack_1c8,lVar40,lVar46);
  FUN_10ab4ccac(auStack_1e8,lVar40);
  plVar2 = plStack_1b8;
  plVar10 = plStack_1c0;
  plVar9 = plStack_1c8;
  lVar19 = 0;
  uVar60 = 0;
  auStack_128 = (undefined1  [8])0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puVar41 = &uStack_120;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  do {
    FUN_10ab4e710(&puStack_148,auStack_1e8,param_6);
    FUN_10ab4e794(&pppppppuStack_1b0,&puStack_148,lVar19);
    if (pppppppuStack_1b0 == (uint *******)0x0) {
      iVar31 = uStack_1a8._4_4_;
    }
    else {
      if ((char)uStack_1a8 == '\x02') {
        uVar20 = (uint)*(ushort *)pppppppuStack_1b0;
      }
      else {
        if ((char)uStack_1a8 != '\x04') {
          iVar31 = 0;
          goto LAB_10a424c18;
        }
        uVar20 = *(uint *)pppppppuStack_1b0;
      }
      iVar31 = (int)uStack_1a0 + uVar20;
    }
LAB_10a424c18:
    *(int *)(puVar41 + 2) = iVar31;
    (**(code **)(*plVar2 + 0x10))(plVar2,iVar31);
    *(int *)(puVar41 + -2) = (int)uVar60;
    *(int *)((long)puVar41 + -0xc) = (int)param_3;
    *(int *)(puVar41 + -1) = (int)param_4;
    if (pppppppuStack_1b0 == (uint *******)0x0) {
      iVar31 = uStack_1a8._4_4_;
    }
    else {
      if ((char)uStack_1a8 == '\x02') {
        uVar20 = (uint)*(ushort *)pppppppuStack_1b0;
      }
      else {
        if ((char)uStack_1a8 != '\x04') {
          iVar31 = 0;
          goto LAB_10a424c78;
        }
        uVar20 = *(uint *)pppppppuStack_1b0;
      }
      iVar31 = (int)uStack_1a0 + uVar20;
    }
LAB_10a424c78:
    (**(code **)(*plVar10 + 0x10))(plVar10,iVar31);
    *(int *)((long)puVar41 + -4) = (int)uVar60;
    *(int *)puVar41 = (int)param_3;
    *(int *)((long)puVar41 + 4) = (int)param_4;
    if (pppppppuStack_1b0 == (uint *******)0x0) {
      iVar31 = uStack_1a8._4_4_;
    }
    else {
      if ((char)uStack_1a8 == '\x02') {
        uVar20 = (uint)*(ushort *)pppppppuStack_1b0;
      }
      else {
        if ((char)uStack_1a8 != '\x04') {
          iVar31 = 0;
          goto LAB_10a424cd4;
        }
        uVar20 = *(uint *)pppppppuStack_1b0;
      }
      iVar31 = (int)uStack_1a0 + uVar20;
    }
LAB_10a424cd4:
    (**(code **)(*plVar9 + 0x10))(plVar9,iVar31);
    *(int *)(puVar41 + 1) = (int)uVar60;
    *(int *)((long)puVar41 + 0xc) = (int)param_3;
    lVar19 = lVar19 + 1;
    puVar41 = (undefined8 *)((long)puVar41 + 0x24);
  } while (lVar19 != 3);
  if (((*(byte *)(*(long *)(param_5[0x2e] + 0xa20) + 0x1c) & 1) == 0) &&
     (*(int *)(*(long *)(param_5[0x2e] + 0xa20) + 0x18) < 0x60)) {
    lVar19 = *(long *)(param_5[0x2d] + 0x140);
    if ((*(byte *)(lVar19 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar19);
    }
    fStack_234 = *(float *)(lVar19 + 200);
    fStack_238 = *(float *)(lVar19 + 0xd8);
    fStack_23c = *(float *)(lVar19 + 0xe8);
    uVar30 = *(ulong *)(lVar19 + 0xe0);
    uVar26 = *(ulong *)(lVar19 + 0xf0);
    fVar54 = *(float *)(lVar19 + 0xf8);
    fStack_22c = (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20);
    fStack_230 = (float)*(undefined8 *)(lVar19 + 0xd0);
    fStack_24c = (float)((ulong)*(undefined8 *)(lVar19 + 0xd0) >> 0x20);
    fStack_250 = (float)*(undefined8 *)(lVar19 + 0xc0);
  }
  else {
    func_0x00010a424420(&pppppppuStack_1b0,param_5);
    fStack_238 = ppppplStack_198._0_4_;
    fStack_234 = (float)uStack_1a8;
    fStack_23c = fStack_188;
    fStack_22c = (float)((ulong)pppppppuStack_1b0 >> 0x20);
    fStack_230 = SUB84(uStack_1a0,0);
    fStack_24c = (float)((ulong)uStack_1a0 >> 0x20);
    fStack_250 = SUB84(pppppppuStack_1b0,0);
    uVar30 = uStack_190;
    uVar26 = uStack_180;
    fVar54 = fStack_178;
  }
  plVar9 = param_5;
  FUN_10a4247b0();
  if ((plVar9 != (long *)0x0) &&
     (plVar10 = plVar9, (**(code **)(*plVar9 + 0x60))(), (int)plVar10 != 0)) {
    pfVar34 = *(float **)(lVar40 + 0xa8);
    for (pfVar24 = *(float **)(lVar40 + 0xa0); pfVar24 != pfVar34; pfVar24 = pfVar24 + 0x16) {
      FUN_10ab6e728();
      if ((*(long *)(pfVar24 + 10) == lRam00000001138356d8) ||
         (FUN_10ab6e9d8(), *(long *)(pfVar24 + 10) == lRam0000000113835758)) {
        ppppppplStack_160 = (long *******)((ulong)ppppppplStack_160 & 0xffffffff00000000);
        fVar61 = 0.0;
        if (0.0 <= *(float *)(plVar9 + 0x3e)) {
          fVar61 = *(float *)(plVar9 + 0x3e);
        }
        fVar63 = pfVar24[1] - *pfVar24;
        if (fVar61 <= pfVar24[1] - *pfVar24) {
          fVar63 = fVar61;
        }
        lVar45 = *(long *)(pfVar24 + 0x12);
        FUN_10a11b78c(fVar63,lVar45,&ppppppplStack_160);
        lVar19 = *(long *)(pfVar24 + 0xc);
        uVar28 = *(long *)(pfVar24 + 0xe) - lVar19 >> 5;
        if ((uVar28 <= (ulong)(long)(int)lVar45) || (uVar28 <= (ulong)(lVar45 >> 0x20)))
        goto LAB_10a425bd0;
        lVar46 = 0;
        uVar20 = (int)pfVar24[2] << 2;
        puVar48 = *(undefined8 **)(lVar19 + (long)(int)lVar45 * 0x20 + 8);
        lVar19 = *(long *)(lVar19 + (lVar45 >> 0x20) * 0x20 + 8);
        puVar41 = &uStack_130;
        do {
          FUN_10ab4e710(&puStack_148,auStack_1e8,param_6);
          FUN_10ab4e794(&pppppppuStack_1b0,&puStack_148,lVar46);
          ppppppplVar43 = ppppppplStack_160;
          if (pppppppuStack_1b0 == (uint *******)0x0) {
            puVar29 = (undefined8 *)((long)puVar48 + (ulong)uStack_1a8._4_4_ * (ulong)uVar20);
            uVar21 = uStack_1a8._4_4_;
          }
          else {
            if ((char)uStack_1a8 == '\x02') {
              uVar21 = (uint)*(ushort *)pppppppuStack_1b0;
            }
            else {
              if ((char)uStack_1a8 != '\x04') {
                puVar29 = puVar48;
                uVar21 = 0;
                goto LAB_10a424f10;
              }
              uVar21 = *(uint *)pppppppuStack_1b0;
            }
            puVar29 = (undefined8 *)
                      ((long)puVar48 + (ulong)uVar20 * (ulong)((int)uStack_1a0 + uVar21));
            uVar21 = (int)uStack_1a0 + uVar21;
          }
LAB_10a424f10:
          puVar22 = (undefined8 *)(lVar19 + (ulong)uVar20 * (ulong)uVar21);
          fVar61 = *(float *)(puVar29 + 1);
          fVar63 = *(float *)(puVar22 + 1);
          uVar62 = *puVar29;
          uVar60 = *puVar22;
          FUN_10ab6e728();
          puVar29 = puVar41;
          if (*(long *)(pfVar24 + 10) == lRam00000001138356d8) {
LAB_10a424f68:
            fVar56 = SUB84(ppppppplVar43,0);
            fVar50 = 1.0 - fVar56;
            fVar53 = *(float *)((long)plVar9 + 500);
            *puVar29 = CONCAT44(((float)((ulong)uVar62 >> 0x20) * fVar50 +
                                (float)((ulong)uVar60 >> 0x20) * fVar56) * fVar53 +
                                (float)((ulong)*puVar29 >> 0x20),
                                ((float)uVar62 * fVar50 + (float)uVar60 * fVar56) * fVar53 +
                                (float)*puVar29);
            *(float *)(puVar29 + 1) =
                 (fVar50 * fVar61 + fVar56 * fVar63) * fVar53 + *(float *)(puVar29 + 1);
          }
          else {
            FUN_10ab6e9d8();
            if (*(long *)(pfVar24 + 10) == lRam0000000113835758) {
              puVar29 = (undefined8 *)(auStack_128 + lVar46 * 0x24 + 4);
              goto LAB_10a424f68;
            }
          }
          lVar46 = lVar46 + 1;
          puVar41 = (undefined8 *)((long)puVar41 + 0x24);
        } while (lVar46 != 3);
      }
    }
  }
  plVar9 = param_5;
  FUN_10a424820();
  if ((int)plVar9 != 0) {
    FUN_10a410af8(param_5);
    FUN_10a11b744(&puStack_148);
    if (puStack_148 != puStack_140) {
      ppppppplStack_158 = (long *******)0x0;
      lStack_150 = 0;
      ppppplVar1 = *(long ******)(lVar40 + 0x48);
      ppppppplStack_160 = (long *******)&ppppppplStack_158;
      puVar41 = puStack_140;
      for (ppppplVar47 = *(long ******)(lVar40 + 0x40); puStack_140 = puVar41, puVar48 = puStack_148
          , ppppplVar47 != ppppplVar1; ppppplVar47 = ppppplVar47 + 9) {
        ppppppplVar43 = (long *******)&ppppppplStack_158;
        if (*(char *)((long)ppppplVar47 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppppuStack_1b0,*ppppplVar47,ppppplVar47[1]);
          ppppplStack_198 = ppppplVar47;
          ppppppplVar49 = ppppppplStack_158;
        }
        else {
          uStack_1a8 = (long *****)ppppplVar47[1];
          pppppppuStack_1b0 = (uint *******)*ppppplVar47;
          uStack_1a0 = (long *****)ppppplVar47[2];
          ppppplStack_198 = ppppplVar47;
          ppppppplVar49 = ppppppplStack_158;
        }
        while (ppppppplVar44 = ppppppplVar43, ppppppplVar49 != (long *******)0x0) {
          while( true ) {
            ppppppplVar44 = ppppppplVar49;
            pppppppuVar11 = (uint *******)&pppppppuStack_1b0;
            FUN_10a003e3c(pppppppuVar11,ppppppplVar44 + 4);
            if (((uint)pppppppuVar11 >> 7 & 1) != 0) break;
            ppppppplVar49 = ppppppplVar44 + 4;
            FUN_10a003e3c(ppppppplVar49,&pppppppuStack_1b0);
            if (((uint)ppppppplVar49 >> 7 & 1) == 0) {
              if (*ppppppplVar43 != (long ******)0x0) goto LAB_10a4250f8;
              goto LAB_10a4250a0;
            }
            ppppppplVar43 = ppppppplVar44 + 1;
            ppppppplVar49 = (long *******)*ppppppplVar43;
            if ((long *******)*ppppppplVar43 == (long *******)0x0) goto LAB_10a4250a0;
          }
          ppppppplVar43 = ppppppplVar44;
          ppppppplVar49 = (long *******)*ppppppplVar44;
        }
LAB_10a4250a0:
        pppppplVar12 = (long ******)0x40;
        __Znwm();
        ppppplVar6 = uStack_1a0;
        pppppplVar12[5] = uStack_1a8;
        pppppplVar12[4] = (long *****)pppppppuStack_1b0;
        uStack_1a8 = (long *****)0x0;
        uStack_1a0 = (long *****)0x0;
        pppppppuStack_1b0 = (uint *******)0x0;
        pppppplVar12[6] = ppppplVar6;
        pppppplVar12[7] = ppppplStack_198;
        *pppppplVar12 = (long *****)0x0;
        pppppplVar12[1] = (long *****)0x0;
        pppppplVar12[2] = (long *****)ppppppplVar44;
        *ppppppplVar43 = pppppplVar12;
        if ((long *******)*ppppppplStack_160 != (long *******)0x0) {
          pppppplVar12 = *ppppppplVar43;
          ppppppplStack_160 = (long *******)*ppppppplStack_160;
        }
        func_0x000107c2b058(ppppppplStack_158,pppppplVar12);
        lStack_150 = lStack_150 + 1;
LAB_10a4250f8:
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(pppppppuStack_1b0);
        }
        puVar41 = puStack_140;
      }
      for (; puVar48 != puVar41; puVar48 = puVar48 + 3) {
        ppppplVar47 = (long *****)puVar48[1];
        if ((long *****)0x7ffffffffffffff7 < ppppplVar47) {
          func_0x000109ffde50();
          goto LAB_10a425bd0;
        }
        uVar60 = *puVar48;
        if (ppppplVar47 < (long *****)0x17) {
          uStack_1a0 = (long *****)CONCAT17((char)ppppplVar47,SUB87(uStack_1a0,0));
          pppppppuVar13 = (uint *******)&pppppppuStack_1b0;
          if (ppppplVar47 != (long *****)0x0) goto LAB_10a42517c;
        }
        else {
          pppppppuVar11 = (uint *******)0x19;
          if (((ulong)ppppplVar47 | 7) != 0x17) {
            pppppppuVar11 = (uint *******)(((ulong)ppppplVar47 | 7) + 1);
          }
          pppppppuVar13 = pppppppuVar11;
          __Znwm();
          uStack_1a0 = (long *****)((ulong)pppppppuVar11 | 0x8000000000000000);
          pppppppuStack_1b0 = pppppppuVar13;
          uStack_1a8 = ppppplVar47;
LAB_10a42517c:
          _memmove(pppppppuVar13,uVar60,ppppplVar47);
        }
        *(undefined1 *)((long)pppppppuVar13 + (long)ppppplVar47) = 0;
        ppppppplVar43 = (long *******)&ppppppplStack_158;
        ppppppplVar49 = ppppppplStack_158;
        if (ppppppplStack_158 == (long *******)0x0) {
LAB_10a4251ec:
          ppppppplVar43 = (long *******)&ppppppplStack_158;
        }
        else {
          do {
            ppppppplVar42 = ppppppplVar43;
            ppppppplVar44 = ppppppplVar49 + 4;
            ppppppplVar14 = ppppppplVar44;
            FUN_10a003e3c(ppppppplVar44,&pppppppuStack_1b0);
            ppppppplVar43 = ppppppplVar42;
            if (-1 < (char)ppppppplVar14) {
              ppppppplVar43 = ppppppplVar49;
            }
            ppppppplVar49 = *(long ********)((long)ppppppplVar49 + ((ulong)ppppppplVar14 >> 4 & 8));
          } while (ppppppplVar49 != (long *******)0x0);
          if ((long ********)ppppppplVar43 == &ppppppplStack_158) goto LAB_10a4251ec;
          ppppppplVar49 = ppppppplVar42 + 4;
          if (-1 < (char)ppppppplVar14) {
            ppppppplVar49 = ppppppplVar44;
          }
          pppppppuVar11 = (uint *******)&pppppppuStack_1b0;
          FUN_10a003e3c(pppppppuVar11,ppppppplVar49);
          if (((uint)pppppppuVar11 >> 7 & 1) != 0) goto LAB_10a4251ec;
        }
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(pppppppuStack_1b0);
        }
        if (&ppppppplStack_158 != (long ********)ppppppplVar43) {
          fVar61 = *(float *)(puVar48 + 2);
          pppplVar23 = *ppppppplVar43[7][7];
          puVar29 = &uStack_130;
          lVar19 = 3;
          do {
            fVar63 = *(float *)(pppplVar23 + (long)*(int *)(puVar29 + 4) * 3 + 1);
            ppplVar55 = pppplVar23[(long)*(int *)(puVar29 + 4) * 3];
            *puVar29 = CONCAT44((float)((ulong)ppplVar55 >> 0x20) * fVar61 +
                                (float)((ulong)*puVar29 >> 0x20),
                                SUB84(ppplVar55,0) * fVar61 + (float)*puVar29);
            *(float *)(puVar29 + 1) = fVar61 * fVar63 + *(float *)(puVar29 + 1);
            puVar29 = (undefined8 *)((long)puVar29 + 0x24);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      FUN_10a448488(ppppppplStack_158);
    }
    if (puStack_148 != (undefined8 *)0x0) {
      puStack_140 = puStack_148;
      __ZdlPv(puStack_148);
    }
  }
  plVar9 = param_5;
  FUN_10a425ccc();
  if ((plVar9 == (long *)0x0) || ((*(ushort *)(plVar9 + 0x30) & 0x12) != 0)) {
    lVar40 = *(long *)(param_5[0x2d] + 0x140);
    if ((*(byte *)(lVar40 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar40);
    }
    fVar63 = *(float *)(lVar40 + 0xc0);
    fVar61 = *(float *)(lVar40 + 0xc4);
    fVar57 = *(float *)(lVar40 + 200);
    fVar65 = *(float *)(lVar40 + 0xd0);
    fVar53 = *(float *)(lVar40 + 0xd4);
    fVar58 = *(float *)(lVar40 + 0xd8);
    fVar59 = *(float *)(lVar40 + 0xe0);
    fVar64 = *(float *)(lVar40 + 0xe4);
    fVar66 = *(float *)(lVar40 + 0xe8);
    fVar50 = -(fVar64 * fVar58) + fVar66 * fVar53;
    fVar71 = -(fVar64 * fVar57) + fVar66 * fVar61;
    fVar56 = -(fVar53 * fVar57) + fVar58 * fVar61;
    if (ABS(-(fVar65 * fVar71) + fVar50 * fVar63 + fVar56 * fVar59) <= 1e-06) {
      fVar71 = 0.0;
      fVar66 = 1.0;
      fVar50 = 1.0;
      fVar52 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar86 = 1.0;
      fVar51 = 0.0;
      fVar59 = 0.0;
    }
    else {
      fVar86 = -(fVar61 * (-(fVar58 * fVar59) + fVar66 * fVar65)) +
               (-(fVar58 * fVar64) + fVar66 * fVar53) * fVar63 +
               (fVar59 * -fVar53 + fVar64 * fVar65) * fVar57;
      fVar51 = (-(fVar59 * fVar53) + fVar64 * fVar65) / fVar86;
      fVar50 = fVar50 / fVar86;
      fVar52 = (-(fVar65 * fVar66) - -(fVar59 * fVar58)) / fVar86;
      fVar71 = -fVar71 / fVar86;
      fVar66 = (-(fVar59 * fVar57) + fVar66 * fVar63) / fVar86;
      fVar59 = (-(fVar63 * fVar64) - -(fVar59 * fVar61)) / fVar86;
      fVar56 = fVar56 / fVar86;
      fVar57 = (-(fVar63 * fVar58) - fVar57 * -fVar65) / fVar86;
      fVar86 = (fVar61 * -fVar65 + fVar53 * fVar63) / fVar86;
    }
    pfVar24 = (float *)((ulong)&uStack_130 | 0xc);
    lVar40 = 3;
    do {
      fVar61 = pfVar24[-1];
      fVar63 = *pfVar24;
      uVar60 = *(undefined8 *)(pfVar24 + -3);
      uVar62 = NEON_rev64(uVar60,4);
      fVar53 = (float)((ulong)uVar60 >> 0x20);
      *(ulong *)(pfVar24 + -3) =
           CONCAT44(fStack_22c * (float)((ulong)uVar62 >> 0x20) + fStack_24c * fVar53 +
                    (float)(uVar26 >> 0x20) + (float)(uVar30 >> 0x20) * fVar61,
                    fStack_230 * (float)uVar62 + fStack_250 * (float)uVar60 +
                    (float)uVar26 + (float)uVar30 * fVar61);
      pfVar24[-1] = fStack_234 * (float)uVar60 + fStack_238 * fVar53 + fVar54 + fStack_23c * fVar61;
      fVar61 = pfVar24[1];
      fVar53 = pfVar24[2];
      *(ulong *)pfVar24 =
           CONCAT44(fVar66 * fVar61 + fVar52 * fVar63 + fVar57 * fVar53,
                    fVar71 * fVar61 + fVar50 * fVar63 + fVar56 * fVar53);
      pfVar24[2] = fVar59 * fVar61 + fVar63 * fVar51 + fVar53 * fVar86;
      pfVar24 = pfVar24 + 9;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
    goto LAB_10a42545c;
  }
  uVar20 = *(uint *)(lVar40 + 0x130);
  if (uVar20 != 0xffffffff) {
    lVar19 = *(long *)(lVar40 + 0xf8);
    uVar30 = (*(long *)(lVar40 + 0x100) - lVar19 >> 3) * 0x6db6db6db6db6db7;
    if (uVar30 < uVar20 || uVar30 - uVar20 == 0) {
      FUN_10ab725fc();
      goto LAB_10a425bd0;
    }
    if (((lVar19 != 0) && (lVar19 = lVar19 + (ulong)uVar20 * 0x38, *(int *)(lVar19 + 0x24) == 5)) &&
       (*(int *)(lVar19 + 0x28) == 4)) {
      lVar45 = *(long *)(lVar40 + 0x10);
      uVar20 = *(uint *)(lVar19 + 0x30);
      uVar21 = *(uint *)(lVar40 + 0xf0);
      puStack_148 = (undefined8 *)0x0;
      puStack_140 = (undefined8 *)0x0;
      uStack_138 = 0;
      ppppppplStack_160 = (long *******)0x0;
      ppppppplStack_158 = (long *******)0x0;
      lStack_150 = 0;
      plVar10 = *(long **)(lVar40 + 0x88);
      plVar2 = *(long **)(lVar40 + 0x90);
      if (plVar10 != plVar2) {
        uVar5 = (int)param_6 * 3;
LAB_10a425584:
        for (puVar25 = (uint *)plVar10[3]; puVar25 != (uint *)plVar10[4]; puVar25 = puVar25 + 3) {
          if ((*puVar25 <= uVar5) && (uVar5 < puVar25[1] + *puVar25)) {
            FUN_10a01066c(&puStack_148,plVar10[1] - *plVar10 >> 2);
            FUN_10a4248c8(&ppppppplStack_160,plVar10[1] - *plVar10 >> 2);
            lVar19 = *plVar10;
            if (plVar10[1] == lVar19) goto LAB_10a425748;
            uVar30 = 0;
            goto LAB_10a4255ec;
          }
        }
        goto LAB_10a425b44;
      }
      goto LAB_10a425b60;
    }
  }
  goto LAB_10a425bbc;
  while( true ) {
    lVar19 = *(long *)(lVar40 + 0x58) + uVar26 * 0x60;
    plVar15 = plVar9 + 0x3e;
    FUN_10a063240(plVar15,lVar19);
    if (plVar15 == (long *)0x0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a425bd0;
    }
    plVar16 = (long *)plVar15[7];
    if ((plVar16 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_168 = plVar16, plVar16 != (long *)0x0)) {
      lStack_170 = plVar15[6];
      if (lStack_170 != 0) {
        lVar46 = *(long *)(lStack_170 + 0x140);
        if ((*(byte *)(lVar46 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(lVar46);
        }
        func_0x000109519fd0(&pppppppuStack_1b0,lVar46 + 0xc0,lVar19 + 0x20);
        if ((ulong)((long)puStack_140 - (long)puStack_148 >> 6) <= uVar30) goto LAB_10a425bd0;
        puVar27 = puStack_148 + uVar30 * 8;
        puVar27[5] = CONCAT44(uStack_184,fStack_188);
        puVar27[4] = uStack_190;
        puVar27[7] = CONCAT44(uStack_174,fStack_178);
        puVar27[6] = uStack_180;
        puVar27[1] = (ulong)uStack_1a8;
        *puVar27 = (ulong)pppppppuStack_1b0;
        puVar27[3] = (ulong)ppppplStack_198;
        puVar27[2] = (ulong)uStack_1a0;
        FUN_10a1716ec(&pppppppuStack_1b0);
        uVar26 = ((long)ppppppplStack_158 - (long)ppppppplStack_160 >> 2) * -0x71c71c71c71c71c7;
        if (uVar26 < uVar30 || uVar26 - uVar30 == 0) goto LAB_10a425bd0;
        puVar27 = (ulong *)((long)ppppppplStack_160 + uVar30 * 0x24);
        *puVar27 = (ulong)pppppppuStack_1b0;
        *(float *)(puVar27 + 1) = (float)uStack_1a8;
        *(long ******)((long)puVar27 + 0xc) = uStack_1a0;
        *(float *)((long)puVar27 + 0x14) = ppppplStack_198._0_4_;
        puVar27[3] = uStack_190;
        *(float *)(puVar27 + 4) = fStack_188;
      }
      plVar15 = plVar16 + 1;
      do {
        lVar19 = *plVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    uVar30 = uVar30 + 1;
    lVar19 = *plVar10;
    if ((ulong)(plVar10[1] - lVar19 >> 2) <= uVar30) break;
LAB_10a4255ec:
    uVar26 = (ulong)*(uint *)(lVar19 + uVar30 * 4);
    uVar28 = (*(long *)(lVar40 + 0x60) - *(long *)(lVar40 + 0x58) >> 5) * -0x5555555555555555;
    if (uVar28 < uVar26 || uVar28 - uVar26 == 0) goto LAB_10a425bd0;
  }
LAB_10a425748:
  uVar30 = (long)puStack_140 - (long)puStack_148 >> 6;
  uVar26 = ((long)ppppppplStack_158 - (long)ppppppplStack_160 >> 2) * -0x71c71c71c71c71c7;
  lVar19 = 3;
  pfVar24 = (float *)&uStack_120;
  do {
    pfVar34 = (float *)(lVar45 + (ulong)uVar20 + (long)(int)pfVar24[4] * (ulong)uVar21);
    iVar31 = (int)*pfVar34;
    if (uVar30 <= (ulong)(long)iVar31) goto LAB_10a425bd0;
    fVar54 = pfVar34[1];
    iVar36 = (int)fVar54;
    if (uVar30 <= (ulong)(long)iVar36) goto LAB_10a425bd0;
    fVar61 = pfVar34[2];
    iVar8 = (int)fVar61;
    if (uVar30 <= (ulong)(long)iVar8) goto LAB_10a425bd0;
    fVar63 = pfVar34[3];
    iVar18 = (int)fVar63;
    if ((((uVar30 <= (ulong)(long)iVar18) ||
         (uVar28 = (ulong)iVar31, uVar26 < uVar28 || uVar26 - uVar28 == 0)) ||
        (uVar38 = (ulong)iVar36, uVar26 < uVar38 || uVar26 - uVar38 == 0)) ||
       ((uVar37 = (ulong)iVar8, uVar26 < uVar37 || uVar26 - uVar37 == 0 ||
        (uVar32 = (ulong)iVar18, uVar26 < uVar32 || uVar26 - uVar32 == 0)))) goto LAB_10a425bd0;
    fVar61 = fVar61 - (float)(int)fVar61;
    fVar63 = fVar63 - (float)(int)fVar63;
    fVar54 = fVar54 - (float)(int)fVar54;
    fVar57 = 1.0 - (fVar54 + fVar61 + fVar63);
    uVar60 = *(undefined8 *)(pfVar24 + -4);
    uVar62 = NEON_rev64(uVar60,4);
    fVar58 = pfVar24[-2];
    fVar53 = pfVar24[-1];
    fVar56 = *pfVar24;
    fVar50 = pfVar24[1];
    puVar41 = puStack_148 + uVar28 * 8;
    puVar48 = puStack_148 + uVar38 * 8;
    puVar29 = puStack_148 + uVar37 * 8;
    fVar86 = *(float *)(puVar41 + 1);
    fVar59 = (float)uVar60;
    fVar72 = *(float *)(puVar41 + 3);
    fVar64 = (float)((ulong)uVar60 >> 0x20);
    fVar73 = *(float *)(puVar41 + 5);
    fVar79 = *(float *)(puVar41 + 7);
    fVar74 = *(float *)(puVar48 + 1);
    fVar80 = *(float *)(puVar48 + 3);
    fVar81 = *(float *)(puVar48 + 5);
    fVar87 = *(float *)(puVar48 + 7);
    fVar75 = *(float *)(puVar29 + 1);
    fVar82 = *(float *)(puVar29 + 3);
    fVar83 = *(float *)(puVar29 + 5);
    fVar88 = *(float *)(puVar29 + 7);
    puVar22 = puStack_148 + uVar32 * 8;
    fVar76 = *(float *)(puVar22 + 1);
    fVar84 = *(float *)(puVar22 + 3);
    fVar85 = *(float *)(puVar22 + 5);
    fVar89 = *(float *)(puVar22 + 7);
    fVar52 = (float)((ulong)uVar62 >> 0x20);
    puVar39 = (undefined8 *)((long)ppppppplStack_160 + (long)iVar36 * 0x24);
    fVar90 = *(float *)(puVar39 + 1);
    fVar91 = *(float *)((long)puVar39 + 0x14);
    fVar92 = *(float *)(puVar39 + 4);
    uVar60 = NEON_rev64(CONCAT44(fVar57,fVar54),4);
    fVar65 = (float)((ulong)uVar60 >> 0x20);
    puVar17 = (undefined8 *)((long)ppppppplStack_160 + (long)iVar31 * 0x24);
    fVar66 = *(float *)(puVar17 + 4);
    fVar67 = *(float *)(puVar17 + 1);
    fVar77 = *(float *)((long)puVar17 + 0x14);
    puVar35 = (undefined8 *)((long)ppppppplStack_160 + (long)iVar8 * 0x24);
    fVar71 = *(float *)(puVar35 + 4);
    fVar68 = *(float *)(puVar35 + 1);
    fVar78 = *(float *)((long)puVar35 + 0x14);
    puVar33 = (undefined8 *)((long)ppppppplStack_160 + (long)iVar18 * 0x24);
    fVar51 = *(float *)(puVar33 + 1);
    fVar69 = *(float *)((long)puVar33 + 0x14);
    fVar70 = *(float *)(puVar33 + 4);
    *(ulong *)(pfVar24 + -4) =
         CONCAT44(fVar57 * (fVar52 * (float)((ulong)*puVar41 >> 0x20) +
                            fVar64 * (float)((ulong)puVar41[2] >> 0x20) +
                           (float)((ulong)puVar41[4] >> 0x20) * fVar58 +
                           (float)((ulong)puVar41[6] >> 0x20)) +
                  fVar65 * (fVar52 * (float)((ulong)*puVar48 >> 0x20) +
                            fVar64 * (float)((ulong)puVar48[2] >> 0x20) +
                           (float)((ulong)puVar48[4] >> 0x20) * fVar58 +
                           (float)((ulong)puVar48[6] >> 0x20)) +
                  ((float)((ulong)*puVar29 >> 0x20) * fVar59 +
                   (float)((ulong)puVar29[2] >> 0x20) * fVar64 +
                  (float)((ulong)puVar29[4] >> 0x20) * fVar58 + (float)((ulong)puVar29[6] >> 0x20))
                  * fVar61 +
                  ((float)((ulong)*puVar22 >> 0x20) * fVar59 +
                   (float)((ulong)puVar22[2] >> 0x20) * fVar64 +
                  (float)((ulong)puVar22[4] >> 0x20) * fVar58 + (float)((ulong)puVar22[6] >> 0x20))
                  * fVar63,fVar54 * ((float)uVar62 * (float)puVar48[2] + fVar59 * (float)*puVar48 +
                                    (float)puVar48[4] * fVar58 + (float)puVar48[6]) +
                           (float)uVar60 *
                           ((float)uVar62 * (float)puVar41[2] + fVar59 * (float)*puVar41 +
                           (float)puVar41[4] * fVar58 + (float)puVar41[6]) +
                           ((float)*puVar29 * fVar59 + (float)puVar29[2] * fVar64 +
                           (float)puVar29[4] * fVar58 + (float)puVar29[6]) * fVar61 +
                           ((float)*puVar22 * fVar59 + (float)puVar22[2] * fVar64 +
                           (float)puVar22[4] * fVar58 + (float)puVar22[6]) * fVar63);
    pfVar24[-2] = fVar57 * (fVar86 * fVar59 + fVar72 * fVar64 + fVar58 * fVar73 + fVar79) +
                  fVar54 * (fVar74 * fVar59 + fVar80 * fVar64 + fVar58 * fVar81 + fVar87) +
                  fVar61 * (fVar75 * fVar59 + fVar82 * fVar64 + fVar58 * fVar83 + fVar88) +
                  fVar63 * (fVar76 * fVar59 + fVar84 * fVar64 + fVar58 * fVar85 + fVar89);
    *(ulong *)(pfVar24 + -1) =
         CONCAT44(fVar57 * ((float)((ulong)*(undefined8 *)((long)puVar17 + 0xc) >> 0x20) * fVar56 +
                            (float)((ulong)*puVar17 >> 0x20) * fVar53 +
                           (float)((ulong)puVar17[3] >> 0x20) * fVar50) +
                  fVar65 * ((float)((ulong)*(undefined8 *)((long)puVar39 + 0xc) >> 0x20) * fVar56 +
                            (float)((ulong)*puVar39 >> 0x20) * fVar53 +
                           (float)((ulong)puVar39[3] >> 0x20) * fVar50) +
                  ((float)((ulong)*(undefined8 *)((long)puVar35 + 0xc) >> 0x20) * fVar56 +
                   (float)((ulong)*puVar35 >> 0x20) * fVar53 +
                  (float)((ulong)puVar35[3] >> 0x20) * fVar50) * fVar61 +
                  ((float)((ulong)*(undefined8 *)((long)puVar33 + 0xc) >> 0x20) * fVar56 +
                   (float)((ulong)*puVar33 >> 0x20) * fVar53 +
                  (float)((ulong)puVar33[3] >> 0x20) * fVar50) * fVar63,
                  fVar54 * ((float)*(undefined8 *)((long)puVar39 + 0xc) * fVar56 +
                            (float)*puVar39 * fVar53 + (float)puVar39[3] * fVar50) +
                  (float)uVar60 *
                  ((float)*(undefined8 *)((long)puVar17 + 0xc) * fVar56 + (float)*puVar17 * fVar53 +
                  (float)puVar17[3] * fVar50) +
                  ((float)*(undefined8 *)((long)puVar35 + 0xc) * fVar56 + (float)*puVar35 * fVar53 +
                  (float)puVar35[3] * fVar50) * fVar61 +
                  ((float)*(undefined8 *)((long)puVar33 + 0xc) * fVar56 + (float)*puVar33 * fVar53 +
                  (float)puVar33[3] * fVar50) * fVar63);
    pfVar24[1] = fVar57 * (fVar56 * fVar77 + fVar53 * fVar67 + fVar50 * fVar66) +
                 fVar54 * (fVar56 * fVar91 + fVar53 * fVar90 + fVar50 * fVar92) +
                 fVar61 * (fVar56 * fVar78 + fVar53 * fVar68 + fVar50 * fVar71) +
                 fVar63 * (fVar56 * fVar69 + fVar53 * fVar51 + fVar50 * fVar70);
    pfVar24 = pfVar24 + 9;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
LAB_10a425b44:
  plVar10 = plVar10 + 6;
  if (plVar10 == plVar2) goto code_r0x00010a425b50;
  goto LAB_10a425584;
code_r0x00010a425b50:
  if (ppppppplStack_160 != (long *******)0x0) {
    ppppppplStack_158 = ppppppplStack_160;
    __ZdlPv();
  }
LAB_10a425b60:
  if (puStack_148 != (undefined8 *)0x0) {
    puStack_140 = puStack_148;
    __ZdlPv();
  }
LAB_10a42545c:
  param_1[1] = auStack_128;
  *param_1 = uStack_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  *(undefined4 *)(param_1 + 4) = uStack_110;
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_104;
  *(undefined8 *)((long)param_1 + 0x24) = uStack_10c;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_f4;
  *(undefined8 *)((long)param_1 + 0x34) = uStack_fc;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_ec;
  *(undefined4 *)(param_1 + 0xd) = uStack_c8;
  param_1[0xc] = uStack_d0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[9] = uStack_e8;
  if (plStack_1c8 != (long *)0x0) {
    (**(code **)(*plStack_1c8 + 8))();
  }
  if (plStack_1c0 != (long *)0x0) {
    (**(code **)(*plStack_1c0 + 8))();
  }
  if (plStack_1b8 != (long *)0x0) {
    (**(code **)(*plStack_1b8 + 8))();
  }
LAB_10a4249dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a425b94:
  FUN_10a00946c(&UNK_10f65770c);
LAB_10a425ba0:
  FUN_10a00946c(&UNK_10f657729);
LAB_10a425bac:
  FUN_10a00946c(&UNK_10f657744);
LAB_10a425bb8:
  FUN_10ab725fc();
LAB_10a425bbc:
  FUN_10a00946c(&UNK_10f6576e1);
LAB_10a425bd0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a425bd4);
  (*pcVar7)();
}



/* Entry: 10a425ccc; end: 10a425d3b;  */

undefined8 FUN_10a425ccc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x288);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x280);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return uVar6;
}



/* Entry: 10a425d3c; end: 10a425e27;  */

float FUN_10a425d3c(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar3 = fVar1 / param_2[1];
  if (ABS(param_2[1]) <= 1e-06) {
    fVar3 = 1.0;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      fVar4 = *param_3;
      fVar2 = fVar1;
      if (fVar4 < fVar3) {
        fVar2 = (fVar1 * fVar4) / fVar3;
      }
      if (fVar4 <= fVar3) {
        return fVar2;
      }
      return fVar1;
    }
    if (param_1 == 1) goto LAB_10a425da8;
    if (param_1 == 2) {
      return fVar1;
    }
  }
  else {
    if (param_1 == 3) {
      return (fVar1 * *param_3) / fVar3;
    }
    if (param_1 == 4) {
      return fVar1;
    }
    if (param_1 == 5) {
      return fVar1;
    }
  }
  FUN_10a00946c(&UNK_10f65775b);
LAB_10a425da8:
  fVar4 = *param_3;
  fVar2 = fVar1;
  if (fVar3 < fVar4) {
    fVar2 = (fVar1 * fVar4) / fVar3;
  }
  if (fVar4 < fVar3) {
    fVar2 = fVar1;
  }
  return fVar2;
}



/* Entry: 10a425e28; end: 10a425eff;  */

float FUN_10a425e28(int param_1,undefined8 param_2,float *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 0;
  fVar4 = *param_3 - *param_4;
  fVar5 = param_3[1] - param_4[1];
  fVar3 = fVar4;
  if (fVar4 < 0.0) {
    fVar3 = -fVar4;
  }
  if (fVar5 < 0.0) {
    fVar5 = -fVar5;
  }
  while ((fVar6 = fVar5, iVar2 == 1 || (fVar6 = fVar3, iVar2 != 2))) {
    bVar1 = fVar6 < 1e-06;
    while (iVar2 = iVar2 + 1, !bVar1) {
      if (iVar2 == 2) goto LAB_10a425ec0;
      bVar1 = false;
    }
  }
  fVar3 = 0.0;
  if (1e-06 <= ABS(param_3[2] - param_4[2])) {
LAB_10a425ec0:
    fVar5 = fVar4 * 0.5;
    if (param_1 == 0) {
      fVar5 = -(fVar4 * 0.5);
    }
    fVar3 = 0.0;
    if (param_1 != 1) {
      fVar3 = fVar5;
    }
  }
  return fVar3;
}



/* Entry: 10a425f00; end: 10a425f6b;  */

void FUN_10a425f00(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x300);
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (*plVar1 != 0) {
      return;
    }
    lVar2 = 0x140;
    __Znwm();
    FUN_10a3e7f00();
  }
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    func_0x00010a3f1eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a425f6c; end: 10a425f93;  */

void FUN_10a425f6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a3f1eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a425f94; end: 10a426097;  */

void FUN_10a425f94(undefined1 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((((*(long **)(param_2 + 0x2a0) == *(long **)(param_2 + 0x2a8)) ||
       (lVar3 = **(long **)(param_2 + 0x2a0), lVar3 == 0)) ||
      (*(long **)(lVar3 + 0x228) == *(long **)(lVar3 + 0x230))) ||
     (lVar3 = **(long **)(lVar3 + 0x228), lVar3 == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xff7fffff00000000;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0xff7fffffff7fffff;
  }
  else {
    lVar2 = lVar3;
    FUN_10a336d50();
    uVar4 = *(undefined4 *)(lVar3 + 0x228);
    cVar1 = *(char *)(lVar3 + 0x245);
    *param_1 = (char)lVar2;
    if (cVar1 != '\x01') {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 4) = uVar4;
    if (cVar1 == '\x02') {
      fVar6 = *(float *)(lVar3 + 0x240);
      fVar9 = (float)*(undefined8 *)(lVar3 + 0x238);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x238) >> 0x20);
      fVar7 = ((float)*(undefined8 *)(lVar3 + 0x22c) + fVar9) * 0.5;
      fVar8 = ((float)((ulong)*(undefined8 *)(lVar3 + 0x22c) >> 0x20) + fVar10) * 0.5;
      fVar5 = (*(float *)(lVar3 + 0x234) + fVar6) * 0.5;
      *(float *)(param_1 + 8) = fVar7;
      *(ulong *)(param_1 + 0x14) = CONCAT44(fVar10 - fVar8,fVar9 - fVar7);
      *(ulong *)(param_1 + 0xc) = CONCAT44(fVar5,fVar8);
      *(float *)(param_1 + 0x1c) = fVar6 - fVar5;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0xff7fffff00000000;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0xff7fffffff7fffff;
    }
  }
  return;
}



/* Entry: 10a426098; end: 10a42613b;  */

void FUN_10a426098(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(long *)(param_2[0x2e] + 0xa20) + 0x18) < 0x14d) {
    lVar1 = param_2[0x2f];
    if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar1);
    }
    uStack_68 = *(undefined8 *)(lVar1 + 200);
    uStack_70 = *(undefined8 *)(lVar1 + 0xc0);
    uStack_58 = *(undefined8 *)(lVar1 + 0xd8);
    uStack_60 = *(undefined8 *)(lVar1 + 0xd0);
    uStack_48 = *(undefined8 *)(lVar1 + 0xe8);
    uStack_50 = *(undefined8 *)(lVar1 + 0xe0);
    uStack_38 = *(undefined8 *)(lVar1 + 0xf8);
    uStack_40 = *(undefined8 *)(lVar1 + 0xf0);
  }
  else {
    func_0x00010a424420(&uStack_70,param_2);
  }
  (**(code **)(*param_2 + 0x198))(auStack_88,param_2);
  FUN_10a005448(param_1,auStack_88,&uStack_70);
  return;
}



/* Entry: 10a42613c; end: 10a4262db;  */

void FUN_10a42613c(float *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_38;
  float fStack_30;
  undefined8 uStack_2c;
  float fStack_24;
  
  if ((((*(long **)(param_2 + 0x2a0) != *(long **)(param_2 + 0x2a8)) &&
       (lVar2 = **(long **)(param_2 + 0x2a0), lVar2 != 0)) &&
      (*(long **)(lVar2 + 0x228) != *(long **)(lVar2 + 0x230))) &&
     (lVar2 = **(long **)(lVar2 + 0x228), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x245) == '\x02') {
      fVar3 = *(float *)(lVar2 + 0x240);
      fVar6 = (float)*(undefined8 *)(lVar2 + 0x238);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x238) >> 0x20);
      fVar4 = ((float)*(undefined8 *)(lVar2 + 0x22c) + fVar6) * 0.5;
      fVar5 = ((float)((ulong)*(undefined8 *)(lVar2 + 0x22c) >> 0x20) + fVar7) * 0.5;
      fVar8 = (*(float *)(lVar2 + 0x234) + fVar3) * 0.5;
      *param_1 = fVar4;
      *(ulong *)(param_1 + 3) = CONCAT44(fVar7 - fVar5,fVar6 - fVar4);
      *(ulong *)(param_1 + 1) = CONCAT44(fVar8,fVar5);
      param_1[5] = fVar3 - fVar8;
      return;
    }
    if (*(char *)(lVar2 + 0x245) == '\x01') {
      plVar1 = *(long **)(param_2 + 0x260);
      if (plVar1 != (long *)0x0) {
        FUN_10a347d04();
        if (plVar1 == (long *)0x0) {
          uStack_38 = 0;
          uStack_2c = 0xff7fffffff7fffff;
          fStack_30 = 0.0;
          fStack_24 = -3.4028235e+38;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(&uStack_38);
        }
        fVar8 = *(float *)(lVar2 + 0x228);
        *(undefined8 *)param_1 = uStack_38;
        param_1[2] = fStack_30;
        *(ulong *)(param_1 + 3) =
             CONCAT44(fVar8 + (float)((ulong)uStack_2c >> 0x20),fVar8 + (float)uStack_2c);
        param_1[5] = fVar8 + fStack_24;
        return;
      }
      goto LAB_10a4261f4;
    }
  }
  plVar1 = *(long **)(param_2 + 0x260);
  if ((plVar1 != (long *)0x0) && (FUN_10a347d04(), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a4261f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(param_1);
    return;
  }
LAB_10a4261f4:
  param_1[2] = 0.0;
  param_1[3] = -3.4028235e+38;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = -3.4028235e+38;
  param_1[5] = -3.4028235e+38;
  return;
}



/* Entry: 10a4262dc; end: 10a42639b;  */

void FUN_10a4262dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x278);
  uVar5 = *(undefined8 *)(param_2 + 0x270);
  param_1[1] = *(undefined8 *)(param_2 + 0x278);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a42639c; end: 10a426433;  */

void FUN_10a42639c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x298);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x290);
    param_1[1] = plVar4;
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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



/* Entry: 10a426434; end: 10a42646b;  */

void FUN_10a426434(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = uVar6;
  *(undefined8 *)(param_1 + 0x290) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a42646c; end: 10a4265bf;  */

void FUN_10a42646c(long *param_1,long *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_98;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *param_2;
  if (lVar9 == 0) {
    plVar5 = param_1 + 0x54;
    FUN_10a4265c0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010a426588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1);
      return;
    }
  }
  else {
    plStack_30 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    lStack_38 = lVar9;
    FUN_10a436ef0(&uStack_58,&lStack_38,&lStack_28,1);
    FUN_10a4212b8(param_1,&uStack_58);
    puStack_40 = &uStack_58;
    FUN_10a0d4a18(&puStack_40);
    plVar5 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar8 = plStack_30 + 1;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    (**(code **)(*param_1 + 0x208))();
    plVar5 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_10a447884();
  lVar9 = *plVar5;
  lVar6 = plVar5[1];
  while (lVar6 != lVar9) {
    lVar6 = lVar6 + -0x10;
    FUN_10a0617bc();
  }
  plVar5[1] = lVar9;
  uVar1 = uRam0000000113300f0a;
  uVar7 = 0;
  if ((*(ushort *)((long)plVar5 + (0xe8 - (ulong)uRam0000000113300f0a)) >> 8 & 1) == 0) {
    func_0x00010a1bd170();
    if ((uVar7 & 1) == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      ppuStack_98 = &PTR_DAT_110bc33a0;
      FUN_10a0dad0c((ulong)&uStack_f0 | 8,&ppuStack_98);
      plVar8 = (long *)((long)plVar5 + (0xb8 - (ulong)uRam0000000113300f0a));
      (**(code **)(*plVar8 + 0x18))();
      uVar4 = uRam0000000113300f0a;
      uVar1 = *(ushort *)((long)plVar5 + (0xe8 - (ulong)uRam0000000113300f0a));
      if ((int)plVar8 == 0) {
        if ((uVar1 >> 8 & 1) == 0) {
          uVar7 = (long)plVar5 + (0xb8 - (ulong)uRam0000000113300f0a);
          FUN_10a1bfe94(uVar7,&uStack_f0);
          if ((uVar7 & 1) == 0) {
            (**(code **)(*(long *)((long)plVar5 - (ulong)uRam0000000113300f0a) + 0xc0))
                      ((long *)((long)plVar5 - (ulong)uRam0000000113300f0a),&uStack_f0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (plVar8 != (long *)0x0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar1 >> 7 & 1) == 0) {
          *(undefined8 *)((long)plVar5 + (0xf8 - (ulong)uRam0000000113300f0a)) = uStack_f0;
          *(ushort *)((long)plVar5 + (0xe8 - (ulong)uVar4)) = uVar1 | 0x80;
        }
        FUN_10a1bd398((long)plVar5 + (0xf8 - (ulong)uVar4),&uStack_f0);
      }
    }
  }
  else if ((*(undefined ***)((long)plVar5 + (0xf0 - (ulong)uRam0000000113300f0a)) !=
            &PTR_DAT_110bc33a0) && (plVar8 = plVar5, FUN_10a1bd5e0(), plVar8 != (long *)0x0)) {
    FUN_10a1bd7d8();
    *(undefined ***)((long)plVar5 + (0xf0 - (ulong)uVar1)) = &PTR_DAT_110bc33a0;
  }
  return;
}



/* Entry: 10a4265c0; end: 10a42663b;  */

void FUN_10a4265c0(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  undefined **ppuStack_38;
  
  FUN_10a447884();
  lVar1 = *param_1;
  lVar4 = param_1[1];
  while (lVar4 != lVar1) {
    lVar4 = lVar4 + -0x10;
    FUN_10a0617bc();
  }
  param_1[1] = lVar1;
  uVar2 = uRam0000000113300f0a;
  uVar5 = 0;
  if ((*(ushort *)((long)param_1 + (0xe8 - (ulong)uRam0000000113300f0a)) >> 8 & 1) == 0) {
    func_0x00010a1bd170();
    if ((uVar5 & 1) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      ppuStack_38 = &PTR_DAT_110bc33a0;
      FUN_10a0dad0c((ulong)&uStack_90 | 8,&ppuStack_38);
      plVar6 = (long *)((long)param_1 + (0xb8 - (ulong)uRam0000000113300f0a));
      (**(code **)(*plVar6 + 0x18))();
      uVar3 = uRam0000000113300f0a;
      uVar2 = *(ushort *)((long)param_1 + (0xe8 - (ulong)uRam0000000113300f0a));
      if ((int)plVar6 == 0) {
        if ((uVar2 >> 8 & 1) == 0) {
          uVar5 = (long)param_1 + (0xb8 - (ulong)uRam0000000113300f0a);
          FUN_10a1bfe94(uVar5,&uStack_90);
          if ((uVar5 & 1) == 0) {
            (**(code **)(*(long *)((long)param_1 - (ulong)uRam0000000113300f0a) + 0xc0))
                      ((long *)((long)param_1 - (ulong)uRam0000000113300f0a),&uStack_90);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (plVar6 != (long *)0x0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar2 >> 7 & 1) == 0) {
          *(undefined8 *)((long)param_1 + (0xf8 - (ulong)uRam0000000113300f0a)) = uStack_90;
          *(ushort *)((long)param_1 + (0xe8 - (ulong)uVar3)) = uVar2 | 0x80;
        }
        FUN_10a1bd398((long)param_1 + (0xf8 - (ulong)uVar3),&uStack_90);
      }
    }
  }
  else if ((*(undefined ***)((long)param_1 + (0xf0 - (ulong)uRam0000000113300f0a)) !=
            &PTR_DAT_110bc33a0) && (plVar6 = param_1, FUN_10a1bd5e0(), plVar6 != (long *)0x0)) {
    FUN_10a1bd7d8();
    *(undefined ***)((long)param_1 + (0xf0 - (ulong)uVar2)) = &PTR_DAT_110bc33a0;
  }
  return;
}



/* Entry: 10a42663c; end: 10a42671b;  */

void FUN_10a42663c(long param_1,ulong param_2,long param_3)

{
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong *puStack_28;
  
  uStack_38 = param_2;
  if (param_2 < (ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 4)) {
    puStack_28 = &uStack_38;
    param_1 = param_1 + 0x2b8;
    FUN_10a4484d0(param_1,&uStack_38,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    func_0x00010a015c50(param_1 + 0x18,param_3);
    FUN_10a436f8c(param_1 + 0x28,param_3 + 0x10);
    func_0x00010a437048(param_1 + 0x38,param_3 + 0x20);
    FUN_10a437294(param_1 + 0x78,param_3 + 0x60);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 0x88);
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f6575d6,&UNK_10f657846,0x42f,&UNK_10f6578d0,in_x6,in_x7,param_2);
  }
  return;
}



/* Entry: 10a42671c; end: 10a42678b;  */

undefined8 FUN_10a42671c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x250);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x248);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return uVar6;
}



/* Entry: 10a42678c; end: 10a426823;  */

long FUN_10a42678c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x2f0) == 0) {
    FUN_10a447fd4(auStack_38,&uStack_21);
    FUN_10a4229c8(param_1 + 0x2f0,auStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return param_1 + 0x2f0;
}



/* Entry: 10a426824; end: 10a4268a7;  */

void FUN_10a426824(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a38b704(param_1 + 0x260,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a4268a8; end: 10a42693b;  */

undefined1  [16] FUN_10a4268a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f658646;
  return auVar1;
}



/* Entry: 10a42693c; end: 10a426a83;  */

void FUN_10a42693c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f657910,6);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f656650;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a426a84(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f657917;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  FUN_10a448a0c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f657925;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  FUN_10a448dac(uVar1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f657932;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  FUN_10a448f74(uVar1,&puStack_98);
  FUN_10a44913c(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a426a84; end: 10a426b5b;  */

/* WARNING: Removing unreachable block (ram,0x00010a426b1c) */

undefined1  [16] FUN_10a426a84(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f658646,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a448910(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a426b5c; end: 10a426ec3;  */

void FUN_10a426b5c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "CubemapFace";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  puStack_70 = &UNK_10f656650;
  uStack_68 = 0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PositiveX";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NegativeX";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PositiveY";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NegativeY";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PositiveZ";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NegativeZ";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Left";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Right";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Top";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Bottom";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Front";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Back";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xc2;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a426ec4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a426ec4; end: 10a426f67;  */

undefined8 * FUN_10a426ec4(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a426f68);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a426f68; end: 10a426f77;  */

undefined8 * FUN_10a426f68(long param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
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
  return (undefined8 *)(param_1 + 0x38);
}



/* Entry: 10a426f78; end: 10a427117;  */

void FUN_10a426f78(long param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a4491f8;
  ppuStack_70 = &PTR_DAT_110bd9b10;
  lStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110bd5c58,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10a449228;
  ppuStack_b0 = &PTR_DAT_110bd9b28;
  lStack_a8 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110bd5c78,&uStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  uStack_f8 = 0x10a449258;
  ppuStack_f0 = &PTR_DAT_110bd9b40;
  lStack_e8 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110bd5c98,&uStack_f8,0);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd5cb8,0);
  *(int *)(param_1 + 0x58) = (int)plVar1;
  ppuVar2 = &PTR_DAT_110bd5cd8;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd5cd8,0);
  *(int *)(param_1 + 0x5c) = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  __Unwind_Resume();
  FUN_10a02e188(ppuVar2,&PTR_DAT_110bd5c58,param_2 + 5,&UNK_10f633e9d,0xd);
  FUN_10a02e188(ppuVar2,&PTR_DAT_110bd5c78,param_2 + 7,&UNK_10f633e9d,0xd);
  FUN_10a02e188(ppuVar2,&PTR_DAT_110bd5c98,param_2 + 9,&UNK_10f633e9d,0xd);
  (**(code **)(*ppuVar2 + 0x50))(ppuVar2,&PTR_DAT_110bd5cb8,(int)param_2[0xb]);
                    /* WARNING: Could not recover jumptable at 0x00010a4271cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar2 + 0x50))(ppuVar2,&PTR_DAT_110bd5cd8,*(undefined4 *)((long)param_2 + 0x5c));
  return;
}



/* Entry: 10a427118; end: 10a4271cf;  */

void FUN_10a427118(long param_1,long *param_2)

{
  FUN_10a02e188(param_2,&PTR_DAT_110bd5c58,param_1 + 0x28,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bd5c78,param_1 + 0x38,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bd5c98,param_1 + 0x48,&UNK_10f633e9d,0xd);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bd5cb8,*(undefined4 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010a4271cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bd5cd8,*(undefined4 *)(param_1 + 0x5c));
  return;
}



/* Entry: 10a4271d0; end: 10a4272b3;  */

undefined8 * FUN_10a4271d0(long param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
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
  return (undefined8 *)(param_1 + 0x28);
}



/* Entry: 10a4272b4; end: 10a427573;  */

void FUN_10a4272b4(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65869f,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd87f8;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd87f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a449288,FUN_10a449358);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6528fb,FUN_10a449518,FUN_10a4495d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652901,FUN_10a4496b4,FUN_10a449770);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3a690c,FUN_10a449850,FUN_10a449910);
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
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65869f,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a427558);
  (*pcVar6)();
}



/* Entry: 10a427574; end: 10a427727;  */

void FUN_10a427574(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x500) == 0) {
    FUN_10a199aa4(&uStack_40,&uStack_48);
    func_0x00010a2e19d8(param_1 + 0x500,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a199b74(&uStack_40,&uStack_21,&uStack_48,param_1 + 0x500);
    func_0x00010a193034(param_1 + 0x4f0,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2e1a3c(&uStack_40,&uStack_48,param_1 + 0x4f0);
    plStack_58 = plStack_38;
    uStack_60 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a427728; end: 10a42775b;  */

void FUN_10a427728(float param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  ulong unaff_d8;
  float fVar9;
  ulong unaff_d9;
  
  while( true ) {
    puVar4 = param_2;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    FUN_10a66ac20();
    puVar4[0x218] = 4;
    FUN_10a427574(puVar4);
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = *(long *)(*(long *)(puVar4 + 0x168) + 0x140);
    func_0x00010a0d8ae0(unaff_x20);
    fVar8 = *(float *)(unaff_x20 + 0x48);
    unaff_d8 = (ulong)(uint)fVar8;
    fVar9 = *(float *)(unaff_x20 + 0x4c);
    unaff_d9 = (ulong)(uint)fVar9;
    func_0x00010a4278c4(puVar4);
    lVar6 = *(long *)(puVar4 + 0x500);
    bVar3 = false;
    if ((*(float *)(lVar6 + 0x218) == fVar8) &&
       (bVar3 = false, !NAN(*(float *)(lVar6 + 0x21c)) && !NAN(fVar9))) {
      bVar3 = *(float *)(lVar6 + 0x21c) == fVar9;
    }
    if (!bVar3) {
      *(float *)(lVar6 + 0x218) = fVar8;
      *(float *)(lVar6 + 0x21c) = fVar9;
      *(undefined1 *)(lVar6 + 0x1ec) = 1;
      lVar6 = *(long *)(puVar4 + 0x500);
    }
    if (*(float *)(lVar6 + 0x210) == param_1) goto LAB_10a4277d8;
    if (0.0 < param_1) break;
    puVar5 = &UNK_10f660f37;
    unaff_x30 = FUN_10a427830;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_2 = puVar5 + -0x68;
    unaff_x19 = puVar4;
  }
  *(float *)(lVar6 + 0x210) = param_1;
  *(undefined1 *)(lVar6 + 0x1ec) = 1;
LAB_10a4277d8:
  lVar6 = *(long *)(puVar4 + 0x4f0);
  plVar7 = *(long **)(lVar6 + 0xd8);
  if (*(char *)((long)plVar7 + 0x1ec) != '\x01') {
    return;
  }
  (**(code **)(*plVar7 + 0x40))(plVar7);
  *(undefined1 *)((long)plVar7 + 0x1ec) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(byte *)(lVar6 + 0xd0) = *(byte *)(lVar6 + 0xd0) | 1;
  if ((*(long *)(lVar6 + 0xc0) != 0) &&
     ((*(char *)(lVar6 + 0xb9) == '\0' || (*(char *)(lVar6 + 0xba) == '\0')))) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar7 = *(long **)(lVar6 + 200);
    *(long *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a42775c; end: 10a42782f;  */

void FUN_10a42775c(float param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar8;
  ulong unaff_d8;
  float fVar9;
  ulong unaff_d9;
  
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar6 = *(long *)(*(long *)(param_2 + 0x168) + 0x140);
    func_0x00010a0d8ae0(lVar6);
    fVar8 = *(float *)(lVar6 + 0x48);
    unaff_d8 = (ulong)(uint)fVar8;
    fVar9 = *(float *)(lVar6 + 0x4c);
    unaff_d9 = (ulong)(uint)fVar9;
    func_0x00010a4278c4(param_2);
    lVar5 = *(long *)(param_2 + 0x500);
    bVar3 = false;
    if ((*(float *)(lVar5 + 0x218) == fVar8) &&
       (bVar3 = false, !NAN(*(float *)(lVar5 + 0x21c)) && !NAN(fVar9))) {
      bVar3 = *(float *)(lVar5 + 0x21c) == fVar9;
    }
    if (!bVar3) {
      *(float *)(lVar5 + 0x218) = fVar8;
      *(float *)(lVar5 + 0x21c) = fVar9;
      *(undefined1 *)(lVar5 + 0x1ec) = 1;
      lVar5 = *(long *)(param_2 + 0x500);
    }
    if (*(float *)(lVar5 + 0x210) == param_1) goto LAB_10a4277d8;
    if (0.0 < param_1) break;
    puVar4 = &UNK_10f660f37;
    FUN_10a00946c();
    *(long *)((long)register0x00000008 + -0x50) = lVar6;
    *(undefined **)((long)register0x00000008 + -0x48) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10a427830;
    FUN_10a66ac20();
    puVar4[0x1b0] = 4;
    FUN_10a427574(puVar4 + -0x68);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_2 = puVar4 + -0x68;
  }
  *(float *)(lVar5 + 0x210) = param_1;
  *(undefined1 *)(lVar5 + 0x1ec) = 1;
LAB_10a4277d8:
  lVar5 = *(long *)(param_2 + 0x4f0);
  plVar7 = *(long **)(lVar5 + 0xd8);
  if (*(char *)((long)plVar7 + 0x1ec) != '\x01') {
    return;
  }
  (**(code **)(*plVar7 + 0x40))(plVar7);
  *(undefined1 *)((long)plVar7 + 0x1ec) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(byte *)(lVar5 + 0xd0) = *(byte *)(lVar5 + 0xd0) | 1;
  if ((*(long *)(lVar5 + 0xc0) != 0) &&
     ((*(char *)(lVar5 + 0xb9) == '\0' || (*(char *)(lVar5 + 0xba) == '\0')))) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar7 = *(long **)(lVar5 + 200);
    *(long *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a427830; end: 10a427837;  */

void FUN_10a427830(float param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar7;
  ulong unaff_d8;
  float fVar8;
  ulong unaff_d9;
  
  while( true ) {
    puVar4 = param_2 + -0x68;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    FUN_10a66ac20();
    param_2[0x1b0] = 4;
    FUN_10a427574(puVar4);
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = *(long *)(*(long *)(param_2 + 0x100) + 0x140);
    func_0x00010a0d8ae0(unaff_x20);
    fVar7 = *(float *)(unaff_x20 + 0x48);
    unaff_d8 = (ulong)(uint)fVar7;
    fVar8 = *(float *)(unaff_x20 + 0x4c);
    unaff_d9 = (ulong)(uint)fVar8;
    func_0x00010a4278c4(puVar4);
    lVar5 = *(long *)(param_2 + 0x498);
    bVar3 = false;
    if ((*(float *)(lVar5 + 0x218) == fVar7) &&
       (bVar3 = false, !NAN(*(float *)(lVar5 + 0x21c)) && !NAN(fVar8))) {
      bVar3 = *(float *)(lVar5 + 0x21c) == fVar8;
    }
    if (!bVar3) {
      *(float *)(lVar5 + 0x218) = fVar7;
      *(float *)(lVar5 + 0x21c) = fVar8;
      *(undefined1 *)(lVar5 + 0x1ec) = 1;
      lVar5 = *(long *)(param_2 + 0x498);
    }
    if (*(float *)(lVar5 + 0x210) == param_1) goto LAB_10a4277d8;
    if (0.0 < param_1) break;
    param_2 = &UNK_10f660f37;
    unaff_x30 = FUN_10a427830;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = puVar4;
  }
  *(float *)(lVar5 + 0x210) = param_1;
  *(undefined1 *)(lVar5 + 0x1ec) = 1;
LAB_10a4277d8:
  lVar5 = *(long *)(param_2 + 0x488);
  plVar6 = *(long **)(lVar5 + 0xd8);
  if (*(char *)((long)plVar6 + 0x1ec) != '\x01') {
    return;
  }
  (**(code **)(*plVar6 + 0x40))(plVar6);
  *(undefined1 *)((long)plVar6 + 0x1ec) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(byte *)(lVar5 + 0xd0) = *(byte *)(lVar5 + 0xd0) | 1;
  if ((*(long *)(lVar5 + 0xc0) != 0) &&
     ((*(char *)(lVar5 + 0xb9) == '\0' || (*(char *)(lVar5 + 0xba) == '\0')))) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar6 = *(long **)(lVar5 + 200);
    *(long *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a427838; end: 10a42791b;  */

void FUN_10a427838(long param_1,long *param_2)

{
  FUN_10a2d5884();
                    /* WARNING: Could not recover jumptable at 0x00010a427870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bd6140,*(undefined8 *)(param_1 + 0x500));
  return;
}



/* Entry: 10a42791c; end: 10a427cb7;  */

void FUN_10a42791c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar14 = param_4 + 0x88;
    func_0x00010a35bf90(lVar14,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar13 = &lStack_60;
    if (lVar14 != 0) {
      puVar4 = (undefined8 *)(lVar14 + 0x28);
      plVar13 = (long *)(lVar14 + 0x20);
    }
    uVar12 = *puVar4;
    plVar13 = (long *)*plVar13;
  }
  lVar14 = param_2[0x2e];
  FUN_10a3dd220(lVar14);
  FUN_10a4499f0(lVar14,plVar13,uVar12);
  plVar13 = (long *)0x28;
  __Znwm();
  plVar8 = plVar13 + 1;
  *plVar8 = 0;
  *plVar13 = (long)&PTR_FUN_110bd9b68;
  plVar13[2] = 0;
  plVar13[3] = lVar14;
  plVar13[4] = (long)FUN_10a3df8cc;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
    }
    else {
      if (*(long *)(*(long *)(lVar14 + 0x30) + 8) != -1) goto LAB_10a427a88;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
LAB_10a427a88:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar14 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar14 + 0x180) & 0xfffc;
  *(ushort *)(lVar14 + 0x180) = uVar3 | *(ushort *)(lVar14 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar14 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_60 = lVar14;
  plStack_58 = plVar13;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar14 + 0x20c) = 0;
  *(int *)(lVar14 + 0x210) = (int)plVar8;
  FUN_10a2d597c(param_2,lVar14,param_4);
  FUN_10a427574(lVar14);
  lVar10 = *(long *)(lVar14 + 0x500);
  lVar11 = param_2[0xa0];
  if (*(int *)(lVar10 + 0x1fc) != *(int *)(lVar11 + 0x1fc)) {
    if (*(int *)(lVar10 + 0x1fc) < 1) {
      puVar9 = &UNK_10f660f7a;
      goto LAB_10a427c60;
    }
    *(int *)(lVar10 + 0x1fc) = *(int *)(lVar11 + 0x1fc);
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
  }
  if (*(int *)(lVar10 + 0x1f8) != *(int *)(lVar11 + 0x1f8)) {
    if (*(int *)(lVar10 + 0x1f8) < 1) {
      puVar9 = &UNK_10f660f58;
LAB_10a427c60:
      FUN_10a00946c(puVar9);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a427c94);
      (*pcVar6)();
    }
    *(int *)(lVar10 + 0x1f8) = *(int *)(lVar11 + 0x1f8);
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
  }
  if (*(char *)(lVar10 + 500) != *(char *)(lVar11 + 500)) {
    *(char *)(lVar10 + 500) = *(char *)(lVar11 + 500);
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
  }
  fVar15 = *(float *)(lVar11 + 0x204);
  bVar7 = false;
  if ((*(float *)(lVar10 + 0x200) == *(float *)(lVar11 + 0x200)) &&
     (bVar7 = false, !NAN(*(float *)(lVar10 + 0x204)) && !NAN(fVar15))) {
    bVar7 = *(float *)(lVar10 + 0x204) == fVar15;
  }
  if (!bVar7) {
    *(float *)(lVar10 + 0x200) = *(float *)(lVar11 + 0x200);
    *(float *)(lVar10 + 0x204) = fVar15;
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
    lVar10 = *(long *)(lVar14 + 0x500);
    lVar11 = param_2[0xa0];
  }
  if (*(char *)(lVar10 + 0x1f0) != *(char *)(lVar11 + 0x1f0)) {
    *(char *)(lVar10 + 0x1f0) = *(char *)(lVar11 + 0x1f0);
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
  }
  if (*(char *)(lVar10 + 0x1f1) != *(char *)(lVar11 + 0x1f1)) {
    *(char *)(lVar10 + 0x1f1) = *(char *)(lVar11 + 0x1f1);
    *(undefined1 *)(lVar10 + 0x1ec) = 1;
  }
  *param_1 = lVar14;
  param_1[1] = (long)plVar13;
  return;
}



/* Entry: 10a427cb8; end: 10a427d83;  */

undefined1  [16] FUN_10a427cb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f6586c9;
  return auVar1;
}



/* Entry: 10a427d84; end: 10a428133;  */

void FUN_10a427d84(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6586c9,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9db8;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd9db8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f651dc4,FUN_10a449b84,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f657986,FUN_10a449d34,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f657994,FUN_10a449e48,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f6579a4,FUN_10a449fb0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f6579b2,FUN_10a44a120,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a428114;
    FUN_10a054dac(param_1,&UNK_10f6579c3,FUN_10a44a1e0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651dec,FUN_10a44a1e0,FUN_10a44a298);
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
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6586c9,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a428114:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a428118);
  (*pcVar6)();
}



/* Entry: 10a428134; end: 10a4281eb;  */

void FUN_10a428134(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x4c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x4f) = 0x100;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  FUN_10a3c575c(param_1,&PTR_PTR_110bd6448,param_2,param_3);
  *param_1 = &PTR_DAT_110bd6178;
  param_1[2] = &PTR_FUN_110bd6290;
  param_1[7] = &PTR_DAT_110bd62e8;
  param_1[0xd] = &PTR_DAT_110bd6308;
  param_1[0x4c] = &PTR_DAT_110bd6408;
  param_1[0x16] = &PTR_DAT_110bd6378;
  param_1[0x17] = &PTR_FUN_110bd63a8;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3e] = &PTR_DAT_110bd6470;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  return;
}



/* Entry: 10a4281ec; end: 10a4281f3;  */

void FUN_10a4281ec(void)

{
  return;
}



/* Entry: 10a4281f4; end: 10a428273;  */

void FUN_10a4281f4(long param_1,long *param_2)

{
  func_0x00010a3c7a18();
  *(float *)(param_1 + 0x22c) =
       (float)*(double *)(*(long *)(*(long *)(param_1 + 0x170) + 0x850) + 8);
                    /* WARNING: Could not recover jumptable at 0x00010a428238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1e0))(param_2,param_1 + 0x1f0);
  return;
}



/* Entry: 10a428274; end: 10a428453;  */

void FUN_10a428274(float param_1,float param_2,long param_3,ulong *param_4)

{
  long lVar1;
  float fVar2;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  float fStack_58;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  FUN_10a0d09b4(&uStack_a0);
  lVar1 = param_3 + 0x10;
  func_0x00010a44a4d0(lVar1,CONCAT44(uStack_84,fStack_88));
  if ((long)uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lVar1 == 0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_70,*param_4,param_4[1]);
    }
    else {
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
      uStack_60 = param_4[2];
    }
    fStack_58 = param_1;
    if ((long)uStack_60 < 0) {
      func_0x000107c3192c(&uStack_a0,uStack_70,uStack_68);
    }
    else {
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
    }
    uStack_7c = 0x7f7fffff;
    fStack_88 = fStack_58;
    fStack_80 = param_2;
    FUN_10a0d09b4(auStack_c0,param_4);
    param_3 = param_3 + 0x10;
    puStack_48 = (undefined1 *)auStack_c0;
    FUN_10a44a73c(param_3,auStack_c0,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
    if (*(char *)(param_3 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_3 + 0x30));
    }
    *(ulong *)(param_3 + 0x38) = uStack_98;
    *(ulong *)(param_3 + 0x30) = uStack_a0;
    *(ulong *)(param_3 + 0x40) = uStack_90;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    *(float *)(param_3 + 0x48) = fStack_88;
    *(ulong *)(param_3 + 0x50) = CONCAT44(uStack_7c,fStack_80);
    if ((cStack_a9 < '\0') && (__ZdlPv(auStack_c0[0]), (long)uStack_90 < 0)) {
      __ZdlPv(uStack_a0);
    }
    if ((long)uStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  else if (*(float *)(lVar1 + 0x48) != param_1) {
    *(float *)(lVar1 + 0x48) = param_1;
    fVar2 = *(float *)(lVar1 + 0x50);
    *(float *)(lVar1 + 0x50) = param_2;
    *(float *)(lVar1 + 0x54) = param_2 - fVar2;
  }
  return;
}


