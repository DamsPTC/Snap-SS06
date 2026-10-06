/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d2918c; end: 107d292bb;  */

void FUN_107d2918c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d02e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
  if (((uVar4 & 1) == 0) &&
     (uVar4 = uVar2, func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30)),
     (uVar4 & 1) == 0)) {
    uVar6 = uVar5;
    func_0x00010bf4b900(uVar5,param_2,*(undefined8 *)(param_1 + 0x30));
    uVar1 = (undefined1)uVar6;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107d292bc; end: 107d2941f;  */

void FUN_107d292bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000108f4858c();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if (iVar1 == 0) {
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar4;
  }
  else {
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c25a280();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c070680();
        *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar4;
        _objc_release(uVar6);
      }
      _objc_release(lVar5);
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d29420; end: 107d2945f;  */

void FUN_107d29420(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d29460; end: 107d294eb;  */

void FUN_107d29460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d294ec; end: 107d295b7;  */

undefined * FUN_107d294ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b2378;
    func_0x00010c0f40e0(PTR_PTR_1126b2378,param_2,param_1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar4;
  func_0x00010c27f9c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdb240();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 107d295b8; end: 107d298db;  */

byte FUN_107d295b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3320;
  func_0x00010c0729e0();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    _objc_retain(param_1);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(param_4);
    _objc_retain(param_1);
    func_0x00010c0bdf40(param_2);
    bVar2 = *(byte *)(puStack_78 + 3);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_80,8);
  }
  else {
    bVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar2 & 1;
}



/* Entry: 107d298dc; end: 107d2999b;  */

void FUN_107d298dc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010853a834();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  uVar1 = (undefined1)uVar5;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d2999c; end: 107d29b07;  */

void FUN_107d2999c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = *(ulong *)(param_1 + 0x28);
  func_0x00010c1057e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf4b900();
  _objc_release(uVar6);
  lVar7 = *(long *)(param_1 + 0x28);
  func_0x00010c27dd80();
  if (lVar7 == 6) {
LAB_107d29a54:
    if ((uVar2 & 1) == 0) {
LAB_107d29a6c:
      uVar2 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,*(undefined8 *)(param_1 + 0x30));
        uVar1 = (undefined1)uVar4;
        goto LAB_107d29a90;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c27dd80();
    if (lVar7 == 10) goto LAB_107d29a54;
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c27dd80();
    if (lVar7 != 7) goto LAB_107d29a6c;
  }
  uVar1 = 1;
LAB_107d29a90:
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107d29b08; end: 107d29bc3;  */

void FUN_107d29b08(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000108539d58();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar4 ^ 1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d29bc4; end: 107d29beb;  */

void FUN_107d29bc4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107d29bec; end: 107d29c1f;  */

void FUN_107d29bec(long param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined8 *)(param_1 + 0x20);
  FUN_107d28b9c();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1 ^ 1;
  return;
}



/* Entry: 107d29c20; end: 107d29c47;  */

void FUN_107d29c20(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107d29c48; end: 107d29dcf;  */

undefined1 FUN_107d29c48(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_160 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d29dd0;
  puStack_50 = &UNK_110a09528;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x107d29de0;
  puStack_78 = &UNK_110a09558;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x107d29df0;
  puStack_a0 = &UNK_110a092b8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x107d29e00;
  puStack_c8 = &UNK_110a092e8;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107d29e10;
  puStack_f0 = &UNK_110a09438;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107d29e94;
  puStack_118 = &UNK_110a09468;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x107d29ea4;
  puStack_140 = &UNK_110a09498;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x107d29eb4;
  puStack_168 = &UNK_110a094f8;
  puStack_138 = puStack_160;
  puStack_110 = puStack_160;
  puStack_e8 = puStack_160;
  puStack_c0 = puStack_160;
  puStack_98 = puStack_160;
  puStack_70 = puStack_160;
  puStack_48 = puStack_160;
  puStack_38 = puStack_160;
  func_0x00010c0bdf40(param_1,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130,&puStack_158,&puStack_180);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d29dd0; end: 107d29e0f;  */

void FUN_107d29dd0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d29e10; end: 107d29e93;  */

void FUN_107d29e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe28e0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d29e94; end: 107d29ec3;  */

void FUN_107d29e94(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d29ec4; end: 107d2a057;  */

void FUN_107d29ec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107d2a058;
  uStack_40 = 0x107d2a068;
  uStack_38 = 0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d2a058; end: 107d2a06f;  */

void FUN_107d2a058(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d2a070; end: 107d2a0a7;  */

void FUN_107d2a070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d2a0a8; end: 107d2a0af;  */

void FUN_107d2a0a8(void)

{
  return;
}



/* Entry: 107d2a0b0; end: 107d2a18f;  */

void FUN_107d2a0b0(long param_1)

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



/* Entry: 107d2a190; end: 107d2a323;  */

void FUN_107d2a190(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107d2a058;
  uStack_40 = 0x107d2a068;
  uStack_38 = 0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d2a324; end: 107d2a35b;  */

void FUN_107d2a324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 107d2a35c; end: 107d2a35f;  */

void FUN_107d2a35c(void)

{
  return;
}



/* Entry: 107d2a360; end: 107d2a43f;  */

void FUN_107d2a360(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d2a440; end: 107d2a443;  */

void FUN_107d2a440(void)

{
  return;
}



/* Entry: 107d2a444; end: 107d2a537;  */

undefined1 FUN_107d2a444(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d2a538;
  puStack_50 = &UNK_110a09528;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d2a5c8;
  puStack_78 = &UNK_110a09438;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0bdf40(param_1,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_110a09758,
                      &PTR___NSConcreteGlobalBlock_110a09778,&PTR___NSConcreteGlobalBlock_110a09798,
                      &puStack_90,&PTR___NSConcreteGlobalBlock_110a097b8,
                      &PTR___NSConcreteGlobalBlock_110a097d8,&PTR___NSConcreteGlobalBlock_110a097f8)
  ;
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d2a538; end: 107d2a5bb;  */

void FUN_107d2a538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07c940();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2a5bc; end: 107d2a5c7;  */

void FUN_107d2a5bc(void)

{
  return;
}



/* Entry: 107d2a5c8; end: 107d2a64b;  */

void FUN_107d2a5c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07c940();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2a64c; end: 107d2a657;  */

void FUN_107d2a64c(void)

{
  return;
}



/* Entry: 107d2a658; end: 107d2a74b;  */

undefined1 FUN_107d2a658(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d2a74c;
  puStack_50 = &UNK_110a09528;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d2a7dc;
  puStack_78 = &UNK_110a09438;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0bdf40(param_1,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_110a09818,
                      &PTR___NSConcreteGlobalBlock_110a09838,&PTR___NSConcreteGlobalBlock_110a09858,
                      &puStack_90,&PTR___NSConcreteGlobalBlock_110a09878,
                      &PTR___NSConcreteGlobalBlock_110a09898,&PTR___NSConcreteGlobalBlock_110a098b8)
  ;
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d2a74c; end: 107d2a7cf;  */

void FUN_107d2a74c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0822a0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2a7d0; end: 107d2a7db;  */

void FUN_107d2a7d0(void)

{
  return;
}



/* Entry: 107d2a7dc; end: 107d2a85f;  */

void FUN_107d2a7dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0822a0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2a860; end: 107d2a86b;  */

void FUN_107d2a860(void)

{
  return;
}



/* Entry: 107d2a86c; end: 107d2a98f;  */

undefined * FUN_107d2a86c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b2378;
    func_0x00010c0f40e0(PTR_PTR_1126b2378,param_2,param_1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar5;
  func_0x00010c27f9c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1297a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c24c3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bfde100(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 107d2a990; end: 107d2aafb;  */

byte FUN_107d2a990(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  puVar6 = auStack_d8;
  uVar1 = param_1;
  func_0x00010bf52a60();
  bVar7 = 0;
  if (uVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      uVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_118 + uVar9 * 8);
        func_0x00010bf4e860();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_107d2a86c();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          bVar7 = 1;
          goto LAB_107d2aa74;
        }
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
      puVar6 = auStack_d8;
      uVar1 = param_1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
    bVar7 = 0;
  }
LAB_107d2aa74:
  _objc_release(param_1);
  uVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  uVar9 = uVar1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  FUN_107d294ec();
  _objc_release(uVar9);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126c3320;
    func_0x00010c0729e0();
    if (((ulong)puVar4 & 1) == 0) {
      puStack_198 = &uStack_1a0;
      uStack_1a0 = 0;
      uStack_190 = 0x2020000000;
      uStack_188 = 0;
      _objc_retain(uVar1);
      _objc_retain(puVar6);
      _objc_retain(uVar1);
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      _objc_retain(uVar1);
      _objc_retain(puVar6);
      _objc_retain(uVar1);
      _objc_retain(puVar6);
      func_0x00010c0bdf40(param_2);
      bVar7 = *(byte *)(puStack_198 + 3);
      _objc_release(puVar6);
      _objc_release(uVar1);
      _objc_release(puVar6);
      _objc_release(uVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar1);
      _objc_release(puVar6);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_1a0,8);
      goto LAB_107d2ad9c;
    }
  }
  bVar7 = 0;
LAB_107d2ad9c:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(uVar1);
  return bVar7 & 1;
}



/* Entry: 107d2aafc; end: 107d2ae7b;  */

byte FUN_107d2aafc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d294ec();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126c3320;
    func_0x00010c0729e0();
    if (((ulong)puVar3 & 1) == 0) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      _objc_retain(param_1);
      _objc_retain(param_4);
      _objc_retain(param_1);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_1);
      _objc_retain(param_4);
      _objc_retain(param_1);
      _objc_retain(param_4);
      func_0x00010c0bdf40(param_2);
      bVar4 = *(byte *)(puStack_78 + 3);
      _objc_release(param_4);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_release(param_1);
      __Block_object_dispose(&uStack_80,8);
      goto LAB_107d2ad9c;
    }
  }
  bVar4 = 0;
LAB_107d2ad9c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 107d2ae7c; end: 107d2b00f;  */

void FUN_107d2ae7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  ulong unaff_x24;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    unaff_x22 = *(long *)(param_1 + 0x20);
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      goto LAB_107d2af70;
    }
    unaff_x24 = *(ulong *)(param_1 + 0x20);
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x24;
    func_0x00010c07d060();
    if ((uVar4 & 1) != 0) goto LAB_107d2af0c;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
  else {
LAB_107d2af0c:
    uVar5 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_107d2a990();
    *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar6 ^ 1;
    _objc_release(uVar5);
    if ((uVar3 & 1) != 0) goto LAB_107d2af70;
  }
  _objc_release(unaff_x24);
  _objc_release(unaff_x22);
LAB_107d2af70:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2b010; end: 107d2b16f;  */

void FUN_107d2b010(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar1 = uVar2;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar3 = uVar4, func_0x00010c0720c0(), (int)uVar3 == 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_107d2a990();
    *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (byte)uVar5 ^ 1;
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2b170; end: 107d2b1fb;  */

void FUN_107d2b170(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d2b1fc; end: 107d2b22b;  */

void FUN_107d2b1fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d2b22c; end: 107d2b2fb;  */

void FUN_107d2b22c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c07d060();
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d2b2fc; end: 107d2b30b;  */

void FUN_107d2b2fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d2b30c; end: 107d2b90b;  */

byte FUN_107d2b30c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar1 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      bVar7 = 0;
      goto LAB_107d2b778;
    }
    uVar4 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107d2b90c;
  puStack_c0 = &UNK_110a09908;
  _objc_retain(uVar6);
  uStack_b8 = uVar6;
  _objc_retain(param_1);
  uStack_b0 = param_1;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  ppuVar5 = &puStack_d8;
  uStack_a0 = param_5;
  _objc_retainBlock();
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(param_1);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(ppuVar5);
  func_0x00010c0bdf40(param_2);
  bVar7 = *(byte *)(puStack_90 + 3);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar6);
LAB_107d2b778:
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar7 & 1;
}



/* Entry: 107d2b90c; end: 107d2bbf7;  */

ulong FUN_107d2b90c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
    func_0x000108f54a00();
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    uVar12 = *(ulong *)(param_1 + 0x20);
    _objc_retain();
    uVar4 = uVar12;
    func_0x000100bf119c();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar12;
      func_0x00010901c5ac(uVar12);
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar12);
    return uVar4;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar10 = PTR_PTR_1126b2378;
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4e860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar10,param_2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(puVar10);
  _objc_retain(lVar2);
  _objc_retain(uVar4);
  lVar11 = lVar1;
  func_0x00010c08fa60();
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar11 != 0) {
      puVar7 = puVar10;
      func_0x00010bf43560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2429a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c25ad40();
      _objc_release(puVar8);
      _objc_release(puVar7);
      if ((((ulong)puVar9 & 1) == 0) && (uVar12 = uVar4, func_0x000108f54a00(), (uVar12 & 1) == 0))
      {
        lVar6 = lVar11;
        func_0x00010901c618(lVar11);
        uVar12 = (ulong)((uint)lVar6 ^ 1);
      }
      else {
        uVar12 = 1;
      }
      goto LAB_107d2bab4;
    }
  }
  uVar12 = 0;
