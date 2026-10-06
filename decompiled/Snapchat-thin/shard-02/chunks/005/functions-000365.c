/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e98bfc; end: 101e98c17;  */

undefined8 FUN_101e98bfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_80 [7];
  char cStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101e98b9c(param_2,auStack_80);
  if (cStack_48 == '\0') {
    func_0x000107c61428(lVar1 + 0x10,auStack_80,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000101e98870();
      func_0x000107c613fc();
      func_0x000107c61434(uVar3);
      FUN_101e99290(uVar2,uVar3,auStack_80[0],lVar1);
      func_0x000107c61574(lVar1);
      return uVar2;
    }
    func_0x000107c61574(auStack_80[0]);
  }
  else {
    func_0x000101e98bd0(auStack_80);
  }
  return 0x8000000000000000;
}



/* Entry: 101e98c18; end: 101e98c8f;  */

long FUN_101e98c18(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((uVar2 != 0) && ((int)uVar1 + -1 < 0)) {
    FUN_101e9957c(param_1 + 8);
  }
  return param_1;
}



/* Entry: 101e98c90; end: 101e98cfb;  */

void FUN_101e98c90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e98cfc;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  *(undefined4 *)((long)plVar3 + 0x4c) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e97c0c,0,0);
  return;
}



/* Entry: 101e98cfc; end: 101e98d9f;  */

void FUN_101e98cfc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e98d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e98da0; end: 101e98e1f;  */

undefined * FUN_101e98da0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101e98d38();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101e98e20; end: 101e98f47;  */

ulong FUN_101e98e20(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e98f48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101e98da0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e98f44);
      (*pcVar1)();
    }
    FUN_101e98f48(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101e98f48; end: 101e9906b;  */

long FUN_101e98f48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e99068);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e9906c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e359d0;
        func_0x0001000285a8(0x112e359d0,&UNK_10da1ed68);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e359d0;
      func_0x0001000285a8(0x112e359d0,&UNK_10da1ed68);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e99064);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101e9906c; end: 101e9928f;  */

void FUN_101e9906c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_101e98e20(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101e99290; end: 101e993ab;  */

void FUN_101e99290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  puVar1 = &UNK_110492460;
  func_0x000107c613fc(&UNK_110492460,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_4);
  puVar2 = &UNK_110492528;
  func_0x000107c613fc(&UNK_110492528,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61434(param_2);
  uVar3 = 0;
  func_0x0001001ca524(0,3,0x40,3,0,0,&UNK_10da1ed88,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  func_0x000107c61574();
  func_0x000101e98d38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = param_3;
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return;
}



/* Entry: 101e993ac; end: 101e993e3;  */

void FUN_101e993ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e993e4; end: 101e9944f;  */

void FUN_101e993e4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e9a1ec;
  plVar3[0x2b] = lVar2;
  plVar3[0x2c] = lVar4;
  plVar3[0x2a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e97270,0,0);
  return;
}



/* Entry: 101e99450; end: 101e99547;  */

undefined8 FUN_101e99450(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e353f8;
  func_0x0001000285a8(0x112e353f8,&UNK_10da1ed90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101e99548; end: 101e9957b;  */

void FUN_101e99548(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((uVar2 != 0) && ((int)uVar1 + -1 < 0)) {
    FUN_101e9957c(param_1 + 8);
  }
  return;
}



/* Entry: 101e9957c; end: 101e9959b;  */

void FUN_101e9957c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e99590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101e9959c; end: 101e99763;  */

undefined8 * FUN_101e9959c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[4];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
    return param_1;
  }
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  if (uVar2 != 0) {
    param_1[4] = uVar2;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    (*(code *)**(undefined8 **)(uVar2 - 8))(param_1 + 1,param_2 + 1);
    return param_1;
  }
  uVar3 = param_2[1];
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 101e99764; end: 101e998cb;  */

/* WARNING: Possible PIC construction at 0x000101e99858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e9985c) */

void FUN_101e99764(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 == param_2) {
    return;
  }
  lVar3 = param_1[3];
  lVar5 = param_2[3];
  if (lVar3 == lVar5) {
    if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e99824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
      return;
    }
    uVar4 = *param_1;
    func_0x000107c6157c(*param_2);
  }
  else {
    param_1[3] = lVar5;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    lVar6 = *(long *)(lVar3 + -8);
    lVar7 = *(long *)(lVar5 + -8);
    uVar1 = *(uint *)(lVar7 + 0x50);
    if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) == 0) {
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        func_0x000107c6157c();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
      return;
    }
    uVar4 = *param_1;
    if ((uVar1 >> 0x11 & 1) == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    }
    else {
      uVar2 = *param_2;
      *param_1 = uVar2;
      func_0x000107c6157c(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 101e998cc; end: 101e999a3;  */

undefined8 * FUN_101e998cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if (0xfffffffe < uVar1) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 + -1 < 0) {
    uVar2 = param_2[4];
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 + -1 < 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if (uVar1 != 0) {
        FUN_101e9957c(param_1 + 1);
        uVar3 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = uVar3;
        uVar3 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = uVar3;
        uVar3 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar3;
        return param_1;
      }
      uVar3 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      uVar3 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar3;
      uVar3 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      return param_1;
    }
    if (uVar1 != 0) {
      FUN_101e9957c(param_1 + 1);
    }
  }
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 101e999a4; end: 101e99adf;  */

int FUN_101e999a4(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < uVar2 + 1) {
    iVar1 = uVar2 - 2;
  }
  return iVar1;
}



/* Entry: 101e99ae0; end: 101e99b43;  */

void FUN_101e99ae0(int *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xe);
  if (2 < *(byte *)(param_1 + 0xe)) {
    uVar2 = *param_1 + 3;
  }
  if (uVar2 == 2) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if (uVar3 == 0) {
      return;
    }
    if (-1 < (int)uVar1 + -1) {
      return;
    }
    param_1 = param_1 + 2;
  }
  else if (uVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)param_1);
    return;
  }
  FUN_101e9957c(param_1);
  return;
}



