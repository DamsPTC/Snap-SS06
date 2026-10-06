/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005d72c8; end: 005d733f;  */

void FUN_005d72c8(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_00ac31e8;
  _objc_alloc(PTR_PTR_00ac31e8);
  piVar3 = param_1 + 2;
  iVar1 = *param_1;
  FUN_0047c844(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x007868c0(puVar2,param_2,(long)iVar1,piVar3);
  FUN_005d7340();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005d7340; end: 005d7347;  */

void FUN_005d7340(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d7348; end: 005d7567;  */

void FUN_005d7348(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar9 = PTR_PTR_00ac31f0;
  _objc_alloc();
  lVar10 = param_1;
  FUN_005d68f0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = *(undefined1 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  lVar11 = param_1 + 200;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0xe0;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0xf8;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x118;
  FUN_005d3f10();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x120);
  lVar15 = param_1 + 0x128;
  FUN_005d3f10();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x130);
  lVar16 = param_1 + 0x138;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00786680(puVar9,param_2,lVar10,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar17,uVar8,uVar7,
                  lVar11,lVar12,lVar13,lVar14,uVar18,lVar15,uVar19,lVar16,
                  *(undefined8 *)(param_1 + 0x158),(long)*(int *)(param_1 + 0x160),
                  *(undefined8 *)(param_1 + 0x168));
  FUN_005d7568();
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 005d7568; end: 005d7573;  */

void FUN_005d7568(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d7574; end: 005d75eb; -[SCNGrpcUnaryEventHandlerCppProxy initWithCpp:] */

undefined1 * FUN_005d7574(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x005d7bc8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x005c2dd4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d75ec; end: 005d7777; -[SCNGrpcUnaryEventHandlerCppProxy onEvent:status:] */

void FUN_005d75ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_60 = 0;
  }
  else {
    FUN_005d46e0(&uStack_a0,param_3);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_60 = 1;
    FUN_0040ce68(&uStack_a0);
  }
  FUN_005d7bc0();
  _objc_retain(param_4);
  if (param_4 == 0) {
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    uStack_80 = 0;
  }
  else {
    FUN_005d721c(auStack_50,param_4);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,auStack_50[0]);
    uStack_90 = uStack_40;
    uStack_98 = uStack_48;
    uStack_88 = uStack_38;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_80 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  }
  func_0x005d7bd8();
  (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_70,&uStack_a0);
  FUN_005be34c(&uStack_a0);
  FUN_005be37c(&uStack_70);
  func_0x005d7bd8();
  FUN_005d7bc0();
  return;
}



/* Entry: 005d7778; end: 005d786b;  */

void FUN_005d7778(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac31f8;
    _objc_opt_class(PTR_PTR_00ac31f8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a07510;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_005d7908);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_005d7b98(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          func_0x005d7bc8();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x005d7bc0();
  return;
}



/* Entry: 005d786c; end: 005d78c7; -[SCNGrpcUnaryEventHandlerCppProxy .cxx_destruct] */

void FUN_005d786c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a075e0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x005c2dd4((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d78c8; end: 005d7907; -[SCNGrpcUnaryEventHandlerCppProxy .cxx_construct] */

undefined8 * FUN_005d78c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x005d7bc8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d7908; end: 005d79ff;  */

void FUN_005d7908(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a07550;
  pqVar1[3] = (qword)&PTR_DAT_00a075c8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x005d7bc8();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a075a0;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d7b98(&uStack_50);
  return;
}



/* Entry: 005d7a00; end: 005d7a03;  */

void FUN_005d7a00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07550;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d7a04; end: 005d7a17;  */

void FUN_005d7a04(void)

{
  FUN_005d7b88();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d7a18; end: 005d7a23;  */

long FUN_005d7a18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a07510;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x005d7be8();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d7a24; end: 005d7a5f;  */

void FUN_005d7a24(void)

{
  func_0x005d7bf0();
  return;
}



/* Entry: 005d7a60; end: 005d7af7;  */

void FUN_005d7a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x005d55d8(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d7194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a080(uVar2);
  func_0x005d7be8();
  func_0x005d7bc0();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d7af8; end: 005d7b87;  */

long FUN_005d7af8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a07510;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x005d7be8();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d7b88; end: 005d7b97;  */

void FUN_005d7b88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07550;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d7b98; end: 005d7bbf;  */

long FUN_005d7b98(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d7bc0; end: 005d7bfb;  */

void FUN_005d7bc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d7bfc; end: 005d7e1b;  */

void FUN_005d7bfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar7 = PTR_PTR_00ac3200;
  _objc_alloc(PTR_PTR_00ac3200);
  lVar8 = param_1;
  FUN_005d68f0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar16 = *(undefined8 *)(param_1 + 0xa8);
  lVar9 = param_1 + 0xb0;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0xd0;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined1 *)(param_1 + 0xf0);
  uVar5 = *(undefined4 *)(param_1 + 0xf4);
  lVar11 = param_1 + 0xf8;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0x110;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0x128;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x148;
  FUN_005d3f10();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x150);
  lVar15 = param_1 + 0x158;
  FUN_005d3f10();
  _objc_retainAutoreleasedReturnValue();
  func_0x007866a0(puVar7,param_2,lVar8,uVar1,uVar3,uVar2,uVar4,uVar16,lVar9,lVar10,uVar6,uVar5,
                  lVar11,lVar12,lVar13,lVar14,uVar17,lVar15,*(undefined8 *)(param_1 + 0x160),
                  *(undefined8 *)(param_1 + 0x168),(long)*(int *)(param_1 + 0x170));
  FUN_005d7e1c();
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 005d7e1c; end: 005d7e27;  */

void FUN_005d7e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d7e28; end: 005d7e9f; -[SCNGrpcUnifiedGrpcService initWithCpp:] */

undefined1 * FUN_005d7e28(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac40f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x005d85d8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_005d851c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d7ea0; end: 005d804b; +[SCNGrpcUnifiedGrpcService create:grpcParametersBuilder:authDelegate:queue:] */

void FUN_005d7ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined **appuStack_78 [2];
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  func_0x005d8600();
  func_0x005d85f8();
  func_0x005d863c();
  func_0x005d85c4();
  FUN_005d62fc(appuStack_78,param_4);
  FUN_005d3690(auStack_88,param_5);
  FUN_006395d0(auStack_98,param_6);
  FUN_005bce24(&lStack_50,&lStack_68,appuStack_78,auStack_88,auStack_98);
  FUN_0045e4e4(auStack_98);
  FUN_00466d48(auStack_88);
  FUN_0046fae0(appuStack_78);
  func_0x005d85f0();
  if (lStack_50 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_78[0] = &PTR_DAT_00a075f0;
    lStack_68 = lStack_50;
    lStack_60 = lStack_48;
    if (lStack_48 != 0) {
      do {
        func_0x005d85d8();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_78;
    FUN_00718534(pppuVar1,&lStack_68,FUN_005d84a8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0047df30(&lStack_68);
  }
  FUN_005d851c(&lStack_50);
  func_0x005d85d0();
  func_0x005d857c();
  func_0x005d8584();
  func_0x005d8574();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pppuVar1);
  return;
}



/* Entry: 005d804c; end: 005d815f; -[SCNGrpcUnifiedGrpcService unaryCall:request:callOptionsBuilder:handler:] */

void FUN_005d804c(void)

{
  long unaff_x23;
  undefined8 uVar1;
  undefined1 auStack_98 [72];
  undefined1 auStack_50 [16];
  
  func_0x005d858c();
  func_0x005d8600();
  func_0x005d85f8();
  func_0x005d863c();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  func_0x005d85c4();
  func_0x005d8630();
  func_0x005d8644();
  FUN_005d7778(auStack_98);
  func_0x005d85a8();
  func_0x005c2dd4(auStack_98);
  func_0x005d85e8();
  func_0x005d8608();
  func_0x005d85f0();
  FUN_005d5950(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d855c();
  func_0x005d85d0();
  func_0x005d857c();
  func_0x005d8584();
  func_0x005d8574();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005d8160; end: 005d81b3;  */

void FUN_005d8160(undefined8 *param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_005d40d0(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 005d81b4; end: 005d82bf; -[SCNGrpcUnifiedGrpcService serverStreamingCall:request:callOptionsBuilder:handler:] */

void FUN_005d81b4(void)

{
  long unaff_x23;
  undefined8 uVar1;
  undefined1 auStack_98 [72];
  undefined1 auStack_50 [16];
  
  func_0x005d858c();
  func_0x005d8600();
  func_0x005d85f8();
  func_0x005d863c();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  func_0x005d85c4();
  func_0x005d8630();
  func_0x005d8644();
  FUN_005d6dd8(auStack_98);
  func_0x005d85a8();
  func_0x005d8610();
  func_0x005d85e8();
  func_0x005d8608();
  func_0x005d85f0();
  FUN_005d5950(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d855c();
  func_0x005d85d0();
  func_0x005d857c();
  func_0x005d8584();
  func_0x005d8574();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005d82c0; end: 005d840f; -[SCNGrpcUnifiedGrpcService bidiStreamingCall:callOptionsBuilder:handler:] */

void FUN_005d82c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_3);
  func_0x005d8600();
  func_0x005d85f8();
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_0047c764(auStack_68,param_3);
  FUN_005d8160(auStack_78,param_4);
  FUN_005d6dd8(auStack_88,param_5);
  (**(code **)(*plVar2 + 0x20))(auStack_50,plVar2,auStack_68,auStack_78,auStack_88);
  func_0x005d8610();
  func_0x005d85e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  puVar1 = auStack_50;
  FUN_005d47ac(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d4954(auStack_50);
  func_0x005d857c();
  func_0x005d8584();
  func_0x005d8574();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 005d8410; end: 005d8463; -[SCNGrpcUnifiedGrpcService .cxx_destruct] */

void FUN_005d8410(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a075f0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_005d851c((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d8464; end: 005d84a7; -[SCNGrpcUnifiedGrpcService .cxx_construct] */

undefined8 * FUN_005d8464(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x005d85d8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d84a8; end: 005d851b;  */

void FUN_005d84a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x005d85d8();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_005d851c(&uStack_30);
  return;
}



/* Entry: 005d851c; end: 005d8547;  */

long FUN_005d851c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d8548; end: 005d865f;  */

void FUN_005d8548(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d8660; end: 005d87d3; -[SCNGrpcAuthContext initWithHeaders:authTokenErrorCode:argosTokenErrorCode:argosLatencyInMs:authLatencyInMs:] */

undefined1 *
FUN_005d8660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_00ac40f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005d87d4; end: 005d87db; -[SCNGrpcAuthContext headers] */

undefined8 FUN_005d87d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005d87dc; end: 005d87e3; -[SCNGrpcAuthContext authTokenErrorCode] */

undefined8 FUN_005d87dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d87e4; end: 005d87eb; -[SCNGrpcAuthContext argosTokenErrorCode] */

undefined8 FUN_005d87e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d87ec; end: 005d87f3; -[SCNGrpcAuthContext argosLatencyInMs] */

undefined8 FUN_005d87ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d87f4; end: 005d87fb; -[SCNGrpcAuthContext authLatencyInMs] */

undefined8 FUN_005d87f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d87fc; end: 005d883f; -[SCNGrpcAuthContext .cxx_destruct] */

void FUN_005d87fc(long param_1)

{
  FUN_005d8840(param_1 + 0x28);
  FUN_005d8840(param_1 + 0x20);
  FUN_005d8840(param_1 + 0x18);
  FUN_005d8840(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005d8840; end: 005d8847;  */

void FUN_005d8840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 005d8848; end: 005d8933; -[SCNGrpcAuthContextRequest initWithAttestationRequired:requestPath:networkRequestId:] */

undefined1 *
FUN_005d8848(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4100;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 005d8934; end: 005d893b; -[SCNGrpcAuthContextRequest attestationRequired] */

undefined1 FUN_005d8934(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 005d893c; end: 005d8943; -[SCNGrpcAuthContextRequest requestPath] */

undefined8 FUN_005d893c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d8944; end: 005d894b; -[SCNGrpcAuthContextRequest networkRequestId] */

undefined8 FUN_005d8944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d894c; end: 005d897b; -[SCNGrpcAuthContextRequest .cxx_destruct] */

void FUN_005d894c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 005d897c; end: 005d8b5f; -[SCNGrpcCallOptions initWithRpcTimeoutMs:additionalHeaders:requireAuth:clientSwitchboardConfigKey:feature:attestation:consistentTrackingId:] */

undefined1 *
FUN_005d897c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR__OBJC_CLASS___SCNGrpcCallOptions_00ac4108;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x005d8bf4(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x005d8bf4(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x005d8bf4(uVar3);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x005d8bf4(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005d8b60; end: 005d8b67; -[SCNGrpcCallOptions rpcTimeoutMs] */

undefined8 FUN_005d8b60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005d8b68; end: 005d8b6f; -[SCNGrpcCallOptions additionalHeaders] */

undefined8 FUN_005d8b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d8b70; end: 005d8b77; -[SCNGrpcCallOptions requireAuth] */

undefined8 FUN_005d8b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d8b78; end: 005d8b7f; -[SCNGrpcCallOptions clientSwitchboardConfigKey] */

undefined8 FUN_005d8b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d8b80; end: 005d8b87; -[SCNGrpcCallOptions feature] */

undefined8 FUN_005d8b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d8b88; end: 005d8b8f; -[SCNGrpcCallOptions attestation] */

undefined8 FUN_005d8b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005d8b90; end: 005d8b97; -[SCNGrpcCallOptions consistentTrackingId] */

undefined8 FUN_005d8b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005d8b98; end: 005d8beb; -[SCNGrpcCallOptions .cxx_destruct] */

void FUN_005d8b98(long param_1)

{
  FUN_005d8bec(param_1 + 0x38);
  FUN_005d8bec(param_1 + 0x30);
  FUN_005d8bec(param_1 + 0x28);
  FUN_005d8bec(param_1 + 0x20);
  FUN_005d8bec(param_1 + 0x18);
  FUN_005d8bec(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005d8bec; end: 005d8bfb;  */

void FUN_005d8bec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 005d8bfc; end: 005d8dff; -[SCNGrpcGrpcParameters initWithEndpointAddress:rpcTimeout:channelType:userAgentPrefix:timeAliveInBackgroundMs:requestPathPrefix:cronetStreamEnginePointer:serviceClientSBConfigKey:requiresAttestation:useRetryFallback:maxInboundMessageSize:] */

undefined8 *
FUN_005d8bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
            undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_68 = PTR__OBJC_CLASS___SCNGrpcGrpcParameters_00ac4110;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x005d8eb4(uVar3);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x005d8eb4(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x005d8eb4(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x005d8eb4(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 005d8e00; end: 005d8e07; -[SCNGrpcGrpcParameters endpointAddress] */

undefined8 FUN_005d8e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d8e08; end: 005d8e0f; -[SCNGrpcGrpcParameters rpcTimeout] */

undefined8 FUN_005d8e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d8e10; end: 005d8e17; -[SCNGrpcGrpcParameters channelType] */

undefined8 FUN_005d8e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d8e18; end: 005d8e1f; -[SCNGrpcGrpcParameters userAgentPrefix] */

undefined8 FUN_005d8e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d8e20; end: 005d8e27; -[SCNGrpcGrpcParameters timeAliveInBackgroundMs] */

undefined8 FUN_005d8e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005d8e28; end: 005d8e2f; -[SCNGrpcGrpcParameters requestPathPrefix] */

undefined8 FUN_005d8e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005d8e30; end: 005d8e37; -[SCNGrpcGrpcParameters cronetStreamEnginePointer] */

undefined8 FUN_005d8e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 005d8e38; end: 005d8e3f; -[SCNGrpcGrpcParameters serviceClientSBConfigKey] */

undefined8 FUN_005d8e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 005d8e40; end: 005d8e47; -[SCNGrpcGrpcParameters requiresAttestation] */

undefined1 FUN_005d8e40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 005d8e48; end: 005d8e4f; -[SCNGrpcGrpcParameters useRetryFallback] */

undefined1 FUN_005d8e48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 005d8e50; end: 005d8e57; -[SCNGrpcGrpcParameters maxInboundMessageSize] */

undefined8 FUN_005d8e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 005d8e58; end: 005d8eab; -[SCNGrpcGrpcParameters .cxx_destruct] */

void FUN_005d8e58(long param_1)

{
  FUN_005d8eac(param_1 + 0x50);
  FUN_005d8eac(param_1 + 0x48);
  FUN_005d8eac(param_1 + 0x40);
  FUN_005d8eac(param_1 + 0x38);
  FUN_005d8eac(param_1 + 0x28);
  FUN_005d8eac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 005d8eac; end: 005d8ebb;  */

void FUN_005d8eac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 005d8ebc; end: 005d8f97; -[SCNGrpcHeader initWithKey:value:] */

undefined1 *
FUN_005d8ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005d8f98; end: 005d8f9f; -[SCNGrpcHeader key] */

undefined8 FUN_005d8f98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005d8fa0; end: 005d8fa7; -[SCNGrpcHeader value] */

undefined8 FUN_005d8fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d8fa8; end: 005d8fd7; -[SCNGrpcHeader .cxx_destruct] */

void FUN_005d8fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005d8fd8; end: 005d91b7; -[SCNGrpcRPCInfo initWithServiceMethodName:host:channelType:protocol:connectionReused:dnsResolveInMillis:connetionSetupInMillis:sslSetupInMillis:reqWireSize:responseWireSize:serverIp:cronetErrorCode:] */

undefined8 *
FUN_005d8fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_00ac4120;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    FUN_005d925c(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    FUN_005d925c(uVar3);
    puVar1[6] = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    FUN_005d925c(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
    *(undefined4 *)(puVar1 + 2) = param_9;
    *(undefined4 *)((long)puVar1 + 0x14) = param_10;
    *(undefined4 *)(puVar1 + 3) = param_11;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_12;
    uVar2 = param_13;
    func_0x00780e20();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    FUN_005d925c(uVar3);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 005d91b8; end: 005d91bf; -[SCNGrpcRPCInfo serviceMethodName] */

undefined8 FUN_005d91b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d91c0; end: 005d91c7; -[SCNGrpcRPCInfo host] */

undefined8 FUN_005d91c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d91c8; end: 005d91cf; -[SCNGrpcRPCInfo channelType] */

undefined8 FUN_005d91c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005d91d0; end: 005d91d7; -[SCNGrpcRPCInfo protocol] */

undefined8 FUN_005d91d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005d91d8; end: 005d91df; -[SCNGrpcRPCInfo connectionReused] */

undefined1 FUN_005d91d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 005d91e0; end: 005d91e7; -[SCNGrpcRPCInfo dnsResolveInMillis] */

undefined4 FUN_005d91e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 005d91e8; end: 005d91ef; -[SCNGrpcRPCInfo connetionSetupInMillis] */

undefined4 FUN_005d91e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 005d91f0; end: 005d91f7; -[SCNGrpcRPCInfo sslSetupInMillis] */

undefined4 FUN_005d91f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 005d91f8; end: 005d91ff; -[SCNGrpcRPCInfo reqWireSize] */

undefined4 FUN_005d91f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 005d9200; end: 005d9207; -[SCNGrpcRPCInfo responseWireSize] */

undefined4 FUN_005d9200(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 005d9208; end: 005d920f; -[SCNGrpcRPCInfo serverIp] */

undefined8 FUN_005d9208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 005d9210; end: 005d9217; -[SCNGrpcRPCInfo cronetErrorCode] */

undefined8 FUN_005d9210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 005d9218; end: 005d925b; -[SCNGrpcRPCInfo .cxx_destruct] */

void FUN_005d9218(long param_1)

{
  func_0x005d9264(param_1 + 0x48);
  func_0x005d9264(param_1 + 0x40);
  func_0x005d9264(param_1 + 0x38);
  func_0x005d9264(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 005d925c; end: 005d926b;  */

void FUN_005d925c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 005d926c; end: 005d9317; -[SCNGrpcStatus initWithStatusCode:errorString:] */

undefined1 *
FUN_005d926c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4128;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 005d9318; end: 005d931f; -[SCNGrpcStatus statusCode] */

undefined8 FUN_005d9318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005d9320; end: 005d9327; -[SCNGrpcStatus errorString] */

undefined8 FUN_005d9320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d9328; end: 005d9333; -[SCNGrpcStatus .cxx_destruct] */

void FUN_005d9328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 005d9334; end: 005d958f; -[SCNGrpcStreamingMetricsInfo initWithRpcInfo:bytesSent:bytesSentError:bytesReceived:msgSent:msgSentError:msgReceived:sessionTime:success:statusCode:requestId:taskId:consistentIdTracking:authSuccess:authLatency:argosSuccess:argosLatency:feature:serverLatency:argosType:networkTTFB:] */

undefined8 *
FUN_005d9334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
            undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_00ac4130;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined4 *)((long)puVar1 + 0xc) = param_12;
    uVar2 = param_13;
    func_0x00780e20();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x005d9694(uVar3);
    uVar2 = param_14;
    func_0x00780e20();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x005d9694(uVar3);
    uVar2 = param_15;
    func_0x00780e20();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x005d9694(uVar3);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    puVar1[0xe] = param_17;
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    puVar1[0x10] = param_19;
    uVar2 = param_20;
    func_0x00780e20();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x005d9694(uVar3);
    puVar1[0x12] = param_21;
    puVar1[0x13] = param_22;
    puVar1[0x14] = param_23;
  }
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 005d9590; end: 005d9597; -[SCNGrpcStreamingMetricsInfo rpcInfo] */

undefined8 FUN_005d9590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d9598; end: 005d959f; -[SCNGrpcStreamingMetricsInfo bytesSent] */

undefined8 FUN_005d9598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d95a0; end: 005d95a7; -[SCNGrpcStreamingMetricsInfo bytesSentError] */

undefined8 FUN_005d95a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d95a8; end: 005d95af; -[SCNGrpcStreamingMetricsInfo bytesReceived] */

undefined8 FUN_005d95a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d95b0; end: 005d95b7; -[SCNGrpcStreamingMetricsInfo msgSent] */

undefined8 FUN_005d95b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005d95b8; end: 005d95bf; -[SCNGrpcStreamingMetricsInfo msgSentError] */

undefined8 FUN_005d95b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005d95c0; end: 005d95c7; -[SCNGrpcStreamingMetricsInfo msgReceived] */

undefined8 FUN_005d95c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


