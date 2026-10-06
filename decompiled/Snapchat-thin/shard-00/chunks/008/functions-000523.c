/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a135cc; end: 100a1376b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a135cc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_1000a1858();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305de68) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11305de70) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11305de78) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11305de80) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11305de88) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11305de90) = param_7;
  *(undefined8 *)(lVar3 + _DAT_11305de98) = param_8;
  *(undefined8 *)(lVar3 + _DAT_11305dea0) = param_9;
  *(undefined8 *)(lVar3 + _DAT_11305dea8) = param_10;
  *(undefined8 *)(lVar3 + _DAT_11305deb0) = param_11;
  *(undefined8 *)(lVar3 + _DAT_11305deb8) = param_12;
  *(undefined8 *)(lVar3 + _DAT_11305dec0) = param_13;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 100a1376c; end: 100a1384f;  */

void FUN_100a1376c(void)

{
  long unaff_x20;
  
  FUN_100a135cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100a13850; end: 100a1388f;  */

void FUN_100a13850(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13890; end: 100a138cb;  */

void FUN_100a13890(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a138cc; end: 100a138df;  */

void FUN_100a138cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a138e0; end: 100a138e7; -[sc_async_queue perform:after:] */

void FUN_100a138e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__afterDelay_async__11254ffc8);
  return;
}



/* Entry: 100a138e8; end: 100a1394b; -[sc_async_queue_concrete _afterDelay:async:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a138e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c60f94(0,(long)(param_1 * 1000000000.0));
  FUN_10058c530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100a1394c; end: 100a1395b;  */

void FUN_100a1394c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a1395c; end: 100a139d7;  */

void FUN_100a1395c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a139d8; end: 100a139e3;  */

void FUN_100a139d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a139e4; end: 100a13a17;  */

void FUN_100a139e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13a18; end: 100a13a1b;  */

void FUN_100a13a18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13a1c; end: 100a13a8f;  */

void FUN_100a13a1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13a90; end: 100a13a93;  */

void FUN_100a13a90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13a94; end: 100a13b03;  */

void FUN_100a13a94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5e0f4();
    if ((int)lVar1 == 0) {
      if (*(char *)(param_1 + 0x50) == '\x01') {
        func_0x000107c3c974();
      }
      else {
        func_0x000107c3c978(param_1);
        func_0x000107c3c984(param_1);
      }
    }
    else {
      func_0x000107c3c97c(param_1);
      func_0x000107c3c970(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a13b04; end: 100a13b47;  */

void FUN_100a13b04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13b48; end: 100a13bb3; -[SCHostPrewarmManagerJobProcessor warmupManagerEnabled] */

void FUN_100a13b48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    func_0x000107c3ebd4(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110dd1518,0,0);
    func_0x000107c4d94c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    func_0x000107c61170(uVar3);
    lVar1 = *(long *)(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100a13bb4; end: 100a13d03;  */

void FUN_100a13bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a13d04; end: 100a13d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a13d04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (lRam000000011369a740 != -1) {
    func_0x000107c61568(0x11369a740,0x1001507a0);
  }
  puVar1 = (undefined8 *)(lRam0000000113815540 + _DAT_11309c178);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100a13d7c(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100a13d7c; end: 100a13d8b;  */

void FUN_100a13d7c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100a13d8c; end: 100a13dab;  */

void FUN_100a13d8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d57f0);
  return;
}



/* Entry: 100a13dac; end: 100a14103;  */

void FUN_100a13dac(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61158(PTR_PTR_1126b84c8);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,lVar2);
  }
  puVar3 = &uStack_101;
  FUN_100a14b1c();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  ppuStack_178 = &PTR_DAT_110864c08;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_f8 = 6;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110866be0;
  pppuStack_c0 = &ppuStack_178;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar3;
  FUN_1000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110866be0;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110864c08;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(lVar2);
  puVar5 = puVar4;
  func_0x000107c3e1b8(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_100a179a8();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c4f7c0(uVar8);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar11);
  uVar9 = uVar7;
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar9;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100a14104; end: 100a1415f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a14104(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7f1a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a14160; end: 100a1425f; -[SCHostPrewarmManagerJobProcessor _submitForegroundJob] */

/* WARNING: Possible PIC construction at 0x000100a14190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a141cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1422c) */
/* WARNING: Removing unreachable block (ram,0x000100a141d0) */
/* WARNING: Removing unreachable block (ram,0x000100a14194) */
/* WARNING: Removing unreachable block (ram,0x000100a14250) */
/* WARNING: Removing unreachable block (ram,0x000100a14198) */
/* WARNING: Removing unreachable block (ram,0x000100a1423c) */

void FUN_100a14160(long param_1,undefined8 param_2)

{
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf338);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100a14260; end: 100a14267;  */

void FUN_100a14260(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100a14268; end: 100a1452b; -[SCHostPrewarmManagerJobProcessor _submitNetworkReconnectJob] */

/* WARNING: Possible PIC construction at 0x000100a142a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a143d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a14480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a144dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a144ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a144e0) */
/* WARNING: Removing unreachable block (ram,0x000100a14484) */
/* WARNING: Removing unreachable block (ram,0x000100a14474) */
/* WARNING: Removing unreachable block (ram,0x000100a14464) */
/* WARNING: Removing unreachable block (ram,0x000100a1441c) */
/* WARNING: Removing unreachable block (ram,0x000100a14444) */
/* WARNING: Removing unreachable block (ram,0x000100a14420) */
/* WARNING: Removing unreachable block (ram,0x000100a143d8) */
/* WARNING: Removing unreachable block (ram,0x000100a1439c) */
/* WARNING: Removing unreachable block (ram,0x000100a142a8) */
/* WARNING: Removing unreachable block (ram,0x000100a14510) */
/* WARNING: Removing unreachable block (ram,0x000100a142ac) */
/* WARNING: Removing unreachable block (ram,0x000100a144f0) */

void FUN_100a14268(long param_1,undefined8 param_2)

{
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf350);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100a1452c; end: 100a1455b; -[SCIdleMonitorV1 configureWithMainActorThrottlerServices:] */

void FUN_100a1452c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a1455c; end: 100a14617; -[SCSystemServicesProviderImplementation startupInfoService] */

void FUN_100a1455c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100a14590();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a14618; end: 100a14667; -[SCScopeGraph setStartupInfoService:] */

/* WARNING: Possible PIC construction at 0x000100a14654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a14658) */

void FUN_100a14618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c4d100(uVar1);
  func_0x000107c61180();
  func_0x000107c59824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a14668; end: 100a14793;  */

/* WARNING: Possible PIC construction at 0x000100a14724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a14728) */

void FUN_100a14668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x28);
  dVar5 = *(double *)(lVar1 + 0x38);
  dVar4 = -1.0;
  if (dVar5 != -1.0) {
    func_0x000107c6071c();
    lVar1 = *(long *)(param_1 + 0x28);
    if (10.0 < dVar4 - dVar5) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_1052e1ec0;
      puStack_70 = &UNK_110876410;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lStack_68 = lVar1;
      func_0x000107c61174(uVar2);
      uStack_50 = *(undefined8 *)(param_1 + 0x38);
      lVar3 = *(long *)(param_1 + 0x30);
      uStack_60 = uVar2;
      func_0x000107c61174(lVar3);
      uStack_48 = *(undefined8 *)(param_1 + 0x40);
      lStack_58 = lVar3;
      func_0x000107c4ba38(lVar1,param_2,&puStack_88,0);
      lVar1 = lStack_58;
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c3e718(lVar1);
  func_0x000107c61180();
  func_0x000107c4e2e0(*(undefined8 *)(param_1 + 0x38),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x2c),
                      *(undefined8 *)(param_1 + 0x40));
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100a14794; end: 100a14817; -[SCMutliplexingScopeLifecycleMonitor setStartupInfoService:] */

void FUN_100a14794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100a14818;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a14818; end: 100a14823;  */

void FUN_100a14818(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setStartupInfoService__1126601e0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100a14824; end: 100a14827; -[SCStartupScopeLifecycleMonitor setStartupInfoService:] */

void FUN_100a14824(void)

{
  return;
}



/* Entry: 100a14828; end: 100a1482f; -[SCBatteryLogger batteryPageViewLogger] */

undefined8 FUN_100a14828(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 100a14830; end: 100a14997; -[SCBatteryPageViewLogger pageViewDidStartWithName:withPageViewStartTime:withPreviousPageName:batteryLevel:thermalState:isCharging:pageViewStartCpuTime:] */

void FUN_100a14830(double param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  dVar3 = param_1;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  if (((param_6 != 0) &&
      (uVar1 = param_6,
      func_0x000107c49d0c(param_6,param_5,&PTR____CFConstantStringClassReference_110f5a858),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_6,
     func_0x000107c49d0c(param_6,param_5,&PTR____CFConstantStringClassReference_110e1f6b8),
     (uVar1 & 1) == 0)) {
    func_0x000107c3b3e4(param_4);
    dStack_78 = dVar3;
    if (ABS(dVar3 - param_1) <= 2.0) {
      dStack_78 = param_1;
    }
    uVar2 = *(undefined8 *)(param_4 + 8);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_100a184d0;
    puStack_a0 = &UNK_1108766f8;
    lStack_98 = param_4;
    func_0x000107c61174(param_6);
    uStack_90 = param_6;
    func_0x000107c61174(param_7);
    uStack_88 = param_7;
    uStack_68 = param_2;
    func_0x000107c61174(param_8);
    uStack_80 = param_8;
    uStack_70 = param_3;
    uStack_64 = param_9;
    func_0x000107c4e524(uVar2,param_5,&puStack_b8);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uStack_88);
    func_0x000107c61170(uStack_90);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 100a14998; end: 100a1499b; -[SCNoOpScopeLifecycleMonitor setStartupInfoService:] */

void FUN_100a14998(void)

{
  return;
}



/* Entry: 100a1499c; end: 100a149e3; -[SCSystemServicesProviderImplementation applicationLifeCycleListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1499c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7f110;
  func_0x000107c61428(param_1 + _DAT_112d7f110,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a149e4; end: 100a14a33;  */

void FUN_100a149e4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d7f1e0 != 0) {
    return;
  }
  puVar1 = &UNK_1103b64a0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d7f1e0 = param_1;
  return;
}



/* Entry: 100a14a34; end: 100a14b17; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener application:didFinishLaunchingWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a14a34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_4 != 0) {
    uVar2 = 0;
    FUN_100a149e4(0);
    uVar3 = 0x112d7f1d8;
    FUN_100a14bd4(0x112d7f1d8,&UNK_10d93d430);
    func_0x000107c5f9e8(param_4,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar3);
  pcVar4 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_3,param_4,uVar3,lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 100a14b18; end: 100a14b1b; -[SCBatteryPageViewLogger _currentTimestamp] */

void FUN_100a14b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 100a14b1c; end: 100a14bd3;  */

undefined8 FUN_100a14b1c(void)

{
  int iVar1;
  
  if ((bRam000000011381a358 & 1) == 0) {
    iVar1 = 0x1381a358;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011381a2f0 = 0xe;
      puRam000000011381a2f8 = &UNK_10f2fe5c4;
      uRam000000011381a300 = 0x100;
      puRam000000011381a308 = &UNK_10582018c;
      puRam000000011381a310 = &UNK_1058201c4;
      ppuRam000000011381a2e8 = &PTR_DAT_110864c08;
      uRam000000011381a328 = 0;
      uRam000000011381a320 = 0;
      uRam000000011381a338 = 0;
      uRam000000011381a330 = 0;
      uRam000000011381a348 = 0;
      uRam000000011381a340 = 0;
      uRam000000011381a350 = 0;
      func_0x000107c60e34(&DAT_1050797f4,0x11381a2e8,0x100000000);
      func_0x000107c60e4c(0x11381a358);
    }
  }
  return 0x11381a2e8;
}



/* Entry: 100a14bd4; end: 100a14c13;  */

void FUN_100a14bd4(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100a149e4(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100a14c14; end: 100a14c1f; +[SCSnapchattersPinningMetadata table] */

undefined * FUN_100a14c14(void)

{
  return &UNK_10f2fe5fa;
}



/* Entry: 100a14c20; end: 100a14ca7;  */

void FUN_100a14c20(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100a14c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100a14ca8; end: 100a14d2f;  */

void FUN_100a14ca8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100a14d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100a14d30; end: 100a14d53;  */

void FUN_100a14d30(void)

{
  FUN_100a14bd4(0x112d7f1f8,&UNK_10d93d3f8);
  return;
}



/* Entry: 100a14d54; end: 100a14d57;  */

void FUN_100a14d54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar16 = *unaff_x20;
  puVar13 = *(ulong **)(lVar16 + 0x50);
  uVar14 = puVar13[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar14 + 0x40));
  lVar10 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar11 = 0x112d9dd00;
  lStack_d0 = lVar10;
  FUN_10002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar13,uVar11,0,0);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 8))(param_1,param_2,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar12 = unaff_x20[2];
  lVar15 = lVar12;
  func_0x000107c61434();
  lVar3 = lStack_a8;
  func_0x000107c5fc7c();
  if (lVar15 != 0) {
    lVar15 = 0;
    lStack_b8 = (long)*(int *)(lVar3 + 0x30);
    lStack_c0 = *(long *)(lVar16 + 0x58);
    pcStack_c8 = *(code **)(lStack_c0 + 8);
    lVar16 = lStack_d0;
    lStack_b0 = lVar10 - extraout_x8_00;
    do {
      lVar6 = lStack_b0;
      func_0x000107c5fc98(lStack_b0,lVar15,lVar12,lVar3);
      lVar10 = lVar15 + 1;
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a14ff8);
        (*pcVar2)();
      }
      uVar11 = *(undefined8 *)(lVar6 + lStack_b8);
      (**(code **)(uVar14 + 0x20))(lVar16,lVar6,puVar13);
      puVar7 = puVar13;
      (*pcStack_c8)(puVar13,lStack_c0);
      puVar8 = puVar7;
      func_0x000100a15000();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        FUN_100083b20(&uStack_a0);
        lVar3 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar16 = lStack_d0;
        (**(code **)(*(long *)(lVar3 + 8) + 8))(param_1,param_2,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar11);
        (**(code **)(uVar14 + 8))(lVar16,puVar13);
      }
      else {
        (**(code **)(uVar14 + 8))(lVar16,puVar13);
        func_0x000107c61574(uVar11);
      }
      lVar3 = lStack_a8;
      lVar6 = lVar12;
      func_0x000107c5fc7c(lVar12,lStack_a8);
      lVar15 = lVar15 + 1;
    } while (lVar10 != lVar6);
  }
  func_0x000107c6142c(lVar12);
  return;
}



