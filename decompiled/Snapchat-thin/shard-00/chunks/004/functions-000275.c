/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10060df88; end: 10060df8f; -[SCFriendsFeedFetchContext identifier] */

undefined8 FUN_10060df88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10060df90; end: 10060e03f; -[SCGhostToFeedLogger logStep:fetchContext:updateCount:] */

void FUN_10060df90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_5);
  func_0x000107c6071c();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100629978;
  puStack_70 = &UNK_1108714c0;
  lStack_68 = param_2;
  uStack_60 = param_5;
  uStack_58 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_6;
  func_0x000107c61174(param_5);
  func_0x000107c4e524(uVar1,param_3,&puStack_88);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 10060e040; end: 10060e057;  */

void FUN_10060e040(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_x3);
  return;
}



/* Entry: 10060e058; end: 10060e1f7; -[SCNMessagingFeedManager syncFeed:trackingId:syncFeedRequestMetadata:] */

void FUN_10060e058(void)

{
  ulong unaff_x20;
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [32];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  
  FUN_10060e040();
  FUN_10060e1f8();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_100606d60(auStack_e0);
  FUN_10060e1f8();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x5812000000;
  puStack_80 = &UNK_108625668;
  puStack_78 = &UNK_108625674;
  pcStack_70 = "";
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  fStack_48 = 1.0;
  func_0x000107c40808();
  FUN_10060e200(&uStack_68,(long)((float)unaff_x20 / fStack_48));
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_10862567c;
  puStack_a8 = &UNK_110a5c5b0;
  puStack_a0 = &uStack_98;
  func_0x000107c429c4();
  FUN_10060e2d4(auStack_108,puStack_90 + 6);
  FUN_10060e36c();
  func_0x00010060e3b0(&uStack_68);
  FUN_10060e41c();
  func_0x00010060e424(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010060e3b0(auStack_108);
  FUN_1005fce88(auStack_e0);
  FUN_10060e41c();
  func_0x000100607a4c();
  return;
}



/* Entry: 10060e1f8; end: 10060e1ff;  */

void FUN_10060e1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10060e200; end: 10060e2c7;  */

void FUN_10060e200(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10060e248;
    }
    return;
  }
