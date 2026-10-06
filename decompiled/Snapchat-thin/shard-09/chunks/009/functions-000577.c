/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107295f10; end: 107295f83;  */

void FUN_107295f10(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (param_1 != param_2) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d388();
    func_0x00010726b230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295f84; end: 107295fe7;  */

void FUN_107295f84(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_10726c9e8();
  if ((uVar3 & 1) != 0) {
    FUN_107295fe8(param_2[1] + (long)plVar2 * 0xa8,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0xa8;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107295fe8; end: 10729601b;  */

void FUN_107295fe8(long param_1)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10729601c; end: 10729604b;  */

void FUN_10729601c(void)

{
  func_0x00010729e5f0();
  FUN_10729604c();
  func_0x00010729ee18();
  func_0x00010729ea1c();
  FUN_10729641c();
  return;
}



/* Entry: 10729604c; end: 10729608f;  */

void FUN_10729604c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  FUN_10726b2ac();
  if (1 < (long)puVar1) {
    FUN_107296090(auStack_30,*param_1);
    func_0x00010729ea8c();
    FUN_10726d388();
    func_0x00010726b230(auStack_30);
  }
  return;
}



/* Entry: 107296090; end: 1072960af;  */

void FUN_107296090(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072960b0(&uStack_11,param_1);
  return;
}



/* Entry: 1072960b0; end: 10729611f;  */

undefined8 * FUN_1072960b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010729e310();
  uStack_28 = extraout_x8;
  FUN_10726ae20(auStack_40,1);
  FUN_107296120(puStack_30,param_2);
  func_0x00010729ef48();
  FUN_10726b254();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010729e878();
  FUN_10726b254();
  puVar1 = puStack_30;
  func_0x00010729e514();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109967c0;
  puVar1[1] = 0;
  FUN_107296160(puVar1 + 3);
  return puVar1;
}



/* Entry: 107296120; end: 10729615f;  */

undefined8 * FUN_107296120(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109967c0;
  param_1[1] = 0;
  FUN_107296160(param_1 + 3);
  return param_1;
}



/* Entry: 107296160; end: 107296193;  */

void FUN_107296160(long param_1)

{
  func_0x000107296178();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107296194; end: 107296267;  */

void FUN_107296194(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x21;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010729eacc();
  uVar1 = 0;
  FUN_107296268();
  lVar2 = *(long *)(unaff_x21 + 0x18);
  if (lVar2 != 0) {
    func_0x00010729eb1c();
    FUN_1072962ac();
    FUN_107296314();
    lStack_40 = unaff_x21;
    while (lStack_40 != 0) {
      uStack_38 = uVar1;
      func_0x000104c2fe38(uVar1);
      func_0x00010729e9ac();
      func_0x00010ae6c8b4();
      func_0x00010729eb80((uint)uVar1 & 0x7f);
      func_0x000107296300();
      FUN_1072963cc(&lStack_40);
      uVar1 = uStack_38;
    }
    unaff_x19[3] = lVar2;
    *(long *)(*unaff_x19 + -8) = *(long *)(*unaff_x19 + -8) - lVar2;
  }
  return;
}



/* Entry: 107296268; end: 1072962ab;  */

undefined8 * FUN_107296268(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00010729f1bc();
  *puVar1 = extraout_x8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    FUN_10726cb7c(param_1);
  }
  return param_1;
}



/* Entry: 1072962ac; end: 107296313;  */

void FUN_1072962ac(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar1 = 8;
  }
  else {
    lVar1 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  func_0x000107274f98(param_1,uVar2);
  FUN_10726cb7c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726cbb4();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 107296314; end: 10729633b;  */

undefined1  [16] FUN_107296314(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10729633c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10729633c; end: 107296393;  */

void FUN_10729633c(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0xa8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107296394; end: 1072963cb;  */

void FUN_107296394(long param_1)

{
  long unaff_x20;
  
  func_0x00010729e618();
  func_0x000104c2fe00();
  FUN_1072786d8(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1072963cc; end: 1072963ff;  */

long * FUN_1072963cc(long *param_1)

{
  param_1[1] = param_1[1] + 0xa8;
  *param_1 = *param_1 + 1;
  FUN_10729633c();
  return param_1;
}



/* Entry: 107296400; end: 10729641b;  */

void FUN_107296400(void)

{
  func_0x00010729ea1c();
  FUN_10729641c();
  return;
}



/* Entry: 10729641c; end: 107296423;  */

void FUN_10729641c(undefined8 param_1,long param_2)

{
  func_0x00010729e66c(param_1,param_2,param_2 + 0x38);
  FUN_107296440();
  return;
}



/* Entry: 107296424; end: 10729643f;  */

void FUN_107296424(void)

{
  func_0x00010729e66c();
  FUN_107296440();
  return;
}



/* Entry: 107296440; end: 10729647b;  */

void FUN_107296440(undefined8 param_1,ulong param_2)

{
  func_0x00010729f100();
  func_0x00010729e650();
  FUN_10726c9e8();
  if ((param_2 & 1) != 0) {
    func_0x00010729e8ec();
    FUN_10729647c();
  }
  func_0x00010729ebfc();
  return;
}



/* Entry: 10729647c; end: 1072964a3;  */

void FUN_10729647c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x00010729ee58(*(long *)(param_1 + 8) + param_2 * 0xa8,*param_4,*param_5);
  FUN_1072964c0();
  return;
}



/* Entry: 1072964a4; end: 1072964bf;  */

void FUN_1072964a4(void)

{
  func_0x00010729ee58();
  FUN_1072964c0();
  return;
}



/* Entry: 1072964c0; end: 107296573;  */

void FUN_1072964c0(long param_1)

{
  long *unaff_x19;
  
  func_0x00010729ed80();
  FUN_10726cc04(param_1 + 0x40,*unaff_x19 + 8);
  return;
}



/* Entry: 107296574; end: 10729659f;  */

void FUN_107296574(undefined8 param_1,long param_2)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined4 *)(param_2 + 0xa0) = 2;
  return;
}



/* Entry: 1072965a0; end: 1072965c3;  */

undefined8 FUN_1072965a0(undefined8 param_1)

{
  FUN_1072965c4(param_1);
  return param_1;
}



/* Entry: 1072965c4; end: 107296623;  */

void FUN_1072965c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [32];
  
  FUN_107296624(auStack_40,param_3,param_4,0,&uStack_41,&uStack_42,&uStack_43);
  FUN_107279014(param_1,param_2,auStack_40);
  FUN_10726ae88(auStack_40);
  return;
}



/* Entry: 107296624; end: 10729662f;  */

void FUN_107296624(undefined8 param_1,long param_2,long param_3)

{
  func_0x00010729e8dc(param_1,param_2,param_2 + param_3 * 0xa8);
  FUN_107296268();
  FUN_1072966b0();
  return;
}



/* Entry: 107296630; end: 1072966af;  */

void FUN_107296630(void)

{
  func_0x00010729e8dc();
  FUN_107296268();
  FUN_1072966b0();
  return;
}



/* Entry: 1072966b0; end: 1072966f7;  */

void FUN_1072966b0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000100601028();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xa8) {
    func_0x00010729eb34(auStack_48);
    FUN_1072966f8();
  }
  return;
}



/* Entry: 1072966f8; end: 107296713;  */

void FUN_1072966f8(void)

{
  func_0x00010729ea1c();
  FUN_107296714();
  return;
}



/* Entry: 107296714; end: 10729671b;  */

void FUN_107296714(undefined8 param_1,long param_2)

{
  func_0x00010729e66c(param_1,param_2,param_2 + 0x38);
  FUN_107296738();
  return;
}



/* Entry: 10729671c; end: 107296737;  */

void FUN_10729671c(void)

{
  func_0x00010729e66c();
  FUN_107296738();
  return;
}



/* Entry: 107296738; end: 107296773;  */

void FUN_107296738(undefined8 param_1,ulong param_2)

{
  func_0x00010729f100();
  func_0x00010729e650();
  FUN_10726c9e8();
  if ((param_2 & 1) != 0) {
    func_0x00010729e8ec();
    FUN_107296774();
  }
  func_0x00010729ebfc();
  return;
}



/* Entry: 107296774; end: 10729679b;  */

void FUN_107296774(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x00010729ee58(*(long *)(param_1 + 8) + param_2 * 0xa8,*param_4,*param_5);
  FUN_1072967b8();
  return;
}



/* Entry: 10729679c; end: 1072967b7;  */

void FUN_10729679c(void)

{
  func_0x00010729ee58();
  FUN_1072967b8();
  return;
}



/* Entry: 1072967b8; end: 1072967fb;  */

long FUN_1072967b8(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  FUN_1072786d8(lVar1 + 0x40,*param_3 + 8);
  return param_1;
}



/* Entry: 1072967fc; end: 107296a73;  */

void FUN_1072967fc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar7;
  long extraout_x8_01;
  long *unaff_x21;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_58;
  
  puVar5 = &uStack_1e0;
  puVar4 = param_1;
  func_0x00010729e310();
  iVar2 = *(int *)(param_2 + 0x1c) + -1;
  uVar3 = iVar2 == 7;
  uStack_58 = extraout_x8;
  switch(iVar2) {
  case 0:
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x10);
    uVar6 = 1;
    goto code_r0x000107296880;
  case 1:
    func_0x00010729ea38(*(undefined8 *)(param_2 + 0x10),&uStack_100);
    FUN_107277488(param_1,&uStack_100);
    puVar4 = &uStack_100;
    func_0x000104c2f714();
    break;
  case 2:
    dVar10 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x10));
    goto code_r0x000107296878;
  case 3:
    dVar10 = (double)*(long *)(param_2 + 0x10);
    goto code_r0x000107296878;
  case 4:
    dVar10 = *(double *)(param_2 + 0x10);
