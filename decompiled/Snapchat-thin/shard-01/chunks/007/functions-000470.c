/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013b8544; end: 1013b8547;  */

void FUN_1013b8544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac660;
  func_0x000107c61520(&UNK_10dcac660,&UNK_110723970);
  puRam0000000112d79d50 = puVar1;
  return;
}



/* Entry: 1013b8548; end: 1013b8587;  */

void FUN_1013b8548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac660;
  func_0x000107c61520(&UNK_10dcac660,&UNK_110723970);
  puRam0000000112d79d50 = puVar1;
  return;
}



/* Entry: 1013b8588; end: 1013b8767;  */

undefined8 FUN_1013b8588(float *param_1,float *param_2)

{
  bool bVar1;
  
  if (((*(char *)(param_1 + 1) == '\x01') || (*(char *)(param_2 + 1) == '\x01')) ||
     (*param_1 < *param_2)) {
    bVar1 = true;
    if ((*(char *)(param_1 + 3) != '\x01' && *(char *)(param_2 + 3) != '\x01') &&
       (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar1 = param_1[2] < param_2[2];
    }
    if (bVar1) {
      bVar1 = true;
      if ((*(char *)(param_1 + 5) != '\x01' && *(char *)(param_2 + 5) != '\x01') &&
         (bVar1 = false, !NAN(param_1[4]) && !NAN(param_2[4]))) {
        bVar1 = param_1[4] < param_2[4];
      }
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1013b8768; end: 1013b893b;  */

void FUN_1013b8768(double *param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  dVar5 = param_2;
  dVar7 = param_3;
  func_0x000107c3ec58();
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b892c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b8930);
    (*pcVar1)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_2)) || (0x7fefffffffffffff < (ulong)ABS(param_3))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b8934);
    (*pcVar1)();
  }
  if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b8938);
    (*pcVar1)();
  }
  if (param_3 < 9.223372036854776e+18) {
    func_0x000107c60bc0((long)param_2,(long)param_3);
    lVar2 = param_6;
    dVar6 = dVar5;
    func_0x000107c508c4();
    uVar10 = SUB84(dVar6,0);
    func_0x000107c61180();
    uVar8 = 0;
    if (lVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar10;
      func_0x000107c436dc();
      uVar10 = uVar9;
      func_0x000107c61170(lVar2);
    }
    lVar3 = param_6;
    func_0x000107c5e9fc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar8 = uVar10;
      func_0x000107c436dc();
      uVar10 = uVar8;
      func_0x000107c61170(lVar3);
    }
    lVar4 = param_6;
    func_0x000107c4e788();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(param_6);
      uVar10 = 0;
    }
    else {
      func_0x000107c436dc();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(param_6);
    }
    *param_1 = dVar5;
    param_1[1] = dVar7;
    param_1[2] = param_4;
    param_1[3] = param_5;
    *(undefined4 *)(param_1 + 4) = uVar9;
    *(bool *)((long)param_1 + 0x24) = lVar2 == 0;
    *(undefined4 *)(param_1 + 5) = uVar8;
    *(bool *)((long)param_1 + 0x2c) = lVar3 == 0;
    *(undefined4 *)(param_1 + 6) = uVar10;
    *(bool *)((long)param_1 + 0x34) = lVar4 == 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b893c);
  (*pcVar1)();
}



/* Entry: 1013b893c; end: 1013b894f;  */

bool FUN_1013b893c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013b8950; end: 1013b89fb;  */

void FUN_1013b8950(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013b89fc; end: 1013b8a0b;  */

void FUN_1013b89fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013b8a0c; end: 1013b8e77;  */

void FUN_1013b8a0c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_1103ad5c8;
  func_0x000107c613fc(&UNK_1103ad5c8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1103ad5f0;
  func_0x000107c613fc(&UNK_1103ad5f0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar3 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
  func_0x000107c610f8();
  pcStack_80 = FUN_1013b90a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1013b90ac;
  puStack_88 = &UNK_1103ad608;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c45ef8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1013b9140();
  puVar5 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x0001013ae418(0);
  uVar10 = uVar6;
  FUN_1013b9264();
  puVar2 = puVar1;
  func_0x000107c5f9dc(puVar1,uVar6,PTR___sypN_11034f1a8 + 8,uVar10);
  func_0x000107c6142c(puVar1);
  func_0x000107c45b1c();
  func_0x000107c61170();
  FUN_1013b1ec4();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  puVar7 = (undefined *)0x0;
  FUN_1013b92a8(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
  func_0x000107c61174();
  puVar8 = puVar2;
  puVar11 = puVar7;
  func_0x000107c5fc48();
  func_0x000107c61574(puVar2);
  puStack_a0 = (undefined *)0x0;
  ppuVar4 = &puStack_a0;
  puVar9 = puVar5;
  puVar1 = puVar8;
  func_0x000107c4e5b0();
  func_0x000107c61170(puVar8);
  puVar2 = puStack_a0;
  if ((int)puVar9 == 0) {
    puVar9 = puStack_a0;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar9);
    func_0x000107c61654();
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    puStack_78 = (undefined *)0x0;
    pcStack_80 = (code *)0x0;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    (*param_2)(&puStack_a0);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar8 = puVar2;
    func_0x000107c614ac();
    puVar7 = puVar2;
  }
  else {
    func_0x000107c61174(puStack_a0);
    func_0x000107c61170(puVar5);
    puVar8 = puVar3;
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uStack_b8 = 0x1013b8ce8;
    uStack_100 = param_1;
    puStack_f8 = puVar7;
    puStack_f0 = puVar9;
    puStack_e8 = puVar3;
    puStack_e0 = puVar5;
    puStack_d8 = puVar2;
    uStack_d0 = param_3;
    pcStack_c8 = param_2;
    puStack_c0 = &stack0xfffffffffffffff0;
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61428(puVar1 + 0x10,auStack_158,0,0);
      puVar1 = puVar1 + 0x10;
      func_0x000107c61648();
      if (puVar1 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        func_0x000107c61168(PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738);
        puVar3 = puVar8;
        func_0x000107c6148c(puVar8,puVar2);
        if (puVar3 != (undefined *)0x0) {
          func_0x000107c61174(puVar8);
          func_0x000107c50700();
          func_0x000107c61180();
          if (puVar3 != (undefined *)0x0) {
            uVar10 = 0;
            FUN_1013b92a8(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
            puVar2 = puVar3;
            func_0x000107c5fc54(puVar3,uVar10);
            func_0x000107c61170(puVar3);
            func_0x000107c60a90(param_6);
            FUN_1013b8e78(&uStack_140,puVar2);
            func_0x000107c6142c(puVar2);
            (*(code *)ppuVar4)(&uStack_140);
            func_0x000107c61170(puVar8);
            func_0x000107c61574(puVar1);
            func_0x0001013b92e8(&uStack_140);
            return;
          }
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_110 = 0;
          uStack_108 = 0x8000000000000000;
          (*(code *)ppuVar4)(&uStack_140);
          func_0x000107c61170(puVar8);
          func_0x000107c61574(puVar1);
          return;
        }
        func_0x000107c61574(puVar1);
      }
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_110 = 0;
    uStack_108 = 0x8000000000000000;
    (*(code *)ppuVar4)(&uStack_140);
    return;
  }
  return;
}



/* Entry: 1013b8e78; end: 1013b903b;  */

void FUN_1013b8e78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  if (param_4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar5 = param_4;
    }
    func_0x000107c60480();
  }
  if ((long)uVar5 < 1) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = 0x8000000000000000;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    if ((param_4 & 0xc000000000000001) == 0) {
      if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b903c);
        (*pcVar1)();
      }
      puVar2 = *(undefined1 **)(param_4 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar2 = (undefined1 *)0x0;
      FUN_1013b2188(0,param_4);
    }
    FUN_1013b8768(&uStack_98,param_2,param_3);
    if (uVar5 == 1) {
      (**(code **)(unaff_x20 + 0x10))(param_2,param_3,uStack_98,uStack_90,uStack_88,uStack_80);
      if (((ulong)puVar2 & 1) != 0) {
        uVar4 = 0;
        uVar6 = (ulong)((uint5)uStack_78 & 0x1ffffffff);
        uVar7 = (ulong)((uint5)uStack_70 & 0x1ffffffff);
        uVar5 = (ulong)CONCAT14(uStack_64,uStack_68) & 0x1ffffffff;
        goto LAB_1013b8ff8;
      }
      FUN_1013b931c();
      puVar3 = &UNK_1103ad6b0;
      func_0x000107c613f8(&UNK_1103ad6b0,puVar2,0,0);
      *puVar2 = 1;
    }
    else {
      FUN_1013b931c();
      puVar3 = &UNK_1103ad6b0;
      func_0x000107c613f8(&UNK_1103ad6b0,puVar2,0,0);
      *puVar2 = 0;
    }
    uVar6 = (ulong)((uint5)uStack_78 & 0x1ffffffff);
    uVar7 = (ulong)((uint5)uStack_70 & 0x1ffffffff);
    uVar5 = (ulong)CONCAT14(uStack_64,uStack_68) & 0x1ffffffff;
    uVar4 = (ulong)puVar3 & 0xffffffffffffff8 | 0x4000000000000000;
  }
