/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10530bf90; end: 10530bfbb;  */

void FUN_10530bf90(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_10530bfbc();
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined1 *)(param_1 + 0x44) = param_4;
  return;
}



/* Entry: 10530bfbc; end: 10530c01f;  */

void FUN_10530bfbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  param_1[7] = param_2[7];
  return;
}



/* Entry: 10530c020; end: 10530c08f;  */

void FUN_10530c020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b73f0;
  _objc_alloc(PTR_PTR_1126b73f0);
  lVar2 = param_1;
  FUN_10530bf18(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062980(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  FUN_10530c0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10530c090; end: 10530c0bf;  */

void FUN_10530c090(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_10530bfbc();
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 10530c0c0; end: 10530c0cb;  */

void FUN_10530c0c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10530c0cc; end: 10530c233;  */

void FUN_10530c0cc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  func_0x00010bfe4420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  uVar1 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_78);
  func_0x00010c0cc940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10530c234();
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (cStack_60 == '\x01') {
    param_1[4] = uStack_70;
    param_1[3] = uStack_78;
    param_1[5] = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  param_1[7] = uVar2 & 0xffffffffff;
  _objc_release(param_2);
  func_0x0001001148fc(&uStack_78);
  _objc_release(uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  FUN_10530c35c();
  func_0x0001001148e8();
  return;
}



/* Entry: 10530c234; end: 10530c253;  */

ulong FUN_10530c234(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10530c324();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10530c254; end: 10530c323;  */

void FUN_10530c254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7370;
  _objc_alloc(PTR_PTR_1126b7370);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001006a7df8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x38))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  func_0x00010c01aa40(puVar1,param_2,lVar2,lVar3,puVar4);
  func_0x00010530c364();
  func_0x00010530c35c();
  func_0x0001001148e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530c324; end: 10530c35b;  */

undefined8 FUN_10530c324(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x0001001148e8();
  return param_1;
}



/* Entry: 10530c35c; end: 10530c3af;  */

void FUN_10530c35c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10530c3b0; end: 10530c513;  */

void FUN_10530c3b0(undefined ***param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uStack_d0;
  int iStack_c8;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *aplStack_30 [2];
  
  ppuStack_80 = &PTR_DAT_110cfa428;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (param_1 != &ppuStack_80) {
    ppuVar1 = param_1[1];
    if (((ulong)ppuVar1 & 1) != 0) {
      ppuVar1 = *(undefined ***)((ulong)ppuVar1 & 0xfffffffffffffffe);
    }
    if (ppuVar1 == (undefined **)0x0) {
      func_0x00010b5170a8(param_1,&ppuStack_80);
    }
    else {
      func_0x00010b517070(param_1,&ppuStack_80);
    }
  }
  func_0x00010b516d8c(&ppuStack_80);
  func_0x00010530c370(aplStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_98,param_2);
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  ppuStack_80 = ppuStack_98;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  ppuStack_98 = (undefined **)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xc);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x000100100fec(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_98);
  (**(code **)(*aplStack_30[0] + 0x30))(&uStack_d0,aplStack_30[0],&ppuStack_80);
  if (cStack_b8 == '\x01') {
    func_0x00010006369c(param_1,uStack_d0,iStack_c8 - (int)uStack_d0);
  }
  func_0x0001002a2294(&uStack_d0);
  func_0x000100114924(&ppuStack_80);
  func_0x0001000df75c(aplStack_30);
  return;
}



/* Entry: 10530c514; end: 10530c5c7;  */

void FUN_10530c514(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  if ((bRam0000000113819640 & 1) == 0) {
    iVar1 = 0x13819640;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010530d978(0x113819608);
      ___cxa_guard_release(0x113819640);
    }
  }
  func_0x00010530d9ec();
  if ((bool)in_ZR) {
    func_0x00010530da4c();
    func_0x00010530da70();
    func_0x00010530da44();
    func_0x00010530d9e4();
  }
  else if (lRam0000000113819648 != -1) {
    func_0x00010530d9d0();
    func_0x00010530da34(0x113819648);
  }
  func_0x00010530da70();
  return;
}



/* Entry: 10530c5c8; end: 10530c67b;  */

void FUN_10530c5c8(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  if ((bRam0000000113819688 & 1) == 0) {
    iVar1 = 0x13819688;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010530d978(0x113819650);
      ___cxa_guard_release(0x113819688);
    }
  }
  func_0x00010530d9ec();
  if ((bool)in_ZR) {
    func_0x00010530da4c();
    func_0x00010530da88();
    func_0x00010530da44();
    func_0x00010530d9e4();
  }
  else if (lRam0000000113819690 != -1) {
    func_0x00010530d9d0();
    func_0x00010530da34(0x113819690);
  }
  func_0x00010530da88();
  return;
}



/* Entry: 10530c67c; end: 10530c72f;  */

void FUN_10530c67c(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  if ((bRam00000001138196d0 & 1) == 0) {
    iVar1 = 0x138196d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010530d978(0x113819698);
      ___cxa_guard_release(0x1138196d0);
    }
  }
  func_0x00010530d9ec();
  if ((bool)in_ZR) {
    func_0x00010530da4c();
    func_0x00010530da7c();
    func_0x00010530da44();
    func_0x00010530d9e4();
  }
  else if (lRam00000001138196d8 != -1) {
    func_0x00010530d9d0();
    func_0x00010530da34(0x1138196d8);
  }
  func_0x00010530da7c();
  return;
}



/* Entry: 10530c730; end: 10530c783;  */

long FUN_10530c730(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar6 = param_1;
  if ((long)uVar7 < 0) {
    puVar6 = (undefined8 *)*param_1;
    uVar7 = param_1[1];
  }
  uVar4 = param_2;
  _strlen();
  uVar1 = uVar7;
  if (param_3 <= uVar7) {
    uVar1 = param_3;
  }
  uVar2 = uVar1 + uVar4;
  if (uVar7 - uVar1 <= uVar4) {
    uVar2 = uVar7;
  }
  puVar3 = puVar6;
  func_0x00010067f328(puVar6,(undefined8 *)((long)puVar6 + uVar2),param_2,param_2 + uVar4,
                      &UNK_10067f248);
  lVar5 = (long)puVar3 - (long)puVar6;
  if (puVar3 == (undefined8 *)((long)puVar6 + uVar2) && uVar4 != 0) {
    lVar5 = -1;
  }
  return lVar5;
}



/* Entry: 10530c784; end: 10530cc57;  */

