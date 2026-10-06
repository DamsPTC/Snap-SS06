/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f9ec68; end: 100f9ec87;  */

void FUN_100f9ec68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9ec88);
  return;
}



/* Entry: 100f9ec88; end: 100f9ed47;  */

void FUN_100f9ec88(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xa8) = puVar1;
  func_0x000107c53ff4();
  func_0x000107c56a38(puVar1);
  func_0x000107c57e40(puVar1);
  uVar2 = 0x112d50a38;
  FUN_100f9f2e0(0x112d50a38,FUN_100f9f050,&UNK_10d9173c0);
  if (lVar4 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614f0(uVar3);
    func_0x000107c5fca8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9ed48,uVar3,uVar2);
  return;
}



/* Entry: 100f9ed48; end: 100f9ee6b;  */

void FUN_100f9ed48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f9ee6c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x000107c61168(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = &UNK_1103714b0;
  func_0x000107c613fc(&UNK_1103714b0,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_100f9f294;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100f9eee0;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103714c8;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5037c(uVar6,uVar5,puVar2);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f9ee6c; end: 100f9eedf;  */

void FUN_100f9ee6c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f9eeac,*(undefined8 *)(*unaff_x22 + 0xa0),0);
  return;
}



/* Entry: 100f9eee0; end: 100f9ef7b;  */

void FUN_100f9eee0(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 100f9ef7c; end: 100f9f047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9ef7c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112d508c8;
  lVar3 = 0x112d50a48;
  func_0x0001000285a8(0x112d50a48,&UNK_10d917438);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar2,lVar3);
  lVar2 = _DAT_1137ff108;
  lVar3 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar2,lVar3);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d508d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d508d8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d508e0));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d508e8);
  FUN_100f9f50c(*puVar1,puVar1[1],puVar1[2]);
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100f9f048; end: 100f9f04f;  */

void FUN_100f9f048(void)

{
  if (lRam0000000112d50918 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61c54c);
  return;
}



/* Entry: 100f9f050; end: 100f9f087;  */

void FUN_100f9f050(undefined8 param_1)

{
  if (lRam0000000112d50918 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61c54c);
  return;
}



/* Entry: 100f9f088; end: 100f9f1a3;  */

void FUN_100f9f088(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10d917378;
  uVar2 = 0x112d50928;
  lVar1 = 0x13f;
  func_0x000100f9f15c(0x13f,0x112d50928,PTR___sScS12ContinuationVMa_11034fd50);
  if (uVar2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112d50930;
    lVar1 = 0x13f;
    func_0x000100f9f15c(0x13f,0x112d50930,PTR___sScSMa_11034fda0);
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      puStack_40 = PTR___sBoWV_11034d678 + 0x40;
      puStack_30 = &UNK_10d917390;
      puStack_28 = &UNK_10d9173a8;
      puStack_38 = puStack_40;
      func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100f9f1a4; end: 100f9f1af;  */

void FUN_100f9f1a4(void)

{
  return;
}



/* Entry: 100f9f1b0; end: 100f9f207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9f1b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1137ff108;
  lVar3 = *unaff_x20;
  lVar2 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
                    /* WARNING: Could not recover jumptable at 0x000100f9f204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100f9f208; end: 100f9f257;  */

void FUN_100f9f208(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f9f258;
  plVar2[10] = param_1;
  plVar2[0xb] = lVar4;
  lVar3 = 0x112d50a40;
  func_0x0001000285a8(0x112d50a40,&UNK_10d917420);
  plVar2[0xc] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xd] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar1;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9d834,lVar4,0);
  return;
}



/* Entry: 100f9f258; end: 100f9f293;  */

void FUN_100f9f258(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f9f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f9f294; end: 100f9f2c3;  */

void FUN_100f9f294(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 100f9f2c4; end: 100f9f2df;  */

void FUN_100f9f2c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f9f2e0; end: 100f9f34f;  */

void FUN_100f9f2e0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100f9f350; end: 100f9f363;  */

void FUN_100f9f350(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  if (uStack_38 != 0) {
    uVar3 = uStack_38;
    func_0x000107c430f8();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_38);
    if (uVar3 != 0) {
      uVar4 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar2 = uVar3;
      func_0x000107c5fc54(uVar3,uVar4);
      func_0x000107c61170(uVar3);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar2);
        uVar4 = 0;
      }
      else {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9e624);
            (*pcVar1)();
          }
          uVar4 = *(undefined8 *)(uVar2 + 0x20);
          func_0x000107c615f0(uVar4);
        }
        else {
          uVar4 = 0;
          FUN_100fb0ba0(0,uVar2);
        }
        func_0x000107c6142c(uVar2);
      }
      *param_1 = uVar4;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 100f9f364; end: 100f9f50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f9f364(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 == 1 || (param_2 & 0xff) == 0) {
    if ((param_2 & 0xff) == 0) {
      uStack_40 = 0x736569726f6d656d;
      uStack_38 = 0xe90000000000003a;
      func_0x000107c5fb78(*(undefined8 *)(param_1 + _DAT_112fda128),
                          ((undefined8 *)(param_1 + _DAT_112fda128))[1]);
      goto LAB_100f9f4f4;
    }
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    param_2 = 0xe500000000000000;
    func_0x000107c5fb78(0x3a70616e73);
    func_0x000107c4d9ec();
    func_0x000107c61180();
    if (param_1 == 0) goto LAB_100f9f460;
LAB_100f9f408:
    lVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
LAB_100f9f468:
    uVar3 = 0x112d35ff8;
    lStack_50 = lVar4;
    uStack_48 = param_2;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c603d0(&lStack_50,&uStack_40,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  else {
    if (uVar1 == 2) {
      uStack_40 = 0;
      uStack_38 = 0xe000000000000000;
      param_2 = 0xe600000000000000;
      func_0x000107c5fb78(0x3a7972746e65);
      func_0x000107c4d9ec();
      func_0x000107c61180();
      if (param_1 != 0) goto LAB_100f9f408;
LAB_100f9f460:
      lVar4 = 0;
      param_2 = 0;
      goto LAB_100f9f468;
    }
    uStack_40 = 0x3a6870;
    uStack_38 = 0xe300000000000000;
    func_0x000107c4b800();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(lVar4,param_2);
  }
  func_0x000107c6142c(param_2);
LAB_100f9f4f4:
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 100f9f50c; end: 100f9f56b;  */

void FUN_100f9f50c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100f9f56c; end: 100f9f5eb;  */

void FUN_100f9f56c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f9f5ec;
  *(undefined1 *)(plVar4 + 0xc) = uVar3;
  plVar4[7] = lVar1;
  plVar4[8] = lVar2;
  plVar4[5] = param_1;
  plVar4[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(param_1,param_2,param_3,FUN_100f9db04,0,0);
  return;
}



/* Entry: 100f9f5ec; end: 100f9f62f;  */

void FUN_100f9f5ec(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f9f62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100f9f630; end: 100f9f637;  */

void FUN_100f9f630(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f9f638; end: 100f9f6d7;  */

void FUN_100f9f638(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  lVar2 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0x112d50c80;
  func_0x0001000285a8(0x112d50c80,&UNK_10d918580);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9f6d8);
  return;
}



/* Entry: 100f9f6d8; end: 100f9f847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9f6d8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar9 = *(long *)(unaff_x22 + 0x30);
  uVar12 = *(undefined8 *)(lVar9 + _DAT_112d50a80);
  *(long *)(lVar9 + _DAT_112d50a80) = lVar5;
  func_0x000107c61434(lVar5);
  func_0x000107c6142c(uVar12);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
  uVar12 = 0x112d50c88;
  func_0x0001000285a8(0x112d50c88,&UNK_10d917610);
  func_0x000107c5fd28(uVar6,(undefined8 *)(unaff_x22 + 0x20),uVar12);
  (**(code **)(lVar2 + 8))(uVar6,uVar7);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined1 *)(unaff_x22 + 0x18) = 2;
  uVar12 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd28(uVar3,(undefined8 *)(unaff_x22 + 0x10),uVar12);
  (**(code **)(lVar8 + 8))(uVar3,uVar4);
  lVar9 = lVar9 + _DAT_112d50a70;
  uVar12 = *(undefined8 *)(lVar9 + 0x18);
  lVar2 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar12);
  piVar11 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100f9f848;
                    /* WARNING: Could not recover jumptable at 0x000100f9f844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(*(undefined8 *)(unaff_x22 + 0x28),uVar12,lVar2);
  return;
}



/* Entry: 100f9f848; end: 100f9f893;  */

void FUN_100f9f848(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9f894,uVar1,0);
  return;
}



/* Entry: 100f9f894; end: 100f9f9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9f894(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  lVar2 = _DAT_112d50a78;
  puVar1 = PTR___sytN_11034f1b0;
  lVar11 = *(long *)(unaff_x22 + 0x30);
  lVar7 = *(long *)(lVar11 + _DAT_112d50a78);
  lVar9 = lVar11;
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar7);
    lVar9 = *(long *)(unaff_x22 + 0x30);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = &UNK_110371698;
  func_0x000107c613fc(&UNK_110371698,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar9);
  puVar4 = &UNK_1103716e8;
  func_0x000107c613fc(&UNK_1103716e8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  func_0x000107c61434(uVar10);
  uVar10 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,1,0,0,&UNK_10d917620,puVar4,puVar1 + 8);
  func_0x000107c61574(puVar4);
  uVar5 = *(undefined8 *)(lVar11 + lVar2);
  *(undefined8 *)(lVar11 + lVar2) = uVar10;
  func_0x000107c61574(uVar5);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100f9f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9f9d4; end: 100f9fa3f;  */

void FUN_100f9f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  lVar2 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9fa40,0,0);
  return;
}