LAB_1013b8ff8:
  *param_1 = uStack_98;
  param_1[1] = uStack_90;
  param_1[2] = uStack_88;
  param_1[3] = uStack_80;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  return;
}



/* Entry: 1013b903c; end: 1013b907f;  */

void FUN_1013b903c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013b9080; end: 1013b909f;  */

void FUN_1013b9080(void)

{
  FUN_1013b8a0c();
  return;
}



/* Entry: 1013b90a0; end: 1013b90ab;  */

void FUN_1013b90a0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_2 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_a8,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
      func_0x000107c61168(PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738);
      lVar5 = param_1;
      func_0x000107c6148c(param_1,puVar4);
      if (lVar5 != 0) {
        func_0x000107c61174(param_1);
        func_0x000107c50700();
        func_0x000107c61180();
        if (lVar5 != 0) {
          uVar6 = 0;
          FUN_1013b92a8(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
          lVar7 = lVar5;
          func_0x000107c5fc54(lVar5,uVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c60a90(uVar2);
          FUN_1013b8e78(&uStack_90,lVar7);
          func_0x000107c6142c(lVar7);
          (*pcVar1)(&uStack_90);
          func_0x000107c61170(param_1);
          func_0x000107c61574(lVar3);
          func_0x0001013b92e8(&uStack_90);
          return;
        }
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_60 = 0;
        uStack_58 = 0x8000000000000000;
        (*pcVar1)(&uStack_90);
        func_0x000107c61170(param_1);
        func_0x000107c61574(lVar3);
        return;
      }
      func_0x000107c61574(lVar3);
    }
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_60 = 0;
  uStack_58 = 0x8000000000000000;
  (*pcVar1)(&uStack_90);
  return;
}



/* Entry: 1013b90ac; end: 1013b9123;  */

/* WARNING: Possible PIC construction at 0x0001013b9108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b910c) */

void FUN_1013b90ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013b9124; end: 1013b913f;  */

void FUN_1013b9124(long param_1,long param_2)

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



/* Entry: 1013b9140; end: 1013b9263;  */

undefined * FUN_1013b9140(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d79df8,&UNK_10d9397b0);
    puVar3 = puVar7;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      puVar5 = &uStack_88;
      FUN_1013b935c(param_1,puVar5,0x112d79e00,&UNK_10daa05a0);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_1013b412c();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b9260);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b9264);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1013b9264; end: 1013b92a7;  */

void FUN_1013b9264(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d797d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001013ae418(0xff);
  puVar2 = &UNK_10da15a00;
  func_0x000107c61520(&UNK_10da15a00,uVar1);
  puRam0000000112d797d8 = puVar2;
  return;
}



/* Entry: 1013b92a8; end: 1013b931b;  */

void FUN_1013b92a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1013b931c; end: 1013b935b;  */

void FUN_1013b931c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939830;
  func_0x000107c61520(&UNK_10d939830,&UNK_1103ad6b0);
  puRam0000000112d79e08 = puVar1;
  return;
}



/* Entry: 1013b935c; end: 1013b93a3;  */

undefined8 FUN_1013b935c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1013b93a4; end: 1013b950b;  */

int FUN_1013b93a4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013b9420;
        goto LAB_1013b9404;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013b9404:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013b9420:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013b950c; end: 1013b954b;  */

void FUN_1013b950c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939808;
  func_0x000107c61520(&UNK_10d939808,&UNK_1103ad6b0);
  puRam0000000112d79e10 = puVar1;
  return;
}



/* Entry: 1013b954c; end: 1013b955f;  */

bool FUN_1013b954c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013b9560; end: 1013b960b;  */

