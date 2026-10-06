/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040bd9a4; end: 1040bdadb;  */

void FUN_1040bd9a4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = 0x112da1578;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = 0x112da1570;
  func_0x0001000285a8(0x112da1570,&UNK_10d944870);
  lVar9 = *(long *)(lVar2 + -8);
  uVar10 = uVar4 + lVar6 + (ulong)*(byte *)(lVar9 + 0x50) &
           ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar9 + 0x40);
  lVar6 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar4,lVar1);
  (**(code **)(lVar9 + 8))(unaff_x20 + uVar10,lVar2);
  (**(code **)(lVar8 + 8))
            (unaff_x20 + (uVar10 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1040bdadc; end: 1040bdb47;  */

void FUN_1040bdadc(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1040be0d0;
  plVar2[9] = lVar3;
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650,uVar1);
  }
  lVar3 = lRam0000000113813118;
  plVar2[10] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bae6c,lVar3,0);
  return;
}



/* Entry: 1040bdb48; end: 1040bdb73;  */

void FUN_1040bdb48(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1040bdb74; end: 1040bdbdf;  */

void FUN_1040bdb74(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_100c8ce58;
  plVar2[9] = lVar3;
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650,uVar1);
  }
  lVar3 = lRam0000000113813118;
  plVar2[10] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bae6c,lVar3,0);
  return;
}



/* Entry: 1040bdbe0; end: 1040bdc4f;  */

void FUN_1040bdbe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1040be0b8;
  (*(code *)&UNK_1000ac80c)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1040bdc50; end: 1040bdce7;  */

void FUN_1040bdc50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  plVar5 = (long *)0xc0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1040be0d4;
  plVar5[8] = lVar6;
  plVar5[9] = lVar7;
  *(undefined1 *)((long)plVar5 + 0x21) = uVar3;
  plVar5[6] = lVar1;
  plVar5[7] = lVar2;
  plVar5[5] = param_1;
  uVar4 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  *(undefined4 *)((long)plVar5 + 0x24) = uVar4;
  plVar5[10] = *(long *)(lVar7 + 0xd0);
  plVar5[0xb] = *(long *)(lVar7 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000f24b4,0,0);
  return;
}



/* Entry: 1040bdce8; end: 1040bdd77;  */

void FUN_1040bdce8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x30;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1040be0d8;
  plVar7[2] = param_1;
  plVar6 = (long *)0xd0;
  func_0x000107c615b8(0xd0,uVar1,uVar3);
  plVar7[3] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)&UNK_100c8cc70;
  plVar6[6] = lVar8;
  plVar6[7] = lVar2;
  *(undefined1 *)((long)plVar6 + 0xc9) = uVar5;
  plVar6[5] = lVar4;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,&UNK_1000da650);
  }
  lVar2 = lRam0000000113813118;
  plVar6[8] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000f27d8,lVar2,0);
  return;
}



/* Entry: 1040bdd78; end: 1040bde3b;  */

void FUN_1040bdd78(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1578;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1040be0e0;
  plVar2[9] = lVar4;
  plVar2[10] = lVar5;
  plVar2[8] = unaff_x20 + uVar6;
  lVar4 = 0x113060898;
  func_0x0001000285a8(0x113060898,&UNK_10dcd5f68,uVar1);
  plVar2[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xc] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000edd20,0,0);
  return;
}



/* Entry: 1040bde3c; end: 1040bdeff;  */

void FUN_1040bde3c(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1570;
  func_0x0001000285a8(0x112da1570,&UNK_10d944870);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1040be0e4;
  plVar2[0x11] = lVar4;
  plVar2[0x12] = lVar5;
  plVar2[0x10] = unaff_x20 + uVar6;
  lVar4 = 0x113060890;
  func_0x0001000285a8(0x113060890,&UNK_10dcd5f50,uVar1);
  plVar2[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x14] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000eded0,0,0);
  return;
}



/* Entry: 1040bdf00; end: 1040bdfc3;  */

void FUN_1040bdf00(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1040be0e8;
  plVar2[0xf] = lVar4;
  plVar2[0x10] = lVar5;
  plVar2[0xe] = unaff_x20 + uVar6;
  lVar4 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880,uVar1);
  plVar2[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x12] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x13] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000ee69c,0,0);
  return;
}



/* Entry: 1040bdfc4; end: 1040be057;  */