/* Entry: 100f9fa40; end: 100f9fb47;  */

void FUN_100f9fa40(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  if (lVar7 != 0) {
    pcVar1 = *(code **)(lVar7 + 0x90);
    uVar2 = *(undefined8 *)(lVar7 + 0x98);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar1)(unaff_x22 + 0x74,uVar6);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x7c);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x74);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x8c);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x84);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x9c);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x94);
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x22 + 0x5c) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x54) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x4c) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x44) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x3c) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x34) = uVar11;
    *(undefined1 *)(unaff_x22 + 100) = 0;
    plVar3 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100f9fb48;
    lVar5 = *(long *)(unaff_x22 + 0xb0);
    plVar3[5] = unaff_x22 + 0x34;
    plVar3[6] = lVar7;
    plVar3[4] = lVar5;
    lVar5 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[7] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa0328,lVar7,0);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000100f9fb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9fb48; end: 100f9fba7;  */

void FUN_100f9fb48(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xe0) = param_1;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100f9fba8;
  }
  else {
    pcVar1 = FUN_100f9fc68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100f9fba8; end: 100f9fc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9fba8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    *(undefined1 *)(unaff_x22 + 0x70) = 0;
    uVar5 = 0x112d50c48;
    func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
    func_0x000107c5fd28(uVar1,(undefined8 *)(unaff_x22 + 0x68),uVar5);
    func_0x000107c61574(uVar3);
    (**(code **)(lVar4 + 8))(uVar1,uVar2);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c61574(uVar5);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000100f9fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9fc68; end: 100f9fd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9fc68(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    *(undefined1 *)(unaff_x22 + 0x30) = 1;
    func_0x000107c614b0(uVar5);
    uVar6 = 0x112d50c48;
    func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
    func_0x000107c5fd28(uVar1,(undefined8 *)(unaff_x22 + 0x28),uVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c614ac(uVar5);
    (**(code **)(lVar4 + 8))(uVar1,uVar2);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c61574(uVar6);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000100f9fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9fd44; end: 100f9fd5b;  */

void FUN_100f9fd44(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9fd5c);
  return;
}



/* Entry: 100f9fd5c; end: 100f9fe7b;  */

void FUN_100f9fd5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = &UNK_110371698;
  func_0x000107c613fc(&UNK_110371698,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar6);
  puVar2 = &UNK_1103716c0;
  func_0x000107c613fc(&UNK_1103716c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c61434(uVar3);
  uVar3 = 0x112d50c68;
  func_0x0001000285a8(0x112d50c68,&UNK_10d9175e8);
  uVar4 = 0x41;
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d917600,puVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  func_0x000107c61574(puVar2);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f9fe7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x10,uVar4,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100f9fe7c; end: 100f9fee7;  */

void FUN_100f9fe7c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x30));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100f9fee8;
  }
  else {
    pcVar2 = (code *)0x100f9fef4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x20),0);
  return;
}



/* Entry: 100f9fee8; end: 100f9ff1b;  */

void FUN_100f9fee8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100f9fef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 100f9ff1c; end: 100f9ffcf;  */

void FUN_100f9ff1c(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined1 *)(unaff_x22 + 0x90) = 1;
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100f9ffd0;
    lVar3 = *(long *)(unaff_x22 + 0x38);
    plVar1[5] = unaff_x22 + 0x60;
    plVar1[6] = lVar4;
    plVar1[4] = lVar3;
    lVar3 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[7] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa0328,lVar4,0);
    return;
  }
  **(undefined8 **)(unaff_x22 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x000100f9ffcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9ffd0; end: 100fa003b;  */

void FUN_100f9ffd0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_100fa003c;
  }
  else {
    pcVar1 = (code *)0x100fa007c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa003c; end: 100fa00af;  */

void FUN_100fa003c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined8 **)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000100fa0078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa00b0; end: 100fa00c7;  */

void FUN_100fa00b0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa00c8);
  return;
}



/* Entry: 100fa00c8; end: 100fa0183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa00c8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar3 = _DAT_112d50a78;
  lVar5 = *(long *)(unaff_x22 + 0x38);
  lVar6 = *(long *)(lVar5 + _DAT_112d50a78);
  if (lVar6 == 0) {
    uVar1 = 0;
    lVar6 = lVar5;
  }
  else {
    func_0x000107c6157c(lVar6);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar6);
    uVar1 = *(undefined8 *)(lVar5 + lVar3);
    lVar6 = *(long *)(unaff_x22 + 0x38);
  }
  *(undefined8 *)(lVar5 + lVar3) = 0;
  func_0x000107c61574(uVar1);
  plVar7 = *(long **)(lVar6 + 0x78);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fa0184;
  plVar2[5] = unaff_x22 + 0x10;
  plVar2[6] = (long)plVar7;
  lVar5 = *(long *)(*plVar7 + 0x50);
  plVar2[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar4;
  lVar3 = *(long *)(lVar5 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fa0184; end: 100fa01cb;  */

void FUN_100fa0184(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa01cc,uVar1,0);
  return;
}



/* Entry: 100fa01cc; end: 100fa0243;  */

void FUN_100fa01cc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fa0244;
                    /* WARNING: Could not recover jumptable at 0x000100fa0240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 100fa0244; end: 100fa0327;  */

void FUN_100fa0244(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fa0290,uVar1,0);
  return;
}



/* Entry: 100fa0328; end: 100fa0497;  */

void FUN_100fa0328(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar10,1,1,lVar3);
  uVar10 = *(undefined8 *)(lVar9 + 0x70);
  uVar11 = *(undefined8 *)(lVar9 + 0x80);
  puVar4 = &UNK_110371670;
  func_0x000107c613fc(&UNK_110371670,0x58,7);
  *(undefined **)(unaff_x22 + 0x40) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  uVar14 = puVar1[1];
  uVar13 = *puVar1;
  uVar16 = puVar1[3];
  uVar15 = puVar1[2];
  uVar18 = puVar1[5];
  uVar17 = puVar1[4];
  puVar4[0x48] = *(undefined1 *)(puVar1 + 6);
  *(undefined8 *)(puVar4 + 0x40) = uVar18;
  *(undefined8 *)(puVar4 + 0x38) = uVar17;
  *(undefined8 *)(puVar4 + 0x30) = uVar16;
  *(undefined8 *)(puVar4 + 0x28) = uVar15;
  *(undefined8 *)(puVar4 + 0x20) = uVar14;
  *(undefined8 *)(puVar4 + 0x18) = uVar13;
  *(undefined8 *)(puVar4 + 0x50) = uVar11;
  plVar12 = (long *)0xe0;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar12;
  lVar9 = 0x112d50c60;
  func_0x0001000285a8(0x112d50c60,&UNK_10d9175e0);
  lVar3 = 0x112d50c68;
  func_0x0001000285a8(0x112d50c68,&UNK_10d9175e8);
  lVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar6 = lVar5;
  FUN_100fa1620();
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_100fa0498;
  puVar2 = PTR___ss5ErrorWS_11034ee10;
  lVar7 = *(long *)(unaff_x22 + 0x38);
  plVar12[0x16] = unaff_x22 + 0x10;
  plVar12[0x17] = unaff_x22 + 0x18;
  plVar12[0x14] = lVar6;
  plVar12[0x15] = (long)puVar2;
  plVar12[0x12] = lVar3;
  plVar12[0x13] = lVar5;
  plVar12[0x10] = (long)puVar4;
  plVar12[0x11] = lVar9;
  plVar12[0xe] = lVar7;
  plVar12[0xf] = (long)&UNK_10d9175d8;
  lVar9 = *(long *)(lVar5 + -8);
  plVar12[0x18] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar12[0x19] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 100fa0498; end: 100fa051b;  */

void FUN_100fa0498(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x40);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    func_0x0001000abe54(*(undefined8 *)(lVar3 + 0x38));
    func_0x000107c61574(uVar1);
    pcVar2 = FUN_100fa051c;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0x40));
    pcVar2 = FUN_100fa080c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,0);
  return;
}



/* Entry: 100fa051c; end: 100fa080b;  */

