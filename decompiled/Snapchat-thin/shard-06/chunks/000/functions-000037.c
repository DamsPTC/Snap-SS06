/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104415360; end: 10441542f;  */

int FUN_104415360(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104415430; end: 1044154df;  */

void FUN_104415430(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (param_2 == 3) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 1) {
      __ss6HasherV8_combineyySuF(3);
      if (param_2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(auStack_78,param_1,param_2);
      }
      goto LAB_10441548c;
    }
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
LAB_10441548c:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044154e0; end: 1044154e7;  */

void FUN_1044154e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (lVar1 == 3) {
    uVar2 = 2;
  }
  else if (lVar1 == 2) {
    uVar2 = 1;
  }
  else {
    if (lVar1 != 1) {
      __ss6HasherV8_combineyySuF(3);
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
      }
      goto LAB_10441548c;
    }
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
LAB_10441548c:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044154e8; end: 10441562b;  */

void FUN_1044154e8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  
  lVar2 = unaff_x20[1];
  if (lVar2 == 3) {
    uVar1 = 2;
  }
  else if (lVar2 == 2) {
    uVar1 = 1;
  }
  else {
    if (lVar2 != 1) {
      uVar1 = *unaff_x20;
      __ss6HasherV8_combineyySuF(3);
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        return;
      }
      __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar1,lVar2);
      return;
    }
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 10441562c; end: 10441563f;  */