void FUN_1040bdfc4(long param_1)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x0001000285a8();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  uVar3 = *(long *)(lVar1 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2,param_1);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar3));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1040be058; end: 1040be06f;  */

undefined1 FUN_1040be058(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1040be070; end: 1040be0af;  */

void FUN_1040be070(void)

{
  undefined *puVar1;
  
  if (puRam00000001130608a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5fd8;
  _swift_getWitnessTable(&UNK_10dcd5fd8,&UNK_110744d00);
  puRam00000001130608a0 = puVar1;
  return;
}



/* Entry: 1040be0b0; end: 1040be0f7;  */

void FUN_1040be0b0(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bbb78;
  }
  else {
    *(long *)(unaff_x22 + 0x1c8) = unaff_x20;
    pcVar1 = FUN_1040bbc18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040be0f8; end: 1040be153;  */

long FUN_1040be0f8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined2 *)(unaff_x20 + 0x18) = 0x201;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000d6d38();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  return unaff_x20;
}



/* Entry: 1040be154; end: 1040be333;  */

void FUN_1040be154(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x0001000298f0();
    _swift_beginAccess();
    uVar4 = *param_1;
    _objc_retain(uVar4);
    func_0x000100069b5c(uVar7);
    _objc_release(uVar4);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_68,1,0);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(lVar8 + 0x40);
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = *(undefined8 *)
               (*(long *)(lVar8 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
               lVar10 * 0x200);
      func_0x0001000298f0();
      _swift_beginAccess();
      _objc_retain();
      func_0x000100069b5c(uVar4);
      _objc_release();
    }
    bVar3 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar3) break;
    if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
      _swift_release(lVar8);
      puVar5 = *(undefined8 **)(unaff_x20 + 0x20);
      *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      _swift_bridgeObjectRelease();
      if (*(char *)(unaff_x20 + 0x30) != '\x01') {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x0001000298f0();
        _swift_beginAccess();
        uVar4 = *puVar5;
        _objc_retain(uVar4);
        func_0x000100069b5c(uVar7);
        _objc_release(uVar4);
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
        *(undefined1 *)(unaff_x20 + 0x30) = 1;
      }
      return;
    }
    uVar9 = ((ulong *)(lVar8 + 0x40))[lVar10];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1040be334);
  (*pcVar2)();
}



/* Entry: 1040be334; end: 1040be347;  */

bool FUN_1040be334(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040be348; end: 1040be537;  */

void FUN_1040be348(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x656c6449746f4e;
  if (cVar4 != '\x01') {
    uVar3 = 0x7265746544746f4e;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xed000064656e696d;
  }
  uVar2 = 0x656c6449;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040be538; end: 1040be59b;  */

void FUN_1040be538(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x656c6449746f4e;
  if (cVar4 != '\x01') {
    uVar3 = 0x7265746544746f4e;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xed000064656e696d;
  }
  uVar2 = 0x656c6449;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1040be59c; end: 1040be5bf;  */

void FUN_1040be59c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040be5c0; end: 1040be7b7;  */

void FUN_1040be5c0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x1130606d8,&UNK_10dcd6120);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      _memmove(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1040be700);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1040be6e0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
    } while( true );
  }
LAB_1040be6e0:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1040be7b8; end: 1040be943;  */

void FUN_1040be7b8(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_98 [72];
  
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x38;
  uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  uVar9 = 1L << (uVar8 & 0x3f);
  if ((uVar9 & *(ulong *)(lVar1 + (uVar8 >> 6) * 8)) == 0) {
    uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar6 = ~uVar6;
    uVar5 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar6);
    if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) & uVar9) != 0) {
      uVar9 = uVar5 + 1 & uVar6;
      do {
        __ss6HasherV5_seedABSi_tcfC(auStack_98,*(undefined8 *)(lVar7 + 0x28));
        uVar5 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar5 = uVar5 & uVar6;
        if ((long)param_1 < (long)uVar9) {
          if (uVar5 < uVar9) {
LAB_1040be89c:
            if ((long)param_1 < (long)uVar5) goto LAB_1040be844;
          }
          puVar2 = (undefined1 *)(*(long *)(lVar7 + 0x30) + param_1);
          puVar3 = (undefined1 *)(*(long *)(lVar7 + 0x30) + uVar8);
          if ((param_1 != uVar8) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar8;
          }
        }
        else if (uVar9 <= uVar5) goto LAB_1040be89c;
LAB_1040be844:
        uVar8 = uVar8 + 1 & uVar6;
      } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
    }
    uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar6) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar6);
  }
  if (SBORROW8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1040be944);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + -1;
  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
  return;
}



