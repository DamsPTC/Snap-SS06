/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7be1c8; end: 10b7be24f;  */

void FUN_10b7be1c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c072440(), (int)lVar1 != 0)) {
    func_0x00010bfec120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7be250; end: 10b7be277;  */

void FUN_10b7be250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeFromCacheType_transformed_112580a48,1,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10b7be278; end: 10b7be36b; -[SCCache _removeAllObjectsCompletelyFromStorage:block:] */

void FUN_10b7be278(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  byte bStack_50;
  byte bStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  bStack_50 = (byte)param_3 & 1;
  bStack_4f = (byte)(param_3 >> 1) & 1;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7be36c; end: 10b7be59b;  */

void FUN_10b7be36c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x2b) & 1) != 0)) goto LAB_10b7be568;
  if (*(long *)(param_1 + 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar3 = 0;
LAB_10b7be428:
      ppuVar4 = (undefined **)0x0;
      goto LAB_10b7be42c;
    }
    if ((*(byte *)(param_1 + 0x31) & 1) == 0) goto LAB_10b7be568;
    lVar3 = 0;
LAB_10b7be4d4:
    ppuVar4 = (undefined **)0x0;
LAB_10b7be4d8:
    func_0x00010c12ade0(*(undefined8 *)(lVar1 + 0x50));
    _objc_release(ppuVar4);
  }
  else {
    lVar3 = lVar1;
    _dispatch_group_create();
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      if ((lVar3 == 0) || (*(long *)(lVar1 + 0x48) == 0)) goto LAB_10b7be428;
      _dispatch_group_enter(lVar3);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10b7be59c;
      puStack_50 = &UNK_110d60bb8;
      _objc_retain(lVar3);
      ppuVar4 = &puStack_68;
      lStack_48 = lVar3;
      _objc_retainBlock(ppuVar4);
      _objc_release(lStack_48);
LAB_10b7be42c:
      uVar6 = *(undefined8 *)(lVar1 + 0x48);
      lVar2 = lVar1;
      func_0x00010c0870c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12ae00(uVar6);
      _objc_release(lVar2);
      _objc_release(ppuVar4);
    }
    if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
      if (lVar3 == 0) goto LAB_10b7be4d4;
      _dispatch_group_enter(lVar3);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x10b7be5a4;
      puStack_78 = &UNK_110d60be8;
      _objc_retain(lVar3);
      ppuVar4 = &puStack_90;
      lStack_70 = lVar3;
      _objc_retainBlock(ppuVar4);
      _objc_release(lStack_70);
      goto LAB_10b7be4d8;
    }
  }
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    _objc_copyWeak(auStack_98,param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    func_0x00010c0f8b60(uVar5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar3);
  }
LAB_10b7be568:
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7be59c; end: 10b7be5ab;  */

void FUN_10b7be59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7be5ac; end: 10b7be5eb;  */

void FUN_10b7be5ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7be5ec; end: 10b7be707; -[SCCache _removeAllObjectsWithEnumerationFromStorage:exceptKeys:block:] */

void FUN_10b7be5ec(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  byte bStack_50;
  byte bStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  bStack_50 = (byte)param_3 & 1;
  bStack_4f = (byte)(param_3 >> 1) & 1;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7be708; end: 10b7bea3b;  */

void FUN_10b7be708(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2b) & 1) == 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar1;
      _dispatch_group_create();
    }
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (*(char *)(param_1 + 0x38) == '\x01') {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c086a20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x48);
      puStack_b0 = puVar2;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10b7bea3c;
      puStack_98 = &UNK_110d60c18;
      lStack_90 = lVar1;
      uStack_88 = uVar4;
      _objc_retain();
      puStack_e8 = puVar2;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10b7bea84;
      puStack_d0 = &UNK_110d60b58;
      lStack_c8 = lVar1;
      puStack_c0 = puVar5;
      puStack_80 = puVar5;
      _objc_retain(lVar6);
      lStack_b8 = lVar6;
      _objc_retain(puVar5);
      _objc_retain(uVar4);
      func_0x00010bf97e40(uVar7);
      _objc_release(lStack_b8);
      _objc_release(puStack_c0);
      _objc_release(puStack_80);
      _objc_release(uStack_88);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    if (*(char *)(param_1 + 0x39) == '\x01') {
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c086a20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x50);
      puStack_120 = puVar2;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_10b7bea9c;
      puStack_108 = &UNK_110d60c48;
      lStack_100 = lVar1;
      uStack_f8 = uVar4;
      _objc_retain();
      puStack_158 = puVar2;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_10b7beae4;
      puStack_140 = &UNK_110d60b58;
      lStack_138 = lVar1;
      puStack_130 = puVar5;
      puStack_f0 = puVar5;
      _objc_retain(lVar6);
      lStack_128 = lVar6;
      _objc_retain(puVar5);
      _objc_retain(uVar4);
      func_0x00010bf97ee0(uVar7);
      _objc_release(lStack_128);
      _objc_release(puStack_130);
      _objc_release(puStack_f0);
      _objc_release(uStack_f8);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x70);
      _objc_copyWeak(auStack_160,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c0f8b60(uVar7);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_160);
    }
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7bea3c; end: 10b7bea83;  */