LAB_10060e248:
  if (param_2 == 0) {
    func_0x0001086259fc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    func_0x000108625a14(plVar2);
    func_0x0001086259fc(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10060e2c8; end: 10060e2d3;  */

void FUN_10060e2c8(void)

{
  return;
}



/* Entry: 10060e2d4; end: 10060e32b;  */

undefined8 * FUN_10060e2d4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10060e200(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10060e32c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10060e32c; end: 10060e36b;  */

void FUN_10060e32c(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x000107c28618(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10060e36c; end: 10060e377;  */

void FUN_10060e36c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(&stack0x00000078,8);
  return;
}



/* Entry: 10060e378; end: 10060e3d7;  */

void FUN_10060e378(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    FUN_1001148fc(param_2 + 3);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10060e3d8; end: 10060e3f7;  */

void FUN_10060e3d8(void)

{
  return;
}



/* Entry: 10060e3f8; end: 10060e41b;  */

undefined8 FUN_10060e3f8(undefined8 param_1)

{
  func_0x00010060e3e0(param_1,0);
  return param_1;
}



/* Entry: 10060e41c; end: 10060e433;  */

void FUN_10060e41c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10060e434; end: 10060e64b;  */

void FUN_10060e434(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x23;
  undefined8 auStack_200 [2];
  undefined4 uStack_1f0;
  undefined1 auStack_1c8 [40];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  undefined1 auStack_158 [96];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  
  puVar3 = auStack_200;
  FUN_10055096c();
  FUN_10060e65c(&uStack_1a0);
  func_0x000100606f84();
  FUN_100606f9c();
  uStack_1f0 = param_2;
  FUN_100606fd8(unaff_x23 + 0x18,param_3);
  puVar2 = auStack_1c8;
  FUN_10060e2d4(puVar2,param_4);
  puStack_160 = &DAT_10f4bcdd0;
  func_0x00010060e744();
  FUN_1004b4e98();
  func_0x000100607150();
  (*extraout_x8)();
  func_0x00010060e750();
  func_0x00010060e75c();
  FUN_100607368();
  FUN_10060758c(auStack_158,puVar2);
  func_0x00010060e764(&uStack_180,auStack_158);
  func_0x00010060e76c();
  puVar2 = auStack_158;
  FUN_10060e784(puVar2,auStack_200);
  uStack_f8 = 0;
  uStack_e8 = 1;
  uStack_d8 = uStack_198;
  uStack_e0 = uStack_1a0;
  uStack_f0 = param_4;
  func_0x00010060e7f0(unaff_x19 + 0x38);
  uStack_b8 = uStack_178;
  uStack_c0 = uStack_180;
  uStack_b0 = uStack_170;
  uStack_d0 = extraout_x9;
  uStack_c8 = extraout_x8_00;
  func_0x00010060e7fc();
  pcStack_a8 = FUN_1006ac0d4;
  ppuStack_a0 = &PTR_FUN_110a77f80;
  func_0x000100564d88();
  FUN_10060e784();
  uVar1 = uStack_f8;
  *(undefined8 *)(puVar2 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar2 + 0x60) = uVar1;
  *(ulong *)(puVar2 + 0x70) = CONCAT71(uStack_e7,uStack_e8);
  *(undefined8 *)(puVar2 + 0x80) = uStack_d8;
  *(undefined8 *)(puVar2 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar2 + 0x88) = uStack_d0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  *(undefined8 *)(puVar2 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x90) = uStack_c8;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar2 + 0xa0) = uStack_b8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  func_0x00010060e808();
  func_0x000100607970();
  FUN_1006079b8();
  FUN_10060e848(auStack_158);
  FUN_10060e8a4();
  FUN_10060e87c(auStack_200);
  func_0x000100607a28();
  func_0x0001005ee154();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3377c();
  FUN_10060e848(auStack_158);
  FUN_10060e8a4();
  FUN_10060e87c();
  func_0x000100607a28();
  func_0x000107c33930();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  return;
}



/* Entry: 10060e64c; end: 10060e65b;  */

void FUN_10060e64c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10060e65c; end: 10060e6f7;  */

void FUN_10060e65c(undefined8 param_1,int param_2)

{
  long *unaff_x19;
  long lVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10060e64c();
  puStack_50 = (&PTR_DAT_110a77f98)[param_2];
  FUN_100164d38();
  func_0x000100164e8c(auStack_48,param_1,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  FUN_10060e6f8(lStack_38,&puStack_50);
  lStack_38 = lStack_38 + 0x30;
  func_0x0001004b4d60();
  FUN_100164f34();
  lVar1 = unaff_x19[1];
  FUN_100607148();
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 10060e6f8; end: 10060e737;  */

void FUN_10060e6f8(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001004a6390();
  FUN_10002b838();
  FUN_10002b838(param_1 + 0x18,*unaff_x20);
  return;
}



/* Entry: 10060e738; end: 10060e783;  */

void FUN_10060e738(void)

{
  return;
}



/* Entry: 10060e784; end: 10060e7cf;  */

void FUN_10060e784(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010060e774();
  FUN_10060e7d0();
  func_0x00010060e7e4();
  FUN_10060e2d4(unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 10060e7d0; end: 10060e81b;  */

void FUN_10060e7d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 in_register_00005008;
  
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
  return;
}



/* Entry: 10060e81c; end: 10060e83b;  */

void FUN_10060e81c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10060e848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10060e83c; end: 10060e847;  */

long FUN_10060e83c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x98;
  FUN_10015b854(&lStack_28);
  return param_1 + 0x98;
}



/* Entry: 10060e848; end: 10060e86f;  */

long FUN_10060e848(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10060e83c();
  func_0x00010015b888(unaff_x19 + 0x78);
  FUN_10060e870();
  func_0x00010060e3b0();
  FUN_1005fce88(unaff_x19 + 0x18);
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10060e870; end: 10060e87b;  */

long FUN_10060e870(long param_1)

{
  return param_1 + 0x38;
}



/* Entry: 10060e87c; end: 10060e8a3;  */

long FUN_10060e87c(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10060e870();
  func_0x00010060e3b0();
  FUN_1005fce88(unaff_x19 + 0x18);
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10060e8a4; end: 10060e8bb;  */

undefined1 * FUN_10060e8a4(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000080;
  FUN_10015b854(&puStack_28);
  return &stack0x00000080;
}



/* Entry: 10060e8bc; end: 10060e8d3; -[SCNMessagingUUID .cxx_destruct] */

void FUN_10060e8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10060e8d4; end: 10060ef1f;  */

void FUN_10060e8d4(void)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long *plVar12;
  undefined8 extraout_x9;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_164;
  undefined8 *puStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined1 uStack_138;
  undefined4 uStack_137;
  undefined3 uStack_133;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 auStack_120 [8];
  ulong uStack_118;
  byte bStack_110;
  int iStack_108;
  undefined4 *puStack_100;
  int iStack_f0;
  long lStack_e8;
  ulong uStack_d8;
  int iStack_d0;
  int iStack_c0;
  int *piStack_b8;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  char cStack_88;
  long lStack_80;
  int iStack_78;
  undefined4 uStack_74;
  
  uVar11 = 0;
  FUN_1005e774c(&lStack_80,&UNK_10f770856,0x2e,&UNK_10f77084c,0);
  if (lStack_80 == CONCAT44(uStack_74,iStack_78)) {
    auStack_120[0] = 0;
    cStack_88 = '\0';
  }
  else {
    func_0x000107c30508(&uStack_200,0);
    FUN_10006369c(&uStack_200,lStack_80,iStack_78 - (int)lStack_80);
    if ((uVar11 & 1) == 0) {
      cStack_88 = '\0';
      auStack_120[0] = 0;
    }
    else {
      func_0x000107c30508(auStack_120,0);
      if ((uStack_118 & 1) != 0) {
        uStack_118 = *(ulong *)(uStack_118 & 0xfffffffffffffffe);
      }
      uVar11 = uStack_1f8;
      if ((uStack_1f8 & 1) != 0) {
        uVar11 = *(ulong *)(uStack_1f8 & 0xfffffffffffffffe);
      }
      if (uStack_118 == uVar11) {
        func_0x000107c30514(auStack_120,&uStack_200);
      }
      else {
        func_0x000107c30510(auStack_120,&uStack_200);
      }
      cStack_88 = '\x01';
    }
    func_0x000107c3050c(&uStack_200);
  }
  FUN_100100fec(&lStack_80);
  if (cStack_88 == '\x01') {
    uStack_1f8 = 0;
    uStack_200 = (long *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3f800000;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b8 = 0x3f800000;
    uStack_1b0 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0x3f800000;
    uStack_180 = 0x3f4ccccd;
    uStack_17c = 1;
    uStack_178 = 10;
    uStack_174 = 1;
    uStack_170 = 0x3f800000;
    uStack_16c = 1;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined8 *)0x0;
    lStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_140 = 0x3f800000;
    uStack_138 = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    if (cRam00000001137f66c0 == '\x01') {
      FUN_100667c1c(0x1137f65e8,&uStack_200);
      func_0x0001002a9850(0x1137f6610,&uStack_1d8);
      func_0x000107c3973c();
      func_0x0001005d0464();
      func_0x000107c39738();
      if (lRam00000001137f66a0 != 0) {
        FUN_10060f148(0x1137f6688,plRam00000001137f6698);
        plRam00000001137f6698 = (long *)0x0;
        puVar6 = puRam00000001137f6688;
        for (uVar11 = uRam00000001137f6690; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        lRam00000001137f66a0 = 0;
      }
      puVar6 = puStack_160;
      puStack_160 = (undefined8 *)0x0;
      func_0x000107c2fff8(0x1137f6688,puVar6);
      plRam00000001137f6698 = plStack_150;
      lRam00000001137f66a0 = lStack_148;
      uRam00000001137f66a8 = uStack_140;
      uRam00000001137f6690 = uStack_158;
      if (lStack_148 != 0) {
        uVar11 = plStack_150[1];
        if ((uStack_158 & uStack_158 - 1) == 0) {
          uVar11 = uVar11 & uStack_158 - 1;
        }
        else if (uStack_158 <= uVar11) {
          uVar18 = 0;
          if (uStack_158 != 0) {
            uVar18 = uVar11 / uStack_158;
          }
          uVar11 = uVar11 - uVar18 * uStack_158;
        }
        puRam00000001137f6688[uVar11] = 0x1137f6698;
        plStack_150 = (long *)0x0;
        lStack_148 = 0;
      }
      uRam00000001137f66b0 = CONCAT41(uStack_137,uStack_138);
      uRam00000001137f66b5 = uStack_133;
      uRam00000001137f66b8 = uStack_130;
      uRam00000001137f66bc = CONCAT31(uRam00000001137f66bc._1_3_,(undefined1)uStack_12c);
    }
    else {
      FUN_10066ff1c(0x1137f65e8,&uStack_200);
      FUN_10028aa7c(0x1137f6610,&uStack_1d8);
      func_0x000107c3973c();
      func_0x00010729dd38();
      func_0x000107c39738();
      puRam00000001137f6688 = puStack_160;
      puStack_160 = (undefined8 *)0x0;
      uRam00000001137f6690 = uStack_158;
      plRam00000001137f6698 = plStack_150;
      lRam00000001137f66a0 = lStack_148;
      uRam00000001137f66a8 = uStack_140;
      if (lStack_148 != 0) {
        uVar11 = plStack_150[1];
        if ((uStack_158 & uStack_158 - 1) == 0) {
          uVar11 = uVar11 & uStack_158 - 1;
        }
        else if (uStack_158 <= uVar11) {
          uVar18 = 0;
          if (uStack_158 != 0) {
            uVar18 = uVar11 / uStack_158;
          }
          uVar11 = uVar11 - uVar18 * uStack_158;
        }
        puRam00000001137f6688[uVar11] = 0x1137f6698;
        plStack_150 = (long *)0x0;
        lStack_148 = 0;
      }
      uRam00000001137f66b0 = CONCAT41(uStack_137,uStack_138);
      uRam00000001137f66b8 = uStack_130;
      uRam00000001137f66bc = uStack_12c;
      uRam00000001137f66b5 = uStack_133;
      cRam00000001137f66c0 = '\x01';
    }
    uStack_158 = 0;
    func_0x00010060f1a0(&uStack_200);
    func_0x000100667cac(0x1137f65e8);
    for (lVar15 = (long)iStack_108 << 2; lVar15 != 0; lVar15 = lVar15 + -4) {
      uVar11 = (ulong)uStack_200 >> 0x20;
      uStack_200 = (long *)CONCAT44((int)uVar11,*puStack_100);
      func_0x000100631508(0x1137f65e8,&uStack_200);
      puStack_100 = puStack_100 + 1;
    }
    lVar15 = lStack_e8;
    for (lVar16 = (long)iStack_f0 << 2; lVar16 != 0; lVar16 = lVar16 + -4) {
      FUN_10066fe34(0x1137f6610,lVar15);
      lVar15 = lVar15 + 4;
    }
    puVar2 = &uStack_d8;
    if ((uStack_d8 & 1) != 0) {
      puVar2 = (ulong *)(uStack_d8 + 7);
    }
    uVar11 = 0x1137f6640;
    uRam00000001137f6638 = uStack_90;
    piVar14 = piStack_b8;
    for (lVar15 = (long)iStack_d0 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
      piStack_b8 = piVar14;
      func_0x0001004c3c6c(0x1137f6640,*puVar2);
      puVar2 = puVar2 + 1;
      piVar14 = piStack_b8;
    }
    piVar1 = piVar14 + iStack_c0;
    for (; uVar18 = uRam00000001137f6690, uVar8 = (long)piVar14 - (long)piVar1 < 0,
        piVar14 != piVar1; piVar14 = piVar14 + 1) {
      iVar4 = *piVar14;
      uVar17 = (ulong)iVar4;
      if (uRam00000001137f6690 != 0) {
        uVar10 = uRam00000001137f6690 - 1;
        if ((uRam00000001137f6690 & uVar10) == 0) {
          uVar11 = uVar10 & uVar17;
          uVar8 = false;
        }
        else {
          uVar8 = (long)(uRam00000001137f6690 - uVar17) < 0;
          uVar11 = uVar17;
          if (uRam00000001137f6690 <= uVar17) {
            uVar11 = 0;
            if (uRam00000001137f6690 != 0) {
              uVar11 = uVar17 / uRam00000001137f6690;
            }
            uVar11 = uVar17 - uVar11 * uRam00000001137f6690;
          }
        }
        plVar12 = (long *)puRam00000001137f6688[uVar11];
        if (plVar12 != (long *)0x0) {
          do {
            while( true ) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) goto LAB_10060ed38;
              uVar13 = plVar12[1];
              if (uVar13 != uVar17) break;
              uVar8 = *(int *)(plVar12 + 2) - iVar4 < 0;
              if (*(int *)(plVar12 + 2) == iVar4) goto LAB_10060ee3c;
            }
            if ((uRam00000001137f6690 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uRam00000001137f6690 <= uVar13) {
              uVar5 = 0;
              if (uRam00000001137f6690 != 0) {
                uVar5 = uVar13 / uRam00000001137f6690;
              }
              uVar13 = uVar13 - uVar5 * uRam00000001137f6690;
            }
            uVar8 = (long)(uVar13 - uVar11) < 0;
          } while (uVar13 == uVar11);
        }
      }
LAB_10060ed38:
      plVar12 = (long *)0x18;
      func_0x000107c60e20();
      uStack_1f8 = 0x1137f6698;
      uStack_1f0 = 1;
      *plVar12 = 0;
      plVar12[1] = uVar17;
      *(int *)(plVar12 + 2) = iVar4;
      uStack_200 = plVar12;
      func_0x0001006012f8(lRam00000001137f66a0);
      if ((uVar18 == 0) || (FUN_100b449e4(), (bool)uVar8)) {
        func_0x000107c39748();
        bVar7 = 2 < uVar18;
        bVar9 = uVar18 == 3;
        func_0x00010060131c();
        uVar3 = extraout_x8;
        if (!bVar7 || bVar9) {
          uVar3 = extraout_x9;
        }
        FUN_100601084(0x1137f6688,uVar3);
        uVar18 = uRam00000001137f6690;
        if ((uRam00000001137f6690 & uRam00000001137f6690 - 1) == 0) {
          uVar11 = uRam00000001137f6690 - 1 & uVar17;
        }
        else {
          uVar11 = uVar17;
          if (uRam00000001137f6690 <= uVar17) {
            uVar11 = 0;
            if (uRam00000001137f6690 != 0) {
              uVar11 = uVar17 / uRam00000001137f6690;
            }
            uVar11 = uVar17 - uVar11 * uRam00000001137f6690;
          }
        }
      }
      puVar6 = puRam00000001137f6688;
      plVar12 = (long *)puRam00000001137f6688[uVar11];
      if (plVar12 == (long *)0x0) {
        *uStack_200 = (long)plRam00000001137f6698;
        plRam00000001137f6698 = uStack_200;
        puVar6[uVar11] = 0x1137f6698;
        if (*uStack_200 != 0) {
          uVar17 = *(ulong *)(*uStack_200 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar17 = uVar17 & uVar18 - 1;
          }
          else if (uVar18 <= uVar17) {
            uVar10 = 0;
            if (uVar18 != 0) {
              uVar10 = uVar17 / uVar18;
            }
            uVar17 = uVar17 - uVar10 * uVar18;
          }
          puVar6[uVar17] = uStack_200;
        }
      }
      else {
        *uStack_200 = *plVar12;
        *plVar12 = (long)uStack_200;
      }
      uStack_200 = (long *)0x0;
      lRam00000001137f66a0 = lRam00000001137f66a0 + 1;
      func_0x000107c30000(&uStack_200);
LAB_10060ee3c:
    }
    uRam00000001137f6668 = uStack_a0;
    uRam00000001137f6678 = uStack_98;
    uRam00000001137f666c = 1;
    uRam00000001137f6670 = uStack_9c;
    uRam00000001137f6674 = 1;
    uRam00000001137f667c = 1;
    uRam00000001137f6680 = uStack_94;
    uRam00000001137f6684 = 1;
    if ((bStack_110 & 1) != 0) {
      uRam00000001137f66b8 = *(undefined4 *)(lStack_a8 + 0x18);
      uRam00000001137f66b0 = (undefined5)*(undefined8 *)(lStack_a8 + 0x10);
      uRam00000001137f66b5 = (undefined3)((ulong)*(undefined8 *)(lStack_a8 + 0x10) >> 0x28);
      if ((uRam00000001137f66bc & 1) == 0) {
        uRam00000001137f66bc = CONCAT31(uRam00000001137f66bc._1_3_,1);
      }
    }
  }
  FUN_10060ef20(auStack_120);
  return;
}



/* Entry: 10060ef20; end: 10060ef3f;  */

void FUN_10060ef20(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x000107c3050c();
  }
  return;
}



/* Entry: 10060ef40; end: 10060ef57;  */

void FUN_10060ef40(void)

{
  return;
}



/* Entry: 10060ef58; end: 10060ef77;  */

void FUN_10060ef58(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x00010060f1a0();
  }
  return;
}



/* Entry: 10060ef78; end: 10060efa7;  */

void FUN_10060ef78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = param_1;
  func_0x000107c60d9c();
  *(long *)(param_1 + 0x140) = lVar2;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  puVar1 = (undefined8 *)(param_1 + 0x160);
  func_0x00010060efb0(puVar1,*puVar1);
  lVar2 = puVar1[1];
  while (lVar2 != unaff_x19) {
    lVar2 = lVar2 + -0x28;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10060efa8; end: 10060efbb;  */

void FUN_10060efa8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010060efb0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10060efbc; end: 10060efef;  */

void FUN_10060efbc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010060efb0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10060eff0; end: 10060eff7;  */

void FUN_10060eff0(void)

{
  return;
}



/* Entry: 10060eff8; end: 10060f067;  */

undefined1 FUN_10060eff8(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6540 & 1) == 0) {
    iVar2 = 0x137f6540;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x38;
      FUN_1005ec950();
      uRam00000001137f64f8 = uVar1;
      FUN_100600444(0x1137f6540);
    }
  }
  return uRam00000001137f64f8;
}



/* Entry: 10060f068; end: 10060f0d7;  */

undefined1 FUN_10060f068(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6548 & 1) == 0) {
    iVar2 = 0x137f6548;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x50;
      FUN_1005ec950();
      uRam00000001137f64f9 = uVar1;
      FUN_100600444(0x1137f6548);
    }
  }
  return uRam00000001137f64f9;
}