LAB_107d2bab4:
  _objc_release(lVar11);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar10);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(puVar10);
  return uVar12;
}



/* Entry: 107d2bbf8; end: 107d2bc57;  */

ulong FUN_107d2bbf8(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100bf119c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901c5ac(param_1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d2bc58; end: 107d2bd73;  */

void FUN_107d2bc58(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078f60();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  lVar5 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar5 + 0x10))();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2bd74; end: 107d2be13;  */

void FUN_107d2bd74(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
    FUN_107d2bbf8();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d2be14; end: 107d2beb3;  */

void FUN_107d2be14(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
    FUN_107d2bbf8();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d2beb4; end: 107d2bec3;  */

void FUN_107d2beb4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d2bec4; end: 107d2bff7;  */

void FUN_107d2bec4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010853c32c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c131c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (*(long *)(param_1 + 0x38) == 0x1e) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x000108f4b700(uVar6,0);
    uVar1 = (uint)uVar6;
    if (lVar5 != 0) goto LAB_107d2bf80;
LAB_107d2bf3c:
    lVar4 = lVar3;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      _objc_release(lVar4);
      goto LAB_107d2bf80;
    }
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
    FUN_107d2bff8();
    _objc_release(lVar4);
    if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) goto LAB_107d2bf80;
  }
  else {
    uVar1 = 0;
    if (lVar5 == 0) goto LAB_107d2bf3c;
LAB_107d2bf80:
    uVar7 = *(ulong *)(param_1 + 0x28);
    func_0x000108f4b700(uVar7,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = 1;
      goto LAB_107d2bf9c;
    }
  }
  uVar8 = 0;
