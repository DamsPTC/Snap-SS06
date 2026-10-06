/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cfbfcc; end: 107cfc087;  */

undefined8 FUN_107cfbfcc(undefined8 param_1)

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
  func_0x00010c0c0560(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfc088; end: 107cfc0b7;  */

void FUN_107cfc088(long param_1,undefined8 param_2)

{
  func_0x00010c259580();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfc0b8; end: 107cfc1c7;  */

void FUN_107cfc0b8(undefined8 param_1)

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
  pcStack_38 = FUN_107cfbec4;
  uStack_30 = 0x107cfbed4;
  uStack_28 = 0;
  func_0x00010c0c0560(param_1);
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



/* Entry: 107cfc1c8; end: 107cfc207;  */

void FUN_107cfc1c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfc208; end: 107cfc29f;  */

void FUN_107cfc208(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c26e100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_107cfc2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cfc2a0; end: 107cfc4ef;  */

void FUN_107cfc2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26d980();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      uStack_68 = 0;
    }
    else {
      uStack_68 = param_1;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26d940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26d920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_1;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = param_1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126cb008;
    _objc_alloc(PTR_PTR_1126cb008);
    lVar1 = param_1;
    func_0x00010c0c54a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c26df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c26e3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c26e3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020be0(puVar8,param_2,lVar1,lVar2,lVar3,lVar4,lVar5,uStack_70,uStack_68,lVar6,lVar7
                       );
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uStack_70);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uStack_68);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107cfc4f0; end: 107cfc587;  */

void FUN_107cfc4f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c26e100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_107cfc2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cfc588; end: 107cfc6e3;  */

undefined1 FUN_107cfc588(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0560(param_1);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfc6e4; end: 107cfc767;  */

void FUN_107cfc6e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  
  _objc_retain(param_2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar4 == 0) {
    bVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bfddf20();
    bVar3 = (byte)uVar2 ^ 1;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfc768; end: 107cfc8d3;  */

void FUN_107cfc768(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0741a0();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  else {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfc8d4; end: 107cfc9b7;  */

ulong FUN_107cfc8d4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000107d02054();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (uVar4 = param_2, func_0x00010bf4b900(), (uVar4 & 1) == 0)) {
    lVar3 = lVar1;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2;
      func_0x00010bf4b900(param_2);
    }
  }
  else {
    uVar4 = 1;
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 107cfc9b8; end: 107cfca73;  */

undefined1 FUN_107cfc9b8(undefined8 param_1)

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
  func_0x00010c0c0560(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfca74; end: 107cfcacb;  */

void FUN_107cfca74(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfcacc; end: 107cfcb63;  */

void FUN_107cfcacc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfddf20();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar4 == 0) {
    bVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bfddf20();
    bVar3 = (byte)uVar2 ^ 1;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = bVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfcb64; end: 107cfcd03;  */

void FUN_107cfcb64(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0741a0();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (byte)uVar1 ^ 1;
  uVar1 = param_2;
  func_0x00010c0741a0();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
  else {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfcd04; end: 107cfcdf3;  */

undefined1 FUN_107cfcd04(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfcdf4; end: 107cfce23;  */

void FUN_107cfcdf4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cfce24; end: 107cfceef;  */

undefined1 FUN_107cfce24(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfcef0; end: 107cfcf33;  */

void FUN_107cfcef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2420e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfdc680();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfcf34; end: 107cfcfff;  */

undefined1 FUN_107cfcf34(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfd000; end: 107cfd047;  */

void FUN_107cfd000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2420e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfdc680();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (byte)uVar1 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfd048; end: 107cfd113;  */

undefined1 FUN_107cfd048(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfd114; end: 107cfd127;  */

void FUN_107cfd114(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cfd128; end: 107cfd1f3;  */

undefined1 FUN_107cfd128(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfd1f4; end: 107cfd23f;  */

void FUN_107cfd1f4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf419a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c281e40();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0 < lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfd240; end: 107cfd30f;  */

undefined1 FUN_107cfd240(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfd310; end: 107cfd323;  */

void FUN_107cfd310(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cfd324; end: 107cfd3ef;  */

undefined1 FUN_107cfd324(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfd3f0; end: 107cfd427;  */

void FUN_107cfd3f0(long param_1,long param_2)

{
  func_0x00010bf283e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 2;
  return;
}



/* Entry: 107cfd428; end: 107cfd523;  */

void FUN_107cfd428(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x107cfd4ac;
  puStack_20 = &UNK_1108d7530;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc660(param_2,param_2,0,0,0,0,0,0,0,0,0,0,0,0,&puStack_38,0,0);
  return;
}



/* Entry: 107cfd524; end: 107cfd54b;  */

void FUN_107cfd524(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cfd54c; end: 107cfd65f;  */

void FUN_107cfd54c(undefined8 param_1)

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
  pcStack_38 = FUN_107cfd660;
  uStack_30 = 0x107cfd670;
  uStack_28 = 0;
  func_0x00010c0bfe20(param_1);
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



/* Entry: 107cfd660; end: 107cfd677;  */

void FUN_107cfd660(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cfd678; end: 107cfd6af;  */

void FUN_107cfd678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfd6b0; end: 107cfd6cb;  */

void FUN_107cfd6b0(void)

{
  return;
}



/* Entry: 107cfd6cc; end: 107cfd7df;  */

void FUN_107cfd6cc(undefined8 param_1)

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
  pcStack_38 = FUN_107cfd660;
  uStack_30 = 0x107cfd670;
  uStack_28 = 0;
  func_0x00010c0bfe20(param_1);
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



/* Entry: 107cfd7e0; end: 107cfd7e3;  */

void FUN_107cfd7e0(void)

{
  return;
}



/* Entry: 107cfd7e4; end: 107cfd81b;  */

void FUN_107cfd7e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfd81c; end: 107cfd833;  */

void FUN_107cfd81c(void)

{
  return;
}



/* Entry: 107cfd834; end: 107cfd8c3;  */

void FUN_107cfd834(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfd8c4; end: 107cfda4b;  */

void FUN_107cfd8c4(long param_1,undefined8 param_2)

{
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107cfda4c;
  puStack_30 = &UNK_1108d74b0;
  uStack_1b8 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107cfda5c;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107cfda6c;
  puStack_80 = &UNK_110847180;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107cfda7c;
  puStack_a8 = &UNK_1108d74e0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x107cfda8c;
  puStack_d0 = &UNK_1108431e0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x107cfda9c;
  puStack_f8 = &UNK_110847180;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x107cfdaac;
  puStack_120 = &UNK_110847180;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x107cfdac0;
  puStack_148 = &UNK_110847180;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x107cfdad0;
  puStack_170 = &UNK_110847180;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x107cfdae0;
  puStack_198 = &UNK_1108d74e0;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x107cfdaf0;
  puStack_1c0 = &UNK_1108d74e0;
  uStack_190 = uStack_1b8;
  uStack_168 = uStack_1b8;
  uStack_140 = uStack_1b8;
  uStack_118 = uStack_1b8;
  uStack_f0 = uStack_1b8;
  uStack_c8 = uStack_1b8;
  uStack_a0 = uStack_1b8;
  uStack_78 = uStack_1b8;
  uStack_50 = uStack_1b8;
  uStack_28 = uStack_1b8;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&PTR___NSConcreteGlobalBlock_110a08318,0,0,
                      &puStack_160,&puStack_188,0,&puStack_1b0,&puStack_1d8);
  return;
}



/* Entry: 107cfda4c; end: 107cfdb03;  */

void FUN_107cfda4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfdb04; end: 107cfdb63;  */

void FUN_107cfdb04(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cfdb64;
  puStack_20 = &UNK_1108d75d0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110a08358);
  return;
}



/* Entry: 107cfdb64; end: 107cfdb77;  */

void FUN_107cfdb64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfdb78; end: 107cfdba7;  */

void FUN_107cfdb78(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfdba8; end: 107cfdce3;  */

undefined1 FUN_107cfdba8(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfdce4; end: 107cfdcef;  */

void FUN_107cfdce4(void)

{
  return;
}



/* Entry: 107cfdcf0; end: 107cfdd1f;  */

void FUN_107cfdcf0(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfdd20; end: 107cfdec7;  */

void FUN_107cfdd20(long param_1,undefined8 param_2)

{
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107cfdec8;
  puStack_30 = &UNK_1108d74b0;
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107cfded8;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107cfdee8;
  puStack_80 = &UNK_110847180;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107cfdef8;
  puStack_a8 = &UNK_1108d74e0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x107cfdf08;
  puStack_d0 = &UNK_1108431e0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x107cfdf18;
  puStack_f8 = &UNK_110847180;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x107cfdf28;
  puStack_120 = &UNK_110847180;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x107cfdf3c;
  puStack_148 = &UNK_110847180;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x107cfdf4c;
  puStack_170 = &UNK_110847180;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x107cfdf5c;
  puStack_198 = &UNK_1108d7530;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x107cfdf6c;
  puStack_1c0 = &UNK_1108d74e0;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x107cfdf7c;
  puStack_1e8 = &UNK_1108d74e0;
  uStack_1b8 = uStack_1e0;
  uStack_190 = uStack_1e0;
  uStack_168 = uStack_1e0;
  uStack_140 = uStack_1e0;
  uStack_118 = uStack_1e0;
  uStack_f0 = uStack_1e0;
  uStack_c8 = uStack_1e0;
  uStack_a0 = uStack_1e0;
  uStack_78 = uStack_1e0;
  uStack_50 = uStack_1e0;
  uStack_28 = uStack_1e0;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&PTR___NSConcreteGlobalBlock_110a083d8,0,0,
                      &puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,&puStack_200);
  return;
}



/* Entry: 107cfdec8; end: 107cfdf8f;  */

void FUN_107cfdec8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfdf90; end: 107cfdfef;  */

void FUN_107cfdf90(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cfdff0;
  puStack_20 = &UNK_1108d75d0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110a08418);
  return;
}



/* Entry: 107cfdff0; end: 107cfe003;  */

void FUN_107cfdff0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfe004; end: 107cfe033;  */

void FUN_107cfe004(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfe034; end: 107cfe18f;  */

undefined1 FUN_107cfe034(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfe190; end: 107cfe1db;  */

void FUN_107cfe190(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c281c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfe1dc; end: 107cfe1e3;  */

void FUN_107cfe1dc(void)

{
  return;
}



/* Entry: 107cfe1e4; end: 107cfe213;  */

void FUN_107cfe1e4(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfe214; end: 107cfe3bb;  */

void FUN_107cfe214(long param_1,undefined8 param_2)

{
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107cfe3bc;
  puStack_30 = &UNK_1108d74b0;
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107cfe3cc;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107cfe3dc;
  puStack_80 = &UNK_110847180;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107cfe3ec;
  puStack_a8 = &UNK_1108d74e0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x107cfe3fc;
  puStack_d0 = &UNK_1108431e0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x107cfe40c;
  puStack_f8 = &UNK_110847180;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x107cfe41c;
  puStack_120 = &UNK_110847180;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x107cfe430;
  puStack_148 = &UNK_110847180;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x107cfe440;
  puStack_170 = &UNK_110847180;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x107cfe450;
  puStack_198 = &UNK_1108d7530;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x107cfe460;
  puStack_1c0 = &UNK_1108d74e0;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x107cfe470;
  puStack_1e8 = &UNK_1108d74e0;
  uStack_1b8 = uStack_1e0;
  uStack_190 = uStack_1e0;
  uStack_168 = uStack_1e0;
  uStack_140 = uStack_1e0;
  uStack_118 = uStack_1e0;
  uStack_f0 = uStack_1e0;
  uStack_c8 = uStack_1e0;
  uStack_a0 = uStack_1e0;
  uStack_78 = uStack_1e0;
  uStack_50 = uStack_1e0;
  uStack_28 = uStack_1e0;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&PTR___NSConcreteGlobalBlock_110a08478,0,0,
                      &puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,&puStack_200);
  return;
}



/* Entry: 107cfe3bc; end: 107cfe483;  */

void FUN_107cfe3bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfe484; end: 107cfe4e3;  */

void FUN_107cfe484(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cfe4e4;
  puStack_20 = &UNK_1108d75d0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110a084b8);
  return;
}



/* Entry: 107cfe4e4; end: 107cfe4f7;  */

void FUN_107cfe4e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfe4f8; end: 107cfe527;  */

void FUN_107cfe4f8(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfe528; end: 107cfe60f;  */

undefined8 FUN_107cfe528(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfe610; end: 107cfe6bf;  */

void FUN_107cfe610(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c281f00();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c281f00();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1;
    lVar1 = param_2;
    func_0x00010bf419a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c281e40();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010bf419a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c281e40();
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar2;
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfe6c0; end: 107cfe77b;  */

void FUN_107cfe6c0(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cfe77c;
  puStack_20 = &UNK_1108d74b0;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107cfe78c;
  puStack_48 = &UNK_1108d74e0;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107cfe79c;
  puStack_70 = &UNK_1108d74e0;
  uStack_40 = uStack_68;
  uStack_18 = uStack_68;
  func_0x00010c0bc660(param_2,param_2,&puStack_38,0,0,0,0,0,0,0,0,0,0,0,0,&puStack_60,&puStack_88);
  return;
}



/* Entry: 107cfe77c; end: 107cfe7ab;  */

void FUN_107cfe77c(long param_1)

{
  undefined8 in_x4;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x4;
  return;
}



/* Entry: 107cfe7ac; end: 107cfe89b;  */

undefined1 FUN_107cfe7ac(undefined8 param_1)

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
  func_0x00010c0bfe20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfe89c; end: 107cfe8cb;  */

void FUN_107cfe89c(void)

{
  return;
}



/* Entry: 107cfe8cc; end: 107cfea63;  */

void FUN_107cfe8cc(undefined8 param_1)

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
  pcStack_48 = FUN_107cfd660;
  uStack_40 = 0x107cfd670;
  uStack_38 = 0;
  func_0x00010c0bfe20(param_1);
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



/* Entry: 107cfea64; end: 107cfeaa3;  */

void FUN_107cfea64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beeeda0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfeaa4; end: 107cfeaa7;  */

void FUN_107cfeaa4(void)

{
  return;
}



/* Entry: 107cfeaa8; end: 107cfeb27;  */

void FUN_107cfeaa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beeeda0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfeb28; end: 107cfec47;  */

void FUN_107cfeb28(long param_1,undefined8 param_2)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107cfec48;
  puStack_30 = &UNK_1108d74b0;
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107cfec80;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107cfecbc;
  puStack_80 = &UNK_1108d74e0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107cfecf4;
  puStack_a8 = &UNK_1108431e0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_107cfed38;
  puStack_d0 = &UNK_1108d74e0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_107cfed70;
  puStack_f8 = &UNK_1108d74e0;
  uStack_c8 = uStack_f0;
  uStack_a0 = uStack_f0;
  uStack_78 = uStack_f0;
  uStack_50 = uStack_f0;
  uStack_28 = uStack_f0;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,&PTR___NSConcreteGlobalBlock_110a085d8
                      ,&puStack_98,&puStack_c0,&PTR___NSConcreteGlobalBlock_110a085f8,
                      &PTR___NSConcreteGlobalBlock_110a08618,&PTR___NSConcreteGlobalBlock_110a08638,
                      0,0,0,0,0,&puStack_e8,&puStack_110);
  return;
}



/* Entry: 107cfec48; end: 107cfecb7;  */

void FUN_107cfec48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfecb8; end: 107cfecbb;  */

void FUN_107cfecb8(void)

{
  return;
}



/* Entry: 107cfecbc; end: 107cfed2b;  */

void FUN_107cfecbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfed2c; end: 107cfed37;  */

void FUN_107cfed2c(void)

{
  return;
}