/* Entry: 1040be944; end: 1040be9a7;  */

ulong FUN_1040be944(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1040be9a8; end: 1040be9ab;  */

void FUN_1040be9a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130608a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd6020;
  _swift_getWitnessTable(&UNK_10dcd6020,&UNK_110744dd0);
  puRam00000001130608a8 = puVar1;
  return;
}



/* Entry: 1040be9ac; end: 1040be9eb;  */

void FUN_1040be9ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130608a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd6020;
  _swift_getWitnessTable(&UNK_10dcd6020,&UNK_110744dd0);
  puRam00000001130608a8 = puVar1;
  return;
}



/* Entry: 1040be9ec; end: 1040beb4f;  */

int FUN_1040be9ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040bea68;
        goto LAB_1040bea4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040bea4c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1040bea68:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040beb50; end: 1040beb7f;  */

void FUN_1040beb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001000effa8(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1040beb80; end: 1040bebcf;  */

byte FUN_1040beb80(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  
  uVar3 = param_1[2];
  bVar1 = *(byte *)(param_1 + 3);
  bVar2 = *(byte *)(param_2 + 3);
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      bVar4 = 0;
      goto LAB_1040bec78;
    }
  }
  else {
    bVar4 = 0;
    if ((*(char *)(param_2 + 1) == '\x01') || ((int)*param_1 != (int)*param_2)) goto LAB_1040bec78;
  }
  func_0x0001000ef64c(uVar3,param_2[2]);
  bVar4 = 0;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar1 ^ bVar2 ^ 1;
  }
LAB_1040bec78:
  return bVar4 & 1;
}



/* Entry: 1040bebd0; end: 1040bec0f;  */

undefined8 FUN_1040bebd0(void)

{
  if (lRam00000001130609e8 != -1) {
    _swift_once(0x1130609e8,0x1040beba8);
  }
  return 0x113813140;
}



/* Entry: 1040bec10; end: 1040becb3;  */

uint FUN_1040bec10(int param_1,char param_2,ulong param_3,uint param_4,int param_5,char param_6,
                  undefined8 param_7,uint param_8)

{
  uint uVar1;
  
  if (param_2 == '\x01') {
    if (param_6 != '\x01') {
      uVar1 = 0;
      goto LAB_1040bec78;
    }
  }
  else {
    uVar1 = 0;
    if ((param_6 == '\x01') || (param_1 != param_5)) goto LAB_1040bec78;
  }
  func_0x0001000ef64c(param_3,param_7);
  uVar1 = 0;
  if ((param_3 & 1) != 0) {
    uVar1 = param_4 ^ param_8 ^ 1;
  }
LAB_1040bec78:
  return uVar1 & 1;
}



/* Entry: 1040becb4; end: 1040becbb;  */

void FUN_1040becb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1040becbc; end: 1040becff;  */

undefined8 * FUN_1040becbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1040bed00; end: 1040bed5b;  */

undefined8 * FUN_1040bed00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1040bed5c; end: 1040beda7;  */

undefined8 * FUN_1040bed5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1040beda8; end: 1040bee43;  */

int FUN_1040beda8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040bee44; end: 1040beef7;  */

void FUN_1040bee44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = 0;
  FUN_1040beef8();
  puVar2 = PTR___sSciTL_11034fea8;
  iVar1 = *(int *)(lVar3 + 0x24);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + iVar1,1,1,lVar3);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,puVar2,PTR___s13AsyncIteratorSciTl_11034fb50);
                    /* WARNING: Could not recover jumptable at 0x0001040beef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  return;
}



/* Entry: 1040beef8; end: 1040bef03;  */

void FUN_1040beef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7ef788);
  return;
}



/* Entry: 1040bef04; end: 1040befeb;  */

void FUN_1040bef04(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar6 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar6 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  lVar1 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040befec,0,0);
  return;
}



/* Entry: 1040befec; end: 1040bf27f;  */

