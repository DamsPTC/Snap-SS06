/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046922c4; end: 104692313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046922c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c630) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104692314; end: 10469232f; -[SCAdSubscribeType matchSubscribe:unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104692314(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11308c630) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010469232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 104692330; end: 104692383;  */

void FUN_104692330(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104692384; end: 1046924eb;  */

int FUN_104692384(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104692400;
        goto LAB_1046923e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046923e4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104692400:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1046924ec; end: 10469252b;  */

void FUN_1046924ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26088;
  _swift_getWitnessTable(&UNK_10dd26088,&UNK_110796470);
  puRam000000011308c660 = puVar1;
  return;
}



/* Entry: 10469252c; end: 10469252f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469252c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *apuStack_a0 [2];
  undefined8 *apuStack_90 [2];
  
  ppuVar7 = apuStack_a0;
  uVar14 = *param_1;
  uVar13 = param_1[1];
  uVar12 = param_1[2];
  uVar11 = param_1[3];
  uVar8 = param_1[4];
  uVar10 = param_1[5];
  if (*(char *)(param_1 + 0xb) == '\x01') {
    uVar2 = param_1[9];
    uVar4 = param_1[10];
    uVar3 = param_1[7];
    uVar5 = param_1[8];
    uVar9 = param_1[6];
    FUN_104693c20();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_11308c668) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c670);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c678);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c680);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c688);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c690);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c698);
    *puVar1 = uVar14;
    puVar1[1] = uVar13;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a0);
    *puVar1 = uVar12;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a8);
    *puVar1 = uVar11;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b0);
    *puVar1 = uVar8;
    puVar1[1] = uVar10;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b8);
    *puVar1 = uVar9;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c0);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c8);
    *puVar1 = uVar5;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d0);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d8);
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
    ppuVar7 = apuStack_90;
    apuStack_90[0] = puVar6;
  }
  else {
    FUN_104693c20();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_11308c668) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c670);
    *puVar1 = uVar14;
    puVar1[1] = uVar13;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c678);
    *puVar1 = uVar12;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c680);
    *puVar1 = uVar11;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c688);
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c690);
    *puVar1 = uVar10;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c698);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    apuStack_a0[0] = puVar6;
  }
  ppuVar7[1] = param_1;
  _objc_msgSendSuper2(ppuVar7,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104692530; end: 1046929df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104692530(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308c668));
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308c670);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c678))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c678);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c680))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c680);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c688) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c688);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c690))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c690);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308c698);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6a0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6a0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6a8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6a8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308c6b0);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6b8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6b8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6c0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6c0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6c8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6c8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c6d0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c6d0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6d8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c6d8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046929e0; end: 104692e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046929e0(undefined8 param_1)

{
  double *pdVar1;
  double *pdVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return false;
  }
  plVar5 = &lStack_68;
  _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
  if (((ulong)plVar5 & 1) == 0) {
    return false;
  }
  if (*(char *)(unaff_x20 + _DAT_11308c668) != *(char *)(lStack_68 + _DAT_11308c668))
  goto LAB_104692e40;
  if (*(char *)(unaff_x20 + _DAT_11308c668) == '\x01') {
    pdVar1 = (double *)(unaff_x20 + _DAT_11308c698);
    pdVar2 = (double *)(lStack_68 + _DAT_11308c698);
    if (*(char *)(pdVar1 + 2) == '\x01') {
      if (*(char *)(pdVar2 + 2) != '\x01') goto LAB_104692e40;
    }
    else if (((*(char *)(pdVar2 + 2) == '\x01') || (*pdVar1 != *pdVar2)) || (pdVar1[1] != pdVar2[1])
            ) goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6a0) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6a0) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6a0) != *(double *)(lStack_68 + _DAT_11308c6a0)))
    goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6a8) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6a8) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6a8) != *(double *)(lStack_68 + _DAT_11308c6a8)))
    goto LAB_104692e40;
    pdVar1 = (double *)(unaff_x20 + _DAT_11308c6b0);
    pdVar2 = (double *)(lStack_68 + _DAT_11308c6b0);
    if (*(char *)(pdVar1 + 2) == '\x01') {
      if (*(char *)(pdVar2 + 2) != '\x01') goto LAB_104692e40;
    }
    else if (((*(char *)(pdVar2 + 2) == '\x01') || (*pdVar1 != *pdVar2)) || (pdVar1[1] != pdVar2[1])
            ) goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6b8) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6b8) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6b8) != *(double *)(lStack_68 + _DAT_11308c6b8)))
    goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6c0) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6c0) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6c0) != *(double *)(lStack_68 + _DAT_11308c6c0)))
    goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6c8) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6c8) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6c8) != *(double *)(lStack_68 + _DAT_11308c6c8)))
    goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c6d0) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c6d0) + 1) == '\x01') {
      if (cVar3 != '\x01') {
LAB_104692e40:
        _objc_release();
        return false;
      }
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c6d0) != *(double *)(lStack_68 + _DAT_11308c6d0)))
    goto LAB_104692e40;
    cVar6 = *(char *)((undefined8 *)(lStack_68 + _DAT_11308c6d8) + 1);
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6d8) + 1) != '\x01') {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11308c6d8);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_11308c6d8);
      _objc_release();
      if (cVar6 == '\x01') {
        return false;
      }
      return (int)uVar7 == (int)uVar8;
    }
    _objc_release();
  }
  else {
    pdVar1 = (double *)(unaff_x20 + _DAT_11308c670);
    pdVar2 = (double *)(lStack_68 + _DAT_11308c670);
    if (*(char *)(pdVar1 + 2) == '\x01') {
      if (*(char *)(pdVar2 + 2) != '\x01') goto LAB_104692e40;
    }
    else if (((*(char *)(pdVar2 + 2) == '\x01') || (*pdVar1 != *pdVar2)) || (pdVar1[1] != pdVar2[1])
            ) goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c678) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c678) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c678) != *(double *)(lStack_68 + _DAT_11308c678)))
    goto LAB_104692e40;
    cVar3 = *(char *)((double *)(lStack_68 + _DAT_11308c680) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308c680) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308c680) != *(double *)(lStack_68 + _DAT_11308c680)))
    goto LAB_104692e40;
    cVar3 = *(char *)((undefined8 *)(lStack_68 + _DAT_11308c688) + 1);
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c688) + 1) == '\x01') {
      if (cVar3 != '\x01') goto LAB_104692e40;
    }
    else if ((cVar3 == '\x01') ||
            ((int)*(undefined8 *)(unaff_x20 + _DAT_11308c688) !=
             (int)*(undefined8 *)(lStack_68 + _DAT_11308c688))) goto LAB_104692e40;
    dVar9 = *(double *)(unaff_x20 + _DAT_11308c690);
    cVar3 = *(char *)((double *)(unaff_x20 + _DAT_11308c690) + 1);
    dVar10 = *(double *)(lStack_68 + _DAT_11308c690);
    cVar6 = *(char *)((double *)(lStack_68 + _DAT_11308c690) + 1);
    _objc_release();
    if (cVar3 != '\x01') {
      return dVar9 == dVar10 && cVar6 != '\x01';
    }
  }
  return cVar6 == '\x01';
}



/* Entry: 104692e80; end: 104692f2b;  */

void FUN_104692e80(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104692f2c; end: 104692f6b;  */

void FUN_104692f2c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104692f6c; end: 104692f9b; -[SCAdTouchPoint description] */

void FUN_104692f6c(void)

{
  undefined1 auStack_70 [96];
  
  _objc_retain();
  FUN_104693668(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104692f9c; end: 104692fe3; -[SCAdTouchPoint init] */

void FUN_104692f9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTouchPointWrapper.swift",0x32,2,0x72,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104692fe4);
  (*pcVar1)();
}



/* Entry: 104692fe4; end: 104693003; -[SCAdTouchPoint hash] */

void FUN_104692fe4(void)

{
  FUN_104692530();
  return;
}



/* Entry: 104693004; end: 104693083; -[SCAdTouchPoint isEqual:] */

uint FUN_104693004(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046929e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104693084; end: 104693087; -[SCAdTouchPoint copyWithZone:] */

void FUN_104693084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104693088; end: 10469309f; +[SCAdTouchPoint tapWithPoint:locationXToScreenWidthRatio:locationYToScreenHeightRatio:tapSource:tapStartTimeMs:] */

void FUN_104693088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1046938c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046930a0; end: 1046930c7; +[SCAdTouchPoint swipeWithStartPoint:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endPoint:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:durationMs:swipeStartTimeMs:swipeSource:] */

void FUN_1046930a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104693a60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046930c8; end: 1046932d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046930c8(code *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11308c668) == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c698);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932a4);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932ac);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932b4);
      (*pcVar3)();
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308c6b0);
    if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932bc);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6b8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932c4);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932cc);
      (*pcVar3)();
    }
    if (*(char *)(unaff_x20 + _DAT_11308c6c8 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932d0);
      (*pcVar3)();
    }
    if (*(char *)(unaff_x20 + _DAT_11308c6d0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932d4);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c6d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932d8);
      (*pcVar3)();
    }
    (*param_3)(*puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + _DAT_11308c6a0),
               *(undefined8 *)(unaff_x20 + _DAT_11308c6a8),*puVar2,puVar2[1],
               *(undefined8 *)(unaff_x20 + _DAT_11308c6b8),
               *(undefined8 *)(unaff_x20 + _DAT_11308c6c0),
               *(undefined8 *)(unaff_x20 + _DAT_11308c6d8));
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c670);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932a8);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c678) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932b0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c680) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932b8);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c688) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932c0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c690) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046932c8);
      (*pcVar3)();
    }
    (*param_1)(*puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + _DAT_11308c678),
               *(undefined8 *)(unaff_x20 + _DAT_11308c680),
               *(undefined8 *)(unaff_x20 + _DAT_11308c690),
               *(undefined8 *)(unaff_x20 + _DAT_11308c688));
  }
  return;
}