void FUN_10530c784(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int *piVar3;
  undefined **ppuVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined1 auStack_288 [72];
  undefined1 auStack_240 [72];
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [72];
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  if (param_2 - 1U < 4) {
    iVar18 = *(int *)(&UNK_10dd95d70 + (ulong)(param_2 - 1U) * 4);
  }
  else {
    iVar18 = 0;
  }
  uVar12 = *(ulong *)(param_1 + 0x10);
  puVar13 = (ulong *)(param_1 + 0x10);
  if ((uVar12 & 1) != 0) {
    puVar13 = (ulong *)(uVar12 + 7);
  }
  puVar2 = puVar13 + *(int *)(param_1 + 0x18);
  puVar1 = param_4 + 1;
  do {
    if (puVar13 == puVar2) {
      return;
    }
    uVar12 = *puVar13;
    piVar19 = *(int **)(uVar12 + 0x20);
    piVar3 = piVar19 + *(int *)(uVar12 + 0x18);
    for (; piVar19 != piVar3; piVar19 = piVar19 + 1) {
      if (iVar18 == *piVar19) {
        ppuVar4 = &PTR_PTR_113384128;
        if (*(undefined ***)(uVar12 + 0x30) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(uVar12 + 0x30);
        }
        iVar6 = *(int *)(ppuVar4 + 4);
        puVar14 = ppuVar4[2];
        __ZNSt3__16localeC1Ev(auStack_150);
        FUN_10530d514(auStack_1f8,(ulong)puVar14 & 0xfffffffffffffffc,auStack_150);
        __ZNSt3__16localeD1Ev(auStack_150);
        puVar9 = auStack_1f8;
        FUN_10530c730(puVar9,"https:",0);
        if (puVar9 == (undefined1 *)0x0) {
LAB_10530c8b8:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_90,(ulong)puVar14 & 0xfffffffffffffffc);
        }
        else {
          puVar9 = auStack_1f8;
          FUN_10530c730(puVar9,"http:",0);
          if (puVar9 == (undefined1 *)0x0) goto LAB_10530c8b8;
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_90,"https://",(ulong)puVar14 & 0xfffffffffffffffc);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_e8,auStack_90);
        func_0x0001002a8308(&uStack_108,(ulong)ppuVar4[3] & 0xfffffffffffffffc);
        uStack_98 = 0x100000000;
        if (iVar6 != 2) {
          uStack_98 = 0x100000004;
        }
        uStack_c8 = uStack_e0;
        uStack_d0 = uStack_e8;
        uStack_c0 = uStack_d8;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_e8 = 0;
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        uStack_a0 = cStack_f0 == '\x01';
        if ((bool)uStack_a0) {
          uStack_b0 = uStack_100;
          uStack_b8 = uStack_108;
          uStack_a8 = uStack_f8;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_108 = 0;
        }
        func_0x0001001148fc();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
        FUN_10530cef8(auStack_190,&uStack_d0);
        FUN_10530bf90(auStack_150,auStack_190,*(undefined4 *)((long)ppuVar4 + 0x24),
                      *(undefined1 *)(ppuVar4 + 5));
        func_0x00010530b5c4(auStack_190);
        puVar10 = puVar1;
        puVar17 = puVar1;
        if (((ulong)ppuVar4[5] & 1) == 0) {
          while (puVar15 = (undefined8 *)*puVar10, puVar15 != (undefined8 *)0x0) {
            puVar10 = puVar15 + 4;
            func_0x000100125af4(puVar10,auStack_90);
            bVar8 = -1 < (char)puVar10;
            lVar16 = 8;
            if (bVar8) {
              lVar16 = 0;
            }
            puVar10 = (undefined8 *)((long)puVar15 + lVar16);
            if (bVar8) {
              puVar17 = puVar15;
            }
          }
          if (puVar1 != puVar17) {
            puVar9 = auStack_90;
            func_0x000100125af4(puVar9,puVar17 + 4);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if (*(int *)((long)ppuVar4 + 0x2c) - 1U < *(int *)(puVar17 + 0x10) - 1U) {
                puVar10 = puVar17;
                func_0x00010002c7d4();
                if ((undefined8 *)*param_4 == puVar17) {
                  *param_4 = puVar10;
                }
                param_4[2] = param_4[2] + -1;
                FUN_10530d618(param_4[1],puVar17);
                FUN_10530d8a0(puVar17 + 4);
                __ZdlPv(puVar17);
                func_0x00010530d2b0(auStack_240,auStack_150);
                uVar7 = *(undefined4 *)((long)ppuVar4 + 0x34);
                uVar20 = *(undefined8 *)((long)ppuVar4 + 0x2c);
                FUN_10530c090(auStack_1f8,auStack_240);
                uStack_1b0 = uVar20;
                uStack_1a8 = uVar7;
                FUN_10530cc58(param_4,auStack_90,auStack_1f8);
                func_0x00010530da24();
                func_0x00010530b5c4(auStack_240);
              }
              goto LAB_10530cb64;
            }
          }
          func_0x00010530d2b0(auStack_288,auStack_150);
          uVar7 = *(undefined4 *)((long)ppuVar4 + 0x34);
          uVar20 = *(undefined8 *)((long)ppuVar4 + 0x2c);
          FUN_10530c090(auStack_1f8,auStack_288);
          uStack_1b0 = uVar20;
          uStack_1a8 = uVar7;
          FUN_10530cc58(param_4,auStack_90,auStack_1f8);
          func_0x00010530da24();
          func_0x00010530b5c4(auStack_288);
        }
        else {
          uStack_194 = *(undefined4 *)((long)ppuVar4 + 0x2c);
          uStack_198 = *(undefined4 *)(ppuVar4 + 6);
          uStack_19c = *(undefined4 *)((long)ppuVar4 + 0x34);
          uVar5 = param_3[1];
          if (uVar5 < (ulong)param_3[2]) {
            func_0x00010530daa8();
            FUN_10530cf40(uVar5);
            lVar16 = uVar5 + 0x58;
            param_3[1] = lVar16;
          }
          else {
            plVar11 = param_3;
            FUN_10530cfac(param_3,(long)(uVar5 - *param_3) / 0x58 + 1);
            FUN_10530d0a4(auStack_1f8,plVar11,(param_3[1] - *param_3) / 0x58,param_3 + 2);
            func_0x00010530daa8(lStack_1e8);
            FUN_10530cf40();
            lStack_1e8 = lStack_1e8 + 0x58;
            FUN_10530d00c(param_3,auStack_1f8);
            lVar16 = param_3[1];
            func_0x00010530d240(auStack_1f8);
          }
          param_3[1] = lVar16;
        }
LAB_10530cb64:
        func_0x00010530b5c4(auStack_150);
        func_0x00010530b5c4(&uStack_d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      }
    }
    puVar13 = puVar13 + 1;
  } while( true );
}



/* Entry: 10530cc58; end: 10530cd83;  */