/* Entry: 10060f0d8; end: 10060f147;  */

undefined1 FUN_10060f0d8(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6550 & 1) == 0) {
    iVar2 = 0x137f6550;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x68;
      FUN_1005ec950();
      uRam00000001137f64fa = uVar1;
      FUN_100600444(0x1137f6550);
    }
  }
  return uRam00000001137f64fa;
}



/* Entry: 10060f148; end: 10060f1d7;  */

void FUN_10060f148(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 10060f1d8; end: 10060f1ef;  */

void FUN_10060f1d8(long *param_1)

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



/* Entry: 10060f1f0; end: 10060f267;  */

undefined8 FUN_10060f1f0(undefined8 param_1)

{
  FUN_10060f1d8(param_1,0);
  return param_1;
}



/* Entry: 10060f268; end: 10060f27b;  */

void FUN_10060f268(void)

{
  return;
}



/* Entry: 10060f27c; end: 10060f29b;  */

void FUN_10060f27c(void)

{
  func_0x00010060f270();
  FUN_10060f29c();
  return;
}



/* Entry: 10060f29c; end: 10060f2bf;  */

void FUN_10060f29c(long *param_1)

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



/* Entry: 10060f2c0; end: 10060f2e3;  */

void FUN_10060f2c0(long param_1)

{
  func_0x00010060f2b4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10060f2e4; end: 10060f2fb;  */

void FUN_10060f2e4(void)

{
  return;
}



/* Entry: 10060f2fc; end: 10060f32f;  */

void FUN_10060f2fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110cd2080;
  *param_1 = puVar1;
  return;
}



/* Entry: 10060f330; end: 10060f33f;  */

void FUN_10060f330(void)

{
  return;
}



/* Entry: 10060f340; end: 10060f3c3;  */

undefined1 FUN_10060f340(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  long lStack_40;
  
  func_0x00010060f338();
  if (lStack_40 != 0) {
    FUN_10060f3c4();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a790);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010060f3e0(0x11383a790,param_2,FUN_10060f3e8);
    }
    func_0x00010011b648();
  }
  uVar1 = uRam000000011383a788;
  func_0x00010060f454();
  return uVar1;
}