/* Entry: 1046932d8; end: 10469332b; -[SCAdTouchPoint matchTap:swipe:] */

void FUN_1046932d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1046930c8(FUN_104693de8,auStack_40,0x104693df8,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 10469332c; end: 10469335f;  */

void FUN_10469332c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104693360; end: 104693667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104693360(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *apuStack_a0 [2];
  undefined8 *apuStack_90 [2];
  
  ppuVar7 = apuStack_a0;
  uVar14 = *param_1;
  uVar13 = param_1[1];
  uVar12 = param_1[2];
  uVar11 = param_1[3];
  uVar8 = param_1[4];
  uVar10 = param_1[5];
  if (*(char *)(param_1 + 0xb) == '\x01') {
    uVar2 = param_1[9];
    uVar4 = param_1[10];
    uVar3 = param_1[7];
    uVar5 = param_1[8];
    uVar9 = param_1[6];
    FUN_104693c20();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_11308c668) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c670);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c678);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c680);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c688);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c690);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c698);
    *puVar1 = uVar14;
    puVar1[1] = uVar13;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a0);
    *puVar1 = uVar12;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a8);
    *puVar1 = uVar11;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b0);
    *puVar1 = uVar8;
    puVar1[1] = uVar10;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b8);
    *puVar1 = uVar9;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c0);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c8);
    *puVar1 = uVar5;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d0);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d8);
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
    ppuVar7 = apuStack_90;
    apuStack_90[0] = puVar6;
  }
  else {
    FUN_104693c20();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_11308c668) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c670);
    *puVar1 = uVar14;
    puVar1[1] = uVar13;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c678);
    *puVar1 = uVar12;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c680);
    *puVar1 = uVar11;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c688);
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c690);
    *puVar1 = uVar10;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c698);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6a8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6b8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6c8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_11308c6d8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    apuStack_a0[0] = puVar6;
  }
  ppuVar7[1] = param_1;
  _objc_msgSendSuper2(ppuVar7,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104693668; end: 1046938c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104693668(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 uVar8;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_2 + _DAT_11308c668) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + _DAT_11308c698);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104693894);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10469389c);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938a4);
      (*pcVar3)();
    }
    puVar2 = (undefined8 *)(param_2 + _DAT_11308c6b0);
    if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938ac);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6b8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938b4);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938bc);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6c8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938c0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938c4);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c6d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938c8);
      (*pcVar3)();
    }
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
    uVar6 = *(undefined8 *)(param_2 + _DAT_11308c6a0);
    uVar7 = *(undefined8 *)(param_2 + _DAT_11308c6a8);
    uVar4 = *puVar2;
    uVar8 = puVar2[1];
    unaff_d10 = *(undefined8 *)(param_2 + _DAT_11308c6b8);
    unaff_d11 = *(undefined8 *)(param_2 + _DAT_11308c6c0);
    unaff_d13 = *(undefined8 *)(param_2 + _DAT_11308c6c8);
    unaff_x22 = *(undefined8 *)(param_2 + _DAT_11308c6d8);
    uVar5 = 1;
    unaff_d14 = *(undefined8 *)(param_2 + _DAT_11308c6d0);
  }
  else {
    puVar1 = (undefined8 *)(param_2 + _DAT_11308c670);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104693898);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c678) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938a0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c680) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938a8);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c688) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938b0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c690) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046938b8);
      (*pcVar3)();
    }
    uVar5 = 0;
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
    uVar6 = *(undefined8 *)(param_2 + _DAT_11308c678);
    uVar7 = *(undefined8 *)(param_2 + _DAT_11308c680);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11308c688);
    uVar8 = *(undefined8 *)(param_2 + _DAT_11308c690);
  }
  _objc_release();
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar4;
  param_1[5] = uVar8;
  param_1[6] = unaff_d10;
  param_1[7] = unaff_d11;
  param_1[8] = unaff_d13;
  param_1[9] = unaff_d14;
  param_1[10] = unaff_x22;
  *(undefined1 *)(param_1 + 0xb) = uVar5;
  return;
}



/* Entry: 1046938c8; end: 104693a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046938c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_6;
  FUN_104693c20();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308c668) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c670);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c678);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c680);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar2 = (long *)(lVar4 + _DAT_11308c688);
  *plVar2 = param_6;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c690);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c698);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104693a60; end: 104693c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104693a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_9;
  FUN_104693c20();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308c668) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c670);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c678);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c680);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c688);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c690);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c698);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6a0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6a8);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6b0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6b8);
  *puVar1 = param_7;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6c0);
  *puVar1 = param_8;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6c8);
  *puVar1 = in_stack_00000000;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c6d0);
  *puVar1 = in_stack_00000008;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar2 = (long *)(lVar4 + _DAT_11308c6d8);
  *plVar2 = param_9;
  *(undefined1 *)(plVar2 + 1) = 0;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104693c20; end: 104693c3f;  */

void FUN_104693c20(void)

{
  _objc_opt_self(&PTR_PTR_1129d1178);
  return;
}