void FUN_10530cc58(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 1;
  plVar6 = plVar7;
  plVar5 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x00010530cc90:
  do {
    if (plVar1 == (long *)0x0) {
LAB_10530cce4:
      puVar4 = (undefined8 *)0x90;
      __Znwm();
      uStack_58 = 0;
      puStack_68 = puVar4;
      plStack_60 = plVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 4,param_2);
      FUN_10530d1dc(puVar4 + 7,param_3);
      uStack_58 = CONCAT71(uStack_58._1_7_,1);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar5;
      *plVar6 = (long)puVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      puStack_68 = (undefined8 *)0x0;
      func_0x00010530d8c8(&puStack_68);
      return;
    }
    uVar2 = param_2;
    func_0x000100125af4(param_2,plVar1 + 4);
    plVar5 = plVar1;
    if (((uint)uVar2 >> 7 & 1) == 0) {
      plVar3 = plVar1 + 4;
      func_0x000100125af4(plVar3,param_2);
      if (((uint)plVar3 >> 7 & 1) == 0) {
        if (*plVar6 != 0) {
          return;
        }
        goto LAB_10530cce4;
      }
      plVar6 = plVar1 + 1;
      plVar1 = (long *)*plVar6;
      goto joined_r0x00010530cc90;
    }
    plVar6 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10530cd84; end: 10530ce1b;  */

/* WARNING: Possible PIC construction at 0x00010530cdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010530cdd8) */
/* WARNING: Removing unreachable block (ram,0x00010530cdfc) */
/* WARNING: Removing unreachable block (ram,0x00010530cdf0) */

undefined4 FUN_10530cd84(void)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10530c67c();
  FUN_10530c5c8();
  FUN_10530c514();
  uStack_24 = uRam00000001138196c4;
  uStack_20 = uRam000000011381967c;
  uStack_1c = uRam0000000113819634;
  puVar1 = &uStack_24;
  FUN_10530d2dc(puVar1,&uStack_18);
  return *puVar1;
}



/* Entry: 10530ce1c; end: 10530cef7;  */

void FUN_10530ce1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [88];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &uStack_98;
  FUN_10530c67c();
  func_0x00010530da7c();
  func_0x00010530d998();
  FUN_10530c5c8();
  func_0x00010530da88();
  func_0x00010530d998();
  FUN_10530c514();
  func_0x00010530da70();
  func_0x00010530d998();
  puVar1 = puStack_a0;
  while (puVar1 != &uStack_98) {
    FUN_10530d330(auStack_88,puVar1 + 7);
    func_0x00010530d350(param_1,auStack_88);
    func_0x00010530b5c4(auStack_88);
    func_0x00010002c7d4();
  }
  func_0x00010530d90c(&puStack_a0);
  return;
}



/* Entry: 10530cef8; end: 10530cf3f;  */

long FUN_10530cef8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010028af84(lVar1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 10530cf40; end: 10530cfab;  */

long FUN_10530cf40(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [72];
  
  func_0x00010530d2b0(auStack_78);
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  FUN_10530c090(param_1,auStack_78);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  func_0x00010530b5c4(auStack_78);
  return param_1;
}



/* Entry: 10530cfac; end: 10530d00b;  */

long * FUN_10530cfac(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      plVar2 = (long *)0x2e8ba2e8ba2e8ba;
    }
    return plVar2;
  }
  FUN_10530d090();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_10530d144(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10530d00c; end: 10530d08f;  */

void FUN_10530d00c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_10530d144(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10530d090; end: 10530d0a3;  */

long * FUN_10530d090(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  *(long *)((long)pcVar1 + 0x18) = 0;
  *(long *)((long)pcVar1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010530d0f0();
  }
  lVar2 = param_4 + param_3 * 0x58;
  *(long *)pcVar1 = param_4;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(long *)((long)pcVar1 + 0x10) = lVar2;
  *(long *)((long)pcVar1 + 0x18) = param_4 + param_2 * 0x58;
  return (long *)pcVar1;
}



/* Entry: 10530d0a4; end: 10530d113;  */

long * FUN_10530d0a4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010530d0f0();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 10530d114; end: 10530d143;  */

void FUN_10530d114(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x58) {
    FUN_10530d1dc(param_4,uVar1);
    param_4 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x00010530b5c4(param_2);
  }
  func_0x00010530d1fc(&uStack_70);
  return;
}



/* Entry: 10530d144; end: 10530d1db;  */

void FUN_10530d144(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    FUN_10530d1dc(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x00010530b5c4(param_2);
  }
  func_0x00010530d1fc(&uStack_60);
  return;
}



/* Entry: 10530d1dc; end: 10530d26b;  */

void FUN_10530d1dc(void)

{
  FUN_10530c090();
  func_0x00010530da94();
  return;
}



/* Entry: 10530d26c; end: 10530d273;  */

void FUN_10530d26c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x00010530b5c4();
  }
  return;
}



/* Entry: 10530d274; end: 10530d2db;  */

void FUN_10530d274(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x00010530b5c4();
  }
  return;
}



/* Entry: 10530d2dc; end: 10530d2fb;  */

void FUN_10530d2dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10530d2fc(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10530d2fc; end: 10530d32f;  */

void FUN_10530d2fc(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar1, param_1 = param_1 + 1, param_1 != param_2) {
      puVar1 = param_1;
      if (*param_1 <= *puVar2) {
        puVar1 = puVar2;
      }
    }
  }
  return;
}



/* Entry: 10530d330; end: 10530d3b7;  */

void FUN_10530d330(void)

{
  func_0x00010530d2b0();
  func_0x00010530da94();
  return;
}



/* Entry: 10530d3b8; end: 10530d45f;  */