LAB_107d2bf9c:
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107d2bff8; end: 107d2c0ef;  */

undefined1 FUN_107d2bff8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d2c0f0; end: 107d2c18f;  */

void FUN_107d2c0f0(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
    FUN_107d2bbf8();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d2c190; end: 107d2c19f;  */

void FUN_107d2c190(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d2c1a0; end: 107d2c23f;  */

void FUN_107d2c1a0(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
    FUN_107d2bbf8();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d2c240; end: 107d2c38b;  */

undefined1 FUN_107d2c240(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  _objc_retain(param_1);
  func_0x00010c0bdf40(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d2c38c; end: 107d2c3bf;  */

void FUN_107d2c38c(void)

{
  return;
}



/* Entry: 107d2c3c0; end: 107d2c3f3;  */

void FUN_107d2c3c0(long param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined8 *)(param_1 + 0x20);
  FUN_107d28b9c();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1 ^ 1;
  return;
}



/* Entry: 107d2c3f4; end: 107d2c3fb;  */

void FUN_107d2c3f4(void)

{
  return;
}



/* Entry: 107d2c3fc; end: 107d2c757;  */

long FUN_107d2c3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0bdf40(param_1);
  lVar1 = puStack_78[3];
  lVar2 = puStack_98[3];
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  return lVar2 + lVar1;
}



/* Entry: 107d2c758; end: 107d2c81f;  */

void FUN_107d2c758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d2ca34();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2c820; end: 107d2ca33;  */

ulong FUN_107d2c820(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  dVar15 = 0.0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  uVar10 = 0;
  do {
    if (uVar1 == 0) {
      _objc_release(param_2);
      _objc_release(param_4);
      _objc_release(param_2);
      lVar3 = param_1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return uVar10;
      }
      ___stack_chk_fail();
      _objc_release(param_2);
      _objc_release(param_4);
      _objc_release(param_2);
      _objc_release(param_1);
      __Unwind_Resume();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(lVar3);
      lVar6 = lVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      uVar10 = 0;
      while (lVar6 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          lVar8 = *(long *)(lVar11 * 8);
          lVar4 = lVar8;
          func_0x00010bfa0a00();
          if (0 < lVar4) {
            func_0x00010bfa0a00(lVar8);
            uVar10 = (uVar10 + lVar8) - 1;
          }
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      lVar6 = lVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return uVar10;
      }
      ___stack_chk_fail();
      _objc_release(lVar3);
      _objc_release(lVar3);
      __Unwind_Resume();
      _objc_retain(uVar5);
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      uVar10 = uVar5;
      func_0x00010c25b340(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_107d2c820(uVar9,uVar10,*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x28));
      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x30) + 8) + 0x18) = uVar9;
      _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return uVar5;
    }
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      uVar12 = *(ulong *)(uVar13 * 8);
      uVar9 = param_4;
      func_0x00010c0dba40();
      if ((int)uVar9 == 0) {
LAB_107d2c954:
        uVar10 = uVar10 + 1;
      }
      else {
        func_0x00010bf8b460(param_4);
        lVar2 = param_1;
        uVar5 = uVar12;
        FUN_107d2e490(param_1,uVar12,param_3);
        if ((int)lVar2 == 0) goto LAB_107d2c954;
        func_0x00010c26f2a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        dVar14 = dVar15;
        func_0x00010c2696a0(param_4);
        _objc_release(uVar12);
        dVar15 = (double)(long)((dVar15 + -2.5) / dVar14) + (double)uVar10;
        uVar10 = (ulong)dVar15;
      }
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar13);
    uVar1 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d2ca34; end: 107d2cb87;  */