void FUN_100fa051c(void)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x22;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined *puVar4;
  
  lVar20 = *(long *)(unaff_x22 + 0x50);
  uVar9 = *(ulong *)(lVar20 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar22 = 0;
    do {
      if (*(ulong *)(lVar20 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa07f4);
        (*pcVar1)();
      }
      uVar14 = *(ulong *)(lVar20 + 0x20 + uVar22 * 8);
      if (uVar14 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar16 = uVar14 & 0xffffffffffffff8;
        if ((uVar14 & 0x8000000000000000) != 0) {
          uVar16 = uVar14;
        }
        func_0x000107c60480();
      }
      uVar17 = (ulong)puVar12 >> 0x3e;
      if (uVar17 == 0) {
        puVar3 = *(undefined **)((undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
        if (((ulong)puVar12 & 0x8000000000000000) != 0) {
          puVar3 = puVar12;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar3,uVar16)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa07f8);
        (*pcVar1)();
      }
      puVar3 = puVar3 + uVar16;
      func_0x000107c61434(uVar14);
      puVar4 = puVar12;
      func_0x000107c61550();
      uVar2 = 0;
      if (uVar17 == 0) {
        uVar2 = (uint)puVar4;
      }
      puVar4 = (undefined *)(ulong)uVar2;
      if (uVar2 == 1) {
        uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar15 + 0x18) >> 1;
        if ((long)uVar10 < (long)puVar3) goto LAB_100fa0600;
      }
      else {
LAB_100fa0600:
        if (uVar17 == 0) {
          puVar11 = *(undefined **)((undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if (((ulong)puVar12 & 0x8000000000000000) != 0) {
            puVar11 = puVar12;
          }
          func_0x000107c60480();
        }
        if ((long)puVar11 <= (long)puVar3) {
          puVar11 = puVar3;
        }
        FUN_100fb4ec0(puVar4,puVar11,1,puVar12);
        uVar15 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar15 + 0x18) >> 1;
        puVar12 = puVar4;
      }
      lVar18 = *(long *)(uVar15 + 0x10);
      if (uVar14 >> 0x3e == 0) {
        uVar17 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
        if (uVar17 != 0) {
          if (uVar10 - lVar18 < uVar17) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa0808);
            (*pcVar1)();
          }
          uVar5 = 0;
          func_0x000100fa1670(0);
          func_0x000107c6140c(uVar15 + lVar18 * 8 + 0x20,(uVar14 & 0xffffffffffffff8) + 0x20,uVar17,
                              uVar5);
          goto LAB_100fa0724;
        }
LAB_100fa0570:
        func_0x000107c6142c(uVar14);
        if (0 < (long)uVar16) goto LAB_100fa07f8;
      }
      else {
        uVar17 = uVar14 & 0xffffffffffffff8;
        if ((uVar14 & 0x8000000000000000) != 0) {
          uVar17 = uVar14;
        }
        uVar6 = uVar17;
        func_0x000107c60480();
        if (uVar6 == 0) goto LAB_100fa0570;
        func_0x000107c60480();
        if ((long)(uVar10 - lVar18) < (long)uVar17) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa0804);
          (*pcVar1)();
        }
        if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa080c);
          (*pcVar1)();
        }
        lVar18 = uVar15 + lVar18 * 8;
        puVar13 = (undefined8 *)(lVar18 + 0x20);
        if ((uVar14 & 0xc000000000000001) == 0) {
          uVar5 = *(undefined8 *)(uVar14 + 0x20);
          *puVar13 = uVar5;
          lVar19 = uVar6 - 1;
          if (lVar19 != 0) {
            uVar8 = uVar5;
            puVar13 = (undefined8 *)(lVar18 + 0x28);
            puVar21 = (undefined8 *)(uVar14 + 0x28);
            do {
              uVar5 = *puVar21;
              *puVar13 = uVar5;
              func_0x000107c61174(uVar8);
              lVar19 = lVar19 + -1;
              uVar8 = uVar5;
              puVar13 = puVar13 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar19 != 0);
          }
          func_0x000107c61174(uVar5);
        }
        else {
          uVar10 = 0;
          do {
            uVar7 = uVar10;
            func_0x000100fb0f0c(uVar10,uVar14);
            puVar13[uVar10] = uVar7;
            uVar10 = uVar10 + 1;
          } while (uVar6 != uVar10);
        }
LAB_100fa0724:
        func_0x000107c6142c(uVar14);
        if ((long)uVar17 < (long)uVar16) {
LAB_100fa07f8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa07fc);
          (*pcVar1)();
        }
        if (0 < (long)uVar17) {
          if (SCARRY8(*(long *)(uVar15 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa0800);
            (*pcVar1)();
          }
          *(ulong *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + uVar17;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar9);
    lVar20 = *(long *)(unaff_x22 + 0x50);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6142c(lVar20);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100fa07ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar12);
  return;
}



/* Entry: 100fa080c; end: 100fa084b;  */

void FUN_100fa080c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000abe54(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa0848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa084c; end: 100fa08cf;  */

void FUN_100fa084c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar4 = *param_2;
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  *(undefined1 *)(unaff_x22 + 0xd0) = *(undefined1 *)(param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa08d0,0,0);
  return;
}



/* Entry: 100fa08d0; end: 100fa0a23;  */

/* WARNING: Removing unreachable block (ram,0x000100fa090c) */

void FUN_100fa08d0(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fa0a24;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 100fa0a24; end: 100fa0a87;  */

void FUN_100fa0a24(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(lVar3 + 0xb0) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_100fa0a88;
  plVar5 = *(long **)(lVar3 + 0x60);
  plVar1[5] = lVar3 + 0x10;
  plVar1[6] = (long)plVar5;
  lVar4 = *(long *)(*plVar5 + 0x50);
  plVar1[7] = lVar4;
  lVar3 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar3 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fa0a88; end: 100fa0acf;  */

void FUN_100fa0a88(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa0ad0,0,0);
  return;
}



/* Entry: 100fa0ad0; end: 100fa0b57;  */

void FUN_100fa0ad0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fa0b58;
                    /* WARNING: Could not recover jumptable at 0x000100fa0b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined1 *)(unaff_x22 + 0xd0),
             *(undefined8 *)(unaff_x22 + 0x68),uVar2,lVar3);
  return;
}



/* Entry: 100fa0b58; end: 100fa0bc3;  */

void FUN_100fa0b58(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 200) = param_1;
    pcVar1 = FUN_100fa0bc4;
  }
  else {
    pcVar1 = FUN_100fa0cb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa0bc4; end: 100fa0cb7;  */

void FUN_100fa0bc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  bVar6 = *(byte *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar5 = *(long *)(unaff_x22 + 0x88);
  puVar10 = *(undefined8 **)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar4);
  pcVar9 = *(code **)(lVar5 + 8);
  (*pcVar9)(uVar1,uVar2);
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  uVar7 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar5 + 0x18))(param_1,2 < bVar6,uVar7,lVar5);
  func_0x000107c615e8(uVar3);
  (*pcVar9)(uVar4,uVar2);
  *puVar10 = uVar8;
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa0cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa0cb8; end: 100fa0dbb;  */

void FUN_100fa0cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  bVar7 = *(byte *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar5 = *(long *)(unaff_x22 + 0x88);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x78);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar4);
  pcVar10 = *(code **)(lVar5 + 8);
  (*pcVar10)(uVar1,uVar2);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  uVar8 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar5 + 0x20))(param_1,2 < bVar7,uVar9,uVar8,lVar5);
  func_0x000107c615e8(uVar3);
  func_0x000107c61654();
  (*pcVar10)(uVar4,uVar2);
  *puVar6 = uVar9;
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa0db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa0dbc; end: 100fa0ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa0dbc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  lVar1 = _DAT_112d50a50;
  lVar2 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112d50a58;
  lVar2 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112d50a60;
  lVar2 = 0x112d50c50;
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112d50a68;
  lVar2 = 0x112d50c88;
  func_0x0001000285a8(0x112d50c88,&UNK_10d917610);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x0001000834e4(unaff_x20 + _DAT_112d50a70);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d50a78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d50a80));
  func_0x000107c61470();
  return;
}



/* Entry: 100fa0ef8; end: 100fa0f0f;  */

void FUN_100fa0ef8(void)