long FUN_10530d3b8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10530cfac(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  FUN_10530d0a4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  FUN_10530d1dc(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x58;
  FUN_10530d00c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010530d240(auStack_58);
  return lVar2;
}



/* Entry: 10530d460; end: 10530d49b;  */

void FUN_10530d460(undefined8 param_1)

{
  func_0x00010530da54(param_1,"NATIVE_CDN_DOWNLOAD_HOST_PREWARM");
  func_0x00010530da70();
  func_0x00010530da3c();
  func_0x00010530da00();
  return;
}



/* Entry: 10530d49c; end: 10530d4d7;  */

void FUN_10530d49c(undefined8 param_1)

{
  func_0x00010530da54(param_1,"NATIVE_CDN_UPLOAD_HOST_PREWARM");
  func_0x00010530da88();
  func_0x00010530da3c();
  func_0x00010530da00();
  return;
}



/* Entry: 10530d4d8; end: 10530d513;  */

void FUN_10530d4d8(undefined8 param_1)

{
  func_0x00010530da54(param_1,"NATIVE_HOST_PREWARM");
  func_0x00010530da7c();
  func_0x00010530da3c();
  func_0x00010530da00();
  return;
}



/* Entry: 10530d514; end: 10530d53f;  */

void FUN_10530d514(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  cVar2 = *(char *)((long)param_2 + 0x17);
  lStack_30 = *param_2;
  if (-1 < (long)cVar2) {
    lStack_30 = (long)param_2;
  }
  lVar1 = param_2[1];
  if (-1 < cVar2) {
    lVar1 = (long)cVar2;
  }
  lVar1 = lStack_30 + lVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_28 = param_3;
  for (; lStack_30 != lVar1; lStack_30 = lStack_30 + 1) {
    plVar3 = &lStack_30;
    FUN_10530d5cc(&lStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,plVar3);
  }
  return;
}



/* Entry: 10530d540; end: 10530d5cb;  */

void FUN_10530d540(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_28 = param_3;
  while (param_2 != param_4) {
    plVar1 = &lStack_30;
    lStack_30 = param_2;
    FUN_10530d5cc(&lStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,plVar1);
    param_2 = lStack_30 + 1;
  }
  return;
}



/* Entry: 10530d5cc; end: 10530d5e7;  */

void FUN_10530d5cc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  func_0x000100152084();
                    /* WARNING: Could not recover jumptable at 0x00010530d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}



/* Entry: 10530d5e8; end: 10530d617;  */

void FUN_10530d5e8(undefined8 param_1,long *param_2)

{
  func_0x000100152084();
                    /* WARNING: Could not recover jumptable at 0x00010530d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))();
  return;
}



/* Entry: 10530d618; end: 10530d877;  */

/* WARNING: Possible PIC construction at 0x00010530d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010530d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010530d858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010530d828) */
/* WARNING: Removing unreachable block (ram,0x00010530d730) */
/* WARNING: Removing unreachable block (ram,0x00010530d738) */
/* WARNING: Removing unreachable block (ram,0x00010530d85c) */

void FUN_10530d618(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_10530d654:
    plVar4 = (long *)plVar3[1];
    if (plVar4 != (long *)0x0) goto LAB_10530d66c;
    puVar7 = (undefined8 *)plVar3[2];
    bVar2 = true;
  }
  else {
    if (param_2[1] != 0) {
      FUN_10530d878();
      plVar4 = (long *)*plVar3;
      if (plVar4 == (long *)0x0) goto LAB_10530d654;
    }
LAB_10530d66c:
    bVar2 = false;
    puVar7 = (undefined8 *)plVar3[2];
    plVar4[2] = (long)puVar7;
  }
  plVar10 = (long *)*puVar7;
  if (plVar3 == plVar10) {
    *puVar7 = plVar4;
    if (plVar3 == param_1) {
      plVar10 = (long *)0x0;
      param_1 = plVar4;
    }
    else {
      plVar10 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar4;
  }
  lVar5 = plVar3[3];
  plVar9 = param_1;
  if (plVar3 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar3[2] = (long)puVar7;
    if (param_2 == (long *)*puVar7) {
      *puVar7 = plVar3;
    }
    else {
      puVar7[1] = plVar3;
    }
    lVar6 = *param_2;
    lVar1 = param_2[1];
    *(long **)(lVar6 + 0x10) = plVar3;
    *plVar3 = lVar6;
    plVar3[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar3;
    }
    *(char *)(plVar3 + 3) = (char)param_2[3];
    plVar9 = plVar3;
    if (param_1 != param_2) {
      plVar9 = param_1;
    }
  }
  if ((plVar9 != (long *)0x0) && ((char)lVar5 != '\0')) {
    if (bVar2) {
      while( true ) {
        plVar3 = (long *)plVar10[2];
        if (plVar10 != (long *)*plVar3) break;
        plVar8 = plVar9;
        if ((*(byte *)(plVar10 + 3) & 1) == 0) {
          *(undefined1 *)(plVar10 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          func_0x00010015dd98();
          plVar8 = plVar10;
          if (plVar9 != (long *)plVar10[1]) {
            plVar8 = plVar9;
          }
          plVar10 = *(long **)plVar10[1];
        }
        lVar5 = *plVar10;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x18) != '\x01')) {
LAB_10530d864:
          func_0x00010530da08();
code_r0x00010015dd98:
          lVar5 = *plVar3;
          lVar6 = *(long *)(lVar5 + 8);
          *plVar3 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar3;
          }
          plVar4 = (long *)plVar3[2];
          *(long **)(lVar5 + 0x10) = plVar4;
          if (plVar3 == (long *)*plVar4) {
            *plVar4 = lVar5;
          }
          else {
            plVar4[1] = lVar5;
          }
          *(long **)(lVar5 + 8) = plVar3;
          plVar3[2] = lVar5;
          return;
        }
        if ((plVar10[1] != 0) && (*(char *)(plVar10[1] + 0x18) != '\x01')) {
          if ((lVar5 == 0) || (*(char *)(lVar5 + 0x18) == '\x01')) {
            func_0x00010530da5c();
            goto code_r0x00010002c89c;
          }
          goto LAB_10530d864;
        }
        *(undefined1 *)(plVar10 + 3) = 0;
        plVar4 = (long *)plVar10[2];
        plVar9 = plVar8;
        if ((char)plVar4[3] != '\x01' || plVar4 == plVar8) goto LAB_10530d7fc;
LAB_10530d7e4:
        lVar5 = 8;
        if (plVar4 != *(long **)plVar4[2]) {
          lVar5 = 0;
        }
        plVar10 = *(long **)((long)plVar4[2] + lVar5);
      }
      if ((*(byte *)(plVar10 + 3) & 1) == 0) {
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(plVar3 + 3) = 0;
        goto code_r0x00010002c89c;
      }
      if ((*plVar10 != 0) && (*(char *)(*plVar10 + 0x18) != '\x01')) {
        if ((plVar10[1] == 0) || (*(char *)(plVar10[1] + 0x18) == '\x01')) {
          func_0x00010530da5c();
          goto code_r0x00010015dd98;
        }
LAB_10530d830:
        func_0x00010530da08();
code_r0x00010002c89c:
        plVar4 = (long *)plVar3[1];
        lVar5 = *plVar4;
        plVar3[1] = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
        }
        puVar7 = (undefined8 *)plVar3[2];
        plVar4[2] = (long)puVar7;
        if (plVar3 == (long *)*puVar7) {
          *puVar7 = plVar4;
        }
        else {
          puVar7[1] = plVar4;
        }
        *plVar4 = (long)plVar3;
        plVar3[2] = (long)plVar4;
        return;
      }
      if ((plVar10[1] != 0) && (*(char *)(plVar10[1] + 0x18) != '\x01')) goto LAB_10530d830;
      *(undefined1 *)(plVar10 + 3) = 0;
      plVar4 = (long *)plVar10[2];
      if ((plVar4 != plVar9) && ((*(byte *)(plVar4 + 3) & 1) != 0)) goto LAB_10530d7e4;
    }
LAB_10530d7fc:
    *(undefined1 *)(plVar4 + 3) = 1;
  }
  return;
}



/* Entry: 10530d878; end: 10530d89f;  */