void FUN_1013b9560(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013b960c; end: 1013b961b;  */

void FUN_1013b960c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013b961c; end: 1013b9a77;  */

void FUN_1013b961c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_1103ad748;
  func_0x000107c613fc(&UNK_1103ad748,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1103ad770;
  func_0x000107c613fc(&UNK_1103ad770,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar3 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
  func_0x000107c610f8();
  pcStack_80 = FUN_1013b9d88;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1013b90ac;
  puStack_88 = &UNK_1103ad788;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c45ef8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1013b9140();
  puVar5 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x0001013ae418(0);
  uVar10 = uVar6;
  FUN_1013b9264();
  puVar2 = puVar1;
  func_0x000107c5f9dc(puVar1,uVar6,PTR___sypN_11034f1a8 + 8,uVar10);
  func_0x000107c6142c(puVar1);
  func_0x000107c45b1c();
  func_0x000107c61170();
  FUN_1013b1ec4();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  puVar7 = (undefined *)0x0;
  FUN_1013b9db0(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
  func_0x000107c61174();
  puVar8 = puVar2;
  puVar11 = puVar7;
  func_0x000107c5fc48();
  func_0x000107c61574(puVar2);
  puStack_a0 = (undefined *)0x0;
  ppuVar4 = &puStack_a0;
  puVar9 = puVar5;
  puVar1 = puVar8;
  func_0x000107c4e5b0();
  func_0x000107c61170(puVar8);
  puVar2 = puStack_a0;
  if ((int)puVar9 == 0) {
    puVar9 = puStack_a0;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar9);
    func_0x000107c61654();
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    puStack_78 = (undefined *)0x0;
    pcStack_80 = (code *)0x0;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    (*param_2)(&puStack_a0);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar8 = puVar2;
    func_0x000107c614ac();
    puVar7 = puVar2;
  }
  else {
    func_0x000107c61174(puStack_a0);
    func_0x000107c61170(puVar5);
    puVar8 = puVar3;
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uStack_b8 = 0x1013b98f8;
    uStack_100 = param_1;
    puStack_f8 = puVar7;
    puStack_f0 = puVar9;
    puStack_e8 = puVar3;
    puStack_e0 = puVar5;
    puStack_d8 = puVar2;
    uStack_d0 = param_3;
    pcStack_c8 = param_2;
    puStack_c0 = &stack0xfffffffffffffff0;
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61428(puVar1 + 0x10,auStack_158,0,0);
      puVar1 = puVar1 + 0x10;
      func_0x000107c61648();
      if (puVar1 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        func_0x000107c61168(PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738);
        puVar3 = puVar8;
        func_0x000107c6148c(puVar8,puVar2);
        if (puVar3 != (undefined *)0x0) {
          func_0x000107c61174(puVar8);
          func_0x000107c50700();
          func_0x000107c61180();
          if (puVar3 == (undefined *)0x0) {
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_110 = 0;
            uStack_108 = 0x8000000000000000;
            (*(code *)ppuVar4)(&uStack_140);
          }
          else {
            uVar10 = 0;
            FUN_1013b9db0(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
            puVar2 = puVar3;
            func_0x000107c5fc54(puVar3,uVar10);
            func_0x000107c61170(puVar3);
            func_0x000107c60a90(param_6);
            FUN_1013b9a78(&uStack_140,puVar2);
            func_0x000107c6142c(puVar2);
            (*(code *)ppuVar4)(&uStack_140);
            func_0x0001013b92e8(&uStack_140);
          }
          func_0x000107c61574(puVar1);
          func_0x000107c61170(puVar8);
          return;
        }
        func_0x000107c61574(puVar1);
      }
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_110 = 0;
    uStack_108 = 0x8000000000000000;
    (*(code *)ppuVar4)(&uStack_140);
    return;
  }
  return;
}



/* Entry: 1013b9a78; end: 1013b9d23;  */

void FUN_1013b9a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  float fStack_78;
  undefined1 uStack_74;
  
  if (param_4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar5 = param_4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 1) {
    uStack_88 = 0;
    uStack_80 = 0;
    uVar5 = 0;
    uVar6 = 0x8000000000000000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    goto LAB_1013b9cdc;
  }
  if ((param_4 & 0xc000000000000001) == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b9d24);
      (*pcVar1)();
    }
    puVar2 = *(undefined1 **)(param_4 + 0x20);
    func_0x000107c61174();
  }
  else {
    puVar2 = (undefined1 *)0x0;
    FUN_1013b2188(0,param_4);
  }
  FUN_1013b8768(&uStack_a8,param_2,param_3);
  uVar5 = (ulong)CONCAT14(uStack_74,fStack_78);
  if (((*(char *)(unaff_x20 + 0x14) == '\x01') || ((uStack_88 & 0xff00000000) == 0x100000000)) ||
     (*(float *)(unaff_x20 + 0x10) < (float)uStack_88)) {
    if ((((*(char *)(unaff_x20 + 0x1c) != '\x01') && ((uStack_80 & 0xff00000000) != 0x100000000)) &&
        ((float)uStack_80 <= *(float *)(unaff_x20 + 0x18))) ||
       (((*(char *)(unaff_x20 + 0x24) != '\x01' && ((uVar5 & 0xffffffff00000000) != 0x100000000)) &&
        (fStack_78 <= *(float *)(unaff_x20 + 0x20))))) goto LAB_1013b9c34;
    if (((((uStack_88 & 0xff00000000) != 0x100000000) && (*(char *)(unaff_x20 + 0x2c) != '\x01')) &&
        (*(float *)(unaff_x20 + 0x28) <= (float)uStack_88)) ||
       (((((uStack_80 & 0xff00000000) != 0x100000000 && (*(char *)(unaff_x20 + 0x34) != '\x01')) &&
         (*(float *)(unaff_x20 + 0x30) <= (float)uStack_80)) ||
        ((((uVar5 & 0xffffffff00000000) != 0x100000000 && (*(char *)(unaff_x20 + 0x3c) != '\x01'))
         && (*(float *)(unaff_x20 + 0x38) <= fStack_78)))))) goto LAB_1013b9c34;
    (**(code **)(unaff_x20 + 0x40))(param_2,param_3,uStack_a8,uStack_a0,uStack_98,uStack_90);
    if (((ulong)puVar2 & 1) != 0) {
      uVar6 = 0;
      uStack_88 = uStack_88 & 0x1ffffffff;
      uStack_80 = uStack_80 & 0x1ffffffff;
      uVar5 = uVar5 & 0x1ffffffff;
      goto LAB_1013b9cdc;
    }
    FUN_1013b9df0();
    puVar3 = &UNK_1103ad830;
    func_0x000107c613f8(&UNK_1103ad830,puVar2,0,0);
    uVar4 = 1;
  }
  else {
LAB_1013b9c34:
    FUN_1013b9df0();
    puVar3 = &UNK_1103ad830;
    func_0x000107c613f8(&UNK_1103ad830,puVar2,0,0);
    uVar4 = 2;
  }
  *puVar2 = uVar4;
  uStack_88 = uStack_88 & 0x1ffffffff;
  uStack_80 = uStack_80 & 0x1ffffffff;
  uVar5 = uVar5 & 0x1ffffffff;
  uVar6 = (ulong)puVar3 & 0xffffffffffffff8 | 0x4000000000000000;
LAB_1013b9cdc:
  *param_1 = uStack_a8;
  param_1[1] = uStack_a0;
  param_1[2] = uStack_98;
  param_1[3] = uStack_90;
  param_1[4] = uStack_88;
  param_1[5] = uStack_80;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  return;
}