/* Entry: 101e99b44; end: 101e99eb3;  */

undefined8 * FUN_101e99b44(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = (uint)*(byte *)(param_2 + 0xe);
  if (2 < *(byte *)(param_2 + 0xe)) {
    uVar3 = *param_2 + 3;
  }
  if (uVar3 == 2) {
    uVar2 = *(ulong *)(param_2 + 8);
    uVar1 = uVar2;
    if (0xfffffffe < uVar2) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *(char *)param_1 = (char)*param_2;
      if (uVar2 == 0) {
        uVar4 = *(undefined8 *)(param_2 + 2);
        uVar7 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)(param_2 + 6);
        param_1[2] = *(undefined8 *)(param_2 + 4);
        param_1[1] = uVar4;
        param_1[4] = uVar7;
        param_1[3] = uVar6;
        uVar4 = *(undefined8 *)(param_2 + 10);
        param_1[6] = *(undefined8 *)(param_2 + 0xc);
        param_1[5] = uVar4;
      }
      else {
        param_1[4] = uVar2;
        uVar4 = *(undefined8 *)(param_2 + 10);
        param_1[6] = *(undefined8 *)(param_2 + 0xc);
        param_1[5] = uVar4;
        (*(code *)**(undefined8 **)(uVar2 - 8))(param_1 + 1,param_2 + 2);
      }
    }
    else {
      uVar4 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 6);
      uVar6 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar4;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      uVar4 = *(undefined8 *)(param_2 + 8);
      param_1[5] = *(undefined8 *)(param_2 + 10);
      param_1[4] = uVar4;
      param_1[6] = *(undefined8 *)(param_2 + 0xc);
    }
    *(undefined1 *)(param_1 + 7) = 2;
  }
  else if (uVar3 == 1) {
    lVar5 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar5;
    (*(code *)**(undefined8 **)(lVar5 + -8))();
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x000107c6157c(uVar4);
  }
  return param_1;
}



/* Entry: 101e99eb4; end: 101e9a107;  */

int FUN_101e99eb4(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 0xe)) {
    iVar1 = (*(byte *)(param_1 + 0xe) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 101e9a108; end: 101e9a147;  */

void FUN_101e9a108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e359e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ee10;
  func_0x000107c61520(&UNK_10da1ee10,&UNK_110492770);
  puRam0000000112e359e0 = puVar1;
  return;
}



/* Entry: 101e9a148; end: 101e9a14b;  */

void FUN_101e9a148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e359e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ee78;
  func_0x000107c61520(&UNK_10da1ee78,&UNK_1104926e0);
  puRam0000000112e359e8 = puVar1;
  return;
}



/* Entry: 101e9a14c; end: 101e9a18b;  */

void FUN_101e9a14c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e359e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ee78;
  func_0x000107c61520(&UNK_10da1ee78,&UNK_1104926e0);
  puRam0000000112e359e8 = puVar1;
  return;
}



/* Entry: 101e9a18c; end: 101e9a1ef;  */

undefined1 FUN_101e9a18c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101e9a1f0; end: 101e9a27b;  */

ulong FUN_101e9a1f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f017570);
    uVar3 = 0x41f00000;
    func_0x000107c436e4(uVar2);
    func_0x000107c61170(uVar1);
    *(int *)(unaff_x20 + 0x10) = (int)uVar3;
    *(undefined1 *)(unaff_x20 + 0x14) = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(unaff_x20 + 0x10);
  }
  return uVar3;
}



/* Entry: 101e9a27c; end: 101e9a2d7;  */

long FUN_101e9a27c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_101e9b188();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 101e9a2d8; end: 101e9a44f;  */

void FUN_101e9a2d8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar5 = param_2;
    FUN_101e9a27c();
    func_0x000107c61574(param_2);
    puVar7 = (ulong *)(lVar5 + 0x40);
    uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar10 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar10 = uVar10 & *puVar7;
    func_0x000107c61434(lVar5);
    lVar8 = 0;
    lVar1 = lVar8;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar6 = *(undefined8 *)
                 (*(long *)(lVar5 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar1 * 0x200);
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_a0 = 3;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 2;
        func_0x000107c6157c(uVar6);
        FUN_101e977d4(&uStack_c0);
        func_0x000107c61574(uVar6);
        func_0x000101e98bd0(&uStack_c0);
        lVar8 = lVar1;
      }
      bVar4 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e9a450);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar1) break;
      uVar10 = puVar7[lVar1];
    }
    func_0x000107c6142c(lVar5);
    func_0x000101e9b554(lVar5,puVar7,~uVar9,lVar8,0);
  }
  return;
}



/* Entry: 101e9a450; end: 101e9a48b;  */

void FUN_101e9a450(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e9a48c; end: 101e9a5d7;  */

undefined1 * FUN_101e9a48c(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *apuStack_80 [7];
  undefined1 uStack_48;
  
  func_0x0001000285a8(0x112e359d0,&UNK_10da1ed68);
  func_0x000107c613fc();
  puVar1 = (undefined1 *)0x0;
  func_0x00010095c380();
  puVar2 = puVar1;
  FUN_101e9a27c();
  if ((*(long *)(puVar2 + 0x10) == 0) ||
     (lVar3 = param_1, uVar6 = param_2, func_0x000100029284(), (uVar6 & 1) == 0)) {
    func_0x000107c6142c();
    FUN_101e6f23c();
    puVar4 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar2,0,0);
    *(undefined **)(puVar2 + 0x20) = &UNK_1106e9a98;
    puVar5 = puVar4;
    FUN_101e9a888();
    *(undefined **)(puVar2 + 0x28) = puVar5;
    func_0x000101e9a8c8();
    *(undefined **)(puVar2 + 0x30) = puVar5;
    *(long *)(puVar2 + 8) = param_1;
    *(ulong *)(puVar2 + 0x10) = param_2;
    *puVar2 = 5;
    func_0x000107c61434(param_2);
    func_0x00010488ade0(puVar4);
    func_0x000107c614ac(puVar4);
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x38) + lVar3 * 8);
    func_0x000107c6157c(uVar7);
    func_0x000107c6142c(puVar2);
    uStack_48 = 0;
    apuStack_80[0] = puVar1;
    func_0x000107c6157c(puVar1);
    FUN_101e977d4(apuStack_80);
    func_0x000107c61574(uVar7);
    func_0x000101e98bd0(apuStack_80);
  }
  return puVar1;
}