/* Entry: 104693c40; end: 104693da7;  */

int FUN_104693c40(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104693cbc;
        goto LAB_104693ca0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104693ca0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104693cbc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104693da8; end: 104693de7;  */

void FUN_104693da8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26164;
  _swift_getWitnessTable(&UNK_10dd26164,&UNK_110796558);
  puRam000000011308c708 = puVar1;
  return;
}



/* Entry: 104693de8; end: 104693e07;  */

void FUN_104693de8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104693df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104693e08; end: 104693edb;  */

void FUN_104693e08(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104693edc; end: 104693efb;  */

void FUN_104693edc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104693efc; end: 104693f87; -[SCAdTrackEvent description] */

void FUN_104693efc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10466df5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104693f88(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1046958ec(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),FUN_10466df5c)
  ;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104693f88; end: 1046949fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104693f88(code *param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  code cVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  long extraout_x8;
  long *plVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  code *pcStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined8 auStack_1f8 [13];
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar13 = &lStack_190;
  lVar17 = 0x11308c768;
  func_0x0001000285a8(0x11308c768,&UNK_10dd26210);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar17 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar4 = (code *)((long)&pcStack_2d0 + lVar17);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcVar4 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar19 = pcVar18 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_2b8 = (long)pcVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar15 = (code *)(((long)pcVar19 - extraout_x12_01) - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)pcVar15 - extraout_x12_03;
  pcVar3 = (code *)0x0;
  FUN_10466df5c();
  lStack_2c0 = *(long *)(pcVar3 + -8);
  pcStack_2c8 = *(code **)(lStack_2c0 + 0x38);
  pcVar6 = (code *)0x1;
  pcVar8 = (code *)0x1;
  pcVar10 = pcVar3;
  (*pcStack_2c8)(lVar14);
  plVar11 = (long *)(ulong)(byte)param_2[_DAT_11308c710];
  pcVar12 = param_1;
  pcStack_2b0 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[_DAT_11308c710]) {
  default:
    pcVar12 = *(code **)(param_2 + _DAT_11308c718);
    if (pcVar12 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949e0);
      (*pcVar15)();
    }
    plVar11 = (long *)&DAT_11308c088;
    pcVar4 = param_1;
    pcVar19 = param_2;
  case (code)0xe:
    _objc_retain(*(undefined8 *)(pcVar12 + *plVar11));
    plVar13 = (long *)auStack_2a8;
    FUN_10469d68c(auStack_2a8);
    plVar11 = (long *)&DAT_11308c000;
  case (code)0x13:
    _objc_retain(*(undefined8 *)(pcVar12 + plVar11[0x12]));
    func_0x000104689308(plVar13 + 0x14);
    pcVar6 = (code *)&DAT_11308c000;
  case (code)0xc:
    func_0x000104695a04(lVar14,pcVar6 + 0x768,&UNK_10dd26210);
  case (code)0xd:
    param_2 = pcVar19;
    param_1 = pcVar4;
    _memcpy();
    uVar9 = 0;
    break;
  case (code)0x1:
    lVar17 = *(long *)(param_2 + _DAT_11308c720);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949ec);
      (*pcVar15)();
    }
    _objc_retain();
    func_0x000104683d0c(&uStack_150);
    _objc_release(lVar17);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    *(undefined8 *)(pcVar15 + 0xa8) = uStack_a8;
    *(undefined8 *)(pcVar15 + 0xa0) = uStack_b0;
    *(undefined8 *)(pcVar15 + 0xb8) = uStack_98;
    *(undefined8 *)(pcVar15 + 0xb0) = uStack_a0;
    *(undefined8 *)(pcVar15 + 200) = uStack_88;
    *(undefined8 *)(pcVar15 + 0xc0) = uStack_90;
    *(undefined8 *)(pcVar15 + 0xd0) = uStack_80;
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    _swift_storeEnumTagMultiPayload(pcVar15,pcVar3,1);
    (*pcStack_2c8)(pcVar15,0,1,pcVar3);
    func_0x000104695928(pcVar15,lVar14);
    goto code_r0x00010469493c;
  case (code)0x2:
    lVar17 = *(long *)(param_2 + _DAT_11308c728);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949dc);
      (*pcVar15)();
    }
    _objc_retain(*(undefined8 *)(lVar17 + _DAT_11308cd90));
    FUN_10469d68c(&uStack_150);
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308cd98);
    lVar17 = 0;
    FUN_104677908();
    iVar2 = *(int *)(lVar17 + 0x14);
    _objc_retain(uVar9);
    func_0x0001046a531c(pcVar15 + iVar2);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    uVar9 = 2;
    goto code_r0x000104694704;
  case (code)0x3:
    lVar17 = *(long *)(param_2 + _DAT_11308c730);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949e4);
      pcStack_2d0 = param_1;
      (*pcVar15)();
    }
    pcStack_2d0 = param_1;
    _objc_retain(*(undefined8 *)(lVar17 + _DAT_11308be10));
    cVar7 = SUB81(pcVar8,0);
    FUN_10469d68c(&uStack_150);
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308be18);
    _objc_retain();
    func_0x000104681510();
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    *(undefined8 *)(pcVar15 + 0xa0) = uVar9;
    *(code **)(pcVar15 + 0xa8) = pcVar6;
    pcVar15[0xb0] = cVar7;
    uVar9 = 3;
    goto code_r0x0001046944ac;
  case (code)0x4:
    pcStack_2d0 = param_1;
  case (code)0x11:
    param_1 = *(code **)(param_2 + _DAT_11308c738);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949d4);
      (*pcVar15)();
    }
    plVar11 = (long *)&DAT_11308bc00;
  case (code)0xb:
    _objc_retain(*(undefined8 *)(param_1 + *plVar11));
    FUN_10469d68c(&uStack_150);
    plVar11 = (long *)&DAT_11308bc08;
  case (code)0xf:
    pcVar4 = *(code **)(param_1 + *plVar11);
    _objc_retain();
    func_0x00010467d19c();
    pcVar18 = pcVar6;
    pcVar19 = pcVar8;
  case (code)0x10:
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    param_1 = pcVar10;
  case (code)0x12:
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    *(code **)(pcVar15 + 0xa0) = pcVar4;
    *(code **)(pcVar15 + 0xa8) = pcVar18;
    *(code **)(pcVar15 + 0xb0) = pcVar19;
    pcVar15[0xb8] = SUB81(param_1,0);
    uVar9 = 4;
code_r0x0001046944ac:
    _swift_storeEnumTagMultiPayload(pcVar15,pcVar3,uVar9);
    (*pcStack_2c8)(pcVar15,0,1,pcVar3);
    func_0x000104695928(pcVar15,lVar14);
    param_1 = pcStack_2d0;
    param_2 = pcStack_2b0;
    goto code_r0x00010469493c;
  case (code)0x5:
    lVar17 = *(long *)(param_2 + _DAT_11308c740);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949f0);
      (*pcVar15)();
    }
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308bb90);
    _objc_retain();
    _objc_retain(uVar9);
    FUN_10469d68c(&uStack_150);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308bb98);
    _objc_release(lVar17);
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    *(undefined8 *)(pcVar15 + 0xa0) = uVar9;
    uVar9 = 5;
code_r0x000104694704:
    _swift_storeEnumTagMultiPayload(pcVar15,pcVar3,uVar9);
    (*pcStack_2c8)(pcVar15,0,1,pcVar3);