/* Entry: 10060f3c4; end: 10060f3e7;  */

void FUN_10060f3c4(void)

{
  return;
}



/* Entry: 10060f3e8; end: 10060f43b;  */

void FUN_10060f3e8(uint param_1)

{
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  FUN_10060f43c();
  func_0x00010060f44c();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a788 = (undefined1)param_1;
  }
  func_0x00010011b634();
  return;
}



/* Entry: 10060f43c; end: 10060f477;  */

void FUN_10060f43c(void)

{
  return;
}



/* Entry: 10060f478; end: 10060f4bb;  */

void FUN_10060f478(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  func_0x000107c60e20();
  FUN_10060f528();
  *param_1 = uVar1;
  return;
}



/* Entry: 10060f4bc; end: 10060f4df;  */

void FUN_10060f4bc(undefined4 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_10060f478(&uStack_14);
  return;
}



/* Entry: 10060f4e0; end: 10060f527;  */

void FUN_10060f4e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}



/* Entry: 10060f528; end: 10060f5f3;  */

undefined8 * FUN_10060f528(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_110cd4748;
  puVar1 = &UNK_10b2eb100;
  func_0x00010060f4f8(&UNK_10b2eb100,&UNK_10b2eb518,&UNK_10b2eb584,&UNK_10b2eb5f0);
  param_1[8] = puVar1;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  lVar2 = param_3[1];
  uVar3 = *param_3;
  param_1[0x1c] = param_3[1];
  param_1[0x1b] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10060f600();
    } while (extraout_w10 != 0);
  }
  FUN_10060f610();
  return param_1;
}