void FUN_1040befec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar9 = *(long *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  iVar4 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 200) = iVar4;
  pcVar10 = *(code **)(lVar9 + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar10;
  (*pcVar10)(uVar11,*(long *)(unaff_x22 + 0x20) + (long)iVar4,uVar12);
  pcVar10 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar10;
  uVar8 = uVar11;
  (*pcVar10)(uVar11,1,uVar6);
  pcVar10 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x98) = pcVar10;
  (*pcVar10)(uVar11,uVar12);
  puVar5 = PTR___sSciTL_11034fea8;
  if ((int)uVar8 == 1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar12,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar12,uVar8,uVar6,puVar5,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1040bf280;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  }
  else {
    pcVar10 = *(code **)(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0x88))
              (uVar12,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
               *(undefined8 *)(unaff_x22 + 0x58));
    (*pcVar10)(uVar12,1,uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    if ((int)uVar12 == 1) {
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
      lVar9 = 0;
      _swift_getTupleTypeMetadata2(0,uVar6,uVar6,0,0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),1,1);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040bf1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
    *(code **)(unaff_x22 + 0xb0) = pcVar10;
    (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x70),uVar6);
    puVar5 = PTR___sSciTL_11034fea8;
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar12,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar12,uVar8,uVar6,puVar5,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1040bf4ac;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar7,uVar8,uVar6,uVar12);
  return;
}



/* Entry: 1040bf280; end: 1040bf2db;  */

void FUN_1040bf280(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bf2dc;
  }
  else {
    pcVar1 = FUN_1040bf6c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040bf2dc; end: 1040bf4ab;  */

void FUN_1040bf2dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x28))
            (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
             *(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58));
  pcVar8 = *(code **)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x88))
            (uVar10,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
             *(undefined8 *)(unaff_x22 + 0x58));
  (*pcVar8)(uVar10,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar10 == 1) {
    (**(code **)(unaff_x22 + 0x98))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar9,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),1,1);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040bf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
  *(code **)(unaff_x22 + 0xb0) = pcVar8;
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x70),uVar9);
  puVar5 = PTR___sSciTL_11034fea8;
  uVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar10,uVar1,uVar9,puVar5,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1040bf4ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x68),uVar9,uVar10);
  return;
}



/* Entry: 1040bf4ac; end: 1040bf507;  */

void FUN_1040bf4ac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bf508;
  }
  else {
    pcVar1 = FUN_1040bf738;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040bf508; end: 1040bf6c3;  */

void FUN_1040bf508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = uVar8;
  (**(code **)(unaff_x22 + 0x90))(uVar8,1,uVar9);
  bVar5 = (int)uVar10 != 1;
  if (bVar5) {
    pcVar12 = *(code **)(unaff_x22 + 0xb0);
    pcVar13 = *(code **)(unaff_x22 + 0x98);
    lVar14 = (long)*(int *)(unaff_x22 + 200);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar6 = *(long *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar11 = *(long *)(unaff_x22 + 0x20);
    lVar7 = *(long *)(unaff_x22 + 0x10);
    (*pcVar12)(uVar2,uVar8,uVar9);
    (*pcVar13)(lVar11 + lVar14,uVar1);
    (**(code **)(lVar6 + 0x10))(lVar11 + lVar14,uVar2,uVar9);
    (**(code **)(lVar6 + 0x38))(lVar11 + lVar14,0,1,uVar9);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar9,0,0);
    iVar4 = *(int *)(lVar6 + 0x30);
    (*pcVar12)(lVar7,uVar10,uVar9);
    (*pcVar12)(lVar7 + iVar4,uVar2,uVar9);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))(*(undefined8 *)(unaff_x22 + 0x50),uVar9);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0x98))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar10,uVar10,0,0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),!bVar5,1,lVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040bf6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bf6c4; end: 1040bf737;  */

void FUN_1040bf6c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040bf734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bf738; end: 1040bf7bb;  */

void FUN_1040bf738(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040bf7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bf7bc; end: 1040bf81b;  */

void FUN_1040bf7bc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1040bf81c;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar6;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar6,lVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[7] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[0xb] = lVar5;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0xc] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xe] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040befec,0,0);
  return;
}



/* Entry: 1040bf81c; end: 1040bf857;  */

void FUN_1040bf81c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040bf854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040bf858; end: 1040bf92b;  */

void FUN_1040bf858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040bf92c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040bf92c; end: 1040bf99b;  */

void FUN_1040bf92c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040bf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040bf99c; end: 1040bfa8b;  */

void FUN_1040bf99c(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar1,lVar2,uVar3);
  FUN_1040bee44(param_1,lVar1,lVar2,uVar3);
  return;
}