/* Entry: 101e9a5d8; end: 101e9a5f7;  */

void FUN_101e9a5d8(void)

{
  FUN_101e9a48c();
  return;
}



/* Entry: 101e9a5f8; end: 101e9a613;  */

void FUN_101e9a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9a614,0,0);
  return;
}



/* Entry: 101e9a614; end: 101e9a763;  */

void FUN_101e9a614(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x78) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar8,uVar5);
  uVar5 = 0xd000000000000024;
  func_0x000100029b28(0xd000000000000024,0x800000010f0174f0);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  func_0x000107c6142c(0x800000010f0174f0);
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  lVar3 = *(long *)(lVar2 + 0x48);
  func_0x0001000a8868(lVar2 + 0x28,uVar5);
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101e9a764;
                    /* WARNING: Could not recover jumptable at 0x000101e9a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68),0xd00000000000001f,0x800000010f017520,1,10,1,uVar5,
             lVar3);
  return;
}



/* Entry: 101e9a764; end: 101e9a7bf;  */

void FUN_101e9a764(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e9a7c0;
  }
  else {
    pcVar1 = FUN_101e9a824;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e9a7c0; end: 101e9a823;  */

void FUN_101e9a7c0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61428(puVar1,unaff_x22 + 0x40,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e9a820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e9a824; end: 101e9a887;  */

void FUN_101e9a824(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e9a884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e9a888; end: 101e9a907;  */

void FUN_101e9a888(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc66284;
  func_0x000107c61520(&DAT_10dc66284,&UNK_1106e9a98);
  puRam0000000112e35ae0 = puVar1;
  return;
}



/* Entry: 101e9a908; end: 101e9aa77;  */

void FUN_101e9a908(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e35af0,&UNK_10da1ef28);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101e9a9e4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_101e9a9e4:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9aa78);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101e9aa50;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101e9aa50:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101e9aa78; end: 101e9ad13;  */

void FUN_101e9aa78(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e35af0;
  func_0x0001000285a8(0x112e35af0,&UNK_10da1ef28);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101e9ace0:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e9ad10);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101e9ace0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e9ad14);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101e9ad14; end: 101e9b187;  */

/* WARNING: Removing unreachable block (ram,0x000101e9afa8) */

undefined1 * FUN_101e9ad14(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auStack_b0 [24];
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar10 = auStack_b0;
  puVar11 = auStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fadc();
  uVar15 = param_2;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (param_1 != (undefined1 *)0x0) {
    puVar7 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      puVar7 = puVar8;
      uVar14 = param_3;
      func_0x00010006c00c();
      func_0x000101e9b6dc();
      uVar5 = (uint)(param_3 >> 0x20);
      uVar16 = uVar5 >> 0x1e;
      puStack_98 = puVar7;
      uStack_90 = uVar14;
      uStack_88 = uVar15;
      if (uVar5 >> 0x1e < 2) {
        if (uVar16 == 0) {
          auStack_b0[0] = SUB81(puVar8,0);
          auStack_b0[1] = (undefined1)((ulong)puVar8 >> 8);
          auStack_b0[2] = (undefined1)((ulong)puVar8 >> 0x10);
          auStack_b0[3] = (undefined1)((ulong)puVar8 >> 0x18);
          auStack_b0[4] = (undefined1)((ulong)puVar8 >> 0x20);
          auStack_b0[5] = (undefined1)((ulong)puVar8 >> 0x28);
          auStack_b0[6] = (undefined1)((ulong)puVar8 >> 0x30);
          auStack_b0[7] = (undefined1)((ulong)puVar8 >> 0x38);
          auStack_b0[8] = (undefined1)param_3;
          auStack_b0[9] = (undefined1)(param_3 >> 8);
          auStack_b0[10] = (undefined1)(param_3 >> 0x10);
          auStack_b0[0xb] = (undefined1)(param_3 >> 0x18);
          auStack_b0[0xc] = (undefined1)(param_3 >> 0x20);
          auStack_b0[0xd] = (undefined1)(param_3 >> 0x28);
          puVar11 = auStack_b0 + (param_3 >> 0x30 & 0xff);
          FUN_101e86b08();
          puVar10 = auStack_b0;
        }
        else {
          lVar19 = (long)(int)puVar8;
          puVar11 = (undefined1 *)(((long)puVar8 >> 0x20) - lVar19);
          if ((long)puVar8 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b07c);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          if (puVar7 == (undefined1 *)0x0) {
            func_0x000107c5ec38();
            puVar10 = (undefined1 *)0x0;
            puVar9 = puVar7;
LAB_101e9af60:
            puVar11 = (undefined1 *)0x0;
          }
          else {
            puVar9 = puVar7;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar19,(long)puVar9)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b088);
              (*pcVar6)();
            }
            puVar7 = puVar7 + (lVar19 - (long)puVar9);
            func_0x000107c5ec38();
            puVar2 = puVar9;
            if ((long)puVar11 <= (long)puVar9) {
              puVar2 = puVar11;
            }
            puVar10 = (undefined1 *)0x0;
            if (puVar7 != (undefined1 *)0x0) {
              puVar10 = puVar7;
            }
            puVar11 = (undefined1 *)0x0;
            if (puVar7 != (undefined1 *)0x0) {
              puVar11 = puVar2 + (long)puVar7;
            }
          }
LAB_101e9af64:
          FUN_101e86b08();
          puVar7 = puVar9;
        }
      }
      else {
        if (uVar16 == 2) {
          lVar19 = *(long *)(puVar8 + 0x10);
          lVar3 = *(long *)(puVar8 + 0x18);
          func_0x000107c5ec30();
          puVar9 = puVar7;
          puVar10 = puVar7;
          if (puVar7 != (undefined1 *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar19,(long)puVar9)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b084);
              (*pcVar6)();
            }
            puVar10 = puVar7 + (lVar19 - (long)puVar9);
          }
          puVar11 = (undefined1 *)(lVar3 - lVar19);
          if (SBORROW8(lVar3,lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b080);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          if (puVar10 == (undefined1 *)0x0) goto LAB_101e9af60;
          puVar7 = puVar9;
          if ((long)puVar11 <= (long)puVar9) {
            puVar7 = puVar11;
          }
          puVar11 = puVar7 + (long)puVar10;
          goto LAB_101e9af64;
        }
        FUN_101e86b08();
        auStack_b0[0] = 0;
        auStack_b0[1] = 0;
        auStack_b0[2] = 0;
        auStack_b0[3] = 0;
        auStack_b0[4] = 0;
        auStack_b0[5] = 0;
        auStack_b0[6] = 0;
        auStack_b0[7] = 0;
        auStack_b0[8] = 0;
        auStack_b0[9] = 0;
        auStack_b0[10] = 0;
        auStack_b0[0xb] = 0;
        auStack_b0[0xc] = 0;
        auStack_b0[0xd] = 0;
      }
      func_0x00010006ae80(puVar10,puVar11,&uStack_80,0,100,0,&UNK_1104929f8,puVar7);
      func_0x00010006c090(puVar8,param_3);
      func_0x000100ee9068(&uStack_80);
      uVar15 = uStack_88;
      uVar14 = uStack_90;
      puVar11 = puStack_98;
      lVar19 = *(long *)(puStack_98 + 0x10);
      func_0x00010006c090(puVar8,param_3);
      func_0x000107c61170(param_1);
      if (lVar19 != 0) goto LAB_101e9aff0;
      func_0x000107c6142c();
      func_0x00010006c090(uVar14,uVar15);
    }
  }
  puVar11 = (undefined1 *)0x0;
  uVar14 = 0;
  uVar15 = 0;