undefined8 FUN_10441562c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if (uVar1 == 3) {
    if (uVar2 == 3) {
      return 1;
    }
  }
  else if (uVar1 == 2) {
    if (uVar2 == 2) {
      return 1;
    }
  }
  else if (uVar1 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (2 < uVar2 - 1) {
    if (uVar1 == 0) {
      if (uVar2 == 0) {
        return 1;
      }
    }
    else if (uVar2 != 0) {
      if ((uVar3 == *param_2) && (uVar1 == uVar2)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104415640; end: 1044156e7;  */

undefined8 FUN_104415640(ulong param_1,long param_2,ulong param_3,long param_4)

{
  if (param_2 == 3) {
    if (param_4 == 3) {
      return 1;
    }
  }
  else if (param_2 == 2) {
    if (param_4 == 2) {
      return 1;
    }
  }
  else if (param_2 == 1) {
    if (param_4 == 1) {
      return 1;
    }
  }
  else if (2 < param_4 - 1U) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      if ((param_1 == param_3) && (param_2 == param_4)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1044156e8; end: 10441570b;  */

void FUN_1044156e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa730;
  func_0x000107c61520(&UNK_10dcfa730,&UNK_11076a6f0);
  puRam0000000112f4c650 = puVar1;
  return;
}



/* Entry: 10441570c; end: 10441589f;  */

undefined8 * FUN_10441570c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1044158a0; end: 1044159db;  */

int FUN_1044158a0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar3 = *(ulong *)(param_1 + 2);
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



/* Entry: 1044159dc; end: 104415a87;  */

void FUN_1044159dc(void)

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



/* Entry: 104415a88; end: 104415aa3;  */

void FUN_104415a88(undefined8 *param_1)

{
  *param_1 = 0x6172656d6163;
  param_1[1] = 0xe600000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 104415aa4; end: 104415acf;  */

undefined1  [16] FUN_104415aa4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104415ad0; end: 104415b2f;  */

void FUN_104415ad0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104415b30; end: 104415b63;  */

void FUN_104415b30(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 104415b64; end: 104415bbf;  */

void FUN_104415b64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104415bc0; end: 104416077;  */

undefined8 FUN_104415bc0(void)

{
  return 1;
}



/* Entry: 104416078; end: 104416103;  */

void FUN_104416078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104416104; end: 10441610f;  */

undefined8 FUN_104416104(void)

{
  return 1;
}



/* Entry: 104416110; end: 10441614f;  */

void FUN_104416110(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa770;
  _swift_getWitnessTable(&UNK_10dcfa770,&UNK_11076abd8);
  puRam0000000113077b68 = puVar1;
  return;
}



/* Entry: 104416150; end: 104416173;  */

void FUN_104416150(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416174();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416174; end: 1044161b3;  */

void FUN_104416174(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa7f4;
  _swift_getWitnessTable(&UNK_10dcfa7f4,&UNK_11076ac50);
  puRam0000000113077b70 = puVar1;
  return;
}



/* Entry: 1044161b4; end: 1044161b7;  */

void FUN_1044161b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa834;
  _swift_getWitnessTable(&UNK_10dcfa834,&UNK_11076ac50);
  puRam0000000113077b78 = puVar1;
  return;
}



/* Entry: 1044161b8; end: 1044161f7;  */

void FUN_1044161b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa834;
  _swift_getWitnessTable(&UNK_10dcfa834,&UNK_11076ac50);
  puRam0000000113077b78 = puVar1;
  return;
}



/* Entry: 1044161f8; end: 10441621b;  */

void FUN_1044161f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10441621c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10441621c; end: 10441625b;  */

void FUN_10441621c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa878;
  _swift_getWitnessTable(&UNK_10dcfa878,&UNK_11076acd0);
  puRam0000000113077b80 = puVar1;
  return;
}



/* Entry: 10441625c; end: 10441625f;  */

void FUN_10441625c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa8b8;
  _swift_getWitnessTable(&UNK_10dcfa8b8,&UNK_11076acd0);
  puRam0000000113077b88 = puVar1;
  return;
}



/* Entry: 104416260; end: 10441629f;  */

void FUN_104416260(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa8b8;
  _swift_getWitnessTable(&UNK_10dcfa8b8,&UNK_11076acd0);
  puRam0000000113077b88 = puVar1;
  return;
}



/* Entry: 1044162a0; end: 1044162c3;  */

void FUN_1044162a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044162c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1044162c4; end: 104416303;  */

void FUN_1044162c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa8fc;
  _swift_getWitnessTable(&UNK_10dcfa8fc,&UNK_11076ad50);
  puRam0000000113077b90 = puVar1;
  return;
}



/* Entry: 104416304; end: 104416307;  */

void FUN_104416304(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa93c;
  _swift_getWitnessTable(&UNK_10dcfa93c,&UNK_11076ad50);
  puRam0000000113077b98 = puVar1;
  return;
}



/* Entry: 104416308; end: 104416347;  */

void FUN_104416308(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa93c;
  _swift_getWitnessTable(&UNK_10dcfa93c,&UNK_11076ad50);
  puRam0000000113077b98 = puVar1;
  return;
}



/* Entry: 104416348; end: 10441636b;  */

void FUN_104416348(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10441636c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10441636c; end: 1044163ab;  */

void FUN_10441636c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa980;
  _swift_getWitnessTable(&UNK_10dcfa980,&UNK_11076add0);
  puRam0000000113077ba0 = puVar1;
  return;
}



/* Entry: 1044163ac; end: 1044163af;  */

void FUN_1044163ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa9c0;
  _swift_getWitnessTable(&UNK_10dcfa9c0,&UNK_11076add0);
  puRam0000000113077ba8 = puVar1;
  return;
}



/* Entry: 1044163b0; end: 1044163ef;  */

void FUN_1044163b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa9c0;
  _swift_getWitnessTable(&UNK_10dcfa9c0,&UNK_11076add0);
  puRam0000000113077ba8 = puVar1;
  return;
}



/* Entry: 1044163f0; end: 104416413;  */

void FUN_1044163f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416414();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416414; end: 104416453;  */

void FUN_104416414(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaa04;
  _swift_getWitnessTable(&UNK_10dcfaa04,&UNK_11076ae50);
  puRam0000000113077bb0 = puVar1;
  return;
}



/* Entry: 104416454; end: 104416457;  */

void FUN_104416454(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaa44;
  _swift_getWitnessTable(&UNK_10dcfaa44,&UNK_11076ae50);
  puRam0000000113077bb8 = puVar1;
  return;
}



/* Entry: 104416458; end: 104416497;  */

void FUN_104416458(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaa44;
  _swift_getWitnessTable(&UNK_10dcfaa44,&UNK_11076ae50);
  puRam0000000113077bb8 = puVar1;
  return;
}



/* Entry: 104416498; end: 1044164bb;  */

void FUN_104416498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044164bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1044164bc; end: 1044164fb;  */

void FUN_1044164bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaa88;
  _swift_getWitnessTable(&UNK_10dcfaa88,&UNK_11076aed0);
  puRam0000000113077bc0 = puVar1;
  return;
}