/* Entry: 1040bfa8c; end: 1040bfabb;  */

void FUN_1040bfa8c(long param_1)

{
  FUN_1040bf99c();
                    /* WARNING: Could not recover jumptable at 0x0001040bfab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040bfabc; end: 1040bfb47;  */

void FUN_1040bfabc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040bfb48; end: 1040bfb57;  */

void FUN_1040bfb48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6198,param_1);
  return;
}



/* Entry: 1040bfb58; end: 1040bfc33;  */

void FUN_1040bfb58(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040bfc34; end: 1040bfc43;  */

void FUN_1040bfc34(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001040bfc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 1040bfc44; end: 1040bfd03;  */

undefined8 FUN_1040bfc44(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Entry: 1040bfd04; end: 1040bfdf7;  */

uint * FUN_1040bfd04(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1040bfd9c;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1040bfd34;
    }
    if (1 < uVar7) goto LAB_1040bfd30;
  }
  else {
LAB_1040bfd30:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1040bfd34:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1040bfd9c:
                    /* WARNING: Could not recover jumptable at 0x0001040bfda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 1040bfdf8; end: 1040bffa3;  */

void FUN_1040bfdf8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040bff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 1040bffa4; end: 1040bffaf;  */

void FUN_1040bffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7ef74c);
  return;
}



/* Entry: 1040bffb0; end: 1040c007b;  */

void FUN_1040bffb0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = 0x13f;
  uVar4 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar4 < 0x40) {
    lStack_40 = *(long *)(lVar3 + -8) + 0x40;
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar3 = 0x13f;
    __sSqMa();
    if (uVar4 < 0x40) {
      lStack_38 = *(long *)(lVar3 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&lStack_40,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1040c007c; end: 1040c01eb;  */

long * FUN_1040c007c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar7 = PTR___sSciTL_11034fea8;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar13 = *(long *)(lVar8 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar4,puVar7,PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar9 + -8);
  uVar11 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  uVar1 = lVar14 + uVar11;
  lVar14 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar6 = *(uint *)(lVar13 + 0x50) | *(uint *)(lVar12 + 0x50);
  uVar3 = uVar6 & 0xff;
  if ((uVar3 < 8 && (uVar6 & 0x100000) == 0) &&
      (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + lVar14 < 0x19) {
    uVar11 = ~uVar11;
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar8);
    uVar2 = uVar1 + (long)param_1;
    uVar1 = uVar1 + (long)param_2;
    uVar10 = uVar1 & uVar11;
    (**(code **)(lVar12 + 0x30))(uVar10,1,lVar9);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar12 + 0x10))(uVar2 & uVar11,uVar1 & uVar11,lVar9);
      (**(code **)(lVar12 + 0x38))(uVar2 & uVar11,0,1,lVar9);
    }
    else {
      _memcpy(uVar2 & uVar11,uVar1 & uVar11,lVar14);
    }
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    param_1 = (long *)(lVar14 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040c01ec; end: 1040c02bf;  */

void FUN_1040c01ec(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR___sSciTL_11034fea8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar5 + -8);
  (**(code **)(lVar9 + 8))(param_1,lVar5);
  lVar9 = *(long *)(lVar9 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,puVar4,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = lVar9 + param_1 + uVar8;
  uVar6 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar5);
  if ((int)uVar6 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c02bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar5);
  return;
}



/* Entry: 1040c02c0; end: 1040c0997;  */

long FUN_1040c02c0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar6 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar9 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar3,puVar5,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar9 + -8);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar6 = lVar6 + uVar8;
  uVar1 = lVar6 + param_1;
  uVar2 = lVar6 + param_2;
  uVar7 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x30))(uVar7,1,lVar9);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar10 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar9);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar9);
  }
  else {
    lVar6 = *(long *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1040c0998; end: 1040c0c87;  */

void FUN_1040c0998(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  
  puVar9 = PTR___sSciTL_11034fea8;
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar21 = *(long *)(lVar10 + -8);
  uVar14 = *(uint *)(lVar21 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar6,puVar9,PTR___s7ElementSciTl_11034fb58);
  lVar13 = *(long *)(lVar11 + -8);
  uVar12 = *(uint *)(lVar13 + 0x54);
  uVar4 = 0;
  if (uVar12 != 0) {
    uVar4 = uVar12 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 <= uVar14) {
    uVar5 = uVar14;
  }
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar21 + 0x40) + uVar15;
  lVar17 = *(long *)(lVar13 + 0x40);
  if (uVar12 == 0) {
    lVar17 = lVar17 + 1;
  }
  lVar3 = (uVar2 & (uVar15 ^ 0xffffffffffffffff)) + lVar17;
  uVar20 = (uint)lVar3;
  uVar18 = (uint)param_2;
  bVar16 = 0;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar20 < 4) {
      uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar20 << 3 & 0x1f)) >>
              (ulong)(uVar20 << 3 & 0x1f)) + 1;
      bVar16 = 2;
      if (0xffff < uVar1) {
        bVar16 = 4;
      }
      if (uVar1 < 0x100) {
        bVar16 = 1 < uVar1;
      }
    }
    else {
      bVar16 = 1;
    }
  }
  if (uVar5 < uVar18) {
    uVar18 = uVar18 + ~uVar5;
    if (uVar20 < 4) {
      iVar19 = (uVar18 >> (ulong)(uVar20 << 3 & 0x1f)) + 1;
      if (uVar20 != 0) {
        uVar4 = uVar18 & (-1 << (ulong)(uVar20 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar3);
        uVar8 = (undefined2)uVar4;
        if (uVar20 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar20 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar18;
        }
      }
    }
    else {
      _bzero(param_1,lVar3);
      *param_1 = uVar18;
      iVar19 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + lVar3) = (char)iVar19;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + lVar3) = (short)iVar19;
    }
    else {
      *(int *)((long)param_1 + lVar3) = iVar19;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + lVar3) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + lVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar3) = 0;
    }
    if (uVar18 != 0) {
      if (uVar14 < uVar4) {
        param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar15);
        if (uVar4 < uVar18) {
          uVar12 = (uint)lVar17;
          uVar14 = 0xffffffff;
          if (uVar12 < 4) {
            uVar14 = ~(-1 << (ulong)((uVar12 & 3) << 3));
          }
          if (uVar12 == 0) {
            return;
          }
          uVar14 = uVar14 & (uVar4 - uVar18 ^ 0xffffffff);
          uVar4 = 4;
          if (uVar12 < 4) {
            uVar4 = uVar12;
          }
          _bzero(param_1);
          if ((int)uVar4 < 3) {
            if (uVar4 == 1) {
              *(char *)param_1 = (char)uVar14;
              return;
            }
            *(short *)param_1 = (short)uVar14;
            return;
          }
          if (uVar4 == 3) {
            *(short *)param_1 = (short)uVar14;
            *(char *)((long)param_1 + 2) = (char)(uVar14 >> 0x10);
            return;
          }
          *param_1 = uVar14;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_2 = (ulong)(uVar18 + 1);
        lVar10 = lVar11;
        uVar14 = uVar12;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040c0c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar14,lVar10);
      return;
    }
  }
  return;
}