long FUN_107d2ca34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar6 = *(long *)(lVar8 * 8);
      lVar3 = lVar6;
      func_0x00010bfa0a00();
      if (0 < lVar3) {
        func_0x00010bfa0a00(lVar6);
        lVar5 = lVar5 + lVar6 + -1;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  lVar5 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar7,lVar5,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 8) + 0x18) = uVar7;
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 107d2cb88; end: 107d2cc1f;  */

void FUN_107d2cb88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2cc20; end: 107d2cc27;  */

void FUN_107d2cc20(void)

{
  return;
}



/* Entry: 107d2cc28; end: 107d2ccef;  */

void FUN_107d2cc28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d2ca34();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2ccf0; end: 107d2cd87;  */

void FUN_107d2ccf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2cd88; end: 107d2ce1f;  */

void FUN_107d2cd88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2ce20; end: 107d2ceb7;  */

void FUN_107d2ce20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2c820(uVar2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2ceb8; end: 107d2d00f;  */

undefined8 FUN_107d2ceb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_110 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d2d010;
  puStack_50 = &UNK_110a09528;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d2d094;
  puStack_78 = &UNK_110a09558;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107d2d120;
  puStack_a0 = &UNK_110a09438;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107d2d1a4;
  puStack_c8 = &UNK_110a09468;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107d2d228;
  puStack_f0 = &UNK_110a09498;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107d2d2ac;
  puStack_118 = &UNK_110a094f8;
  puStack_e8 = puStack_110;
  puStack_c0 = puStack_110;
  puStack_98 = puStack_110;
  puStack_70 = puStack_110;
  puStack_48 = puStack_110;
  puStack_38 = puStack_110;
  func_0x00010c0bdf40(param_1,param_2,&puStack_68,&puStack_90,&PTR___NSConcreteGlobalBlock_110a09bf8
                      ,&PTR___NSConcreteGlobalBlock_110a09c18,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d2d010; end: 107d2d093;  */

void FUN_107d2d010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d094; end: 107d2d117;  */

void FUN_107d2d094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d118; end: 107d2d11f;  */

void FUN_107d2d118(void)

{
  return;
}



/* Entry: 107d2d120; end: 107d2d1a3;  */

void FUN_107d2d120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d1a4; end: 107d2d227;  */

void FUN_107d2d1a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d228; end: 107d2d2ab;  */

void FUN_107d2d228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d2ac; end: 107d2d32f;  */

void FUN_107d2d2ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d330; end: 107d2d577;  */

undefined8 FUN_107d2d330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_68[3];
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  return uVar1;
}



/* Entry: 107d2d578; end: 107d2d5ff;  */

void FUN_107d2d578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d600; end: 107d2d687;  */

void FUN_107d2d600(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d688; end: 107d2d68f;  */

void FUN_107d2d688(void)

{
  return;
}



/* Entry: 107d2d690; end: 107d2d717;  */

void FUN_107d2d690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d718; end: 107d2d79f;  */

void FUN_107d2d718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d7a0; end: 107d2d827;  */

void FUN_107d2d7a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d828; end: 107d2d8af;  */

void FUN_107d2d828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2d8b0; end: 107d2dccf;  */

long FUN_107d2d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0bdf40(param_1);
  lVar1 = puStack_78[3];
  lVar2 = puStack_98[3];
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  return lVar2 + lVar1;
}



/* Entry: 107d2dcd0; end: 107d2dd9b;  */

void FUN_107d2dcd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d2dfdc();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2dd9c; end: 107d2dfdb;  */

ulong FUN_107d2dd9c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  dVar14 = 0.0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  uVar8 = 0;
  while (uVar1 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      uVar11 = *(ulong *)(uVar12 * 8);
      uVar9 = uVar11;
      func_0x00010c071ae0();
      if ((uVar9 & 1) != 0) goto LAB_107d2df18;
      uVar7 = param_5;
      func_0x00010c0dba40();
      if ((int)uVar7 == 0) {
LAB_107d2deec:
        uVar8 = uVar8 + 1;
      }
      else {
        func_0x00010bf8b460(param_5);
        lVar2 = param_1;
        uVar4 = uVar11;
        FUN_107d2e490(param_1,uVar11,param_4);
        if ((int)lVar2 == 0) goto LAB_107d2deec;
        func_0x00010c26f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        dVar13 = dVar14;
        func_0x00010c2696a0(param_5);
        _objc_release(uVar11);
        dVar14 = (double)(long)((dVar14 + -2.5) / dVar13) + (double)uVar8;
        uVar8 = (ulong)dVar14;
      }
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar12);
    uVar1 = param_2;
    func_0x00010bf52a60();
  }
