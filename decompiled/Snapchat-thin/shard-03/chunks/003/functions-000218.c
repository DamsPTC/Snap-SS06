/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10273ceb8; end: 10273cee3;  */

void FUN_10273ceb8(long param_1,long param_2)

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



/* Entry: 10273cee4; end: 10273d02b;  */

/* WARNING: Possible PIC construction at 0x00010273cf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273cf78) */
/* WARNING: Removing unreachable block (ram,0x00010273d000) */
/* WARNING: Removing unreachable block (ram,0x00010273cf7c) */
/* WARNING: Removing unreachable block (ram,0x00010273cf4c) */
/* WARNING: Removing unreachable block (ram,0x00010273cf30) */
/* WARNING: Removing unreachable block (ram,0x00010273cfc4) */
/* WARNING: Removing unreachable block (ram,0x00010273cf54) */
/* WARNING: Removing unreachable block (ram,0x00010273cfd4) */
/* WARNING: Removing unreachable block (ram,0x00010273cfe0) */
/* WARNING: Removing unreachable block (ram,0x00010273cff4) */
/* WARNING: Removing unreachable block (ram,0x00010273cf34) */
/* WARNING: Removing unreachable block (ram,0x00010273cf94) */
/* WARNING: Removing unreachable block (ram,0x00010273d00c) */
/* WARNING: Removing unreachable block (ram,0x00010273d014) */
/* WARNING: Removing unreachable block (ram,0x00010273cf98) */

void FUN_10273cee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 6) < '\0') {
    func_0x000107c60690(1);
  }
  else {
    func_0x000107c60690(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar1,uVar2);
  return;
}



/* Entry: 10273d02c; end: 10273d083;  */

uint FUN_10273d02c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_10273d57c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10273d084; end: 10273d0bf;  */

void FUN_10273d084(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_10273cee4(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d0c0; end: 10273d0cf;  */

/* WARNING: Possible PIC construction at 0x00010273cf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273cf90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273cf78) */
/* WARNING: Removing unreachable block (ram,0x00010273d000) */
/* WARNING: Removing unreachable block (ram,0x00010273cf7c) */
/* WARNING: Removing unreachable block (ram,0x00010273cf4c) */
/* WARNING: Removing unreachable block (ram,0x00010273cf30) */
/* WARNING: Removing unreachable block (ram,0x00010273cfc4) */
/* WARNING: Removing unreachable block (ram,0x00010273cf54) */
/* WARNING: Removing unreachable block (ram,0x00010273cfd4) */
/* WARNING: Removing unreachable block (ram,0x00010273cfe0) */
/* WARNING: Removing unreachable block (ram,0x00010273cff4) */
/* WARNING: Removing unreachable block (ram,0x00010273cf34) */
/* WARNING: Removing unreachable block (ram,0x00010273cf94) */
/* WARNING: Removing unreachable block (ram,0x00010273d00c) */
/* WARNING: Removing unreachable block (ram,0x00010273d014) */
/* WARNING: Removing unreachable block (ram,0x00010273cf98) */

void FUN_10273d0c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 6) < '\0') {
    func_0x000107c60690(1);
  }
  else {
    func_0x000107c60690(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar1,uVar2);
  return;
}



/* Entry: 10273d0d0; end: 10273d263;  */