{
  FUN_100fa0dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100fa0f10; end: 100fa0f17;  */

void FUN_100fa0f10(void)

{
  if (lRam0000000112d50ab0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61c630);
  return;
}



/* Entry: 100fa0f18; end: 100fa0f4f;  */

void FUN_100fa0f18(undefined8 param_1)

{
  if (lRam0000000112d50ab0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61c630);
  return;
}



/* Entry: 100fa0f50; end: 100fa10fb;  */

void FUN_100fa0f50(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBoWV_11034d678 + 0x40;
  puStack_88 = &UNK_10d9174e0;
  puStack_60 = PTR___syycWV_11034f1c0 + 0x40;
  uVar2 = 0x112d50ac0;
  lVar1 = 0x13f;
  puStack_78 = puStack_80;
  puStack_70 = puStack_80;
  puStack_68 = puStack_80;
  func_0x000100fa10b8(0x13f,0x112d50ac0,&UNK_110376aa8,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112d50ac8;
    lVar1 = 0x13f;
    func_0x000100fa10b8(0x13f,0x112d50ac8,&UNK_110376aa8,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112d50ad0;
      lVar1 = 0x13f;
      func_0x000100fa10b8(0x13f,0x112d50ad0,PTR___sSiN_11034deb0,PTR___sScSMa_11034fda0);
      if (uVar2 < 0x40) {
        lStack_48 = *(long *)(lVar1 + -8) + 0x40;
        uVar2 = 0x112d50ad8;
        lVar1 = 0x13f;
        func_0x000100fa10b8(0x13f,0x112d50ad8,PTR___sSiN_11034deb0,
                            PTR___sScS12ContinuationVMa_11034fd50);
        if (uVar2 < 0x40) {
          lStack_40 = *(long *)(lVar1 + -8) + 0x40;
          puStack_38 = &UNK_10d9174f8;
          puStack_28 = PTR___sBbWV_11034d660 + 0x40;
          puStack_30 = &UNK_10d917510;
          func_0x000107c61630(param_1,0x100,0xd,&puStack_88,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Entry: 100fa10fc; end: 100fa1107;  */

void FUN_100fa10fc(void)

{
  return;
}



/* Entry: 100fa1108; end: 100fa1157;  */

void FUN_100fa1108(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fa1158;
  plVar2[5] = param_1;
  plVar2[6] = lVar4;
  lVar3 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  plVar2[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[8] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[9] = uVar1;
  lVar3 = 0x112d50c80;
  func_0x0001000285a8(0x112d50c80,&UNK_10d918580);
  plVar2[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xb] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xc] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9f6d8,lVar4,0);
  return;
}



/* Entry: 100fa1158; end: 100fa1193;  */

void FUN_100fa1158(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa1190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa1194; end: 100fa11e3;  */

void FUN_100fa1194(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fa11e4;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9fd5c,lVar2,0);
  return;
}



/* Entry: 100fa11e4; end: 100fa122b;  */

void FUN_100fa11e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa1228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa122c; end: 100fa12db;  */

void FUN_100fa122c(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fa1824;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa00c8,lVar2,0);
  return;
}



/* Entry: 100fa12dc; end: 100fa1373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa12dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined1 *)(unaff_x22 + 0x18) = 2;
  uVar4 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd28(uVar1,(undefined8 *)(unaff_x22 + 0x10),uVar4);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa1374; end: 100fa1413;  */

void FUN_100fa1374(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fa138c,uVar1,0);
  return;
}



/* Entry: 100fa1414; end: 100fa14b7;  */

void FUN_100fa1414(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long param_5,undefined8 param_6)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  lVar1 = *unaff_x20;
  lVar2 = *param_4;
  func_0x0001000285a8(param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x000100fa145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(param_1,lVar1 + lVar2,param_5);
  return;
}



/* Entry: 100fa14b8; end: 100fa14cf;  */

void FUN_100fa14b8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa14d0,uVar1,0);
  return;
}



/* Entry: 100fa14d0; end: 100fa1543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa14d0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112d50a80);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  plVar1 = (long *)0x40;
  func_0x000107c61434(lVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fa1544;
  lVar2 = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = lVar3;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9fd5c,lVar2,0);
  return;
}



/* Entry: 100fa1544; end: 100fa159b;  */

void FUN_100fa1544(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa1598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fa159c; end: 100fa161f;  */

void FUN_100fa159c(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa1820;
  plVar3[0xe] = lVar5;
  plVar3[0xf] = param_3;
  plVar3[0xc] = lVar4;
  plVar3[0xd] = unaff_x20 + 0x18;
  plVar3[0xb] = param_1;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar3[0x10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x11] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x12] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar4 = *param_2;
  plVar3[0x13] = uVar2;
  plVar3[0x14] = lVar4;
  *(char *)(plVar3 + 0x1a) = (char)param_2[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa08d0,0,0);
  return;
}



/* Entry: 100fa1620; end: 100fa16b3;  */

void FUN_100fa1620(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d50c70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d50c60;
  func_0x00010002969c(0x112d50c60,&UNK_10d9175e0);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112d50c70 = puVar2;
  return;
}



/* Entry: 100fa16b4; end: 100fa1717;  */

void FUN_100fa16b4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa1718;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9ff1c,0,0);
  return;
}



/* Entry: 100fa1718; end: 100fa177f;  */

void FUN_100fa1718(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa1780; end: 100fa17e3;  */

void FUN_100fa1780(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa17e4;
  plVar3[0x15] = lVar4;
  plVar3[0x16] = lVar1;
  lVar4 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  plVar3[0x17] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x18] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x19] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9fa40,0,0);
  return;
}



/* Entry: 100fa17e4; end: 100fa181f;  */

void FUN_100fa17e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa1820; end: 100fa183f;  */

void FUN_100fa1820(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa1840; end: 100fa18df;  */

void FUN_100fa1840(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0xb0) + 0x30);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fa1898;
  plVar1[5] = unaff_x22 + 0x90;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fa18e0; end: 100fa1fdb;  */

void FUN_100fa18e0(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(ulong *)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  *(ulong *)(unaff_x22 + 200) = uVar15;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0;
  uVar5 = uVar15;
  FUN_100fb5168(0,uVar15,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  *(undefined **)(unaff_x22 + 0x98) = PTR___swiftEmptySetSingleton_11034f1d8;
  if (uVar15 != 0) {
    lVar16 = 0;
    lVar19 = 0;
    lVar12 = 0;
    do {
      *(ulong *)(unaff_x22 + 0xe8) = uVar4;
      *(undefined **)(unaff_x22 + 0xf0) = puVar10;
      *(long *)(unaff_x22 + 0xd8) = lVar19;
      *(long *)(unaff_x22 + 0xe0) = lVar12;
      *(long *)(unaff_x22 + 0xd0) = lVar16;
      lVar12 = *(long *)(unaff_x22 + 0xa8) + lVar12 * 0x10;
      lVar18 = *(long *)(lVar12 + 0x20);
      *(long *)(unaff_x22 + 0xf8) = lVar18;
      bVar1 = *(byte *)(lVar12 + 0x28);
      uVar15 = (ulong)bVar1;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
LAB_100fa1cb0:
          func_0x000100f9d71c(lVar18,uVar15);
          func_0x000100f9d71c(lVar18,uVar15);
          uVar5 = *(ulong *)(uVar4 + 0x10);
          lVar12 = uVar5 + 1;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100fb5168(uVar8,lVar12,1,uVar4);
            uVar4 = uVar8;
          }
          puVar13 = (undefined *)0x0;
          uVar8 = uVar15;
        }
        else {
          lVar12 = lVar18;
          func_0x000107c615f0();
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (lVar12 == 0) {
            lVar16 = lVar19 + 1;
            if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa1fd8);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + 0x10);
            uVar15 = *(ulong *)(uVar4 + 0x18);
            lVar12 = uVar5 + 1;
            func_0x000107c615f0(lVar18);
            if (uVar15 >> 1 <= uVar5) {
              uVar15 = (ulong)(1 < uVar15);
              FUN_100fb5168(uVar15,lVar12,1,uVar4);
              uVar4 = uVar15;
            }
            puVar13 = (undefined *)0x0;
            uVar15 = 1;
            uVar8 = 1;
            lVar19 = lVar16;
          }
          else {
            lVar17 = lVar12;
            func_0x000107c5faec();
            func_0x000107c61170(lVar12);
            func_0x000107c61434(uVar5);
            uVar15 = unaff_x22 + 0x60U;
            func_0x000100403b00(unaff_x22 + 0x60U,lVar17,uVar5);
            func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
            if ((uVar15 & 1) != 0) {
              func_0x000107c61434(uVar5);
              puVar13 = puVar10;
              func_0x000107c61558();
              puVar9 = puVar10;
              if (((ulong)puVar13 & 1) == 0) {
                puVar9 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              }
              uVar15 = *(ulong *)(puVar9 + 0x10);
              puVar10 = puVar9;
              if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                func_0x0001000d182c(puVar10,uVar15 + 1,1,puVar9);
              }
              *(ulong *)(puVar10 + 0x10) = uVar15 + 1;
              *(long *)(puVar10 + uVar15 * 0x10 + 0x20) = lVar17;
              *(ulong *)(puVar10 + uVar15 * 0x10 + 0x28) = uVar5;
            }
            puVar13 = (undefined *)0x112d38280;
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            func_0x000107c613fc();
            *(undefined8 *)(puVar13 + 0x18) = 2;
            *(undefined8 *)(puVar13 + 0x10) = 1;
            *(long *)(puVar13 + 0x20) = lVar17;
            *(ulong *)(puVar13 + 0x28) = uVar5;
            uVar5 = *(ulong *)(uVar4 + 0x10);
            uVar15 = *(ulong *)(uVar4 + 0x18);
            lVar12 = uVar5 + 1;
            func_0x000107c615f0(lVar18);
            if (uVar15 >> 1 <= uVar5) {
              uVar15 = (ulong)(1 < uVar15);
              FUN_100fb5168(uVar15,lVar12,1,uVar4);
              uVar4 = uVar15;
            }
            uVar15 = 1;
            uVar8 = 0x8000000000000001;
          }
        }
      }
      else {
        if (bVar1 != 2) goto LAB_100fa1cb0;
        uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar14 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x28);
        puVar10 = &UNK_110371730;
        func_0x000107c613fc(&UNK_110371730,0x20,7);
        *(undefined **)(unaff_x22 + 0x100) = puVar10;
        *(undefined8 *)(puVar10 + 0x10) = uVar14;
        *(long *)(puVar10 + 0x18) = lVar18;
        func_0x000107c615f0(lVar18);
        func_0x000100f9d71c();
        func_0x000107c615f0(uVar14);
        func_0x0001000285a8(0x112d50c98,&UNK_10d917650);
        puVar13 = &UNK_110371758;
        func_0x000107c613fc(&UNK_110371758,0x20,7);
        *(code **)(puVar13 + 0x10) = FUN_100fa3898;
        *(undefined **)(puVar13 + 0x18) = puVar10;
        func_0x000107c6157c(puVar10);
        func_0x0001048897a0(uVar7,1,0,0x100fa38a0,puVar13);
        *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
        func_0x000107c61574(puVar13);
        func_0x000104888eec((undefined8 *)(unaff_x22 + 0x80));
        if (*(char *)(unaff_x22 + 0x88) == -1) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x70;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_100fa1fdc;
          lVar16 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar16,0);
          puVar10 = &UNK_110371780;
          func_0x000107c613fc(&UNK_110371780,0x18,7);
          *(long *)(puVar10 + 0x10) = lVar16;
          func_0x00010075a04c(0,1,FUN_100fa38a8,puVar10);
          func_0x000107c61574(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        puVar10 = *(undefined **)(unaff_x22 + 0x80);
        if (*(char *)(unaff_x22 + 0x88) == '\x01') {
          *(undefined **)(unaff_x22 + 0xa0) = puVar10;
          iVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar3 != 0) {
            uVar7 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(unaff_x22 + 0xa0,uVar7,PTR___ss5ErrorWS_11034ee10);
          }
          uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
          FUN_100fa38f4(puVar10,1);
          func_0x000107c61574(uVar7);
          lVar16 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
          func_0x000107c61574(uVar7);
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar10 != (undefined *)0x0) {
            puVar13 = puVar10;
          }
          lVar16 = *(long *)(puVar13 + 0x10);
        }
        if (lVar16 == 0) {
          lVar19 = *(long *)(unaff_x22 + 0xd8);
          func_0x000107c6142c();
          lVar16 = lVar19 + 1;
          if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa1fdc);
            (*pcVar2)();
          }
          uVar8 = *(ulong *)(unaff_x22 + 0xe8);
          uVar5 = *(ulong *)(uVar8 + 0x10);
          uVar15 = *(ulong *)(uVar8 + 0x18);
          lVar12 = uVar5 + 1;
          func_0x000107c615f0(*(undefined8 *)(unaff_x22 + 0xf8));
          uVar4 = uVar8;
          if (uVar15 >> 1 <= uVar5) {
            uVar4 = (ulong)(1 < uVar15);
            FUN_100fb5168(uVar4,lVar12,1,uVar8);
          }
          puVar13 = (undefined *)0x0;
          puVar10 = *(undefined **)(unaff_x22 + 0xf0);
          uVar8 = 2;
          uVar15 = 2;
          lVar19 = lVar16;
        }
        else {
          puVar10 = *(undefined **)(unaff_x22 + 0xf0);
          puVar20 = (undefined8 *)(puVar13 + 0x28);
          do {
            uVar7 = puVar20[-1];
            uVar14 = *puVar20;
            func_0x000107c61438(uVar14,2);
            uVar5 = unaff_x22 + 0x50U;
            func_0x000100403b00(unaff_x22 + 0x50U,uVar7,uVar14);
            func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x58));
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(uVar14);
            }
            else {
              puVar9 = puVar10;
              func_0x000107c61558();
              puVar6 = puVar10;
              if (((ulong)puVar9 & 1) == 0) {
                puVar6 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              }
              uVar5 = *(ulong *)(puVar6 + 0x10);
              puVar10 = puVar6;
              if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar5) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                func_0x0001000d182c(puVar10,uVar5 + 1,1,puVar6);
              }
              *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
              *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x20) = uVar7;
              *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x28) = uVar14;
            }
            puVar20 = puVar20 + 2;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          lVar16 = *(long *)(unaff_x22 + 0xe8);
          func_0x000100f9d71c(*(undefined8 *)(unaff_x22 + 0xf8),2);
          uVar5 = *(ulong *)(lVar16 + 0x10);
          uVar15 = *(ulong *)(lVar16 + 0x18);
          lVar12 = uVar5 + 1;
          uVar4 = *(ulong *)(unaff_x22 + 0xe8);
          if (uVar15 >> 1 <= uVar5) {
            uVar4 = (ulong)(1 < uVar15);
            FUN_100fb5168(uVar4,lVar12,1,*(ulong *)(unaff_x22 + 0xe8));
          }
          lVar16 = *(long *)(unaff_x22 + 0xd0);
          uVar15 = 2;
          uVar8 = 0x8000000000000002;
          lVar19 = *(long *)(unaff_x22 + 0xd8);
        }
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar18 = *(long *)(unaff_x22 + 0xe0);
      lVar17 = *(long *)(unaff_x22 + 200);
      *(long *)(uVar4 + 0x10) = lVar12;
      lVar12 = uVar4 + uVar5 * 0x18;
      *(undefined8 *)(lVar12 + 0x20) = uVar7;
      *(ulong *)(lVar12 + 0x28) = uVar8;
      *(undefined **)(lVar12 + 0x30) = puVar13;
      func_0x000100f9d754();
      if (lVar18 + 1 == lVar17) goto LAB_100fa1eec;
      lVar12 = *(long *)(unaff_x22 + 0xe0) + 1;
      uVar5 = uVar15;
    } while( true );
  }
  lVar16 = 0;
  lVar19 = 0;