/* Entry: 100a14d58; end: 100a14ff7;  */

void FUN_100a14d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar16 = *unaff_x20;
  puVar13 = *(ulong **)(lVar16 + 0x50);
  uVar14 = puVar13[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar14 + 0x40));
  lVar10 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar11 = 0x112d9dd00;
  lStack_d0 = lVar10;
  FUN_10002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar13,uVar11,0,0);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 8))(param_1,param_2,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar12 = unaff_x20[2];
  lVar15 = lVar12;
  func_0x000107c61434();
  lVar3 = lStack_a8;
  func_0x000107c5fc7c();
  if (lVar15 != 0) {
    lVar15 = 0;
    lStack_b8 = (long)*(int *)(lVar3 + 0x30);
    lStack_c0 = *(long *)(lVar16 + 0x58);
    pcStack_c8 = *(code **)(lStack_c0 + 8);
    lVar16 = lStack_d0;
    lStack_b0 = lVar10 - extraout_x8_00;
    do {
      lVar6 = lStack_b0;
      func_0x000107c5fc98(lStack_b0,lVar15,lVar12,lVar3);
      lVar10 = lVar15 + 1;
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a14ff8);
        (*pcVar2)();
      }
      uVar11 = *(undefined8 *)(lVar6 + lStack_b8);
      (**(code **)(uVar14 + 0x20))(lVar16,lVar6,puVar13);
      puVar7 = puVar13;
      (*pcStack_c8)(puVar13,lStack_c0);
      puVar8 = puVar7;
      func_0x000100a15000();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        FUN_100083b20(&uStack_a0);
        lVar3 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar16 = lStack_d0;
        (**(code **)(*(long *)(lVar3 + 8) + 8))(param_1,param_2,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar11);
        (**(code **)(uVar14 + 8))(lVar16,puVar13);
      }
      else {
        (**(code **)(uVar14 + 8))(lVar16,puVar13);
        func_0x000107c61574(uVar11);
      }
      lVar3 = lStack_a8;
      lVar6 = lVar12;
      func_0x000107c5fc7c(lVar12,lStack_a8);
      lVar15 = lVar15 + 1;
    } while (lVar10 != lVar6);
  }
  func_0x000107c6142c(lVar12);
  return;
}