/* Entry: 1013b9d24; end: 1013b9d67;  */

void FUN_1013b9d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013b9d68; end: 1013b9d87;  */

void FUN_1013b9d68(void)

{
  FUN_1013b961c();
  return;
}



/* Entry: 1013b9d88; end: 1013b9daf;  */

void FUN_1013b9d88(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_2 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_a8,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
      func_0x000107c61168(PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738);
      lVar5 = param_1;
      func_0x000107c6148c(param_1,puVar4);
      if (lVar5 != 0) {
        func_0x000107c61174(param_1);
        func_0x000107c50700();
        func_0x000107c61180();
        if (lVar5 == 0) {
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_60 = 0;
          uStack_58 = 0x8000000000000000;
          (*pcVar1)(&uStack_90);
        }
        else {
          uVar6 = 0;
          FUN_1013b9db0(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
          lVar7 = lVar5;
          func_0x000107c5fc54(lVar5,uVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c60a90(uVar2);
          FUN_1013b9a78(&uStack_90,lVar7);
          func_0x000107c6142c(lVar7);
          (*pcVar1)(&uStack_90);
          func_0x0001013b92e8(&uStack_90);
        }
        func_0x000107c61574(lVar3);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61574(lVar3);
    }
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_60 = 0;
  uStack_58 = 0x8000000000000000;
  (*pcVar1)(&uStack_90);
  return;
}



/* Entry: 1013b9db0; end: 1013b9def;  */

void FUN_1013b9db0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1013b9df0; end: 1013b9e2f;  */

void FUN_1013b9df0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939928;
  func_0x000107c61520(&UNK_10d939928,&UNK_1103ad830);
  puRam0000000112d79ec0 = puVar1;
  return;
}



/* Entry: 1013b9e30; end: 1013b9f97;  */

int FUN_1013b9e30(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013b9eac;
        goto LAB_1013b9e90;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013b9e90:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1013b9eac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013b9f98; end: 1013b9fd7;  */

void FUN_1013b9f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939900;
  func_0x000107c61520(&UNK_10d939900,&UNK_1103ad830);
  puRam0000000112d79ec8 = puVar1;
  return;
}



/* Entry: 1013b9fd8; end: 1013ba09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b9fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d79ed0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d79ed8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d79ee0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d79ee8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d79ef0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d79ef8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d79f00) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d79f08) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013ba09c; end: 1013ba4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ba09c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + _DAT_112d79ee8) + _DAT_11302f218);
  if (lVar11 != 0) {
    FUN_1013ba500();
    func_0x000107c615f0(lVar11);
    lVar10 = param_2;
    FUN_1013bb878();
    func_0x000107c61574(param_2);
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(lVar10);
    func_0x0001013bb030(0,0,0);
    uVar15 = *(ulong *)(lVar10 + 0x10);
    if (uVar15 != 0) {
      uVar12 = 0;
      lVar7 = lVar10 + 0x20;
      do {
        puVar8 = puStack_70;
        if (*(ulong *)(lVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ba4f8);
          (*pcVar2)();
        }
        uStack_d0 = uVar12;
        func_0x0001013bb440(lVar7,&uStack_c8);
        uVar1 = uStack_d0;
        uStack_98 = uStack_c8;
        uStack_a0 = uStack_d0;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        uStack_78 = uStack_a8;
        ppuStack_80 = (undefined **)uStack_b0;
        func_0x0001013bb440(&uStack_98,&uStack_d0);
        if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ba4fc);
          (*pcVar2)();
        }
        if (*(ulong *)(param_3 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ba500);
          (*pcVar2)();
        }
        uStack_a8 = *(undefined8 *)(param_3 + 0x20 + uVar1 * 8);
        func_0x0001013bb3f8(&uStack_a0);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puStack_70 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          func_0x0001013bb030(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_70 + uVar1 * 0x30 + 0x38) = uStack_b8;
        *(undefined8 *)(puStack_70 + uVar1 * 0x30 + 0x30) = uStack_c0;
        *(undefined8 *)(puStack_70 + uVar1 * 0x30 + 0x48) = uStack_a8;
        *(undefined8 *)(puStack_70 + uVar1 * 0x30 + 0x40) = uStack_b0;
        *(undefined8 *)(puStack_70 + uVar1 * 0x30 + 0x28) = uStack_c8;
        *(ulong *)(puStack_70 + uVar1 * 0x30 + 0x20) = uStack_d0;
        lVar7 = lVar7 + 0x28;
      } while (uVar15 != uVar12);
    }
    puVar8 = puStack_70;
    func_0x000107c6142c(param_3);
    func_0x000107c61430(lVar10,2);
    func_0x000107c6142c();
    FUN_1013ba554();
    uVar15 = param_1;
    FUN_1013ba61c();
    uVar3 = 0;
    func_0x0001013b3ea4();
    uVar4 = uVar3;
    func_0x000107c613fc();
    func_0x0001013b2fcc(param_1,uVar15,puVar8,uVar4);
    func_0x000107c61428(param_1 + 0x50,&uStack_d0,1,0);
    *(undefined ***)(param_1 + 0x58) = &PTR_DAT_1103ad998;
    func_0x000107c61604(param_1 + 0x50,unaff_x20);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d79f00);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d79ef8);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d79ef0);
    func_0x000107c6157c(param_1);
    func_0x000107c3fa04();
    func_0x000107c61180();
    uVar4 = uVar14;
    func_0x000108c2bf1c();
    func_0x000107c615e8(uVar14);
    ppuStack_80 = &PTR_DAT_1103acc00;
    lVar6 = 0;
    uStack_a0 = param_1;
    uStack_88 = uVar3;
    FUN_1013be098();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar10 = lVar7 + _DAT_112d7a148;
    *(undefined8 *)(lVar10 + 8) = 0;
    func_0x000107c61614(lVar10,0);
    lVar10 = _DAT_112d7a168;
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c610f8();
    func_0x000107c6157c(param_1);
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar10) = puVar8;
    *(undefined1 *)(lVar7 + _DAT_112d7a170) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d7a178) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d7a198) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d7a1a0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d7a150) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112d7a188) = uVar13;
    func_0x0001013bb440(&uStack_a0,lVar7 + _DAT_112d7a158);
    uVar3 = 0;
    FUN_1013bc5a0();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar13);
    func_0x000107c453e4();
    *(undefined8 *)(lVar7 + _DAT_112d7a160) = uVar3;
    *(char *)(lVar7 + _DAT_112d7a180) = (char)uVar4;
    *(undefined1 *)(lVar7 + _DAT_112d7a190) = 1;
    plVar9 = &lStack_e0;
    lStack_e0 = lVar7;
    lStack_d8 = lVar6;
    func_0x000107c61154(plVar9,PTR_s_initWithNibName_bundle__1125e9850,0,0);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(param_1);
    func_0x0001000834e4(&uStack_a0);
    lVar10 = (long)plVar9 + _DAT_112d7a148;
    func_0x000107c61428(lVar10,&uStack_a0,1,0);
    *(undefined ***)(lVar10 + 8) = &PTR_DAT_1103ad988;
    func_0x000107c61604(lVar10,unaff_x20);
    func_0x000107c5677c(plVar9);
    func_0x000107c3e2c0(lVar11);
    func_0x000107c615e8(lVar11);
    func_0x000107c61574(param_1);
    func_0x000107c61170(plVar9);
  }
  return;
}



/* Entry: 1013ba500; end: 1013ba553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013ba500(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d79ed0);
  pcVar3 = (code *)*puVar1;
  uVar2 = puVar1[1];
  if (pcVar3 == (code *)0x0) {
    uVar2 = 0;
    pcVar3 = FUN_1013ba6b0;
    *puVar1 = FUN_1013ba6b0;
    puVar1[1] = 0;
  }
  FUN_1013bb484();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = pcVar3;
  return auVar4;
}



/* Entry: 1013ba554; end: 1013ba61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1013ba554(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112d79ed8;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d79ed8);
  pcVar4 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d79ef0);
    func_0x000107c3fa04(uVar3);
    func_0x000107c61180();
    uVar5 = 0x112d79f48;
    func_0x0001000285a8(0x112d79f48,&UNK_10d9399d8);
    func_0x000107c613fc();
    pcVar4 = FUN_1013ba718;
    func_0x0001000bdd8c(FUN_1013ba718,0,uVar5);
    func_0x000107c615e8(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar4;
    func_0x000107c6157c(pcVar4);
    func_0x000107c61574(uVar5);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar4;
}



/* Entry: 1013ba61c; end: 1013ba6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1013ba61c(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d79ee0;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d79ee0);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    func_0x0001000285a8(0x112d79f40,&UNK_10d9399d0);
    func_0x000107c613fc();
    pcVar3 = FUN_1013ba79c;
    func_0x0001000bdd8c(FUN_1013ba79c,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar3;
}



/* Entry: 1013ba6b0; end: 1013ba717;  */

void FUN_1013ba6b0(undefined8 param_1,double param_2)

{
  func_0x000107c609d0(0,0,param_1,param_2,0,param_2 * 0.1);
  func_0x000107c609a8();
  return;
}



/* Entry: 1013ba718; end: 1013ba79b;  */

void FUN_1013ba718(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x112d79f80;
  func_0x0001000285a8(0x112d79f80,&UNK_10d9399e0);
  func_0x000107c61538();
  uVar2 = 0;
  FUN_1013b1b10();
  uVar3 = uVar2;
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x0001013aee04(1,uVar1,uVar3);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1103ac6c8;
  *param_1 = uVar4;
  return;
}



/* Entry: 1013ba79c; end: 1013ba943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ba79c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  long *aplStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 *apuStack_78 [3];
  undefined1 *puStack_60;
  undefined **ppuStack_58;
  
  ppuVar9 = &puStack_c0;
  puVar2 = (undefined1 *)0x0;
  FUN_1013b55b0();
  puVar3 = puVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar10 = &PTR_DAT_1103ace40;
  puVar4 = puVar3;
  func_0x000108c2cac8();
  puVar5 = puVar2;
  if ((int)puVar4 != 0) {
    puVar5 = (undefined1 *)0x0;
    FUN_1013b5a64();
    puVar4 = puVar5;
    func_0x000107c613fc();
    ppuStack_58 = &PTR_DAT_1103acfc8;
    lVar6 = 0;
    apuStack_78[0] = puVar4;
    puStack_60 = puVar5;
    FUN_1013b79f0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112d79cc0) = 0;
    func_0x0001013bb440(apuStack_78,lVar7 + _DAT_112d79cb0);
    *(undefined1 *)(lVar7 + _DAT_112d79cb8) = 1;
    plVar8 = &lStack_88;
    lStack_88 = lVar7;
    lStack_80 = lVar6;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    func_0x0001000834e4(apuStack_78);
    ppuStack_58 = &PTR_DAT_1103ace40;
    ppuStack_90 = &PTR_DAT_1103ad0d8;
    puVar5 = (undefined1 *)0x0;
    aplStack_b0[0] = plVar8;
    lStack_98 = lVar6;
    apuStack_78[0] = puVar3;
    puStack_60 = puVar2;
    FUN_1013b8370();
    puVar4 = puVar5;
    func_0x000107c610f8();
    func_0x0001013bb440(apuStack_78,puVar4 + _DAT_112d79d18);
    func_0x0001013bb440(aplStack_b0,puVar4 + _DAT_112d79d20);
    puVar1 = PTR_s_init_1125d9248;
    puStack_c0 = puVar4;
    puStack_b8 = puVar5;
    func_0x000107c61174(puVar3);
    func_0x000107c61174(plVar8);
    func_0x000107c61154(&puStack_c0,puVar1);
    func_0x0001000834e4(aplStack_b0);
    func_0x0001000834e4(apuStack_78);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(plVar8);
    ppuVar10 = &PTR_DAT_1103ad558;
    puVar3 = (undefined1 *)ppuVar9;
  }
  param_1[3] = puVar5;
  param_1[4] = ppuVar10;
  *param_1 = puVar3;
  return;
}



/* Entry: 1013ba944; end: 1013ba9a3; -[_TtC20SelfieOnboardingImpl32SelfieOnboardingCameraEntryPoint init] */

void FUN_1013ba944(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieOnboardingCameraEntryPoint",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ba970);
  (*pcVar1)();
}



/* Entry: 1013ba9a4; end: 1013baa3f; -[_TtC20SelfieOnboardingImpl32SelfieOnboardingCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013baa24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013baa28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ba9a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79ee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79ef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79ef8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79f00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79f08));
  func_0x0001013bafe8(*(undefined8 *)(param_1 + _DAT_112d79ed0),
                      ((undefined8 *)(param_1 + _DAT_112d79ed0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d79ed8));
  return;
}



/* Entry: 1013baa40; end: 1013baac7;  */

/* WARNING: Possible PIC construction at 0x0001013baab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013baab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013baa40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  FUN_1013c0f4c(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar2 = puVar1;
  func_0x0001013c0e90();
  func_0x000107c42c20(*(undefined8 *)(lVar3 + _DAT_112d79f08),param_2,puVar2);
  FUN_1013ba09c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013baac8; end: 1013bab07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013baac8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*(long *)(*unaff_x20 + _DAT_112d79ee8) + _DAT_11302f218);
  if (lVar1 != 0) {
    func_0x000107c41864(lVar1,param_2,0);
  }
  return 0;
}



/* Entry: 1013bab08; end: 1013bab6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bab08(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f220;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d79ee8);
  func_0x000107c61428(lVar2 + _DAT_11302f220,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d1c();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bab70; end: 1013bad47;  */

void FUN_1013bab70(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "selfieOnboardingCameraDidComplete(with:)";
  func_0x0001000c10c0("selfieOnboardingCameraDidComplete(with:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103ad8b8;
  func_0x000107c613fc(&UNK_1103ad8b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103ad8e0;
  func_0x000107c613fc(&UNK_1103ad8e0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_1013bad48;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103ad8f8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1013bad48; end: 1013bad6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bad48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112d79ee8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_11302f220;
    func_0x000107c61428(lVar4 + _DAT_11302f220,auStack_60,0,0);
    lVar1 = lVar4 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar4);
    if (lVar1 != 0) {
      uVar2 = 0;
      func_0x000103f2feb8(0);
      func_0x000107c5fc48(uVar3,uVar2);
      func_0x000107c51d10(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 1013bad6c; end: 1013baf23;  */

void FUN_1013bad6c(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "selfieOnboardingCameraDidTakePhoto(result:)";
  func_0x0001000c10c0("selfieOnboardingCameraDidTakePhoto(result:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103ad8b8;
  func_0x000107c613fc(&UNK_1103ad8b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103ad930;
  func_0x000107c613fc(&UNK_1103ad930,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_1013baf24;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103ad948;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1013baf24; end: 1013baf33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013baf24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d79ee8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_11302f220;
    func_0x000107c61428(lVar2 + _DAT_11302f220,auStack_60,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c51d14(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1013baf34; end: 1013bafbf; -[_TtC20SelfieOnboardingImpl32SelfieOnboardingCameraEntryPoint presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013baf34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f220;
  lVar2 = *(long *)(param_1 + _DAT_112d79ee8);
  func_0x000107c61428(lVar2 + _DAT_11302f220,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c51d1c(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bafc0; end: 1013bafdf;  */

void FUN_1013bafc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce310);
  return;
}



/* Entry: 1013bafe0; end: 1013baff7; -[_TtC20SelfieOnboardingImpl32SelfieOnboardingCameraEntryPoint adaptivePresentationStyleForPresentationController:] */

undefined8 FUN_1013bafe0(void)

{
  return 0;
}



/* Entry: 1013baff8; end: 1013bb04b;  */

void FUN_1013baff8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1013bb04c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1013bb04c; end: 1013bb3f7;  */

undefined * FUN_1013bb04c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bb170);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d79f88;
    func_0x0001000285a8(0x112d79f88,&UNK_10d9399e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1013ae404(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1013bb3f8; end: 1013bb483;  */

undefined8 FUN_1013bb3f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d79f38;
  func_0x0001000285a8(0x112d79f38,&UNK_10d9399c8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1013bb484; end: 1013bb49b;  */

void FUN_1013bb484(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1013bb49c; end: 1013bb513;  */

void FUN_1013bb49c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0x6f72665f65636166;
  uVar3 = 0xea0000000000746e;
  func_0x000107c5fadc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_1013bf85c();
  uRam0000000112d79fc0 = 0;
  puRam0000000112d79fc8 = puVar2;
  uRam0000000112d79fd0 = uVar1;
  uRam0000000112d79fd8 = uVar3;
  return;
}



/* Entry: 1013bb514; end: 1013bb877;  */

undefined * FUN_1013bb514(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
  undefined4 uStack_68;
  undefined1 uStack_64;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar3 = &UNK_1103ad9d8;
  func_0x000107c613fc(&UNK_1103ad9d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  uStack_90 = 0xbe4ccccd;
  uStack_8c = uStack_8c & 0xffffff00;
  uStack_88 = 0xbe19999a;
  uStack_84 = uStack_84 & 0xffffff00;
  uStack_80 = 0xbe99999a;
  uStack_7c = uStack_7c & 0xffffff00;
  uStack_78 = 0x3e4ccccd;
  uStack_74 = uStack_74 & 0xffffff00;
  uStack_70 = 0x3e19999a;
  uStack_6c = 0;
  uStack_68 = 0x3e99999a;
  uStack_64 = 0;
  pcStack_60 = FUN_1013bba34;
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_58 = puVar3;
  func_0x000107c61580(param_2,2);
  func_0x0001013bb014(0,1,0);
  puVar7 = puStack_b8;
  puVar4 = &UNK_1103ada00;
  func_0x000107c613fc(&UNK_1103ada00,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1013bba34;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  lVar5 = 0;
  func_0x0001013b9d48();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack_84,uStack_88);
  *(ulong *)(lVar6 + 0x10) = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_74,uStack_78);
  *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack_7c,uStack_80);
  *(ulong *)(lVar6 + 0x35) = CONCAT17(uStack_64,CONCAT43(uStack_68,uStack_6b));
  *(ulong *)(lVar6 + 0x2d) = CONCAT17(uStack_6c,CONCAT43(uStack_70,uStack_74._1_3_));
  *(undefined8 *)(lVar6 + 0x40) = 0x1013bba38;
  *(undefined **)(lVar6 + 0x48) = puVar4;
  ppuStack_c0 = &PTR_DAT_1103ad728;
  uVar1 = *(ulong *)(puVar7 + 0x10);
  uVar2 = *(ulong *)(puVar7 + 0x18);
  alStack_e0[0] = lVar6;
  lStack_c8 = lVar5;
  func_0x000107c6157c(puVar3);
  if (uVar2 >> 1 <= uVar1) {
    func_0x0001013bb014(1 < uVar2,uVar1 + 1,1);
    puVar7 = puStack_b8;
  }
  *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
  func_0x0001013b44f8(alStack_e0,puVar7 + uVar1 * 0x28 + 0x20);
  FUN_1013bba3c(&uStack_90);
  func_0x000107c61574(param_2);
  return puVar7;
}



/* Entry: 1013bb878; end: 1013bb9ef;  */

long FUN_1013bb878(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  FUN_1013bb9f0();
  func_0x000107c614e8();
  func_0x000107c40fdc();
  lVar4 = 0x112d79fb0;
  func_0x0001000285a8(0x112d79fb0,&UNK_10d939a10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  if (lVar3 == 3) {
    if (lRam0000000112d79fb8 != -1) {
      func_0x000107c61568(0x112d79fb8,FUN_1013bb49c);
    }
    uVar2 = uRam0000000112d79fd8;
    *(undefined1 *)(lVar4 + 0x20) = uRam0000000112d79fc0;
    uVar1 = uRam0000000112d79fc8;
    *(undefined8 *)(lVar4 + 0x30) = uRam0000000112d79fd0;
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    func_0x000107c61434();
    func_0x000107c61174(uVar1);
    FUN_1013bb514(param_1,param_2);
  }
  else {
    if (lRam0000000112d79fb8 != -1) {
      func_0x000107c61568(0x112d79fb8,FUN_1013bb49c);
    }
    uVar2 = uRam0000000112d79fd8;
    *(undefined1 *)(lVar4 + 0x20) = uRam0000000112d79fc0;
    uVar1 = uRam0000000112d79fc8;
    *(undefined8 *)(lVar4 + 0x30) = uRam0000000112d79fd0;
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    func_0x000107c61434();
    func_0x000107c61174(uVar1);
    func_0x0001013bb6d4(param_1,param_2);
  }
  func_0x0001000285a8(0x112d7a010,&UNK_10d939a18);
  func_0x000107c61538();
  return lVar4;
}



/* Entry: 1013bb9f0; end: 1013bba33;  */

void FUN_1013bb9f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d79fa8 = puVar1;
  return;
}



/* Entry: 1013bba34; end: 1013bba3b;  */

void FUN_1013bba34(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = (byte)param_2;
  (**(code **)(unaff_x20 + 0x10))(*param_2,param_2[1],*param_3,param_3[1],param_3[2],param_3[3]);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 1013bba3c; end: 1013bbaff;  */

undefined8 FUN_1013bba3c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d7a048;
  func_0x0001000285a8(0x112d7a048,&UNK_10d939a20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1013bbb00; end: 1013bbb07;  */

void FUN_1013bbb00(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = (byte)param_2;
  (**(code **)(unaff_x20 + 0x10))(*param_2,param_2[1],*param_3,param_3[1],param_3[2],param_3[3]);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 1013bbb08; end: 1013bbbf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013bbb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,param_3,param_4);
  *(undefined **)(unaff_x20 + _DAT_112d7a050) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112d7a050;
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c52ab8(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c56ba8(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c59c74(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1013bbbf8; end: 1013bbc17; -[_TtC20SelfieOnboardingImpl24SelfieDetectionDebugView initWithFrame:] */

void FUN_1013bbbf8(void)

{
  FUN_1013bbb08();
  return;
}



/* Entry: 1013bbc18; end: 1013bbc6f; -[_TtC20SelfieOnboardingImpl24SelfieDetectionDebugView initWithCoder:] */

void FUN_1013bbc18(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SelfieOnboardingImpl/SelfieDetectionDebugView.swift",0x33,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bbc70);
  (*pcVar1)();
}



/* Entry: 1013bbc70; end: 1013bbe57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bbc70(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  uVar5 = (uint)((ulong)param_1[7] >> 0x3e);
  uVar4 = (undefined4)param_1[6];
  uVar1 = (undefined1)((ulong)param_1[6] >> 0x20);
  if (uVar5 == 0) {
    puVar6 = &uStack_78;
    uStack_78 = *param_1;
    uStack_70 = param_1[1];
    uStack_68 = param_1[2];
    uStack_60 = param_1[3];
    uStack_58 = param_1[4];
    uStack_50 = param_1[5];
    uStack_48 = uVar4;
    uStack_44 = uVar1;
    FUN_1013bbef8(puVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar3 = puVar2;
    func_0x000107c444b4();
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7a050);
    func_0x000107c3ea80(puVar2);
  }
  else {
    if (uVar5 != 1) {
      param_2 = 0x800000010ef3b600;
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c4faf8();
      func_0x000107c61180();
      func_0x000107c52b50();
      puVar6 = (undefined8 *)0xd000000000000012;
      goto LAB_1013bbde8;
    }
    puVar6 = &uStack_78;
    uStack_78 = *param_1;
    uStack_70 = param_1[1];
    uStack_68 = param_1[2];
    uStack_60 = param_1[3];
    uStack_58 = param_1[4];
    uStack_50 = param_1[5];
    uStack_48 = uVar4;
    uStack_44 = uVar1;
    FUN_1013bbef8(puVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar3 = puVar2;
    func_0x000107c4faf8();
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7a050);
    func_0x000107c5e2ac(puVar2);
  }
  func_0x000107c61180();
  func_0x000107c59c78(uVar7);
LAB_1013bbde8:
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7a050);
  func_0x000107c5fadc(puVar6,param_2);
  func_0x000107c59c6c(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c4abfc(uVar7);
  func_0x000107c56a14();
  func_0x000107c49908();
  func_0x000107c4abfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013bbe58; end: 1013bbe73; -[_TtC20SelfieOnboardingImpl24SelfieDetectionDebugView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bbe58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28,
             *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),
             *(undefined8 *)(param_1 + _DAT_112d7a050),PTR_s_systemLayoutSizeFittingSize__112677638)
  ;
  return;
}



/* Entry: 1013bbe74; end: 1013bbea7;  */

void FUN_1013bbe74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013bbea8; end: 1013bbeb7; -[_TtC20SelfieOnboardingImpl24SelfieDetectionDebugView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bbea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a050));
  return;
}



/* Entry: 1013bbeb8; end: 1013bbed7;  */

void FUN_1013bbeb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce408);
  return;
}



/* Entry: 1013bbed8; end: 1013bbef7;  */

void FUN_1013bbed8(void)

{
  FUN_1013bbc70();
  return;
}



/* Entry: 1013bbef8; end: 1013bc00b;  */

void FUN_1013bbef8(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0xe;
  *(undefined8 *)(lVar6 + 0x10) = 7;
  puVar5 = PTR___sSfs7CVarArgsWP_11034de18;
  puVar4 = PTR___sSfN_11034ddf8;
  uVar8 = *(undefined4 *)(param_1 + 4);
  cVar1 = *(char *)((long)param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 5);
  cVar2 = *(char *)((long)param_1 + 0x2c);
  uVar11 = *(undefined4 *)(param_1 + 6);
  cVar3 = *(char *)((long)param_1 + 0x34);
  *(undefined **)(lVar6 + 0x38) = PTR___sSfN_11034ddf8;
  *(undefined **)(lVar6 + 0x40) = puVar5;
  uVar10 = 0;
  if (cVar2 != '\x01') {
    uVar10 = uVar9;
  }
  *(undefined4 *)(lVar6 + 0x20) = uVar10;
  *(undefined **)(lVar6 + 0x60) = puVar4;
  *(undefined **)(lVar6 + 0x68) = puVar5;
  uVar10 = 0;
  if (cVar1 != '\x01') {
    uVar10 = uVar8;
  }
  *(undefined4 *)(lVar6 + 0x48) = uVar10;
  *(undefined **)(lVar6 + 0x88) = puVar4;
  *(undefined **)(lVar6 + 0x90) = puVar5;
  uVar10 = 0;
  if (cVar3 != '\x01') {
    uVar10 = uVar11;
  }
  *(undefined4 *)(lVar6 + 0x70) = uVar10;
  puVar4 = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  uVar12 = *param_1;
  uVar13 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = param_1[3];
  *(undefined **)(lVar6 + 0xb0) = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  lVar7 = lVar6;
  FUN_1013bc00c();
  *(long *)(lVar6 + 0xb8) = lVar7;
  *(undefined8 *)(lVar6 + 0x98) = uVar12;
  *(undefined **)(lVar6 + 0xd8) = puVar4;
  *(long *)(lVar6 + 0xe0) = lVar7;
  *(undefined8 *)(lVar6 + 0xc0) = uVar13;
  *(undefined **)(lVar6 + 0x100) = puVar4;
  *(long *)(lVar6 + 0x108) = lVar7;
  *(undefined8 *)(lVar6 + 0xe8) = uVar14;
  *(undefined **)(lVar6 + 0x128) = puVar4;
  *(long *)(lVar6 + 0x130) = lVar7;
  *(undefined8 *)(lVar6 + 0x110) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdb77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC_110350fd8)
            (0xd000000000000043,0x800000010ef3b620,lVar6);
  return;
}



/* Entry: 1013bc00c; end: 1013bc04b;  */

void FUN_1013bc00c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7a080 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s12CoreGraphics7CGFloatVs7CVarArgAAMc_1103513d0;
  func_0x000107c61520(PTR___s12CoreGraphics7CGFloatVs7CVarArgAAMc_1103513d0,
                      PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  puRam0000000112d7a080 = puVar1;
  return;
}



/* Entry: 1013bc04c; end: 1013bc057; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate cameraScreenOnCloseTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc04c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a088);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013bc058; end: 1013bc063; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate cameraScreenDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc058(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a090);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013bc064; end: 1013bc0b7;  */

void FUN_1013bc064(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + *param_3);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013bc0b8; end: 1013bc12f; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate cameraScreenDidSetupDetectionWithStage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a098);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
    (*pcVar1)(param_3);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 1013bc130; end: 1013bc1d7; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate cameraScreenDidCaptureWithStageIdentifier:imageURLs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  pcVar1 = *(code **)(param_1 + _DAT_112d7a0a0);
  if (pcVar1 == (code *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    (*pcVar1)(param_3,param_2,param_4);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013bc1d8; end: 1013bc233; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate init] */

void FUN_1013bc1d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieOnboardingComposerCameraScreenDelegate",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bc204);
  (*pcVar1)();
}



/* Entry: 1013bc234; end: 1013bc29b; -[_TtC20SelfieOnboardingImpl44SelfieOnboardingComposerCameraScreenDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013bc254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bc27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bc258) */
/* WARNING: Removing unreachable block (ram,0x0001013bc280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc234(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d7a088) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d7a088))[1]);
    return;
  }
  return;
}



/* Entry: 1013bc29c; end: 1013bc2bb;  */

void FUN_1013bc29c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce4c0);
  return;
}



/* Entry: 1013bc2bc; end: 1013bc3b7; -[_TtC20SelfieOnboardingImpl33SelfieOnboardingOneShotCameraView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013bc2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_60;
  long lStack_58;
  
  plVar2 = &lStack_60;
  *(undefined8 *)(param_5 + _DAT_112d7a0d0) = 0;
  lVar1 = param_5;
  FUN_1013bc5a0();
  lStack_60 = param_5;
  lStack_58 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,PTR_s_initWithFrame__1125e2948);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(plVar2);
  func_0x000107c61174();
  func_0x000107c444ac(puVar3);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c52b50(plVar2);
  func_0x000107c61170(plVar2);
  func_0x000107c61170(plVar2);
  func_0x000107c61170(puVar4);
  return (undefined1 *)plVar2;
}



/* Entry: 1013bc3b8; end: 1013bc443; -[_TtC20SelfieOnboardingImpl33SelfieOnboardingOneShotCameraView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013bc3b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_112d7a0d0) = 0;
  lVar2 = param_1;
  FUN_1013bc5a0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1013bc444; end: 1013bc4c7; -[_TtC20SelfieOnboardingImpl33SelfieOnboardingOneShotCameraView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc444(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1013bc5a0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112d7a0d0);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013bc4c8; end: 1013bc55f;  */

/* WARNING: Possible PIC construction at 0x0001013bc4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bc518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bc4f8) */
/* WARNING: Removing unreachable block (ram,0x0001013bc51c) */
/* WARNING: Removing unreachable block (ram,0x0001013bc550) */
/* WARNING: Removing unreachable block (ram,0x0001013bc524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc4c8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d7a0d0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a0d0) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013bc560; end: 1013bc58f;  */

void FUN_1013bc560(void)

{
  FUN_1013bc5a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013bc590; end: 1013bc59f; -[_TtC20SelfieOnboardingImpl33SelfieOnboardingOneShotCameraView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a0d0));
  return;
}



/* Entry: 1013bc5a0; end: 1013bc5bf;  */

void FUN_1013bc5a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce5b8);
  return;
}



/* Entry: 1013bc5c0; end: 1013bc5cf; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration selfieFrameWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bc5c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7a100);
}



/* Entry: 1013bc5d0; end: 1013bc5df; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration setSelfieFrameWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc5d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112d7a100) = param_1;
  return;
}



/* Entry: 1013bc5e0; end: 1013bc5ef; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration selfieFrameSizeRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bc5e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7a108);
}



/* Entry: 1013bc5f0; end: 1013bc5ff; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration setSelfieFrameSizeRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc5f0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112d7a108) = param_1;
  return;
}



/* Entry: 1013bc600; end: 1013bc60f; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration selfieFrameCenterX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bc600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7a110);
}



/* Entry: 1013bc610; end: 1013bc61f; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration setSelfieFrameCenterX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc610(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112d7a110) = param_1;
  return;
}



/* Entry: 1013bc620; end: 1013bc62f; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration selfieFrameCenterY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bc620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7a118);
}



/* Entry: 1013bc630; end: 1013bc63f; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration setSelfieFrameCenterY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc630(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112d7a118) = param_1;
  return;
}



/* Entry: 1013bc640; end: 1013bc6bb; -[_TtC20SelfieOnboardingImpl40GenAIOnboardingCameraScreenConfiguration init] */

void FUN_1013bc640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.GenAIOnboardingCameraScreenConfiguration",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bc66c);
  (*pcVar1)();
}



/* Entry: 1013bc6bc; end: 1013bc6cf;  */

bool FUN_1013bc6bc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