LAB_100fa1eec:
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  *(undefined **)(unaff_x22 + 0x128) = puVar10;
  *(long *)(unaff_x22 + 0x110) = lVar16;
  *(long *)(unaff_x22 + 0x118) = lVar19;
  plVar11 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100fa2848;
                    /* WARNING: Could not recover jumptable at 0x000100fa1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fa336c(puVar10,*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 100fa1fdc; end: 100fa201b;  */

void FUN_100fa1fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa201c,0,0);
  return;
}



/* Entry: 100fa201c; end: 100fa2847;  */

void FUN_100fa201c(void)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x22;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long lStack_88;
  ulong uStack_70;
  ulong uStack_60;
  
  puVar21 = (undefined8 *)(unaff_x22 + 0x70);
  puVar13 = (undefined *)*puVar21;
  if (*(char *)(unaff_x22 + 0x78) != '\x01') goto LAB_100fa21f0;
LAB_100fa2088:
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0xa0) = puVar13;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0xa0,uVar9,PTR___ss5ErrorWS_11034ee10);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  FUN_100fa38f4(puVar13,1);
  func_0x000107c61574(uVar9);
  lVar12 = *(long *)(puVar17 + 0x10);
  if (lVar12 == 0) goto LAB_100fa2210;
LAB_100fa20f4:
  uStack_70 = *(ulong *)(unaff_x22 + 0xf0);
  puVar11 = (undefined8 *)(puVar17 + 0x28);
  do {
    uVar9 = puVar11[-1];
    uVar5 = *puVar11;
    func_0x000107c61438(uVar5,2);
    uVar8 = unaff_x22 + 0x50U;
    func_0x000100403b00(unaff_x22 + 0x50U,uVar9,uVar5);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x58));
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(uVar5);
    }
    else {
      uVar8 = uStack_70;
      func_0x000107c61558();
      uVar18 = uStack_70;
      if ((uVar8 & 1) == 0) {
        uVar18 = 0;
        func_0x0001000d182c(0,*(long *)(uStack_70 + 0x10) + 1,1,uStack_70);
      }
      uVar8 = *(ulong *)(uVar18 + 0x10);
      uStack_70 = uVar18;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar8) {
        uStack_70 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        func_0x0001000d182c(uStack_70,uVar8 + 1,1,uVar18);
      }
      *(ulong *)(uStack_70 + 0x10) = uVar8 + 1;
      lVar14 = uStack_70 + uVar8 * 0x10;
      *(undefined8 *)(lVar14 + 0x20) = uVar9;
      *(undefined8 *)(lVar14 + 0x28) = uVar5;
    }
    puVar11 = puVar11 + 2;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lVar12 = *(long *)(unaff_x22 + 0xe8);
  FUN_100f9d71c(*(undefined8 *)(unaff_x22 + 0xf8),2);
  uVar18 = *(ulong *)(lVar12 + 0x10);
  uVar6 = *(ulong *)(lVar12 + 0x18);
  uVar8 = uVar18 + 1;
  uStack_60 = *(ulong *)(unaff_x22 + 0xe8);
  if (uVar6 >> 1 <= uVar18) {
    uStack_60 = (ulong)(1 < uVar6);
    FUN_100fb5168(uStack_60,uVar8,1,*(ulong *)(unaff_x22 + 0xe8));
  }
  lVar12 = *(long *)(unaff_x22 + 0xd0);
  uVar9 = 0x8000000000000002;
  lStack_88 = *(long *)(unaff_x22 + 0xd8);