/* Entry: 1040c0c88; end: 1040c0cab;  */

void FUN_1040c0c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040c0cac; end: 1040c0d23;  */

void FUN_1040c0cac(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001040c0cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040c0d24;
  plVar3[2] = *(long *)(unaff_x22 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c11dc,0,0);
  return;
}



/* Entry: 1040c0d24; end: 1040c0dc7;  */

void FUN_1040c0d24(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
      _swift_getObjectType(lVar3);
      __sScA15unownedExecutorScevgTj();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c0dc8,lVar3,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c0d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1);
  return;
}



/* Entry: 1040c0dc8; end: 1040c0e5f;  */

void FUN_1040c0dc8(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    _swift_willThrowTypedImpl((undefined8 *)(unaff_x22 + 0x10),uVar2,PTR___ss5ErrorWS_11034ee10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c0e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c0e60; end: 1040c0e77;  */

void FUN_1040c0e60(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c0e78,0,0);
  return;
}



/* Entry: 1040c0e78; end: 1040c0eef;  */

void FUN_1040c0e78(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001040c0eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1040c1580;
  plVar3[2] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c11dc,0,0);
  return;
}



/* Entry: 1040c0ef0; end: 1040c0f07;  */

void FUN_1040c0ef0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c0f08,0,0);
  return;
}



/* Entry: 1040c0f08; end: 1040c0f7f;  */