/* Entry: 1044164fc; end: 1044164ff;  */

void FUN_1044164fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaac8;
  _swift_getWitnessTable(&UNK_10dcfaac8,&UNK_11076aed0);
  puRam0000000113077bc8 = puVar1;
  return;
}



/* Entry: 104416500; end: 10441653f;  */

void FUN_104416500(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaac8;
  _swift_getWitnessTable(&UNK_10dcfaac8,&UNK_11076aed0);
  puRam0000000113077bc8 = puVar1;
  return;
}



/* Entry: 104416540; end: 104416563;  */

void FUN_104416540(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416564();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416564; end: 1044165a3;  */

void FUN_104416564(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfab0c;
  _swift_getWitnessTable(&UNK_10dcfab0c,&UNK_11076af50);
  puRam0000000113077bd0 = puVar1;
  return;
}



/* Entry: 1044165a4; end: 1044165a7;  */

void FUN_1044165a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfab4c;
  _swift_getWitnessTable(&UNK_10dcfab4c,&UNK_11076af50);
  puRam0000000113077bd8 = puVar1;
  return;
}



/* Entry: 1044165a8; end: 1044165e7;  */

void FUN_1044165a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfab4c;
  _swift_getWitnessTable(&UNK_10dcfab4c,&UNK_11076af50);
  puRam0000000113077bd8 = puVar1;
  return;
}



/* Entry: 1044165e8; end: 10441660b;  */

void FUN_1044165e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10441660c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10441660c; end: 10441664b;  */

void FUN_10441660c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfab90;
  _swift_getWitnessTable(&UNK_10dcfab90,&UNK_11076afd0);
  puRam0000000113077be0 = puVar1;
  return;
}



/* Entry: 10441664c; end: 10441664f;  */

void FUN_10441664c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfabd0;
  _swift_getWitnessTable(&UNK_10dcfabd0,&UNK_11076afd0);
  puRam0000000113077be8 = puVar1;
  return;
}



/* Entry: 104416650; end: 10441668f;  */

void FUN_104416650(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfabd0;
  _swift_getWitnessTable(&UNK_10dcfabd0,&UNK_11076afd0);
  puRam0000000113077be8 = puVar1;
  return;
}



/* Entry: 104416690; end: 1044166b3;  */

void FUN_104416690(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044166b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1044166b4; end: 1044166f3;  */

void FUN_1044166b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfac14;
  _swift_getWitnessTable(&UNK_10dcfac14,&UNK_11076b050);
  puRam0000000113077bf0 = puVar1;
  return;
}



/* Entry: 1044166f4; end: 1044166f7;  */

void FUN_1044166f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfac54;
  _swift_getWitnessTable(&UNK_10dcfac54,&UNK_11076b050);
  puRam0000000113077bf8 = puVar1;
  return;
}



/* Entry: 1044166f8; end: 104416737;  */

void FUN_1044166f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfac54;
  _swift_getWitnessTable(&UNK_10dcfac54,&UNK_11076b050);
  puRam0000000113077bf8 = puVar1;
  return;
}



/* Entry: 104416738; end: 10441675b;  */

void FUN_104416738(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10441675c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10441675c; end: 10441679b;  */

void FUN_10441675c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfac98;
  _swift_getWitnessTable(&UNK_10dcfac98,&UNK_11076b0d0);
  puRam0000000113077c00 = puVar1;
  return;
}



/* Entry: 10441679c; end: 10441679f;  */

void FUN_10441679c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfacd8;
  _swift_getWitnessTable(&UNK_10dcfacd8,&UNK_11076b0d0);
  puRam0000000113077c08 = puVar1;
  return;
}



/* Entry: 1044167a0; end: 1044167df;  */

void FUN_1044167a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfacd8;
  _swift_getWitnessTable(&UNK_10dcfacd8,&UNK_11076b0d0);
  puRam0000000113077c08 = puVar1;
  return;
}



/* Entry: 1044167e0; end: 104416803;  */

void FUN_1044167e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416804();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416804; end: 104416843;  */