LAB_100fa2258:
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar10 = *(long *)(unaff_x22 + 0xe0);
  lVar15 = *(long *)(unaff_x22 + 200);
  puVar20 = (ulong *)(uStack_60 + 0x10);
  *puVar20 = uVar8;
  lVar14 = uStack_60 + 0x20;
  puVar11 = (undefined8 *)(lVar14 + uVar18 * 0x18);
  *puVar11 = uVar5;
  puVar11[1] = uVar9;
  puVar11[2] = puVar17;
  uVar8 = 2;
  func_0x000100f9d754();
  if (lVar10 + 1 == lVar15) {
LAB_100fa2754:
    *(ulong *)(unaff_x22 + 0x120) = uStack_60;
    *(ulong *)(unaff_x22 + 0x128) = uStack_70;
    *(long *)(unaff_x22 + 0x110) = lVar12;
    *(long *)(unaff_x22 + 0x118) = lStack_88;
    plVar7 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100fa2848;
                    /* WARNING: Could not recover jumptable at 0x000100fa27bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_100fa336c(uStack_70,*(undefined8 *)(unaff_x22 + 0xb0));
    return;
  }
  do {
    while( true ) {
      lVar10 = *(long *)(unaff_x22 + 0xe0) + 1;
      *(ulong *)(unaff_x22 + 0xe8) = uStack_60;
      *(ulong *)(unaff_x22 + 0xf0) = uStack_70;
      *(long *)(unaff_x22 + 0xd8) = lStack_88;
      *(long *)(unaff_x22 + 0xe0) = lVar10;
      *(long *)(unaff_x22 + 0xd0) = lVar12;
      lVar10 = *(long *)(unaff_x22 + 0xa8) + lVar10 * 0x10;
      lVar15 = *(long *)(lVar10 + 0x20);
      *(long *)(unaff_x22 + 0xf8) = lVar15;
      bVar1 = *(byte *)(lVar10 + 0x28);
      uVar18 = (ulong)bVar1;
      if (1 < bVar1) break;
      if (bVar1 == 0) goto LAB_100fa2560;
      lVar10 = lVar15;
      func_0x000107c615f0();
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (lVar10 == 0) {
        bVar3 = SCARRY8(lStack_88,1);
        lStack_88 = lStack_88 + 1;
        if (bVar3) {
LAB_100fa2840:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa2844);
          (*pcVar2)();
        }
        uVar19 = *puVar20;
        uVar8 = *(ulong *)(uStack_60 + 0x18);
        uVar6 = uVar19 + 1;
        func_0x000107c615f0(lVar15);
        lVar12 = lStack_88;
        if (uVar19 < uVar8 >> 1) {
          do {
            uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
            lVar10 = *(long *)(unaff_x22 + 0xe0);
            lVar15 = *(long *)(unaff_x22 + 200);
            *puVar20 = uVar6;
            puVar11 = (undefined8 *)(lVar14 + uVar19 * 0x18);
            *puVar11 = uVar9;
            puVar11[2] = 0;
            puVar11[1] = 1;
            uVar8 = 1;
            func_0x000100f9d754();
            lStack_88 = lVar12;
            if (lVar10 + 1 == lVar15) goto LAB_100fa2754;
            lVar10 = *(long *)(unaff_x22 + 0xe0) + 1;
            *(ulong *)(unaff_x22 + 0xe8) = uStack_60;
            *(ulong *)(unaff_x22 + 0xf0) = uStack_70;
            *(long *)(unaff_x22 + 0xd8) = lVar12;
            *(long *)(unaff_x22 + 0xe0) = lVar10;
            *(long *)(unaff_x22 + 0xd0) = lVar12;
            lVar10 = *(long *)(unaff_x22 + 0xa8) + lVar10 * 0x10;
            lVar15 = *(long *)(lVar10 + 0x20);
            *(long *)(unaff_x22 + 0xf8) = lVar15;
            bVar1 = *(byte *)(lVar10 + 0x28);
            uVar18 = (ulong)bVar1;
            if (bVar1 != 1) {
              if (bVar1 == 2) goto LAB_100fa2624;
              goto LAB_100fa2560;
            }
            lVar10 = lVar15;
            func_0x000107c615f0();
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (lVar10 != 0) goto LAB_100fa23d0;
            lStack_88 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) goto LAB_100fa2840;
            uVar19 = *puVar20;
            uVar8 = *(ulong *)(uStack_60 + 0x18);
            uVar6 = uVar19 + 1;
            func_0x000107c615f0(lVar15);
            lVar12 = lVar12 + 1;
          } while (uVar19 < uVar8 >> 1);
        }
        uVar18 = (ulong)(1 < uVar8);
        FUN_100fb5168(uVar18,uVar6,1,uStack_60);
        lVar12 = lStack_88;
        uVar8 = 1;
        uStack_60 = uVar18;
        goto LAB_100fa2590;
      }
LAB_100fa23d0:
      lVar14 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      func_0x000107c61434(uVar8);
      uVar18 = unaff_x22 + 0x60U;
      func_0x000100403b00(puVar21,unaff_x22 + 0x60U,lVar14,uVar8);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
      if ((uVar18 & 1) != 0) {
        func_0x000107c61434(uVar8);
        uVar18 = uStack_70;
        func_0x000107c61558();
        if ((uVar18 & 1) == 0) {
          plVar7 = (long *)(uStack_70 + 0x10);
          uStack_70 = 0;
          func_0x0001000d182c(0,*plVar7 + 1,1);
        }
        uVar18 = *(ulong *)(uStack_70 + 0x10);
        if (*(ulong *)(uStack_70 + 0x18) >> 1 <= uVar18) {
          uVar6 = (ulong)(1 < *(ulong *)(uStack_70 + 0x18));
          func_0x0001000d182c(uVar6,uVar18 + 1,1,uStack_70);
          uStack_70 = uVar6;
        }
        *(ulong *)(uStack_70 + 0x10) = uVar18 + 1;
        lVar10 = uStack_70 + uVar18 * 0x10;
        *(long *)(lVar10 + 0x20) = lVar14;
        *(ulong *)(lVar10 + 0x28) = uVar8;
      }
      lVar10 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 2;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      *(long *)(lVar10 + 0x20) = lVar14;
      *(ulong *)(lVar10 + 0x28) = uVar8;
      uVar18 = *puVar20;
      uVar8 = *(ulong *)(uStack_60 + 0x18);
      func_0x000107c615f0(lVar15);
      if (uVar8 >> 1 <= uVar18) {
        uVar8 = (ulong)(1 < uVar8);
        FUN_100fb5168(uVar8,uVar18 + 1,1,uStack_60);
        uStack_60 = uVar8;
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar15 = *(long *)(unaff_x22 + 0xe0);
      lVar16 = *(long *)(unaff_x22 + 200);
      puVar20 = (ulong *)(uStack_60 + 0x10);
      *puVar20 = uVar18 + 1;
      lVar14 = uStack_60 + 0x20;
      puVar11 = (undefined8 *)(lVar14 + uVar18 * 0x18);
      *puVar11 = uVar9;
      puVar11[1] = 0x8000000000000001;
      puVar11[2] = lVar10;
      uVar8 = 1;
      func_0x000100f9d754();
      if (lVar15 + 1 == lVar16) goto LAB_100fa2754;
    }
    if (bVar1 != 3) break;
LAB_100fa2560:
    FUN_100f9d71c(lVar15,uVar18);
    FUN_100f9d71c(lVar15,uVar18);
    uVar19 = *puVar20;
    uVar6 = uVar19 + 1;
    uVar8 = uVar18;
    if (*(ulong *)(uStack_60 + 0x18) >> 1 <= uVar19) {
      uVar18 = (ulong)(1 < *(ulong *)(uStack_60 + 0x18));
      FUN_100fb5168(uVar18,uVar6,1,uStack_60);
      uStack_60 = uVar18;
    }
LAB_100fa2590:
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar10 = *(long *)(unaff_x22 + 0xe0);
    lVar15 = *(long *)(unaff_x22 + 200);
    puVar20 = (ulong *)(uStack_60 + 0x10);
    *puVar20 = uVar6;
    lVar14 = uStack_60 + 0x20;
    puVar11 = (undefined8 *)(lVar14 + uVar19 * 0x18);
    *puVar11 = uVar9;
    puVar11[1] = uVar8;
    puVar11[2] = 0;
    func_0x000100f9d754();
    if (lVar10 + 1 == lVar15) goto LAB_100fa2754;
  } while( true );
LAB_100fa2624:
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x28);
  puVar13 = &UNK_110371730;
  func_0x000107c613fc(&UNK_110371730,0x20,7);
  *(undefined **)(unaff_x22 + 0x100) = puVar13;
  *(undefined8 *)(puVar13 + 0x10) = uVar5;
  *(long *)(puVar13 + 0x18) = lVar15;
  func_0x000107c615f0(lVar15);
  FUN_100f9d71c();
  func_0x000107c615f0(uVar5);
  func_0x0001000285a8(0x112d50c98,&UNK_10d917650);
  puVar17 = &UNK_110371758;
  func_0x000107c613fc(&UNK_110371758,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_100fa3898;
  *(undefined **)(puVar17 + 0x18) = puVar13;
  func_0x000107c6157c(puVar13);
  func_0x0001048897a0(uVar9,1,0,0x100fa38a0,puVar17);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar9;
  func_0x000107c61574(puVar17);
  func_0x000104888eec(unaff_x22 + 0x80);
  if (*(char *)(unaff_x22 + 0x88) == -1) {
    *(undefined8 **)(unaff_x22 + 0x38) = puVar21;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100fa1fdc;
    lVar12 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar12,0);
    puVar13 = &UNK_110371780;
    func_0x000107c613fc(&UNK_110371780,0x18,7);
    *(long *)(puVar13 + 0x10) = lVar12;
    func_0x00010075a04c(0,1,FUN_100fa38a8,puVar13);
    func_0x000107c61574(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  puVar13 = *(undefined **)(unaff_x22 + 0x80);
  if (*(char *)(unaff_x22 + 0x88) == '\x01') goto LAB_100fa2088;
LAB_100fa21f0:
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61574(uVar9);
  if (puVar13 != (undefined *)0x0) {
    puVar17 = puVar13;
  }
  lVar12 = *(long *)(puVar17 + 0x10);
  if (lVar12 != 0) goto LAB_100fa20f4;
LAB_100fa2210:
  lVar14 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c6142c(puVar17);
  lVar12 = lVar14 + 1;
  if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa2848);
    (*pcVar2)();
  }
  uVar19 = *(ulong *)(unaff_x22 + 0xe8);
  uVar18 = *(ulong *)(uVar19 + 0x10);
  uVar6 = *(ulong *)(uVar19 + 0x18);
  uVar8 = uVar18 + 1;
  func_0x000107c615f0(*(undefined8 *)(unaff_x22 + 0xf8));
  uStack_60 = uVar19;
  if (uVar6 >> 1 <= uVar18) {
    uStack_60 = (ulong)(1 < uVar6);
    FUN_100fb5168(uStack_60,uVar8,1,uVar19);
  }
  puVar17 = (undefined *)0x0;
  uStack_70 = *(ulong *)(unaff_x22 + 0xf0);
  uVar9 = 2;
  lStack_88 = lVar12;
  goto LAB_100fa2258;
}



/* Entry: 100fa2848; end: 100fa28a7;  */

void FUN_100fa2848(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x138) = param_1;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fa28a8;
  }
  else {
    pcVar1 = FUN_100fa2e34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa28a8; end: 100fa2e33;  */

void FUN_100fa28a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lStack_b8;
  long lStack_a8;
  ulong uStack_68;
  
  lVar17 = *(long *)(unaff_x22 + 0x120);
  uStack_68 = 0;
  FUN_100fb4c74(0,*(undefined8 *)(unaff_x22 + 200),0,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar20 = *(ulong *)(lVar17 + 0x10);
  if (uVar20 == 0) {
    lStack_a8 = *(long *)(unaff_x22 + 0x110);
  }
  else {
    uVar21 = 0;
    lVar12 = *(long *)(unaff_x22 + 0x138);
    lStack_b8 = *(long *)(unaff_x22 + 0x118);
    lVar2 = *(long *)(unaff_x22 + 0x120);
    lStack_a8 = *(long *)(unaff_x22 + 0x110);
    do {
      if (*(ulong *)(lVar17 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa2e30);
        (*pcVar4)();
      }
      puVar13 = (undefined8 *)(lVar2 + 0x20 + uVar21 * 0x18);
      uVar1 = *puVar13;
      lVar3 = puVar13[1];
      lVar19 = puVar13[2];
      if (lVar3 < 0) {
        lVar15 = *(long *)(lVar19 + 0x10);
        FUN_100fa3908(uVar1,lVar3,lVar19);
        FUN_100f9d71c(uVar1,lVar3);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar15 != 0) {
          lVar22 = 0;
LAB_100fa2a50:
          puVar18 = (ulong *)(lVar19 + 0x28 + lVar22 * 0x10);
          lVar22 = lVar22 + 1;
          do {
            if (*(ulong *)(lVar19 + 0x10) <= lVar22 - 1U) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa2e2c);
              (*pcVar4)();
            }
            if (*(long *)(lVar12 + 0x10) != 0) {
              uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
              uVar6 = puVar18[-1];
              uVar10 = *puVar18;
              func_0x000107c61434(uVar10);
              func_0x000107c61434(uVar16);
              uVar11 = uVar10;
              func_0x000100029284();
              uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
              if ((uVar11 & 1) != 0) goto LAB_100fa2acc;
              func_0x000107c6142c(uVar10);
              func_0x000107c6142c(uVar16);
            }
            lVar22 = lVar22 + 1;
            puVar18 = puVar18 + 2;
            if (lVar22 - lVar15 == 1) break;
          } while( true );
        }
LAB_100fa2b98:
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar23 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar23 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar23 = puVar8;
          }
          func_0x000107c60480();
        }
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar23 == *(undefined **)(lVar19 + 0x10)) {
          if (puVar23 == (undefined *)0x0) {
            func_0x000107c6142c(puVar8);
            puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000100fa7de4(0,puVar23,0);
            puVar24 = (undefined *)0x0;
            do {
              if (((ulong)puVar8 & 0xc000000000000001) == 0) {
                puVar9 = *(undefined **)(puVar8 + (long)puVar24 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar9 = puVar24;
                func_0x000100fb0d50(puVar24,puVar8);
              }
              uVar6 = *(ulong *)(puVar7 + 0x10);
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
                func_0x000100fa7de4(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
              }
              puVar24 = puVar24 + 1;
              *(ulong *)(puVar7 + 0x10) = uVar6 + 1;
              *(undefined **)(puVar7 + uVar6 * 0x10 + 0x20) = puVar9;
              puVar7[uVar6 * 0x10 + 0x28] = 0;
            } while (puVar23 != puVar24);
            func_0x000107c6142c(puVar8);
          }
          FUN_100fb2988(puVar7);
          func_0x000100f9d754(uVar1,lVar3);
          func_0x000100fa3934(uVar1,lVar3,lVar19);
        }
        else {
          func_0x000107c6142c(puVar8);
          bVar5 = SCARRY8(lStack_b8,1);
          lStack_b8 = lStack_b8 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa2e34);
            (*pcVar4)();
          }
          FUN_100f9d71c(uVar1,lVar3);
          uVar6 = uStack_68;
          func_0x000107c61558();
          uVar10 = uStack_68;
          if ((uVar6 & 1) == 0) {
            uVar10 = 0;
            FUN_100fb4c74(0,*(long *)(uStack_68 + 0x10) + 1,1,uStack_68);
          }
          uVar6 = *(ulong *)(uVar10 + 0x10);
          uStack_68 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
            uStack_68 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_100fb4c74(uStack_68,uVar6 + 1,1,uVar10);
          }
          *(ulong *)(uStack_68 + 0x10) = uVar6 + 1;
          lVar15 = uStack_68 + uVar6 * 0x10;
          *(undefined8 *)(lVar15 + 0x20) = uVar1;
          *(char *)(lVar15 + 0x28) = (char)lVar3;
          func_0x000100fa3934(uVar1,lVar3,lVar19);
          func_0x000100f9d754(uVar1,lVar3);
          lStack_a8 = lStack_b8;
        }
      }
      else {
        FUN_100fa3908(uVar1,lVar3,lVar19);
        FUN_100f9d71c(uVar1,lVar3);
        uVar6 = uStack_68;
        func_0x000107c61558();
        uVar10 = uStack_68;
        if ((uVar6 & 1) == 0) {
          uVar10 = 0;
          FUN_100fb4c74(0,*(long *)(uStack_68 + 0x10) + 1,1,uStack_68);
        }
        uVar6 = *(ulong *)(uVar10 + 0x10);
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_100fb4c74(uVar11,uVar6 + 1,1,uVar10);
          uVar10 = uVar11;
        }
        *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
        lVar15 = uVar10 + uVar6 * 0x10;
        *(undefined8 *)(lVar15 + 0x20) = uVar1;
        *(char *)(lVar15 + 0x28) = (char)lVar3;
        func_0x000100fa3934(uVar1,lVar3,lVar19);
        uStack_68 = uVar10;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar20);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c6142c(uVar14);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100fa2e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uStack_68,lStack_a8);
  return;