void FUN_10b7bea3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7bea84; end: 10b7bea9b;  */

void FUN_10b7bea84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeFromCacheType_transformed_112580a48,0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10b7bea9c; end: 10b7beae3;  */

void FUN_10b7bea9c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7beae4; end: 10b7beafb;  */

void FUN_10b7beae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeFromCacheType_transformed_112580a48,1,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10b7beafc; end: 10b7beb3b;  */

void FUN_10b7beafc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7beb3c; end: 10b7beb47; -[SCCache removeAllObjectsFromMemoryWithBlock:] */

void FUN_10b7beb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeAllObjectsCompletelyFromS_1125806c0,1,param_3);
  return;
}



/* Entry: 10b7beb48; end: 10b7beb53; -[SCCache removeAllObjectsWithBlock:] */

void FUN_10b7beb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeAllObjectsCompletelyFromS_1125806c0,3,param_3);
  return;
}



/* Entry: 10b7beb54; end: 10b7becc7; -[SCCache removeObjectsForKeys:block:] */

void FUN_10b7beb54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      _dispatch_group_create();
    }
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c086a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar2);
    _objc_retain(param_4);
    func_0x00010be8c2a0(param_1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7becc8; end: 10b7bee0b;  */

void FUN_10b7becc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c086a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8c2a0(lVar1);
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      _objc_initWeak(auStack_48,lVar1);
      uVar3 = *(undefined8 *)(lVar1 + 0x70);
      _objc_copyWeak(auStack_50,auStack_48);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar2);
      func_0x00010c0f8b60(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7bee0c; end: 10b7bee4b;  */

void FUN_10b7bee0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7bee4c; end: 10b7befb3; -[SCCache removeContentManagerObjectsForKeys:block:] */

void FUN_10b7bee4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _dispatch_group_create();
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c086a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010be8c2a0(param_1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7befb4; end: 10b7bf103;  */

void FUN_10b7befb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c086a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010be8c2a0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7bf104; end: 10b7bf207;  */

void FUN_10b7bf104(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,lVar1);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f8b60(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7bf208; end: 10b7bf247;  */

void FUN_10b7bf208(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7bf248; end: 10b7bf38f; -[SCCache contains:] */

undefined8 FUN_10b7bf248(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
    goto LAB_10b7bf36c;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  func_0x00010c0e0040(uVar4,param_2,uVar2,&uStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  _objc_release(uVar2);
  uVar5 = uVar1;
  if (uVar1 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c086580(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc340(uVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar5 != 0) goto LAB_10b7bf308;
    func_0x00010bfec120(*(undefined8 *)(param_1 + 8),param_2,0);
LAB_10b7bf360:
    uVar2 = 0;
  }
  else {
LAB_10b7bf308:
    uVar3 = uVar5;
    func_0x00010c072440();
    func_0x00010bfec120(*(undefined8 *)(param_1 + 8),param_2,0);
    if ((uVar3 & 1) != 0) goto LAB_10b7bf360;
    if (uVar1 == 0) {
      func_0x00010bfec120(*(undefined8 *)(param_1 + 8),param_2,2);
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
      func_0x00010bfec120(*(undefined8 *)(param_1 + 8),param_2,1);
    }
  }
  _objc_release(uVar5);
LAB_10b7bf36c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b7bf390; end: 10b7bf4e7; -[SCCache contains:block:] */

void FUN_10b7bf390(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010bfec120(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c086580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0e00a0(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7bf4e8; end: 10b7bf68f;  */

void FUN_10b7bf4e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      _objc_initWeak(auStack_68,lVar1);
      uVar5 = *(undefined8 *)(lVar1 + 0x50);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c086580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c0cc360(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      uVar2 = param_4;
      func_0x00010c072440();
      if ((uVar2 & 1) == 0) {
        func_0x00010bfec120(*(undefined8 *)(lVar1 + 8));
      }
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),(uint)uVar2 ^ 1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7bf690; end: 10b7bf70f;  */

void FUN_10b7bf690(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (uVar2 = param_2, func_0x00010c072440(), (uVar2 & 1) != 0)) {
      uVar3 = 0;
    }
    else {
      func_0x00010bfec120(*(undefined8 *)(lVar1 + 8));
      uVar3 = 1;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7bf710; end: 10b7bf81f;  */

void FUN_10b7bf710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  uStack_58 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7bf820; end: 10b7bf947;  */

void FUN_10b7bf820(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfec120(*(undefined8 *)(lVar1 + 8));
    if (*(long *)(param_1 + 0x38) != 0) {
      func_0x00010bfec120(*(undefined8 *)(lVar1 + 8));
    }
    if (*(long *)(lVar1 + 0x40) != 0) {
      _objc_initWeak(auStack_48,lVar1);
      uVar3 = *(undefined8 *)(lVar1 + 0x70);
      _objc_copyWeak(auStack_50,auStack_48);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7bf948; end: 10b7bf9c7;  */

void FUN_10b7bf948(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x40) != 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar2);
    }
    else {
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(*(long *)(lVar1 + 0x40) + 0x10))(*(long *)(lVar1 + 0x40),lVar1,lVar2,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7bf9c8; end: 10b7bf9db;  */

void FUN_10b7bf9c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__executeCompletionBlock_withKey__112560800,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),param_4);
  return;
}



/* Entry: 10b7bf9dc; end: 10b7bfb6b; -[SCCache _updateExpiration:forKey:] */

void FUN_10b7bf9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c086580(uVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc340(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126e13f8;
  _objc_alloc_init(PTR_PTR_1126e13f8);
  func_0x00010c1b6b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b7000(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c198b80(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c082260(uVar3);
  func_0x00010c1b55c0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086580(uVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287c40(uVar5,param_2,puVar2,uVar4);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c287c40(uVar5,param_2,puVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7bfb6c; end: 10b7bfb7b;  */

void FUN_10b7bfb6c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return;
  }
  return;
}



/* Entry: 10b7bfb7c; end: 10b7bfd43; -[SCCache _removeFromCacheType:transformedKeys:dispatchGroup:finishBlock:] */

void FUN_10b7bfb7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    func_0x00010bf529e0(param_4);
  }
  _objc_initWeak(auStack_68,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b7bfd44;
  puStack_98 = &UNK_110845158;
  _objc_copyWeak(auStack_78,auStack_68);
  lStack_70 = param_3;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_6);
  ppuVar1 = &puStack_b0;
  uStack_80 = param_6;
  _objc_retainBlock();
  if (param_3 == 0) {
    lVar2 = 0x60;
  }
  else {
    if (param_3 != 1) {
      uVar3 = 0;
      goto LAB_10b7bfc7c;
    }
    lVar2 = 0x68;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(uVar3);
LAB_10b7bfc7c:
  _objc_retain(ppuVar1);
  func_0x00010c0f9420(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7bfd44; end: 10b7bfeab;  */

void FUN_10b7bfd44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_80;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x2b) & 1) != 0)) goto LAB_10b7bfe90;
  if (*(long *)(param_1 + 0x40) == 1) {
    if (*(long *)(param_1 + 0x20) == 0) {
      ppuVar3 = (undefined **)0x0;
      lVar4 = 0x50;
    }
    else {
      _dispatch_group_enter();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x10b7bfeb4;
      puStack_68 = &UNK_110d60be8;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_60 = uVar2;
      _objc_retainBlock(&puStack_80);
      lVar4 = 0x50;
      uVar2 = uStack_60;
LAB_10b7bfe48:
      _objc_release(uVar2);
    }
LAB_10b7bfe64:
    func_0x00010c12d4e0(*(undefined8 *)(lVar1 + lVar4));
    _objc_release(ppuVar3);
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
      _dispatch_group_enter();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10b7bfeac;
      puStack_40 = &UNK_110d60bb8;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      ppuVar3 = &puStack_58;
      uStack_38 = uVar2;
      _objc_retainBlock(ppuVar3);
      lVar4 = 0x48;
      uVar2 = uStack_38;
      goto LAB_10b7bfe48;
    }
    ppuVar3 = (undefined **)0x0;
    lVar4 = 0x48;
    goto LAB_10b7bfe64;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,lVar1);
  }
LAB_10b7bfe90:
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7bfeac; end: 10b7bfec7;  */

void FUN_10b7bfeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7bfec8; end: 10b7bff0b; -[SCCache handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10b7bfec8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c23d4c0();
  if (0x3200000 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_trimImmediatelyToSizeByPolicy__11267cbc8,
               0x3200000);
    return;
  }
  return;
}



/* Entry: 10b7bff0c; end: 10b7bffbb; -[SCCache removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_10b7bff0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _dispatch_group_enter(param_4);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b7bffbc;
  puStack_30 = &UNK_110a06e70;
  lStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c12c260(param_1,param_2,&puStack_48);
  func_0x00010bf82c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a300();
  _objc_release(param_1);
  _objc_release(lStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7bffbc; end: 10b7bffcb;  */

void FUN_10b7bffbc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return;
  }
  return;
}



/* Entry: 10b7bffcc; end: 10b7bffdf; -[SCCache removeAllUserSessionDataAsync] */

void FUN_10b7bffcc(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjectsWithBlock__1126285d0,0);
  return;
}



/* Entry: 10b7bffe0; end: 10b7c009f; -[SCCache reportMetrics] */

void FUN_10b7bffe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = *(undefined **)(param_1 + 8);
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c133340(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c27f700();
    puVar5 = puVar1;
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c25ce40(uVar3,param_2,&PTR____CFConstantStringClassReference_110f82d58);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0d3c80(puVar1);
      func_0x00010c1d0640();
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b7c00a0; end: 10b7c00a7; -[SCCache cacheKeyMetadataList] */

void FUN_10b7c00a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_cacheKeyMetadataList_1125a73e8);
  return;
}



/* Entry: 10b7c00a8; end: 10b7c00af; -[SCCache metricsName] */

undefined8 FUN_10b7c00a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7c00b0; end: 10b7c00b7; -[SCCache underExperiment] */

undefined1 FUN_10b7c00b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 10b7c00b8; end: 10b7c00bf; -[SCCache setUnderExperiment:] */

void FUN_10b7c00b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 10b7c00c0; end: 10b7c00c7; -[SCCache didRemoveObjectFromDiskBlock] */

undefined8 FUN_10b7c00c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7c00c8; end: 10b7c00cf; -[SCCache memoryCache] */

undefined8 FUN_10b7c00c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7c00d0; end: 10b7c00ff; -[SCCache setMemoryCache:] */

void FUN_10b7c00d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c0100; end: 10b7c0107; -[SCCache diskCache] */

undefined8 FUN_10b7c0100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7c0108; end: 10b7c0137; -[SCCache setDiskCache:] */

void FUN_10b7c0108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c0138; end: 10b7c013f; -[SCCache cacheManager] */

undefined8 FUN_10b7c0138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7c0140; end: 10b7c016f; -[SCCache setCacheManager:] */

void FUN_10b7c0140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c0170; end: 10b7c0177; -[SCCache workQueuePerformer] */

undefined8 FUN_10b7c0170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7c0178; end: 10b7c01a7; -[SCCache setWorkQueuePerformer:] */

void FUN_10b7c0178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c01a8; end: 10b7c01af; -[SCCache diskCacheQueuePerformer] */

undefined8 FUN_10b7c01a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b7c01b0; end: 10b7c01df; -[SCCache setDiskCacheQueuePerformer:] */

void FUN_10b7c01b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c01e0; end: 10b7c01e7; -[SCCache completionQueuePerformer] */

undefined8 FUN_10b7c01e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b7c01e8; end: 10b7c0217; -[SCCache setCompletionQueuePerformer:] */

void FUN_10b7c01e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c0218; end: 10b7c021f; -[SCCache isInvalidated] */

undefined1 FUN_10b7c0218(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 10b7c0220; end: 10b7c0227; -[SCCache setIsInvalidated:] */

void FUN_10b7c0220(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 10b7c0228; end: 10b7c02db; -[SCCache .cxx_destruct] */

void FUN_10b7c0228(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c02dc; end: 10b7c0457; -[SCCacheManager getDiskCacheSizeForKind:block:] */

void FUN_10b7c02dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13eb20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b7c0394;
  puStack_40 = &UNK_110d60e18;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(uVar1,param_2,&puStack_58,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b7c0458; end: 10b7c0583; -[SCCacheManager determineAllMetrics:] */

void FUN_10b7c0458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b7c0508;
  puStack_48 = &UNK_110854320;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar1,param_2,&puStack_60,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b7c0584; end: 10b7c072b; -[SCCacheManager _determineMetricsForDatastores:] */

void FUN_10b7c0584(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar19 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar23 = param_3;
  func_0x00010bf52a60();
  if (lVar23 != 0) {
    lVar25 = *plStack_120;
    do {
      lVar26 = 0;
      do {
        if (*plStack_120 != lVar25) {
          _objc_enumerationMutation(param_3);
        }
        lVar24 = *(long *)(lStack_128 + lVar26 * 8);
        lVar2 = lVar24;
        func_0x00010c133320();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            func_0x00010c0870c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar24;
          }
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar3);
        }
        _objc_release(lVar2);
        lVar26 = lVar26 + 1;
      } while (lVar23 != lVar26);
      lVar23 = param_3;
      puVar19 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar19);
    puVar4 = (undefined1 *)puVar19;
    func_0x00010bf1f440();
    func_0x00010bf1f440();
    func_0x00010c067f00(puVar19);
    puVar5 = (undefined1 *)puVar19;
    func_0x00010c067f00(puVar19);
    puVar1 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0x40f5180000000000);
    puVar6 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0x41446f4000000000);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar1);
    if ((int)puVar4 != 0) {
      puVar1 = PTR_PTR_1126e1400;
      _objc_alloc(PTR_PTR_1126e1400);
      dVar27 = (double)(ulong)(long)(int)puVar5 * 24.0 * 60.0 * 60.0;
      func_0x00010c028b20(dVar27);
      puVar6 = PTR_PTR_1126e1400;
      _objc_alloc(PTR_PTR_1126e1400);
      func_0x00010c028b20(dVar27);
      puVar8 = puVar7;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar8;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar6 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar8 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar10 = PTR_PTR_1126e1408;
    _objc_alloc();
    puVar1 = puVar10;
    func_0x000107c31298();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00caa0();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0x40ac200000000000);
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar12 = PTR_PTR_1126e1408;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = puVar12;
    func_0x000107c31298();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5a20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00caa0();
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar6 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0x41446f4000000000);
    puVar8 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0x41446f4000000000);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar14 = PTR_PTR_1126e1408;
    _objc_alloc();
    puVar1 = puVar14;
    func_0x000107c31294();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00caa0();
    _objc_release(puVar1);
    puVar8 = PTR_PTR_1126e1400;
    _objc_retain(&PTR____CFConstantStringClassReference_1110263b8);
    _objc_alloc();
    func_0x00010c028b20(0x4122750000000000);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126e1408;
    _objc_alloc();
    func_0x00010c00caa0();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar1 = PTR_PTR_1126b7f60;
    func_0x00010bfccf00(PTR_PTR_1126b7f60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar17 = PTR_PTR_1126dbe20;
    _objc_alloc();
    func_0x00010c00ca60();
    uVar22 = 5;
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be863c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar18;
    lVar25 = param_3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar16);
    _objc_release(&PTR____CFConstantStringClassReference_1110263b8);
    _objc_release(puVar8);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
      ___stack_chk_fail();
      _objc_retain(lVar25);
      uVar20 = uVar22;
      _objc_retain();
      _dispatch_group_create();
      _dispatch_group_enter();
      uVar21 = *(undefined8 *)((long)puVar19 + 8);
      func_0x00010bf00440(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar20);
      _objc_retain(uVar22);
      _objc_retain(lVar25);
      func_0x00010c297260(uVar21);
      _dispatch_group_wait(uVar20,0xffffffffffffffff);
      _objc_release(uVar20);
      _objc_release(uVar22);
      _objc_release(lVar25);
      _objc_release(uVar20);
      _objc_release(uVar22);
      _objc_release(lVar25);
      _objc_release(uVar21);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7c072c; end: 10b7c0e8f; -[SCCacheManager _prepareOwnedDatastoresWithCircumstanceEngine:] */

void FUN_10b7c072c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  double dVar22;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1f440();
  func_0x00010bf1f440();
  func_0x00010c067f00(param_3);
  lVar2 = param_3;
  func_0x00010c067f00(param_3);
  puVar3 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0x40f5180000000000);
  puVar4 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0x41446f4000000000);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)lVar1 != 0) {
    puVar3 = PTR_PTR_1126e1400;
    _objc_alloc(PTR_PTR_1126e1400);
    dVar22 = (double)(ulong)(long)(int)lVar2 * 24.0 * 60.0 * 60.0;
    func_0x00010c028b20(dVar22);
    puVar4 = PTR_PTR_1126e1400;
    _objc_alloc(PTR_PTR_1126e1400);
    func_0x00010c028b20(dVar22);
    puVar6 = puVar5;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0);
  puVar4 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0);
  puVar6 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar6 = PTR_PTR_1126e1408;
  _objc_alloc();
  puVar3 = puVar6;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00caa0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0x40ac200000000000);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar9 = PTR_PTR_1126e1408;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar9;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5a20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00caa0();
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0);
  puVar4 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0x41446f4000000000);
  puVar10 = PTR_PTR_1126e1400;
  _objc_alloc();
  func_0x00010c028b20(0x41446f4000000000);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar10 = PTR_PTR_1126e1408;
  _objc_alloc();
  puVar3 = puVar10;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00caa0();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126e1400;
  _objc_retain(&PTR____CFConstantStringClassReference_1110263b8);
  _objc_alloc();
  func_0x00010c028b20(0x4122750000000000);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126e1408;
  _objc_alloc();
  func_0x00010c00caa0();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar14 = PTR_PTR_1126b7f60;
  func_0x00010bfccf00(PTR_PTR_1126b7f60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126dbe20;
  _objc_alloc();
  func_0x00010c00ca60();
  uVar20 = 5;
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be863c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  uVar19 = param_1;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(&PTR____CFConstantStringClassReference_1110263b8);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar19);
  uVar17 = uVar20;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf00440(uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar17);
  _objc_retain(uVar20);
  _objc_retain(uVar19);
  func_0x00010c297260(uVar18);
  _dispatch_group_wait(uVar17,0xffffffffffffffff);
  _objc_release(uVar17);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  return;
}