LAB_101e9aff0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar11;
  }
  func_0x000107c60e78(puVar11,uVar14,uVar15);
  puVar18 = *(undefined **)(puVar11 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar18 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e35af0,&UNK_10da1ef28);
    puVar12 = puVar18;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar20 = (undefined8 *)(puVar11 + 0x30);
    do {
      uVar14 = puVar20[-2];
      uVar4 = puVar20[-1];
      uVar15 = *puVar20;
      func_0x000107c61434(uVar4);
      func_0x000107c6157c(uVar15);
      uVar13 = uVar14;
      uVar17 = uVar4;
      func_0x000100029284();
      if ((uVar17 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b184);
        (*pcVar6)();
      }
      uVar17 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar17 + 0x40) =
           *(ulong *)(puVar12 + uVar17 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar14;
      puVar1[1] = uVar4;
      *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar13 * 8) = uVar15;
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b188);
        (*pcVar6)();
      }
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      puVar18 = puVar18 + -1;
      puVar20 = puVar20 + 3;
    } while (puVar18 != (undefined *)0x0);
    func_0x000107c61574(puVar12);
  }
  return puVar12;
}



/* Entry: 101e9b188; end: 101e9b517;  */

/* WARNING: Possible PIC construction at 0x000101e9b1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e9b1f4) */
/* WARNING: Removing unreachable block (ram,0x000101e9b4c4) */
/* WARNING: Removing unreachable block (ram,0x000101e9b204) */
/* WARNING: Removing unreachable block (ram,0x000101e9b274) */
/* WARNING: Removing unreachable block (ram,0x000101e9b4fc) */
/* WARNING: Removing unreachable block (ram,0x000101e9b280) */
/* WARNING: Removing unreachable block (ram,0x000101e9b500) */
/* WARNING: Removing unreachable block (ram,0x000101e9b3c8) */
/* WARNING: Removing unreachable block (ram,0x000101e9b414) */
/* WARNING: Removing unreachable block (ram,0x000101e9b46c) */
/* WARNING: Removing unreachable block (ram,0x000101e9b47c) */
/* WARNING: Removing unreachable block (ram,0x000101e9b418) */
/* WARNING: Removing unreachable block (ram,0x000101e9b3d8) */
/* WARNING: Removing unreachable block (ram,0x000101e9b508) */
/* WARNING: Removing unreachable block (ram,0x000101e9b404) */
/* WARNING: Removing unreachable block (ram,0x000101e9b238) */
/* WARNING: Removing unreachable block (ram,0x000101e9b410) */
/* WARNING: Removing unreachable block (ram,0x000101e9b420) */
/* WARNING: Removing unreachable block (ram,0x000101e9b504) */
/* WARNING: Removing unreachable block (ram,0x000101e9b464) */
/* WARNING: Removing unreachable block (ram,0x000101e9b25c) */
/* WARNING: Removing unreachable block (ram,0x000101e9b480) */
/* WARNING: Removing unreachable block (ram,0x000101e9b4d4) */