void FUN_104416804(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfad1c;
  _swift_getWitnessTable(&UNK_10dcfad1c,&UNK_11076b150);
  puRam0000000113077c10 = puVar1;
  return;
}



/* Entry: 104416844; end: 104416847;  */

void FUN_104416844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfad5c;
  _swift_getWitnessTable(&UNK_10dcfad5c,&UNK_11076b150);
  puRam0000000113077c18 = puVar1;
  return;
}



/* Entry: 104416848; end: 104416887;  */

void FUN_104416848(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfad5c;
  _swift_getWitnessTable(&UNK_10dcfad5c,&UNK_11076b150);
  puRam0000000113077c18 = puVar1;
  return;
}



/* Entry: 104416888; end: 1044168ab;  */

void FUN_104416888(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044168ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1044168ac; end: 1044168eb;  */

void FUN_1044168ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfada0;
  _swift_getWitnessTable(&UNK_10dcfada0,&UNK_11076b1d0);
  puRam0000000113077c20 = puVar1;
  return;
}



/* Entry: 1044168ec; end: 1044168ef;  */

void FUN_1044168ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfade0;
  _swift_getWitnessTable(&UNK_10dcfade0,&UNK_11076b1d0);
  puRam0000000113077c28 = puVar1;
  return;
}



/* Entry: 1044168f0; end: 10441692f;  */

void FUN_1044168f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfade0;
  _swift_getWitnessTable(&UNK_10dcfade0,&UNK_11076b1d0);
  puRam0000000113077c28 = puVar1;
  return;
}



/* Entry: 104416930; end: 104416953;  */

void FUN_104416930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416954();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416954; end: 104416993;  */

void FUN_104416954(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfae24;
  _swift_getWitnessTable(&UNK_10dcfae24,&UNK_11076b250);
  puRam0000000113077c30 = puVar1;
  return;
}



/* Entry: 104416994; end: 104416997;  */

void FUN_104416994(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfae64;
  _swift_getWitnessTable(&UNK_10dcfae64,&UNK_11076b250);
  puRam0000000113077c38 = puVar1;
  return;
}



/* Entry: 104416998; end: 1044169d7;  */

void FUN_104416998(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfae64;
  _swift_getWitnessTable(&UNK_10dcfae64,&UNK_11076b250);
  puRam0000000113077c38 = puVar1;
  return;
}



/* Entry: 1044169d8; end: 1044169fb;  */

void FUN_1044169d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044169fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1044169fc; end: 104416a3b;  */

void FUN_1044169fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaea8;
  _swift_getWitnessTable(&UNK_10dcfaea8,&UNK_11076b2d0);
  puRam0000000113077c40 = puVar1;
  return;
}



/* Entry: 104416a3c; end: 104416a3f;  */

void FUN_104416a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaee8;
  _swift_getWitnessTable(&UNK_10dcfaee8,&UNK_11076b2d0);
  puRam0000000113077c48 = puVar1;
  return;
}



/* Entry: 104416a40; end: 104416a7f;  */

void FUN_104416a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaee8;
  _swift_getWitnessTable(&UNK_10dcfaee8,&UNK_11076b2d0);
  puRam0000000113077c48 = puVar1;
  return;
}



/* Entry: 104416a80; end: 104416aa3;  */

void FUN_104416a80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416aa4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416aa4; end: 104416ae3;  */

void FUN_104416aa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaf2c;
  _swift_getWitnessTable(&UNK_10dcfaf2c,&UNK_11076b350);
  puRam0000000113077c50 = puVar1;
  return;
}



/* Entry: 104416ae4; end: 104416ae7;  */

void FUN_104416ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaf6c;
  _swift_getWitnessTable(&UNK_10dcfaf6c,&UNK_11076b350);
  puRam0000000113077c58 = puVar1;
  return;
}



/* Entry: 104416ae8; end: 104416b27;  */

void FUN_104416ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaf6c;
  _swift_getWitnessTable(&UNK_10dcfaf6c,&UNK_11076b350);
  puRam0000000113077c58 = puVar1;
  return;
}



/* Entry: 104416b28; end: 104416b4b;  */

void FUN_104416b28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416b4c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416b4c; end: 104416b8b;  */