code_r0x000107296878:
    param_1[1] = dVar10;
    uVar6 = 2;
code_r0x000107296880:
    *(undefined4 *)(param_1 + 0xd) = uVar6;
    break;
  case 5:
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    func_0x00010729ed34();
    for (lVar8 = extraout_x8_01 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      FUN_1072967fc(&uStack_100,*unaff_x21);
      FUN_107277668(&uStack_1a8,&uStack_100);
      func_0x00010729e9b8();
      unaff_x21 = unaff_x21 + 1;
    }
    FUN_107277aa4(&uStack_100,&uStack_1a8);
    param_1[2] = uStack_f8;
    param_1[1] = uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    *(undefined4 *)(param_1 + 0xd) = 8;
    FUN_10726b188(&uStack_100);
    puVar4 = &uStack_1a8;
    FUN_107277d70();
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xd) = 0;
    break;
  case 7:
    func_0x00010729f1bc();
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    func_0x00010729ed34();
    for (lVar8 = extraout_x8_00 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      lVar9 = *unaff_x21;
      func_0x00010729ea38(*(undefined8 *)(lVar9 + 0x18),auStack_138);
      ppuVar7 = *(undefined ***)(lVar9 + 0x20);
      uVar3 = ppuVar7 == (undefined **)0x0;
      ppuVar1 = &PTR_PTR_113234600;
      if (!(bool)uVar3) {
        ppuVar1 = ppuVar7;
      }
      FUN_1072967fc(&uStack_1a8,ppuVar1);
      param_3 = &uStack_1a8;
      FUN_107277ec4(&uStack_100,auStack_138);
      FUN_107278574(auStack_1c0,&uStack_1e0,&uStack_100);
      func_0x00010726aef4(&uStack_100);
      func_0x00010729e9b8();
      func_0x000104c2f714(auStack_138);
      unaff_x21 = unaff_x21 + 1;
    }
    FUN_107278fec(&uStack_100,&uStack_1e0);
    param_1[2] = uStack_f8;
    param_1[1] = uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    *(undefined4 *)(param_1 + 0xd) = 9;
    FUN_10726b264(&uStack_100);
    FUN_10726ae88();
    puVar4 = puVar5;
    break;
  default:
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  func_0x00010729e1e0(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729e514();
  func_0x000104c318bc();
  uVar11 = *param_3;
  puVar4[9] = param_3[1];
  puVar4[8] = uVar11;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 9;
  return;
}