void FUN_1040c0f08(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001040c0f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040c0f80;
  plVar3[2] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c11dc,0,0);
  return;
}



/* Entry: 1040c0f80; end: 1040c0fc7;  */

void FUN_1040c0f80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001040c0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040c0fc8; end: 1040c0fdf;  */

void FUN_1040c0fc8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c0fe0,0,0);
  return;
}



/* Entry: 1040c0fe0; end: 1040c1063;  */

void FUN_1040c0fe0(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  puVar4 = *(undefined1 **)(lVar3 + 8);
  if (puVar4 != *(undefined1 **)(lVar3 + 0x10)) {
    uVar1 = *puVar4;
    *(undefined1 **)(lVar3 + 8) = puVar4 + 1;
    puVar4 = *(undefined1 **)(unaff_x22 + 0x10);
    *puVar4 = uVar1;
    puVar4[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001040c102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1040c1064;
  plVar2[2] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c11dc,0,0);
  return;
}



/* Entry: 1040c1064; end: 1040c10b7;  */

void FUN_1040c1064(undefined2 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    **(undefined2 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c10b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1040c10b8; end: 1040c112b;  */

void FUN_1040c10b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040c112c;
                    /* WARNING: Could not recover jumptable at 0x0001040c1128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1040c0c90)(param_2,param_3);
  return;
}



/* Entry: 1040c112c; end: 1040c1193;  */

void FUN_1040c112c(undefined2 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    **(undefined2 **)(lVar1 + 0x10) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(long **)(lVar1 + 0x18) = unaff_x20;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c1190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040c1194; end: 1040c11c3;  */

void FUN_1040c1194(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_slowDealloc(*(long *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040c11c4; end: 1040c11db;  */

void FUN_1040c11c4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c11dc,0,0);
  return;
}



/* Entry: 1040c11dc; end: 1040c12a3;  */

/* WARNING: Removing unreachable block (ram,0x0001040c122c) */

void FUN_1040c11dc(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x10) + 0x28) & 1) == 0) {
    __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
    piVar2 = (int *)(*(long **)(unaff_x22 + 0x10))[3];
    lVar6 = **(long **)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x18) = lVar6;
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    iVar1 = *piVar2;
    plVar5 = (long *)(ulong)(uint)piVar2[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040c12a4;
                    /* WARNING: Could not recover jumptable at 0x0001040c12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040c121c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0x100);
  return;
}



/* Entry: 1040c12a4; end: 1040c1303;  */

void FUN_1040c12a4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c1304;
  }
  else {
    pcVar1 = FUN_1040c135c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c1304; end: 1040c135b;  */

void FUN_1040c1304(void)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    iVar4 = 1;
    *(undefined1 *)(lVar8 + 0x28) = 1;
    pbVar3 = *(byte **)(lVar8 + 0x10);
    puVar6 = (undefined8 *)(lVar8 + 8);
    uVar7 = 0;
  }
  else {
    pbVar2 = *(byte **)(*(long *)(unaff_x22 + 0x18) + 0x10);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040c135c);
      (*pcVar1)();
    }
    iVar4 = 0;
    lVar5 = *(long *)(unaff_x22 + 0x10);
    puVar6 = (undefined8 *)(lVar5 + 8);
    *puVar6 = pbVar2;
    *(byte **)(lVar5 + 0x10) = pbVar2 + lVar8;
    pbVar3 = pbVar2 + 1;
    uVar7 = (uint)*pbVar2;
  }
  *puVar6 = pbVar3;
                    /* WARNING: Could not recover jumptable at 0x0001040c1354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7 | iVar4 << 8);
  return;
}



/* Entry: 1040c135c; end: 1040c13ab;  */

void FUN_1040c135c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  *(undefined1 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001040c13a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c13ac; end: 1040c13c7;  */

undefined * FUN_1040c13ac(void)

{
  return PTR___ss5ErrorWS_11034ee10;
}



/* Entry: 1040c13c8; end: 1040c1417;  */

undefined8 * FUN_1040c13c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 1040c1418; end: 1040c148f;  */

undefined8 * FUN_1040c1418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_1[4];
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 1040c1490; end: 1040c14db;  */

undefined8 * FUN_1040c1490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*param_1);
  uVar2 = param_2[4];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar1 = param_1[4];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 1040c14dc; end: 1040c15bb;  */

int FUN_1040c14dc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040c15bc; end: 1040c16cf;  */

