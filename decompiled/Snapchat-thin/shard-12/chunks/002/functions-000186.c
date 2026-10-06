/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f3abc4; end: 108f3ad63;  */

void FUN_108f3abc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f3b21c;
  uStack_40 = 0x108f3b22c;
  uStack_38 = 0;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3ad64; end: 108f3af1b;  */

void FUN_108f3ad64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f3b21c;
  uStack_40 = 0x108f3b22c;
  uStack_38 = 0;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3af1c; end: 108f3afff;  */

undefined8 FUN_108f3af1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bee40(param_1);
  if ((ulong)puStack_38[3] < 6) {
    uVar1 = *(undefined8 *)(&UNK_10dfb0ab0 + puStack_38[3] * 8);
  }
  else {
    uVar1 = 1;
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f3b000; end: 108f3b21b;  */

void FUN_108f3b000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108f3b21c;
  uStack_70 = 0x108f3b22c;
  uStack_68 = 0;
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3b21c; end: 108f3b233;  */

void FUN_108f3b21c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f3b234; end: 108f3b29f;  */

void FUN_108f3b234(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(in_x7);
  uVar1 = in_x7;
  func_0x00010c06cd80();
  if ((int)uVar1 != 0) {
    uVar1 = in_x7;
    func_0x00010bf62820();
    FUN_108f3b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x7);
  return;
}



/* Entry: 108f3b2a0; end: 108f3b45b;  */

void FUN_108f3b2a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126dc9a8;
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  if (param_1 < 4) {
    if (param_1 < 2) {
      if ((param_1 != 0) && (param_1 != 1)) goto LAB_108f3b3c0;
    }
    else if ((param_1 != 2) && (param_1 != 3)) goto LAB_108f3b3c0;
LAB_108f3b3ac:
    func_0x00010c1a9320(puVar2);
  }
  else {
    if (param_1 < 6) {
      if (param_1 == 4) goto LAB_108f3b3ac;
      if (param_1 != 5) goto LAB_108f3b3c0;
    }
    else if (param_1 != 6) {
      if (param_1 == 7) {
        func_0x00010c225420(puVar2);
      }
      goto LAB_108f3b3c0;
    }
    func_0x00010c189d40(puVar2);
  }
LAB_108f3b3c0:
  puVar3 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
  func_0x00010c09e860(PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf628c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126c2688;
  func_0x00010bf8aae0(PTR_PTR_1126c2688);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f3b45c; end: 108f3b533;  */

void FUN_108f3b45c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  
  _objc_retain(in_stack_00000008);
  uVar1 = in_stack_00000008;
  func_0x00010c06cd80();
  if ((int)uVar1 != 0) {
    uVar1 = in_stack_00000008;
    func_0x00010bf62820();
    FUN_108f3b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000008);
  return;
}



/* Entry: 108f3b534; end: 108f3b673;  */

void FUN_108f3b534(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_stack_00000000;
  char in_stack_00000008;
  
  _objc_retain(in_stack_00000000);
  if (((in_stack_00000008 == '\0') || (*(char *)(param_1 + 0x30) != '\x01')) ||
     (*(char *)(param_1 + 0x31) != '\x01')) {
    puVar1 = PTR_PTR_1126dc9b0;
    _objc_alloc(PTR_PTR_1126dc9b0);
    func_0x00010c052bc0();
    puVar4 = PTR_PTR_1126c2688;
    func_0x00010bf15600(PTR_PTR_1126c2688,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    FUN_108f42a50(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar3 = PTR_PTR_1126c5278;
    _objc_alloc(PTR_PTR_1126c5278);
    func_0x00010c053440();
    puVar4 = PTR_PTR_1126c2688;
    func_0x00010bf25c20(PTR_PTR_1126c2688,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000000);
  return;
}



/* Entry: 108f3b674; end: 108f3b6df;  */

void FUN_108f3b674(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(in_x4);
  uVar1 = in_x4;
  func_0x00010c06cd80();
  if ((int)uVar1 != 0) {
    uVar1 = in_x4;
    func_0x00010bf62820();
    FUN_108f3b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 108f3b6e0; end: 108f3b82b;  */

void FUN_108f3b6e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  long param_9)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_2);
  bVar2 = param_9 - 4U < 6;
  bVar1 = 4;
  if (!bVar2 && param_4 + 1U < param_5) {
    bVar1 = 0;
  }
  _objc_retain(0);
  uVar3 = param_2;
  FUN_108f3b82c(param_1,param_2,param_3,param_4,param_5,param_6,param_9,
                bVar1 | (bVar2 || param_4 == 0) | 10U,0,param_7,0,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f3b82c; end: 108f3c39b;  */

void FUN_108f3b82c(undefined8 param_1,undefined **param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000011;
  long in_stack_00000018;
  undefined1 uStack0000000000000020;
  undefined1 uStack0000000000000021;
  char cStack0000000000000022;
  undefined *puStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000018);
  uVar12 = in_stack_00000000;
  FUN_108f421b0();
  _objc_retain(param_2);
  _objc_retain(in_stack_00000018);
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_108f3b21c;
  uStack_98 = 0x108f3b22c;
  uStack_90 = 0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_e8 = (undefined **)0xc2000000;
  pcStack_e0 = FUN_108f3d030;
  pcStack_d8 = (code *)&UNK_110acd490;
  puStack_c8 = &uStack_b8;
  puStack_b0 = &uStack_b8;
  _objc_retain(param_2);
  uStack_c0 = 0;
  uVar1 = (undefined1)uVar12;
  puStack_128 = puVar15;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = FUN_108f3d168;
  puStack_110 = &UNK_110acd4c0;
  ppuStack_100 = (undefined **)&uStack_b8;
  ppuStack_d0 = param_2;
  uStack_bf = uVar1;
  _objc_retain(param_2);
  uStack_f8 = 0;
  ppuStack_108 = param_2;
  uStack_f7 = uVar1;
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bee40(param_2);
  ppuVar16 = (undefined **)puStack_b0[5];
  _objc_retain(ppuVar16);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(ppuStack_108);
  _objc_release(ppuStack_d0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(in_stack_00000018);
  _objc_release(param_2);
  ppuVar2 = param_2;
  FUN_108f42a50();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f431c0();
  ppuVar4 = ppuVar16;
  if ((int)ppuVar3 != 0) {
    ppuVar4 = param_2;
    FUN_108f3aaa8(param_2,uStack0000000000000010);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
  }
  ppuVar3 = ppuVar4;
  if ((in_stack_00000018 != 0) &&
     (lVar5 = in_stack_00000018, func_0x00010bf456e0(), (int)lVar5 != 0)) {
    _objc_retain(in_stack_00000018);
    _objc_retain(param_2);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &puStack_128;
    puStack_128 = (undefined *)0x0;
    pcStack_118 = (code *)0x2020000000;
    puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,1);
    puStack_f0 = puVar15;
    ppuStack_e8 = (undefined **)0xc2000000;
    pcStack_e0 = FUN_108f3d604;
    pcStack_d8 = (code *)&UNK_11086b990;
    ppuStack_d0 = ppuStack_120;
    func_0x00010c0bee40(param_2);
    if (((ulong)ppuStack_120[3] & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar8);
    }
    lVar5 = in_stack_00000018;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      lVar7 = in_stack_00000018;
      func_0x00010c2711a0(in_stack_00000018);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
    ppuVar3 = (undefined **)PTR_PTR_1126b53e8;
    func_0x00010bf0e6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    __Block_object_dispose(&puStack_128,8);
    _objc_release(puVar6);
    _objc_release(param_2);
    _objc_release(in_stack_00000018);
    _objc_release(ppuVar4);
  }
  func_0x00010bfb40c0();
  lVar5 = in_stack_00000018;
  func_0x00010bf34120();
  puVar6 = PTR_PTR_1126b52c0;
  _objc_alloc();
  _objc_retain(param_2);
  uVar12 = 0;
  if ((param_3 != 0) && (cStack0000000000000022 != '\0')) {
    if (lRam0000000113730310 != -1) {
      func_0x000107c27d9c(0x113730310,&PTR___NSConcreteGlobalBlock_110acd5e0);
    }
    uVar12 = uRam0000000113730308;
    _objc_retain(uRam0000000113730308);
  }
  puStack_f0 = (undefined *)0x0;
  pcStack_e0 = (code *)0x3032000000;
  pcStack_d8 = FUN_108f3b21c;
  ppuStack_d0 = (undefined **)0x108f3b22c;
  puVar8 = PTR_PTR_1126b53f0;
  ppuStack_e8 = &puStack_f0;
  func_0x00010c159140();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar15;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = FUN_108f3d618;
  puStack_110 = &UNK_110acd5b0;
  ppuStack_100 = (undefined **)CONCAT71(ppuStack_100._1_7_,(char)param_3);
  ppuStack_108 = &puStack_f0;
  puStack_c8 = (undefined8 *)puVar8;
  func_0x00010c0bee40(param_2);
  puVar8 = ppuStack_e8[5];
  _objc_retain();
  __Block_object_dispose(&puStack_f0,8);
  _objc_release(puStack_c8);
  _objc_release(uVar12);
  _objc_release(param_2);
  _objc_retain(param_2);
  _objc_retain(in_stack_00000018);
  _objc_retain(param_2);
  puStack_f0 = (undefined *)0x0;
  pcStack_e0 = (code *)0x3032000000;
  pcStack_d8 = FUN_108f3b21c;
  ppuStack_d0 = (undefined **)0x108f3b22c;
  puStack_c8 = (undefined8 *)0x0;
  puStack_128 = puVar15;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = (code *)0x108f3d8ec;
  puStack_110 = &UNK_11094e620;
  ppuStack_100 = &puStack_f0;
  ppuStack_e8 = &puStack_f0;
  _objc_retain(param_2);
  ppuStack_108 = param_2;
  func_0x00010c0bee40(param_2);
  puVar13 = ppuStack_e8[5];
  _objc_retain(puVar13);
  _objc_release(ppuStack_108);
  __Block_object_dispose(&puStack_f0,8);
  _objc_release(puStack_c8);
  _objc_release(param_2);
  _objc_retain(param_2);
  _objc_retain(in_stack_00000018);
  puStack_f0 = (undefined *)0x0;
  pcStack_e0 = (code *)0x3032000000;
  pcStack_d8 = FUN_108f3b21c;
  ppuStack_d0 = (undefined **)0x108f3b22c;
  puStack_c8 = (undefined8 *)0x0;
  puStack_128 = puVar15;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = FUN_108f3d96c;
  puStack_110 = &UNK_11094e620;
  ppuStack_100 = &puStack_f0;
  ppuStack_e8 = &puStack_f0;
  _objc_retain(in_stack_00000018);
  ppuStack_108 = (undefined **)in_stack_00000018;
  uVar12 = 0;
  func_0x00010c0bee40(param_2);
  puVar14 = ppuStack_e8[5];
  _objc_retain(puVar14);
  _objc_release(ppuStack_108);
  __Block_object_dispose(&puStack_f0,8);
  _objc_release(puStack_c8);
  _objc_release(in_stack_00000018);
  _objc_release(param_2);
  if (puVar14 == (undefined *)0x0) {
    puVar9 = PTR_PTR_1126c2678;
    _objc_alloc(PTR_PTR_1126c2678);
    ppuVar4 = param_2;
    FUN_108f389fc(param_2,uStack0000000000000011,0,0x48,0,0,in_stack_00000018,0,
                  (ulong)CONCAT61((int6)((ulong)uVar12 >> 0x10),uVar1) << 8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff62a0(puVar9);
    _objc_release(ppuVar4);
    puVar10 = PTR_PTR_1126b53d0;
    func_0x00010bf133a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = PTR_PTR_1126b53d8;
    _objc_alloc(PTR_PTR_1126b53d8);
    func_0x00010c01c3c0();
    puVar10 = PTR_PTR_1126b53d0;
    func_0x00010bfe98c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(in_stack_00000018);
  _objc_release(param_2);
  ppuVar4 = param_2;
  FUN_108f3b000(param_2,uStack0000000000000020,param_3,uStack0000000000000021);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = param_2;
  FUN_108f38848();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_2;
  FUN_108f38548(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  _objc_retain(param_2);
  ppuStack_108 = &puStack_f0;
  puStack_f0 = (undefined *)0x0;
  pcStack_e0 = (code *)0x3032000000;
  pcStack_d8 = FUN_108f3b21c;
  ppuStack_d0 = (undefined **)0x108f3b22c;
  puStack_c8 = (undefined8 *)0x0;
  puStack_128 = puVar15;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = (code *)0x108f3d9b0;
  puStack_110 = &UNK_11086b990;
  ppuStack_e8 = ppuStack_108;
  func_0x00010c0bee40(param_2);
  uVar12 = 0x4039000000000000;
  if (lVar5 != 1) {
    uVar12 = 0;
  }
  puVar15 = ppuStack_e8[5];
  _objc_retain(puVar15);
  __Block_object_dispose(&puStack_f0,8);
  _objc_release(puStack_c8);
  _objc_release(param_2);
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,param_1,uVar12);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(ppuVar11);
  _objc_release(ppuVar16);
  _objc_release(ppuVar4);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f3c39c; end: 108f3c4bb;  */

void FUN_108f3c39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  _objc_retain(in_stack_00000008);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(0);
  uVar1 = param_2;
  FUN_108f3b82c(param_1,param_2,param_3,param_4,param_5,param_6,param_8,0xf,1,param_7,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3c4bc; end: 108f3c4d3;  */

void FUN_108f3c4bc(long param_1)

{
  undefined8 in_x4;
  long in_x5;
  
  if (2 < in_x5) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x4;
  }
  return;
}



/* Entry: 108f3c4d4; end: 108f3c61f;  */

void FUN_108f3c4d4(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_2 & 1) == 0) {
    lVar2 = param_1;
    _objc_retain();
    if ((lRam00000001138466f0 == 2) ||
       ((lRam00000001138466f0 == 0 && (func_0x000107c30a98(), lVar2 == 3)))) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f09818;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f097f8;
    }
    _objc_retain(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bee40(param_1);
    lVar2 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
    _objc_release(param_1);
    _objc_release(param_1);
    if (lVar2 != 0) {
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f097d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f3c620; end: 108f3c98f;  */

void FUN_108f3c620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffff30;
  undefined *puStack_98;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if ((int)param_8 == 0) {
    puStack_98 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    uVar8 = 0x48;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9340(0x3fe0000000000000,0);
    _objc_release();
    if ((lRam00000001138466f0 == 2) ||
       (((lRam00000001138466f0 == 0 && (func_0x000107c30a98(), puVar1 == (undefined *)0x3)) ||
        (2 < param_9 - 1U)))) {
      uVar8 = 0x48;
    }
    else {
      uVar8 = *(undefined8 *)(&UNK_10dfb0af8 + (param_9 - 1U) * 8);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar1;
    }
  }
  uVar10 = (undefined1)param_7;
  FUN_108f421b0();
  uVar2 = param_2;
  FUN_108f389fc(param_2,param_8,puVar9,uVar8,2,0,0,param_12,
                CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff30 >> 0x10),uVar10),param_13)
               );
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  if ((int)param_3 != 0) {
    uVar8 = param_2;
    FUN_108f3b000(param_2,param_10._2_1_,1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if ((char)param_10 == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = param_2;
    FUN_108f4242c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126c51a0;
  _objc_alloc();
  uVar3 = param_2;
  FUN_108f3ad64(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_108f3c990(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108f3c4d4(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108f38548(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108f38848();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010bff62e0(0x3ff0000000000000,param_1);
  _objc_release(0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puStack_98);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f3c990; end: 108f3ca9f;  */

void FUN_108f3c990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108f3b21c;
  uStack_30 = 0x108f3b22c;
  uStack_28 = 0;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3caa0; end: 108f3caab;  */

void FUN_108f3caa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f3b21c;
  uStack_40 = 0x108f3b22c;
  uStack_38 = 0;
  func_0x00010c0bee40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f3caac; end: 108f3cae3;  */

void FUN_108f3caac(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_108f3c990();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_108f3abc4(param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f3cae4; end: 108f3cc13;  */

void FUN_108f3cae4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined **param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar1 = param_8;
  _objc_retain();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (param_7 != 2) goto LAB_108f3cbc8;
    func_0x000108f5965c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 == 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f09858;
    }
    else {
      if (param_4 != 1) {
        if (param_4 != 0) goto LAB_108f3cbc8;
        if (param_7 == 2) {
          func_0x000108f591c4();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f3cbb0;
        }
        if (param_7 != 1) goto LAB_108f3cbc8;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110f09838;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108f3cbb0:
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
  _objc_release(uVar2);
LAB_108f3cbc8:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3cc14; end: 108f3cca7;  */

void FUN_108f3cc14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f3cca8; end: 108f3cd03;  */

void FUN_108f3cca8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  if (param_3 == 6) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_5;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108f3cd04; end: 108f3ce43;  */

void FUN_108f3cd04(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  long lVar2;
  
  _objc_retain(in_x6);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f3ce44; end: 108f3cebf;  */

void FUN_108f3ce44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char in_stack_00000018;
  
  uVar1 = param_3;
  _objc_retain();
  if (in_stack_00000018 == '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_3;
  }
  else {
    func_0x000108f591dc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f3cec0; end: 108f3cf6b;  */

void FUN_108f3cec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f3cf6c; end: 108f3d01f;  */

void FUN_108f3cf6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_3;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_6 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_3;
  }
  else {
    func_0x000108f57dfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc7218);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f3d020; end: 108f3d02f;  */

void FUN_108f3d020(long param_1)

{
  undefined8 in_x4;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x4;
  return;
}



/* Entry: 108f3d030; end: 108f3d077;  */

void FUN_108f3d030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f3d078(uVar1,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3d078; end: 108f3d167;  */

void FUN_108f3d078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b53e0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_108f3ad64(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_108f3abc4(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b53e8;
  FUN_108f3af1c(param_1);
  _objc_release(param_1);
  func_0x00010bf16660(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f3d168; end: 108f3d23f;  */

void FUN_108f3d168(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f3d078(uVar1,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3d240; end: 108f3d573;  */

void FUN_108f3d240(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  char in_stack_00000008;
  long in_stack_00000018;
  
  _objc_retain(in_stack_00000018);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_3 + 0x20);
  FUN_108f3ad64(lVar3,*(undefined1 *)(param_3 + 0x30),1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_3 + 0x20);
  FUN_108f3abc4(lVar4,*(undefined1 *)(param_3 + 0x30),*(undefined1 *)(param_3 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  if (in_stack_00000008 == '\0') {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar11);
  if (lVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
  }
  if (lVar4 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_retain();
    puVar5 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    if ((in_stack_00000018 != 0) && (puVar12 != (undefined *)0x0)) {
      _objc_retain(in_stack_00000018);
      _objc_alloc_init(puVar5);
      func_0x00010c1a9f00();
      func_0x00010c23d0a0(in_stack_00000018);
      func_0x00010c23d0a0(in_stack_00000018);
      _objc_release(in_stack_00000018);
      func_0x00010c1739e0(0,0xbff8000000000000,param_1,param_2,puVar5);
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4f40(puVar7);
      _objc_release(puVar8);
      func_0x00010bf069e0(puVar7);
      func_0x00010bf069e0(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_108f3d4d8;
    }
  }
  _objc_retain(puVar12);
  puVar7 = puVar12;
LAB_108f3d4d8:
  _objc_release(puVar12);
  puVar5 = PTR_PTR_1126b53e8;
  func_0x00010bf0e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar5;
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000018);
  return;
}



/* Entry: 108f3d574; end: 108f3d603;  */

void FUN_108f3d574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f3d078(uVar1,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3d604; end: 108f3d617;  */

void FUN_108f3d604(long param_1)

{
  undefined1 in_stack_00000008;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000008;
  return;
}



/* Entry: 108f3d618; end: 108f3d75f;  */

void FUN_108f3d618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if ((param_10._1_1_ != '\0') && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    puVar1 = PTR_PTR_1126b53f0;
    func_0x00010bf811c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3d760; end: 108f3d803;  */

void FUN_108f3d760(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c0469e0(0x4038000000000000,0x4038000000000000);
  puVar3 = puVar2;
  func_0x00010bfe91c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730308;
  puRam0000000113730308 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108f3d804; end: 108f3d96b;  */

void FUN_108f3d804(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bdc1000(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  _CGContextFillEllipseInRect
            (0,0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_2);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),
                      PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe97c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f3d96c; end: 108f3d9f7;  */

void FUN_108f3d96c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f48f94(uVar1,in_stack_00000010);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3d9f8; end: 108f3dae7;  */

void FUN_108f3d9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_8;
  _objc_retain();
  if (param_7 == 0) {
    func_0x000108f5920c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_7 == 1) {
    func_0x000108f59224();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_7 != 2) goto LAB_108f3daac;
    func_0x000108f591c4();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
LAB_108f3daac:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3dae8; end: 108f3db23;  */

void FUN_108f3dae8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000108f591f4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3db24; end: 108f3db27;  */

void FUN_108f3db24(void)

{
  return;
}



/* Entry: 108f3db28; end: 108f3dbc7; +[SCSendToSpotlightErrorStateHelper shouldShowAddSoundErrorWithStoryConfiguration:contentConfiguration:] */

uint FUN_108f3db28(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c0d3a40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (uint)(param_4 == 0);
    _objc_release();
  }
  else {
    lVar1 = param_3;
    func_0x00010c075080(param_3);
    lVar2 = param_3;
    func_0x00010c0782e0(param_3);
    lVar3 = param_3;
    func_0x00010c06c980(param_3);
    lVar4 = param_3;
    func_0x00010c06c8e0(param_3);
    uVar5 = ((uint)lVar1 | (uint)lVar3 & (uint)lVar4 ^ 1) & ((uint)lVar2 ^ 1);
  }
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 108f3dbc8; end: 108f3dd6b; -[SCSendToSpotlightSubtextGenerator generateSpotlightInstructionTextForIsShortVideo:minimumDurationSeconds:variantValue:isFriendsOnlyProfile:] */

void FUN_108f3dbc8(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000108f5836c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  if ((param_6 & 1) == 0) {
    puVar5 = param_1;
    _objc_retain(param_1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR_PTR_1126b5218;
  }
  else {
    func_0x000108f583e4();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR_PTR_1126b5218;
  }
  PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar2;
  PTR_PTR_1126b5218 = puVar3;
  if ((param_3 & 1) == 0) {
    _objc_alloc(puVar3);
    func_0x00010c0513c0();
    goto LAB_108f3dd40;
  }
  func_0x000108f58414();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (param_5 == 2) {
    uVar4 = 0x4c;
LAB_108f3dcc0:
    _objc_retain(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0xec,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
  }
  else {
    if (param_5 == 1) {
      uVar4 = 0x4a;
      goto LAB_108f3dcc0;
    }
    if (param_5 == 0) {
      _objc_retain(puVar1);
    }
    else {
      _objc_retain(puVar1);
    }
    puVar5 = (undefined *)0x0;
    puVar6 = puVar1;
  }
  puVar3 = PTR_PTR_1126b5218;
  _objc_alloc(PTR_PTR_1126b5218);
  func_0x00010c0513c0();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
LAB_108f3dd40:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f3dd6c; end: 108f3ddf7;  */

void FUN_108f3dd6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f098d8,0,0);
  return;
}



/* Entry: 108f3ddf8; end: 108f3de47;  */

long FUN_108f3ddf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09a18,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f3de48; end: 108f3de97;  */

void FUN_108f3de48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09958,0,0);
  return;
}



/* Entry: 108f3de98; end: 108f3debf;  */

long FUN_108f3de98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f099d8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f3dec0; end: 108f3defb;  */

void FUN_108f3dec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09a98,0,0);
  return;
}



/* Entry: 108f3defc; end: 108f3df23;  */

long FUN_108f3defc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09af8,1,0);
  return (long)(int)param_1;
}



/* Entry: 108f3df24; end: 108f3df5f;  */

void FUN_108f3df24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09b18,0,0);
  return;
}



/* Entry: 108f3df60; end: 108f3dfaf;  */

long FUN_108f3df60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09b78,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f3dfb0; end: 108f3dfff;  */

void FUN_108f3dfb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09bb8,0,0);
  return;
}



/* Entry: 108f3e000; end: 108f3e0c7;  */

long FUN_108f3e000(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09c38,0x7fffffff,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 108f3e0c8; end: 108f3e0ef;  */

void FUN_108f3e0c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09cd8,0,0);
  return;
}



/* Entry: 108f3e0f0; end: 108f3e117;  */

long FUN_108f3e0f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09cf8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f3e118; end: 108f3e13f;  */

void FUN_108f3e118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09d38,0,0);
  return;
}



/* Entry: 108f3e140; end: 108f3e167;  */

long FUN_108f3e140(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09d78,0x2ee,0);
  return (long)(int)param_1;
}



/* Entry: 108f3e168; end: 108f3e17b;  */

void FUN_108f3e168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09d98,0,0);
  return;
}



/* Entry: 108f3e17c; end: 108f3e1a3;  */

long FUN_108f3e17c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f09db8,1,0);
  return (long)(int)param_1;
}



/* Entry: 108f3e1a4; end: 108f3e27f;  */

void FUN_108f3e1a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f09dd8,0,0);
  return;
}



/* Entry: 108f3e280; end: 108f3e63f; -[SCCFriend initWithSCSnapchatter:] */

undefined * FUN_108f3e280(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1440;
    _objc_alloc();
    func_0x00010c040f20();
    lVar2 = param_4;
    FUN_10901d430();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    FUN_10901cdb0(param_4,puVar9);
    _objc_release(puVar9);
    lVar8 = param_4;
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    FUN_10901de3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar3;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3;
      func_0x000107c31908(lVar3,&PTR___NSConcreteGlobalBlock_110acd660);
    }
    puVar9 = PTR_PTR_1126b4c30;
    _objc_alloc(PTR_PTR_1126b4c30);
    FUN_10901ca64(param_4);
    func_0x000107c2aaa4(param_4);
    lVar4 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0891c0();
    param_1 = param_1 * 1000.0;
    lVar5 = param_4;
    FUN_10901d924(param_4);
    func_0x00010901c618(param_4);
    func_0x00010c05a6e0(param_1,(double)(int)lVar5,puVar9);
    _objc_release(lVar4);
    func_0x00010c1a0720(puVar9);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef89e0();
    func_0x00010c0df720(param_1 * 1000.0,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165900(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar4);
    if (lVar2 == 0) {
      func_0x00010c170380(puVar9);
    }
    else {
      uVar7 = param_2;
      func_0x00010be1d880(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170380(puVar9);
      _objc_release(uVar7);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010901e8b4(param_4);
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b34e0(puVar9);
    _objc_release(puVar6);
    lVar4 = param_4;
    func_0x00010c105040(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df300(puVar9);
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_4;
    func_0x00010c1022a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080200();
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3600(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_4;
    func_0x00010c1022a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077ac0();
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2800(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bde3d60(param_2);
    func_0x00010c0df760(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19fe00(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar9;
}



/* Entry: 108f3e640; end: 108f3e68b;  */

void FUN_108f3e640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc9b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f3e68c; end: 108f3e703; -[SCCFriend _getCalendarDate:] */

void FUN_108f3e68c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_PTR_1126dc9c0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0d0e40(param_3);
  func_0x00010c1c8fc0((double)(uVar2 & 0xffffffff),puVar1);
  uVar2 = param_3;
  func_0x00010bf65700(param_3);
  _objc_release(param_3);
  func_0x00010c189d40((double)(uVar2 & 0xffffffff),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f3e704; end: 108f3e7b3; -[SCCFriend _composerFriendLinkTypeForSnapchatter:] */

undefined4 FUN_108f3e704(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000107c2aaa4();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((uVar1 == 0) && (uVar1 = param_3, FUN_10901c5ac(), (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x00010c06d560();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        FUN_10901c974();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010901c7a8();
          uVar2 = 3;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 5;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108f3e7b4; end: 108f3f2e7; -[SCCFriend isEqualToFriend:] */

long FUN_108f3e7b4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  double dVar32;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  if (param_2 == param_4) {
    lVar30 = 1;
    goto LAB_108f3eb64;
  }
  if (param_4 == 0) {
    lVar30 = 0;
    goto LAB_108f3eb64;
  }
  lVar1 = param_2;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_108f3e8d4:
    lVar30 = param_2;
    func_0x00010c06d240();
    lVar7 = param_4;
    func_0x00010c06d240();
    if ((int)lVar30 == (int)lVar7) {
      lVar30 = param_2;
      func_0x00010c078440();
      lVar7 = param_4;
      func_0x00010c078440();
      if ((int)lVar30 == (int)lVar7) {
        lVar30 = param_2;
        func_0x00010c06d2e0();
        lVar7 = param_4;
        func_0x00010c06d2e0();
        if ((int)lVar30 == (int)lVar7) {
          func_0x00010c0891e0(param_2);
          dVar31 = param_1;
          func_0x00010c0891e0(param_4);
          if (param_1 == dVar31) {
            func_0x00010c243560(param_2);
            dVar32 = dVar31;
            func_0x00010c243560(param_4);
            if (dVar31 == dVar32) {
              lVar30 = param_2;
              func_0x00010bf363c0();
              lVar7 = param_4;
              func_0x00010bf363c0();
              if ((int)lVar30 == (int)lVar7) {
                lVar7 = param_2;
                func_0x00010bfb9b40();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = param_4;
                func_0x00010bfb9b40(param_4);
                _objc_retainAutoreleasedReturnValue();
                lVar30 = lVar7;
                FUN_108f3f2e8(lVar7,lVar8);
                if ((int)lVar30 != 0) {
                  lVar3 = param_2;
                  func_0x00010befce00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = param_4;
                  func_0x00010befce00(param_4);
                  _objc_retainAutoreleasedReturnValue();
                  lVar30 = lVar3;
                  func_0x00010bd86de8(lVar3,lVar4);
                  if ((int)lVar30 != 0) {
                    lStack_80 = param_2;
                    func_0x00010bf1a5c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar5 = param_4;
                    func_0x00010bf1a5c0(param_4);
                    _objc_retainAutoreleasedReturnValue();
                    lVar30 = lStack_80;
                    FUN_108f3f4e0(lStack_80,lVar5);
                    if ((int)lVar30 != 0) {
                      lStack_88 = param_2;
                      func_0x00010c0fc580();
                      _objc_retainAutoreleasedReturnValue();
                      lStack_90 = param_4;
                      func_0x00010c0fc580();
                      _objc_retainAutoreleasedReturnValue();
                      lVar30 = lStack_88;
                      func_0x00010bd86de8(lStack_88,lStack_90);
                      if ((int)lVar30 != 0) {
                        lStack_98 = param_2;
                        func_0x00010c07a0c0();
                        _objc_retainAutoreleasedReturnValue();
                        lStack_a0 = param_4;
                        func_0x00010c07a0c0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar30 = lStack_98;
                        func_0x00010bd86de8(lStack_98,lStack_a0);
                        if ((int)lVar30 == 0) {
                          lVar30 = 0;
                        }
                        else {
                          lVar6 = param_2;
                          func_0x00010bf50280();
                          _objc_retainAutoreleasedReturnValue();
                          lVar9 = param_4;
                          func_0x00010bf50280();
                          _objc_retainAutoreleasedReturnValue();
                          lVar30 = lVar6;
                          func_0x00010bd86de8();
                          if ((int)lVar30 == 0) {
                            lVar30 = 0;
                          }
                          else {
                            lVar10 = param_2;
                            func_0x00010c105040();
                            _objc_retainAutoreleasedReturnValue();
                            lVar11 = param_4;
                            func_0x00010c105040();
                            _objc_retainAutoreleasedReturnValue();
                            lVar30 = lVar10;
                            func_0x00010bd86de8(lVar10,lVar11);
                            if ((int)lVar30 == 0) {
                              lVar30 = 0;
                            }
                            else {
                              lVar12 = param_2;
                              func_0x00010bfb83c0();
                              _objc_retainAutoreleasedReturnValue();
                              lVar13 = param_4;
                              func_0x00010bfb83c0();
                              _objc_retainAutoreleasedReturnValue();
                              lVar30 = lVar12;
                              func_0x00010bd86de8(lVar12,lVar13);
                              if ((int)lVar30 == 0) {
                                lVar30 = 0;
                              }
                              else {
                                lVar14 = param_2;
                                func_0x00010c07a5c0();
                                _objc_retainAutoreleasedReturnValue();
                                lVar15 = param_4;
                                func_0x00010c07a5c0();
                                _objc_retainAutoreleasedReturnValue();
                                lVar30 = lVar14;
                                func_0x00010bd86de8(lVar14,lVar15);
                                if ((int)lVar30 == 0) {
                                  lVar30 = 0;
                                }
                                else {
                                  func_0x00010c077ac0();
                                  _objc_retainAutoreleasedReturnValue();
                                  lVar16 = param_4;
                                  func_0x00010c077ac0(param_4);
                                  _objc_retainAutoreleasedReturnValue();
                                  lVar30 = param_2;
                                  func_0x00010bd86de8(param_2,lVar16);
                                  _objc_release(lVar16);
                                  _objc_release(param_2);
                                }
                                _objc_release(lVar15);
                                _objc_release(lVar14);
                              }
                              _objc_release(lVar13);
                              _objc_release(lVar12);
                            }
                            _objc_release(lVar11);
                            _objc_release(lVar10);
                          }
                          _objc_release(lVar9);
                          _objc_release(lVar6);
                        }
                        goto LAB_108f3f0f0;
                      }
                      lVar30 = 0;
                      goto LAB_108f3eb14;
                    }
                    lVar30 = 0;
                    goto LAB_108f3eb24;
                  }
                  lVar30 = 0;
                  goto LAB_108f3eb34;
                }
                lVar30 = 0;
                goto LAB_108f3eb44;
              }
            }
          }
        }
      }
    }
    lVar30 = 0;
  }
  else {
    lVar30 = 0;
    lVar8 = lVar2;
    lVar7 = lVar1;
    if ((lVar1 != 0) && (lVar2 != 0)) {
      lVar3 = lVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar3);
      _objc_retain(lVar4);
      if (lVar3 == lVar4) {
        _objc_release(lVar4);
        _objc_release(lVar3);
LAB_108f3e994:
        lStack_80 = lVar1;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lStack_80);
        _objc_retain(lVar5);
        if (lStack_80 == lVar5) {
          _objc_release(lVar5);
          _objc_release(lStack_80);
LAB_108f3ea28:
          lStack_88 = lVar1;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          lStack_90 = lVar2;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lStack_88);
          _objc_retain(lStack_90);
          if (lStack_88 == lStack_90) {
            _objc_release(lStack_90);
            _objc_release(lStack_88);
LAB_108f3eac8:
            lVar30 = lVar1;
            func_0x00010c07a6a0();
            lVar6 = lVar2;
            func_0x00010c07a6a0();
            if ((int)lVar30 == (int)lVar6) {
              lVar30 = lVar1;
              func_0x00010c078f60();
              lVar6 = lVar2;
              func_0x00010c078f60();
              if ((int)lVar30 == (int)lVar6) {
                lStack_98 = lVar1;
                func_0x00010bf1bae0();
                _objc_retainAutoreleasedReturnValue();
                lStack_a0 = lVar2;
                func_0x00010bf1bae0();
                _objc_retainAutoreleasedReturnValue();
                lVar30 = lStack_98;
                FUN_108f3f58c(lStack_98,lStack_a0);
                if ((int)lVar30 != 0) {
                  func_0x00010bf25140();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf25140(lVar2);
                  _objc_retainAutoreleasedReturnValue();
                  lVar30 = lVar7;
                  func_0x00010bd86de8(lVar7,lVar8);
                  if ((int)lVar30 == 0) {
                    lVar30 = 0;
                  }
                  else {
                    lVar6 = lVar1;
                    func_0x00010c2429c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar9 = lVar2;
                    func_0x00010c2429c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar30 = lVar6;
                    func_0x00010bd86de8();
                    if ((int)lVar30 == 0) {
                      lVar30 = 0;
                    }
                    else {
                      lVar10 = lVar1;
                      func_0x00010c102000();
                      _objc_retainAutoreleasedReturnValue();
                      lVar11 = lVar2;
                      func_0x00010c102000();
                      _objc_retainAutoreleasedReturnValue();
                      lVar30 = lVar10;
                      func_0x00010bd86de8(lVar10,lVar11);
                      if ((int)lVar30 == 0) {
                        lVar30 = 0;
                      }
                      else {
                        lVar12 = lVar1;
                        func_0x00010c11f9e0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar13 = lVar2;
                        func_0x00010c11f9e0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar30 = lVar12;
                        func_0x00010bd86de8(lVar12,lVar13);
                        if ((int)lVar30 == 0) {
                          lVar30 = 0;
                        }
                        else {
                          lVar14 = lVar1;
                          func_0x00010c06d560();
                          _objc_retainAutoreleasedReturnValue();
                          lVar15 = lVar2;
                          func_0x00010c06d560();
                          _objc_retainAutoreleasedReturnValue();
                          lVar30 = lVar14;
                          func_0x00010bd86de8(lVar14,lVar15);
                          if ((int)lVar30 == 0) {
                            lVar30 = 0;
                          }
                          else {
                            lVar16 = lVar1;
                            func_0x00010c0faf60();
                            _objc_retainAutoreleasedReturnValue();
                            lVar17 = lVar2;
                            func_0x00010c0faf60();
                            _objc_retainAutoreleasedReturnValue();
                            lVar30 = lVar16;
                            func_0x00010bd86de8(lVar16,lVar17);
                            if ((int)lVar30 == 0) {
                              lVar30 = 0;
                            }
                            else {
                              lVar18 = lVar1;
                              func_0x00010c0fb740();
                              _objc_retainAutoreleasedReturnValue();
                              lVar19 = lVar2;
                              func_0x00010c0fb740();
                              _objc_retainAutoreleasedReturnValue();
                              lVar30 = lVar18;
                              func_0x00010bd86de8(lVar18,lVar19);
                              if ((int)lVar30 == 0) {
                                lVar30 = 0;
                              }
                              else {
                                lVar20 = lVar1;
                                func_0x00010c116d40();
                                _objc_retainAutoreleasedReturnValue();
                                lVar21 = lVar2;
                                func_0x00010c116d40();
                                _objc_retainAutoreleasedReturnValue();
                                lVar30 = lVar20;
                                func_0x00010bd86de8(lVar20,lVar21);
                                if ((int)lVar30 == 0) {
                                  lVar30 = 0;
                                }
                                else {
                                  lVar22 = lVar1;
                                  func_0x00010c1022a0();
                                  _objc_retainAutoreleasedReturnValue();
                                  lVar23 = lVar2;
                                  func_0x00010c1022a0();
                                  _objc_retainAutoreleasedReturnValue();
                                  lVar30 = lVar22;
                                  FUN_108f3f870(lVar22,lVar23);
                                  if ((int)lVar30 == 0) {
                                    lVar30 = 0;
                                  }
                                  else {
                                    lVar24 = lVar1;
                                    func_0x00010beef400();
                                    _objc_retainAutoreleasedReturnValue();
                                    lVar25 = lVar2;
                                    func_0x00010beef400();
                                    _objc_retainAutoreleasedReturnValue();
                                    lVar30 = lVar24;
                                    FUN_108f3fa24(lVar24,lVar25);
                                    if ((int)lVar30 == 0) {
                                      lVar30 = 0;
                                    }
                                    else {
                                      lVar26 = lVar1;
                                      func_0x00010c117380();
                                      _objc_retainAutoreleasedReturnValue();
                                      lVar27 = lVar2;
                                      func_0x00010c117380();
                                      _objc_retainAutoreleasedReturnValue();
                                      lVar30 = lVar26;
                                      func_0x00010bd86de8(lVar26,lVar27);
                                      if ((int)lVar30 == 0) {
                                        lVar30 = 0;
                                      }
                                      else {
                                        lVar28 = lVar1;
                                        func_0x00010c06bb80();
                                        _objc_retainAutoreleasedReturnValue();
                                        lVar29 = lVar2;
                                        func_0x00010c06bb80();
                                        _objc_retainAutoreleasedReturnValue();
                                        lVar30 = lVar28;
                                        func_0x00010bd86de8(lVar28,lVar29);
                                        _objc_release(lVar29);
                                        _objc_release(lVar28);
                                      }
                                      _objc_release(lVar27);
                                      _objc_release(lVar26);
                                    }
                                    _objc_release(lVar25);
                                    _objc_release(lVar24);
                                  }
                                  _objc_release(lVar23);
                                  _objc_release(lVar22);
                                }
                                _objc_release(lVar21);
                                _objc_release(lVar20);
                              }
                              _objc_release(lVar19);
                              _objc_release(lVar18);
                            }
                            _objc_release(lVar17);
                            _objc_release(lVar16);
                          }
                          _objc_release(lVar15);
                          _objc_release(lVar14);
                        }
                        _objc_release(lVar13);
                        _objc_release(lVar12);
                      }
                      _objc_release(lVar11);
                      _objc_release(lVar10);
                    }
                    _objc_release(lVar9);
                    _objc_release(lVar6);
                  }
                  _objc_release(lVar8);
                  _objc_release(lVar7);
                  _objc_release(lStack_a0);
                  _objc_release(lStack_98);
                  _objc_release(lStack_90);
                  _objc_release(lStack_88);
                  _objc_release(lVar5);
                  _objc_release(lStack_80);
                  _objc_release(lVar4);
                  _objc_release(lVar3);
                  _objc_release(lVar2);
                  _objc_release(lVar1);
                  if ((int)lVar30 != 0) goto LAB_108f3e8d4;
                  goto LAB_108f3eb54;
                }
                lVar30 = 0;
LAB_108f3f0f0:
                _objc_release(lStack_a0);
                _objc_release(lStack_98);
                goto LAB_108f3eb14;
              }
            }
            lVar30 = 0;
          }
          else if (lStack_90 == 0) {
            lVar30 = 0;
            lStack_90 = lStack_88;
          }
          else {
            lVar30 = lStack_88;
            func_0x00010c071ae0();
            _objc_release(lStack_90);
            _objc_release(lStack_88);
            if ((int)lVar30 != 0) goto LAB_108f3eac8;
          }
LAB_108f3eb14:
          _objc_release(lStack_90);
          _objc_release(lStack_88);
        }
        else if (lVar5 == 0) {
          lVar30 = 0;
          lVar5 = lStack_80;
        }
        else {
          lVar30 = lStack_80;
          func_0x00010c071ae0();
          _objc_release(lVar5);
          _objc_release(lStack_80);
          if ((int)lVar30 != 0) goto LAB_108f3ea28;
        }
LAB_108f3eb24:
        _objc_release(lVar5);
        _objc_release(lStack_80);
      }
      else if (lVar4 == 0) {
        lVar30 = 0;
        lVar4 = lVar3;
      }
      else {
        lVar30 = lVar3;
        func_0x00010c071ae0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if ((int)lVar30 != 0) goto LAB_108f3e994;
      }
LAB_108f3eb34:
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
LAB_108f3eb44:
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
LAB_108f3eb54:
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108f3eb64:
  _objc_release(param_4);
  return lVar30;
}



/* Entry: 108f3f2e8; end: 108f3f4df;  */

undefined8 FUN_108f3f2e8(double param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == param_3) {
LAB_108f3f480:
    uVar8 = 1;
  }
  else {
    if ((param_2 == 0) != (param_3 != 0)) {
      uVar7 = param_2;
      func_0x00010bf529e0();
      uVar2 = param_3;
      func_0x00010bf529e0();
      if (uVar7 == uVar2) {
        uVar7 = param_2;
        func_0x00010bf529e0();
        if (uVar7 != 0) {
          uVar7 = 0;
          do {
            uVar2 = param_2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (uVar2 == uVar3) {
              _objc_release(uVar3);
              _objc_release(uVar2);
            }
            else {
              uVar4 = uVar2;
              func_0x00010bf33560();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              func_0x00010bf33560();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(uVar4);
              _objc_retain(uVar5);
              if (uVar4 != uVar5) {
                if (uVar5 == 0) {
                  _objc_release();
                }
                else {
                  uVar6 = uVar4;
                  func_0x00010c071ae0();
                  _objc_release(uVar5);
                  _objc_release(uVar4);
                  if ((int)uVar6 != 0) goto LAB_108f3f42c;
                }
                _objc_release(uVar5);
                _objc_release(uVar4);
                _objc_release(uVar3);
                _objc_release(uVar2);
                goto LAB_108f3f4ac;
              }
              _objc_release(uVar5);
              _objc_release(uVar4);
LAB_108f3f42c:
              func_0x00010bf9c880(uVar2);
              dVar9 = param_1;
              func_0x00010bf9c880(uVar3);
              dVar10 = dVar9;
              _objc_release(uVar5);
              _objc_release(uVar4);
              _objc_release(uVar3);
              _objc_release(uVar2);
              bVar1 = param_1 != dVar9;
              param_1 = dVar10;
              if (bVar1) goto LAB_108f3f4ac;
            }
            uVar7 = uVar7 + 1;
            uVar2 = param_2;
            func_0x00010bf529e0();
          } while (uVar7 < uVar2);
        }
        goto LAB_108f3f480;
      }
    }
LAB_108f3f4ac:
    uVar8 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 108f3f4e0; end: 108f3f58b;  */

bool FUN_108f3f4e0(double param_1,long param_2,long param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_2 != 0) && (param_3 != 0)) {
      func_0x00010bf65700(param_2);
      dVar2 = param_1;
      func_0x00010bf65700(param_3);
      if (param_1 == dVar2) {
        func_0x00010c0d0e40(param_2);
        dVar3 = dVar2;
        func_0x00010c0d0e40(param_3);
        bVar1 = dVar2 == dVar3;
      }
      else {
        bVar1 = false;
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108f3f58c; end: 108f3f86f;  */

long FUN_108f3f58c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == param_2) {
    lVar9 = 1;
    goto LAB_108f3f83c;
  }
  lVar9 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_108f3f83c;
  lVar1 = param_1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_108f3f65c:
    lVar3 = param_1;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    if (lVar3 == lVar4) {
      _objc_release(lVar4);
      _objc_release(lVar3);
LAB_108f3f6e8:
      lVar5 = param_1;
      func_0x00010c14fa80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c14fa80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar5);
      _objc_retain(lVar6);
      if (lVar5 == lVar6) {
        _objc_release(lVar6);
        _objc_release(lVar5);
LAB_108f3f774:
        lVar7 = param_1;
        func_0x00010bf14060();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_2;
        func_0x00010bf14060();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar7);
        _objc_retain(lVar8);
        if (lVar7 == lVar8) {
          lVar9 = 1;
        }
        else if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = lVar7;
          func_0x00010c071ae0(lVar7);
        }
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar8);
LAB_108f3f800:
        _objc_release(lVar7);
      }
      else {
        if (lVar6 == 0) {
          lVar9 = 0;
          lVar7 = lVar5;
          goto LAB_108f3f800;
        }
        lVar9 = lVar5;
        func_0x00010c071ae0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        if ((int)lVar9 != 0) goto LAB_108f3f774;
        lVar9 = 0;
      }
      _objc_release(lVar6);
LAB_108f3f814:
      _objc_release(lVar5);
    }
    else {
      if (lVar4 == 0) {
        lVar9 = 0;
        lVar5 = lVar3;
        goto LAB_108f3f814;
      }
      lVar9 = lVar3;
      func_0x00010c071ae0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if ((int)lVar9 != 0) goto LAB_108f3f6e8;
      lVar9 = 0;
    }
    _objc_release(lVar4);
LAB_108f3f824:
    _objc_release(lVar3);
  }
  else {
    if (lVar2 == 0) {
      lVar9 = 0;
      lVar3 = lVar1;
      goto LAB_108f3f824;
    }
    lVar9 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar9 != 0) goto LAB_108f3f65c;
    lVar9 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108f3f83c:
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar9;
}



/* Entry: 108f3f870; end: 108f3fa23;  */

long FUN_108f3f870(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == param_2) {
    lVar5 = 1;
    goto LAB_108f3f9f8;
  }
  lVar5 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_108f3f9f8;
  lVar5 = param_1;
  func_0x00010c080200();
  lVar1 = param_2;
  func_0x00010c080200();
  if ((int)lVar5 != (int)lVar1) {
    lVar5 = 0;
    goto LAB_108f3f9f8;
  }
  lVar1 = param_1;
  func_0x00010c077ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c077ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_108f3f958:
    lVar3 = param_1;
    func_0x00010c117320();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c117320();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    if (lVar3 == lVar4) {
      lVar5 = 1;
    }
    else if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar3;
      func_0x00010c071ae0(lVar3);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar4);
LAB_108f3f9e0:
    _objc_release(lVar3);
  }
  else {
    if (lVar2 == 0) {
      lVar5 = 0;
      lVar3 = lVar1;
      goto LAB_108f3f9e0;
    }
    lVar5 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) goto LAB_108f3f958;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108f3f9f8:
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 108f3fa24; end: 108f3fc57;  */

long FUN_108f3fa24(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == param_2) {
    lVar7 = 1;
    goto LAB_108f3fc28;
  }
  lVar7 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_108f3fc28;
  lVar1 = param_1;
  func_0x00010c0fa820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0fa820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_108f3faf0:
    lVar3 = param_1;
    func_0x00010c238fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c238fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    if (lVar3 == lVar4) {
      _objc_release(lVar4);
      _objc_release(lVar3);
LAB_108f3fb78:
      lVar5 = param_1;
      func_0x00010c0fa880();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c0fa880();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar5);
      _objc_retain(lVar6);
      if (lVar5 == lVar6) {
        lVar7 = 1;
      }
      else if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar5;
        func_0x00010c071ae0(lVar5);
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
LAB_108f3fc00:
      _objc_release(lVar5);
    }
    else {
      if (lVar4 == 0) {
        lVar7 = 0;
        lVar5 = lVar3;
        goto LAB_108f3fc00;
      }
      lVar7 = lVar3;
      func_0x00010c071ae0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if ((int)lVar7 != 0) goto LAB_108f3fb78;
    }
    _objc_release(lVar4);
LAB_108f3fc10:
    _objc_release(lVar3);
  }
  else {
    if (lVar2 == 0) {
      lVar7 = 0;
      lVar3 = lVar1;
      goto LAB_108f3fc10;
    }
    lVar7 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar7 != 0) goto LAB_108f3faf0;
    lVar7 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108f3fc28:
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar7;
}



/* Entry: 108f3fc58; end: 108f3fce7; -[SCCFriendmoji initWithSCSnapchattersFriendmoji:] */

undefined8
FUN_108f3fc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x00010bf9c880(param_4);
  _objc_release(param_4);
  func_0x00010bffd140(param_1,param_2,param_3,ppuVar1);
  _objc_release(ppuVar2);
  return param_2;
}



/* Entry: 108f3fce8; end: 108f3feab; -[SCCSuggestedFriend initWithSCSnapchatter:showFeedback:shouldBeBadged:] */

undefined8
FUN_108f3fce8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  func_0x00010c05a680(param_1,param_2,puVar1);
  lVar2 = param_3;
  func_0x00010c262240(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf660(param_1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c262240(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fb80(param_1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5a40(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201aa0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1b07c0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b40);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010bf4a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0df760(puVar4,param_2,lVar2 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1d00(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108f3feac; end: 108f40007; -[SCCUser initWithParticipant:] */

undefined * FUN_108f3feac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b28e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf1c0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05c100(puVar3,param_2,uVar2,uVar4,uVar5,0,0,puVar1,0,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b58);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 108f40008; end: 108f405c7; -[SCCUser initWithSCSnapchatter:bitmojiInfo:] */

undefined * FUN_108f40008(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c07a6a0();
  uVar6 = param_3;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_10901d018();
  uVar8 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x000108f47298(param_3);
  func_0x00010c0df760(puVar12,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c102000(param_3);
  func_0x00010c0df820(puVar13,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c06d560(param_3);
  func_0x00010c0df6e0(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c120(puVar1,param_2,uVar2,uVar3,uVar4,uVar5 & 0xffffffff,uVar7 & 0xffffffff,param_4
                      ,uVar8,puVar12,puVar13,puVar10);
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar6 == 0) goto LAB_108f402a0;
    uVar2 = param_3;
    func_0x00010bf4a3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db1c0(puVar1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_108f402a0:
  uVar2 = param_3;
  func_0x00010bf5b820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4320(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c06bb80(param_3);
  func_0x00010c0df6e0(puVar12,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af1c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  uVar2 = param_3;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126d5d58;
    _objc_opt_new(PTR_PTR_1126d5d58);
    uVar2 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c080200();
    func_0x00010c1b4d00(puVar12,param_2,uVar3);
    _objc_release(uVar2);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c077ac0();
    func_0x00010c0df6e0(puVar13,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2800(puVar12,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c117320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4520(puVar12,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c1de360(puVar1,param_2,puVar12);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf5b820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26e7a0();
  uVar11 = param_1;
  func_0x00010c1173a0(param_1,param_2,uVar3);
  func_0x00010c0df760(puVar13,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4540(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126dc9c8;
    _objc_opt_new(PTR_PTR_1126dc9c8);
    uVar2 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fa820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dae60(puVar13,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c238fc0();
    func_0x00010c0df6e0(puVar10,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201e40(puVar13,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fa880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dae80(puVar13,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c1620c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(param_3);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 108f405c8; end: 108f406d3; -[SCCUser initWithSCSnapchatter:] */

undefined8 FUN_108f405c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b28e0;
    _objc_opt_new(PTR_PTR_1126b28e0);
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc60(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  func_0x00010c040f60(param_1,param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108f406d4; end: 108f40783; -[SCCUser initWithSCSnapchatter:bitmojiAvatarId:bitmojiSelfieId:] */

undefined8
FUN_108f406d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b28e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c16da00();
  _objc_release(param_4);
  func_0x00010c1fbc60(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c040f60(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108f40784; end: 108f40793; -[SCCUser profileTier:] */

int FUN_108f40784(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (2 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 108f40794; end: 108f40cf3; -[SCSnapchatter initWithSCCUser:] */

long FUN_108f40794(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_90 = (undefined *)0x0;
  }
  else {
    puStack_90 = PTR_PTR_1126b14b8;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puStack_90,param_2,lVar2,lVar4,lVar6,lVar8,0,0);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_98 = (undefined *)0x0;
  }
  else {
    puStack_98 = PTR_PTR_1126bb3e0;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035b60(puStack_98,param_2,puVar9,0);
    _objc_release(puVar9);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    puStack_80 = PTR_PTR_1126db2d0;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0fa820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c238fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010beef400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0fa880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0357e0(puStack_80,param_2,lVar2,lVar4 != 0,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar9 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar9 = PTR_PTR_1126db2d8;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c117320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c080200();
    lVar5 = param_3;
    func_0x00010c1022a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c077ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f3c0();
    func_0x00010c03b280(puVar9,param_2,lVar2,lVar4,lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c07a6a0(param_3);
  lVar5 = param_3;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c06bb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar11 = 0;
  lVar10 = lVar1;
  func_0x00010c05c0e0(param_1,param_2,lVar1,lVar2,lVar3,lVar4,0,puStack_90,0,0);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar9);
  _objc_release(puStack_80);
  _objc_release(puStack_98);
  _objc_release(puStack_90);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf33560(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c880(lVar10);
  _objc_release(lVar10);
  func_0x00010bffd140(uVar11,param_3,param_2,lVar1);
  _objc_release(lVar1);
  return param_3;
}



/* Entry: 108f40cf4; end: 108f40d73; -[SCSnapchattersFriendmoji initWithSCCFriendmoji:] */

undefined8
FUN_108f40cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf33560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c880(param_4);
  _objc_release(param_4);
  func_0x00010bffd140(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 108f40d74; end: 108f40fdb; +[SCSnapchattersUpdateDataRequest initWithSCCAddFriendRequest:placement:] */

void FUN_108f40d74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong in_stack_ffffffffffffff18;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2626c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bb3f8;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c2626c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04f5a0(puVar7,param_2,0,0,lVar1,0,0,0,0);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0(puVar3,param_2,lVar1,0,&PTR____CFConstantStringClassReference_110daafd8,0,0,0,
                      0,in_stack_ffffffffffffff18 & 0xffffffffffffff00,0,0,puVar7,0,0,0,0,0);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010befb900(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar2 = param_3;
  func_0x00010bf858a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf858a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c159fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befca80(param_1,param_2,puVar3,uVar4,param_4,lVar1,0,0,0,lVar2,lVar5,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f40fdc; end: 108f413ff; +[SCSnapchattersUpdateDataRequest addSourceTypeForAddSource:] */

undefined8 FUN_108f40fdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f09f38);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6a898);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f09f58);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f09f78);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f09f98);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e546f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f09fb8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110df1138
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110df6ab8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f09fd8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f09ff8);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f0a018);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110ed8878);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f0a038);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110dcf0f8);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110f0a058
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_3;
                                  func_0x00010c0720c0(param_3,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110f0a078);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_3;
                                    func_0x00010c0720c0(param_3,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110eb9518);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110e43018);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_3;
                                        func_0x00010c0720c0(param_3,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110f0a098);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110f0a0b8);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_3;
                                            func_0x00010c0720c0(param_3,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110f0a0d8);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = param_3;
                                              func_0x00010c0720c0(param_3,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110f0a0f8);
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_3;
                                                func_0x00010c0720c0(param_3,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110dcb698);
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110dc5f98);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f0a118);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e800f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f0a138);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e607f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f0a158);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f0a178);
                                                  if ((uVar1 & 1) == 0) {
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f0a198);
                                                  uVar2 = 0;
                                                  }
                                                  else {
                                                    uVar2 = 0x6424ea8b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x54110798;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0xfffffffffb39d9f1;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5740d2fe;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x4a68a6a6;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0xffffffff8fc9b466;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0xffffffffaf01eee0;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0x2f5432a1;
                                                }
                                              }
                                              else {
                                                uVar2 = 0x2e593b1b;
                                              }
                                            }
                                            else {
                                              uVar2 = 0xffffffff98198191;
                                            }
                                          }
                                          else {
                                            uVar2 = 0xfffffffffbd02932;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x20e40509;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x10ca441e;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x78fe2cec;
                                    }
                                  }
                                  else {
                                    uVar2 = 0x1070c589;
                                  }
                                }
                                else {
                                  uVar2 = 0x9c0b737;
                                }
                              }
                              else {
                                uVar2 = 0xfffffffffb643e43;
                              }
                            }
                            else {
                              uVar2 = 0x3cf4b9ff;
                            }
                          }
                          else {
                            uVar2 = 0x2e879d01;
                          }
                        }
                        else {
                          uVar2 = 0x431dca04;
                        }
                      }
                      else {
                        uVar2 = 0xfffffffff15f6d47;
                      }
                    }
                    else {
                      uVar2 = 0x1b567ead;
                    }
                  }
                  else {
                    uVar2 = 0xffffffffeab1a352;
                  }
                }
                else {
                  uVar2 = 0xffffffff92f34e84;
                }
              }
              else {
                uVar2 = 0xffffffffa8b9a5bd;
              }
            }
            else {
              uVar2 = 0x1a0e6a1a;
            }
          }
          else {
            uVar2 = 0xfffffffff2b19ec8;
          }
        }
        else {
          uVar2 = 0x248de666;
        }
      }
      else {
        uVar2 = 0x1a040a22;
      }
    }
    else {
      uVar2 = 0xffffffffcf5d0adf;
    }
  }
  else {
    uVar2 = 0xffffffff9c9717e5;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108f41400; end: 108f415c7; -[SCComposerPeopleSnapchattersDataRequestCallbackListener initWithStartFetchCallback:endFetchCallback:startUpdateCallback:endUpdateCallback:startSuggestCallback:endSuggestCallback:startContactCallback:endContactCallback:] */

undefined1 *
FUN_108f41400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff4a0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f415c8; end: 108f415df; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didStartSnapchattersFetchDataRequest:] */