void FUN_10273d0d0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  lVar4 = unaff_x20[3];
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar5 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 6) == '\x01') {
    func_0x000107c60694(0);
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[4];
    uVar3 = unaff_x20[5];
    func_0x000107c60694(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    func_0x000107c606a0(uVar1);
    func_0x000107c60694(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    func_0x000107c606a0(uVar1);
  }
  return;
}



/* Entry: 10273d264; end: 10273d2bb;  */

uint FUN_10273d264(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_10273d724(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10273d2bc; end: 10273d2cf;  */

void FUN_10273d2bc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,*unaff_x20,unaff_x20[1]);
  lVar4 = unaff_x20[3];
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar5 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 6) == '\x01') {
    func_0x000107c60694(0);
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[4];
    uVar3 = unaff_x20[5];
    func_0x000107c60694(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    func_0x000107c606a0(uVar1);
    func_0x000107c60694(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    func_0x000107c606a0(uVar1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d2d0; end: 10273d30b;  */

void FUN_10273d2d0(void)

{
  code *in_x3;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  (*in_x3)(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d30c; end: 10273d3cb;  */

void FUN_10273d30c(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,*unaff_x20,unaff_x20[1]);
  lVar1 = unaff_x20[3];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[4];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d3cc; end: 10273d40f;  */

uint FUN_10273d3cc(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010273d7e4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10273d410; end: 10273d413;  */

void FUN_10273d410(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,*unaff_x20,unaff_x20[1]);
  lVar1 = unaff_x20[3];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[4];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d414; end: 10273d4bb;  */

/* WARNING: Possible PIC construction at 0x00010273d438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273d458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273d43c) */
/* WARNING: Removing unreachable block (ram,0x00010273d48c) */
/* WARNING: Removing unreachable block (ram,0x00010273d440) */
/* WARNING: Removing unreachable block (ram,0x00010273d45c) */
/* WARNING: Removing unreachable block (ram,0x00010273d49c) */
/* WARNING: Removing unreachable block (ram,0x00010273d460) */

void FUN_10273d414(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10273d4bc; end: 10273d57b;  */

void FUN_10273d4bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  lVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_98);
  func_0x000107c5fb58(auStack_98,uVar1,uVar4);
  if (lVar5 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar2,lVar5);
  }
  if (lVar6 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar3,lVar6);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10273d57c; end: 10273d723;  */

undefined8 FUN_10273d57c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar6 = *param_1;
  uVar7 = param_1[2];
  uVar1 = param_1[3];
  dVar8 = (double)param_1[4];
  dVar9 = (double)param_1[5];
  uVar5 = param_1[6];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  cVar4 = (char)param_2[6];
  if ((char)uVar5 < '\0') {
    if (cVar4 < '\0') {
      dVar10 = (double)param_2[4];
      dVar11 = (double)param_2[5];
      if (((uVar6 == *param_2) && (param_1[1] == param_2[1])) ||
         (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
        if (uVar1 == 0) {
          if (uVar3 != 0) {
            return 0;
          }
        }
        else {
          if (uVar3 == 0) {
            return 0;
          }
          if (((uVar7 != uVar2) || (uVar1 != uVar3)) &&
             (func_0x000107c605b8(uVar7,uVar1,uVar2,uVar3,0), (uVar7 & 1) == 0)) {
            return 0;
          }
        }
        if (dVar9 == 0.0) {
          if (dVar11 == 0.0) {
            return 1;
          }
        }
        else if (dVar11 != 0.0) {
          if ((dVar8 == dVar10) && (dVar9 == dVar11)) {
            return 1;
          }
          func_0x000107c605b8(dVar8,dVar9,dVar10,dVar11,0);
          if (((ulong)dVar8 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  else if (-1 < cVar4) {
    dVar11 = (double)param_2[4];
    dVar10 = (double)param_2[5];
    if (((uVar6 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
      if (uVar1 == 0) {
        if (uVar3 != 0) {
          return 0;
        }
      }
      else {
        if (uVar3 == 0) {
          return 0;
        }
        if (((uVar7 != uVar2) || (uVar1 != uVar3)) &&
           (func_0x000107c605b8(uVar7,uVar1,uVar2,uVar3,0), (uVar7 & 1) == 0)) {
          return 0;
        }
      }
      if ((char)uVar5 == '\x01') {
        if (cVar4 == '\x01') {
          return 1;
        }
      }
      else if (((cVar4 != '\x01') && (dVar11 == dVar8)) && (dVar10 == dVar9)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10273d724; end: 10273d8a3;  */

undefined8 FUN_10273d724(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      if (uVar2 == 0) {
        return 0;
      }
      uVar3 = param_1[2];
      if ((uVar3 != param_2[2] || param_1[3] != uVar2) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
      {
        return 0;
      }
    }
    if ((char)param_1[6] == '\x01') {
      if ((char)param_2[6] == '\x01') {
        return 1;
      }
    }
    else if ((char)param_2[6] != '\x01') {
      bVar1 = false;
      if (((double)param_1[4] == (double)param_2[4]) &&
         (bVar1 = false, !NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
        bVar1 = (double)param_1[5] == (double)param_2[5];
      }
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10273d8a4; end: 10273d8a7;  */

void FUN_10273d8a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad41a0;
  func_0x000107c61520(&UNK_10dad41a0,&UNK_110542450);
  puRam0000000112ebb638 = puVar1;
  return;
}



/* Entry: 10273d8a8; end: 10273d8e7;  */

void FUN_10273d8a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad41a0;
  func_0x000107c61520(&UNK_10dad41a0,&UNK_110542450);
  puRam0000000112ebb638 = puVar1;
  return;
}



/* Entry: 10273d8e8; end: 10273d8eb;  */

void FUN_10273d8e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4208;
  func_0x000107c61520(&UNK_10dad4208,&UNK_1105424c8);
  puRam0000000112ebb640 = puVar1;
  return;
}



/* Entry: 10273d8ec; end: 10273d92b;  */

void FUN_10273d8ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4208;
  func_0x000107c61520(&UNK_10dad4208,&UNK_1105424c8);
  puRam0000000112ebb640 = puVar1;
  return;
}



/* Entry: 10273d92c; end: 10273d92f;  */

void FUN_10273d92c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4270;
  func_0x000107c61520(&UNK_10dad4270,&UNK_110542550);
  puRam0000000112ebb648 = puVar1;
  return;
}



/* Entry: 10273d930; end: 10273d96f;  */

void FUN_10273d930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4270;
  func_0x000107c61520(&UNK_10dad4270,&UNK_110542550);
  puRam0000000112ebb648 = puVar1;
  return;
}



/* Entry: 10273d970; end: 10273d9af;  */

/* WARNING: Possible PIC construction at 0x00010273d990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273d994) */

void FUN_10273d970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  if ((param_7 >> 7 & 1) == 0) {
    func_0x000107c61434(param_4);
    param_6 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 10273d9b0; end: 10273d9c7;  */

/* WARNING: Possible PIC construction at 0x00010273d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010273da08) */
/* WARNING: Removing unreachable block (ram,0x00010273d9f8) */

void FUN_10273d9b0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
             *(undefined1 *)(param_1 + 6));
  return;
}



/* Entry: 10273d9c8; end: 10273da1b;  */

/* WARNING: Possible PIC construction at 0x00010273d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010273da08) */
/* WARNING: Removing unreachable block (ram,0x00010273d9f8) */

void FUN_10273d9c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10273da1c; end: 10273db1f;  */

undefined8 * FUN_10273da1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_10273d970(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 10273db20; end: 10273db73;  */

undefined8 * FUN_10273db20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_10273d9c8(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 10273db74; end: 10273dc6f;  */

int FUN_10273db74(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 0xc) & 0x7e | (uint)(*(byte *)(param_1 + 0xc) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10273dc70; end: 10273dce3;  */

/* WARNING: Possible PIC construction at 0x00010273dc84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273dc88) */

void FUN_10273dc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10273dce4; end: 10273dd5f;  */

undefined8 * FUN_10273dce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10273dd60; end: 10273ddb3;  */

undefined8 * FUN_10273dd60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10273ddb4; end: 10273de5b;  */

int FUN_10273ddb4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10273de5c; end: 10273de8b;  */

/* WARNING: Possible PIC construction at 0x00010273de70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273de74) */

void FUN_10273de5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10273de8c; end: 10273df6b;  */

undefined8 * FUN_10273de8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10273df6c; end: 10273dfbf;  */

undefined8 * FUN_10273df6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10273dfc0; end: 10273e06f;  */

int FUN_10273dfc0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10273e070; end: 10273e0db;  */

void FUN_10273e070(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_10273e34c();
  lVar1 = param_2;
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1105425a8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10273e0dc; end: 10273e12b;  */

long FUN_10273e0dc(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10273e12c; end: 10273e14b;  */

void FUN_10273e12c(void)

{
  func_0x000107c61168(&PTR_PTR_11285e8f8);
  return;
}



/* Entry: 10273e14c; end: 10273e187;  */

undefined8 FUN_10273e14c(undefined8 param_1,undefined8 param_2)

{
  FUN_10273da1c(param_2,param_1);
  return param_2;
}



/* Entry: 10273e188; end: 10273e1ab;  */

void FUN_10273e188(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10273e1ac; end: 10273e33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273e1ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [56];
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_10273e12c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ebb658);
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[1];
  uVar10 = *param_2;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  *(undefined8 *)(lVar3 + _DAT_112ebb660) = param_3;
  FUN_10273e14c(param_2,auStack_78);
  plVar4 = &lStack_88;
  lStack_88 = lVar3;
  lStack_80 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c56bcc(uVar5);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10273e33c; end: 10273e34b;  */

undefined1  [16] FUN_10273e33c(void)

{
  return ZEXT816(0x1105425d0);
}



/* Entry: 10273e34c; end: 10273e36b;  */

void FUN_10273e34c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebb6a8);
  return;
}



/* Entry: 10273e36c; end: 10273e473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10273e36c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar4 = 0;
  uVar5 = 0;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,&uStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x000107c6147c(&lStack_b0,&uStack_70,PTR___sypN_11034f1a8 + 8,lVar3,6);
    lVar3 = lStack_b0;
    if ((uVar4 & 1) != 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_112ebb658);
      puVar2 = (undefined8 *)(lStack_b0 + _DAT_112ebb658);
      uStack_68 = puVar2[1];
      uStack_70 = *puVar2;
      lStack_58 = puVar2[3];
      uStack_60 = puVar2[2];
      uStack_48 = puVar2[5];
      uStack_50 = puVar2[4];
      uStack_40 = *(undefined1 *)(puVar2 + 6);
      uStack_80 = (undefined1)plVar1[6];
      lStack_98 = plVar1[3];
      lStack_a0 = plVar1[2];
      lStack_88 = plVar1[5];
      lStack_90 = plVar1[4];
      lStack_a8 = plVar1[1];
      lStack_b0 = *plVar1;
      FUN_10273d57c(&lStack_b0,&uStack_70);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ebb660);
        lVar7 = *(long *)(lVar3 + _DAT_112ebb660);
        func_0x000107c61170(lVar3);
        return lVar6 == lVar7;
      }
      func_0x000107c61170(lVar3);
    }
  }
  return false;
}



/* Entry: 10273e474; end: 10273e4f3; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImplP33_95F1E369C25150FEBF031FAA3BEDBFDF8CacheKey isEqual:] */

uint FUN_10273e474(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10273e36c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10273e4f4; end: 10273e587; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImplP33_95F1E369C25150FEBF031FAA3BEDBFDF8CacheKey hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10273e4f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x000107c606ac(auStack_a8);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebb658);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_48 = puVar1[3];
  uStack_50 = puVar1[2];
  uStack_38 = puVar1[5];
  uStack_40 = puVar1[4];
  uStack_30 = *(undefined1 *)(puVar1 + 6);
  func_0x000107c61174();
  FUN_10273cee4(auStack_a8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb660);
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10273e588; end: 10273e5e7; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImplP33_95F1E369C25150FEBF031FAA3BEDBFDF8CacheKey init] */

void FUN_10273e588(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesComposerPackagedThumbnailLoaderImpl.CacheKey",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273e5b4);
  (*pcVar1)();
}



/* Entry: 10273e5e8; end: 10273e607; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImplP33_95F1E369C25150FEBF031FAA3BEDBFDF8CacheKey .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010273d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010273da08) */
/* WARNING: Removing unreachable block (ram,0x00010273d9f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273e5e8(long param_1)

{
  param_1 = param_1 + _DAT_112ebb658;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10273e608; end: 10273e67f;  */

/* WARNING: Possible PIC construction at 0x00010273e65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273e660) */

void FUN_10273e608(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_10273f094();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x10) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110542610;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10273e680; end: 10273e68b;  */

/* WARNING: Possible PIC construction at 0x00010273e65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273e660) */

void FUN_10273e680(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_10273f094();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x18) = lVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110542610;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 10273e68c; end: 10273e6cf;  */

void FUN_10273e68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return;
}



/* Entry: 10273e6d0; end: 10273e6ef;  */

void FUN_10273e6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x130) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273e6f0,0,0);
  return;
}



/* Entry: 10273e6f0; end: 10273e9ab;  */

void FUN_10273e6f0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  double dVar18;
  double dStack_70;
  uint uStack_68;
  
  lVar13 = *(long *)(unaff_x22 + 0xe0);
  if (*(char *)(lVar13 + 0x30) < '\0') {
    lVar15 = 0;
    bVar9 = *(char *)(unaff_x22 + 0x130) == '\x01';
    uStack_68 = (uint)*(undefined8 *)(unaff_x22 + 0xf0);
    dStack_70 = (double)(*(ulong *)(unaff_x22 + 0xe8) ^
                        (*(ulong *)(unaff_x22 + 0xe8) ^ 0x4082c00000000000) &
                        -(ulong)((long)((ulong)CONCAT14(bVar9,(uint)bVar9) << 0x3f) < 0));
    uStack_68 = uStack_68 ^ uStack_68 & -(uint)((long)((ulong)bVar9 << 0x3f) < 0);
  }
  else {
    if (*(char *)(unaff_x22 + 0x130) == '\x01') {
      bVar9 = *(char *)(lVar13 + 0x30) == '\x01';
      uStack_68 = (uint)*(undefined8 *)(lVar13 + 0x28) & ~-(uint)((long)((ulong)bVar9 << 0x3f) < 0);
      dStack_70 = (double)((*(ulong *)(lVar13 + 0x20) ^ 0x4082c00000000000) &
                           ~-(ulong)((long)((ulong)CONCAT14(bVar9,(uint)bVar9) << 0x3f) < 0) ^
                          0x4082c00000000000);
    }
    else {
      dStack_70 = *(double *)(unaff_x22 + 0xe8);
      uStack_68 = (uint)*(undefined8 *)(unaff_x22 + 0xf0);
    }
    dVar18 = (double)(long)dStack_70;
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10273e9a4);
      (*pcVar8)();
    }
    if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10273e9a8);
      (*pcVar8)();
    }
    if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10273e9ac);
      (*pcVar8)();
    }
    lVar15 = (long)dVar18;
  }
  *(long *)(unaff_x22 + 0x100) = lVar15;
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(*(long *)(unaff_x22 + 0xf8) + 0x20);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar16);
  lVar10 = lVar13;
  (**(code **)(lVar5 + 0x10))(lVar13,lVar15,uVar16,lVar5);
  if (lVar10 != 0) {
    func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010273e858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar10);
    return;
  }
  puVar14 = *(undefined8 **)(unaff_x22 + 0xe0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar16 = *puVar14;
  uVar17 = *(undefined8 *)(lVar13 + 8);
  if (-1 < *(char *)(lVar13 + 0x30)) {
    func_0x000100083b20(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar13 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
    piVar12 = *(int **)(lVar13 + 8);
    iVar1 = *piVar12;
    plVar11 = (long *)(ulong)(uint)piVar12[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_10273e9ac;
                    /* WARNING: Could not recover jumptable at 0x00010273e900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(dStack_70,uStack_68,uVar16,uVar17,uVar2,lVar13);
    return;
  }
  uVar2 = *(undefined8 *)(lVar13 + 0x20);
  uVar6 = *(undefined8 *)(lVar13 + 0x28);
  uVar3 = *(undefined8 *)(lVar13 + 0x10);
  uVar7 = *(undefined8 *)(lVar13 + 0x18);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar13 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar4);
  piVar12 = *(int **)(lVar13 + 0x10);
  iVar1 = *piVar12;
  plVar11 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x10273eae8;
                    /* WARNING: Could not recover jumptable at 0x00010273e99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))(uVar16,uVar17,uVar3,uVar7,uVar2,uVar6,uVar4,lVar13);
  return;
}



/* Entry: 10273e9ac; end: 10273ea0f;  */

void FUN_10273e9ac(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0xb0) = unaff_x22;
  *(undefined8 *)(lVar2 + 0xb8) = param_1;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10273ea10;
  }
  else {
    pcVar1 = FUN_10273eab4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10273ea10; end: 10273eab3;  */

void FUN_10273ea10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61174(uVar4);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  (**(code **)(lVar3 + 8))(uVar4,uVar5,uVar1,uVar2,lVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010273eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10273eab4; end: 10273eb4b;  */

void FUN_10273eab4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010273eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273eb4c; end: 10273ebef;  */

void FUN_10273eb4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61174(uVar4);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  (**(code **)(lVar3 + 8))(uVar4,uVar5,uVar1,uVar2,lVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010273ebec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10273ebf0; end: 10273ec23;  */

void FUN_10273ebf0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010273ec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273ec24; end: 10273ec43;  */

void FUN_10273ec24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273ec44,0,0);
  return;
}



/* Entry: 10273ec44; end: 10273ece7;  */

void FUN_10273ec44(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  uVar3 = *puVar8;
  uVar5 = puVar8[1];
  piVar7 = *(int **)(lVar4 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10273ece8;
                    /* WARNING: Could not recover jumptable at 0x00010273ece4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),uVar3,uVar5,uVar2,
             lVar4);
  return;
}



/* Entry: 10273ece8; end: 10273ed53;  */

void FUN_10273ece8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x68) = param_1;
    pcVar1 = FUN_10273ed54;
  }
  else {
    pcVar1 = (code *)0x10273ed8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10273ed54; end: 10273edbf;  */

void FUN_10273ed54(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010273ed88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 10273edc0; end: 10273edd7;  */

void FUN_10273edc0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273edd8,0,0);
  return;
}



/* Entry: 10273edd8; end: 10273ee9b;  */

void FUN_10273edd8(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  uVar4 = *puVar2;
  uVar8 = puVar2[1];
  uVar5 = puVar2[2];
  uVar9 = puVar2[3];
  uVar6 = puVar2[4];
  uVar10 = puVar2[5];
  piVar12 = *(int **)(lVar7 + 0x10);
  iVar1 = *piVar12;
  plVar11 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10273ee9c;
                    /* WARNING: Could not recover jumptable at 0x00010273ee98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))(uVar4,uVar8,uVar5,uVar9,uVar6,uVar10,uVar3,lVar7);
  return;
}



/* Entry: 10273ee9c; end: 10273ef07;  */

void FUN_10273ee9c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_10273ef08;
  }
  else {
    pcVar1 = (code *)0x10273ef40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10273ef08; end: 10273ef73;  */

void FUN_10273ef08(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010273ef3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10273ef74; end: 10273ef7f;  */

void FUN_10273ef74(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010273efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10273ef80; end: 10273efc3;  */

void FUN_10273ef80(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010273efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10273efc4; end: 10273f03b;  */

void FUN_10273efc4(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10273f03c;
  *(undefined1 *)(plVar1 + 0x26) = param_4;
  plVar1[0x1e] = param_3;
  plVar1[0x1f] = lVar2;
  plVar1[0x1c] = param_1;
  plVar1[0x1d] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273e6f0,0,0);
  return;
}



/* Entry: 10273f03c; end: 10273f083;  */

void FUN_10273f03c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010273f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10273f084; end: 10273f093;  */

undefined1  [16] FUN_10273f084(void)

{
  return ZEXT816(0x110542630);
}



/* Entry: 10273f094; end: 10273f0b3;  */

void FUN_10273f094(void)

{
  func_0x000107c61168(&PTR_PTR_112ebb778);
  return;
}



/* Entry: 10273f0b4; end: 10273f0c3;  */

void FUN_10273f0b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10273f0c4; end: 10273f127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273f0c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebb7f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb7f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10273f128; end: 10273f1af; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImpl39MemoriesComposerPackagedThumbnailLoader supportedURLSchemes] */

void FUN_10273f128(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000102788d24();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000102788d18();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10273f1b0; end: 10273f2d7;  */

/* WARNING: Removing unreachable block (ram,0x00010273f21c) */
/* WARNING: Removing unreachable block (ram,0x00010273f228) */
/* WARNING: Removing unreachable block (ram,0x00010273f238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273f1b0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000100083b20(auStack_a0);
  func_0x00010273fcbc(auStack_a0,uStack_88);
  (**(code **)(lStack_80 + 8))(&uStack_78,param_2,uStack_88,lStack_80);
  param_1[3] = &UNK_110542450;
  puVar1 = &UNK_110542680;
  func_0x000107c613fc(&UNK_110542680,0x41,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x18) = uStack_70;
  *(undefined8 *)(puVar1 + 0x10) = uStack_78;
  *(undefined8 *)(puVar1 + 0x28) = uStack_60;
  *(undefined8 *)(puVar1 + 0x20) = uStack_68;
  *(undefined8 *)(puVar1 + 0x38) = uStack_50;
  *(undefined8 *)(puVar1 + 0x30) = uStack_58;
  puVar1[0x40] = uStack_48;
  FUN_10273fb1c(auStack_a0);
  return;
}



/* Entry: 10273f2d8; end: 10273f3b3; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImpl39MemoriesComposerPackagedThumbnailLoader requestPayloadWithURL:error:] */

void FUN_10273f2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_10273f1b0(auStack_60,puVar2,param_4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  puVar2 = auStack_60;
  func_0x00010273fcbc(puVar2,uStack_48);
  func_0x000107c605b0();
  FUN_10273fb1c(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10273f3b4; end: 10273f4f3;  */

void FUN_10273f3b4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [32];
  
  bVar1 = param_2 < 1;
  bVar4 = param_3 < 1;
  dVar2 = 0.0;
  if (!bVar1 && !bVar4) {
    dVar2 = (double)param_2;
  }
  dVar3 = 0.0;
  if (!bVar1 && !bVar4) {
    dVar3 = (double)param_3;
  }
  puVar5 = &UNK_1105426a8;
  func_0x000107c613fc(&UNK_1105426a8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  func_0x0001000bb420(param_1,auStack_70);
  puVar6 = &UNK_1105426d0;
  func_0x000107c613fc(&UNK_1105426d0,0x59,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  *(undefined8 *)(puVar6 + 0x20) = param_5;
  func_0x000100102924(auStack_70,puVar6 + 0x28);
  *(double *)(puVar6 + 0x48) = dVar2;
  *(double *)(puVar6 + 0x50) = dVar3;
  puVar6[0x58] = bVar1 || bVar4;
  func_0x000107c6157c(param_5);
  uVar7 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad4488,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar6);
  func_0x0001000285a8(0x112ebb800,&UNK_10dad4490);
  func_0x000107c610f8();
  func_0x0001027419c8(uVar7);
  return;
}



/* Entry: 10273f4f4; end: 10273f517;  */

void FUN_10273f4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273f518,0,0);
  return;
}



/* Entry: 10273f518; end: 10273f5fb;  */

void FUN_10273f518(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (undefined8 *)(lVar8 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x58) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10273f5fc;
    lVar8 = *(long *)(unaff_x22 + 0x48);
    lVar2 = *(long *)(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x40);
    *(undefined1 *)((long)plVar4 + 0x41) = *(undefined1 *)(unaff_x22 + 0x78);
    plVar4[0x1a] = lVar2;
    plVar4[0x1b] = (long)puVar3;
    plVar4[0x18] = lVar7;
    plVar4[0x19] = lVar8;
    lVar8 = 0x112ebb838;
    func_0x0001000285a8(0x112ebb838,&UNK_10dad4510);
    uVar6 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1c] = uVar6;
    lVar8 = 0;
    FUN_1027408ac();
    plVar4[0x1d] = lVar8;
    lVar8 = *(long *)(lVar8 + -8);
    plVar4[0x1e] = lVar8;
    uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1f] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10273f7d8,0,0);
    return;
  }
  pcVar1 = *(code **)(unaff_x22 + 0x30);
  FUN_10273fce0();
  puVar5 = &UNK_1105427b0;
  func_0x000107c613f8(&UNK_1105427b0,puVar3,0,0);
  puVar3[1] = 0x2000000000000000;
  *puVar3 = 0;
  (*pcVar1)(0,puVar5);
  func_0x000107c614ac(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010273f5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273f5fc; end: 10273f667;  */

void FUN_10273f5fc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = param_1;
    pcVar1 = FUN_10273f668;
  }
  else {
    pcVar1 = FUN_10273f6dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10273f668; end: 10273f6db;  */

void FUN_10273f668(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar1 = *(code **)(unaff_x22 + 0x30);
  uVar2 = uVar4;
  func_0x000107c61174(uVar4);
  (*pcVar1)(uVar4,0);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010273f6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273f6dc; end: 10273f743;  */

void FUN_10273f6dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar1 = *(code **)(unaff_x22 + 0x30);
  func_0x000107c614b0(uVar2);
  (*pcVar1)(0,uVar2);
  func_0x000107c614ac(uVar2);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010273f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273f744; end: 10273f7d7;  */

void FUN_10273f744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x41) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  lVar2 = 0x112ebb838;
  func_0x0001000285a8(0x112ebb838,&UNK_10dad4510);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar1;
  lVar2 = 0;
  FUN_1027408ac();
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273f7d8,0,0);
  return;
}



/* Entry: 10273f7d8; end: 10273f9a3;  */

void FUN_10273f7d8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  func_0x0001000bb420(*(undefined8 *)(unaff_x22 + 0xc0),unaff_x22 + 0x80);
  puVar2 = PTR___sypN_11034f1a8;
  lVar3 = unaff_x22 + 0x48;
  func_0x000107c6147c(lVar3,unaff_x22 + 0x80,PTR___sypN_11034f1a8 + 8,&UNK_110542450,6);
  if ((int)lVar3 != 0) {
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined1 *)(unaff_x22 + 0x40) = *(undefined1 *)(unaff_x22 + 0x78);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10273f9a4;
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    lVar1 = *(long *)(unaff_x22 + 0xd8);
    lVar6 = *(long *)(unaff_x22 + 200);
    *(undefined1 *)(plVar4 + 0xe) = *(undefined1 *)(unaff_x22 + 0x41);
    plVar4[9] = lVar3;
    plVar4[10] = lVar1;
    plVar4[7] = unaff_x22 + 0x10;
    plVar4[8] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10273fe90,0,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x0001000bb420(*(undefined8 *)(unaff_x22 + 0xc0),unaff_x22 + 0xa0);
  func_0x000107c6147c(uVar8,unaff_x22 + 0xa0,puVar2 + 8,uVar10,6);
  pcVar7 = *(code **)(lVar3 + 0x38);
  if ((int)uVar8 == 0) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0xe0);
    (*pcVar7)(puVar5,1,1,*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x00010273fd20();
    FUN_10273fce0();
    func_0x000107c613f8(&UNK_1105427b0,puVar5,0,0);
    puVar5[1] = 0x2000000000000000;
    *puVar5 = 1;
    func_0x000107c61654();
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
    (*pcVar7)(uVar10,0,1,uVar8);
    func_0x00010273fd68(uVar10,uVar9);
    FUN_10273fdac();
    func_0x000107c613f8(uVar8,uVar10,0,0);
    FUN_10273fdf0(uVar9);
    func_0x000107c61654();
    func_0x00010273fe34(uVar9);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010273f9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273f9a4; end: 10273fa4b;  */

void FUN_10273f9a4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x100));
  if (unaff_x20 != 0) {
    FUN_1027400a4(lVar4 + 0x10);
    uVar1 = *(undefined8 *)(lVar4 + 0xe0);
    func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf8));
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010273fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0xf8);
  uVar2 = *(undefined8 *)(lVar4 + 0xe0);
  FUN_1027400a4(lVar4 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010273fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1);
  return;
}



/* Entry: 10273fa4c; end: 10273fb1b; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImpl39MemoriesComposerPackagedThumbnailLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_10273fa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [32];
  
  puVar2 = auStack_60;
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_60,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_110542718;
  func_0x000107c613fc(&UNK_110542718,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  FUN_10273f3b4(auStack_60,param_4,param_5,FUN_10273fcb4,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  FUN_10273fb1c(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10273fb1c; end: 10273fb3b;  */

void FUN_10273fb1c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010273fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10273fb3c; end: 10273fbcf;  */

void FUN_10273fb3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  plVar6 = (long *)0x80;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x58);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10273fbd0;
  *(undefined1 *)(plVar6 + 0xf) = uVar5;
  plVar6[9] = lVar2;
  plVar6[10] = lVar4;
  plVar6[7] = lVar7;
  plVar6[8] = unaff_x20 + 0x28;
  plVar6[5] = lVar1;
  plVar6[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273f518,0,0);
  return;
}