undefined * FUN_101e9b188(long param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_d0 [56];
  long lStack_98;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar9 = *(long *)(param_1 + 0x20);
  uVar11 = 0x800000010f016a40;
  uVar10 = 0xd00000000000001d;
  lStack_98 = param_1;
  FUN_101e9ad14();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    unaff_x30 = 0x101e9b1f4;
    register0x00000008 = (BADSPACEBASE *)auStack_d0;
    unaff_x19 = 0xd00000000000001d;
    unaff_x20 = lVar9;
    unaff_x21 = uVar11;
    unaff_x22 = uVar10;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e35af0,&UNK_10da1ef28);
    puVar7 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar14 = (undefined8 *)(puVar5 + 0x30);
    do {
      uVar3 = puVar14[-2];
      uVar4 = puVar14[-1];
      uVar10 = *puVar14;
      func_0x000107c61434(uVar4);
      func_0x000107c6157c(uVar10);
      uVar8 = uVar3;
      uVar12 = uVar4;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b184);
        (*pcVar6)();
      }
      uVar12 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar12 + 0x40) = *(ulong *)(puVar7 + uVar12 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e9b188);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar13 = puVar13 + -1;
      puVar14 = puVar14 + 3;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 101e9b518; end: 101e9b54b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101e9b518(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101e9b54c; end: 101e9b55b;  */

void FUN_101e9b54c(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    FUN_101e9a27c();
    func_0x000107c61574(lVar4);
    puVar7 = (ulong *)(lVar5 + 0x40);
    uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar10 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar10 = uVar10 & *puVar7;
    func_0x000107c61434(lVar5);
    lVar8 = 0;
    lVar4 = lVar8;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar6 = *(undefined8 *)
                 (*(long *)(lVar5 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                 lVar4 * 0x200);
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_a0 = 3;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 2;
        func_0x000107c6157c(uVar6);
        FUN_101e977d4(&uStack_c0);
        func_0x000107c61574(uVar6);
        func_0x000101e98bd0(&uStack_c0);
        lVar8 = lVar4;
      }
      bVar3 = SCARRY8(lVar4,1);
      lVar4 = lVar4 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e9a450);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar4) break;
      uVar10 = puVar7[lVar4];
    }
    func_0x000107c6142c(lVar5);
    func_0x000101e9b554(lVar5,puVar7,~uVar9,lVar8,0);
  }
  return;
}



/* Entry: 101e9b55c; end: 101e9b6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101e9b55c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 **appuStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  func_0x0001006bf3cc(param_4 + _DAT_112ff7af0,appuStack_88);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000100996d0c();
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    uVar6 = *(undefined8 *)(param_2 + _DAT_113091b70);
    func_0x000107c615f0(uVar6);
    pppuVar5 = appuStack_88;
    func_0x000100996d2c(pppuVar5,lVar2,uVar6,uVar3,lVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar6);
    ppuStack_68 = &PTR_DAT_1104927c8;
    appuStack_88[0] = pppuVar5;
    uStack_70 = uVar3;
    func_0x0001002b5950(0);
    func_0x000107c610f8();
    pppuVar5 = appuStack_88;
    func_0x000100996ee8(pppuVar5);
    func_0x000107c42c20(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(pppuVar5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e9b6c0);
  (*pcVar1)();
}



/* Entry: 101e9b6c0; end: 101e9b6ef;  */

void FUN_101e9b6c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e9b6f0; end: 101e9b737;  */

void FUN_101e9b6f0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10da1f220,0x16,2);
  uRam0000000113804598 = uStack_38;
  uRam0000000113804590 = uStack_40;
  uRam00000001138045a8 = uStack_28;
  uRam00000001138045a0 = uStack_30;
  uRam00000001138045b8 = uStack_18;
  uRam00000001138045b0 = uStack_20;
  return;
}



/* Entry: 101e9b738; end: 101e9b7eb;  */

/* WARNING: Removing unreachable block (ram,0x000101e9b7e8) */

void FUN_101e9b738(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_101e9b888();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101e9b7ec; end: 101e9b887;  */

void FUN_101e9b7ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_101e9b888();
    (*pcVar2)(param_2,1,&UNK_110492a78,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101e9b888; end: 101e9b8c7;  */

void FUN_101e9b888(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da1f048;
  func_0x000107c61520(&DAT_10da1f048,&UNK_110492a78);
  puRam0000000112e35b98 = puVar1;
  return;
}



/* Entry: 101e9b8c8; end: 101e9b907;  */

void FUN_101e9b8c8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 101e9b908; end: 101e9b937;  */

undefined1  [16] FUN_101e9b908(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101e9b938; end: 101e9b96b;  */

void FUN_101e9b938(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101e9b96c; end: 101e9b97f;  */

undefined1  [16] FUN_101e9b96c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101e9b97c;
  return auVar1;
}



/* Entry: 101e9b980; end: 101e9b9b7;  */

void FUN_101e9b980(void)

{
  FUN_101e9b738();
  return;
}



/* Entry: 101e9b9b8; end: 101e9b9bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101e9b9b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101e9b9bc; end: 101e9b9f3;  */

uint FUN_101e9b9bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000101e9ce00();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101e9b9f4; end: 101e9bafb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101e9b9f4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar22 = param_1[1];
  uVar25 = param_1[2];
  uVar18 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  FUN_101e9c244(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar25 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar25 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar25 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar24;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar24;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar25 = *(ulong *)(pbVar12 + 0x10);
    lVar24 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101e9bafc; end: 101e9bb37;  */

void FUN_101e9bafc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e35be8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e35be8,&UNK_10da1f1d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101e9bb38; end: 101e9bc9f;  */

void FUN_101e9bb38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e9bca0; end: 101e9bce7;  */

void FUN_101e9bca0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10da1f1e0,0x39,2);
  uRam00000001138045c8 = uStack_38;
  uRam00000001138045c0 = uStack_40;
  uRam00000001138045d8 = uStack_28;
  uRam00000001138045d0 = uStack_30;
  uRam00000001138045e8 = uStack_18;
  uRam00000001138045e0 = uStack_20;
  return;
}



/* Entry: 101e9bce8; end: 101e9bdc7;  */

void FUN_101e9bce8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101e9bd94;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101e9bd94;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 5) goto LAB_101e9bda4;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_101e9bd94:
        (*pcVar3)();
      }