code_r0x000104694724:
    func_0x000104695928(pcVar15,lVar14);
    goto code_r0x00010469493c;
  case (code)0x6:
    lVar17 = *(long *)(param_2 + _DAT_11308c748);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949f4);
      (*pcVar15)();
    }
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308c5c0);
    _objc_retain(uVar9);
    _objc_retain();
    FUN_10469d68c(&uStack_150,uVar9);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    lVar16 = *(long *)(lVar17 + _DAT_11308c5c8);
    _objc_retain();
    _objc_release(lVar17);
    cVar1 = *(char *)(lVar16 + _DAT_11308c630);
    _objc_release(lVar16);
    *(undefined8 *)(pcVar19 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar19 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar19 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar19 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar19 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar19 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar19 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar19 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar19 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar19 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar19 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar19 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar19 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar19 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar19 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar19 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar19 + 8) = uStack_148;
    *(undefined8 *)pcVar19 = uStack_150;
    *(undefined8 *)(pcVar19 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar19 + 0x10) = uStack_140;
    pcVar19[0xa0] = (code)(cVar1 == '\x01');
    _swift_storeEnumTagMultiPayload(pcVar19,pcVar3,6);
    (*pcStack_2c8)(pcVar19,0,1,pcVar3);
    func_0x000104695928(pcVar19,lVar14);
    param_2 = pcStack_2b0;
    goto code_r0x00010469493c;
  case (code)0x7:
    lVar17 = *(long *)(param_2 + _DAT_11308c750);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949e8);
      (*pcVar15)();
    }
    _objc_retain(*(undefined8 *)(lVar17 + _DAT_11308c3d8));
    FUN_10469d68c(&uStack_150);
    cVar7 = SUB81(*(undefined8 *)(lVar17 + _DAT_11308c3e0),0);
    _objc_retain();
    FUN_10468f0cc();
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    *(undefined8 *)(pcVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar15 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar15 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar15 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar15 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar15 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar15 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar15 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar15 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar15 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar15 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar15 + 8) = uStack_148;
    *(undefined8 *)pcVar15 = uStack_150;
    *(undefined8 *)(pcVar15 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar15 + 0x10) = uStack_140;
    pcVar15[0xa0] = cVar7;
    uVar9 = 7;
    break;
  case (code)0x8:
    lVar17 = *(long *)(param_2 + _DAT_11308c758);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949f8);
      (*pcVar15)();
    }
    uVar9 = *(undefined8 *)(lVar17 + _DAT_11308c328);
    _objc_retain(uVar9);
    _objc_retain();
    FUN_10469d68c(&uStack_150,uVar9);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    lVar16 = *(long *)(lVar17 + _DAT_11308c330);
    _objc_retain();
    _objc_release(lVar17);
    cVar1 = *(char *)(lVar16 + _DAT_11308c360);
    _objc_release(lVar16);
    *(undefined8 *)(pcVar18 + 0x68) = uStack_e8;
    *(undefined8 *)(pcVar18 + 0x60) = uStack_f0;
    *(undefined8 *)(pcVar18 + 0x78) = uStack_d8;
    *(undefined8 *)(pcVar18 + 0x70) = uStack_e0;
    *(undefined8 *)(pcVar18 + 0x88) = uStack_c8;
    *(undefined8 *)(pcVar18 + 0x80) = uStack_d0;
    *(undefined8 *)(pcVar18 + 0x98) = uStack_b8;
    *(undefined8 *)(pcVar18 + 0x90) = uStack_c0;
    *(undefined8 *)(pcVar18 + 0x28) = uStack_128;
    *(undefined8 *)(pcVar18 + 0x20) = uStack_130;
    *(undefined8 *)(pcVar18 + 0x38) = uStack_118;
    *(undefined8 *)(pcVar18 + 0x30) = uStack_120;
    *(undefined8 *)(pcVar18 + 0x48) = uStack_108;
    *(undefined8 *)(pcVar18 + 0x40) = uStack_110;
    *(undefined8 *)(pcVar18 + 0x58) = uStack_f8;
    *(undefined8 *)(pcVar18 + 0x50) = uStack_100;
    *(undefined8 *)(pcVar18 + 8) = uStack_148;
    *(undefined8 *)pcVar18 = uStack_150;
    *(undefined8 *)(pcVar18 + 0x18) = uStack_138;
    *(undefined8 *)(pcVar18 + 0x10) = uStack_140;
    pcVar18[0xa0] = (code)(cVar1 == '\x01');
    _swift_storeEnumTagMultiPayload(pcVar18,pcVar3,8);
    (*pcStack_2c8)(pcVar18,0,1,pcVar3);
    goto code_r0x000104694930;
  case (code)0x9:
    lVar16 = *(long *)(param_2 + _DAT_11308c760);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949d8);
      (*pcVar15)();
    }
    _objc_retain(*(undefined8 *)(lVar16 + _DAT_11308c510));
    FUN_10469d68c(&uStack_150);
    lVar16 = *(long *)(*(long *)(lVar16 + _DAT_11308c518) + _DAT_11308c548);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949fc);
      (*pcVar15)();
    }
    lStack_188 = ((long *)(lVar16 + _DAT_11308c4c8))[1];
    lStack_190 = *(long *)(lVar16 + _DAT_11308c4c8);
    uStack_178 = ((undefined8 *)(lVar16 + _DAT_11308c4d0))[1];
    uStack_180 = *(undefined8 *)(lVar16 + _DAT_11308c4d0);
    uStack_168 = ((undefined8 *)(lVar16 + _DAT_11308c4d8))[1];
    uStack_170 = *(undefined8 *)(lVar16 + _DAT_11308c4d8);
    uStack_158 = ((undefined8 *)(lVar16 + _DAT_11308c4e0))[1];
    uStack_160 = *(undefined8 *)(lVar16 + _DAT_11308c4e0);
    func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
    FUN_10466a500(&lStack_190,&uStack_b0);
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x80) = uStack_a8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x78) = uStack_b0;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x90) = uStack_98;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x88) = uStack_a0;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0xa0) = uStack_88;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x98) = uStack_90;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0xb0) = uStack_78;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0xa8) = uStack_80;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x40) = uStack_e8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x38) = uStack_f0;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x50) = uStack_d8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x48) = uStack_e0;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x60) = uStack_c8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x58) = uStack_d0;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x70) = uStack_b8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x68) = uStack_c0;
    *(undefined8 *)(auStack_2a8 + lVar17) = uStack_128;
    *(undefined8 *)(auStack_2a8 + lVar17 + -8) = uStack_130;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x10) = uStack_118;
    *(undefined8 *)(auStack_2a8 + lVar17 + 8) = uStack_120;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x20) = uStack_108;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x18) = uStack_110;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x30) = uStack_f8;
    *(undefined8 *)(auStack_2a8 + lVar17 + 0x28) = uStack_100;
    *(undefined8 *)((long)&pcStack_2c8 + lVar17) = uStack_148;
    *(undefined8 *)pcVar4 = uStack_150;
    *(undefined8 *)((long)&lStack_2b8 + lVar17) = uStack_138;
    *(undefined8 *)((long)&lStack_2c0 + lVar17) = uStack_140;
    _swift_storeEnumTagMultiPayload(pcVar4,pcVar3,9);
    (*pcStack_2c8)(pcVar4,0,1,pcVar3);
    pcVar15 = pcVar4;
    goto code_r0x000104694724;
  }
  _swift_storeEnumTagMultiPayload(pcVar15,pcVar3,uVar9);
  (*pcStack_2c8)(pcVar15,0,1,pcVar3);
  pcVar18 = pcVar15;