/* Entry: 10b7c0e90; end: 10b7c0f9f; -[SCCacheManager clearOutExpiredCacheWithCircumstanceEngine:cancelationToken:] */

void FUN_10b7c0e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b7c0fa0; end: 10b7c12fb;  */

void FUN_10b7c0fa0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be78dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126ced20;
        uVar13 = *(ulong *)(lVar12 * 8);
        _objc_retain(uVar13);
        _objc_opt_class(puVar3);
        uVar4 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar3);
        uVar6 = uVar13;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        if (uVar6 != 0) {
          uVar4 = uVar13;
          func_0x00010c23d4c0();
          uVar15 = uVar4 + uVar15;
          uVar4 = uVar13;
          func_0x00010c11eb00();
          uVar14 = uVar4 + uVar14;
        }
        func_0x00010c12c240(uVar13);
        _objc_release(uVar6);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar5 = 0;
  _dispatch_time(0,30000000000);
  _dispatch_group_wait(param_2,uVar5);
  uVar6 = *(ulong *)(param_1 + 0x30);
  if ((uVar6 == 0) || (func_0x00010c06e0e0(), (uVar6 & 1) == 0)) {
    if ((0x12c00000 < uVar14) && (uVar14 < uVar15)) {
      _objc_retain(lVar1);
      lVar7 = lVar1;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar1);
          }
          puVar3 = PTR_PTR_1126ced20;
          uVar6 = *(ulong *)(lVar12 * 8);
          _objc_retain(uVar6);
          _objc_opt_class(puVar3);
          uVar14 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar3);
          uVar15 = uVar6;
          if ((uVar14 & 1) == 0) {
            uVar15 = 0;
          }
          _objc_retain(uVar15);
          _objc_release(uVar6);
          if (uVar15 != 0) {
            func_0x00010c27c5a0(uVar6);
          }
          _objc_release(uVar15);
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = lVar1;
        func_0x00010bf52a60();
      }
      _objc_release(lVar1);
    }
    func_0x00010bddf6c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bddf6a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be5d6a0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = uVar9;
  func_0x00010bdfbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar8;
  _objc_release(uVar11);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  uVar9 = *(undefined8 *)(lVar1 + 8);
  func_0x00010bf00440(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  func_0x00010c297260(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  return;
}



/* Entry: 10b7c12fc; end: 10b7c13ab; -[SCCacheManager clearAllSessionScopedCacheWithCircumstanceEngine:] */

void FUN_10b7c12fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7c13ac;
  puStack_48 = &UNK_1108599d8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar1,param_2,&puStack_60,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b7c13ac; end: 10b7c15ff;  */

void FUN_10b7c13ac(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar5 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be78dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c12ade0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  puVar3 = PTR_PTR_1126ced20;
  func_0x00010bf00980();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  _objc_retain(lVar2);
  lVar7 = lVar2;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar8 = *plStack_190;
    do {
      lVar9 = 0;
      do {
        if (*plStack_190 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_198 + lVar9 * 8);
        func_0x00010c12b180(uVar6);
        func_0x00010c0870c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(puVar4);
        _objc_release(uVar6);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar2;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar2);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_1d0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_1d0 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010bfb5240(PTR_PTR_1126e13e8);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar4;
      puVar5 = &uStack_1e0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c0f98a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  func_0x00010c0f8240(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10b7c1600; end: 10b7c169b; -[SCCacheManager handleEmergencyDiskConditionForDatastores:] */

void FUN_10b7c1600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b7c169c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c169c; end: 10b7c17bf;  */

void FUN_10b7c169c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar14 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1;
  _dispatch_group_create();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar17 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar17);
  lVar1 = lVar17;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar18 = *plStack_100;
    do {
      lVar19 = 0;
      do {
        if (*plStack_100 != lVar18) {
          _objc_enumerationMutation(lVar17);
        }
        func_0x00010bfd0f80(*(undefined8 *)(lStack_108 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar1 != lVar19);
      lVar1 = lVar17;
      puVar14 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar17);
  uVar2 = 0;
  _dispatch_time(0,2000000000);
  _dispatch_group_wait(lVar16,uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (puVar14 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar14;
    func_0x00010c1195e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126e1410;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar7 = puVar6;
    func_0x00010bfd65c0();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar7 != 0) {
      puVar8 = puVar6;
      func_0x00010bf82ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010bf7eec0();
      _objc_release(puVar8);
      puVar8 = PTR____NSArray0__struct_11034ab48;
      if (puVar7 != (undefined *)0x0) {
        func_0x00010beb38a0();
        puVar8 = puVar6;
        func_0x00010bf82ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf7eea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar7;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar7);
            }
            uVar21 = *(undefined8 *)((long)puVar20 * 8);
            puVar9 = PTR_PTR_1126e1400;
            _objc_alloc();
            uVar2 = uVar21;
            func_0x00010c24d5a0(uVar21);
            uVar15 = uVar21;
            func_0x00010c141600(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c028b20((double)((int)uVar2 / 0x15180) * 24.0 * 60.0 * 60.0);
            puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(uVar15);
            puVar11 = PTR_PTR_1126e1408;
            _objc_alloc();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar12 = puVar11;
            func_0x000107c31298();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar21;
            func_0x00010c141600();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f5a20(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c2040(uVar21);
            func_0x00010c0c25e0(uVar21);
            func_0x00010bef1ac0();
            func_0x00010c00caa0(puVar11);
            func_0x00010befa120(puVar3);
            _objc_release(puVar11);
            _objc_release(puVar9);
            _objc_release(puVar13);
            _objc_release(uVar2);
            _objc_release(puVar12);
            _objc_release(puVar10);
            puVar20 = puVar20 + 1;
          } while (puVar8 != puVar20);
          puVar8 = puVar7;
          func_0x00010bf52a60();
        }
        _objc_release(puVar7);
        _objc_retain(puVar3);
        puVar8 = puVar3;
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  uVar15 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126dbe20;
  _objc_alloc(PTR_PTR_1126dbe20);
  func_0x00010c00ca60();
  func_0x00010bdfba60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264540(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7c17c0; end: 10b7c1bff; -[SCCacheManager _readCofConfigValueHelperWithCircumstanceEngine:] */

void FUN_10b7c17c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c1195e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126e1410;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar5 = puVar4;
    func_0x00010bfd65c0();
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar5 != 0) {
      puVar6 = puVar4;
      func_0x00010bf82ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf7eec0();
      _objc_release(puVar6);
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (puVar5 != (undefined *)0x0) {
        func_0x00010beb38a0();
        puVar6 = puVar4;
        func_0x00010bf82ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010bf7eea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar5;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar6 != (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar5);
            }
            uVar16 = *(undefined8 *)((long)puVar15 * 8);
            puVar7 = PTR_PTR_1126e1400;
            _objc_alloc();
            uVar8 = uVar16;
            func_0x00010c24d5a0(uVar16);
            uVar13 = uVar16;
            func_0x00010c141600(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c028b20((double)((int)uVar8 / 0x15180) * 24.0 * 60.0 * 60.0);
            puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(uVar13);
            puVar10 = PTR_PTR_1126e1408;
            _objc_alloc();
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar11 = puVar10;
            func_0x000107c31298();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar16;
            func_0x00010c141600();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f5a20(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c2040(uVar16);
            func_0x00010c0c25e0(uVar16);
            func_0x00010bef1ac0();
            func_0x00010c00caa0(puVar10);
            func_0x00010befa120(puVar1);
            _objc_release(puVar10);
            _objc_release(puVar7);
            _objc_release(puVar12);
            _objc_release(uVar8);
            _objc_release(puVar11);
            _objc_release(puVar9);
            puVar15 = puVar15 + 1;
          } while (puVar6 != puVar15);
          puVar6 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        _objc_retain(puVar1);
        puVar6 = puVar1;
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  uVar13 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126dbe20;
  _objc_alloc(PTR_PTR_1126dbe20);
  func_0x00010c00ca60();
  func_0x00010bdfba60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264540(puVar6);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10b7c1c00; end: 10b7c1ccf; -[SCCacheManager _cleanupDeadUnmanagedDirectories] */

void FUN_10b7c1c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dbe20;
  _objc_alloc(PTR_PTR_1126dbe20);
  func_0x00010c00ca60();
  func_0x00010bdfba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264540(puVar4);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7c1cd0; end: 10b7c1d33; -[SCCacheManager _cleanupDeadCacheDirectories] */

void FUN_10b7c1cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e13e8;
  func_0x00010c141700(PTR_PTR_1126e13e8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be431a0(param_1,param_2,puVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be3b3c0(param_1,param_2,puVar1);
  }
  else {
    func_0x00010be8bd60(param_1,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7c1d34; end: 10b7c1dd3; -[SCCacheManager _isReadyForCacheCleanup:] */

bool FUN_10b7c1d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf63aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 10b7c1dd4; end: 10b7c1e83; -[SCCacheManager _removeDeadCacheDirectories:] */

void FUN_10b7c1dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bdfba40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dbe20;
  _objc_alloc(PTR_PTR_1126dbe20);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00ca60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c264540(puVar1,param_2,param_1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c1e84; end: 10b7c20c7; -[SCCacheManager _initializeDeadCacheDetection:] */

undefined8 FUN_10b7c1e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b24e8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c27b060(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ecdc0(param_2);
    _objc_release(puVar4);
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10b7c20c8; end: 10b7c2297; -[SCCacheManager _determineActiveUnmanagedDirectories:] */

void FUN_10b7c20c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183e90;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar3 != (undefined **)0x0) {
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183e90);
        }
        puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar9;
        func_0x00010bfad000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 != (undefined *)0x0) {
          puVar4 = puVar9;
          func_0x00010bfad000();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar4);
        }
        _objc_release(puVar9);
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar3 != ppuVar10);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183e90;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  puVar9 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR_PTR_1126ced20;
    func_0x00010bf00980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010bf529e0(puVar4);
    func_0x00010bffc4a0(puVar5);
    _objc_retain(puVar4);
    puVar2 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        puVar6 = PTR_PTR_1126e13e8;
        func_0x00010bf26dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfad000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(puVar7);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar9 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0bb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126b4f58,PTR_s_markClearDiskCacheOnNextColdStar_11260c6c8,0x3200000);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b7c2298; end: 10b7c2437; -[SCCacheManager _determineActiveCacheDirectories] */

void FUN_10b7c2298(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ced20;
  func_0x00010bf00980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010bf529e0(puVar2);
  func_0x00010bffc4a0(puVar3);
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar5 = PTR_PTR_1126e13e8;
      func_0x00010bf26dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfad000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(puVar6);
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0bb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_markClearDiskCacheOnNextColdStar_11260c6c8,0x3200000);
  return;
}



/* Entry: 10b7c2438; end: 10b7c2447; -[SCCacheManager _markOversizedDatastore] */

void FUN_10b7c2438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_markClearDiskCacheOnNextColdStar_11260c6c8,0x3200000);
  return;
}



/* Entry: 10b7c2448; end: 10b7c245f; -[SCCacheManager _shouldEnableSymlinkSplicing:] */

void FUN_10b7c2448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f82df8,0,0);
  return;
}



/* Entry: 10b7c2460; end: 10b7c2467; -[SCCacheManager setIsUserAvailable:] */

void FUN_10b7c2460(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b7c2468; end: 10b7c246f; -[SCCacheManager setUnavailableWarningCallback:] */

void FUN_10b7c2468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7c2470; end: 10b7c2477; -[SCCacheManager performer] */

undefined8 FUN_10b7c2470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7c2478; end: 10b7c24a7; -[SCCacheManager setPerformer:] */

void FUN_10b7c2478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c24a8; end: 10b7c24af; -[SCCacheManager sharedMemoryCache] */

undefined8 FUN_10b7c24a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7c24b0; end: 10b7c24df; -[SCCacheManager setSharedMemoryCache:] */

void FUN_10b7c24b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c24e0; end: 10b7c25c3; -[SCCacheManager .cxx_destruct] */

void FUN_10b7c24e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c25c4; end: 10b7c25df; -[SCCacheMetrics increase:] */

void FUN_10b7c25c4(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + param_3 * 4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10b7c25e0; end: 10b7c29d3; -[SCCacheMetrics reportMetrics:] */

undefined ** FUN_10b7c25e0(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar17;
  double dVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar19 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = *(int *)(param_1 + 8);
  dVar18 = (double)iVar1;
  ppuVar2 = param_3;
  func_0x00010c23d4c0();
  ppuVar3 = param_3;
  func_0x00010c0ca120(param_3);
  ppuStack_f0 = (undefined **)PTR_PTR_1133e0d58;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0dea00(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e8 = PTR_PTR_1133e0d60;
  ppuVar5 = param_3;
  puStack_b8 = puVar4;
  func_0x00010bf529e0(param_3);
  func_0x00010c0df840(puVar6,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110df2998;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar6;
  func_0x00010c0dea00(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f82f38;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar7;
  func_0x00010c0df720(dVar18);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e2db38;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar8;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(int *)(param_1 + 0x14));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f82f98;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar9;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(int *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e03e58;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar10;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(int *)(param_1 + 0x1c) -
                      (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)));
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &puStack_b8;
  ppuVar5 = (undefined **)&ppuStack_f0;
  uVar16 = 7;
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,ppuVar5,7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c0d3c80();
  _objc_release(ppuVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  ppuVar14 = param_3;
  func_0x00010c0cce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar12 = (undefined **)0x0;
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar12 = param_3;
    func_0x00010c0cce00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar12;
    ppuVar5 = (undefined **)PTR_PTR_1133e0d50;
    func_0x00010c1d0560(ppuVar13,param_2,ppuVar12,PTR_PTR_1133e0d50);
    _objc_release(ppuVar12);
  }
  ppuVar14 = param_3;
  func_0x00010c11eb00();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((double)ppuVar2 / (double)ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f82f18;
    ppuVar3 = ppuVar12;
    func_0x00010c1d0560(ppuVar13,param_2,ppuVar12,&PTR____CFConstantStringClassReference_110f82f18);
    _objc_release(ppuVar12);
  }
  if (0 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x10);
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f82f58;
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((double)*(int *)(param_1 + 0xc) / dVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f82f78;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_100 = ppuVar12;
    func_0x00010c0df720((double)iVar1 / dVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)&ppuStack_110;
    uVar16 = 2;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_100,ppuVar5,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bef7f60(ppuVar13,param_2,ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(puVar6);
    _objc_release(ppuVar12);
  }
  lVar17 = 8;
  do {
    *(undefined4 *)(param_1 + lVar17) = 0;
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x20);
  ppuVar2 = ppuVar13;
  func_0x00010bf51e00();
  _objc_release(ppuVar13);
  ppuVar14 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  pcVar20 = FUN_10b7c29d4;
  _objc_retain(uVar16);
  ppuVar15 = ppuVar3;
  _objc_retain(ppuVar3);
  func_0x000107c3123c();
  func_0x00010c02d5e0(ppuVar14,param_2,ppuVar3,ppuVar5,uVar16,ppuVar15,in_x6,in_x7,ppuVar13,ppuVar12
                      ,ppuVar2,param_3,puVar19,pcVar20);
  _objc_release(uVar16);
  _objc_release(ppuVar3);
  return ppuVar14;
}



/* Entry: 10b7c29d4; end: 10b7c2a47; -[SCCacheSizePolicy initWithName:defaultSizeMB:evictionPolicyBlock:] */

undefined8
FUN_10b7c29d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c3123c();
  func_0x00010c02d5e0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7c2a48; end: 10b7c2a77; -[SCCacheSizePolicy .cxx_destruct] */

void FUN_10b7c2a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c2a78; end: 10b7c2aff; +[SCCacheUtil cacheURLForName:] */

void FUN_10b7c2a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1418;
  _objc_retain(param_3);
  func_0x00010c141700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26de0(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110f83498,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7c2b00; end: 10b7c2ba7; +[SCCacheUtil _migrateDiskCache:to:] */

undefined1
FUN_10b7c2b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010bf26dc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1580();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_1);
  return 1;
}



/* Entry: 10b7c2ba8; end: 10b7c2c2f; +[SCCacheUtil doesCacheExist:baseDirectory:] */

undefined * FUN_10b7c2ba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010be9bb60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14ca40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 10b7c2c30; end: 10b7c2c8b; +[SCCacheUtil forceUserSessionDataRemoval:] */

void FUN_10b7c2c30(undefined8 param_1)

{
  func_0x00010c1092e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c2c8c; end: 10b7c2d37; -[SCCacheWrapper initWithSCCache:] */

undefined1 * FUN_10b7c2c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270aef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0870c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c2d38; end: 10b7c2d3f; -[SCCacheWrapper invalidate] */

void FUN_10b7c2d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10b7c2d40; end: 10b7c2e03; -[SCCacheWrapper setObject:dataEncoding:forKey:expiration:block:] */

void FUN_10b7c2d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bddc840(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0500(uVar1,param_2,param_3,param_4,param_5,param_6,param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c2e04; end: 10b7c2e13; -[SCCacheWrapper objectForKey:dataDecoding:block:] */

void FUN_10b7c2e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b7c2e14; end: 10b7c2e1b; -[SCCacheWrapper objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:] */

void FUN_10b7c2e14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8);
  return;
}