/* Entry: 107296a74; end: 107296bab;  */

void FUN_107296a74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x48) = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 9;
  return;
}



/* Entry: 107296bac; end: 107296bd7;  */

void FUN_107296bac(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110998a58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107296bd8; end: 107296bdb;  */

void FUN_107296bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998a58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107296bdc; end: 107296bef;  */

void FUN_107296bdc(void)

{
  FUN_107297fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107296bf0; end: 107296bf7;  */

void FUN_107296bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010729f06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107296bf8; end: 107296e2f;  */

long * FUN_107296bf8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 *param_6,long param_7)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x00010729f208();
  plVar2 = param_1;
  func_0x00010729e310();
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 5) = 0x3f800000;
  *plVar2 = (long)&PTR_FUN_110998aa8;
  lVar3 = param_2;
  uStack_8 = extraout_x8;
  func_0x000107297740(param_2,&lStack_198);
  auStack_188[0] = (undefined1)lVar3;
  FUN_1072977b8(auStack_180,param_2 + 0x20);
  func_0x000107269bac(auStack_168,param_2 + 0x30);
  func_0x000104c2fe00(auStack_128,param_3);
  func_0x000104c2fe00(auStack_f0,param_4);
  uVar1 = *(char *)(param_6 + 2) == '\x01';
  if ((bool)uVar1) {
    puVar4 = param_6;
    FUN_107296e30(param_6);
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x48))(param_1);
    func_0x000107834100(&uStack_b8,param_2,(long)puVar4 + 4,plVar2);
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  FUN_107263b58(auStack_a0);
  FUN_10726236c(auStack_60,param_2 + 0x30);
  uStack_18 = param_6[1];
  uStack_20 = *param_6;
  uStack_10 = *(undefined1 *)(param_6 + 2);
  FUN_107297044(param_1 + 6,auStack_188);
  func_0x0001072977f4(auStack_188);
  lVar3 = param_1[6] + 8;
  FUN_107297848();
  func_0x000104c2db28();
  lStack_198 = param_7;
  uStack_190 = param_5;
  while (lStack_198 != 0) {
    FUN_107296e48(auStack_188,lVar3,uStack_190);
    func_0x000104c2de10(&lStack_198);
  }
  func_0x00010729e1e0(uStack_8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_107297884(param_1 + 6);
    func_0x0001072978a8();
    func_0x00010729e51c();
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      func_0x000104bdc2c8();
      func_0x00010729e5f0();
      func_0x0001072684ec();
      func_0x00010729ee18();
      func_0x00010729ea1c();
      FUN_10729787c();
      return param_1;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 107296e30; end: 107296e47;  */

void FUN_107296e30(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010729e5f0();
  func_0x0001072684ec();
  func_0x00010729ee18();
  func_0x00010729ea1c();
  FUN_10729787c();
  return;
}



/* Entry: 107296e48; end: 107296e77;  */

void FUN_107296e48(void)

{
  func_0x00010729e5f0();
  func_0x0001072684ec();
  func_0x00010729ee18();
  func_0x00010729ea1c();
  FUN_10729787c();
  return;
}



/* Entry: 107296e78; end: 107296e7b;  */

undefined8 * FUN_107296e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998aa8;
  FUN_107297884(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 107296e7c; end: 107296e8f;  */

void FUN_107296e7c(void)

{
  FUN_10729796c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107296e90; end: 107296e9b;  */

undefined1 FUN_107296e90(long param_1)

{
  return **(undefined1 **)(param_1 + 0x30);
}



/* Entry: 107296e9c; end: 107296ec7;  */

void FUN_107296e9c(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_2;
  FUN_1072979a0(*(long *)(param_1 + 0x30) + 8,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107296ec8; end: 107296eeb;  */

long * FUN_107296ec8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0x18) != 0) {
    plVar1 = *(long **)(lVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x000107296ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  return (long *)(lVar2 + 8);
}



/* Entry: 107296eec; end: 107296f8b;  */

void FUN_107296eec(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined1 auStack_48 [24];
  long *plStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_2;
  func_0x00010729f1bc();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*plVar1 + 0x20))();
  uVar2 = *(undefined8 *)(*plVar1 + 0x18);
  FUN_107297b88(param_1);
  (**(code **)(*param_2 + 0x20))();
  func_0x000104c2db28();
  plStack_30 = param_2;
  uStack_28 = uVar2;
  while (plStack_30 != (long *)0x0) {
    FUN_107297bdc(auStack_48,param_1,uStack_28);
    func_0x000104c2de10(&plStack_30);
  }
  return;
}



/* Entry: 107296f8c; end: 107296fd3;  */

long FUN_107296f8c(long param_1)

{
  return *(long *)(param_1 + 0x30) + 0x20;
}



/* Entry: 107296fd4; end: 107297027;  */

undefined8 FUN_107296fd4(void)

{
  int iVar1;
  
  if ((bRam00000001131ad0e8 & 1) == 0) {
    iVar1 = 0x131ad0e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001131ad0a8 = 4;
      ___cxa_guard_release(0x1131ad0e8);
    }
  }
  return 0x1131ad0a8;
}



/* Entry: 107297028; end: 107297043;  */

void FUN_107297028(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 107297044; end: 107297063;  */

void FUN_107297044(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107297064(&uStack_11,param_1);
  return;
}



/* Entry: 107297064; end: 1072970d3;  */

long FUN_107297064(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010729e310();
  uStack_28 = extraout_x8;
  FUN_1072970d4(auStack_40,1);
  FUN_107297128();
  func_0x00010729ef48();
  func_0x000107297730();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010729e878();
  func_0x000107297730();
  lVar1 = lStack_30;
  func_0x00010729e514();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_1072970fc();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1072970d4; end: 1072970fb;  */

long FUN_1072970d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1072970fc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1072970fc; end: 107297127;  */

undefined8 * FUN_1072970fc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xa0a0a0a0a0a0a1) {
    puVar1 = (undefined8 *)(param_2 * 0x198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110998ba8;
  param_1[1] = 0;
  FUN_10729718c(param_1 + 3);
  return param_1;
}



/* Entry: 107297128; end: 107297167;  */

undefined8 * FUN_107297128(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110998ba8;
  param_1[1] = 0;
  FUN_10729718c(param_1 + 3);
  return param_1;
}



/* Entry: 107297168; end: 10729716b;  */

void FUN_107297168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998ba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10729716c; end: 10729717f;  */

void FUN_10729716c(void)

{
  FUN_107297724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107297180; end: 10729718b;  */

long FUN_107297180(long param_1)

{
  func_0x00010724b3d8(param_1 + 0x140);
  func_0x00010724b3d8(param_1 + 0x100);
  FUN_1072977d0(param_1 + 0xe8);
  func_0x000104c2f714(param_1 + 0xb0);
  func_0x000104c2f714(param_1 + 0x78);
  func_0x000104c319e0(param_1 + 0x38);
  FUN_1072972e4(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10729718c; end: 107297273;  */

void FUN_10729718c(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010729eacc();
  *param_1 = *param_2;
  FUN_107297274(param_1 + 8,param_2 + 8);
  func_0x000107269bac(param_1 + 0x20,param_2 + 0x20);
  func_0x000104c2fe00(unaff_x19 + 0x60,unaff_x21 + 0x60);
  func_0x000104c2fe00(unaff_x19 + 0x98,unaff_x21 + 0x98);
  FUN_107297340(unaff_x19 + 0xd0,unaff_x21 + 0xd0);
  FUN_107263b58(unaff_x19 + 0xe8,unaff_x21 + 0xe8);
  FUN_107263b58(unaff_x19 + 0x128,unaff_x21 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x170);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x168);
  *(undefined4 *)(unaff_x19 + 0x178) = *(undefined4 *)(unaff_x21 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar1;
  return;
}



/* Entry: 107297274; end: 10729729f;  */

void FUN_107297274(long param_1)

{
  func_0x00010729eb48();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_1072972a0();
  return;
}



/* Entry: 1072972a0; end: 1072972e3;  */

void FUN_1072972a0(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_1072972e4();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x00010729e6f8(&PTR_DAT_110998428);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 1072972e4; end: 107297327;  */

void FUN_1072972e4(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x00010729ea68((&PTR_FUN_110998418)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107297328; end: 10729733f;  */

void FUN_107297328(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_2;
  func_0x000104c33620();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x000104c33428(param_2);
  return;
}



/* Entry: 107297340; end: 107297357;  */

void FUN_107297340(void)

{
  FUN_107297358();
  return;
}



/* Entry: 107297358; end: 10729738b;  */

void FUN_107297358(void)

{
  func_0x00010729ee88();
  FUN_10729738c();
  return;
}



/* Entry: 10729738c; end: 1072973e3;  */

void FUN_10729738c(void)

{
  long in_x3;
  
  func_0x00010729ef3c();
  if (in_x3 != 0) {
    func_0x00010729e624();
    FUN_1072973e4();
    func_0x00010729f1b0();
    FUN_107297424();
  }
  func_0x00010729e8ac();
  func_0x000107297694();
  return;
}



/* Entry: 1072973e4; end: 107297423;  */

void FUN_1072973e4(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010729f00c();
  if (param_2 < extraout_x8) {
    plVar1 = param_1 + 2;
    FUN_10729745c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
  }
  else {
    FUN_107297450();
    func_0x00010729efa8();
    param_1 = param_1 + 2;
    func_0x0001072974a8();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 107297424; end: 10729744f;  */

void FUN_107297424(long param_1)

{
  long unaff_x19;
  
  func_0x00010729efa8();
  param_1 = param_1 + 0x10;
  func_0x0001072974a8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107297450; end: 10729745b;  */

void FUN_107297450(void)

{
  func_0x00010729e410();
  FUN_10729747c();
  return;
}



/* Entry: 10729745c; end: 10729747b;  */

void FUN_10729745c(void)

{
  FUN_10729747c();
  return;
}



/* Entry: 10729747c; end: 1072974bb;  */

void FUN_10729747c(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  func_0x00010729f00c();
  if (param_2 < extraout_x8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072974bc();
  return;
}



/* Entry: 1072974bc; end: 107297517;  */

long FUN_1072974bc(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010729e624();
  func_0x00010729e460();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x00010729ec28();
    FUN_107297518();
    unaff_x19 = lStack_38 + 0x18;
    lStack_38 = unaff_x19;
  }
  func_0x00010729ef18();
  FUN_107297628(auStack_60);
  return unaff_x19;
}



/* Entry: 107297518; end: 10729752f;  */

void FUN_107297518(void)

{
  FUN_107297530();
  return;
}



/* Entry: 107297530; end: 10729755f;  */

void FUN_107297530(void)

{
  func_0x00010729ee88();
  FUN_107297560();
  return;
}



/* Entry: 107297560; end: 1072975c7;  */

void FUN_107297560(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010729ef3c();
  if (param_4 != 0) {
    func_0x00010729e618();
    FUN_1072975c8(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x00010729ed90();
      _memmove();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x00010729e8ac();
  func_0x000107297600();
  return;
}



/* Entry: 1072975c8; end: 107297627;  */

void FUN_1072975c8(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong extraout_x8;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    func_0x000104c33de8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return;
  }
  func_0x000104c33d7c();
  func_0x00010729ec80();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104c336ec();
  }
  return;
}



/* Entry: 107297628; end: 107297653;  */

void FUN_107297628(void)

{
  uint extraout_w8;
  
  func_0x00010729eba4();
  if ((extraout_w8 & 1) == 0) {
    FUN_107297654();
  }
  return;
}



/* Entry: 107297654; end: 107297663;  */

void FUN_107297654(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010729efec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 107297664; end: 1072976e7;  */

void FUN_107297664(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 1072976e8; end: 1072976ef;  */

void FUN_1072976e8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000104c336c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072976f0; end: 107297723;  */

void FUN_1072976f0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000104c336c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107297724; end: 1072977b7;  */

void FUN_107297724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998ba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072977b8; end: 1072977cf;  */

void FUN_1072977b8(long param_1)

{
  FUN_107268400();
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1072977d0; end: 107297847;  */

void FUN_1072977d0(void)

{
  func_0x00010729e564();
  func_0x0001072976bc();
  return;
}



/* Entry: 107297848; end: 10729787b;  */

void FUN_107297848(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010729ea1c();
  FUN_10729787c();
  return;
}



/* Entry: 10729787c; end: 107297883;  */

void FUN_10729787c(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_107268250(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 107297884; end: 107297953;  */

void FUN_107297884(long param_1)

{
  func_0x00010729ef84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107297954; end: 10729796b;  */

void FUN_107297954(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10729796c; end: 10729799f;  */

undefined8 * FUN_10729796c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998aa8;
  FUN_107297884(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 1072979a0; end: 1072979c7;  */

void FUN_1072979a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = *param_3;
  FUN_1072979c8(param_1,&uStack_20);
  return;
}



/* Entry: 1072979c8; end: 1072979f3;  */

void FUN_1072979c8(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  if (*(int *)(param_2 + 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001072979e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3[1]);
    return;
  }
  lVar1 = *param_3;
  FUN_107297a3c(param_2,lVar1);
  if (param_2 != (undefined8 *)0x0) {
    FUN_107268350(param_1,lVar1 + 0x38);
    param_1[0x40] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 1072979f4; end: 107297a3b;  */

void FUN_1072979f4(undefined1 *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  FUN_107297a3c(param_3,lVar1);
  if (param_3 != 0) {
    FUN_107268350(param_1,lVar1 + 0x38);
    param_1[0x40] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 107297a3c; end: 107297a43;  */

long FUN_107297a3c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auStack_90 [16];
  
  param_1 = (undefined8 *)*param_1;
  func_0x00010729e5f0();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  puVar5 = param_2;
  func_0x00010729ea48();
  func_0x00010729e618();
  lVar7 = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = *param_2;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x000104c32d9c(auStack_90,uVar1 + uVar10 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 107297a44; end: 107297a77;  */

long FUN_107297a44(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auStack_90 [16];
  
  func_0x00010729e5f0();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  puVar5 = param_2;
  func_0x00010729ea48();
  func_0x00010729e618();
  lVar7 = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = *param_2;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x000104c32d9c(auStack_90,uVar1 + uVar10 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 107297a78; end: 107297b6b;  */

long FUN_107297a78(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x00010729e618();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      func_0x000104c32d9c(&stack0xffffffffffffff70,uVar1 + uVar11 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 107297b6c; end: 107297b87;  */

void FUN_107297b6c(long param_1)

{
  FUN_107268350();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}


