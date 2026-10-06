/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00624948; end: 00624b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00624948(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar4;
  uVar6 = uVar3 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar4;
    uVar6 = uVar3 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar4 = uVar6;
  if ((bVar1 < 0x35) &&
     (pcVar5 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     pcVar5 != (code *)0x0)) {
    (*pcVar5)(param_1);
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar4;
  uVar6 = uVar3 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar4;
    uVar6 = uVar3 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar4 = uVar6;
  if ((bVar1 < 0x35) &&
     (pcVar5 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     pcVar5 != (code *)0x0)) {
    (*pcVar5)(param_1);
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  func_0x0077bc80();
  uVar7 = *(undefined8 *)(param_1 + _DAT_00ac5b9c);
  puStack_58 = puVar2;
  _CFDataGetLength(uVar7);
  _CFDataAppendBytes(uVar7,&puStack_58,8);
  return puVar2;
}



/* Entry: 00624b20; end: 00624db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00624b20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_28;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar2;
  if ((uVar3 & 7) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar3;
  }
  uVar3 = uVar3 + 8;
  lVar4 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar4 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2 + 8;
  }
  *puVar2 = uVar3;
  uVar3 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2 + 8;
  }
  *puVar2 = uVar3;
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793620();
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_28 = puVar1;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,&puStack_28,8);
  return puVar1;
}



/* Entry: 00624db8; end: 00624fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00624db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_38;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar2;
  if ((uVar4 & 7) != 0) {
    uVar4 = (uVar4 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar4;
  }
  uVar4 = uVar4 + 8;
  lVar3 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
  }
  *puVar2 = uVar4;
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793620();
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_38 = puVar1;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,&puStack_38,8);
  return puVar1;
}



/* Entry: 00624fac; end: 00625243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00624fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_28;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar2;
  if ((uVar3 & 3) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffffc) + 4;
    *puVar2 = uVar3;
  }
  uVar3 = uVar3 + 4;
  lVar4 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar4 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2 + 4;
  }
  *puVar2 = uVar3;
  uVar3 = uVar3 + 4;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2 + 4;
  }
  *puVar2 = uVar3;
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793620();
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_28 = puVar1;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,&puStack_28,8);
  return puVar1;
}



/* Entry: 00625244; end: 00625ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00625244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_38;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar2;
  if ((uVar4 & 7) != 0) {
    uVar4 = (uVar4 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar4;
  }
  uVar4 = uVar4 + 8;
  lVar3 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
    lVar3 = (long)_DAT_00ac5b90;
  }
  *puVar2 = uVar4;
  uVar4 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2 + 8;
  }
  *puVar2 = uVar4;
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793620();
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_38 = puVar1;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,&puStack_38,8);
  return puVar1;
}



/* Entry: 00625ab8; end: 00625f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00625ab8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar4;
  if ((uVar3 & 3) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffffc) + 4;
    *puVar4 = uVar3;
  }
  uVar5 = uVar3 + 4;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar4;
    uVar5 = uVar3 + 4;
  }
  iVar1 = *(int *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar4 = uVar5;
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_00ac35b0;
  func_0x00784900();
  uVar7 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_68 = puVar2;
  _CFDataGetLength(uVar7);
  _CFDataAppendBytes(uVar7,&puStack_68,8);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    lVar6 = (long)_DAT_00ac5b90;
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar4 + 4;
    if (*(ulong *)(param_1 + lVar6) < uVar3) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      lVar6 = (long)_DAT_00ac5b90;
      puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar3 = *puVar4 + 4;
    }
    *puVar4 = uVar3;
    uVar3 = uVar3 + 4;
    if (*(ulong *)(param_1 + lVar6) < uVar3) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar3 = *puVar4 + 4;
    }
    *puVar4 = uVar3;
    func_0x0077e660(puVar2);
  }
  return puVar2;
}



/* Entry: 00625f8c; end: 00625f93;  */

/* WARNING: Removing unreachable block (ram,0x0062e5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00625f8c(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar5 = *puVar7;
  uVar9 = uVar5 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,1,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
  *puVar7 = uVar9;
  if ((bVar1 < 0x35) &&
     (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     pcVar8 != (code *)0x0)) {
    puStack_a0 = param_1;
    (*pcVar8)();
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puStack_a0 = (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_00ac5bbc);
  lVar2 = *(long *)(param_1 + _DAT_00ac5ba0);
  func_0x00780e80();
  if (lVar2 == 0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcStack_68 = FUN_0062cdc8;
    pcStack_70 = FUN_0062cdb0;
    _CFDictionaryCreateMutable();
    _objc_autorelease();
    *(long *)(param_1 + _DAT_00ac5bbc) = lVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ac5ba0);
    func_0x00788220();
    *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar3;
    func_0x0078b420(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
    func_0x0078b280(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  while( true ) {
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
    *puVar7 = uVar9;
    if ((0x34 < (ulong)bVar1) ||
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
       pcVar8 == (code *)0x0)) break;
    puVar4 = param_1;
    (*pcVar8)();
    if (puVar4 == (undefined *)0x0) goto LAB_0062e53c;
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
    *puVar7 = uVar9;
    if ((bVar1 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
       pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1);
    }
    else {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    func_0x0078f4e0(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
LAB_0062e53c:
  puVar4 = puStack_a0;
  _NSClassFromString();
  if (puVar4 == (undefined *)0x0) {
    puStack_a0 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00782040();
    func_0x0077e4e0();
  }
  else {
    _NSClassFromString();
    _objc_alloc();
    func_0x00785000();
    _objc_autorelease();
  }
  func_0x0077e720(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
  *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_90 = puStack_a0;
  _CFDataGetLength(uVar6);
  _CFDataAppendBytes(uVar6,&puStack_90,8);
  return puStack_a0;
}



/* Entry: 00625f94; end: 0062606b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00625f94(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar2;
  if (uVar3 % 0x14 != 0) {
    uVar3 = (uVar3 - uVar3 % 0x14) + 0x14;
    *puVar2 = uVar3;
  }
  uVar4 = uVar3 + 0x14;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2;
    uVar4 = uVar3 + 0x14;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  uStack_30 = *(undefined4 *)(puVar1 + 2);
  *puVar2 = uVar4;
  func_0x00781a00(PTR__OBJC_CLASS___NSDecimalNumber_00ac35d8,param_2,&uStack_40);
  return;
}



/* Entry: 0062606c; end: 00626083;  */

undefined ** FUN_0062606c(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_00a555a0;
}



/* Entry: 00626084; end: 006262cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_00626084(long param_1,undefined8 param_2)

{
  short *psVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuStack_48;
  
  uVar6 = **(ulong **)(param_1 + _DAT_00ac5b8c);
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 + 1;
    **(ulong **)(param_1 + _DAT_00ac5b8c) = uVar6;
  }
  lVar9 = 0;
  lVar4 = *(long *)(param_1 + _DAT_00ac5b88) + uVar6;
  lVar2 = -1;
  do {
    lVar8 = lVar2;
    psVar1 = (short *)(lVar4 + lVar9);
    lVar2 = lVar8 + 1;
    lVar9 = lVar9 + 2;
  } while (*psVar1 != 0);
  uVar3 = lVar8 + 2;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar3 + uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
  }
  if (uVar3 < 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    ppuVar5 = (undefined **)0x0;
    _CFStringCreateWithCharacters(0,lVar4,lVar2);
    _objc_autorelease();
  }
  **(long **)(param_1 + _DAT_00ac5b8c) = **(long **)(param_1 + _DAT_00ac5b8c) + lVar9;
  uVar7 = *(undefined8 *)(param_1 + _DAT_00ac5b9c);
  ppuStack_48 = ppuVar5;
  _CFDataGetLength(uVar7);
  _CFDataAppendBytes(uVar7,&ppuStack_48,8);
  return ppuVar5;
}



/* Entry: 006262d0; end: 0062668f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006262d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *apuStack_38 [3];
  
  FUN_00629298(apuStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x007936a0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  apuStack_38[0] = puVar1;
  _CFDataGetLength(uVar2);
  _CFDataAppendBytes(uVar2,apuStack_38,8);
  return puVar1;
}



/* Entry: 00626690; end: 00626697;  */

/* WARNING: Removing unreachable block (ram,0x0062e574) */
/* WARNING: Removing unreachable block (ram,0x0062e588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00626690(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lStack_a0;
  long alStack_90 [4];
  code *pcStack_70;
  code *pcStack_68;
  
  puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar6;
  uVar8 = uVar4 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar8) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,0,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
  *puVar6 = uVar8;
  if ((bVar1 < 0x35) &&
     (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     pcVar7 != (code *)0x0)) {
    lStack_a0 = param_1;
    (*pcVar7)();
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    lStack_a0 = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5bbc);
  lVar2 = *(long *)(param_1 + _DAT_00ac5ba0);
  func_0x00780e80();
  if (lVar2 == 0) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
    pcStack_68 = FUN_0062cdc8;
    pcStack_70 = FUN_0062cdb0;
    _CFDictionaryCreateMutable();
    _objc_autorelease();
    *(long *)(param_1 + _DAT_00ac5bbc) = lVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ac5ba0);
    func_0x00788220();
    *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar3;
    func_0x0078b420(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
    func_0x0078b280(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  while( true ) {
    puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar8) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar4 = *puVar6;
      uVar8 = uVar4 + 1;
    }
    uVar4 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
    *puVar6 = uVar8;
    if ((0x34 < uVar4) ||
       (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + uVar4 * 8), pcVar7 == (code *)0x0))
    break;
    lVar2 = param_1;
    (*pcVar7)();
    if (lVar2 == 0) goto LAB_0062e53c;
    puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar8) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar6 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar4 = *puVar6;
      uVar8 = uVar4 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
    *puVar6 = uVar8;
    if ((bVar1 < 0x35) &&
       (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
       pcVar7 != (code *)0x0)) {
      (*pcVar7)(param_1);
    }
    else {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    func_0x0078f4e0(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
LAB_0062e53c:
  lVar2 = lStack_a0;
  _NSClassFromString();
  if (lVar2 == 0) {
    lStack_a0 = 0;
  }
  else {
    _NSClassFromString();
    _objc_alloc();
    func_0x00785000();
    _objc_autorelease();
  }
  func_0x0077e720(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
  *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  alStack_90[0] = lStack_a0;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,alStack_90,8);
  return lStack_a0;
}



/* Entry: 00626698; end: 006266a7; +[FastCoder propertyListWithData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00626698(undefined8 param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  int *piVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uStack_58;
  
  piVar3 = param_3;
  func_0x007882e0();
  if (((int *)((long)&MACH_HEADER.cputype + 3) < piVar3) &&
     (func_0x0077fde0(), *param_3 == 0x46415354)) {
    bVar2 = (short)param_3[1] == 3;
    if ((bVar2 && 2 < *(ushort *)((long)param_3 + 6)) &&
        (!bVar2 || *(ushort *)((long)param_3 + 6) != 3)) {
      uStack_58 = 8;
      puVar13 = PTR_PTR_00ac3598;
      _objc_opt_new();
      _objc_autorelease();
      *(undefined8 *)(puVar13 + _DAT_00ac5b84) = 0xb23690;
      *(int **)(puVar13 + _DAT_00ac5b88) = param_3;
      puVar10 = &uStack_58;
      *(ulong **)(puVar13 + _DAT_00ac5b8c) = puVar10;
      *(int **)(puVar13 + _DAT_00ac5b90) = piVar3;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      piVar12 = (int *)(uStack_58 + 4);
      if (piVar3 < piVar12) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        piVar12 = (int *)(*puVar10 + 4);
      }
      *puVar10 = (ulong)piVar12;
      func_0x00781640();
      *(undefined **)(puVar13 + _DAT_00ac5b94) = puVar4;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x00781640();
      puVar8 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x00781640();
      uVar5 = 0;
      _CFArrayCreateMutable(0,0,0);
      _objc_autorelease();
      *(undefined **)(puVar13 + _DAT_00ac5b98) = puVar4;
      *(undefined **)(puVar13 + _DAT_00ac5b9c) = puVar8;
      *(undefined8 *)(puVar13 + _DAT_00ac5ba0) = uVar5;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar9 = *puVar10;
      uVar14 = uVar9 + 1;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar9 = *puVar10;
        uVar14 = uVar9 + 1;
      }
      bVar1 = *(byte *)(*(long *)(puVar13 + _DAT_00ac5b88) + uVar9);
      *puVar10 = uVar14;
      if ((bVar1 < 0x35) &&
         (pcVar11 = *(code **)(*(long *)(puVar13 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
         pcVar11 != (code *)0x0)) {
        (*pcVar11)(puVar13);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar13 = (undefined *)0x0;
      }
      puVar6 = puVar4;
      _CFDataGetLength();
      if (puVar6 <= (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
        return puVar13;
      }
      uVar14 = 0;
      do {
        puVar7 = puVar4;
        _CFDataGetLength();
        if (uVar14 < (ulong)puVar7 >> 3) {
          puVar7 = puVar4;
          _CFDataGetBytePtr();
          puVar8 = *(undefined **)(puVar7 + uVar14 * 8);
        }
        else {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
          puVar8 = PTR__OBJC_CLASS___NSNull_00ac2f90;
          func_0x00789b20();
        }
        if (*(long *)(puVar8 + 0x28) != 0) {
          _free();
        }
        uVar14 = uVar14 + 1;
      } while ((ulong)puVar6 >> 3 != uVar14);
      return puVar13;
    }
    _NSLog(&PTR____CFConstantStringClassReference_00a47900);
  }
  return (undefined *)0x0;
}



/* Entry: 006266a8; end: 006268b7; +[FastCoder dataWithRootObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_006266a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,8);
    puVar1 = puVar7;
    func_0x007896e0();
    *puVar1 = 0x4000346415354;
    uStack_80._0_4_ = 0;
    func_0x0077ee80(puVar7);
    uStack_80._0_4_ = 0;
    func_0x0077ee80(puVar7);
    uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
    puVar1 = puVar7;
    func_0x0077ee80(puVar7);
    _objc_autoreleasePoolPush();
    uStack_80 = *(long *)PTR__kCFTypeDictionaryKeyCallBacks_00999d80;
    uStack_70 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_00999d80 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_00999d80 + 8);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uVar2 = 0;
    _CFDictionaryCreateMutable(0,0,&uStack_80,0);
    _objc_autorelease();
    uVar3 = 0;
    _CFDictionaryCreateMutable(0,0,0,0);
    _objc_autorelease();
    puVar6 = PTR__kCFCopyStringDictionaryKeyCallBacks_00999d60;
    uVar4 = 0;
    _CFDictionaryCreateMutable(0,0,PTR__kCFCopyStringDictionaryKeyCallBacks_00999d60,0);
    _objc_autorelease();
    uVar5 = 0;
    _CFDictionaryCreateMutable(0,0,puVar6,0);
    _objc_autorelease();
    puVar6 = PTR_PTR_00ac35a0;
    _objc_opt_new();
    _objc_autorelease();
    *(long *)(puVar6 + _DAT_00ac5ba4) = param_3;
    *(undefined8 **)(puVar6 + _DAT_00ac5ba8) = puVar7;
    *(undefined8 *)(puVar6 + _DAT_00ac5bac) = uVar2;
    *(undefined8 *)(puVar6 + _DAT_00ac5bb0) = uVar3;
    *(undefined8 *)(puVar6 + _DAT_00ac5bb4) = uVar4;
    *(undefined8 *)(puVar6 + _DAT_00ac5bb8) = uVar5;
    func_0x0077b940(param_3);
    func_0x00780e80();
    func_0x0078b560(puVar7);
    func_0x00780e80();
    func_0x0078b560(puVar7);
    func_0x00780e80();
    func_0x0078b560(puVar7);
    _objc_autoreleasePoolPop(puVar1);
  }
  return puVar7;
}



/* Entry: 006268b8; end: 006268bf; -[FCNSCoder allowsKeyedCoding] */

undefined8 FUN_006268b8(void)

{
  return 1;
}



/* Entry: 006268c0; end: 00626953; -[FCNSCoder encodeObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006268c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
  }
  if (param_3 != 0) {
    func_0x0077b940(param_3,param_2,param_1);
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626954; end: 00626a27; -[FCNSCoder encodeConditionalObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626954(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_00ac5bac);
  _CFDictionaryGetValue(uVar1,param_3);
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    return;
  }
  if (param_4 == 0) {
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8));
  }
  else {
    func_0x0077b940(param_4);
  }
  if (param_3 != 0) {
    func_0x0077b940(param_3);
    return;
  }
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8));
  return;
}



/* Entry: 00626a28; end: 00626ad7; -[FCNSCoder encodeBool:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626a28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626ad8; end: 00626b87; -[FCNSCoder encodeInt:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626ad8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626b88; end: 00626c37; -[FCNSCoder encodeInteger:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626b88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626c38; end: 00626ce7; -[FCNSCoder encodeInt32:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626c38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626ce8; end: 00626d97; -[FCNSCoder encodeInt64:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626ce8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  else {
    func_0x0077b940(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_21 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_21,1);
  return;
}



/* Entry: 00626d98; end: 00626e53; -[FCNSCoder encodeFloat:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626d98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_4 == 0) {
    uStack_32 = 0;
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8),param_3,&uStack_32,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c40(param_1);
  }
  else {
    func_0x0077b940(param_4,param_3,param_2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c40(param_1);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_31 = 0;
  func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8),param_3,&uStack_31,1);
  return;
}



/* Entry: 00626e54; end: 00626f0f; -[FCNSCoder encodeDouble:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626e54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_4 == 0) {
    uStack_32 = 0;
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8),param_3,&uStack_32,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c20(param_1);
  }
  else {
    func_0x0077b940(param_4,param_3,param_2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c20(param_1);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_31 = 0;
  func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8),param_3,&uStack_31,1);
  return;
}



/* Entry: 00626f10; end: 00626fd7; -[FCNSCoder encodeBytes:length:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined *puVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_5 == 0) {
    uStack_32 = 0;
    func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_32,1);
    puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,param_3,param_4);
  }
  else {
    func_0x0077b940(param_5,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,param_3,param_4);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x0077b940();
    return;
  }
  uStack_31 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_31,1);
  return;
}



/* Entry: 00626fd8; end: 0062701f; -[FCNSCoder encodeObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00626fd8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_11;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_FC_encodeWithCoder__00ab9b48,param_1);
    return;
  }
  uStack_11 = 0;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_11,1);
  return;
}



/* Entry: 00627020; end: 0062705f; -[FCNSCoder encodeBool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627020(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = 0xd;
  if (param_3 == 0) {
    uStack_11 = 0xe;
  }
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_11,1);
  return;
}



/* Entry: 00627060; end: 00627093; -[FCNSCoder encodeSInt8:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627060(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_11,1);
  return;
}



/* Entry: 00627094; end: 006270f7; -[FCNSCoder encodeSInt16:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627094(long param_1,undefined8 param_2,undefined2 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined2 uStack_32;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 1) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,1);
  }
  uStack_32 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_32,2);
  return;
}



/* Entry: 006270f8; end: 00627163; -[FCNSCoder encodeSInt32:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006270f8(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_34;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 3) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,4 - (uVar1 & 3));
  }
  uStack_34 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_34,4);
  return;
}



/* Entry: 00627164; end: 006271cf; -[FCNSCoder encodeSInt64:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627164(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,8 - (uVar1 & 7));
  }
  uStack_38 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  return;
}



/* Entry: 006271d0; end: 00627203; -[FCNSCoder encodeUInt8:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006271d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + _DAT_00ac5ba8),param_2,&uStack_11,1);
  return;
}



/* Entry: 00627204; end: 00627267; -[FCNSCoder encodeUInt16:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627204(long param_1,undefined8 param_2,undefined2 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined2 uStack_32;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 1) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,1);
  }
  uStack_32 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_32,2);
  return;
}



/* Entry: 00627268; end: 006272d3; -[FCNSCoder encodeUInt32:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627268(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_34;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 3) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,4 - (uVar1 & 3));
  }
  uStack_34 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_34,4);
  return;
}



/* Entry: 006272d4; end: 0062733f; -[FCNSCoder encodeUInt64:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006272d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,8 - (uVar1 & 7));
  }
  uStack_38 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  return;
}



/* Entry: 00627340; end: 006273ab; -[FCNSCoder encodeFloat32:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627340(undefined4 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_34;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_2 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 3) != 0) {
    func_0x00784800(*(undefined8 *)(param_2 + lVar2),param_3,4 - (uVar1 & 3));
  }
  uStack_34 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_2 + lVar2),param_3,&uStack_34,4);
  return;
}



/* Entry: 006273ac; end: 00627417; -[FCNSCoder encodeFloat64:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006273ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_2 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_2 + lVar2),param_3,8 - (uVar1 & 7));
  }
  uStack_38 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_2 + lVar2),param_3,&uStack_38,8);
  return;
}



/* Entry: 00627418; end: 0062749b; -[FCNSCoder encodePoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627418(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_3 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_3 + lVar2),param_4,8 - (uVar1 & 7));
  }
  uStack_38 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  uStack_38 = param_2;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  return;
}



/* Entry: 0062749c; end: 0062751f; -[FCNSCoder encodeSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062749c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_3 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_3 + lVar2),param_4,8 - (uVar1 & 7));
  }
  uStack_38 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  uStack_38 = param_2;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  return;
}



/* Entry: 00627520; end: 006275db; -[FCNSCoder encodeRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_5 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_5 + lVar2),param_6,8 - (uVar1 & 7));
  }
  uStack_48 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_2;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_4;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  return;
}



/* Entry: 006275dc; end: 0062765f; -[FCNSCoder encodeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006275dc(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 3) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,4 - (uVar1 & 3));
  }
  uStack_38 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,4);
  uStack_34 = param_4;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_34,4);
  return;
}



/* Entry: 00627660; end: 006276e3; -[FCNSCoder encodeVector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627660(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_3 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_3 + lVar2),param_4,8 - (uVar1 & 7));
  }
  uStack_38 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  uStack_38 = param_2;
  func_0x0077ee80(*(undefined8 *)(param_3 + lVar2),param_4,&uStack_38,8);
  return;
}



/* Entry: 006276e4; end: 006277cb; -[FCNSCoder encodeAffineTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006276e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,8 - (uVar1 & 7));
  }
  uStack_38 = *param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[1];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[2];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[3];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[4];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[5];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  return;
}



/* Entry: 006277cc; end: 006279a3; -[FCNSCoder encode3DTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006277cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,8 - (uVar1 & 7));
  }
  uStack_38 = *param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[1];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[2];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[3];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[4];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[5];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[6];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[7];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[8];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[9];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[10];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[0xb];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[0xc];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[0xd];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[0xe];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[0xf];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  return;
}



/* Entry: 006279a4; end: 00627a5b; -[FCNSCoder encodeCMTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006279a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_1 + lVar2),param_2,8 - (uVar1 & 7));
  }
  uStack_38 = *param_3;
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38 = param_3[2];
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,8);
  uStack_38._0_4_ = *(undefined4 *)(param_3 + 1);
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,4);
  uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)((long)param_3 + 0xc));
  func_0x0077ee80(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_38,4);
  return;
}



/* Entry: 00627a5c; end: 00627ab7; -[FCNSCoder encodeCMTimeRange:] */

void FUN_00627a5c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x007826c0(param_1,param_2,&uStack_40);
  uStack_38 = param_3[4];
  uStack_40 = param_3[3];
  uStack_30 = param_3[5];
  func_0x007826c0(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 00627ab8; end: 00627b13; -[FCNSCoder encodeCMTimeMapping:] */

void FUN_00627ab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  func_0x007826e0(param_1,param_2,&uStack_50);
  uStack_48 = param_3[7];
  uStack_50 = param_3[6];
  uStack_38 = param_3[9];
  uStack_40 = param_3[8];
  uStack_28 = param_3[0xb];
  uStack_30 = param_3[10];
  func_0x007826e0(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 00627b14; end: 00627bcf; -[FCNSCoder encodeUIEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  lVar2 = (long)_DAT_00ac5ba8;
  uVar1 = *(ulong *)(param_5 + lVar2);
  func_0x007882e0();
  if ((uVar1 & 7) != 0) {
    func_0x00784800(*(undefined8 *)(param_5 + lVar2),param_6,8 - (uVar1 & 7));
  }
  uStack_48 = param_1;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_2;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_3;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  uStack_48 = param_4;
  func_0x0077ee80(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_48,8);
  return;
}



/* Entry: 00627bd0; end: 00627bd7; -[FCNSDecoder allowsKeyedCoding] */

undefined8 FUN_00627bd0(void)

{
  return 1;
}



/* Entry: 00627bd8; end: 00627bff; -[FCNSDecoder containsValueForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00627bd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_00ac5bbc);
  func_0x00789f00(lVar1);
  return lVar1 != 0;
}



/* Entry: 00627c00; end: 00627c0f; -[FCNSDecoder decodeObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5bbc),PTR_s_objectForKeyedSubscript__00abd4d0);
  return;
}



/* Entry: 00627c10; end: 00627c2f; -[FCNSDecoder decodeBoolForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c10(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x0077fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627c30; end: 00627c4f; -[FCNSDecoder decodeIntForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c30(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x007871b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627c50; end: 00627c6f; -[FCNSDecoder decodeIntegerForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c50(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x00787210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627c70; end: 00627c93; -[FCNSDecoder decodeInt32ForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c70(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  func_0x00788b60();
  return;
}



/* Entry: 00627c94; end: 00627cb3; -[FCNSDecoder decodeInt64ForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627c94(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x00788b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627cb4; end: 00627cd3; -[FCNSDecoder decodeFloatForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627cb4(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x00783850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627cd4; end: 00627cf3; -[FCNSDecoder decodeDoubleForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627cd4(long param_1)

{
  func_0x00789f00(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
                    /* WARNING: Could not recover jumptable at 0x00782450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00627cf4; end: 00627d2f; -[FCNSDecoder decodeBytesForKey:returnedLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5bbc);
  func_0x00789f00();
  uVar2 = uVar1;
  func_0x007882e0();
  *param_4 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar1,PTR_s_bytes_00abac70);
  return;
}



/* Entry: 00627d30; end: 00627e0f; -[FCNSDecoder decodeObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00627d30(long param_1,undefined8 param_2)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  if ((bVar1 < 0x35) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00627ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return param_1;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  return 0;
}



/* Entry: 00627e10; end: 00627ea7; -[FCNSDecoder decodeBool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00627e10(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  cVar1 = *(char *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return cVar1 == '\r';
}



/* Entry: 00627ea8; end: 00627f37; -[FCNSDecoder decodeSInt8] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00627ea8(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  cVar1 = *(char *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return (long)cVar1;
}



/* Entry: 00627f38; end: 00627fcf; -[FCNSDecoder decodeSInt16] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00627f38(long param_1,undefined8 param_2)

{
  short sVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 + 1;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 2;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 2;
  }
  sVar1 = *(short *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return (long)sVar1;
}



/* Entry: 00627fd0; end: 0062806f; -[FCNSDecoder decodeSInt32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00627fd0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 3) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffffc) + 4;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 4;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 4;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 00628070; end: 0062810f; -[FCNSDecoder decodeSInt64] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00628070(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 7) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffff8) + 8;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 8;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 8;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 00628110; end: 0062819f; -[FCNSDecoder decodeUInt8] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00628110(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  uVar1 = *(undefined1 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 006281a0; end: 00628237; -[FCNSDecoder decodeUInt16] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_006281a0(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 + 1;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 2;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 2;
  }
  uVar1 = *(undefined2 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 00628238; end: 006282d7; -[FCNSDecoder decodeUInt32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00628238(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 3) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffffc) + 4;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 4;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 4;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 006282d8; end: 00628377; -[FCNSDecoder decodeUInt64] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006282d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_00ac5b8c;
  puVar3 = *(ulong **)(param_1 + lVar5);
  uVar2 = *puVar3;
  if ((uVar2 & 7) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffff8) + 8;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 8;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + lVar5);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 8;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  return uVar1;
}



/* Entry: 00628378; end: 00628417; -[FCNSDecoder decodeFloat32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00628378(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar4 = (long)_DAT_00ac5b8c;
  puVar2 = *(ulong **)(param_1 + lVar4);
  uVar1 = *puVar2;
  if ((uVar1 & 3) != 0) {
    uVar1 = (uVar1 & 0xfffffffffffffffc) + 4;
    *puVar2 = uVar1;
  }
  uVar3 = uVar1 + 4;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar2 = *(ulong **)(param_1 + lVar4);
    uVar1 = *puVar2;
    uVar3 = uVar1 + 4;
  }
  uVar5 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar1);
  *puVar2 = uVar3;
  return uVar5;
}



/* Entry: 00628418; end: 006284b7; -[FCNSDecoder decodeFloat64] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00628418(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_00ac5b8c;
  puVar2 = *(ulong **)(param_1 + lVar4);
  uVar1 = *puVar2;
  if ((uVar1 & 7) != 0) {
    uVar1 = (uVar1 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar1;
  }
  uVar3 = uVar1 + 8;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar2 = *(ulong **)(param_1 + lVar4);
    uVar1 = *puVar2;
    uVar3 = uVar1 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar1);
  *puVar2 = uVar3;
  return uVar5;
}



/* Entry: 006284b8; end: 006285b7; -[FCNSDecoder decodePoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_006284b8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = (long)_DAT_00ac5b8c;
  puVar1 = *(ulong **)(param_1 + lVar6);
  uVar3 = *puVar1;
  if ((uVar3 & 7) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffff8) + 8;
    *puVar1 = uVar3;
  }
  uVar2 = uVar3 + 8;
  lVar4 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar3 = *puVar1;
    uVar2 = uVar3 + 8;
    lVar4 = (long)_DAT_00ac5b90;
  }
  lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar5 + uVar3);
  *puVar1 = uVar2;
  uVar3 = uVar2 + 8;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar2 = *puVar1;
    uVar3 = uVar2 + 8;
    lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  }
  auVar8._8_8_ = *(undefined8 *)(lVar5 + uVar2);
  *puVar1 = uVar3;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 006285b8; end: 006286b7; -[FCNSDecoder decodeSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_006285b8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = (long)_DAT_00ac5b8c;
  puVar1 = *(ulong **)(param_1 + lVar6);
  uVar3 = *puVar1;
  if ((uVar3 & 7) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffff8) + 8;
    *puVar1 = uVar3;
  }
  uVar2 = uVar3 + 8;
  lVar4 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar3 = *puVar1;
    uVar2 = uVar3 + 8;
    lVar4 = (long)_DAT_00ac5b90;
  }
  lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar5 + uVar3);
  *puVar1 = uVar2;
  uVar3 = uVar2 + 8;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar2 = *puVar1;
    uVar3 = uVar2 + 8;
    lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  }
  auVar8._8_8_ = *(undefined8 *)(lVar5 + uVar2);
  *puVar1 = uVar3;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 006286b8; end: 006286df; -[FCNSDecoder decodeRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006286b8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = **(ulong **)(param_1 + _DAT_00ac5b8c);
  if ((uVar2 & 7) != 0) {
    **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar2 & 0xfffffffffffffff8) + 8;
  }
  lVar3 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar1;
  uVar2 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar2 = uVar4 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
  *puVar1 = uVar2;
  if (*(ulong *)(param_1 + lVar3) < uVar2 + 8) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    lVar3 = (long)_DAT_00ac5b90;
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_00628798;
LAB_0062885c:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    lVar3 = (long)_DAT_00ac5b90;
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_006287e0;
  }
  else {
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (*(ulong *)(param_1 + lVar3) < uVar2) goto LAB_0062885c;
LAB_00628798:
    *puVar1 = uVar2;
    uVar2 = uVar2 + 8;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_006287e0;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  &PTR____CFConstantStringClassReference_00a478a0,
                  &PTR____CFConstantStringClassReference_00a479a0);
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar1 + 8;
LAB_006287e0:
  *puVar1 = uVar2;
  return uVar5;
}



/* Entry: 006286e0; end: 006288ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006286e0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar1;
  uVar4 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar2) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar2 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar1;
    uVar4 = uVar3 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar1 = uVar4;
  if (*(ulong *)(param_1 + lVar2) < uVar4 + 8) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_00ac5b90;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_00628798;
LAB_0062885c:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_00ac5b90;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_006287e0;
  }
  else {
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (*(ulong *)(param_1 + lVar2) < uVar4) goto LAB_0062885c;
LAB_00628798:
    *puVar1 = uVar4;
    uVar4 = uVar4 + 8;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_006287e0;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  &PTR____CFConstantStringClassReference_00a478a0,
                  &PTR____CFConstantStringClassReference_00a479a0);
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar1 + 8;
LAB_006287e0:
  *puVar1 = uVar4;
  return uVar5;
}



/* Entry: 006288ac; end: 006289ab; -[FCNSDecoder decodeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006288ac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_00ac5b8c;
  puVar2 = *(ulong **)(param_1 + lVar6);
  uVar4 = *puVar2;
  if ((uVar4 & 3) != 0) {
    uVar4 = (uVar4 & 0xfffffffffffffffc) + 4;
    *puVar2 = uVar4;
  }
  uVar3 = uVar4 + 4;
  lVar5 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar5) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar2 = *(ulong **)(param_1 + lVar6);
    uVar4 = *puVar2;
    uVar3 = uVar4 + 4;
    lVar5 = (long)_DAT_00ac5b90;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
  *puVar2 = uVar3;
  uVar3 = uVar3 + 4;
  if (*(ulong *)(param_1 + lVar5) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + lVar6);
    uVar3 = *puVar2 + 4;
  }
  *puVar2 = uVar3;
  return uVar1;
}



/* Entry: 006289ac; end: 00628aab; -[FCNSDecoder decodeVector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_006289ac(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = (long)_DAT_00ac5b8c;
  puVar1 = *(ulong **)(param_1 + lVar6);
  uVar3 = *puVar1;
  if ((uVar3 & 7) != 0) {
    uVar3 = (uVar3 & 0xfffffffffffffff8) + 8;
    *puVar1 = uVar3;
  }
  uVar2 = uVar3 + 8;
  lVar4 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar3 = *puVar1;
    uVar2 = uVar3 + 8;
    lVar4 = (long)_DAT_00ac5b90;
  }
  lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar5 + uVar3);
  *puVar1 = uVar2;
  uVar3 = uVar2 + 8;
  if (*(ulong *)(param_1 + lVar4) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + lVar6);
    uVar2 = *puVar1;
    uVar3 = uVar2 + 8;
    lVar5 = *(long *)(param_1 + _DAT_00ac5b88);
  }
  auVar8._8_8_ = *(undefined8 *)(lVar5 + uVar2);
  *puVar1 = uVar3;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 00628aac; end: 00628adb; -[FCNSDecoder decodeAffineTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628aac(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = **(ulong **)(param_2 + _DAT_00ac5b8c);
  if ((uVar2 & 7) != 0) {
    **(ulong **)(param_2 + _DAT_00ac5b8c) = (uVar2 & 0xfffffffffffffff8) + 8;
  }
  lVar3 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar5 = *puVar1;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
  }
  lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar6 = *(undefined8 *)(lVar4 + uVar5);
  *puVar1 = uVar2;
  *param_1 = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar4 + uVar2);
  *puVar1 = uVar5;
  param_1[1] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar4 + uVar5);
  *puVar1 = uVar2;
  param_1[2] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar4 + uVar2);
  *puVar1 = uVar5;
  param_1[3] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar4 + uVar5);
  *puVar1 = uVar2;
  param_1[4] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar6 = *(undefined8 *)(lVar4 + uVar2);
  *puVar1 = uVar5;
  param_1[5] = uVar6;
  return;
}



/* Entry: 00628adc; end: 00628d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628adc(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar2 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar5 = *puVar1;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar2 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
  }
  lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar4;
  *param_1 = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar2 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar4);
  *puVar1 = uVar5;
  param_1[1] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar2 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar4;
  param_1[2] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar2 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar4);
  *puVar1 = uVar5;
  param_1[3] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar2 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar4;
  param_1[4] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar2) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar4);
  *puVar1 = uVar5;
  param_1[5] = uVar6;
  return;
}



/* Entry: 00628d0c; end: 00628d3b; -[FCNSDecoder decode3DTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628d0c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = **(ulong **)(param_2 + _DAT_00ac5b8c);
  if ((uVar2 & 7) != 0) {
    **(ulong **)(param_2 + _DAT_00ac5b8c) = (uVar2 & 0xfffffffffffffff8) + 8;
  }
  lVar4 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar5 = *puVar1;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar4 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
  }
  lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  *param_1 = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[1] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[2] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[3] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[4] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[5] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[6] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[7] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[8] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[9] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[10] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[0xb] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[0xc] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[0xd] = uVar6;
  uVar2 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar2 = uVar5 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar4 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar5);
  *puVar1 = uVar2;
  param_1[0xe] = uVar6;
  uVar5 = uVar2 + 8;
  if (*(ulong *)(param_2 + lVar4) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    uVar5 = uVar2 + 8;
    lVar3 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar6 = *(undefined8 *)(lVar3 + uVar2);
  *puVar1 = uVar5;
  param_1[0xf] = uVar6;
  return;
}



/* Entry: 00628d3c; end: 0062928b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628d3c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar5 = *puVar1;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
  }
  lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  *param_1 = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[1] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[2] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[3] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[4] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[5] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[6] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[7] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[8] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[9] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[10] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[0xb] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[0xc] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[0xd] = uVar6;
  uVar4 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar1;
    uVar4 = uVar5 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar5);
  *puVar1 = uVar4;
  param_1[0xe] = uVar6;
  uVar5 = uVar4 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar1 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar5 = uVar4 + 8;
    lVar2 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar6 = *(undefined8 *)(lVar2 + uVar4);
  *puVar1 = uVar5;
  param_1[0xf] = uVar6;
  return;
}



/* Entry: 0062928c; end: 00629297; -[FCNSDecoder decodeCMTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062928c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar6 = *puVar2;
  if ((uVar6 & 7) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar6;
  }
  uVar5 = uVar6 + 8;
  lVar3 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 8;
  }
  lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *param_1 = uVar7;
  uVar6 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar7 = *(undefined8 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  param_1[2] = uVar7;
  uVar5 = uVar6 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar6 = uVar5 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 00629298; end: 00629447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00629298(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar6 = *puVar2;
  if ((uVar6 & 7) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar6;
  }
  uVar5 = uVar6 + 8;
  lVar3 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 8;
  }
  lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *param_1 = uVar7;
  uVar6 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar7 = *(undefined8 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  param_1[2] = uVar7;
  uVar5 = uVar6 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar6 = uVar5 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 00629448; end: 0062947b; -[FCNSDecoder decodeCMTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00629448(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  FUN_00629298(param_1,param_2);
  puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
  uVar6 = *puVar2;
  if ((uVar6 & 7) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar6;
  }
  uVar5 = uVar6 + 8;
  lVar3 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 8;
  }
  lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  uVar7 = *(undefined8 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  uVar6 = uVar5 + 8;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 8;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar7 = *(undefined8 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar5 = uVar6 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar6 = *puVar2;
    uVar5 = uVar6 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
    lVar3 = (long)_DAT_00ac5b90;
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar6);
  *puVar2 = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar6 = uVar5 + 4;
  if (*(ulong *)(param_2 + lVar3) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_2 + _DAT_00ac5b8c);
    uVar5 = *puVar2;
    uVar6 = uVar5 + 4;
    lVar4 = *(long *)(param_2 + _DAT_00ac5b88);
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar5);
  *puVar2 = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}



/* Entry: 0062947c; end: 006294ff; -[FCNSDecoder decodeCMTimeMapping] */

void FUN_0062947c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_00629298(&uStack_60,param_2);
  FUN_00629298(&uStack_48,param_2);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  FUN_00629298(&uStack_60,param_2);
  FUN_00629298(&uStack_48,param_2);
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  return;
}



/* Entry: 00629500; end: 00629527; -[FCNSDecoder decodeUIEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00629500(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = **(ulong **)(param_1 + _DAT_00ac5b8c);
  if ((uVar2 & 7) != 0) {
    **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar2 & 0xfffffffffffffff8) + 8;
  }
  lVar3 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar1;
  uVar2 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar3) < uVar2) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar3 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    uVar2 = uVar4 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar4);
  *puVar1 = uVar2;
  if (*(ulong *)(param_1 + lVar3) < uVar2 + 8) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    lVar3 = (long)_DAT_00ac5b90;
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_006295e0;
LAB_006296a4:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar1;
    lVar3 = (long)_DAT_00ac5b90;
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_00629628;
  }
  else {
    *puVar1 = uVar2 + 8;
    uVar2 = uVar2 + 0x10;
    if (*(ulong *)(param_1 + lVar3) < uVar2) goto LAB_006296a4;
LAB_006295e0:
    *puVar1 = uVar2;
    uVar2 = uVar2 + 8;
    if (uVar2 <= *(ulong *)(param_1 + lVar3)) goto LAB_00629628;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  &PTR____CFConstantStringClassReference_00a478a0,
                  &PTR____CFConstantStringClassReference_00a479a0);
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar1 + 8;
LAB_00629628:
  *puVar1 = uVar2;
  return uVar5;
}



/* Entry: 00629528; end: 006296f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00629528(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = (long)_DAT_00ac5b90;
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar1;
  uVar4 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar2) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar2 = (long)_DAT_00ac5b90;
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar1;
    uVar4 = uVar3 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar1 = uVar4;
  if (*(ulong *)(param_1 + lVar2) < uVar4 + 8) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_00ac5b90;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_006295e0;
LAB_006296a4:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_00ac5b90;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_00629628;
  }
  else {
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (*(ulong *)(param_1 + lVar2) < uVar4) goto LAB_006296a4;
LAB_006295e0:
    *puVar1 = uVar4;
    uVar4 = uVar4 + 8;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_00629628;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  &PTR____CFConstantStringClassReference_00a478a0,
                  &PTR____CFConstantStringClassReference_00a479a0);
  puVar1 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar1 + 8;
LAB_00629628:
  *puVar1 = uVar4;
  return uVar5;
}



/* Entry: 006296f4; end: 00629817;  */

undefined * FUN_006296f4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar4;
  ulong uVar5;
  uint uStack_64;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _class_copyPropertyList(param_1,&uStack_64);
  if (uStack_64 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + uVar5 * 8);
      _property_getName(lVar4);
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _property_copyAttributeValue(lVar4,&UNK_0090e33d);
      if (lVar4 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x00792220();
        iVar1 = (int)puVar3;
        func_0x007878e0();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00791ec0(&PTR____CFConstantStringClassReference_00a314a0);
          func_0x007878e0();
          if (iVar1 != 0) goto LAB_0062975c;
        }
        else {
LAB_0062975c:
          func_0x0077e720(puVar2);
        }
        _free(lVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uStack_64);
  }
  _free(param_1);
  return puVar2;
}



/* Entry: 00629818; end: 006298ef;  */

undefined * FUN_00629818(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  _objc_getAssociatedObject();
  if (puVar1 != (undefined *)0x0) {
    return puVar1;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  puVar2 = param_1;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSObject_00ac2b58;
  _objc_opt_class();
  if (puVar2 != puVar3) {
    do {
      func_0x007830e0(puVar2);
      func_0x0077e760(puVar1);
      func_0x00792520();
      puVar3 = PTR__OBJC_CLASS___NSObject_00ac2b58;
      _objc_opt_class();
    } while (puVar2 != puVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f180(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_setAssociatedObject(param_1,param_2,puVar1,0x301);
  return puVar1;
}



/* Entry: 006298f0; end: 0062992b;  */

void FUN_006298f0(void)

{
  return;
}



/* Entry: 0062992c; end: 0062a0e7;  */

/* WARNING: Removing unreachable block (ram,0x00629e8c) */
/* WARNING: Removing unreachable block (ram,0x0062a078) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0062992c(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = param_1;
  puVar2 = param_3;
  FUN_0062a0e8();
  if (((ulong)puVar11 & 1) == 0) {
    puVar2 = param_1;
    func_0x0078a7e0();
    if ((((ulong)puVar2 & 1) == 0) &&
       (puVar2 = param_1, func_0x0078a800(), ((ulong)puVar2 & 1) == 0)) {
      func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
      puVar2 = param_1;
      func_0x00780220();
      _NSStringFromClass();
      if (puVar2 == (ulong *)0x0) {
        func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
      }
      else {
        func_0x0077b940();
      }
      func_0x007827a0(param_1);
      func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
      puVar11 = *(ulong **)((long)param_3 + (long)_DAT_00ac5bac);
      puVar2 = puVar11;
      _CFDictionaryGetCount(puVar11);
      _CFDictionarySetValue(puVar11,param_1,(long)puVar2 + 1);
      puVar2 = param_1;
    }
    else {
      func_0x00793b40(param_1);
      puVar11 = param_1;
      func_0x00780240();
      puVar3 = param_1;
      func_0x0078a800();
      lVar4 = *(long *)((long)param_3 + (long)_DAT_00ac5bb0);
      _CFDictionaryGetValue(lVar4,puVar11);
      uVar7 = lVar4 - 1;
      puVar2 = param_1;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = puVar11;
        func_0x0077b920();
        if (lVar4 == 0 || uVar7 == 0x7fffffffffffffff) {
          uVar10 = *(ulong *)((long)param_3 + (long)_DAT_00ac5bb0);
          uVar7 = uVar10;
          _CFDictionaryGetCount();
          _CFDictionarySetValue(uVar10,puVar11,uVar7 + 1);
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          _NSStringFromClass();
          func_0x0077bcc0();
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
          if (puVar11 != (ulong *)0x0) {
            _strlen();
          }
          func_0x0077ee80(uVar9);
          uVar10 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar10 & 3) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          func_0x00780e80();
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          puVar11 = puVar3;
          func_0x00780ea0();
          while (puVar11 != (ulong *)0x0) {
            puVar12 = (ulong *)0x0;
            do {
              while( true ) {
                lVar4 = *(long *)((long)puVar12 * 8);
                func_0x0077bcc0();
                uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
                if (lVar4 == 0) break;
                _strlen();
                func_0x0077ee80(uVar9);
                puVar12 = (ulong *)((long)puVar12 + 1);
                if (puVar11 == puVar12) goto LAB_00629e38;
              }
              func_0x0077ee80(uVar9);
              puVar12 = (ulong *)((long)puVar12 + 1);
            } while (puVar11 != puVar12);
LAB_00629e38:
            puVar11 = puVar3;
            func_0x00780ea0();
          }
        }
        lVar8 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
        lVar4 = lVar8;
        _CFDictionaryGetCount(lVar8);
        _CFDictionarySetValue(lVar8,param_1,lVar4 + 1);
        if (uVar7 < 0x100) {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        else if (uVar7 >> 0x10 == 0) {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar7 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar7 & 1) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        else {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar7 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar7 & 3) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        func_0x0077ee80(uVar9);
        puVar12 = puVar3;
        func_0x00780ea0();
        while (puVar11 = (ulong *)0x0, puVar12 != (ulong *)0x0) {
          puVar11 = (ulong *)0x0;
          do {
            while (puVar5 = param_1, func_0x00793600(), puVar5 != (ulong *)0x0) {
              func_0x0077b940();
              puVar11 = (ulong *)((long)puVar11 + 1);
              if (puVar12 == puVar11) goto LAB_0062a020;
            }
            func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
            puVar11 = (ulong *)((long)puVar11 + 1);
          } while (puVar12 != puVar11);
LAB_0062a020:
          puVar12 = puVar3;
          func_0x00780ea0();
        }
      }
      else {
        func_0x00783120();
        puVar3 = puVar11;
        func_0x00783100();
        if (lVar4 == 0 || uVar7 == 0x7fffffffffffffff) {
          uVar10 = *(ulong *)((long)param_3 + (long)_DAT_00ac5bb0);
          uVar7 = uVar10;
          _CFDictionaryGetCount();
          _CFDictionarySetValue(uVar10,puVar11,uVar7 + 1);
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          _NSStringFromClass();
          func_0x0077bcc0();
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
          if (puVar11 != (ulong *)0x0) {
            _strlen();
          }
          func_0x0077ee80(uVar9);
          uVar10 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar10 & 3) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar10 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar10 & 7) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          if (*puVar3 != 0) {
            uVar10 = 2;
            do {
              func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
              bVar1 = uVar10 <= *puVar3;
              uVar10 = (ulong)((int)uVar10 + 1);
            } while (bVar1);
          }
        }
        lVar8 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
        lVar4 = lVar8;
        _CFDictionaryGetCount(lVar8);
        _CFDictionarySetValue(lVar8,param_1,lVar4 + 1);
        if (uVar7 < 0x100) {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        else if (uVar7 >> 0x10 == 0) {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar7 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar7 & 1) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        else {
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          uVar7 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
          func_0x007882e0();
          if ((uVar7 & 3) != 0) {
            func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
          }
          uVar9 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
        }
        func_0x0077ee80(uVar9);
        func_0x007827c0(param_1);
        puVar11 = param_1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return puVar11;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)((long)puVar2 + (long)_DAT_00ac5bac);
  _CFDictionaryGetValue(lVar6,puVar11);
  uVar7 = 0x7fffffffffffffff;
  if (lVar6 != 0) {
    uVar7 = lVar6 - 1;
  }
  if (0xff < uVar7) {
    if (uVar7 >> 0x10 == 0) {
      func_0x0077ee80(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
      uVar7 = *(ulong *)((long)puVar2 + (long)_DAT_00ac5ba8);
      func_0x007882e0();
      if ((uVar7 & 1) != 0) {
        func_0x00784800(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
      }
      uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8);
    }
    else {
      if (uVar7 == 0x7fffffffffffffff) {
        return (ulong *)0x0;
      }
      func_0x0077ee80(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
      uVar7 = *(ulong *)((long)puVar2 + (long)_DAT_00ac5ba8);
      func_0x007882e0();
      if ((uVar7 & 3) != 0) {
        func_0x00784800(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
      }
      uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8);
    }
    func_0x0077ee80(uVar9);
    return (ulong *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x0077ee80(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
  func_0x0077ee80(*(undefined8 *)((long)puVar2 + (long)_DAT_00ac5ba8));
  return (ulong *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0062a0e8; end: 0062a283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0062a0e8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + _DAT_00ac5bac);
  _CFDictionaryGetValue(lVar1,param_1);
  uVar2 = 0x7fffffffffffffff;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 1;
  }
  if (uVar2 < 0x100) {
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    return 1;
  }
  if (uVar2 >> 0x10 == 0) {
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    uVar2 = *(ulong *)(param_2 + _DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 1) != 0) {
      func_0x00784800(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_00ac5ba8);
  }
  else {
    if (uVar2 == 0x7fffffffffffffff) {
      return 0;
    }
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    uVar2 = *(ulong *)(param_2 + _DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 3) != 0) {
      func_0x00784800(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_00ac5ba8);
  }
  func_0x0077ee80(uVar3);
  return 1;
}



/* Entry: 0062a284; end: 0062a2df;  */

void FUN_0062a284(void)

{
  return;
}



/* Entry: 0062a2e0; end: 0062a5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062a2e0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  dword *pdVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  dword *pdVar8;
  long lVar9;
  undefined1 auStack_120 [128];
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined2 uStack_62;
  
  puVar2 = param_1;
  func_0x0077bcc0();
  puVar3 = param_1;
  func_0x00780220();
  puVar4 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    puVar3 = param_1;
    FUN_0062a0e8(param_1,param_3);
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
    lVar7 = *(long *)(param_3 + _DAT_00ac5bac);
    lVar9 = lVar7;
    _CFDictionaryGetCount(lVar7);
    _CFDictionarySetValue(lVar7,param_1,lVar9 + 1);
    uVar5 = *(undefined8 *)(param_3 + _DAT_00ac5ba8);
    if (puVar2 != (undefined1 *)0x0) {
      auStack_120[0] = 0x18;
      goto LAB_0062a3c4;
    }
    auStack_120[0] = 0x31;
  }
  else {
    puVar3 = param_1;
    FUN_0062a5c8(param_1,param_3);
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
    lVar7 = *(long *)(param_3 + _DAT_00ac5bb4);
    lVar9 = lVar7;
    _CFDictionaryGetCount(lVar7);
    _CFDictionarySetValue(lVar7,param_1,lVar9 + 1);
    uVar5 = *(undefined8 *)(param_3 + _DAT_00ac5ba8);
    if (puVar2 != (undefined1 *)0x0) {
      auStack_120[0] = 8;
LAB_0062a3c4:
      func_0x0077ee80(uVar5);
      uVar5 = *(undefined8 *)(param_3 + _DAT_00ac5ba8);
      _strlen(puVar2);
      goto LAB_0062a5a4;
    }
    auStack_120[0] = 0x30;
  }
  func_0x0077ee80(uVar5);
  uVar6 = *(ulong *)(param_3 + _DAT_00ac5ba8);
  func_0x007882e0();
  if ((uVar6 & 1) != 0) {
    func_0x00784800(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
  }
  uVar5 = *(undefined8 *)(param_3 + _DAT_00ac5ba8);
  puVar2 = param_1;
  _CFStringGetCharactersPtr();
  puVar3 = param_1;
  _CFStringGetLength();
  if ((puVar2 == (undefined1 *)0x0) && (uStack_62 = 0, 0 < (long)puVar3)) {
    lStack_88 = 0;
    puVar2 = param_1;
    puStack_a0 = param_1;
    puStack_80 = puVar3;
    _CFStringGetCharactersPtr();
    puStack_98 = puVar2;
    puStack_90 = (undefined1 *)0x0;
    if (puVar2 == (undefined1 *)0x0) {
      _CFStringGetCStringPtr(param_1,0x600);
      puStack_90 = param_1;
    }
    lVar7 = 0;
    pdVar8 = (dword *)0x0;
    lVar9 = 0x40;
    lStack_78 = 0;
    puStack_70 = (undefined1 *)0x0;
    do {
      pdVar1 = pdVar8;
      if ((undefined1 *)((long)&MACH_HEADER.magic + 3) < pdVar8) {
        pdVar1 = &MACH_HEADER.cputype;
      }
      if (((((long)pdVar8 < (long)puStack_80) && (puStack_98 == (undefined1 *)0x0)) &&
          (puStack_90 == (undefined1 *)0x0)) &&
         ((long)puStack_70 <= (long)pdVar8 || (long)pdVar8 < lStack_78)) {
        lStack_78 = (long)pdVar8 - (long)pdVar1;
        puStack_70 = (undefined1 *)(lStack_78 + 0x40);
        if ((long)puStack_80 <= lStack_78 + 0x40) {
          puStack_70 = puStack_80;
        }
        puVar2 = puStack_80;
        if (lVar9 - (long)pdVar1 <= (long)puStack_80) {
          puVar2 = (undefined1 *)(lVar9 - (long)pdVar1);
        }
        _CFStringGetCharacters
                  (puStack_a0,lStack_78 + lStack_88,puVar2 + (long)((long)pdVar1 + lVar7),
                   auStack_120);
      }
      func_0x0077ee80(uVar5);
      pdVar8 = (dword *)((long)pdVar8 + 1);
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + 1;
    } while ((dword *)puVar3 != pdVar8);
  }
LAB_0062a5a4:
  func_0x0077ee80(uVar5);
  return;
}



/* Entry: 0062a5c8; end: 0062aecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0062a5c8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + _DAT_00ac5bb4);
  _CFDictionaryGetValue(lVar1,param_1);
  uVar2 = 0x7fffffffffffffff;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 1;
  }
  if (uVar2 < 0x100) {
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    return 1;
  }
  if (uVar2 >> 0x10 == 0) {
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    uVar2 = *(ulong *)(param_2 + _DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 1) != 0) {
      func_0x00784800(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_00ac5ba8);
  }
  else {
    if (uVar2 == 0x7fffffffffffffff) {
      return 0;
    }
    func_0x0077ee80(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    uVar2 = *(ulong *)(param_2 + _DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 3) != 0) {
      func_0x00784800(*(undefined8 *)(param_2 + _DAT_00ac5ba8));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_00ac5ba8);
  }
  func_0x0077ee80(uVar3);
  return 1;
}



/* Entry: 0062aecc; end: 0062af03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062aecc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = 1;
  func_0x0077ee80(*(undefined8 *)(param_3 + _DAT_00ac5ba8),param_2,&uStack_11,1);
  return;
}



/* Entry: 0062af04; end: 0062b7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062af04(undefined **param_1,undefined8 param_2,undefined **param_3,dword *param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_279;
  dword adStack_278 [96];
  dword adStack_f8 [32];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar6 = param_1;
  ppuVar12 = param_3;
  FUN_0062a0e8(param_1,param_3);
  if (((ulong)ppuVar6 & 1) != 0) goto LAB_0062b734;
  ppuVar12 = param_1;
  func_0x00789f00();
  ppuVar6 = param_1;
  func_0x00780e80();
  if ((ppuVar6 == (undefined **)((long)&MACH_HEADER.magic + 1)) && (ppuVar12 != (undefined **)0x0))
  {
    ppuVar6 = *(undefined ***)((long)param_3 + (long)_DAT_00ac5ba4);
    func_0x00780860();
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    param_4 = adStack_f8;
    ppuVar7 = ppuVar12;
    func_0x00780ea0();
    if (ppuVar7 != (undefined **)0x0) {
      lVar9 = *plStack_2b0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_2b0 != lVar9) {
            _objc_enumerationMutation(ppuVar12);
          }
          uVar8 = *(undefined8 *)(lStack_2b8 + (long)ppuVar13 * 8);
          puVar4 = PTR__OBJC_CLASS___NSArray_00ac2c28;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
          ppuVar2 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,puVar4);
          if (((ulong)ppuVar2 & 1) == 0) {
            func_0x00793600();
          }
          else {
            func_0x00787200(uVar8);
            func_0x00789e20();
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar7 != ppuVar13);
        param_4 = adStack_f8;
        ppuVar7 = ppuVar12;
        func_0x00780ea0();
      } while (ppuVar7 != (undefined **)0x0);
    }
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = *(undefined ***)((long)param_3 + (long)_DAT_00ac5ba8);
      puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
      ppuVar12 = &puStack_3a0;
      param_4 = (dword *)((long)&MACH_HEADER.magic + 1);
      func_0x0077ee80();
    }
    else {
      func_0x0077b940();
      ppuVar12 = param_3;
    }
    goto LAB_0062b734;
  }
  ppuVar12 = param_1;
  func_0x00789f00();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar6 = param_1;
    func_0x00780220();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_class();
    if (ppuVar6 == ppuVar7) {
      lVar3 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
      lVar9 = lVar3;
      _CFDictionaryGetCount(lVar3);
      _CFDictionarySetValue(lVar3,param_1,lVar9 + 1);
      uVar5 = 0x19;
    }
    else {
      uVar5 = 9;
    }
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,uVar5);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    uVar1 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar1 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    }
    ppuVar2 = param_1;
    func_0x00780e80();
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)ppuVar2);
    param_4 = &MACH_HEADER.cputype;
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    puStack_3a0 = (undefined *)0x0;
    uStack_390 = 0x2020000000;
    uStack_388 = 0;
    puStack_3d8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_3d0 = 0xc2000000;
    pcStack_3c8 = FUN_0062b7a4;
    puStack_3c0 = &UNK_00a0b368;
    ppuVar12 = &puStack_3d8;
    ppuStack_3b8 = &puStack_3a0;
    ppuStack_3b0 = param_3;
    ppuStack_3a8 = ppuVar2;
    ppuStack_398 = &puStack_3a0;
    func_0x00782b60(param_1);
    ppuVar13 = (undefined **)ppuStack_398[3];
    while (ppuVar13 < ppuVar2) {
      uStack_279 = 0;
      func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
      uStack_279 = 0;
      ppuVar12 = (undefined **)&uStack_279;
      param_4 = (dword *)((long)&MACH_HEADER.magic + 1);
      func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
      ppuVar13 = (undefined **)(ppuStack_398[3] + 1);
      ppuStack_398[3] = (undefined *)ppuVar13;
    }
    if (ppuVar6 != ppuVar7) {
      lVar3 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
      lVar9 = lVar3;
      _CFDictionaryGetCount();
      ppuVar12 = (undefined **)(lVar9 + 1);
      _CFDictionarySetValue(lVar3,param_1);
    }
    ppuVar6 = &puStack_3a0;
    __Block_object_dispose(ppuVar6,8);
    goto LAB_0062b734;
  }
  ppuVar7 = param_1;
  func_0x0077eae0();
  func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08);
  func_0x00783680();
  puVar4 = *(undefined **)((long)param_3 + (long)_DAT_00ac5bb8);
  func_0x00789f00();
  if (puVar4 == (undefined *)0x0) {
LAB_0062b1a0:
    puVar4 = PTR_PTR_00ac35a8;
    _objc_opt_new();
    _objc_autorelease();
    *(undefined ***)(puVar4 + 8) = ppuVar12;
    *(undefined ***)(puVar4 + 0x10) = ppuVar7;
    func_0x0078f4e0(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5bb8));
  }
  else {
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    ppuVar6 = ppuVar7;
    func_0x00780ea0();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar7 = *(undefined ***)(puVar4 + 0x10);
    }
    else {
      puVar10 = (undefined *)0x0;
      lVar9 = *plStack_2f0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_2f0 != lVar9) {
            _objc_enumerationMutation(ppuVar7);
          }
          uVar1 = *(ulong *)(puVar4 + 0x10);
          func_0x00780c20();
          if ((uVar1 & 1) == 0) {
            if (puVar10 == (undefined *)0x0) {
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
              func_0x0077f120();
            }
            func_0x0077e720(puVar10);
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar6 != ppuVar13);
        ppuVar6 = ppuVar7;
        func_0x00780ea0();
      } while (ppuVar6 != (undefined **)0x0);
      ppuVar7 = *(undefined ***)(puVar4 + 0x10);
      if (puVar10 != (undefined *)0x0) {
        func_0x0077f160();
        goto LAB_0062b1a0;
      }
    }
  }
  lVar9 = *(long *)((long)param_3 + (long)_DAT_00ac5bb0);
  _CFDictionaryGetValue(lVar9,puVar4);
  uVar1 = lVar9 - 1;
  if (lVar9 == 0 || uVar1 == 0x7fffffffffffffff) {
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_00ac5bb0);
    uVar1 = uVar11;
    _CFDictionaryGetCount();
    _CFDictionarySetValue(uVar11,puVar4,uVar1 + 1);
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x1e);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    lVar9 = *(long *)(puVar4 + 8);
    func_0x0077bcc0();
    uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
    if (lVar9 == 0) {
      puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
      func_0x0077ee80(uVar8);
    }
    else {
      _strlen();
      func_0x0077ee80(uVar8);
    }
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar11 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    }
    ppuVar12 = ppuVar7;
    func_0x00780e80();
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)ppuVar12);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    ppuVar12 = ppuVar7;
    func_0x00780ea0();
    if (ppuVar12 != (undefined **)0x0) {
      lVar9 = *plStack_330;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if (*plStack_330 != lVar9) {
            _objc_enumerationMutation(ppuVar7);
          }
          lVar3 = *(long *)(lStack_338 + (long)ppuVar6 * 8);
          func_0x00781e40();
          func_0x0077bcc0();
          uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8);
          if (lVar3 == 0) {
            puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
            func_0x0077ee80(uVar8);
          }
          else {
            _strlen();
            func_0x0077ee80(uVar8);
          }
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar12 != ppuVar6);
        ppuVar12 = ppuVar7;
        func_0x00780ea0();
      } while (ppuVar12 != (undefined **)0x0);
    }
  }
  lVar3 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
  lVar9 = lVar3;
  _CFDictionaryGetCount(lVar3);
  _CFDictionarySetValue(lVar3,param_1,lVar9 + 1);
  if (uVar1 < 0x100) {
    puStack_3a0._0_1_ = 0x1f;
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,(char)uVar1);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
  }
  else if (uVar1 >> 0x10 == 0) {
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x20);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar11 & 1) != 0) {
      func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    }
    puStack_3a0 = (undefined *)CONCAT62(puStack_3a0._2_6_,(short)uVar1);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
  }
  else {
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x21);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar11 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    }
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)uVar1);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
  }
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined *)0x0;
  ppuVar12 = &puStack_380;
  param_4 = adStack_278;
  ppuVar13 = ppuVar7;
  func_0x00780ea0();
  ppuVar6 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    lVar9 = *plStack_370;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_370 != lVar9) {
          _objc_enumerationMutation(ppuVar7);
        }
        ppuVar6 = param_1;
        func_0x00789f00();
        if (ppuVar6 == (undefined **)0x0) {
          puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
          func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
        }
        else {
          func_0x0077b940();
        }
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar13 != ppuVar12);
      ppuVar12 = &puStack_380;
      param_4 = adStack_278;
      ppuVar13 = ppuVar7;
      func_0x00780ea0();
      ppuVar6 = (undefined **)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
LAB_0062b734:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_78) {
    ___stack_chk_fail();
    __Block_object_dispose(&puStack_3a0,8);
    __Unwind_Resume();
    lVar9 = 8;
    __Block_object_dispose(&puStack_3a0);
    __Unwind_Resume();
    __Unwind_Resume();
    if (ppuVar12 == (undefined **)0x0) {
      func_0x0077ee80(*(undefined8 *)(ppuVar6[5] + _DAT_00ac5ba8));
      puVar4 = ppuVar6[5];
    }
    else {
      func_0x0077b940(ppuVar12);
      puVar4 = ppuVar6[5];
    }
    if (lVar9 == 0) {
      func_0x0077ee80(*(undefined8 *)(puVar4 + _DAT_00ac5ba8));
    }
    else {
      func_0x0077b940(lVar9);
    }
    puVar4 = (undefined *)(*(long *)(*(long *)(ppuVar6[4] + 8) + 0x18) + 1);
    *(undefined **)(*(long *)(ppuVar6[4] + 8) + 0x18) = puVar4;
    if (ppuVar6[6] <= puVar4) {
      *(undefined1 *)param_4 = 1;
    }
    return;
  }
  return;
}



/* Entry: 0062b7a4; end: 0062b867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062b7a4(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_3 == 0) {
    uStack_32 = 0;
    func_0x0077ee80(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_00ac5ba8),param_2,
                    &uStack_32,1);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  else {
    func_0x0077b940(param_3);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (param_2 == 0) {
    uStack_31 = 0;
    func_0x0077ee80(*(undefined8 *)(lVar2 + _DAT_00ac5ba8));
  }
  else {
    func_0x0077b940(param_2);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(long *)(lVar2 + 0x18) + 1;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  if (*(ulong *)(param_1 + 0x30) <= uVar1) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 0062b868; end: 0062bfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062b868(uint *param_1,undefined8 param_2,uint *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint *unaff_x21;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar13;
  uint *unaff_x28;
  long lVar14;
  long lVar15;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_454;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  uint auStack_394 [33];
  long lStack_310;
  uint *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  uint *puStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  uint *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint auStack_244 [33];
  long lStack_1c0;
  uint *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  uint *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  uint *puStack_180;
  uint *puStack_178;
  uint *puStack_170;
  uint *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  uint *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint auStack_f4 [33];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar3 = param_1;
  puVar9 = param_3;
  FUN_0062a0e8(param_1,param_3);
  if (((ulong)puVar3 & 1) == 0) {
    unaff_x25 = param_1;
    func_0x00780220();
    unaff_x22 = (uint *)PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_class();
    if (unaff_x25 == unaff_x22) {
      lVar13 = *(long *)((long)param_3 + (long)_DAT_00ac5bac);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,param_1,lVar14 + 1);
      uVar8 = 0x1a;
    }
    else {
      uVar8 = 10;
    }
    unaff_x26 = &DAT_00ac5000;
    auStack_f4[0] = CONCAT31(auStack_f4[0]._1_3_,uVar8);
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    uVar2 = *(ulong *)((long)param_3 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    }
    unaff_x23 = param_1;
    func_0x00780e80();
    auStack_f4[0] = (uint)unaff_x23;
    func_0x0077ee80(*(undefined8 *)((long)param_3 + (long)_DAT_00ac5ba8));
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar9 = (uint *)&uStack_140;
    puVar3 = param_1;
    func_0x00780ea0();
    if (puVar3 == (uint *)0x0) {
      unaff_x28 = (uint *)0x0;
      puVar10 = unaff_x23;
      if (unaff_x23 != (uint *)0x0) goto LAB_0062ba44;
      unaff_x21 = (uint *)0x0;
    }
    else {
      lVar14 = 0;
      lVar13 = *plStack_130;
      unaff_x24 = puVar3;
      puStack_148 = unaff_x25;
      do {
        puVar10 = (uint *)0x0;
        do {
          lVar15 = lVar14;
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(param_1);
          }
          puVar3 = *(uint **)(lStack_138 + (long)puVar10 * 8);
          if (puVar3 == (uint *)0x0) {
            puVar3 = *(uint **)((long)param_3 + (long)_DAT_00ac5ba8);
            auStack_f4[0] = auStack_f4[0] & 0xffffff00;
            puVar9 = auStack_f4;
            func_0x0077ee80();
          }
          else {
            puVar9 = param_3;
            func_0x0077b940();
          }
          if (unaff_x23 <= (uint *)(lVar15 + 1U)) goto LAB_0062ba34;
          lVar14 = lVar15 + 1;
          puVar10 = (uint *)((long)puVar10 + 1);
        } while (unaff_x24 != puVar10);
        puVar9 = (uint *)&uStack_140;
        puVar3 = param_1;
        func_0x00780ea0();
        unaff_x24 = puVar3;
      } while (puVar3 != (uint *)0x0);
LAB_0062ba34:
      unaff_x28 = (uint *)(lVar15 + 1);
      unaff_x21 = (uint *)((long)unaff_x23 - (long)unaff_x28);
      puVar10 = unaff_x21;
      unaff_x25 = puStack_148;
      if (unaff_x28 <= unaff_x23 && unaff_x21 != (uint *)0x0) {
LAB_0062ba44:
        do {
          puVar3 = *(uint **)((long)param_3 + (long)_DAT_00ac5ba8);
          auStack_f4[0] = auStack_f4[0] & 0xffffff00;
          puVar9 = auStack_f4;
          func_0x0077ee80();
          puVar10 = (uint *)((long)puVar10 + -1);
          unaff_x21 = (uint *)0x0;
        } while (puVar10 != (uint *)0x0);
      }
    }
    unaff_x27 = &DAT_00ac5000;
    if (unaff_x25 != unaff_x22) {
      param_3 = *(uint **)((long)param_3 + (long)_DAT_00ac5bac);
      puVar9 = param_3;
      _CFDictionaryGetCount();
      puVar9 = (uint *)((long)puVar9 + 1);
      puVar3 = param_3;
      _CFDictionarySetValue(param_3,param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_158 = 0x62bad8;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = puVar3;
  puVar10 = puVar9;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = param_3;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_0062a0e8();
  if (((ulong)puVar5 & 1) == 0) {
    unaff_x25 = puVar3;
    func_0x00780220();
    unaff_x22 = (uint *)PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    _objc_opt_class();
    if (unaff_x25 == unaff_x22) {
      lVar13 = *(long *)((long)puVar9 + (long)_DAT_00ac5bac);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,puVar3,lVar14 + 1);
      uVar8 = 0x1b;
    }
    else {
      uVar8 = 0xb;
    }
    unaff_x26 = &DAT_00ac5000;
    auStack_244[0] = CONCAT31(auStack_244[0]._1_3_,uVar8);
    func_0x0077ee80(*(undefined8 *)((long)puVar9 + (long)_DAT_00ac5ba8));
    uVar2 = *(ulong *)((long)puVar9 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)puVar9 + (long)_DAT_00ac5ba8));
    }
    unaff_x23 = puVar3;
    func_0x00780e80();
    auStack_244[0] = (uint)unaff_x23;
    func_0x0077ee80(*(undefined8 *)((long)puVar9 + (long)_DAT_00ac5ba8));
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    puVar10 = (uint *)&uStack_290;
    puVar4 = puVar3;
    func_0x00780ea0();
    if (puVar4 == (uint *)0x0) {
      unaff_x28 = (uint *)0x0;
      puVar11 = unaff_x23;
      if (unaff_x23 != (uint *)0x0) goto LAB_0062bcb4;
      unaff_x21 = (uint *)0x0;
      puVar5 = (uint *)0x0;
    }
    else {
      puStack_298 = unaff_x25;
      lVar14 = 0;
      lVar13 = *plStack_280;
      do {
        puVar11 = (uint *)0x0;
        do {
          lVar15 = lVar14;
          if (*plStack_280 != lVar13) {
            _objc_enumerationMutation(puVar3);
          }
          puVar5 = *(uint **)(lStack_288 + (long)puVar11 * 8);
          if (puVar5 == (uint *)0x0) {
            puVar5 = *(uint **)((long)puVar9 + (long)_DAT_00ac5ba8);
            auStack_244[0] = auStack_244[0] & 0xffffff00;
            puVar10 = auStack_244;
            func_0x0077ee80();
          }
          else {
            puVar10 = puVar9;
            func_0x0077b940();
          }
          if (unaff_x23 <= (uint *)(lVar15 + 1U)) goto LAB_0062bca4;
          lVar14 = lVar15 + 1;
          puVar11 = (uint *)((long)puVar11 + 1);
        } while (puVar4 != puVar11);
        puVar10 = (uint *)&uStack_290;
        puVar4 = puVar3;
        func_0x00780ea0();
      } while (puVar4 != (uint *)0x0);
      puVar5 = (uint *)0x0;
LAB_0062bca4:
      unaff_x28 = (uint *)(lVar15 + 1);
      unaff_x21 = (uint *)((long)unaff_x23 - (long)unaff_x28);
      puVar11 = unaff_x21;
      unaff_x24 = puVar4;
      unaff_x25 = puStack_298;
      if (unaff_x28 <= unaff_x23 && unaff_x21 != (uint *)0x0) {
LAB_0062bcb4:
        do {
          puVar5 = *(uint **)((long)puVar9 + (long)_DAT_00ac5ba8);
          auStack_244[0] = auStack_244[0] & 0xffffff00;
          puVar10 = auStack_244;
          func_0x0077ee80();
          puVar11 = (uint *)((long)puVar11 + -1);
          unaff_x21 = (uint *)0x0;
        } while (puVar11 != (uint *)0x0);
      }
    }
    unaff_x27 = &DAT_00ac5000;
    if (unaff_x25 != unaff_x22) {
      puVar9 = *(uint **)((long)puVar9 + (long)_DAT_00ac5bac);
      puVar10 = puVar9;
      _CFDictionaryGetCount();
      puVar10 = (uint *)((long)puVar10 + 1);
      puVar5 = puVar9;
      _CFDictionarySetValue(puVar9,puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x62bd48;
  lStack_310 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = puVar5;
  puVar4 = puVar10;
  puStack_300 = unaff_x28;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  puStack_2e8 = unaff_x25;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = unaff_x22;
  puStack_2c8 = unaff_x21;
  puStack_2c0 = puVar9;
  puStack_2b8 = puVar3;
  ppuStack_2b0 = &puStack_160;
  FUN_0062a0e8();
  if (((ulong)puVar11 & 1) != 0) goto LAB_0062bf6c;
  puVar9 = puVar5;
  func_0x00780220();
  puVar3 = (uint *)PTR__OBJC_CLASS___NSMutableOrderedSet_00ac3300;
  _objc_opt_class();
  if (puVar9 == puVar3) {
    lVar13 = *(long *)((long)puVar10 + (long)_DAT_00ac5bac);
    lVar14 = lVar13;
    _CFDictionaryGetCount(lVar13);
    _CFDictionarySetValue(lVar13,puVar5,lVar14 + 1);
    uVar8 = 0x1c;
  }
  else {
    uVar8 = 0xc;
  }
  auStack_394[0] = CONCAT31(auStack_394[0]._1_3_,uVar8);
  func_0x0077ee80(*(undefined8 *)((long)puVar10 + (long)_DAT_00ac5ba8));
  uVar2 = *(ulong *)((long)puVar10 + (long)_DAT_00ac5ba8);
  func_0x007882e0();
  if ((uVar2 & 3) != 0) {
    func_0x00784800(*(undefined8 *)((long)puVar10 + (long)_DAT_00ac5ba8));
  }
  puVar6 = puVar5;
  func_0x00780e80();
  auStack_394[0] = (uint)puVar6;
  func_0x0077ee80(*(undefined8 *)((long)puVar10 + (long)_DAT_00ac5ba8));
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  puVar4 = (uint *)&uStack_3e0;
  puVar7 = puVar5;
  func_0x00780ea0();
  if (puVar7 == (uint *)0x0) {
    if (puVar6 != (uint *)0x0) goto LAB_0062bf24;
    puVar11 = (uint *)0x0;
  }
  else {
    lVar14 = 0;
    lVar13 = *plStack_3d0;
    do {
      puVar12 = (uint *)0x0;
      do {
        lVar15 = lVar14;
        if (*plStack_3d0 != lVar13) {
          _objc_enumerationMutation(puVar5);
        }
        puVar11 = *(uint **)(lStack_3d8 + (long)puVar12 * 8);
        if (puVar11 == (uint *)0x0) {
          puVar11 = *(uint **)((long)puVar10 + (long)_DAT_00ac5ba8);
          auStack_394[0] = auStack_394[0] & 0xffffff00;
          puVar4 = auStack_394;
          func_0x0077ee80();
        }
        else {
          puVar4 = puVar10;
          func_0x0077b940();
        }
        if (puVar6 <= (uint *)(lVar15 + 1U)) goto LAB_0062bf14;
        lVar14 = lVar15 + 1;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar7 != puVar12);
      puVar4 = (uint *)&uStack_3e0;
      puVar7 = puVar5;
      func_0x00780ea0();
    } while (puVar7 != (uint *)0x0);
    puVar11 = (uint *)0x0;
LAB_0062bf14:
    bVar1 = (uint *)(lVar15 + 1) <= puVar6;
    puVar6 = (uint *)((long)puVar6 - (lVar15 + 1));
    if (bVar1 && puVar6 != (uint *)0x0) {
LAB_0062bf24:
      do {
        puVar11 = *(uint **)((long)puVar10 + (long)_DAT_00ac5ba8);
        auStack_394[0] = auStack_394[0] & 0xffffff00;
        puVar4 = auStack_394;
        func_0x0077ee80();
        puVar6 = (uint *)((long)puVar6 + -1);
      } while (puVar6 != (uint *)0x0);
    }
  }
  if (puVar9 != puVar3) {
    puVar11 = *(uint **)((long)puVar10 + (long)_DAT_00ac5bac);
    puVar4 = puVar11;
    _CFDictionaryGetCount();
    puVar4 = (uint *)((long)puVar4 + 1);
    _CFDictionarySetValue(puVar11,puVar5);
  }
LAB_0062bf6c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = puVar11;
  FUN_0062a0e8();
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = puVar11;
    func_0x00780220();
    puVar3 = (uint *)PTR__OBJC_CLASS___NSMutableIndexSet_00ac35b0;
    _objc_opt_class();
    if (puVar9 == puVar3) {
      lVar13 = *(long *)((long)puVar4 + (long)_DAT_00ac5bac);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,puVar11,lVar14 + 1);
    }
    puStack_480 = &uStack_478;
    uStack_478 = 0;
    uStack_468 = 0x2020000000;
    uStack_460 = 0;
    puStack_4a0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_498 = 0xc2000000;
    pcStack_490 = FUN_0062c24c;
    puStack_488 = &UNK_00a0b398;
    puStack_470 = puStack_480;
    func_0x00782c40(puVar11);
    uVar8 = 0x2a;
    if (puVar9 != puVar3) {
      uVar8 = 0x2b;
    }
    uStack_4c0 = CONCAT71(uStack_4c0._1_7_,uVar8);
    func_0x0077ee80(*(undefined8 *)((long)puVar4 + (long)_DAT_00ac5ba8));
    uVar2 = *(ulong *)((long)puVar4 + (long)_DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar2 & 3) != 0) {
      func_0x00784800(*(undefined8 *)((long)puVar4 + (long)_DAT_00ac5ba8));
    }
    uStack_4c0 = CONCAT44(uStack_4c0._4_4_,*(undefined4 *)(puStack_470 + 3));
    func_0x0077ee80(*(undefined8 *)((long)puVar4 + (long)_DAT_00ac5ba8));
    uStack_4c0 = 0;
    uStack_4b0 = 0x2020000000;
    uStack_4a8 = 0;
    puStack_4b8 = &uStack_4c0;
    func_0x00782c40(puVar11);
    if ((ulong)puStack_4b8[3] < (ulong)*(uint *)(puStack_470 + 3)) {
      do {
        uStack_454 = 0;
        func_0x0077ee80(*(undefined8 *)((long)puVar4 + (long)_DAT_00ac5ba8));
        uStack_454 = 0;
        func_0x0077ee80(*(undefined8 *)((long)puVar4 + (long)_DAT_00ac5ba8));
        lVar14 = puStack_4b8[3];
        puStack_4b8[3] = lVar14 + 1U;
      } while (lVar14 + 1U < (ulong)*(uint *)(puStack_470 + 3));
    }
    if (puVar9 != puVar3) {
      lVar13 = *(long *)((long)puVar4 + (long)_DAT_00ac5bac);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,puVar11,lVar14 + 1);
    }
    __Block_object_dispose(&uStack_4c0,8);
    __Block_object_dispose(&uStack_478,8);
  }
  return;
}



/* Entry: 0062bfb8; end: 0062c24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062bfb8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = param_1;
  FUN_0062a0e8(param_1,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00780220();
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_00ac35b0;
    _objc_opt_class();
    if (puVar1 == puVar2) {
      lVar6 = *(long *)(param_3 + _DAT_00ac5bac);
      lVar5 = lVar6;
      _CFDictionaryGetCount(lVar6);
      _CFDictionarySetValue(lVar6,param_1,lVar5 + 1);
    }
    puStack_90 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_0062c24c;
    puStack_98 = &UNK_00a0b398;
    puStack_80 = puStack_90;
    func_0x00782c40(param_1);
    uVar4 = 0x2a;
    if (puVar1 != puVar2) {
      uVar4 = 0x2b;
    }
    uStack_d0 = CONCAT71(uStack_d0._1_7_,uVar4);
    func_0x0077ee80(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
    uVar3 = *(ulong *)(param_3 + _DAT_00ac5ba8);
    func_0x007882e0();
    if ((uVar3 & 3) != 0) {
      func_0x00784800(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,*(undefined4 *)(puStack_80 + 3));
    func_0x0077ee80(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    puStack_c8 = &uStack_d0;
    func_0x00782c40(param_1);
    if ((ulong)puStack_c8[3] < (ulong)*(uint *)(puStack_80 + 3)) {
      do {
        uStack_64 = 0;
        func_0x0077ee80(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
        uStack_64 = 0;
        func_0x0077ee80(*(undefined8 *)(param_3 + _DAT_00ac5ba8));
        lVar5 = puStack_c8[3];
        puStack_c8[3] = lVar5 + 1U;
      } while (lVar5 + 1U < (ulong)*(uint *)(puStack_80 + 3));
    }
    if (puVar1 != puVar2) {
      lVar6 = *(long *)(param_3 + _DAT_00ac5bac);
      lVar5 = lVar6;
      _CFDictionaryGetCount(lVar6);
      _CFDictionarySetValue(lVar6,param_1,lVar5 + 1);
    }
    __Block_object_dispose(&uStack_d0,8);
    __Block_object_dispose(&uStack_88,8);
  }
  return;
}