LAB_101e9bda4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101e9bdc8; end: 101e9bebb;  */

void FUN_101e9bdc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  
  if (((((*unaff_x20 == 0) ||
        ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[2] == 0 ||
       ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] == 0 ||
      ((**(code **)(param_3 + 0x18))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = *(ulong *)(unaff_x20 + 6);
    uVar1 = *(ulong *)(unaff_x20 + 4) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 4),uVar2,5,param_2,param_3),
       unaff_x21 == 0)) {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 10),
                          param_2,param_3);
    }
  }
  return;
}



/* Entry: 101e9bebc; end: 101e9befb;  */

void FUN_101e9bebc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 101e9befc; end: 101e9bf2b;  */

undefined1  [16] FUN_101e9befc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101e9bf2c; end: 101e9bf5f;  */

void FUN_101e9bf2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101e9bf60; end: 101e9bf73;  */

undefined1  [16] FUN_101e9bf60(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101e9bf70;
  return auVar1;
}



/* Entry: 101e9bf74; end: 101e9bf9b;  */

void FUN_101e9bf74(void)

{
  FUN_101e9bce8();
  return;
}



/* Entry: 101e9bf9c; end: 101e9bf9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101e9bf9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101e9bfa0; end: 101e9bfd7;  */

uint FUN_101e9bfa0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101e9cdc0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101e9bfd8; end: 101e9c01f;  */