/* Entry: 10273fbd0; end: 10273fc0b;  */

void FUN_10273fbd0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010273fc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10273fc0c; end: 10273fc6b; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImpl39MemoriesComposerPackagedThumbnailLoader init] */

void FUN_10273fc0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesComposerPackagedThumbnailLoaderImpl.MemoriesComposerPackagedThumbnailLoader"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273fc38);
  (*pcVar1)();
}



/* Entry: 10273fc6c; end: 10273fc7b;  */

undefined1  [16] FUN_10273fc6c(void)

{
  return ZEXT816(0x1105426f8);
}



/* Entry: 10273fc7c; end: 10273fcb3; -[_TtC43MemoriesComposerPackagedThumbnailLoaderImpl39MemoriesComposerPackagedThumbnailLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010273fc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273fc9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273fc7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebb7f8));
  return;
}



/* Entry: 10273fcb4; end: 10273fcdf;  */

void FUN_10273fcb4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10273fce0; end: 10273fd1f;  */

void FUN_10273fce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4550;
  func_0x000107c61520(&UNK_10dad4550,&UNK_1105427b0);
  puRam0000000112ebb830 = puVar1;
  return;
}



/* Entry: 10273fd20; end: 10273fdab;  */

undefined8 FUN_10273fd20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebb838;
  func_0x0001000285a8(0x112ebb838,&UNK_10dad4510);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10273fdac; end: 10273fdef;  */

void FUN_10273fdac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ebb840 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1027408ac(0xff);
  puVar2 = &UNK_10dad45c8;
  func_0x000107c61520(&UNK_10dad45c8,uVar1);
  puRam0000000112ebb840 = puVar2;
  return;
}



/* Entry: 10273fdf0; end: 10273fe6f;  */

undefined8 FUN_10273fdf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1027408ac();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10273fe70; end: 10273fe8f;  */

void FUN_10273fe70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273fe90,0,0);
  return;
}