/* Entry: 100a14ff8; end: 100a1502b;  */

undefined8 FUN_100a14ff8(void)

{
  return 8;
}



/* Entry: 100a1502c; end: 100a1504b;  */

void FUN_100a1502c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc4218);
  return;
}



/* Entry: 100a1504c; end: 100a150df;  */

/* WARNING: Possible PIC construction at 0x000100a150bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a150c0) */

void FUN_100a1504c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  FUN_100a1502c();
  func_0x000107c613fc();
  uVar2 = 0;
  FUN_10044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103fdfb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100a150e0; end: 100a15113;  */

void FUN_100a150e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a15114; end: 100a1511f;  */

void FUN_100a15114(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_38;
  
  FUN_100a15114();
  if ((param_1 & 1) == 0) {
    FUN_100083b20(&lStack_38);
    lVar3 = lStack_38;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar4);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  puVar5 = &UNK_1103fe0b8;
  func_0x000107c613fc(&UNK_1103fe0b8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar6 = 0xcb;
  func_0x0001009548b0(0xcb,0,0x60,4,0,0,&UNK_10d9819b8,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined **)(unaff_x20 + 0x30) = &UNK_101718fa0;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
  FUN_10058d438(uVar1,uVar2);
  return;
}



/* Entry: 100a15120; end: 100a15233;  */

void FUN_100a15120(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_38;
  
  FUN_100a15114();
  if ((param_1 & 1) == 0) {
    FUN_100083b20(&lStack_38);
    lVar3 = lStack_38;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar4);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  puVar5 = &UNK_1103fe0b8;
  func_0x000107c613fc(&UNK_1103fe0b8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar6 = 0xcb;
  func_0x0001009548b0(0xcb,0,0x60,4,0,0,&UNK_10d9819b8,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined **)(unaff_x20 + 0x30) = &UNK_101718fa0;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
  FUN_10058d438(uVar1,uVar2);
  return;
}



/* Entry: 100a15234; end: 100a15257;  */

void FUN_100a15234(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a15258; end: 100a15617;  */

void FUN_100a15258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a15618; end: 100a1562b;  */

undefined8 FUN_100a15618(void)

{
  byte *unaff_x20;
  
  return *(undefined8 *)(&UNK_10dcd3f80 + (ulong)*unaff_x20 * 8);
}



/* Entry: 100a1562c; end: 100a15727; -[SCPlusStoreKitSubscriptionTransactionProcessor initWithPerformer:paymentQueue:grpcClient:userService:] */

undefined1 *
FUN_100a1562c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f5f88;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a15728; end: 100a1572f;  */

void FUN_100a15728(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_100a15730();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d2130;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100a15730; end: 100a1574f;  */

void FUN_100a15730(void)

{
  func_0x000107c61168(&PTR_PTR_112daa4a8);
  return;
}



/* Entry: 100a15750; end: 100a15793;  */

void FUN_100a15750(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100a15730();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d2130;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100a15794; end: 100a1585f; -[SCPlusStoreKitGiftTransactionProcessor initWithPerformer:paymentQueue:grpcClient:] */

undefined1 *
FUN_100a15794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f5f78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a15860; end: 100a1589f;  */

void FUN_100a15860(void)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  func_0x000107c445c8(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 100a158a0; end: 100a15963; -[SCCircumstanceEngineReadinessMetricEmitterImpl handleApplicationDidFinishLaunching] */

void FUN_100a158a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_2);
  func_0x000107c6071c();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100a15964; end: 100a15a5f; -[SCPlusStoreKitStreakRestoreTransactionProcessor initWithPerformer:paymentQueue:grpcClient:nativeMessagingServices:] */

undefined1 *
FUN_100a15964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f5f80;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a15a60; end: 100a15a67;  */

void FUN_100a15a60(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_100a15abc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_1103b8ca0;
  return;
}



/* Entry: 100a15a68; end: 100a15abb;  */

void FUN_100a15a68(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_100a15abc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103b8ca0;
  return;
}



/* Entry: 100a15abc; end: 100a15adb;  */

void FUN_100a15abc(void)

{
  func_0x000107c61168(&PTR_PTR_112d9de18);
  return;
}



/* Entry: 100a15adc; end: 100a15b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a15adc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9dcc0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112d9dcc0,auStack_38,0,0);
  if (*(char *)(lVar2 + lVar1) == '\x01') {
    FUN_100a15b40(0);
    FUN_100a16330();
  }
  else {
    FUN_100a15b40(1);
  }
  return;
}



/* Entry: 100a15b40; end: 100a15c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a15b40(byte param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  *(byte *)(unaff_x20 + _DAT_112d9dcd8) = param_1;
  lVar3 = _DAT_112d9dcd0;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcd0,auStack_68,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar3);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    func_0x000107c61434(lVar4);
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    do {
      pcVar1 = (code *)puVar6[-1];
      uVar2 = *puVar6;
      bStack_69 = param_1 & 1;
      func_0x000107c6157c(uVar2);
      (*pcVar1)(&bStack_69);
      func_0x000107c61574(uVar2);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(lVar4);
    lVar4 = *(long *)(unaff_x20 + lVar3);
  }
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 100a15c10; end: 100a15c13;  */

void FUN_100a15c10(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_100083b20(&uStack_68);
      uVar4 = uStack_68;
      func_0x000107c614f0(uStack_68);
      puVar3 = &UNK_110567958;
      func_0x000107c613fc(&UNK_110567958,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,lVar1);
      pcVar5 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(puVar3);
      (*pcVar5)(&UNK_100c166f0,puVar3,uVar4,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61578(puVar3,2);
    }
    else {
      func_0x000100c16730();
      FUN_100083b20(&uStack_68);
      uVar2 = uStack_68;
      func_0x000107c614f0(uStack_68);
      pcVar5 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(uVar4);
      (*pcVar5)(&UNK_1028ef25c,uVar4,uVar2,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100a15c14; end: 100a15c37;  */

void FUN_100a15c14(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 100a15c38; end: 100a15c43;  */

void FUN_100a15c38(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_100083b20(&uStack_68);
      uVar4 = uStack_68;
      func_0x000107c614f0(uStack_68);
      puVar3 = &UNK_110567958;
      func_0x000107c613fc(&UNK_110567958,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,lVar1);
      pcVar5 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(puVar3);
      (*pcVar5)(&UNK_100c166f0,puVar3,uVar4,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61578(puVar3,2);
    }
    else {
      func_0x000100c16730();
      FUN_100083b20(&uStack_68);
      uVar2 = uStack_68;
      func_0x000107c614f0(uStack_68);
      pcVar5 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(uVar4);
      (*pcVar5)(&UNK_1028ef25c,uVar4,uVar2,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100a15c44; end: 100a15d8f;  */

void FUN_100a15c44(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_100083b20(&uStack_68);
      uVar1 = uStack_68;
      func_0x000107c614f0(uStack_68);
      puVar2 = &UNK_110567958;
      func_0x000107c613fc(&UNK_110567958,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,param_2);
      pcVar3 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(puVar2);
      (*pcVar3)(&UNK_100c166f0,puVar2,uVar1,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61578(puVar2,2);
    }
    else {
      func_0x000100c16730();
      FUN_100083b20(&uStack_68);
      uVar1 = uStack_68;
      func_0x000107c614f0(uStack_68);
      pcVar3 = *(code **)(lStack_60 + 0x40);
      func_0x000107c6157c(param_4);
      (*pcVar3)(&UNK_1028ef25c,param_4,uVar1,lStack_60);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61574(param_4);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100a15d90; end: 100a15e8b; -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor initWithPerformer:paymentQueue:grpcClient:nativeMessagingServices:] */

undefined1 *
FUN_100a15d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f5f68;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a15e8c; end: 100a15fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a15e8c(code *param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_68,0,0);
  if (*(char *)(unaff_x20 + lVar5) == '\x01') {
    (*param_1)();
  }
  else {
    func_0x000107c613fc(param_3,0x20,7);
    *(code **)(param_3 + 0x10) = param_1;
    *(undefined8 *)(param_3 + 0x18) = param_2;
    lVar5 = *param_4;
    func_0x000107c61428(unaff_x20 + lVar5,auStack_80,0x21,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar5);
    func_0x000107c6157c(param_2);
    uVar2 = uVar4;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar5) = uVar4;
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001008eea20(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4,0x112d9de78,&UNK_10dbfb6a0);
      *(ulong *)(unaff_x20 + lVar5) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001008eea20(uVar4,uVar2 + 1,1,uVar3,0x112d9de78,&UNK_10dbfb6a0);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    lVar1 = uVar4 + uVar2 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = param_5;
    *(long *)(lVar1 + 0x28) = param_3;
    *(ulong *)(unaff_x20 + lVar5) = uVar4;
    func_0x000107c614a8(auStack_80);
  }
  return;
}



/* Entry: 100a15fe4; end: 100a1600f;  */

void FUN_100a15fe4(undefined8 param_1,undefined8 param_2)

{
  FUN_100a15e8c(param_1,param_2,&UNK_1103b8c38,&DAT_112d9dce8,&UNK_100c16694);
  return;
}



/* Entry: 100a16010; end: 100a160db; -[SCPlusStoreKitDreamsTransactionProcessor initWithPerformer:paymentQueue:grpcClient:] */

undefined1 *
FUN_100a16010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f5f70;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a160dc; end: 100a161ff; -[SCPlusStoreKitBitmojiTransactionProcessor initWithPerformer:paymentQueue:grpcClient:v2GrpcClient:configProvider:] */

undefined1 *
FUN_100a160dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126f5f60;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a16200; end: 100a16203;  */

void FUN_100a16200(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a16204; end: 100a16227;  */

void FUN_100a16204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a16228; end: 100a1622f;  */

void FUN_100a16228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a16230; end: 100a16263;  */

void FUN_100a16230(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a16264; end: 100a1632f; -[SCPlusStoreKitALCTransactionProcessor initWithPerformer:paymentQueue:grpcClient:] */

undefined1 *
FUN_100a16264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f5f58;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a16330; end: 100a164c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a16330(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar7 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_68,1,0);
  lVar4 = _DAT_112d9dce0;
  if ((*(byte *)(unaff_x20 + lVar7) & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d9dce0,auStack_80,1,0);
    lVar5 = *(long *)(unaff_x20 + lVar4);
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 != 0) {
      func_0x000107c61434(lVar5);
      puVar8 = (undefined8 *)(lVar5 + 0x28);
      do {
        pcVar1 = (code *)puVar8[-1];
        uVar2 = *puVar8;
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61574(uVar2);
        puVar8 = puVar8 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      func_0x000107c6142c(lVar5);
      lVar5 = *(long *)(unaff_x20 + lVar4);
    }
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(unaff_x20 + lVar4) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(lVar5);
    func_0x000107c61428(0x112d9dc68,auStack_98,0,0);
    if ((bRam0000000112d9dc68 & 1) == 0) {
      (**(code **)(*(long *)(unaff_x20 + _DAT_112d9dcf0) + 0x10))
                (*(undefined8 *)(unaff_x20 + _DAT_112d9dcf8));
    }
    *(undefined1 *)(unaff_x20 + lVar7) = 1;
    lVar4 = _DAT_112d9dce8;
    func_0x000107c61428(unaff_x20 + _DAT_112d9dce8,auStack_b0,1,0);
    lVar6 = *(long *)(unaff_x20 + lVar4);
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      func_0x000107c61434(lVar6);
      puVar8 = (undefined8 *)(lVar6 + 0x28);
      do {
        pcVar1 = (code *)puVar8[-1];
        uVar2 = *puVar8;
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61574(uVar2);
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      func_0x000107c6142c(lVar6);
      lVar6 = *(long *)(unaff_x20 + lVar4);
    }
    *(undefined **)(unaff_x20 + lVar4) = puVar3;
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 100a164c4; end: 100a164d3;  */

void FUN_100a164c4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100a164d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 100a164d4; end: 100a16523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a164d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c57f0c(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127208dc),param_2,
                      param_2);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  func_0x000107c4c4f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a16524; end: 100a16533; -[SCSnapchatScopeGraph setRootScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a16524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf19190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f8e0),PTR_s_beginWithRootScope__1125a3e08);
  return;
}



/* Entry: 100a16534; end: 100a16813; -[SCScopeLifecycle beginWithRootScope:] */

void FUN_100a16534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c61158();
  FUN_100a16814();
  func_0x000107c61180();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10b0ad0a8;
  puStack_60 = &UNK_11087bb90;
  func_0x000107c61174();
  ppuVar2 = &puStack_78;
  uStack_58 = uVar1;
  FUN_1001071d4(ppuVar2);
  func_0x000107c61170(uStack_58);
  FUN_100a168a4();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)
                       (*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x100) * 8));
  func_0x000107c61180();
  func_0x000107c49d0c(uVar1,param_2,puVar3);
  lVar4 = param_1;
  func_0x000107c52020(param_1,param_2,uVar1);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar4;
  func_0x000107c61170(uVar6);
  lVar4 = param_1;
  func_0x000107c3af5c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar4;
  func_0x000107c61170(uVar6);
  func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x108),param_2,*(undefined8 *)(param_1 + 0xf8),uVar1
                     );
  func_0x000107c40a6c(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4d100(uVar6);
  func_0x000107c61180();
  func_0x000107c4b600();
  func_0x000107c61170(uVar6);
  lVar4 = param_1;
  func_0x000107c508ec(param_1);
  func_0x000107c61180();
  func_0x000107c42c20();
  func_0x000107c61170(lVar4);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar4 = param_1;
  func_0x000107c42ce0(param_1);
  func_0x000107c61180();
  func_0x000107c5a74c(puVar5,param_2,lVar4);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c409f8(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4d100(uVar6);
  func_0x000107c61180();
  func_0x000107c4b5fc();
  func_0x000107c61170(uVar6);
  func_0x000107c4297c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(puVar3);
  func_0x0001000e2a84(ppuVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a16814; end: 100a168a3;  */

void FUN_100a16814(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c60b14();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3ff54();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4aa28();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100a168a4; end: 100a1690b;  */

undefined1 FUN_100a168a4(void)

{
  if (lRam00000001137fc060 != -1) {
    FUN_10002a2fc(0x1137fc060,&PTR___NSConcreteGlobalBlock_110d662f8);
  }
  return uRam00000001137fc000;
}



/* Entry: 100a1690c; end: 100a1692b; -[SCScopeLifecycle servicesContainer:] */

void FUN_100a1690c(void)

{
  func_0x000107c3c4f8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1692c; end: 100a1699f; -[SCScopeLifecycle _servicesContainer:externallyAccessible:] */

void FUN_100a1692c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df880;
  func_0x000107c610f4(PTR_PTR_1126df880);
  func_0x000107c464d4();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a169a0; end: 100a169ab;  */

void FUN_100a169a0(void)

{
  return;
}



/* Entry: 100a169ac; end: 100a16a0f;  */

void FUN_100a169ac(void)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined8 uStack_30;
  long lVar2;
  
  FUN_100a169a0();
  FUN_10063b5cc();
  if (uStack_30 != 0) {
    *(undefined4 *)(uStack_30 + 0x80) = *(undefined4 *)(unaff_x19 + 0x20);
    if ((*(byte *)(uStack_30 + 0xc2) & 1) == 0) {
      lVar2 = uStack_30;
      FUN_100a16ad0();
      uVar1 = (undefined1)lVar2;
      FUN_100a17e00();
      *(undefined1 *)(uStack_30 + 0xc1) = uVar1;
    }
    FUN_100a17e14();
  }
  FUN_100638f84();
  return;
}



/* Entry: 100a16a10; end: 100a16acf; -[SCServicesContainer initWithDelegate:serviceClassType:externallyAccessible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100a16a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_112705750;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_11278ca48),param_3);
    lVar3 = (long)_DAT_11278ca4c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278ca50) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a16ad0; end: 100a16c37;  */

void FUN_100a16ad0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_f0 [80];
  byte bStack_a0;
  undefined1 auStack_98 [80];
  long lStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar3 = 0x98;
  FUN_1005ec950();
  *(undefined1 *)(param_1 + 0x124) = uVar3;
  iVar4 = 0x10ce9bb0;
  FUN_1003ba188();
  FUN_1005e774c(&lStack_48,&UNK_10f76e8bc,0x24,"",0);
  if (lStack_48 == CONCAT44(uStack_3c,iStack_40)) {
    auStack_f0[0] = 0;
    bStack_a0 = 0;
  }
  else {
    FUN_100a17b44(auStack_98);
    puVar5 = auStack_98;
    FUN_10006369c(puVar5,lStack_48,iStack_40 - (int)lStack_48);
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      auStack_f0[0] = 0;
    }
    else {
      FUN_100a17c2c(auStack_f0,auStack_98);
    }
    bStack_a0 = !bVar1;
    FUN_100a17d14(auStack_98);
  }
  FUN_100100fec(&lStack_48);
  iVar2 = *(int *)(param_1 + 0x120);
  if (*(char *)(param_1 + 0x118) == '\x01') {
    FUN_100a17d14(param_1 + 200);
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (((iVar4 == 0) || (iVar4 - 3U < 0xfffffffe)) || ((bStack_a0 & 1) == 0)) {
    if (iVar2 != 0) {
      func_0x000107c2fee8(param_1);
    }
  }
  else {
    FUN_100a17c2c(param_1 + 200,auStack_f0);
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(int *)(param_1 + 0x120) = iVar4;
  }
  FUN_100a17d9c(auStack_f0);
  *(undefined1 *)(param_1 + 0xc2) = 1;
  return;
}



/* Entry: 100a16c38; end: 100a16caf; -[SCScopeLifecycle _buildLifecycleName] */

void FUN_100a16c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51998();
  func_0x000107c61180();
  func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110f5b9d8);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a16cb0; end: 100a16cff; -[SCScopeLifecycle scopePath] */

void FUN_100a16cb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c3ecfc();
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    func_0x000107c61170(uVar1);
    lVar2 = *(long *)(param_1 + 0x38);
  }
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100a16d00; end: 100a16e2f; -[SCScopeLifecycle buildScopePath] */

void FUN_100a16d00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x000107c4e350();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    func_0x000107c51994();
    func_0x000107c61180();
    func_0x000107c51804(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    func_0x000107c61180();
  }
  else {
    lVar1 = param_1;
    func_0x000107c4e350();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c51998();
    func_0x000107c61180();
    func_0x000107c51994();
    func_0x000107c61180();
    func_0x000107c51804(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    param_1 = lVar1;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