/* Entry: 10060f5f4; end: 10060f5ff;  */

void FUN_10060f5f4(void)

{
  return;
}



/* Entry: 10060f600; end: 10060f60f;  */

void FUN_10060f600(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10060f610; end: 10060f61b;  */

void FUN_10060f610(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10060f61c; end: 10060f69f;  */

undefined1 FUN_10060f61c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  long lStack_40;
  
  func_0x00010060f338();
  if (lStack_40 != 0) {
    FUN_10060f3c4();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a748);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010060f3e0(0x11383a748,param_2,FUN_10060f6a0);
    }
    func_0x00010011b648();
  }
  uVar1 = uRam000000011383a740;
  func_0x00010060f454();
  return uVar1;
}



/* Entry: 10060f6a0; end: 10060f6f3;  */

void FUN_10060f6a0(uint param_1)

{
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  FUN_10060f43c();
  func_0x00010060f44c();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a740 = (undefined1)param_1;
  }
  func_0x00010011b634();
  return;
}



/* Entry: 10060f6f4; end: 10060f77b;  */

void FUN_10060f6f4(long param_1)

{
  int iVar1;
  
  if ((bRam000000011383d6d8 & 1) == 0) {
    iVar1 = 0x1383d6d8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011383d688 = 0x32aaaba7;
      uRam000000011383d698 = 0;
      uRam000000011383d690 = 0;
      uRam000000011383d6a8 = 0;
      uRam000000011383d6a0 = 0;
      uRam000000011383d6b8 = 0;
      uRam000000011383d6b0 = 0;
      uRam000000011383d6c8 = 0;
      uRam000000011383d6c0 = 0;
      uRam000000011383d6d0 = 0;
      func_0x000107c60e4c(0x11383d6d8);
    }
  }
  FUN_1003b6f78();
  *(undefined8 *)(param_1 + 0x10) = 0x11383d6c8;
  return;
}