void FUN_1040c15bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40),param_2,param_2);
  lVar1 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar2 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  lStack_80 = param_4;
  lStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  FUN_1040c16d0(0,&lStack_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Entry: 1040c16d0; end: 1040c16db;  */

void FUN_1040c16d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7ef838);
  return;
}



/* Entry: 1040c16dc; end: 1040c1857;  */

void FUN_1040c16dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s13AsyncIteratorSciTl_11034fb50;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar7 + 0x38);
  (*pcVar6)(param_1,1,1,lVar3);
  lVar4 = 0;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  FUN_1040c1858(0,&uStack_80);
  lVar8 = (long)*(int *)(lVar4 + 0x34);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,puVar2,puVar1);
  lVar10 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar10 + 0x38);
  (*pcVar9)(param_1 + lVar8,1,1,lVar4);
  lVar5 = 0;
  __sSqMa(0,lVar3);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
  (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar3);
  (*pcVar6)(param_1,0,1,lVar3);
  lVar3 = 0;
  __sSqMa(0,lVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + lVar8,lVar3);
  (**(code **)(lVar10 + 0x20))(param_1 + lVar8,param_3,lVar4);
  (*pcVar9)(param_1 + lVar8,0,1,lVar4);
  return;
}



/* Entry: 1040c1858; end: 1040c1863;  */

void FUN_1040c1858(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7ef88c);
  return;
}



/* Entry: 1040c1864; end: 1040c191b;  */

void FUN_1040c1864(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar4,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar2 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c191c,0,0);
  return;
}



/* Entry: 1040c191c; end: 1040c1b53;  */

void FUN_1040c191c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar6 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  (**(code **)(lVar6 + 0x30))(uVar8,1,lVar3);
  if ((int)uVar8 == 0) {
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar9,lVar3,PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98
              );
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040c1b54;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    lVar6 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    lVar4 = 0;
    __sSqMa(0,uVar7);
    (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar6,lVar4);
    (**(code **)(lVar1 + 0x38))(lVar6,1,1,uVar7);
    iVar2 = *(int *)(lVar3 + 0x34);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar7,uVar9,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar6 = lVar6 + iVar2;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar6,1,lVar3);
    if ((int)lVar6 != 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
      _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040c1a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar9,lVar3,PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98
              );
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1040c1d84;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar5,uVar9,lVar3,uVar7);
  return;
}



/* Entry: 1040c1b54; end: 1040c1baf;  */

void FUN_1040c1b54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040c1bb0;
  }
  else {
    pcVar1 = FUN_1040c1e00;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040c1bb0; end: 1040c1d83;  */

void FUN_1040c1bb0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = uVar8;
  (**(code **)(lVar5 + 0x30))(uVar8,1,uVar7);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x40));
    lVar3 = 0;
    __sSqMa(0,uVar9);
    (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar5,lVar3);
    uVar8 = 1;
    (**(code **)(lVar1 + 0x38))(lVar5,1,1,uVar9);
    iVar2 = *(int *)(lVar4 + 0x34);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar5 = lVar5 + iVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar9,uVar7,lVar4,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x88) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1040c1d84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar6,*(undefined8 *)(unaff_x22 + 0x10),lVar4,uVar9);
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar11 = *(code **)(lVar5 + 0x20);
    (*pcVar11)(uVar9,uVar8,uVar7);
    (*pcVar11)(uVar10,uVar9,uVar7);
    uVar8 = 0;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040c1d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c1d84; end: 1040c1dff;  */

void FUN_1040c1d84(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040c1f08,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001040c1dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1040c1e00; end: 1040c1f07;  */

void FUN_1040c1e00(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  lVar4 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar2,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar2,1,1,uVar1);
  iVar3 = *(int *)(lVar6 + 0x34);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x18),PTR___sSciTL_11034fea8
             ,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar2 + iVar3,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar2 + iVar3,1,1,lVar5);
  _swift_willThrow();
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040c1f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040c1f08; end: 1040c200f;  */

void FUN_1040c1f08(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  lVar4 = 0;
  __sSqMa(0,uVar1);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar2,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar2,1,1,uVar1);
  iVar3 = *(int *)(lVar6 + 0x34);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x18),PTR___sSciTL_11034fea8
             ,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar2 + iVar3,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar2 + iVar3,1,1,lVar5);
  _swift_willThrow();
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040c200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