void FUN_108f415c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f415d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 108f415e0; end: 108f415fb; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_108f415e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f415f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 108f415fc; end: 108f41613; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didStartSnapchattersUpdateDataRequest:] */

void FUN_108f415fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f4160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 108f41614; end: 108f4162f; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108f41614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f41628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 108f41630; end: 108f41647; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didStartSnapchattersSuggestDataRequest:] */

void FUN_108f41630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f41640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 108f41648; end: 108f41663; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_108f41648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f4165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 108f41664; end: 108f4167b; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didStartSnapchattersContactDataRequest:] */

void FUN_108f41664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f41674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 108f4167c; end: 108f41697; -[SCComposerPeopleSnapchattersDataRequestCallbackListener didEndSnapchattersContactDataRequest:withSuccess:] */

void FUN_108f4167c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 108f41698; end: 108f4170f; -[SCComposerPeopleSnapchattersDataRequestCallbackListener .cxx_destruct] */

void FUN_108f41698(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f41710; end: 108f41863;  */

void FUN_108f41710(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
  if (uVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      uVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(ulong *)(lStack_128 + uVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_108f41814;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
      uVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  uVar4 = 0;
LAB_108f41814:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f41864; end: 108f418c7;  */

void FUN_108f41864(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0a8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f418c8; end: 108f41ba7;  */

void FUN_108f418c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar12 = *(long *)(lVar13 * 8);
      lVar5 = lVar12;
      func_0x00010c25b720();
      if (lVar5 == 3) {
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar12;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar12);
            }
            lVar6 = *(long *)(lVar14 * 8);
            func_0x00010bf0e700();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf0a8c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            lVar6 = lVar7;
            func_0x00010bf9e140();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c0ed940();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar6;
            func_0x00010c08fa60();
            if ((lVar9 != 0) && (lVar9 = lVar8, func_0x00010c08fa60(), lVar9 != 0)) {
              puVar10 = puVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar10 == (undefined *)0x0) {
                puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar10);
              }
              puVar10 = puVar3;
              func_0x00010c0e00e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar10);
            }
            _objc_release(lVar8);
            _objc_release(lVar6);
            _objc_release(lVar7);
            lVar14 = lVar14 + 1;
          } while (lVar5 != lVar14);
          lVar5 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar4);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar10 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108f41ba8; end: 108f41bbf;  */