uint FUN_101e9bfd8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101e9c760(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101e9c020; end: 101e9c0bf;  */

/* WARNING: Possible PIC construction at 0x000101e9c06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e9c07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e9c070) */
/* WARNING: Removing unreachable block (ram,0x000101e9c080) */

void FUN_101e9c020(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e35ba8 != -1) {
    func_0x000107c61568(0x112e35ba8,FUN_101e9bca0);
  }
  uVar5 = uRam00000001138045e8;
  uVar4 = uRam00000001138045e0;
  uVar3 = uRam00000001138045d8;
  uVar2 = uRam00000001138045d0;
  uVar1 = uRam00000001138045c8;
  *param_1 = uRam00000001138045c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101e9c0c0; end: 101e9c0fb;  */

void FUN_101e9c0c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e35bd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e35bd8,&UNK_10da1f1c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101e9c0fc; end: 101e9c1ff;  */

void FUN_101e9c0fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e9c200; end: 101e9c243;  */

uint FUN_101e9c200(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101e9c760(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101e9c244; end: 101e9c71f;  */

void FUN_101e9c244(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 auStack_128 [24];
  byte abStack_110 [48];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == *(long *)(param_2 + 0x10)) {
    if ((lVar20 == 0) || (param_1 == param_2)) {
LAB_101e9c6b8:
      uVar9 = 1;
      goto LAB_101e9c6c4;
    }
    uStack_d8 = *(undefined8 *)(param_1 + 0x28);
    uStack_e0 = *(undefined8 *)(param_1 + 0x20);
    lStack_c8 = *(long *)(param_1 + 0x38);
    uStack_d0 = *(ulong *)(param_1 + 0x30);
    uStack_b8 = *(ulong *)(param_1 + 0x48);
    lStack_c0 = *(long *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_2 + 0x28);
    uStack_b0 = *(undefined8 *)(param_2 + 0x20);
    lStack_98 = *(long *)(param_2 + 0x38);
    uStack_a0 = *(ulong *)(param_2 + 0x30);
    uStack_88 = *(ulong *)(param_2 + 0x48);
    lStack_90 = *(long *)(param_2 + 0x40);
    if ((int)uStack_e0 == (int)uStack_b0) {
      puVar21 = (undefined8 *)(param_2 + 0x50);
      puVar22 = (undefined8 *)(param_1 + 0x50);
      while( true ) {
        if (uStack_e0._4_4_ != uStack_b0._4_4_) break;
        if ((int)uStack_d8 != (int)uStack_a8) break;
        if ((uStack_d8._4_4_ != uStack_a8._4_4_) ||
           ((uStack_d0 != uStack_a0 || lStack_c8 != lStack_98 &&
            (uVar5 = uStack_d0, func_0x000107c605b8(), (uVar5 & 1) == 0)))) break;
        uVar5 = uStack_88;
        lVar3 = lStack_90;
        uVar1 = (uint)(uStack_b8 >> 0x20);
        uVar14 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_88 >> 0x20);
        uVar17 = uVar2 >> 0x1e;
        iVar13 = (int)lStack_c0;
        if (uStack_b8 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((lStack_c0 != 0) || (uStack_b8 != 0xc000000000000000)) || (uStack_88 >> 0x3e < 3))
             || ((uVar16 = 0, lStack_90 != 0 || (uStack_88 != 0xc000000000000000))))
          goto joined_r0x000101e9c514;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = uStack_b8 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lStack_c0 >> 0x20);
              if (SBORROW4(iVar15,iVar13)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c70c);
                (*pcVar4)();
              }
              uVar16 = (ulong)(iVar15 - iVar13);
            }
joined_r0x000101e9c514:
            if (1 < uVar2 >> 0x1e) goto LAB_101e9c37c;
LAB_101e9c3b0:
            if (uVar17 == 0) {
              uVar18 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lStack_90 >> 0x20);
              if (SBORROW4(iVar15,(int)lStack_90)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c704);
                (*pcVar4)();
              }
              uVar18 = (ulong)(iVar15 - (int)lStack_90);
            }
          }
          else {
            if (uVar14 == 2) {
              uVar16 = *(long *)(lStack_c0 + 0x18) - *(long *)(lStack_c0 + 0x10);
              if (SBORROW8(*(long *)(lStack_c0 + 0x18),*(long *)(lStack_c0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c708);
                (*pcVar4)();
              }
              goto joined_r0x000101e9c514;
            }
            uVar16 = 0;
            if (uVar17 < 2) goto LAB_101e9c3b0;
LAB_101e9c37c:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto joined_r0x000101e9c6b4;
              break;
            }
            uVar18 = *(long *)(lStack_90 + 0x18) - *(long *)(lStack_90 + 0x10);
            if (SBORROW8(*(long *)(lStack_90 + 0x18),*(long *)(lStack_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c700);
              (*pcVar4)();
            }
          }
          if (uVar16 != uVar18) break;
          if (0 < (long)uVar16) {
            if (uVar14 < 2) {
              if (uVar14 == 0) {
                auStack_128[0] = (undefined1)lStack_c0;
                auStack_128[1] = (undefined1)((ulong)lStack_c0 >> 8);
                auStack_128[2] = (undefined1)((ulong)lStack_c0 >> 0x10);
                auStack_128[3] = (undefined1)((ulong)lStack_c0 >> 0x18);
                auStack_128[4] = (undefined1)((ulong)lStack_c0 >> 0x20);
                auStack_128[5] = (undefined1)((ulong)lStack_c0 >> 0x28);
                auStack_128[6] = (undefined1)((ulong)lStack_c0 >> 0x30);
                auStack_128[7] = (undefined1)((ulong)lStack_c0 >> 0x38);
                auStack_128[8] = (undefined1)uStack_b8;
                auStack_128[9] = (undefined1)(uStack_b8 >> 8);
                auStack_128[10] = (undefined1)(uStack_b8 >> 0x10);
                auStack_128[0xb] = (undefined1)(uStack_b8 >> 0x18);
                auStack_128[0xc] = (undefined1)(uStack_b8 >> 0x20);
                auStack_128[0xd] = (undefined1)(uStack_b8 >> 0x28);
                puVar11 = auStack_128 + (uStack_b8 >> 0x30 & 0xff);
                FUN_101e9ce40(&uStack_e0,abStack_110);
                FUN_101e9ce40(&uStack_b0,abStack_110);
                goto LAB_101e9c5cc;
              }
              lVar19 = (long)iVar13;
              puVar6 = (undefined8 *)((lStack_c0 >> 0x20) - lVar19);
              if (lStack_c0 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c710);
                (*pcVar4)();
              }
              FUN_101e9ce40(&uStack_e0,abStack_110);
              puVar7 = &uStack_b0;
              FUN_101e9ce40(puVar7,abStack_110);
              func_0x000107c5ec30();
              if (puVar7 == (undefined8 *)0x0) {
                func_0x000107c5ec38();
                lVar19 = 0;
LAB_101e9c63c:
                lVar12 = 0;
              }
              else {
                puVar8 = puVar7;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)puVar8)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c71c);
                  (*pcVar4)();
                }
                lVar19 = (lVar19 - (long)puVar8) + (long)puVar7;
                func_0x000107c5ec38();
                if (lVar19 == 0) goto LAB_101e9c63c;
                if ((long)puVar6 <= (long)puVar8) {
                  puVar8 = puVar6;
                }
                lVar12 = (long)puVar8 + lVar19;
              }
              func_0x000100e25bdc(abStack_110,lVar19,lVar12,lVar3,uVar5);
              func_0x000101e9ce74(&uStack_b0);
              func_0x000101e9ce74(&uStack_e0);
            }
            else {
              if (uVar14 != 2) {
                auStack_128[8] = 0;
                auStack_128[9] = 0;
                auStack_128[10] = 0;
                auStack_128[0xb] = 0;
                auStack_128[0xc] = 0;
                auStack_128[0xd] = 0;
                auStack_128[0] = 0;
                auStack_128[1] = 0;
                auStack_128[2] = 0;
                auStack_128[3] = 0;
                auStack_128[4] = 0;
                auStack_128[5] = 0;
                auStack_128[6] = 0;
                auStack_128[7] = 0;
                FUN_101e9ce40(&uStack_e0,abStack_110);
                FUN_101e9ce40(&uStack_b0,abStack_110);
                puVar11 = auStack_128;
LAB_101e9c5cc:
                func_0x000100e25bdc(abStack_110,auStack_128,puVar11,lVar3,uVar5);
                func_0x000101e9ce74(&uStack_b0);
                func_0x000101e9ce74(&uStack_e0);
                if ((abStack_110[0] & 1) != 0) goto joined_r0x000101e9c6b4;
                break;
              }
              lVar19 = *(long *)(lStack_c0 + 0x10);
              lVar12 = *(long *)(lStack_c0 + 0x18);
              FUN_101e9ce40(&uStack_e0,abStack_110);
              puVar6 = &uStack_b0;
              FUN_101e9ce40(puVar6,abStack_110);
              func_0x000107c5ec30();
              puVar7 = puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)puVar7)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c718);
                  (*pcVar4)();
                }
                puVar6 = (undefined8 *)((lVar19 - (long)puVar7) + (long)puVar6);
              }
              puVar8 = (undefined8 *)(lVar12 - lVar19);
              if (SBORROW8(lVar12,lVar19)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e9c714);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              if (puVar6 == (undefined8 *)0x0) {
                lVar19 = 0;
              }
              else {
                if ((long)puVar8 <= (long)puVar7) {
                  puVar7 = puVar8;
                }
                lVar19 = (long)puVar7 + (long)puVar6;
              }
              func_0x000100e25bdc(abStack_110,puVar6,lVar19,lVar3,uVar5);
              func_0x000101e9ce74(&uStack_b0);
              func_0x000101e9ce74(&uStack_e0);
            }
            if ((abStack_110[0] & 1) == 0) break;
          }
        }