LAB_107d2df18:
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = uVar4;
  _objc_retain();
  _objc_retain(uVar4);
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  uVar8 = 0;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar12 = uVar9;
      func_0x00010c071ae0();
      if ((uVar12 & 1) != 0) goto LAB_107d2e0d4;
      uVar12 = uVar9;
      func_0x00010bfa0a00();
      if (0 < (long)uVar12) {
        func_0x00010bfa0a00(uVar9);
        uVar8 = (uVar8 + uVar9) - 1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar3;
    func_0x00010bf52a60();
  }
LAB_107d2e0d4:
  _objc_release(lVar3);
  _objc_release(uVar4);
  lVar5 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  __Unwind_Resume();
  _objc_retain(uVar1);
  uVar7 = *(undefined8 *)(lVar5 + 0x20);
  uVar8 = uVar1;
  func_0x00010c25b340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar7,uVar8,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x40),
                *(undefined8 *)(lVar5 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x38) + 8) + 0x18) = uVar7;
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return uVar1;
}



/* Entry: 107d2dfdc; end: 107d2e15b;  */

long FUN_107d2dfdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar3 = uVar8;
      func_0x00010c071ae0();
      if ((uVar3 & 1) != 0) goto LAB_107d2e0d4;
      uVar3 = uVar8;
      func_0x00010bfa0a00();
      if (0 < (long)uVar3) {
        func_0x00010bfa0a00(uVar8);
        lVar6 = lVar6 + uVar8 + -1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
LAB_107d2e0d4:
  _objc_release(param_1);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(lVar4);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  lVar6 = lVar4;
  func_0x00010c25b340(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar7,lVar6,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x40),
                *(undefined8 *)(lVar2 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x38) + 8) + 0x18) = uVar7;
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return lVar4;
}