/* Entry: 10060f77c; end: 10060f81b;  */

void FUN_10060f77c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  FUN_10060f6f4(auStack_48);
  FUN_10060f8e8(auStack_58,param_2,param_3,param_4);
  FUN_1006100b4(puStack_38,auStack_58);
  FUN_100610040(auStack_58);
  lVar1 = puStack_38[1];
  uVar2 = *puStack_38;
  param_1[1] = puStack_38[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10060fc34();
    } while (extraout_w10 != 0);
  }
  FUN_1000df5a0(auStack_48);
  return;
}



/* Entry: 10060f81c; end: 10060f847;  */

void FUN_10060f81c(long param_1,long param_2)

{
  FUN_1003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10060f848; end: 10060f85f;  */

void FUN_10060f848(void)

{
  return;
}



/* Entry: 10060f860; end: 10060f8e7;  */

void FUN_10060f860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar1 = auStack_50;
  FUN_10060f848();
  FUN_10060f940(auStack_50,1);
  FUN_10060fbfc(lStack_40,param_2,param_3,param_4);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_10060ff78(lVar2 + 0x18);
  FUN_100610064(auStack_50);
  func_0x000100610074();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c39638();
  FUN_100610064();
  func_0x000107c3961c();
  pcStack_58 = FUN_10060f8e8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10060f860(&uStack_61,puVar1,lVar2,param_3);
  return;
}