joined_r0x000101e9c6b4:
        if (lVar20 == 1) goto LAB_101e9c6b8;
        lVar20 = lVar20 + -1;
        uStack_d8 = puVar22[1];
        uStack_e0 = *puVar22;
        lStack_c8 = puVar22[3];
        uStack_d0 = puVar22[2];
        uStack_b8 = puVar22[5];
        lStack_c0 = puVar22[4];
        uStack_a8 = puVar21[1];
        uStack_b0 = *puVar21;
        lStack_98 = puVar21[3];
        uStack_a0 = puVar21[2];
        uStack_88 = puVar21[5];
        lStack_90 = puVar21[4];
        puVar21 = puVar21 + 6;
        puVar22 = puVar22 + 6;
        if ((int)uStack_e0 != (int)uStack_b0) break;
      }
    }
  }
  uVar9 = 0;
LAB_101e9c6c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78(uVar9);
  if (puRam0000000112e35ba0 != (undefined *)0x0) {
    return;
  }
  puVar10 = &UNK_10da1efe0;
  func_0x000107c61520(&UNK_10da1efe0,&UNK_1104929f8);
  puRam0000000112e35ba0 = puVar10;
  return;
}



/* Entry: 101e9c720; end: 101e9c75f;  */

void FUN_101e9c720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1efe0;
  func_0x000107c61520(&UNK_10da1efe0,&UNK_1104929f8);
  puRam0000000112e35ba0 = puVar1;
  return;
}



/* Entry: 101e9c760; end: 101e9c80f;  */

/* WARNING: Possible PIC construction at 0x000101e9c7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101e9c7dc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101e9c760(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (param_1[3] != param_2[3])) {
    return (byte *)0x0;
  }
  pbVar12 = *(byte **)(param_1 + 4);
  pbVar15 = *(byte **)(param_1 + 6);
  pbVar16 = *(byte **)(param_2 + 4);
  pbVar13 = *(byte **)(param_2 + 6);
  if ((pbVar12 != pbVar16) || (pbVar15 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar13,0);
    return pbVar12;
  }
  pbVar10 = *(byte **)(param_1 + 8);
  pbVar25 = *(byte **)(param_1 + 10);
  lVar24 = *(long *)(param_2 + 8);
  uVar17 = *(ulong *)(param_2 + 10);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar17 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar17 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar13)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar13 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar13 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar13;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar13 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar13 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar13 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar13 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101e9c810; end: 101e9c84f;  */

void FUN_101e9c810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1f0b8;
  func_0x000107c61520(&UNK_10da1f0b8,&UNK_110492a78);
  puRam0000000112e35bb0 = puVar1;
  return;
}



/* Entry: 101e9c850; end: 101e9c873;  */

void FUN_101e9c850(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e9c874();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101e9c874; end: 101e9c8b3;  */

void FUN_101e9c874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1efb8;
  func_0x000107c61520(&UNK_10da1efb8,&UNK_1104929f8);
  puRam0000000112e35bb8 = puVar1;
  return;
}



/* Entry: 101e9c8b4; end: 101e9c8cb;  */

void FUN_101e9c8b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e9c720();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101e86b08();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101e9c8cc; end: 101e9c90b;  */

void FUN_101e9c8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1f020;
  func_0x000107c61520(&UNK_10da1f020,&UNK_1104929f8);
  puRam0000000112e35bc0 = puVar1;
  return;
}



/* Entry: 101e9c90c; end: 101e9c92f;  */

void FUN_101e9c90c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e9c930();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101e9c930; end: 101e9c96f;  */

void FUN_101e9c930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1f090;
  func_0x000107c61520(&UNK_10da1f090,&UNK_110492a78);
  puRam0000000112e35bc8 = puVar1;
  return;
}



/* Entry: 101e9c970; end: 101e9c983;  */

void FUN_101e9c970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e9c810();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101e9b888();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101e9c984; end: 101e9c9b3;  */

void FUN_101e9c984(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101e9c9b4; end: 101e9c9b7;  */

void FUN_101e9c9b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1f0f8;
  func_0x000107c61520(&UNK_10da1f0f8,&UNK_110492a78);
  puRam0000000112e35bd0 = puVar1;
  return;
}



/* Entry: 101e9c9b8; end: 101e9c9f7;  */

void FUN_101e9c9b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1f0f8;
  func_0x000107c61520(&UNK_10da1f0f8,&UNK_110492a78);
  puRam0000000112e35bd0 = puVar1;
  return;
}



/* Entry: 101e9c9f8; end: 101e9ca1f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101e9c9f8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101e9ca20; end: 101e9cac7;  */

undefined8 * FUN_101e9ca20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101e9cac8; end: 101e9cb0b;  */

undefined8 * FUN_101e9cac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101e9cb0c; end: 101e9cba3;  */

int FUN_101e9cb0c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e9cba4; end: 101e9cbf7;  */

long FUN_101e9cba4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e9cbf8; end: 101e9cccf;  */

undefined8 * FUN_101e9cbf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 101e9ccd0; end: 101e9cd1b;  */

undefined8 * FUN_101e9ccd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101e9cd1c; end: 101e9cdbf;  */

int FUN_101e9cd1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e9cdc0; end: 101e9ce3f;  */

void FUN_101e9cdc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da1f064;
  func_0x000107c61520(&DAT_10da1f064,&UNK_110492a78);
  puRam0000000112e35be0 = puVar1;
  return;
}



/* Entry: 101e9ce40; end: 101e9cea3;  */

undefined8 FUN_101e9ce40(undefined8 param_1,undefined8 param_2)

{
  FUN_101e9cbf8(param_2,param_1,&UNK_110492a78);
  return param_2;
}



/* Entry: 101e9cea4; end: 101e9ceab;  */

undefined8 * FUN_101e9cea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101e9ceac; end: 101e9d38f;  */

void FUN_101e9ceac(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x00010029c66c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a96b8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f017620);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar11;
  *param_1 = param_2;
  return;
}