/* Entry: 107d2e15c; end: 107d2e1f3;  */

void FUN_107d2e15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2e1f4; end: 107d2e1fb;  */

void FUN_107d2e1f4(void)

{
  return;
}



/* Entry: 107d2e1fc; end: 107d2e2c7;  */

void FUN_107d2e1fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d2dfdc();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2e2c8; end: 107d2e35f;  */

void FUN_107d2e2c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2e360; end: 107d2e3f7;  */

void FUN_107d2e360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2e3f8; end: 107d2e48f;  */

void FUN_107d2e3f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d2dd9c(uVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d2e490; end: 107d2e693;  */

bool FUN_107d2e490(double param_1,ulong param_2,long param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x000108539290();
  if ((uVar1 & 1) != 0) {
    bVar5 = false;
    goto LAB_107d2e5fc;
  }
  lVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  uVar1 = lVar3 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0x484a040U) == 0) goto LAB_107d2e538;
    }
    else if ((((lVar3 + 1U < 0x1b) && ((1L << (lVar3 + 1U & 0x3f) & 0x6c6bd77U) != 0)) ||
             (0x15 < lVar3 - 5U)) || ((0x3f3fe3U >> (ulong)((uint)(lVar3 - 5U) & 0x1f) & 1) == 0))
    goto LAB_107d2e538;
LAB_107d2e5bc:
    bVar5 = false;
  }
  else {
LAB_107d2e538:
    func_0x000108534b70();
    if (param_4 == 0) goto LAB_107d2e5bc;
    lVar3 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27dd80();
    if (((lVar4 + 1U < 0x1c) && ((1L << (lVar4 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) &&
       ((lVar4 + 1U < 0x1b && ((0x6c6bd77U >> (ulong)((uint)(lVar4 + 1U) & 0x1f) & 1) != 0)))) {
      bVar5 = false;
    }
    else {
      lVar4 = param_3;
      func_0x00010c26f2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      bVar5 = param_1 < dVar6;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_107d2e5fc:
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar5;
}



/* Entry: 107d2e694; end: 107d2e757;  */

bool FUN_107d2e694(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain();
  if (param_1 <= 0.0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c26f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    bVar1 = (double)(long)((dVar3 + -2.5) / param_1) == (double)(long)((param_2 / 1000.0) / param_1)
    ;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d2e758; end: 107d2e91f;  */

uint FUN_107d2e758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar1);
  if (*(char *)(puStack_58 + 3) == '\x01') {
    uVar1 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}