LAB_100fa2acc:
  uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
  func_0x000107c61174();
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar16);
  puVar23 = puVar8;
  func_0x000107c61550();
  if ((((int)puVar23 == 0) || ((long)puVar8 < 0)) ||
     (puVar23 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar7 = puVar8;
      }
      func_0x000107c60480(puVar7);
    }
    puVar23 = (undefined *)0x0;
    FUN_100fb5154(0,puVar7 + 1,1,puVar8);
  }
  uVar10 = (ulong)puVar23 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar10 + 0x10);
  puVar8 = puVar23;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_100fb5154(puVar8,uVar6 + 1,1,puVar23);
    uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar10 + uVar6 * 8 + 0x20) = uVar14;
  if (lVar22 == lVar15) goto LAB_100fa2b98;
  goto LAB_100fa2a50;
}



/* Entry: 100fa2e34; end: 100fa2e83;  */

void FUN_100fa2e34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fa2e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa2e84; end: 100fa30b7;  */

void FUN_100fa2e84(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000107c430f8(param_2,param_3,param_3);
    func_0x000107c61180();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_2 != 0) {
      uVar8 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar2 = param_2;
      func_0x000107c5fc54();
      func_0x000107c61170(param_2);
      uVar12 = uVar2 & 0xffffffffffffff8;
      if (uVar2 >> 0x3e == 0) {
        uVar10 = *(ulong *)(uVar12 + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar10 = uVar12;
        if ((uVar2 & 0x8000000000000000) != 0) {
          uVar10 = uVar2;
        }
        func_0x000107c60480();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
      if (uVar10 != 0) {
        uVar4 = 0;
        do {
          while( true ) {
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar12 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa3038);
                (*pcVar1)();
              }
              uVar11 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
              func_0x000107c615f0(uVar11);
              uVar9 = uVar8;
            }
            else {
              uVar11 = uVar4;
              uVar9 = uVar2;
              FUN_100fb0ba0();
            }
            if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa3034);
              (*pcVar1)();
            }
            uVar13 = uVar4 + 1;
            uVar3 = uVar11;
            func_0x000107c615f0();
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (uVar3 == 0) break;
            uVar4 = uVar3;
            func_0x000107c5faec();
            uVar8 = 2;
            func_0x000107c615ec(uVar11);
            func_0x000107c61170(uVar3);
            puVar5 = puVar7;
            func_0x000107c61558();
            puVar6 = puVar7;
            if (((ulong)puVar5 & 1) == 0) {
              uVar8 = *(long *)(puVar7 + 0x10) + 1;
              puVar6 = (undefined *)0x0;
              func_0x0001000d182c(0,uVar8,1,puVar7);
            }
            uVar3 = *(ulong *)(puVar6 + 0x10);
            uVar11 = uVar3 + 1;
            puVar7 = puVar6;
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              uVar8 = uVar11;
              func_0x0001000d182c(puVar7,uVar11,1,puVar6);
            }
            *(ulong *)(puVar7 + 0x10) = uVar11;
            *(ulong *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar4;
            *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar9;
            uVar4 = uVar13;
            if (uVar13 == uVar10) goto LAB_100fa3054;
          }
          uVar8 = 2;
          func_0x000107c615ec(uVar11);
          uVar4 = uVar4 + 1;
        } while (uVar13 != uVar10);
      }