/* Entry: 10060f8e8; end: 10060f93f;  */

void FUN_10060f8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10060f860(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10060f940; end: 10060f967;  */

long FUN_10060f940(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010060f910();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10060f968; end: 10060f97f;  */

void FUN_10060f968(long param_1,long param_2)

{
  *(long *)(param_2 + 0x10) = param_1 + 0xf0;
  *(long *)(param_2 + 0x18) = param_1 + 0x118;
  *(long *)(param_2 + 0x20) = param_1 + 0x140;
  return;
}



/* Entry: 10060f980; end: 10060fbaf;  */

undefined8 *
FUN_10060f980(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  param_1[1] = &PTR_DAT_110ced940;
  uVar2 = 0;
  lVar4 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110ced890;
  puVar1 = param_1;
  FUN_10060f968();
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar8 = *(undefined8 *)((long)param_3 + 0x14);
  uVar7 = *(undefined8 *)((long)param_3 + 0xc);
  puVar1[0x18] = lVar4;
  puVar1[0x17] = uVar2;
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar8;
  *(undefined8 *)((long)puVar1 + 0x44) = uVar7;
  puVar1[8] = uVar6;
  puVar1[7] = uVar5;
  *(undefined4 *)((long)puVar1 + 0x54) = 3;
  puVar1[0xc] = lVar4;
  puVar1[0xb] = uVar2;
  puVar1[0xe] = lVar4;
  puVar1[0xd] = uVar2;
  puVar1[0x10] = lVar4;
  puVar1[0xf] = uVar2;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar3 = puVar1 + 0x14;
  puVar1[0x15] = lVar4;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar1 + 0x12) = 7;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10060fc34();
    } while (extraout_w10 != 0);
    lVar4 = puVar1[0x15];
    uVar2 = *puVar3;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puVar1[0x15] = uVar6;
  *puVar3 = uVar5;
  uStack_70 = uVar2;
  lStack_68 = lVar4;
  FUN_10060f2c0(&uStack_70);
  FUN_10060f2c0(&uStack_80);
  FUN_10060fc44(*puVar3,param_1 + 1);
  uVar2 = 0x78;
  func_0x000107c60e20(0x78);
  FUN_10060fc78();
  uStack_70 = 0;
  FUN_10060fd78(puVar1 + 0x13,uVar2);
  FUN_10060fda0(&uStack_70);
  FUN_10060fdc4(param_1);
  if ((param_5[0xa8] == '\x01') && (*(undefined1 *)(param_1 + 0x19) = 1, *param_5 == '\x01')) {
    FUN_10066fea8(&uStack_70,param_5);
    lStack_88 = lStack_68;
    uStack_90 = uStack_70;
    if (lStack_68 != 0) {
      do {
        FUN_10060fc34();
      } while (extraout_w10_00 != 0);
    }
    FUN_100670274(puVar1 + 0x17,&uStack_90);
    FUN_1006108b8(&uStack_90);
    lStack_98 = lStack_68;
    uStack_a0 = uStack_70;
    uStack_70 = 0;
    lStack_68 = 0;
    FUN_10067033c(*puVar3,&uStack_a0);
    func_0x0001006108b0();
    FUN_1006108b8(&uStack_70);
  }
  return param_1;
}



/* Entry: 10060fbb0; end: 10060fbfb;  */

undefined8 FUN_10060fbb0(undefined8 param_1)

{
  undefined1 auStack_d0 [168];
  undefined1 uStack_28;
  
  auStack_d0[0] = 0;
  uStack_28 = 0;
  FUN_10060f980();
  FUN_10060ff58(auStack_d0);
  return param_1;
}



/* Entry: 10060fbfc; end: 10060fc33;  */

undefined8 * FUN_10060fbfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cedb00;
  FUN_10060fbb0(param_1 + 3);
  return param_1;
}



/* Entry: 10060fc34; end: 10060fc43;  */

void FUN_10060fc34(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10060fc44; end: 10060fc67;  */

void FUN_10060fc44(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010060efb0();
  FUN_10060fc68();
  *(undefined8 *)(unaff_x20 + 0x230) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x50);
  return;
}



/* Entry: 10060fc68; end: 10060fc77;  */

void FUN_10060fc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x50);
  return;
}



/* Entry: 10060fc78; end: 10060fd77;  */

undefined8 * FUN_10060fc78(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  param_1[4] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_100456794(auStack_60,param_2,&UNK_10f77074d);
    FUN_10048a6c8(auStack_48,auStack_60,&UNK_10f77074f);
    FUN_100066230(param_1 + 0xc,auStack_48);
    func_0x000107c60ca0(auStack_48);
    func_0x000107c60ca0(auStack_60);
  }
  return param_1;
}