code_r0x000104694930:
  func_0x000104695928(pcVar18,lVar14);
code_r0x00010469493c:
  lVar16 = lStack_2b8;
  lVar17 = lStack_2c0;
  func_0x0001046959bc(lVar14,lStack_2b8,0x11308c768,&UNK_10dd26210);
  lVar5 = lVar16;
  (**(code **)(lVar17 + 0x30))(lVar16,1,pcVar3);
  if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1046949d0);
    (*pcVar15)();
  }
  func_0x000104695a04(lVar14,0x11308c768,&UNK_10dd26210);
  _objc_release(param_2);
  func_0x000104695978(lVar16,param_1,FUN_10466df5c);
  return;
}



/* Entry: 1046949fc; end: 104694a43; -[SCAdTrackEvent init] */

void FUN_1046949fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackEventWrapper.swift",0x32,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104694a44);
  (*pcVar1)();
}



/* Entry: 104694a44; end: 104694a77; -[SCAdTrackEvent hash] */

undefined8 FUN_104694a44(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104694a78();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104694a78; end: 10469528b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104694a78(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [72];
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_11308c710);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11308c718) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_228);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    FUN_104685604();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c720) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046838bc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c728) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_1e0);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    FUN_1046a44bc();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c730) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_198);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    FUN_10468080c();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c738) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_150);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    FUN_10467c2b8();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11308c740);
  if (lVar3 == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_108);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    uVar2 = *(undefined8 *)(lVar3 + _DAT_11308bb98);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c748) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104691850();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c750) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    FUN_10469c63c();
    __ss6HasherV8_combineyySuF();
    FUN_10468e8cc();
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c758) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010468d590();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c760) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104690744();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469528c; end: 10469531b; -[SCAdTrackEvent isEqual:] */

uint FUN_10469528c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104694e8c(&uStack_40);
  _objc_release(param_1);
  func_0x000104695a04(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10469531c; end: 10469531f; -[SCAdTrackEvent copyWithZone:] */

void FUN_10469531c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104695320; end: 104695357; +[SCAdTrackEvent lifecycleWithLifecycleEvent:] */

void FUN_104695320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695a44();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695358; end: 10469538f; +[SCAdTrackEvent interactionWithInteractionEvent:] */

void FUN_104695358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695b18();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695390; end: 1046953c7; +[SCAdTrackEvent webviewWithWebviewEvent:] */

void FUN_104695390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695bf0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046953c8; end: 1046953ff; +[SCAdTrackEvent deeplinkWithDeeplinkEvent:] */

void FUN_1046953c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695cc8();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695400; end: 104695437; +[SCAdTrackEvent appInstallWithAppInstallEvent:] */

void FUN_104695400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695438; end: 10469546f; +[SCAdTrackEvent adToMessageWithAdToMessageEvent:] */

void FUN_104695438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695e78();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695470; end: 1046954a7; +[SCAdTrackEvent subscribeWithSubscribeEvent:] */

void FUN_104695470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104695f50();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046954a8; end: 1046954df; +[SCAdTrackEvent adReportWithAdReportEvent:] */

void FUN_1046954a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104696028();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046954e0; end: 104695517; +[SCAdTrackEvent reminderWithReminderEvent:] */

void FUN_1046954e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104696100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695518; end: 10469554f; +[SCAdTrackEvent stickersWithStickersEvent:] */

void FUN_104695518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001046961d8();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104695550; end: 1046956fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104695550(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined8 param_25)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11308c710)) {
  case 0:
    if (*(long *)(unaff_x20 + _DAT_11308c718) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956e4);
      (*pcVar1)();
    }
    (*param_1)();
    break;
  case 1:
    if (*(long *)(unaff_x20 + _DAT_11308c720) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956f0);
      (*pcVar1)();
    }
    (*param_3)();
    break;
  case 2:
    if (*(long *)(unaff_x20 + _DAT_11308c728) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956e0);
      (*pcVar1)();
    }
    (*param_5)();
    break;
  case 3:
    if (*(long *)(unaff_x20 + _DAT_11308c730) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956e8);
      (*pcVar1)();
    }
    (*param_7)();
    break;
  case 4:
    if (*(long *)(unaff_x20 + _DAT_11308c738) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956d8);
      (*pcVar1)();
    }
    (*param_9)();
    break;
  case 5:
    if (*(long *)(unaff_x20 + _DAT_11308c740) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956f4);
      (*pcVar1)();
    }
    (*param_12)();
    break;
  case 6:
    if (*(long *)(unaff_x20 + _DAT_11308c748) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956f8);
      (*pcVar1)();
    }
    (*param_15)();
    break;
  case 7:
    if (*(long *)(unaff_x20 + _DAT_11308c750) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956ec);
      (*pcVar1)();
    }
    (*param_18)();
    break;
  case 8:
    if (*(long *)(unaff_x20 + _DAT_11308c758) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956fc);
      (*pcVar1)();
    }
    (*param_21)();
    break;
  case 9:
    if (*(long *)(unaff_x20 + _DAT_11308c760) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046956dc);
      (*pcVar1)();
    }
    (*param_24)(param_25);
  }
  return;
}



/* Entry: 1046956fc; end: 1046957ef; -[SCAdTrackEvent matchLifecycle:interaction:webview:deeplink:appInstall:adToMessage:subscribe:adReport:reminder:stickers:] */

void FUN_1046956fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104695550(0x104696488,auStack_40,0x104696494,auStack_60,0x10469648c,auStack_80,0x104696490,
                auStack_a0,FUN_104696478,auStack_c0,0x104696498,auStack_e0,0x10469649c,auStack_100,
                0x1046964a0,auStack_120,0x1046964a4,auStack_140,0x1046964a8,auStack_160);
  _objc_release(param_1);
  return;
}



/* Entry: 1046957f0; end: 104695823;  */

void FUN_1046957f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104695824; end: 1046958db; -[SCAdTrackEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104695824(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c718));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c720));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c728));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c730));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c738));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c740));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c748));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c750));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c758));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c760));
  return;
}



/* Entry: 1046958dc; end: 1046958eb;  */

ulong FUN_1046958dc(ulong param_1)

{
  if (9 < param_1) {
    param_1 = 10;
  }
  return param_1;
}



/* Entry: 1046958ec; end: 1046962af;  */

undefined8 FUN_1046958ec(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1046962b0; end: 1046962cf;  */

void FUN_1046962b0(void)

{
  _objc_opt_self(&PTR_PTR_1129d12a8);
  return;
}



/* Entry: 1046962d0; end: 104696437;  */

int FUN_1046962d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10469634c;
        goto LAB_104696330;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104696330:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_10469634c:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104696438; end: 104696477;  */

void FUN_104696438(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26254;
  _swift_getWitnessTable(&UNK_10dd26254,&UNK_110796640);
  puRam000000011308c798 = puVar1;
  return;
}



/* Entry: 104696478; end: 1046964ab;  */

void FUN_104696478(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104696484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1046964ac; end: 1046964bb; -[SCAdTrackFunnelEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046964ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c7a0));
  return;
}