LAB_100fa3054:
      uVar8 = *(ulong *)(puVar7 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        if ((uVar2 & 0x8000000000000000) != 0) {
          uVar12 = uVar2;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar2);
      if (uVar8 != uVar12) {
        func_0x000107c6142c(puVar7);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    }
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 100fa30b8; end: 100fa336b;  */

void FUN_100fa30b8(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
LAB_100fa3364:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa3368);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    FUN_100fb60d0(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_100fa316c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa317c);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000100fb5b1c();
    lVar13 = *param_3;
    goto joined_r0x000100fa31e0;
  }
  lVar13 = *param_3;
joined_r0x000100fa31e0:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_100fa3368:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa336c);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c61174();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
    func_0x000107c61170(uVar12);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar9;
      if (SCARRY8(lVar7,uVar9)) goto LAB_100fa3364;
      if (*(long *)(lVar11 + 0x18) < lVar13) {
        FUN_100fb60d0(lVar13,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) goto LAB_100fa316c;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_100fa3368;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c61174();
        func_0x000107c61170(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
        func_0x000107c61170(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 100fa336c; end: 100fa3383;  */

void FUN_100fa336c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa3384,0,0);
  return;
}



/* Entry: 100fa3384; end: 100fa3557;  */

void FUN_100fa3384(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  *(undefined **)(unaff_x22 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar12 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x28);
    do {
      uVar2 = puVar13[-1];
      uVar4 = *puVar13;
      func_0x000107c61438(uVar4,2);
      puVar5 = auStack_60;
      func_0x000100403b00(puVar5,uVar2,uVar4);
      func_0x000107c6142c(uStack_58);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(uVar4);
      }
      else {
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar3 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar8,uVar3 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x28) = uVar4;
      }
      puVar13 = puVar13 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(undefined **)(unaff_x22 + 0x28) = puVar8;
  if (*(long *)(puVar8 + 0x10) == 0) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100fac7ac(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x10));
    func_0x000107c6142c(puVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fa3554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar6);
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(lVar9 + 0x18);
  lVar12 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar2);
  piVar11 = *(int **)(lVar12 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100fa3558;
                    /* WARNING: Could not recover jumptable at 0x000100fa3508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(puVar8,0,uVar2,lVar12);
  return;
}



/* Entry: 100fa3558; end: 100fa35b7;  */

void FUN_100fa3558(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fa35b8;
  }
  else {
    pcVar1 = FUN_100fa3858;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa35b8; end: 100fa3857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa35b8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x22;
  ulong uVar16;
  undefined *apuStack_68 [2];
  
  uVar16 = *(ulong *)(unaff_x22 + 0x38);
  if (uVar16 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar14 = uVar16;
    }
    func_0x000107c60480();
  }
  if (uVar14 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
    puVar12 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    apuStack_68[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100fa7dc8(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa3858);
      (*pcVar4)();
    }
    puVar10 = apuStack_68[0];
    if ((uVar16 & 0xc000000000000001) == 0) {
      uVar16 = 0;
      lVar8 = *(long *)(unaff_x22 + 0x38);
      lVar9 = *(long *)(apuStack_68[0] + 0x10);
      lVar15 = lVar9 * 0x18;
      do {
        uVar2 = lVar9 + uVar16;
        lVar6 = *(long *)(lVar8 + 0x20 + uVar16 * 8);
        uVar13 = *(undefined8 *)(lVar6 + _DAT_112fda128);
        uVar3 = ((undefined8 *)(lVar6 + _DAT_112fda128))[1];
        uVar11 = *(ulong *)(puVar10 + 0x18);
        lVar1 = uVar2 + 1;
        apuStack_68[0] = puVar10;
        func_0x000107c61174();
        func_0x000107c61434(uVar3);
        if (uVar11 >> 1 <= uVar2) {
          FUN_100fa7dc8(1 < uVar11,lVar1,1);
          puVar10 = apuStack_68[0];
        }
        uVar16 = uVar16 + 1;
        *(long *)(puVar10 + 0x10) = lVar1;
        *(undefined8 *)(puVar10 + lVar15 + 0x20) = uVar13;
        *(undefined8 *)(puVar10 + lVar15 + 0x28) = uVar3;
        *(long *)(puVar10 + lVar15 + 0x30) = lVar6;
        lVar15 = lVar15 + 0x18;
      } while (uVar14 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        uVar5 = uVar16;
        func_0x000100fb0d50(uVar16,*(undefined8 *)(unaff_x22 + 0x38));
        uVar13 = *(undefined8 *)(uVar5 + _DAT_112fda128);
        uVar3 = ((undefined8 *)(uVar5 + _DAT_112fda128))[1];
        uVar2 = *(ulong *)(puVar10 + 0x10);
        uVar11 = *(ulong *)(puVar10 + 0x18);
        apuStack_68[0] = puVar10;
        func_0x000107c61434(uVar3);
        if (uVar11 >> 1 <= uVar2) {
          FUN_100fa7dc8(1 < uVar11,uVar2 + 1,1);
          puVar10 = apuStack_68[0];
        }
        uVar16 = uVar16 + 1;
        *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar10 + uVar2 * 0x18 + 0x20) = uVar13;
        *(undefined8 *)(puVar10 + uVar2 * 0x18 + 0x28) = uVar3;
        *(ulong *)(puVar10 + uVar2 * 0x18 + 0x30) = uVar5;
      } while (uVar14 != uVar16);
    }
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
    puVar12 = *(undefined **)(puVar10 + 0x10);
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar7;
  if (puVar12 != (undefined *)0x0) {
    uVar13 = 0x112d50c90;
    func_0x0001000285a8(0x112d50c90,&UNK_10d917638);
    func_0x000107c60498(puVar12,uVar13);
    puVar7 = puVar12;
  }
  lVar15 = *(long *)(unaff_x22 + 0x40);
  apuStack_68[0] = puVar7;
  FUN_100fa30b8(puVar10,1,apuStack_68);
  func_0x000107c6142c(puVar10);
  if (lVar15 == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x10));
    func_0x000107c6142c(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100fa3850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(apuStack_68[0]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(apuStack_68[0]);
  return;
}



/* Entry: 100fa3858; end: 100fa3897;  */

void FUN_100fa3858(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa3894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa3898; end: 100fa38a7;  */

void FUN_100fa3898(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *(ulong *)(unaff_x20 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    func_0x000107c430f8(uVar12,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61180();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      uVar8 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar2 = uVar12;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar12);
      uVar12 = uVar2 & 0xffffffffffffff8;
      if (uVar2 >> 0x3e == 0) {
        uVar10 = *(ulong *)(uVar12 + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar10 = uVar12;
        if ((uVar2 & 0x8000000000000000) != 0) {
          uVar10 = uVar2;
        }
        func_0x000107c60480();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
      if (uVar10 != 0) {
        uVar4 = 0;
        do {
          while( true ) {
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar12 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa3038);
                (*pcVar1)();
              }
              uVar11 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
              func_0x000107c615f0(uVar11);
              uVar9 = uVar8;
            }
            else {
              uVar11 = uVar4;
              uVar9 = uVar2;
              FUN_100fb0ba0();
            }
            if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa3034);
              (*pcVar1)();
            }
            uVar13 = uVar4 + 1;
            uVar3 = uVar11;
            func_0x000107c615f0();
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (uVar3 == 0) break;
            uVar4 = uVar3;
            func_0x000107c5faec();
            uVar8 = 2;
            func_0x000107c615ec(uVar11);
            func_0x000107c61170(uVar3);
            puVar5 = puVar7;
            func_0x000107c61558();
            puVar6 = puVar7;
            if (((ulong)puVar5 & 1) == 0) {
              uVar8 = *(long *)(puVar7 + 0x10) + 1;
              puVar6 = (undefined *)0x0;
              func_0x0001000d182c(0,uVar8,1,puVar7);
            }
            uVar3 = *(ulong *)(puVar6 + 0x10);
            uVar11 = uVar3 + 1;
            puVar7 = puVar6;
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              uVar8 = uVar11;
              func_0x0001000d182c(puVar7,uVar11,1,puVar6);
            }
            *(ulong *)(puVar7 + 0x10) = uVar11;
            *(ulong *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar4;
            *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar9;
            uVar4 = uVar13;
            if (uVar13 == uVar10) goto LAB_100fa3054;
          }
          uVar8 = 2;
          func_0x000107c615ec(uVar11);
          uVar4 = uVar4 + 1;
        } while (uVar13 != uVar10);
      }
LAB_100fa3054:
      uVar8 = *(ulong *)(puVar7 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        if ((uVar2 & 0x8000000000000000) != 0) {
          uVar12 = uVar2;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar2);
      if (uVar8 != uVar12) {
        func_0x000107c6142c(puVar7);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    }
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 100fa38a8; end: 100fa38f3;  */

void FUN_100fa38a8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_100fa3960(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100fa38f4; end: 100fa3907;  */

void FUN_100fa38f4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100fa3908; end: 100fa395f;  */

void FUN_100fa3908(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0) {
    FUN_100f9d71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
_objc_retain:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (bVar1 != 1) {
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      return;
    }
    goto _objc_retain;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 100fa3960; end: 100fa3983;  */

void FUN_100fa3960(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 100fa3984; end: 100fa3a1f;  */

undefined8 * FUN_100fa3984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_100fa3908(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 100fa3a20; end: 100fa3a5f;  */

undefined8 * FUN_100fa3a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  func_0x000100fa3934(uVar3,uVar1,uVar2);
  return param_1;
}