long * FUN_10530d878(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 != (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 10530d8a0; end: 10530d977;  */

void FUN_10530d8a0(long param_1)

{
  func_0x00010530b5c4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10530d978; end: 10530dabb;  */

void FUN_10530d978(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cfa428;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10530dabc; end: 10530dcef;  */

void FUN_10530dabc(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,6);
  puVar2 = param_2;
  func_0x00010044fc98();
  FUN_10530dcf0(auStack_90,"network_warmup_dispatch",&puStack_70,puVar2);
  func_0x0001004b5250(&puStack_a0,auStack_90);
  (**(code **)(*(long *)*param_2 + 0x10))(&uStack_c0);
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110878870;
  puStack_70 = puStack_a0;
  puStack_68 = (undefined8 *)lStack_98;
  if (lStack_98 != 0) {
    do {
      func_0x0001004b52ec();
    } while (extraout_w10 != 0);
  }
  puVar1 = puVar2 + 3;
  puVar2[4] = &PTR_FUN_110878740;
  puVar2[5] = &PTR_DAT_110878768;
  puVar2[3] = &PTR_FUN_110878708;
  puVar2[9] = lStack_b8;
  puVar2[8] = uStack_c0;
  if (lStack_b8 != 0) {
    do {
      func_0x0001004b52ec();
    } while (extraout_w10_00 != 0);
  }
  puVar2[10] = puStack_a0;
  puVar2[0xb] = lStack_98;
  if (lStack_98 != 0) {
    do {
      func_0x0001004b52ec();
    } while (extraout_w10_01 != 0);
  }
  puVar2[0xc] = 0;
  func_0x000100554470(&puStack_70);
  puStack_b0 = puVar1;
  puStack_a8 = puVar2;
  puStack_80 = puVar1;
  puStack_78 = puVar2;
  do {
    func_0x00010530eac0();
  } while (extraout_w9 != 0);
  do {
    func_0x0001004b52ec();
  } while (extraout_w10_02 != 0);
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  puVar2[6] = puVar1;
  puVar2[7] = puVar2;
  FUN_10530e5bc(&puStack_70);
  FUN_10530e79c(&puStack_80);
  func_0x0001009d8b30(&uStack_c0);
  plVar3 = (long *)*param_4;
  puStack_70 = puVar2 + 4;
  puStack_68 = puVar2;
  do {
    func_0x00010530eac0();
  } while (extraout_w9_00 != 0);
  (**(code **)(*plVar3 + 0x18))();
  func_0x00010066bbd8(&puStack_70);
  plVar3 = (long *)*param_3;
  puStack_70 = puVar2 + 5;
  puStack_68 = puVar2;
  do {
    func_0x00010530eac0();
  } while (extraout_w9_01 != 0);
  (**(code **)(*plVar3 + 0x20))();
  func_0x0001006103d0(&puStack_70);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  FUN_10530e79c(&puStack_b0);
  func_0x0001005544a0(&puStack_a0);
  func_0x000100450be4(auStack_90);
  return;
}



/* Entry: 10530dcf0; end: 10530dd1b;  */

void FUN_10530dcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10530e62c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10530dd1c; end: 10530dfcf;  */

void FUN_10530dd1c(long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [16];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar6 = param_2;
    lVar5 = param_2;
    func_0x0001005d466c();
    uVar1 = param_2 + 0x18;
    lVar4 = lVar5;
    func_0x0001005d466c();
    uStack_d0 = param_3 & 0xffffffff;
    uStack_c8 = 0;
    lStack_f0 = lVar6;
    lStack_e8 = lVar5;
    uStack_e0 = uVar1;
    lStack_d8 = lVar4;
    func_0x0001003a91d4("{}{}?wup_uc={}");
  }
  else {
    lVar6 = param_2;
    lVar5 = param_2;
    func_0x0001005d466c();
    uStack_e0 = param_3 & 0xffffffff;
    lStack_d8 = 0;
    lStack_f0 = lVar6;
    lStack_e8 = lVar5;
    func_0x0001003a91d4("{}?wup_uc={}");
  }
  func_0x0001003a9204(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108,auStack_88);
  uStack_110 = *(undefined4 *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x3c) == '\0') {
    uStack_110 = 4;
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  func_0x0001005ad2a8(&uStack_70);
  auStack_170[0] = 0;
  uStack_158 = 0;
  auStack_150[0] = 0;
  uStack_138 = 0;
  uStack_130 = 0x100000001;
  FUN_10530182c(&lStack_f0,auStack_108,&uStack_128,7,auStack_150);
  func_0x0001001148fc(auStack_150);
  func_0x0001001148fc(auStack_170);
  func_0x0001005ad2a8(&uStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puStack_180 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  FUN_105300df4(&uStack_70,&puStack_180);
  func_0x0001000ff1ac(&puStack_180);
  puVar2 = (undefined8 *)0x78;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1108788c0;
  puVar7 = puVar2 + 3;
  *puVar7 = &PTR_DAT_110878910;
  func_0x00010530d2b0(puVar2 + 4,param_2);
  lVar6 = param_4[1];
  uVar8 = *param_4;
  puVar2[0xe] = param_4[1];
  puVar2[0xd] = uVar8;
  if (lVar6 != 0) {
    do {
      func_0x0001004b52ec();
    } while (extraout_w10 != 0);
  }
  plVar3 = *(long **)(param_1 + 0x28);
  puStack_1a0 = puVar7;
  puStack_198 = puVar2;
  puStack_180 = puVar7;
  puStack_178 = puVar2;
  do {
    func_0x00010530eab0();
  } while (extraout_w9 != 0);
  lStack_1a8 = lStack_68;
  uStack_1b0 = uStack_70;
  if (lStack_68 != 0) {
    do {
      func_0x0001004b52ec();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar3 + 0x10))(auStack_190);
  func_0x000105301d8c(auStack_190);
  func_0x00010067c884(&uStack_1b0);
  func_0x000105302c94(&puStack_1a0);
  FUN_10530e870(&puStack_180);
  FUN_105302648(&uStack_70);
  FUN_1053018c4(&lStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  return;
}



/* Entry: 10530dfd0; end: 10530dfd7;  */

void FUN_10530dfd0(void)

{
  return;
}



/* Entry: 10530dfd8; end: 10530e163;  */

void FUN_10530dfd8(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = param_1 + 9;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((param_2 == 1) &&
     ((plVar3 = param_1, FUN_10530cd84(), plVar4 = plRam00000001130ced20, (int)plVar3 < 1 ||
      (plVar4 = plVar3, __ZNSt3__16chrono12steady_clock3nowEv(),
      (long)((ulong)plVar3 & 0xffffffff) <=
      ((long)plVar4 - (long)plRam00000001130ced20) / 1000000000)))) {
    plRam00000001130ced20 = plVar4;
    FUN_10530ce1c(&lStack_68,2);
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar7 = puVar5 + 3;
    *puVar7 = &PTR_DAT_110878828;
    *puVar5 = &PTR_FUN_110878958;
    puStack_78 = puVar7;
    puStack_70 = puVar5;
    for (lVar6 = lStack_68; lVar6 != lStack_60; lVar6 = lVar6 + 0x58) {
      puStack_88 = puVar7;
      puStack_80 = puVar5;
      if (*(int *)(lVar6 + 0x48) < 1) {
        do {
          func_0x00010530eab0();
        } while (extraout_w9_00 != 0);
        func_0x00010530eb04(*(undefined8 *)(*param_1 + 0x10));
        (*extraout_x8)();
      }
      else {
        do {
          func_0x00010530eab0();
        } while (extraout_w9 != 0);
        func_0x00010530eb04();
        FUN_10530e164();
      }
      func_0x00010530ba9c(&puStack_88);
    }
    FUN_10530e8c0(&puStack_78);
    func_0x00010530b50c(&lStack_68);
  }
  return;
}



/* Entry: 10530e164; end: 10530e50b;  */

void FUN_10530e164(long *param_1,undefined8 **param_2,code *param_3,undefined8 *param_4,
                  undefined8 param_5,int param_6,undefined8 **param_7,undefined8 *param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 **ppuVar10;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar11;
  code *unaff_x23;
  undefined8 *puVar12;
  undefined **unaff_x24;
  undefined8 **unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  
  func_0x0001004b51cc();
  uVar3 = 0;
  plVar7 = param_1;
  ppuVar10 = param_2;
  uStack_70 = extraout_x8_00;
  if (param_8 == (undefined8 *)param_1[9]) {
    uVar11 = SUB84(param_3,0);
    if (param_6 < 1) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
    }
    else {
      func_0x00010530eadc();
      lStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_108 = uVar11;
      if (param_4[1] != 0) {
        do {
          func_0x0001004b52ec();
        } while (extraout_w10 != 0);
      }
      lStack_e8 = param_1[4];
      lStack_f0 = param_1[3];
      if (param_1[4] != 0) {
        do {
          func_0x0001004b52ec();
        } while (extraout_w10_00 != 0);
      }
      uStack_158 = param_5;
      func_0x00010530eaf0();
      puVar5 = puStack_a8;
      puStack_a8[1] = 0;
      puStack_a8[2] = 0;
      *puStack_a8 = &PTR_FUN_1108789a8;
      pcStack_a0 = FUN_10530e8fc;
      ppuStack_98 = &PTR_FUN_1108789e8;
      lVar6 = 0x70;
      __Znwm();
      func_0x00010530d2b0();
      *(undefined4 *)(lVar6 + 0x48) = uStack_108;
      *(long *)(lVar6 + 0x58) = lStack_f8;
      *(undefined8 *)(lVar6 + 0x50) = uStack_100;
      if (lStack_f8 != 0) {
        plVar7 = (long *)(lStack_f8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(long *)(lVar6 + 0x68) = lStack_e8;
      *(long *)(lVar6 + 0x60) = lStack_f0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      puVar5[3] = &PTR_DAT_110878a10;
      puVar5[4] = FUN_10530e8fc;
      puVar5[5] = &PTR_FUN_1108789e8;
      puVar5[6] = lVar6;
      uStack_90 = 0;
      FUN_10530e998(&ppuStack_98);
      puVar5 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      func_0x00010530eaa8();
      FUN_10530e51c(&puStack_150);
      param_5 = uStack_158;
      plVar7 = (long *)param_1[7];
      puStack_148 = puVar5;
      uStack_c8 = 0;
      uStack_c0 = 0;
      ppuVar10 = &puStack_150;
      puStack_150 = puVar5 + 3;
      (**(code **)(*plVar7 + 0x18))(plVar7,ppuVar10,uStack_158);
      func_0x00010530eae8();
      func_0x00010530eafc();
    }
    iVar9 = (int)param_7 + -1;
    uVar3 = iVar9 == 0;
    unaff_x20 = param_1;
    unaff_x21 = param_8;
    unaff_x22 = param_4;
    unaff_x23 = param_3;
    unaff_x24 = (undefined **)param_2;
    unaff_x25 = param_7;
    unaff_x26 = param_5;
    if (!(bool)uVar3) {
      unaff_x25 = &puStack_150;
      func_0x00010530eadc();
      lStack_f8 = CONCAT44(lStack_f8._4_4_,iVar9);
      lStack_e8 = param_4[1];
      lStack_f0 = *param_4;
      uStack_108 = uVar11;
      uStack_100 = param_5;
      if (param_4[1] != 0) {
        do {
          func_0x0001004b52ec();
        } while (extraout_w10_01 != 0);
      }
      lStack_d0 = param_1[4];
      lStack_d8 = param_1[3];
      puStack_e0 = param_8;
      if (param_1[4] != 0) {
        do {
          func_0x0001004b52ec();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010530eaf0();
      puVar5 = puStack_a8;
      puStack_a8[1] = 0;
      puStack_a8[2] = 0;
      *puStack_a8 = &PTR_FUN_1108789a8;
      unaff_x23 = FUN_10530e9ec;
      unaff_x24 = &PTR_FUN_110878a40;
      pcStack_a0 = FUN_10530e9ec;
      ppuStack_98 = &PTR_FUN_110878a40;
      unaff_x22 = (undefined8 *)0x88;
      __Znwm();
      func_0x00010530d2b0();
      unaff_x22[10] = uStack_100;
      unaff_x22[9] = CONCAT44(uStack_104,uStack_108);
      *(undefined4 *)(unaff_x22 + 0xb) = (undefined4)lStack_f8;
      unaff_x22[0xd] = lStack_e8;
      unaff_x22[0xc] = lStack_f0;
      if (lStack_e8 != 0) {
        plVar7 = (long *)(lStack_e8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      unaff_x22[0xe] = puStack_e0;
      unaff_x22[0x10] = lStack_d0;
      unaff_x22[0xf] = lStack_d8;
      lStack_d8 = 0;
      lStack_d0 = 0;
      puVar5[3] = &PTR_DAT_110878a10;
      puVar5[4] = FUN_10530e9ec;
      puVar5[5] = &PTR_FUN_110878a40;
      puVar5[6] = unaff_x22;
      uStack_90 = 0;
      FUN_10530ea50(&ppuStack_98);
      puVar5 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      unaff_x21 = puVar5 + 3;
      func_0x00010530eaa8();
      func_0x00010530e54c(&puStack_150);
      plVar7 = (long *)param_1[7];
      puStack_148 = puVar5;
      uStack_c8 = 0;
      uStack_c0 = 0;
      ppuVar10 = &puStack_150;
      puStack_150 = unaff_x21;
      (**(code **)(*plVar7 + 0x18))(plVar7,ppuVar10,param_5);
      func_0x00010530eae8();
      func_0x00010530eafc();
    }
  }
  iVar9 = (int)ppuVar10;
  func_0x0001004b536c(uStack_70);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  plVar8 = plVar7;
  func_0x00010530eae8();
  func_0x00010530eafc();
  func_0x00010530ea74();
  pcStack_168 = FUN_10530e50c;
  plVar4 = plVar8 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((iVar9 == 1) &&
     ((plVar4 = plVar8 + -1, uStack_1b0 = unaff_x26, ppuStack_1a8 = unaff_x25,
      ppuStack_1a0 = (undefined8 **)unaff_x24, pcStack_198 = unaff_x23, puStack_190 = unaff_x22,
      puStack_188 = unaff_x21, plStack_180 = unaff_x20, plStack_178 = plVar7,
      puStack_170 = &stack0xfffffffffffffff0, FUN_10530cd84(), plVar7 = plRam00000001130ced20,
      (int)plVar4 < 1 ||
      (plVar7 = plVar4, __ZNSt3__16chrono12steady_clock3nowEv(),
      (long)((ulong)plVar4 & 0xffffffff) <=
      ((long)plVar7 - (long)plRam00000001130ced20) / 1000000000)))) {
    plRam00000001130ced20 = plVar7;
    FUN_10530ce1c(&lStack_1c8,2);
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar12 = puVar5 + 3;
    *puVar12 = &PTR_DAT_110878828;
    *puVar5 = &PTR_FUN_110878958;
    puStack_1d8 = puVar12;
    puStack_1d0 = puVar5;
    for (lVar6 = lStack_1c8; lVar6 != lStack_1c0; lVar6 = lVar6 + 0x58) {
      puStack_1e8 = puVar12;
      puStack_1e0 = puVar5;
      if (*(int *)(lVar6 + 0x48) < 1) {
        do {
          func_0x00010530eab0();
        } while (extraout_w9_00 != 0);
        func_0x00010530eb04(*(undefined8 *)(plVar8[-1] + 0x10));
        (*extraout_x8)();
      }
      else {
        do {
          func_0x00010530eab0();
        } while (extraout_w9 != 0);
        func_0x00010530eb04();
        FUN_10530e164();
      }
      func_0x00010530ba9c(&puStack_1e8);
    }
    FUN_10530e8c0(&puStack_1d8);
    func_0x00010530b50c(&lStack_1c8);
  }
  return;
}



/* Entry: 10530e50c; end: 10530e51b;  */

void FUN_10530e50c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = (long *)(param_1 + 0x40);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((param_2 == 1) &&
     ((plVar3 = (long *)(param_1 - 8U), FUN_10530cd84(), plVar4 = plRam00000001130ced20,
      (int)plVar3 < 1 ||
      (plVar4 = plVar3, __ZNSt3__16chrono12steady_clock3nowEv(),
      (long)((ulong)plVar3 & 0xffffffff) <=
      ((long)plVar4 - (long)plRam00000001130ced20) / 1000000000)))) {
    plRam00000001130ced20 = plVar4;
    FUN_10530ce1c(&lStack_68,2);
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar7 = puVar5 + 3;
    *puVar7 = &PTR_DAT_110878828;
    *puVar5 = &PTR_FUN_110878958;
    puStack_78 = puVar7;
    puStack_70 = puVar5;
    for (lVar6 = lStack_68; lVar6 != lStack_60; lVar6 = lVar6 + 0x58) {
      puStack_88 = puVar7;
      puStack_80 = puVar5;
      if (*(int *)(lVar6 + 0x48) < 1) {
        do {
          func_0x00010530eab0();
        } while (extraout_w9_00 != 0);
        func_0x00010530eb04(*(undefined8 *)(*(long *)(param_1 - 8U) + 0x10));
        (*extraout_x8)();
      }
      else {
        do {
          func_0x00010530eab0();
        } while (extraout_w9 != 0);
        func_0x00010530eb04();
        FUN_10530e164();
      }
      func_0x00010530ba9c(&puStack_88);
    }
    FUN_10530e8c0(&puStack_78);
    func_0x00010530b50c(&lStack_68);
  }
  return;
}



/* Entry: 10530e51c; end: 10530e57b;  */

void FUN_10530e51c(long param_1)

{
  FUN_10530e5bc(param_1 + 0x60);
  func_0x00010530ba9c(param_1 + 0x50);
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10530e57c; end: 10530e57f;  */

undefined8 * FUN_10530e57c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110878708;
  param_1[1] = &PTR_FUN_110878740;
  param_1[2] = &PTR_DAT_110878768;
  func_0x000100554470(param_1 + 7);
  func_0x0001009d8b30(param_1 + 5);
  FUN_10530e5bc(param_1 + 3);
  return param_1;
}



/* Entry: 10530e580; end: 10530e593;  */

void FUN_10530e580(void)

{
  func_0x00010530e5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e594; end: 10530e5bb;  */

undefined8 * FUN_10530e594(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110878708;
  *param_1 = &PTR_FUN_110878740;
  param_1[1] = &PTR_DAT_110878768;
  func_0x000100554470(param_1 + 6);
  func_0x0001009d8b30(param_1 + 4);
  FUN_10530e5bc(param_1 + 2);
  return param_1 + -1;
}



/* Entry: 10530e5bc; end: 10530e62b;  */

void FUN_10530e5bc(long param_1)

{
  func_0x0001006103c4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10530e62c; end: 10530e6b7;  */

undefined8 *
FUN_10530e62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001004b51cc();
  uStack_38 = extraout_x8;
  func_0x000100450688(auStack_50,1);
  FUN_10530e6b8(puStack_40,param_2,param_3,param_4);
  func_0x0001004b5344();
  func_0x000100450b64();
  func_0x0001004b536c(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010530ea94();
  func_0x000100450b64();
  puVar1 = puStack_40;
  func_0x00010530ea74();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1107ea880;
  puVar1[1] = 0;
  FUN_10530e700(puVar1 + 3);
  return puVar1;
}



/* Entry: 10530e6b8; end: 10530e6ff;  */

undefined8 * FUN_10530e6b8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_10530e700(param_1 + 3);
  return param_1;
}



/* Entry: 10530e700; end: 10530e76f;  */

undefined8
FUN_10530e700(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x00010002b838(auStack_48);
  func_0x00010028bc78(param_1,auStack_48,*param_3,param_4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 10530e770; end: 10530e773;  */

void FUN_10530e770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110878870;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e774; end: 10530e787;  */

void FUN_10530e774(void)

{
  func_0x00010530e790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e788; end: 10530e79b;  */

void FUN_10530e788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010068f3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10530e79c; end: 10530e7bf;  */

void FUN_10530e79c(long param_1)

{
  func_0x0001006103c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530e7c0; end: 10530e7c3;  */

void FUN_10530e7c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108788c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e7c4; end: 10530e7d7;  */

void FUN_10530e7c4(void)

{
  FUN_10530e864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e7d8; end: 10530e7e3;  */

void FUN_10530e7d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010068f3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10530e7e4; end: 10530e7f7;  */

void FUN_10530e7e4(void)

{
  FUN_10530e828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e7f8; end: 10530e827;  */

void FUN_10530e7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010530e804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  return;
}



/* Entry: 10530e828; end: 10530e863;  */

undefined8 * FUN_10530e828(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110878910;
  func_0x00010530ba9c(param_1 + 10);
  func_0x00010530b5c4(param_1 + 1);
  return param_1;
}



/* Entry: 10530e864; end: 10530e86f;  */

void FUN_10530e864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108788c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e870; end: 10530e893;  */

void FUN_10530e870(long param_1)

{
  func_0x0001006103c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530e894; end: 10530e897;  */

void FUN_10530e894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110878958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e898; end: 10530e8ab;  */

void FUN_10530e898(void)

{
  func_0x00010530e8b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e8ac; end: 10530e8bf;  */

void FUN_10530e8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010068f3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10530e8c0; end: 10530e8e3;  */

void FUN_10530e8c0(long param_1)

{
  func_0x0001006103c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530e8e4; end: 10530e8e7;  */

void FUN_10530e8e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108789a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e8e8; end: 10530e8fb;  */

void FUN_10530e8e8(void)

{
  FUN_10530e9dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e8fc; end: 10530e957;  */

void FUN_10530e8fc(long param_1)

{
  long lVar1;
  long *aplStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10530e958(aplStack_30,lVar1 + 0x60);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x10))
              (aplStack_30[0],lVar1,*(undefined4 *)(lVar1 + 0x48),lVar1 + 0x50);
  }
  FUN_10530e79c(aplStack_30);
  return;
}



/* Entry: 10530e958; end: 10530e997;  */

void FUN_10530e958(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10530e998; end: 10530e9b7;  */

void FUN_10530e998(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10530e51c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10530e9b8; end: 10530e9bb;  */

void FUN_10530e9b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10530e9bc; end: 10530e9db;  */

void FUN_10530e9bc(void)

{
  func_0x00010068f3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10530e9dc; end: 10530e9eb;  */

void FUN_10530e9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108789a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530e9ec; end: 10530ea4f;  */

void FUN_10530e9ec(long param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10530e958(alStack_30,lVar1 + 0x78);
  if (alStack_30[0] != 0) {
    FUN_10530e164(alStack_30[0],lVar1,*(undefined4 *)(lVar1 + 0x48),lVar1 + 0x60,
                  *(undefined8 *)(lVar1 + 0x50),0,*(undefined4 *)(lVar1 + 0x58),
                  *(undefined8 *)(lVar1 + 0x70));
  }
  FUN_10530e79c(alStack_30);
  return;
}



/* Entry: 10530ea50; end: 10530ea6f;  */

void FUN_10530ea50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010530e54c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10530ea70; end: 10530eb17;  */

void FUN_10530ea70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10530eb18; end: 10530eb4f; -[SCNetworkConnectivityAnnouncerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530eb18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127215c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127215cc);
  return;
}



/* Entry: 10530eb50; end: 10530ec57; -[SCAppStartExperimentReaderExperimentLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530eb50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_1127215d0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127215d4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf9c500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127215d8;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf46080();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198ae0(lVar2,param_2,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10530ec58; end: 10530eca7; -[SCAppStartExperimentReaderExperimentLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530ec58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127215d0);
  _objc_destroyWeak(param_1 + _DAT_1127215d8);
  _objc_destroyWeak(param_1 + _DAT_1127215d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127215dc);
  return;
}



/* Entry: 10530eca8; end: 10530eceb; -[SCConfigManagerBackgroundSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530eca8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127215e0);
  _objc_destroyWeak(param_1 + _DAT_1127215e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127215e8);
  return;
}



/* Entry: 10530ecec; end: 10530ed5f; -[SCConfigJobProcessor initWithConfigManager:] */

undefined1 * FUN_10530ecec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10530ed60; end: 10530edeb; -[SCConfigJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_10530ed60(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10530edec;
  puStack_30 = &UNK_110842508;
  uStack_28 = in_x5;
  _objc_retain(in_x5);
  func_0x00010bf14500(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 10530edec; end: 10530ee07;  */

void FUN_10530edec(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010530ee04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,0);
  return;
}



/* Entry: 10530ee08; end: 10530ee13; -[SCConfigJobProcessor .cxx_destruct] */

void FUN_10530ee08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530ee14; end: 10530ee57; -[SCBandwidthPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530ee14(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd920();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af9b8;
  _objc_alloc_init(PTR_PTR_1126af9b8);
  func_0x00010c1add20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530ee58; end: 10530eec3; -[SCDaysSinceLastLoginOrOpenPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530ee58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c088240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  func_0x000106cb4bbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10530eec4; end: 10530eecf; -[SCDaysSinceLastLoginOrOpenPropertyHandler .cxx_destruct] */

void FUN_10530eec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530eed0; end: 10530ef97; -[SCDiskSizeAvailablePropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530eed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_38 = 0;
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440();
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    puVar2 = (undefined *)(ulong)(uint)(int)((double)puVar2 / 1048576.0);
    func_0x000106cb4bbc(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd1978;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    lStack_70 = lVar1;
    pcStack_48 = FUN_10530ef98;
    puStack_68 = puVar2;
    uStack_60 = param_4;
    uStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar5);
    lStack_78 = 0;
    puVar2 = PTR_PTR_1126b24e8;
    func_0x00010c2763c0();
    lVar1 = lStack_78;
    _objc_retain(lStack_78);
    if (lVar1 == 0) {
      puVar2 = (undefined *)(ulong)(uint)(int)((double)puVar2 / 1048576.0);
      func_0x000106cb4bbc(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f3a478;
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd1978;
      func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      _objc_exception_throw();
      lStack_b0 = lVar1;
      pcStack_88 = FUN_10530f060;
      puStack_a8 = puVar2;
      ppuStack_a0 = ppuVar5;
      ppuStack_98 = ppuVar3;
      ppuStack_90 = &puStack_50;
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar6);
      puStack_d8 = &uStack_d0;
      uStack_d0 = 0;
      uStack_c0 = 0x2020000000;
      uStack_b8 = 0;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_10530f15c;
      puStack_e0 = &UNK_110847658;
      puStack_c8 = puStack_d8;
      func_0x00010bcbe2c4("APPSTORE",&puStack_f8);
      if ((ulong)puStack_c8[3] < 4) {
        puVar2 = (undefined *)(ulong)(4U >> (ulong)((uint)puStack_c8[3] & 0x1f) & 1);
        func_0x000106cb4b44(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      __Block_object_dispose(&uStack_d0,8);
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10530ef98; end: 10530f05f; -[SCDiskSizePropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530ef98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_38 = 0;
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010c2763c0();
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    puVar2 = (undefined *)(ulong)(uint)(int)((double)puVar2 / 1048576.0);
    func_0x000106cb4bbc(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd1978;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    lStack_70 = lVar1;
    pcStack_48 = FUN_10530f060;
    puStack_68 = puVar2;
    uStack_60 = param_4;
    uStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar4);
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10530f15c;
    puStack_a0 = &UNK_110847658;
    puStack_88 = puStack_98;
    func_0x00010bcbe2c4("APPSTORE",&puStack_b8);
    if ((ulong)puStack_88[3] < 4) {
      puVar2 = (undefined *)(ulong)(4U >> (ulong)((uint)puStack_88[3] & 0x1f) & 1);
      func_0x000106cb4b44(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