/* Entry: 1046964bc; end: 1046964cb; -[SCAdTrackFunnelEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046964bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c7a8));
  return;
}



/* Entry: 1046964cc; end: 104696593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046964cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c7a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c7a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104696594; end: 10469660b; -[SCAdTrackFunnelEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104696594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c7a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c7a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10469660c; end: 1046966f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469660c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b0 [48];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000102c62cd4(&uStack_e0,&uStack_180);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c7a0) = puVar1;
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_170 = param_1[0x16];
  uStack_168 = (undefined1)param_1[0x17];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xc1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xb9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb9) >> 0x38);
  func_0x000102cfcffc(&uStack_180,auStack_1b0);
  puVar1 = &uStack_180;
  FUN_104697c2c();
  func_0x000104696a3c(param_1);
  *(undefined8 **)(unaff_x20 + _DAT_11308c7a8) = puVar1;
  _objc_msgSendSuper2(auStack_1c0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046966f8; end: 104696777; -[SCAdTrackFunnelEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046966f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_104696a94();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104696778; end: 104696887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104696778(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c7a0);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c7a8);
      uVar2 = 0;
      FUN_104699af4();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      func_0x000104696f50(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_104696870;
    }
  }
  uVar5 = 0;
LAB_104696870:
  return uVar5 & 1;
}



/* Entry: 104696888; end: 104696907; -[SCAdTrackFunnelEvent isEqual:] */