void FUN_104416b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfafb0;
  _swift_getWitnessTable(&UNK_10dcfafb0,&UNK_11076b3d0);
  puRam0000000113077c60 = puVar1;
  return;
}



/* Entry: 104416b8c; end: 104416b8f;  */

void FUN_104416b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaff0;
  _swift_getWitnessTable(&UNK_10dcfaff0,&UNK_11076b3d0);
  puRam0000000113077c68 = puVar1;
  return;
}



/* Entry: 104416b90; end: 104416bcf;  */

void FUN_104416b90(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfaff0;
  _swift_getWitnessTable(&UNK_10dcfaff0,&UNK_11076b3d0);
  puRam0000000113077c68 = puVar1;
  return;
}



/* Entry: 104416bd0; end: 104416bf3;  */

void FUN_104416bd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416bf4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416bf4; end: 104416c33;  */

void FUN_104416bf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb034;
  _swift_getWitnessTable(&UNK_10dcfb034,&UNK_11076b450);
  puRam0000000113077c70 = puVar1;
  return;
}



/* Entry: 104416c34; end: 104416c37;  */

void FUN_104416c34(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb074;
  _swift_getWitnessTable(&UNK_10dcfb074,&UNK_11076b450);
  puRam0000000113077c78 = puVar1;
  return;
}



/* Entry: 104416c38; end: 104416c77;  */

void FUN_104416c38(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb074;
  _swift_getWitnessTable(&UNK_10dcfb074,&UNK_11076b450);
  puRam0000000113077c78 = puVar1;
  return;
}



/* Entry: 104416c78; end: 104416c9b;  */

void FUN_104416c78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416c9c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416c9c; end: 104416cdb;  */

void FUN_104416c9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb0b8;
  _swift_getWitnessTable(&UNK_10dcfb0b8,&UNK_11076b4d0);
  puRam0000000113077c80 = puVar1;
  return;
}



/* Entry: 104416cdc; end: 104416cdf;  */

void FUN_104416cdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb0f8;
  _swift_getWitnessTable(&UNK_10dcfb0f8,&UNK_11076b4d0);
  puRam0000000113077c88 = puVar1;
  return;
}



/* Entry: 104416ce0; end: 104416d1f;  */

void FUN_104416ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb0f8;
  _swift_getWitnessTable(&UNK_10dcfb0f8,&UNK_11076b4d0);
  puRam0000000113077c88 = puVar1;
  return;
}



/* Entry: 104416d20; end: 104416d43;  */

void FUN_104416d20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416d44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416d44; end: 104416d83;  */

void FUN_104416d44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb13c;
  _swift_getWitnessTable(&UNK_10dcfb13c,&UNK_11076b550);
  puRam0000000113077c90 = puVar1;
  return;
}



/* Entry: 104416d84; end: 104416d87;  */

void FUN_104416d84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb17c;
  _swift_getWitnessTable(&UNK_10dcfb17c,&UNK_11076b550);
  puRam0000000113077c98 = puVar1;
  return;
}



/* Entry: 104416d88; end: 104416dc7;  */

void FUN_104416d88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb17c;
  _swift_getWitnessTable(&UNK_10dcfb17c,&UNK_11076b550);
  puRam0000000113077c98 = puVar1;
  return;
}



/* Entry: 104416dc8; end: 104416deb;  */

void FUN_104416dc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416dec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104416dec; end: 104416e2b;  */

void FUN_104416dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb1c0;
  _swift_getWitnessTable(&UNK_10dcfb1c0,&UNK_11076b5d0);
  puRam0000000113077ca0 = puVar1;
  return;
}



/* Entry: 104416e2c; end: 104416e2f;  */

void FUN_104416e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb200;
  _swift_getWitnessTable(&UNK_10dcfb200,&UNK_11076b5d0);
  puRam0000000113077ca8 = puVar1;
  return;
}



/* Entry: 104416e30; end: 104416e6f;  */

void FUN_104416e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfb200;
  _swift_getWitnessTable(&UNK_10dcfb200,&UNK_11076b5d0);
  puRam0000000113077ca8 = puVar1;
  return;
}



/* Entry: 104416e70; end: 104416e93;  */

void FUN_104416e70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104416e94();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