/* Entry: 10060fd78; end: 10060fd9f;  */

void FUN_10060fd78(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000107c30038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10060fda0; end: 10060fdc3;  */

undefined8 FUN_10060fda0(undefined8 param_1)

{
  FUN_10060fd78(param_1,0);
  return param_1;
}



/* Entry: 10060fdc4; end: 10060fea3;  */

void FUN_10060fdc4(long param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10002b838(&uStack_78,"");
  FUN_10002b838(auStack_50,"");
  FUN_10060fea4(auStack_38,*(undefined4 *)(param_1 + 0x54),&uStack_78,auStack_50);
  func_0x000107c60ca0(auStack_50);
  FUN_10060ff50();
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 != 0) {
    FUN_100610954(&uStack_78,*(undefined8 *)(param_1 + 0x98),auStack_38);
    if (cStack_58 == '\x01') {
      *(undefined8 *)(param_1 + 0x78) = uStack_70;
      *(undefined8 *)(param_1 + 0x70) = uStack_78;
      *(undefined8 *)(param_1 + 0x88) = uStack_60;
      *(undefined8 *)(param_1 + 0x80) = uStack_68;
      FUN_1006257e0(param_1);
    }
  }
  func_0x000107c60ca0(auStack_38);
  return;
}



/* Entry: 10060fea4; end: 10060ff4f;  */

undefined1 * FUN_10060fea4(undefined8 param_1,int param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar2 = auStack_50;
  if (param_2 == 1) {
    FUN_1006108e0(&UNK_10f77080a);
    func_0x0001006108ec();
    func_0x000100610900();
  }
  else {
    if (param_2 != 0) {
      pcVar1 = "";
      func_0x00010002b82c(param_1,"");
      func_0x000107c613d0(pcVar1);
      func_0x000107c60c50(unaff_x20,unaff_x19,pcVar1);
      return unaff_x20;
    }
    FUN_1006108e0(&UNK_10f770804);
    func_0x0001006108ec();
    func_0x000100610900();
  }
  func_0x000107c60ca0(auStack_38);
  func_0x000107c60ca0(auStack_50);
  return puVar2;
}



/* Entry: 10060ff50; end: 10060ff57;  */

void FUN_10060ff50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10060ff58; end: 10060ff77;  */

void FUN_10060ff58(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_1006700ac();
  }
  return;
}



/* Entry: 10060ff78; end: 10060ff93;  */

void FUN_10060ff78(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x28);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lVar2 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_100610004();
      } while (extraout_w11 != 0);
      do {
        FUN_100610004();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_100610014(&lStack_20);
    FUN_100610038();
    return;
  }
  return;
}



/* Entry: 10060ff94; end: 100610003;  */

void FUN_10060ff94(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    uVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      do {
        FUN_100610004();
      } while (extraout_w11 != 0);
      do {
        FUN_100610004();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_100610014(&uStack_20);
    FUN_100610038();
    return;
  }
  return;
}



/* Entry: 100610004; end: 100610013;  */

void FUN_100610004(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100610014; end: 100610037;  */

void FUN_100610014(long param_1)

{
  func_0x00010060f2b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100610038; end: 10061003f;  */

void FUN_100610038(void)

{
  FUN_100554494();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100610040; end: 100610063;  */

void FUN_100610040(long param_1)

{
  FUN_100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100610064; end: 1006100b3;  */

void FUN_100610064(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006100b4; end: 1006100e3;  */

void FUN_1006100b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_register_00005008;
  
  func_0x0001006100a4();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  FUN_100610038();
  return;
}



/* Entry: 1006100e4; end: 1006100fb;  */

void FUN_1006100e4(void)

{
  return;
}



/* Entry: 1006100fc; end: 10061013f;  */

void FUN_1006100fc(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10060f600();
    } while (extraout_w10 != 0);
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x38);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  FUN_10061014c(&uStack_20);
  return;
}



/* Entry: 100610140; end: 10061014b;  */

undefined8 FUN_100610140(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10061014c; end: 10061016f;  */

void FUN_10061014c(long param_1)

{
  FUN_100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100610170; end: 100610183;  */

void FUN_100610170(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100610174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,&stack0x000002d0);
  return;
}



/* Entry: 100610184; end: 1006101e7;  */

undefined8 FUN_100610184(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000100610178();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10061026c();
  func_0x000107c61180();
  func_0x000107c4fc40(uVar1,param_2,unaff_x20);
  func_0x000100610508();
  func_0x000107c61108(param_1);
  return uVar1;
}



/* Entry: 1006101e8; end: 1006101f7;  */

void FUN_1006101e8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006101f8; end: 10061026b;  */

void FUN_1006101f8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ceca28;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1006101e8();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100610298);
  func_0x000107c61180();
  func_0x000100610408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10061026c; end: 100610297;  */

void FUN_10061026c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1006101f8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