uint FUN_104696888(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104696778(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104696908; end: 10469690b; -[SCAdTrackFunnelEvent copyWithZone:] */

void FUN_104696908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469690c; end: 104696987; -[SCAdTrackFunnelEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469690c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_f0 [160];
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c7a0);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_f0);
  _objc_retain(*(undefined8 *)(param_1 + _DAT_11308c7a8));
  FUN_1046989f0(auStack_50);
  _objc_release(param_1);
  func_0x000104696a3c(auStack_f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104696988; end: 104696a03; -[SCAdTrackFunnelEvent init] */

void FUN_104696988(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackFunnelEventWrapper.swift",0x38,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046969d0);
  (*pcVar1)();
}



/* Entry: 104696a04; end: 104696a6f; -[SCAdTrackFunnelEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104696a04(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c7a8));
  return;
}



/* Entry: 104696a70; end: 104696a8f;  */

void FUN_104696a70(void)

{
  _objc_opt_self(&PTR_PTR_1129d13b8);
  return;
}



/* Entry: 104696a90; end: 104696a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104696a90(long *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined4 uVar19;
  long *aplStack_f0 [2];
  long *aplStack_e0 [2];
  long *aplStack_d0 [2];
  long *aplStack_c0 [2];
  long *aplStack_b0 [2];
  long *aplStack_a0 [2];
  long *aplStack_90 [2];
  long *aplStack_80 [2];
  long *aplStack_70 [2];
  
  pplVar15 = aplStack_f0;
  lVar16 = *param_1;
  bVar5 = *(byte *)(param_1 + 1);
  bVar6 = *(byte *)((long)param_1 + 0xf);
  uVar17 = *(undefined4 *)((long)param_1 + 9);
  lVar12 = param_1[1];
  bVar7 = *(byte *)(param_1 + 2);
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  bVar8 = *(byte *)(param_1 + 5);
  uVar10 = (undefined2)*(undefined3 *)((long)param_1 + 0xd);
  if (bVar8 < 4) {
    if (bVar8 < 2) {
      if (bVar8 == 0) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 1;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c7e0);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_e0;
        aplStack_e0[0] = plVar13;
      }
      else {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c7e8);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_d0;
        aplStack_d0[0] = plVar13;
      }
    }
    else if (bVar8 == 2) {
      FUN_104699af4();
      plVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 4;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c7f0);
      *plVar14 = lVar16;
      *(undefined1 *)(plVar14 + 1) = 0;
      pbVar2 = (byte *)((long)plVar13 + _DAT_11308c7f8);
      *pbVar2 = bVar5;
      pbVar2[7] = bVar6;
      *(undefined2 *)(pbVar2 + 5) = uVar10;
      *(undefined4 *)(pbVar2 + 1) = uVar17;
      pbVar2[8] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
      *puVar1 = 0;
      puVar1[1] = 0;
      pplVar15 = aplStack_b0;
      aplStack_b0[0] = plVar13;
    }
    else {
      FUN_104699af4();
      plVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 5;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c800);
      *plVar14 = lVar16;
      *(undefined1 *)(plVar14 + 1) = 0;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c808);
      *plVar14 = lVar12;
      *(undefined1 *)(plVar14 + 1) = 0;
      *(byte *)((long)plVar13 + _DAT_11308c810) = bVar7 & 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c818);
      *plVar14 = lVar3;
      plVar14[1] = lVar4;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
      *puVar1 = 0;
      puVar1[1] = 0;
      pplVar15 = aplStack_a0;
      aplStack_a0[0] = plVar13;
    }
  }
  else {
    bVar9 = *(byte *)((long)param_1 + 0x17);
    uVar17 = (undefined4)*(undefined7 *)((long)param_1 + 9);
    if (bVar8 < 6) {
      uVar19 = (undefined4)*(undefined7 *)((long)param_1 + 0x11);
      uVar11 = (undefined2)*(undefined3 *)((long)param_1 + 0x15);
      if (bVar8 == 4) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 6;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c820);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        *(byte *)((long)plVar13 + _DAT_11308c828) = bVar5 & 1;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c830);
        *pbVar2 = bVar7;
        pbVar2[7] = bVar9;
        *(undefined2 *)(pbVar2 + 5) = uVar11;
        *(undefined4 *)(pbVar2 + 1) = uVar19;
        pbVar2[8] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c838);
        *plVar14 = lVar3;
        plVar14[1] = lVar4;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_90;
        aplStack_90[0] = plVar13;
      }
      else {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 7;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c840);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c848);
        *pbVar2 = bVar5;
        pbVar2[7] = bVar6;
        *(undefined2 *)(pbVar2 + 5) = uVar10;
        *(undefined4 *)(pbVar2 + 1) = uVar17;
        pbVar2[8] = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c850);
        *pbVar2 = bVar7;
        *(undefined4 *)(pbVar2 + 1) = uVar19;
        *(undefined2 *)(pbVar2 + 5) = uVar11;
        pbVar2[7] = bVar9;
        *(long *)(pbVar2 + 8) = lVar3;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_80;
        aplStack_80[0] = plVar13;
      }
    }
    else {
      lVar18 = CONCAT71(*(undefined7 *)((long)param_1 + 0x11),bVar7);
      if (bVar8 == 6) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 8;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c858);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c860);
        *pbVar2 = bVar5;
        pbVar2[7] = bVar6;
        *(undefined2 *)(pbVar2 + 5) = uVar10;
        *(undefined4 *)(pbVar2 + 1) = uVar17;
        *(long *)(pbVar2 + 8) = lVar18;
        pplVar15 = aplStack_70;
        aplStack_70[0] = plVar13;
      }
      else if (((lVar3 == 0 && lVar12 == 0) && (lVar16 == 0 && lVar18 == 0)) && lVar4 == 0) {
        FUN_104699af4();
        plVar14 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar14 + _DAT_11308c7d8) = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        aplStack_f0[0] = plVar14;
      }
      else {
        FUN_104699af4();
        plVar14 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar14 + _DAT_11308c7d8) = 3;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_c0;
        aplStack_c0[0] = plVar14;
      }
    }
  }
  pplVar15[1] = param_1;
  _objc_msgSendSuper2(pplVar15,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104696a94; end: 1046973cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104696a94(void)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308c7d8));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c7e0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c7e0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c7e8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c7e8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c7f0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c7f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c7f8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c7f8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c800) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c800);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c808))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_11308c808);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c810);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308c818))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c818);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c820) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c820);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c828);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c830) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c830);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308c838))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c838);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c840) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c840);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c848) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c848);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308c850))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c850);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c858) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c858);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308c860))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c860);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046973d0; end: 1046974a3;  */

void FUN_1046973d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046974a4; end: 1046974c3;  */

void FUN_1046974a4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1046974c4; end: 1046974fb; -[SCAdTrackFunnelEventType description] */

void FUN_1046974c4(void)

{
  undefined1 auStack_40 [48];
  
  _objc_retain();
  FUN_1046989f0(auStack_40);
  FUN_104698d8c(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046974fc; end: 104697543; -[SCAdTrackFunnelEventType init] */

void FUN_1046974fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackFunnelEventTypeWrapper.swift",0x3c,2,0x9e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104697544);
  (*pcVar1)();
}



/* Entry: 104697544; end: 104697577; -[SCAdTrackFunnelEventType hash] */

undefined8 FUN_104697544(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104696a94();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104697578; end: 1046975f7; -[SCAdTrackFunnelEventType isEqual:] */

uint FUN_104697578(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104696f50(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046975f8; end: 1046975fb; -[SCAdTrackFunnelEventType copyWithZone:] */

void FUN_1046975f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046975fc; end: 104697613; +[SCAdTrackFunnelEventType topSnapPresented] */

void FUN_1046975fc(void)

{
  func_0x0001046990e8(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104697614; end: 10469762b; +[SCAdTrackFunnelEventType attachmentTriggeredWithAttachmentTriggerType:] */

void FUN_104697614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104698dd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469762c; end: 104697643; +[SCAdTrackFunnelEventType trackFlowTriggeredWithTrackFlowTriggerType:] */

void FUN_10469762c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000104698f5c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104697644; end: 10469765b; +[SCAdTrackFunnelEventType background] */

void FUN_104697644(void)

{
  func_0x0001046990e8(3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469765c; end: 104697673; +[SCAdTrackFunnelEventType metadataReadyWithAdResponseServeTimestamp:metadataState:] */

void FUN_10469765c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104699274(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104697674; end: 1046976db; +[SCAdTrackFunnelEventType networkingStartWithAttemptCount:adResponseServeTimestamp:isLateTrack:version:] */

void FUN_104697674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  FUN_104699410(param_1,param_4,param_5,param_6,param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1046976dc; end: 10469773b; +[SCAdTrackFunnelEventType networkingEndWithAttemptCount:success:statusCode:version:] */

void FUN_1046976dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  FUN_1046995d4(param_3,param_4,param_5,param_6,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10469773c; end: 104697793; +[SCAdTrackFunnelEventType durableJobStartWithAttemptCount:state:version:] */

void FUN_10469773c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  func_0x000104699790(param_3,param_4,param_5,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104697794; end: 104697aaf; +[SCAdTrackFunnelEventType durableJobSubmittedWithAttemptCount:version:] */

void FUN_104697794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_104699948(param_3,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104697ab0; end: 104697b8f; -[SCAdTrackFunnelEventType matchTopSnapPresented:attachmentTriggered:trackFlowTriggered:background:metadataReady:networkingStart:networkingEnd:durableJobStart:durableJobSubmitted:] */

void FUN_104697ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001046977e0(FUN_104699cbc,auStack_40,0x104699cc4,auStack_60,0x104699e60,auStack_80,
                      FUN_104699e5c,auStack_a0,0x104699cd4,auStack_c0,FUN_104699ce4,auStack_e0,
                      FUN_104699d4c,auStack_100,FUN_104699db4,auStack_120,0x104699e0c,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 104697b90; end: 104697bc3;  */

void FUN_104697b90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104697bc4; end: 104697c2b; -[SCAdTrackFunnelEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104697bc4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c818 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c838 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c850 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308c860 + 8))
  ;
  return;
}



/* Entry: 104697c2c; end: 1046989ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104697c2c(long *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined4 uVar19;
  long *aplStack_f0 [2];
  long *aplStack_e0 [2];
  long *aplStack_d0 [2];
  long *aplStack_c0 [2];
  long *aplStack_b0 [2];
  long *aplStack_a0 [2];
  long *aplStack_90 [2];
  long *aplStack_80 [2];
  long *aplStack_70 [2];
  
  pplVar15 = aplStack_f0;
  lVar16 = *param_1;
  bVar5 = *(byte *)(param_1 + 1);
  bVar6 = *(byte *)((long)param_1 + 0xf);
  uVar17 = *(undefined4 *)((long)param_1 + 9);
  lVar12 = param_1[1];
  bVar7 = *(byte *)(param_1 + 2);
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  bVar8 = *(byte *)(param_1 + 5);
  uVar10 = (undefined2)*(undefined3 *)((long)param_1 + 0xd);
  if (bVar8 < 4) {
    if (bVar8 < 2) {
      if (bVar8 == 0) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 1;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c7e0);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_e0;
        aplStack_e0[0] = plVar13;
      }
      else {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c7e8);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_d0;
        aplStack_d0[0] = plVar13;
      }
    }
    else if (bVar8 == 2) {
      FUN_104699af4();
      plVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 4;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c7f0);
      *plVar14 = lVar16;
      *(undefined1 *)(plVar14 + 1) = 0;
      pbVar2 = (byte *)((long)plVar13 + _DAT_11308c7f8);
      *pbVar2 = bVar5;
      pbVar2[7] = bVar6;
      *(undefined2 *)(pbVar2 + 5) = uVar10;
      *(undefined4 *)(pbVar2 + 1) = uVar17;
      pbVar2[8] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
      *puVar1 = 0;
      puVar1[1] = 0;
      pplVar15 = aplStack_b0;
      aplStack_b0[0] = plVar13;
    }
    else {
      FUN_104699af4();
      plVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 5;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c800);
      *plVar14 = lVar16;
      *(undefined1 *)(plVar14 + 1) = 0;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c808);
      *plVar14 = lVar12;
      *(undefined1 *)(plVar14 + 1) = 0;
      *(byte *)((long)plVar13 + _DAT_11308c810) = bVar7 & 1;
      plVar14 = (long *)((long)plVar13 + _DAT_11308c818);
      *plVar14 = lVar3;
      plVar14[1] = lVar4;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
      *puVar1 = 0;
      puVar1[1] = 0;
      pplVar15 = aplStack_a0;
      aplStack_a0[0] = plVar13;
    }
  }
  else {
    bVar9 = *(byte *)((long)param_1 + 0x17);
    uVar17 = (undefined4)*(undefined7 *)((long)param_1 + 9);
    if (bVar8 < 6) {
      uVar19 = (undefined4)*(undefined7 *)((long)param_1 + 0x11);
      uVar11 = (undefined2)*(undefined3 *)((long)param_1 + 0x15);
      if (bVar8 == 4) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 6;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c820);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        *(byte *)((long)plVar13 + _DAT_11308c828) = bVar5 & 1;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c830);
        *pbVar2 = bVar7;
        pbVar2[7] = bVar9;
        *(undefined2 *)(pbVar2 + 5) = uVar11;
        *(undefined4 *)(pbVar2 + 1) = uVar19;
        pbVar2[8] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c838);
        *plVar14 = lVar3;
        plVar14[1] = lVar4;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_90;
        aplStack_90[0] = plVar13;
      }
      else {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 7;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c840);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c848);
        *pbVar2 = bVar5;
        pbVar2[7] = bVar6;
        *(undefined2 *)(pbVar2 + 5) = uVar10;
        *(undefined4 *)(pbVar2 + 1) = uVar17;
        pbVar2[8] = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c850);
        *pbVar2 = bVar7;
        *(undefined4 *)(pbVar2 + 1) = uVar19;
        *(undefined2 *)(pbVar2 + 5) = uVar11;
        pbVar2[7] = bVar9;
        *(long *)(pbVar2 + 8) = lVar3;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_80;
        aplStack_80[0] = plVar13;
      }
    }
    else {
      lVar18 = CONCAT71(*(undefined7 *)((long)param_1 + 0x11),bVar7);
      if (bVar8 == 6) {
        FUN_104699af4();
        plVar13 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar13 + _DAT_11308c7d8) = 8;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar13 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar13 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar14 = (long *)((long)plVar13 + _DAT_11308c858);
        *plVar14 = lVar16;
        *(undefined1 *)(plVar14 + 1) = 0;
        pbVar2 = (byte *)((long)plVar13 + _DAT_11308c860);
        *pbVar2 = bVar5;
        pbVar2[7] = bVar6;
        *(undefined2 *)(pbVar2 + 5) = uVar10;
        *(undefined4 *)(pbVar2 + 1) = uVar17;
        *(long *)(pbVar2 + 8) = lVar18;
        pplVar15 = aplStack_70;
        aplStack_70[0] = plVar13;
      }
      else if (((lVar3 == 0 && lVar12 == 0) && (lVar16 == 0 && lVar18 == 0)) && lVar4 == 0) {
        FUN_104699af4();
        plVar14 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar14 + _DAT_11308c7d8) = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        aplStack_f0[0] = plVar14;
      }
      else {
        FUN_104699af4();
        plVar14 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)plVar14 + _DAT_11308c7d8) = 3;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7e8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c7f8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c800);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c808);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c810) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c818);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c820);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)plVar14 + _DAT_11308c828) = 2;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c830);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c838);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c840);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c848);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c850);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c858);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)plVar14 + _DAT_11308c860);
        *puVar1 = 0;
        puVar1[1] = 0;
        pplVar15 = aplStack_c0;
        aplStack_c0[0] = plVar14;
      }
    }
  }
  pplVar15[1] = param_1;
  _objc_msgSendSuper2(pplVar15,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046989f0; end: 104698d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046989f0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  bVar1 = *(byte *)(param_2 + _DAT_11308c7d8);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        _objc_release();
        uVar8 = 0;
        uVar7 = 0;
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar3 = 7;
      }
      else {
        if (*(char *)((undefined8 *)(param_2 + _DAT_11308c7e0) + 1) == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d54);
          (*pcVar2)();
        }
        uVar8 = *(undefined8 *)(param_2 + _DAT_11308c7e0);
        _objc_release();
        uVar7 = 0;
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar3 = 0;
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)((undefined8 *)(param_2 + _DAT_11308c7e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d4c);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(param_2 + _DAT_11308c7e8);
      _objc_release();
      uVar7 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 1;
    }
    else {
      _objc_release();
      uVar7 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 7;
      uVar8 = 1;
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      if (*(char *)((undefined8 *)(param_2 + _DAT_11308c7f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d5c);
        (*pcVar2)();
      }
      if ((char)((ulong *)(param_2 + _DAT_11308c7f8))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d74);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(param_2 + _DAT_11308c7f0);
      uVar7 = *(ulong *)(param_2 + _DAT_11308c7f8);
      _objc_release();
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 2;
    }
    else {
      if (*(char *)((undefined8 *)(param_2 + _DAT_11308c800) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d64);
        (*pcVar2)();
      }
      if ((char)((ulong *)(param_2 + _DAT_11308c808))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d78);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(param_2 + _DAT_11308c810);
      if (bVar1 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d84);
        (*pcVar2)();
      }
      uVar6 = ((ulong *)(param_2 + _DAT_11308c818))[1];
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d8c);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(param_2 + _DAT_11308c800);
      uVar7 = *(ulong *)(param_2 + _DAT_11308c808);
      uVar5 = *(ulong *)(param_2 + _DAT_11308c818);
      _swift_bridgeObjectRetain(uVar6);
      _objc_release(param_2);
      uVar4 = (ulong)bVar1 & 1;
      uVar3 = 3;
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c820) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d50);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(param_2 + _DAT_11308c828);
    if (bVar1 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d68);
      (*pcVar2)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11308c830))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d7c);
      (*pcVar2)();
    }
    uVar6 = ((ulong *)(param_2 + _DAT_11308c838))[1];
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d88);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11308c820);
    uVar4 = *(ulong *)(param_2 + _DAT_11308c830);
    uVar5 = *(ulong *)(param_2 + _DAT_11308c838);
    _swift_bridgeObjectRetain(uVar6);
    _objc_release(param_2);
    uVar7 = (ulong)bVar1 & 1;
    uVar3 = 4;
  }
  else if (bVar1 == 7) {
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c840) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d58);
      (*pcVar2)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11308c848))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d6c);
      (*pcVar2)();
    }
    uVar5 = ((ulong *)(param_2 + _DAT_11308c850))[1];
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d80);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11308c840);
    uVar7 = *(ulong *)(param_2 + _DAT_11308c848);
    uVar4 = *(ulong *)(param_2 + _DAT_11308c850);
    _swift_bridgeObjectRetain(uVar5);
    _objc_release(param_2);
    uVar6 = 0;
    uVar3 = 5;
  }
  else {
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308c858) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d60);
      (*pcVar2)();
    }
    uVar4 = ((ulong *)(param_2 + _DAT_11308c860))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104698d70);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11308c858);
    uVar7 = *(ulong *)(param_2 + _DAT_11308c860);
    _swift_bridgeObjectRetain(uVar4);
    _objc_release(param_2);
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 6;
  }
  *param_1 = uVar8;
  param_1[1] = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar3;
  return;
}



/* Entry: 104698d8c; end: 104698dbf;  */

undefined8 FUN_104698d8c(undefined8 param_1)

{
  FUN_10466ef48();
  return param_1;
}



/* Entry: 104698dc0; end: 104698dcf;  */

ulong FUN_104698dc0(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 104698dd0; end: 104699273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104698dd0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104699af4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308c7d8) = 1;
  plVar1 = (long *)(lVar4 + _DAT_11308c7e0);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c7e8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c7f0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c7f8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c800);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c808);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11308c810) = 2;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c818);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c820);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11308c828) = 2;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c830);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c838);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c840);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c848);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c850);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c858);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11308c860);
  *puVar2 = 0;
  puVar2[1] = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104699274; end: 10469940f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699274(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_2;
  FUN_104699af4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308c7d8) = 4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c7e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c7e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c7f0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar2 = (long *)(lVar4 + _DAT_11308c7f8);
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c800);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c808);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11308c810) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11308c828) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c838);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c840);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c848);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c850);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c858);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308c860);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104699410; end: 1046995d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699410(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_2;
  FUN_104699af4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308c7d8) = 5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_11308c800);
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c808);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_11308c810) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c818);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c828) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c838);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c840);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c848);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c850);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c858);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c860);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1046995d4; end: 104699947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046995d4(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_104699af4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308c7d8) = 6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c800);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c808);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c810) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c818);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_11308c820);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_11308c828) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c830);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c838);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c840);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c848);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c850);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c858);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c860);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104699948; end: 104699af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104699948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104699af4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308c7d8) = 8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c7f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c800);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c808);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c810) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c820);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c828) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c838);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c840);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c848);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c850);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_11308c858);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c860);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}