void FUN_108f41ba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b70);
  return;
}



/* Entry: 108f41bc0; end: 108f41ca7;  */

bool FUN_108f41bc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar5 = false;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0d2260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c158380();
    bVar5 = lVar3 < lVar4;
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar5;
}



/* Entry: 108f41ca8; end: 108f41eb7;  */

void FUN_108f41ca8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar4 = lVar9;
      func_0x00010c0d2260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf24a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        puVar6 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        if (puVar6 == (undefined *)0x0) {
          func_0x00010c0d2260(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1581e0();
          func_0x00010bf0a0e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar7);
          _objc_release(lVar9);
        }
        puVar7 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar7);
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108f41eb8; end: 108f41ecf;  */

void FUN_108f41eb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110f0a1b8,
             &PTR____CFConstantStringClassReference_110eb3bb8,0);
  return;
}



/* Entry: 108f41ed0; end: 108f420bf;  */

void FUN_108f41ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1308;
  _objc_retain();
  func_0x00010bf69480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a1d8,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f420c0; end: 108f42137;  */

void FUN_108f420c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a258,0,0);
  return;
}



/* Entry: 108f42138; end: 108f421af;  */

long FUN_108f42138(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a2d8,0xffffffff,0)
  ;
  return (long)(int)param_1;
}


