/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10980767c; end: 10980776f;  */

void FUN_10980767c(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (*(int *)(param_2 + 0x360) != 0 && pcRam000000011382b1e0 != (code *)0x0) {
    lStack_28 = param_2;
    (*pcRam000000011382b1e0)(&lStack_28);
  }
  *(undefined4 *)(param_2 + 0x360) = 0;
  return;
}



/* Entry: 109807770; end: 1098077d7;  */

void FUN_109807770(long param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = 0x48;
  if (param_5 != 1) {
    lVar1 = 0x28c8;
  }
  plVar2 = *(long **)(param_1 + lVar1 + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 0x120 +
                     (long)*(int *)(*(long *)(param_3 + 8) + 8) * 8);
  lStack_20 = param_1;
  uStack_18 = param_4;
  (**(code **)(*plVar2 + 0x10))(plVar2,&lStack_20,param_2,param_3);
  return;
}



/* Entry: 1098077d8; end: 10980780b;  */

bool FUN_1098077d8(undefined8 param_1,long param_2,long param_3)

{
  if ((*(uint *)(param_2 + 0xe8) >> 2 & 1) == 0) {
    return (*(uint *)(param_3 + 0xe8) & 4) == 0 &&
           ((*(uint *)(param_2 + 0xe8) & 3) == 0 || (*(uint *)(param_3 + 0xe8) & 3) == 0);
  }
  return false;
}



/* Entry: 10980780c; end: 1098078af;  */

undefined8 FUN_10980780c(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((((*(uint *)(param_2 + 0x1f) < 7 &&
         (1 << (ulong)(*(uint *)(param_2 + 0x1f) & 0x1f) & 100U) != 0) &&
       (*(uint *)(param_3 + 0x1f) < 7 &&
        (1 << (ulong)(*(uint *)(param_3 + 0x1f) & 0x1f) & 100U) != 0)) ||
      (((int)param_2[0x28] != 0 &&
       (plVar2 = param_2, (**(code **)(*param_2 + 0x18))(param_2,param_3), (int)plVar2 == 0)))) ||
     (((int)param_3[0x28] != 0 &&
      ((**(code **)(*param_3 + 0x18))(param_3,param_2), ((ulong)param_3 & 1) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1098078b0; end: 1098078fb;  */

void FUN_1098078b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  ppuStack_28 = &PTR_FUN_110b12268;
  uStack_20 = param_3;
  uStack_18 = param_1;
  (**(code **)(*param_2 + 0x78))(param_2,&ppuStack_28,param_4,param_3);
  return;
}



/* Entry: 1098078fc; end: 1098079b7;  */

void FUN_1098078fc(void)

{
  return;
}



/* Entry: 1098079b8; end: 1098079df;  */

undefined8 FUN_1098079b8(long param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(param_1 + 0x10) + 0x30))
            (param_2,*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return 0;
}



/* Entry: 1098079e0; end: 109807a2b;  */

long FUN_1098079e0(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109807a2c; end: 109807af7;  */

void FUN_109807a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b122a8;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f8000003f800000;
  param_1[0x18] = 0x5d5e0b6b00000000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1d] = 0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0x3f00000000000000;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  param_1[0x22] = 0x5d5e0b6b3dcccccd;
  *(undefined4 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x26] = 0x3f800000ffffffff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[3] = 0;
  param_1[2] = 0x3f800000;
  param_1[5] = 0;
  param_1[4] = 0x3f80000000000000;
  param_1[7] = 0x3f800000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 109807af8; end: 109807b2b;  */

undefined8 * FUN_109807af8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b122a8;
  FUN_109807e94(param_1 + 0x29);
  return param_1;
}



/* Entry: 109807b2c; end: 109807b67;  */

void FUN_109807b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b122a8;
  FUN_109807e94(param_1 + 0x29);
  FUN_109825740(param_1);
  return;
}



/* Entry: 109807b68; end: 109807e37;  */

undefined * FUN_109807b68(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = 0;
  lVar4 = 0;
  do {
    lVar6 = 4;
    lVar5 = lVar3;
    do {
      *(undefined4 *)((long)param_2 + lVar5 + 0x20) = *(undefined4 *)(param_1 + lVar5 + 0x10);
      lVar5 = lVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x10;
  } while (lVar4 != 3);
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_2 + lVar4 + 0x50) = *(undefined4 *)(param_1 + lVar4 + 0x40);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar3 = 0;
  lVar4 = 0;
  do {
    lVar6 = 4;
    lVar5 = lVar3;
    do {
      *(undefined4 *)((long)param_2 + lVar5 + 0x60) = *(undefined4 *)(param_1 + lVar5 + 0x50);
      lVar5 = lVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x10;
  } while (lVar4 != 3);
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_2 + lVar4 + 0x90) = *(undefined4 *)(param_1 + lVar4 + 0x80);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_2 + lVar4 + 0xa0) = *(undefined4 *)(param_1 + lVar4 + 0x90);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_2 + lVar4 + 0xb0) = *(undefined4 *)(param_1 + lVar4 + 0xa0);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_2 + lVar4 + 0xc0) = *(undefined4 *)(param_1 + lVar4 + 0xb0);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  *(undefined4 *)(param_2 + 0x1f) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0xc4);
  *param_2 = 0;
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(param_1 + 0xd0));
  param_2[1] = plVar1;
  param_2[2] = 0;
  *(undefined8 *)((long)param_2 + 0xfc) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)((long)param_2 + 0x104) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(param_1 + 0xf8);
  uVar8 = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((long)param_2 + 0xd4) = *(undefined4 *)(param_1 + 0xfc);
  uVar9 = *(undefined4 *)(param_1 + 0x108);
  param_2[0x1c] = *(undefined8 *)(param_1 + 0x110);
  param_2[0x1b] = CONCAT44(uVar9,uVar8);
  *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((long)param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x118);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x50))(param_3,param_1);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,plVar1);
  param_2[3] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*param_3 + 0x60))(param_3,plVar1);
  }
  *(undefined8 *)((long)param_2 + 0xec) = *(undefined8 *)(param_1 + 0x134);
  *(undefined4 *)((long)param_2 + 0xf4) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x140);
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 8);
    uVar8 = *(undefined4 *)(lVar4 + 0x10);
  }
  *(undefined8 *)((long)param_2 + 0x114) = uVar7;
  *(undefined4 *)((long)param_2 + 0x11c) = uVar8;
  return &UNK_10f580984;
}



/* Entry: 109807e38; end: 109807e93;  */

void FUN_109807e38(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}



/* Entry: 109807e94; end: 109807edf;  */

long FUN_109807e94(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109807ee0; end: 109807f8f;  */

undefined8 * FUN_109807ee0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b12300;
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1[3] + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 200);
      if (lVar3 != 0) {
        plVar1 = (long *)param_1[0xd];
        (**(code **)(*plVar1 + 0x48))();
        (**(code **)(*plVar1 + 0x60))();
        (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar3,param_1[5]);
        *(undefined8 *)(lVar5 + 200) = 0;
        iVar2 = *(int *)((long)param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_10980b2c4(param_1 + 1);
  return param_1;
}



/* Entry: 109807f90; end: 109807f93;  */

undefined8 * FUN_109807f90(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b12300;
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1[3] + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 200);
      if (lVar3 != 0) {
        plVar1 = (long *)param_1[0xd];
        (**(code **)(*plVar1 + 0x48))();
        (**(code **)(*plVar1 + 0x60))();
        (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar3,param_1[5]);
        *(undefined8 *)(lVar5 + 200) = 0;
        iVar2 = *(int *)((long)param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_10980b2c4(param_1 + 1);
  return param_1;
}



/* Entry: 109807f94; end: 109807fa7;  */

void FUN_109807f94(void)

{
  FUN_109807ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109807fa8; end: 109808057;  */

void FUN_109807fa8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_2 + 200);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 8);
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar4,*(undefined8 *)(param_1 + 0x28));
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_70 = *(undefined8 *)(param_2 + 0x10);
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    uStack_60 = *(undefined8 *)(param_2 + 0x20);
    uStack_48 = *(undefined8 *)(param_2 + 0x38);
    uStack_50 = *(undefined8 *)(param_2 + 0x30);
    uStack_38 = *(undefined8 *)(param_2 + 0x48);
    uStack_40 = *(undefined8 *)(param_2 + 0x40);
    (**(code **)(**(long **)(param_2 + 0xd0) + 0x10))
              (*(long **)(param_2 + 0xd0),&uStack_70,auStack_80,auStack_90);
    plVar3 = *(long **)(param_1 + 0x68);
    (**(code **)(*plVar3 + 0x10))
              (plVar3,auStack_80,auStack_90,*(undefined4 *)(*(long *)(param_2 + 0xd0) + 8),param_2,
               uVar1,uVar2,*(undefined8 *)(param_1 + 0x28));
    *(long **)(param_2 + 200) = plVar3;
  }
  return;
}



/* Entry: 109808058; end: 10980819f;  */

void FUN_109808058(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_2 + 0xf4) = uVar4;
  if (uVar4 == uVar1) {
    uVar1 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar4 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      if (0 < (int)uVar4) {
        lVar5 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar5);
          lVar5 = lVar5 + 8;
        } while ((ulong)uVar4 << 3 != lVar5);
      }
      if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
        FUN_109825740();
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(ulong *)(param_1 + 0x18) = uVar2;
      *(uint *)(param_1 + 0x10) = uVar1;
    }
  }
  *(long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar4 * 8) = param_2;
  *(uint *)(param_1 + 0xc) = uVar4 + 1;
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_80 = *(undefined8 *)(param_2 + 0x10);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x48);
  uStack_50 = *(undefined8 *)(param_2 + 0x40);
  (**(code **)(**(long **)(param_2 + 0xd0) + 0x10))
            (*(long **)(param_2 + 0xd0),&uStack_80,auStack_90,auStack_a0);
  plVar3 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar3 + 0x10))
            (plVar3,auStack_90,auStack_a0,*(undefined4 *)(*(long *)(param_2 + 0xd0) + 8),param_2,
             param_3,param_4,*(undefined8 *)(param_1 + 0x28));
  *(long **)(param_2 + 200) = plVar3;
  return;
}



/* Entry: 1098081a0; end: 1098083cb;  */

void FUN_1098081a0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar10;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 8);
      if (((*(byte *)(param_1 + 0x78) & 1) != 0) ||
         (6 < *(uint *)(lVar3 + 0xf8) || (1 << (ulong)(*(uint *)(lVar3 + 0xf8) & 0x1f) & 100U) == 0)
         ) {
        (**(code **)(**(long **)(lVar3 + 0xd0) + 0x10))
                  (*(long **)(lVar3 + 0xd0),lVar3 + 0x10,&fStack_80,&fStack_90);
        fVar5 = fRam00000001132e0498;
        auVar6._0_4_ = fStack_80 - fRam00000001132e0498;
        auVar6._4_4_ = fStack_7c - fRam00000001132e0498;
        auVar6._8_4_ = fStack_78 - fRam00000001132e0498;
        fStack_74 = fStack_74 - 0.0;
        auVar12._0_4_ = fStack_90 + fRam00000001132e0498;
        auVar12._4_4_ = fStack_8c + fRam00000001132e0498;
        auVar12._8_4_ = fStack_88 + fRam00000001132e0498;
        fStack_84 = fStack_84 + 0.0;
        fStack_90 = auVar12._0_4_;
        fStack_8c = auVar12._4_4_;
        fStack_88 = auVar12._8_4_;
        fStack_80 = auVar6._0_4_;
        fStack_7c = auVar6._4_4_;
        fStack_78 = auVar6._8_4_;
        if ((*(char *)(param_1 + 0x40) == '\x01') &&
           ((*(int *)(lVar3 + 0x118) == 2 && ((*(byte *)(lVar3 + 0xe8) & 3) == 0)))) {
          (**(code **)(**(long **)(lVar3 + 0xd0) + 0x10))
                    (*(long **)(lVar3 + 0xd0),lVar3 + 0x50,&fStack_a0,&fStack_b0);
          auVar7._0_4_ = fStack_a0 - fVar5;
          auVar7._4_4_ = fStack_9c - fVar5;
          auVar7._8_4_ = fStack_98 - fVar5;
          auVar7._12_4_ = fStack_94 - 0.0;
          auVar13._0_4_ = fVar5 + fStack_b0;
          auVar13._4_4_ = fVar5 + fStack_ac;
          auVar13._8_4_ = fVar5 + fStack_a8;
          auVar13._12_4_ = fStack_a4 + 0.0;
          auVar14._4_4_ = fStack_8c;
          auVar14._0_4_ = fStack_90;
          auVar14._8_4_ = fStack_88;
          auVar8._4_4_ = fStack_7c;
          auVar8._0_4_ = fStack_80;
          auVar8._8_4_ = fStack_78;
          auVar8._12_4_ = fStack_74;
          auVar8 = NEON_fmin(auVar8,auVar7,4);
          auVar6 = auVar8._0_12_;
          auVar14._12_4_ = fStack_84;
          auVar14 = NEON_fmax(auVar14,auVar13,4);
          auVar12 = auVar14._0_12_;
          fStack_88 = auVar14._8_4_;
          fStack_84 = auVar14._12_4_;
          fStack_90 = auVar14._0_4_;
          fStack_8c = auVar14._4_4_;
          fStack_78 = auVar8._8_4_;
          fStack_74 = auVar8._12_4_;
          fStack_80 = auVar8._0_4_;
          fStack_7c = auVar8._4_4_;
        }
        if (((*(byte *)(lVar3 + 0xe8) & 1) != 0) ||
           (fVar5 = auVar12._0_4_ - auVar6._0_4_, fVar10 = auVar12._4_4_ - auVar6._4_4_,
           fVar11 = auVar12._8_4_ - auVar6._8_4_, auVar9._0_4_ = fVar5 * fVar5,
           auVar9._4_4_ = fVar10 * fVar10, auVar9._8_4_ = fVar11 * fVar11, auVar9._12_4_ = 0,
           auVar14 = NEON_ext(auVar9,auVar9,8,1),
           auVar14._0_4_ + auVar9._0_4_ + auVar9._4_4_ < 1e+12)) {
          (**(code **)(**(long **)(param_1 + 0x68) + 0x20))
                    (*(long **)(param_1 + 0x68),*(undefined8 *)(lVar3 + 200),&fStack_80,&fStack_90,
                     *(undefined8 *)(param_1 + 0x28));
        }
        else {
          if ((*(uint *)(lVar3 + 0xf8) & 0xfffffffe) != 4) {
            *(undefined4 *)(lVar3 + 0xf8) = 5;
          }
          if (((bRam0000000113736198 & 1) == 0) &&
             (plVar1 = *(long **)(param_1 + 0x70), plVar1 != (long *)0x0)) {
            bRam0000000113736198 = 1;
            (**(code **)(*plVar1 + 0x58))(plVar1,&UNK_10f58099f);
            (**(code **)(**(long **)(param_1 + 0x70) + 0x58))
                      (*(long **)(param_1 + 0x70),&UNK_10f5809d0);
            (**(code **)(**(long **)(param_1 + 0x70) + 0x58))
                      (*(long **)(param_1 + 0x70),&UNK_10f580a14);
            (**(code **)(**(long **)(param_1 + 0x70) + 0x58))
                      (*(long **)(param_1 + 0x70),&UNK_10f580a55);
          }
        }
        iVar2 = *(int *)(param_1 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



/* Entry: 1098083cc; end: 1098083e3;  */

void FUN_1098083cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001098083e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x40))
            (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1098083e4; end: 109808457;  */

void FUN_1098083e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))(param_1);
  plVar2 = (long *)param_1[5];
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)param_1[0xd];
    (**(code **)(*plVar1 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x000109808448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x40))(plVar2,plVar1,param_1 + 6,param_1[5]);
    return;
  }
  return;
}



/* Entry: 109808458; end: 109808537;  */

void FUN_109808458(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  
  lVar5 = *(long *)(param_2 + 200);
  lStack_38 = param_2;
  if (lVar5 != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    (**(code **)(*plVar3 + 0x48))();
    (**(code **)(*plVar3 + 0x60))();
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar5,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_2 + 200) = 0;
  }
  uVar1 = *(uint *)(param_2 + 0xf4);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc) <= (int)uVar1)) {
    FUN_109808538(param_1 + 8,&lStack_38);
    param_2 = lStack_38;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - 1;
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8);
    *(undefined8 *)(lVar5 + (ulong)uVar1 * 8) = *(undefined8 *)(lVar5 + (ulong)uVar2 * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar2;
    if (uVar1 < uVar2) {
      *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8) + 0xf4) = uVar1;
    }
  }
  *(undefined4 *)(param_2 + 0xf4) = 0xffffffff;
  return;
}



/* Entry: 109808538; end: 109808593;  */

void FUN_109808538(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == *param_2) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        uVar1 = uVar1 - 1;
        uVar4 = *(undefined8 *)(lVar3 + uVar2 * 8);
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8) = uVar4;
        *(uint *)(param_1 + 4) = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 109808594; end: 109808b0b;  */

void FUN_109808594(long param_1,long param_2,long param_3,undefined ***param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar23;
  ulong uVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  ulong uVar37;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined ***pppuStack_600;
  undefined ***pppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined ***pppuStack_5e0;
  undefined ***pppuStack_5d8;
  undefined8 uStack_5d0;
  uint uStack_5c8;
  undefined4 uStack_5c4;
  undefined **ppuStack_5c0;
  ulong uStack_5b8;
  float fStack_5b0;
  undefined **ppuStack_5a0;
  undefined8 uStack_598;
  undefined ***pppuStack_590;
  undefined8 *puStack_588;
  long lStack_580;
  long lStack_578;
  undefined ***pppuStack_570;
  undefined **ppuStack_510;
  ulong uStack_508;
  float fStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined **ppuStack_4d0;
  undefined4 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a4;
  undefined8 uStack_49c;
  undefined8 uStack_494;
  undefined4 uStack_48c;
  undefined *apuStack_480 [40];
  undefined4 uStack_340;
  undefined1 uStack_320;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4c0 = 0;
  ppuStack_4d0 = &PTR_FUN_110b13f68;
  uStack_4c8 = 8;
  uStack_4b0 = NEON_fmov(0x3f800000,4);
  uStack_4b8 = 0xffffffffffffffff;
  uStack_4a4 = 0;
  uStack_494 = 0;
  uStack_49c = 0;
  uStack_4a8 = 0x3f800000;
  uStack_48c = 0;
  pppuVar5 = *(undefined ****)(param_3 + 8);
  puVar7 = *(undefined8 **)(param_3 + 0x18);
  iVar11 = *(int *)(pppuVar5 + 1);
  if (iVar11 < 0x14) {
    ppuStack_5a0 = &PTR_DAT_110b12390;
    uStack_4e8 = 0;
    uStack_4e0 = 0x2000000000;
    uStack_4d8 = 0x38d1b717;
    fStack_4f0 = *(float *)(param_4 + 1);
    uStack_340 = 0x38d1b717;
    uStack_320 = 0;
    ppuStack_5f0 = &PTR_FUN_110b14298;
    ppuStack_5e8 = apuStack_480;
    pppuStack_5e0 = &ppuStack_4d0;
    pppuStack_5d8 = pppuVar5;
    ppuStack_610 = &PTR_FUN_110b14108;
    ppuStack_608 = apuStack_480;
    pppuStack_600 = &ppuStack_4d0;
    pppuStack_5f8 = pppuVar5;
    pppuVar5 = &ppuStack_5f0;
    if (((ulong)param_4[4] & 8) != 0) {
      pppuVar5 = &ppuStack_610;
    }
    (*(code *)(*pppuVar5)[2])();
    if ((int)pppuVar5 != 0) {
      fVar14 = SUB84(ppuStack_510,0);
      auVar15._0_4_ = fVar14 * fVar14;
      fVar17 = (float)((ulong)ppuStack_510 >> 0x20);
      auVar15._4_4_ = fVar17 * fVar17;
      fVar18 = (float)uStack_508;
      auVar15._8_4_ = fVar18 * fVar18;
      fVar20 = (float)(uStack_508 >> 0x20);
      auVar15._12_4_ = fVar20 * fVar20;
      auVar16 = NEON_ext(auVar15,auVar15,8,1);
      fVar19 = auVar15._0_4_ + auVar15._4_4_ + auVar16._0_4_;
      if ((0.0001 < fVar19) && (fStack_4f0 < *(float *)(param_4 + 1))) {
        fVar19 = 1.0 / SQRT(fVar19);
        ppuStack_5c0 = (undefined **)CONCAT44(fVar17 * fVar19,fVar14 * fVar19);
        uStack_5b8 = CONCAT44(fVar20 * fVar19,fVar18 * fVar19);
        uStack_5d0._0_4_ = (undefined4)*(undefined8 *)(param_3 + 0x10);
        uStack_5d0._4_4_ = (uint)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        fStack_5b0 = fStack_4f0;
        ppuStack_510 = ppuStack_5c0;
        uStack_508 = uStack_5b8;
        (*(code *)(*param_4)[3])(param_4,&uStack_5d0,1);
        pppuVar5 = param_4;
      }
    }
  }
  else {
    if (iVar11 - 0x15U < 9) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010980877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppuVar5)[0x11])
                  (pppuVar5,param_1 + 0x30,param_2 + 0x30,*(undefined8 *)(param_3 + 0x10),puVar7,
                   param_4);
        return;
      }
      goto LAB_109808ae0;
    }
    if (iVar11 == 0x1f) {
      uStack_598 = *(undefined8 *)(param_3 + 0x10);
      ppuStack_5a0 = &PTR_FUN_110b123d8;
      pppuStack_590 = pppuVar5;
      puStack_588 = puVar7;
      lStack_580 = param_1;
      lStack_578 = param_2;
      pppuStack_570 = param_4;
      if (pppuVar5[0xc] == (undefined **)0x0) {
        iVar11 = *(int *)((long)pppuVar5 + 0x24);
        if (0 < iVar11) {
          iVar10 = 0;
          do {
            pppuVar5 = &ppuStack_5a0;
            FUN_109808b10(pppuVar5,iVar10);
            iVar10 = iVar10 + 1;
          } while (iVar11 != iVar10);
        }
      }
      else {
        puVar8 = *pppuVar5[0xc];
        if (puVar8 != (undefined *)0x0) {
          fVar14 = *(float *)(param_1 + 0x30) - *(float *)(puVar7 + 6);
          fVar17 = *(float *)(param_1 + 0x34) - *(float *)((long)puVar7 + 0x34);
          fVar18 = *(float *)(param_1 + 0x38) - *(float *)(puVar7 + 7);
          fVar20 = (float)*(undefined8 *)(param_2 + 0x30) - *(float *)(puVar7 + 6);
          fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) -
                   *(float *)((long)puVar7 + 0x34);
          fVar24 = (float)*(undefined8 *)(param_2 + 0x38) - *(float *)(puVar7 + 7);
          fVar23 = (float)puVar7[4];
          fVar25 = (float)((ulong)puVar7[4] >> 0x20);
          fVar28 = (float)*puVar7;
          fVar29 = (float)((ulong)*puVar7 >> 0x20);
          fVar30 = (float)puVar7[2];
          fVar32 = (float)((ulong)puVar7[2] >> 0x20);
          fVar33 = fVar23 * fVar18 + fVar28 * fVar14 + fVar30 * fVar17;
          fVar34 = fVar25 * fVar18 + fVar29 * fVar14 + fVar32 * fVar17;
          fVar35 = (float)puVar7[5] * fVar18 + (float)puVar7[1] * fVar14 + (float)puVar7[3] * fVar17
          ;
          fVar17 = (fVar23 * fVar24 + fVar28 * fVar20 + fVar30 * fVar19) - fVar33;
          fVar18 = (fVar25 * fVar24 + fVar29 * fVar20 + fVar32 * fVar19) - fVar34;
          fVar20 = ((float)puVar7[5] * fVar24 +
                   (float)puVar7[1] * fVar20 + (float)puVar7[3] * fVar19) - fVar35;
          auVar16._0_4_ = fVar17 * fVar17;
          auVar16._4_4_ = fVar18 * fVar18;
          auVar16._8_4_ = fVar20 * fVar20;
          auVar16._12_4_ = 0;
          auVar22 = NEON_ext(auVar16,auVar16,8,1);
          fVar19 = 1.0 / SQRT(auVar16._0_4_ + auVar16._4_4_ + auVar22._0_4_);
          fVar24 = fVar17 * fVar19;
          fVar23 = fVar18 * fVar19;
          fVar25 = fVar20 * fVar19;
          fVar14 = 1e+18;
          if (fVar25 != 0.0) {
            fVar14 = 1.0 / fVar25;
          }
          auVar22._0_4_ = fVar24 * fVar17;
          auVar22._4_4_ = fVar23 * fVar18;
          auVar22._8_4_ = fVar25 * fVar20;
          auVar22._12_4_ = fVar19 * 0.0 * 0.0;
          auVar16 = NEON_ext(auVar22,auVar22,8,1);
          uStack_5b8 = uStack_5b8 & 0xffffffffffffff00;
          ppuStack_5c0 = apuStack_480;
          uStack_5d0._4_4_ = 0x80;
          uStack_5c8 = 0x80;
          uVar36 = CONCAT44((float)((ulong)uStack_4b0 >> 0x20) / fVar23,(float)uStack_4b0 / fVar24);
          uVar36 = uVar36 ^ (uVar36 ^ 0x5d5e0b6b5d5e0b6b) &
                            CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar24 == 0.0));
          iVar11 = 0x7e;
          fVar17 = (float)uVar36;
          fVar18 = (float)(uVar36 >> 0x20);
          uVar37 = CONCAT44(-(uint)(fVar18 < 0.0),-(uint)(fVar17 < 0.0));
          uVar36 = 1;
          apuStack_480[0] = puVar8;
          do {
            while( true ) {
              uVar1 = uStack_5d0._4_4_;
              iVar10 = (int)uVar36;
              uVar36 = (long)iVar10 - 1;
              puVar7 = (undefined8 *)ppuStack_5c0[uVar36];
              auVar15 = *(undefined1 (*) [16])(puVar7 + 2);
              uVar26 = CONCAT44((int)((ulong)*puVar7 >> 0x20),auVar15._0_4_);
              uVar27 = CONCAT44(auVar15._4_4_,(int)*puVar7);
              uVar21 = uVar26 ^ (uVar26 ^ uVar27) & uVar37;
              fVar24 = fVar17 * ((float)uVar21 - fVar33);
              fVar19 = fVar18 * ((float)(uVar21 >> 0x20) - fVar34);
              uVar26 = uVar26 ^ (uVar26 ^ uVar27) & ~uVar37;
              fVar23 = fVar17 * ((float)uVar26 - fVar33);
              fVar20 = fVar18 * ((float)(uVar26 >> 0x20) - fVar34);
              bVar2 = false;
              bVar3 = false;
              bVar4 = false;
              if (fVar23 <= fVar20) {
                bVar2 = false;
                bVar3 = false;
                bVar4 = true;
                if (!NAN(fVar19) && !NAN(fVar24)) {
                  bVar2 = fVar19 < fVar24;
                  bVar3 = fVar19 == fVar24;
                  bVar4 = false;
                }
              }
              if (bVar3 || bVar2 != bVar4) break;
LAB_1098089fc:
              if ((int)uVar36 == 0) goto LAB_109808a70;
            }
            uVar31 = NEON_rev64(CONCAT44(fVar19,fVar24),4);
            if ((float)uVar31 <= fVar23) {
              fVar19 = fVar23;
            }
            if ((float)((ulong)uVar31 >> 0x20) <= fVar20) {
              fVar20 = fVar24;
            }
            fVar24 = (float)puVar7[1];
            if (fVar14 < 0.0) {
              fVar24 = auVar15._8_4_;
            }
            fVar24 = fVar14 * (fVar24 - fVar35);
            fVar23 = auVar15._8_4_;
            if (fVar14 < 0.0) {
              fVar23 = (float)puVar7[1];
            }
            fVar23 = fVar14 * (fVar23 - fVar35);
            bVar2 = false;
            bVar3 = false;
            bVar4 = false;
            if (fVar19 <= fVar23) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar24) && !NAN(fVar20)) {
                bVar2 = fVar24 < fVar20;
                bVar3 = fVar24 == fVar20;
                bVar4 = false;
              }
            }
            if (!bVar3 && bVar2 == bVar4) goto LAB_1098089fc;
            if (fVar24 <= fVar19) {
              fVar24 = fVar19;
            }
            if (fVar20 <= fVar23) {
              fVar23 = fVar20;
            }
            if ((auVar22._0_4_ + auVar22._4_4_ + auVar16._0_4_ <= fVar24) || (fVar23 <= 0.0))
            goto LAB_1098089fc;
            if (puVar7[6] == 0) {
              (*(code *)ppuStack_5a0[3])(&ppuStack_5a0,puVar7);
              goto LAB_1098089fc;
            }
            if (iVar11 < (int)uVar36) {
              lVar13 = (long)(int)uStack_5d0._4_4_;
              uVar12 = (uint)(lVar13 << 1);
              if ((int)uStack_5d0._4_4_ <= (int)uVar12) {
                if (((int)uStack_5d0._4_4_ < (int)uVar12) && ((int)uStack_5c8 < (int)uVar12)) {
                  if (uStack_5d0._4_4_ == 0) {
                    ppuVar6 = (undefined **)0x0;
                  }
                  else {
                    ppuVar6 = (undefined **)(lVar13 << 4);
                    FUN_1098256f4(ppuVar6,0x10);
                    if (0 < (int)uStack_5d0._4_4_) {
                      lVar9 = 0;
                      do {
                        *(undefined8 *)((long)ppuVar6 + lVar9) =
                             *(undefined8 *)((long)ppuStack_5c0 + lVar9);
                        lVar9 = lVar9 + 8;
                      } while ((ulong)uStack_5d0._4_4_ * 8 - lVar9 != 0);
                    }
                  }
                  if ((ppuStack_5c0 != (undefined **)0x0) && ((uStack_5b8 & 1) != 0)) {
                    FUN_109825740();
                  }
                  uStack_5b8 = CONCAT71(uStack_5b8._1_7_,1);
                  uStack_5c8 = uVar12;
                  ppuStack_5c0 = ppuVar6;
                }
                if ((int)uVar1 < (int)uVar12) {
                  do {
                    ppuStack_5c0[lVar13] = (undefined *)0x0;
                    lVar13 = lVar13 + 1;
                  } while ((int)uVar12 != lVar13);
                }
              }
              iVar11 = uVar12 - 2;
              uStack_5d0._4_4_ = uVar12;
            }
            ppuStack_5c0[uVar36] = (undefined *)puVar7[5];
            uVar36 = (ulong)(iVar10 + 1U);
            ppuStack_5c0[iVar10] = (undefined *)puVar7[6];
          } while (iVar10 + 1U != 0);
LAB_109808a70:
          pppuVar5 = (undefined ***)&uStack_5d0;
          FUN_10980246c(pppuVar5);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
LAB_109808ae0:
  ___stack_chk_fail();
  FUN_10980246c(&uStack_5d0);
  __Unwind_Resume(pppuVar5);
  return;
}



/* Entry: 109808b0c; end: 109808b0f;  */

void FUN_109808b0c(void)

{
  return;
}



/* Entry: 109808b10; end: 109808c27;  */

void FUN_109808b10(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_70 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + (long)param_2 * 0x60);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  puStack_68 = &uStack_50;
  fVar13 = (float)puVar3[7];
  fVar10 = (float)((ulong)puVar3[7] >> 0x20);
  fVar20 = (float)puVar3[6];
  fVar21 = (float)((ulong)puVar3[6] >> 0x20);
  uStack_78 = puVar3[8];
  fVar4 = (float)*puVar1;
  auVar22._0_4_ = fVar4 * fVar20;
  fVar5 = (float)((ulong)*puVar1 >> 0x20);
  auVar22._4_4_ = fVar5 * fVar21;
  fVar6 = (float)puVar1[1];
  auVar22._8_4_ = fVar6 * fVar13;
  auVar22._12_4_ = (float)((ulong)puVar1[1] >> 0x20) * fVar10;
  fVar7 = (float)puVar1[2];
  auVar24._0_4_ = fVar7 * fVar20;
  fVar8 = (float)((ulong)puVar1[2] >> 0x20);
  auVar24._4_4_ = fVar8 * fVar21;
  fVar9 = (float)puVar1[3];
  auVar24._8_4_ = fVar9 * fVar13;
  auVar24._12_4_ = (float)((ulong)puVar1[3] >> 0x20) * fVar10;
  auVar23 = NEON_ext(auVar22,auVar22,8,1);
  auVar25 = NEON_ext(auVar24,auVar24,8,1);
  fVar10 = (float)puVar1[4];
  fVar20 = fVar10 * fVar20;
  fVar11 = (float)((ulong)puVar1[4] >> 0x20);
  fVar21 = fVar11 * fVar21;
  fVar12 = (float)puVar1[5];
  auVar26._4_4_ = fVar21;
  auVar26._0_4_ = fVar20;
  auVar26._8_4_ = fVar12 * fVar13;
  auVar26._12_4_ = 0;
  auVar2._4_4_ = fVar21;
  auVar2._0_4_ = fVar20;
  auVar2._8_4_ = fVar12 * fVar13;
  auVar2._12_4_ = 0;
  auVar26 = NEON_ext(auVar26,auVar2,8,1);
  uStack_20 = CONCAT44((float)((ulong)puVar1[6] >> 0x20) +
                       auVar24._0_4_ + auVar24._4_4_ + auVar25._0_4_,
                       (float)puVar1[6] + auVar22._0_4_ + auVar22._4_4_ + auVar23._0_4_);
  uStack_18 = CONCAT44((float)((ulong)puVar1[7] >> 0x20) + 0.0,
                       (float)puVar1[7] + fVar20 + fVar21 + auVar26._0_4_ + auVar26._4_4_);
  fVar19 = (float)puVar3[5];
  fVar16 = (float)puVar3[3];
  fVar13 = (float)puVar3[1];
  fVar20 = (float)*puVar3;
  fVar21 = (float)((ulong)*puVar3 >> 0x20);
  fVar14 = (float)puVar3[2];
  fVar15 = (float)((ulong)puVar3[2] >> 0x20);
  fVar17 = (float)puVar3[4];
  fVar18 = (float)((ulong)puVar3[4] >> 0x20);
  uStack_40 = CONCAT44(fVar21 * fVar7 + fVar15 * fVar8 + fVar18 * fVar9,
                       fVar20 * fVar7 + fVar14 * fVar8 + fVar17 * fVar9);
  uStack_38 = CONCAT44(fVar7 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0,
                       fVar13 * fVar7 + fVar16 * fVar8 + fVar19 * fVar9);
  uStack_50 = CONCAT44(fVar21 * fVar4 + fVar15 * fVar5 + fVar18 * fVar6,
                       fVar20 * fVar4 + fVar14 * fVar5 + fVar17 * fVar6);
  uStack_48 = CONCAT44(fVar4 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0,
                       fVar13 * fVar4 + fVar16 * fVar5 + fVar19 * fVar6);
  uStack_28 = CONCAT44(fVar10 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0,
                       fVar13 * fVar10 + fVar16 * fVar11 + fVar19 * fVar12);
  uStack_30 = CONCAT44(fVar21 * fVar10 + fVar15 * fVar11 + fVar18 * fVar12,
                       fVar20 * fVar10 + fVar14 * fVar11 + fVar17 * fVar12);
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_a8 = 0;
  uStack_a0 = 0xffffffff00000001;
  ppuStack_b8 = &PTR_DAT_110b12440;
  lStack_90 = *(long *)(param_1 + 0x30);
  uStack_b0 = *(undefined4 *)(lStack_90 + 8);
  uStack_98 = *(undefined4 *)(lStack_90 + 0x20);
  iStack_88 = param_2;
  iStack_54 = param_2;
  FUN_109808594(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&uStack_80,
                &ppuStack_b8);
  return;
}



/* Entry: 109808c28; end: 109808c2b;  */

void FUN_109808c28(void)

{
  return;
}



/* Entry: 109808c2c; end: 109809113;  */

void FUN_109808c2c(undefined4 param_1,undefined ***param_2,undefined ***param_3,undefined ***param_4
                  ,float *param_5,undefined ***param_6)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined ***pppuVar37;
  undefined4 uVar38;
  undefined ***pppuVar39;
  undefined ***pppuVar40;
  float *pfVar41;
  float *pfVar42;
  undefined ***pppuVar43;
  long *plVar44;
  long lVar45;
  float *pfVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined8 extraout_d3;
  undefined1 in_q3 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined8 extraout_var;
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar76;
  float fVar77;
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined **ppuStack_408;
  float *pfStack_400;
  undefined *puStack_3f8;
  float *pfStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3cc;
  undefined **ppuStack_3c0;
  undefined4 uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  undefined1 *puStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined **ppuStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined **ppuStack_340;
  undefined8 *puStack_338;
  undefined ***pppuStack_330;
  undefined ***pppuStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  float fStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  long *plStack_2a0;
  float *pfStack_298;
  undefined ***pppuStack_290;
  undefined4 uStack_190;
  undefined1 uStack_170;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  undefined1 auVar60 [16];
  undefined1 auVar66 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar62 [16];
  undefined1 auVar68 [16];
  
  pfVar41 = (float *)&uStack_360;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar44 = *(long **)(param_5 + 2);
  pfVar46 = *(float **)(param_5 + 6);
  iVar3 = (int)plVar44[1];
  if (iVar3 < 0x14) {
    ppuStack_140 = &PTR_DAT_110b12390;
    uStack_88 = 0;
    uStack_7c = 0x38d1b71700000020;
    fStack_90 = *(float *)(param_6 + 1);
    uStack_190 = 0x38d1b717;
    uStack_170 = 0;
    ppuStack_350 = &PTR_FUN_110b14148;
    puStack_338 = &uStack_2d0;
    ppuStack_340 = &PTR_DAT_110b14068;
    pppuStack_330 = &ppuStack_350;
    uStack_318 = 0;
    pppuVar37 = &ppuStack_340;
    pppuStack_328 = param_2;
    plStack_320 = plVar44;
    uStack_80 = param_1;
    FUN_10981d578();
    pppuVar39 = param_3;
    pppuVar40 = param_4;
    pfVar42 = pfVar46;
    if ((int)pppuVar37 != 0) {
      auVar49._0_4_ = fStack_b0 * fStack_b0;
      auVar49._4_4_ = fStack_ac * fStack_ac;
      auVar49._8_4_ = fStack_a8 * fStack_a8;
      auVar49._12_4_ = fStack_a4 * fStack_a4;
      auVar50 = NEON_ext(auVar49,auVar49,8,1);
      fVar4 = auVar49._0_4_ + auVar49._4_4_ + auVar50._0_4_;
      if ((0.0001 < fVar4) && (fStack_90 < *(float *)(param_6 + 1))) {
        fStack_2f4 = 1.0 / SQRT(fVar4);
        fStack_300 = fStack_b0 * fStack_2f4;
        fStack_2fc = fStack_ac * fStack_2f4;
        fStack_2f8 = fStack_a8 * fStack_2f4;
        fStack_2f4 = fStack_a4 * fStack_2f4;
        ppuStack_310 = *(undefined ***)(param_5 + 4);
        uStack_308 = 0;
        uStack_2e8 = uStack_98;
        uStack_2f0 = uStack_a0;
        fStack_2e0 = fStack_90;
        pppuVar39 = &ppuStack_310;
        pppuVar40 = (undefined ***)0x1;
        fStack_b0 = fStack_300;
        fStack_ac = fStack_2fc;
        fStack_a8 = fStack_2f8;
        fStack_a4 = fStack_2f4;
        (*(code *)(*param_6)[3])();
        pppuVar37 = param_6;
        pfVar42 = pfVar46;
      }
    }
  }
  else {
    if (iVar3 - 0x15U < 9) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000109808df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar44 + 0x90))
                  (plVar44,param_2,param_3,param_4,*(undefined8 *)(param_5 + 4),pfVar46,param_6);
        return;
      }
      goto LAB_1098090f8;
    }
    pppuVar37 = param_2;
    pppuVar39 = param_3;
    pppuVar40 = param_4;
    pfVar42 = param_5;
    if (iVar3 == 0x1f) {
      fVar23 = *pfVar46;
      fVar24 = pfVar46[1];
      fVar25 = pfVar46[2];
      fVar26 = pfVar46[4];
      fVar74 = pfVar46[5];
      fVar76 = pfVar46[6];
      pfVar42 = pfVar46 + 8;
      uVar20 = *(undefined8 *)(pfVar46 + 10);
      uVar53 = (undefined1)((ulong)uVar20 >> 8);
      uVar54 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar55 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar56 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar57 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar58 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar71 = (undefined1)((ulong)uVar20 >> 0x38);
      auVar59._4_12_ = in_q3._4_12_;
      auVar59._0_4_ = fVar23;
      auVar61._12_4_ = in_q3._12_4_;
      auVar61._0_8_ = auVar59._0_8_;
      auVar61._8_4_ = fVar25;
      auVar60._8_8_ = auVar61._8_8_;
      auVar60._4_4_ = fVar26;
      auVar60._0_4_ = fVar23;
      auVar62._0_12_ = auVar60._0_12_;
      auVar62._12_4_ = fVar76;
      fVar22 = (float)((ulong)*(undefined8 *)pfVar42 >> 0x20);
      auVar6[9] = uVar53;
      auVar6._0_9_ = *(unkbyte9 *)pfVar42;
      auVar6[10] = uVar54;
      auVar6[0xb] = uVar55;
      auVar6[0xc] = uVar56;
      auVar6[0xd] = uVar57;
      auVar6[0xe] = uVar58;
      auVar6[0xf] = uVar71;
      auVar7[9] = uVar53;
      auVar7._0_9_ = *(unkbyte9 *)pfVar42;
      auVar7[10] = uVar54;
      auVar7[0xb] = uVar55;
      auVar7[0xc] = uVar56;
      auVar7[0xd] = uVar57;
      auVar7[0xe] = uVar58;
      auVar7[0xf] = uVar71;
      auVar75 = NEON_ext(auVar6,auVar7,8,1);
      fVar77 = *(float *)param_3;
      fVar27 = *(float *)((long)param_3 + 4);
      fVar28 = *(float *)(param_3 + 1);
      fVar29 = *(float *)(param_3 + 2);
      fVar30 = *(float *)((long)param_3 + 0x14);
      fVar31 = *(float *)(param_3 + 3);
      fVar32 = *(float *)(param_3 + 4);
      fVar33 = *(float *)((long)param_3 + 0x24);
      fVar34 = *(float *)(param_3 + 5);
      uStack_2c0 = (undefined ***)
                   CONCAT44(fVar27 * fVar24 + fVar30 * fVar74 + fVar33 * fVar22,
                            fVar77 * fVar24 + fVar29 * fVar74 + fVar32 * fVar22);
      uStack_2b8 = (undefined ***)
                   CONCAT44(fVar24 * 0.0 + fVar74 * 0.0 + fVar22 * 0.0,
                            fVar28 * fVar24 + fVar31 * fVar74 + fVar34 * fVar22);
      fVar5 = (float)*(undefined8 *)pfVar42;
      fVar19 = (float)uVar20;
      auVar82 = NEON_ext(auVar62,auVar62,8,1);
      fVar84 = (float)*(undefined8 *)(pfVar46 + 0xc);
      fVar18 = fVar23 * -fVar84;
      fVar85 = (float)((ulong)*(undefined8 *)(pfVar46 + 0xc) >> 0x20);
      fVar86 = fVar26 * -fVar85;
      uVar53 = (undefined1)((uint)fVar86 >> 8);
      uVar54 = (undefined1)((uint)fVar86 >> 0x10);
      uVar55 = (undefined1)((uint)fVar86 >> 0x18);
      fVar87 = (float)*(undefined8 *)(pfVar46 + 0xe);
      fVar4 = fVar5 * -fVar87;
      uVar56 = (undefined1)((uint)fVar4 >> 8);
      uVar57 = (undefined1)((uint)fVar4 >> 0x10);
      uVar58 = (undefined1)((uint)fVar4 >> 0x18);
      fVar88 = (float)((ulong)*(undefined8 *)(pfVar46 + 0xe) >> 0x20);
      fVar21 = -fVar88 * 0.0;
      uVar71 = (undefined1)((uint)fVar21 >> 8);
      uVar70 = (undefined1)((uint)fVar21 >> 0x10);
      uVar72 = (undefined1)((uint)fVar21 >> 0x18);
      auVar51._0_4_ = fVar24 * -fVar84;
      auVar51._4_4_ = fVar74 * -fVar85;
      auVar51._8_4_ = fVar22 * -fVar87;
      auVar51._12_4_ = -fVar88 * 0.0;
      auVar8[4] = SUB41(fVar86,0);
      auVar8._0_4_ = fVar18;
      auVar8[5] = uVar53;
      auVar8[6] = uVar54;
      auVar8[7] = uVar55;
      auVar8[8] = SUB41(fVar4,0);
      auVar8[9] = uVar56;
      auVar8[10] = uVar57;
      auVar8[0xb] = uVar58;
      auVar8[0xc] = SUB41(fVar21,0);
      auVar8[0xd] = uVar71;
      auVar8[0xe] = uVar70;
      auVar8[0xf] = uVar72;
      auVar9[4] = SUB41(fVar86,0);
      auVar9._0_4_ = fVar18;
      auVar9[5] = uVar53;
      auVar9[6] = uVar54;
      auVar9[7] = uVar55;
      auVar9[8] = SUB41(fVar4,0);
      auVar9[9] = uVar56;
      auVar9[10] = uVar57;
      auVar9[0xb] = uVar58;
      auVar9[0xc] = SUB41(fVar21,0);
      auVar9[0xd] = uVar71;
      auVar9[0xe] = uVar70;
      auVar9[0xf] = uVar72;
      auVar81 = NEON_ext(auVar8,auVar9,8,1);
      auVar83 = NEON_ext(auVar51,auVar51,8,1);
      fVar4 = auVar82._0_4_ * -fVar84;
      fVar21 = auVar82._4_4_ * -fVar85;
      uVar53 = (undefined1)((uint)fVar21 >> 8);
      uVar54 = (undefined1)((uint)fVar21 >> 0x10);
      uVar55 = (undefined1)((uint)fVar21 >> 0x18);
      fVar84 = auVar75._0_4_ * -fVar87;
      uVar56 = (undefined1)((uint)fVar84 >> 8);
      uVar57 = (undefined1)((uint)fVar84 >> 0x10);
      uVar58 = (undefined1)((uint)fVar84 >> 0x18);
      auVar50[4] = SUB41(fVar21,0);
      auVar50._0_4_ = fVar4;
      auVar50[5] = uVar53;
      auVar50[6] = uVar54;
      auVar50[7] = uVar55;
      auVar50[8] = SUB41(fVar84,0);
      auVar50[9] = uVar56;
      auVar50[10] = uVar57;
      auVar50[0xb] = uVar58;
      auVar50._12_4_ = 0;
      auVar79[4] = SUB41(fVar21,0);
      auVar79._0_4_ = fVar4;
      auVar79[5] = uVar53;
      auVar79[6] = uVar54;
      auVar79[7] = uVar55;
      auVar79[8] = SUB41(fVar84,0);
      auVar79[9] = uVar56;
      auVar79[10] = uVar57;
      auVar79[0xb] = uVar58;
      auVar79._12_4_ = 0;
      auVar79 = NEON_ext(auVar50,auVar79,8,1);
      fVar84 = SUB84(param_3[6],0);
      auVar63._0_4_ = fVar23 * fVar84;
      fVar85 = (float)((ulong)param_3[6] >> 0x20);
      auVar63._4_4_ = fVar26 * fVar85;
      fVar87 = SUB84(param_3[7],0);
      auVar63._8_4_ = fVar5 * fVar87;
      fVar88 = (float)((ulong)param_3[7] >> 0x20);
      auVar63._12_4_ = fVar88 * 0.0;
      auVar47._0_4_ = fVar24 * fVar84;
      auVar47._4_4_ = fVar74 * fVar85;
      auVar47._8_4_ = fVar22 * fVar87;
      auVar47._12_4_ = fVar88 * 0.0;
      fVar84 = auVar82._0_4_ * fVar84;
      fVar85 = auVar82._4_4_ * fVar85;
      uVar53 = (undefined1)((uint)fVar85 >> 8);
      uVar54 = (undefined1)((uint)fVar85 >> 0x10);
      uVar55 = (undefined1)((uint)fVar85 >> 0x18);
      fVar87 = auVar75._0_4_ * fVar87;
      uVar56 = (undefined1)((uint)fVar87 >> 8);
      uVar57 = (undefined1)((uint)fVar87 >> 0x10);
      uVar58 = (undefined1)((uint)fVar87 >> 0x18);
      auVar75 = NEON_ext(auVar47,auVar47,8,1);
      auVar10[4] = SUB41(fVar85,0);
      auVar10._0_4_ = fVar84;
      auVar10[5] = uVar53;
      auVar10[6] = uVar54;
      auVar10[7] = uVar55;
      auVar10[8] = SUB41(fVar87,0);
      auVar10[9] = uVar56;
      auVar10[10] = uVar57;
      auVar10[0xb] = uVar58;
      auVar10._12_4_ = 0;
      auVar11[4] = SUB41(fVar85,0);
      auVar11._0_4_ = fVar84;
      auVar11[5] = uVar53;
      auVar11[6] = uVar54;
      auVar11[7] = uVar55;
      auVar11[8] = SUB41(fVar87,0);
      auVar11[9] = uVar56;
      auVar11[10] = uVar57;
      auVar11[0xb] = uVar58;
      auVar11._12_4_ = 0;
      auVar82 = NEON_ext(auVar10,auVar11,8,1);
      auVar50 = NEON_ext(auVar63,auVar63,8,1);
      plStack_2a0 = (long *)CONCAT44(auVar51._0_4_ + auVar51._4_4_ + auVar83._0_4_ +
                                     auVar47._0_4_ + auVar47._4_4_ + auVar75._0_4_,
                                     fVar18 + fVar86 + auVar81._0_4_ +
                                     auVar63._0_4_ + auVar63._4_4_ + auVar50._0_4_);
      uStack_2c8 = (float *)CONCAT44(fVar23 * 0.0 + fVar26 * 0.0 + fVar5 * 0.0,
                                     fVar28 * fVar23 + fVar31 * fVar26 + fVar34 * fVar5);
      uStack_2d0 = (undefined **)
                   CONCAT44(fVar27 * fVar23 + fVar30 * fVar26 + fVar33 * fVar5,
                            fVar77 * fVar23 + fVar29 * fVar26 + fVar32 * fVar5);
      _fStack_2a8 = CONCAT44(fVar25 * 0.0 + fVar76 * 0.0 + fVar19 * 0.0,
                             fVar28 * fVar25 + fVar31 * fVar76 + fVar34 * fVar19);
      uStack_2b0 = (undefined ***)
                   CONCAT44(fVar27 * fVar25 + fVar30 * fVar76 + fVar33 * fVar19,
                            fVar77 * fVar25 + fVar29 * fVar76 + fVar32 * fVar19);
      pfStack_298 = (float *)(ulong)(uint)(fVar4 + fVar21 + auVar79._0_4_ + auVar79._4_4_ +
                                          fVar84 + fVar85 + auVar82._0_4_ + auVar82._4_4_);
      (*(code *)(*param_2)[2])(param_2,&uStack_2d0,&ppuStack_310,&ppuStack_340);
      auVar64._8_8_ = extraout_var;
      auVar64._0_8_ = extraout_d3;
      fVar22 = *pfVar46;
      fVar23 = pfVar46[1];
      fVar21 = pfVar46[2];
      fVar30 = pfVar46[4];
      fVar31 = pfVar46[5];
      fVar84 = pfVar46[6];
      pfVar42 = pfVar46 + 8;
      uVar20 = *(undefined8 *)(pfVar46 + 10);
      uVar53 = (undefined1)((ulong)uVar20 >> 8);
      uVar54 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar55 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar56 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar57 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar58 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar71 = (undefined1)((ulong)uVar20 >> 0x38);
      auVar65._4_12_ = auVar64._4_12_;
      auVar65._0_4_ = fVar22;
      auVar67._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
      auVar67._0_8_ = auVar65._0_8_;
      auVar67._8_4_ = fVar21;
      auVar66._8_8_ = auVar67._8_8_;
      auVar66._4_4_ = fVar30;
      auVar66._0_4_ = fVar22;
      auVar68._0_12_ = auVar66._0_12_;
      auVar68._12_4_ = fVar84;
      fVar88 = (float)((ulong)*(undefined8 *)pfVar42 >> 0x20);
      fVar24 = *(float *)param_4;
      fVar25 = *(float *)((long)param_4 + 4);
      fVar26 = *(float *)(param_4 + 1);
      fVar74 = *(float *)(param_4 + 2);
      fVar76 = *(float *)((long)param_4 + 0x14);
      fVar77 = *(float *)(param_4 + 3);
      auVar12[9] = uVar53;
      auVar12._0_9_ = *(unkbyte9 *)pfVar42;
      auVar12[10] = uVar54;
      auVar12[0xb] = uVar55;
      auVar12[0xc] = uVar56;
      auVar12[0xd] = uVar57;
      auVar12[0xe] = uVar58;
      auVar12[0xf] = uVar71;
      auVar13[9] = uVar53;
      auVar13._0_9_ = *(unkbyte9 *)pfVar42;
      auVar13[10] = uVar54;
      auVar13[0xb] = uVar55;
      auVar13[0xc] = uVar56;
      auVar13[0xd] = uVar57;
      auVar13[0xe] = uVar58;
      auVar13[0xf] = uVar71;
      auVar82 = NEON_ext(auVar12,auVar13,8,1);
      fVar27 = *(float *)(param_4 + 4);
      fVar28 = *(float *)((long)param_4 + 0x24);
      fVar29 = *(float *)(param_4 + 5);
      fVar5 = (float)*(undefined8 *)pfVar42;
      fVar4 = (float)uVar20;
      uStack_2b0 = (undefined ***)
                   CONCAT44(fVar25 * fVar21 + fVar76 * fVar84 + fVar28 * fVar4,
                            fVar24 * fVar21 + fVar74 * fVar84 + fVar27 * fVar4);
      fStack_2a8 = fVar26 * fVar21 + fVar77 * fVar84 + fVar29 * fVar4;
      fStack_2a4 = fVar21 * 0.0 + fVar84 * 0.0 + fVar4 * 0.0;
      auVar50 = NEON_ext(auVar68,auVar68,8,1);
      fVar84 = (float)*(undefined8 *)(pfVar46 + 0xc);
      fVar19 = fVar22 * -fVar84;
      fVar86 = (float)((ulong)*(undefined8 *)(pfVar46 + 0xc) >> 0x20);
      fVar18 = fVar30 * -fVar86;
      uVar53 = (undefined1)((uint)fVar18 >> 8);
      uVar54 = (undefined1)((uint)fVar18 >> 0x10);
      uVar55 = (undefined1)((uint)fVar18 >> 0x18);
      fVar85 = (float)*(undefined8 *)(pfVar46 + 0xe);
      fVar4 = fVar5 * -fVar85;
      uVar56 = (undefined1)((uint)fVar4 >> 8);
      uVar57 = (undefined1)((uint)fVar4 >> 0x10);
      uVar58 = (undefined1)((uint)fVar4 >> 0x18);
      fVar87 = (float)((ulong)*(undefined8 *)(pfVar46 + 0xe) >> 0x20);
      fVar21 = -fVar87 * 0.0;
      uVar71 = (undefined1)((uint)fVar21 >> 8);
      uVar70 = (undefined1)((uint)fVar21 >> 0x10);
      uVar72 = (undefined1)((uint)fVar21 >> 0x18);
      auVar52._0_4_ = fVar23 * -fVar84;
      auVar52._4_4_ = fVar31 * -fVar86;
      auVar52._8_4_ = fVar88 * -fVar85;
      auVar52._12_4_ = -fVar87 * 0.0;
      auVar14[4] = SUB41(fVar18,0);
      auVar14._0_4_ = fVar19;
      auVar14[5] = uVar53;
      auVar14[6] = uVar54;
      auVar14[7] = uVar55;
      auVar14[8] = SUB41(fVar4,0);
      auVar14[9] = uVar56;
      auVar14[10] = uVar57;
      auVar14[0xb] = uVar58;
      auVar14[0xc] = SUB41(fVar21,0);
      auVar14[0xd] = uVar71;
      auVar14[0xe] = uVar70;
      auVar14[0xf] = uVar72;
      auVar15[4] = SUB41(fVar18,0);
      auVar15._0_4_ = fVar19;
      auVar15[5] = uVar53;
      auVar15[6] = uVar54;
      auVar15[7] = uVar55;
      auVar15[8] = SUB41(fVar4,0);
      auVar15[9] = uVar56;
      auVar15[10] = uVar57;
      auVar15[0xb] = uVar58;
      auVar15[0xc] = SUB41(fVar21,0);
      auVar15[0xd] = uVar71;
      auVar15[0xe] = uVar70;
      auVar15[0xf] = uVar72;
      auVar79 = NEON_ext(auVar14,auVar15,8,1);
      auVar83 = NEON_ext(auVar52,auVar52,8,1);
      fVar4 = auVar50._0_4_ * -fVar84;
      fVar21 = auVar50._4_4_ * -fVar86;
      uVar53 = (undefined1)((uint)fVar21 >> 8);
      uVar54 = (undefined1)((uint)fVar21 >> 0x10);
      uVar55 = (undefined1)((uint)fVar21 >> 0x18);
      fVar84 = auVar82._0_4_ * -fVar85;
      uVar56 = (undefined1)((uint)fVar84 >> 8);
      uVar57 = (undefined1)((uint)fVar84 >> 0x10);
      uVar58 = (undefined1)((uint)fVar84 >> 0x18);
      auVar81[4] = SUB41(fVar21,0);
      auVar81._0_4_ = fVar4;
      auVar81[5] = uVar53;
      auVar81[6] = uVar54;
      auVar81[7] = uVar55;
      auVar81[8] = SUB41(fVar84,0);
      auVar81[9] = uVar56;
      auVar81[10] = uVar57;
      auVar81[0xb] = uVar58;
      auVar81._12_4_ = 0;
      auVar75[4] = SUB41(fVar21,0);
      auVar75._0_4_ = fVar4;
      auVar75[5] = uVar53;
      auVar75[6] = uVar54;
      auVar75[7] = uVar55;
      auVar75[8] = SUB41(fVar84,0);
      auVar75[9] = uVar56;
      auVar75[10] = uVar57;
      auVar75[0xb] = uVar58;
      auVar75._12_4_ = 0;
      auVar75 = NEON_ext(auVar81,auVar75,8,1);
      fVar84 = SUB84(param_4[6],0);
      auVar69._0_4_ = fVar22 * fVar84;
      fVar86 = (float)((ulong)param_4[6] >> 0x20);
      auVar69._4_4_ = fVar30 * fVar86;
      fVar85 = SUB84(param_4[7],0);
      auVar69._8_4_ = fVar5 * fVar85;
      fVar87 = (float)((ulong)param_4[7] >> 0x20);
      auVar69._12_4_ = fVar87 * 0.0;
      auVar48._0_4_ = fVar23 * fVar84;
      auVar48._4_4_ = fVar31 * fVar86;
      auVar48._8_4_ = fVar88 * fVar85;
      auVar48._12_4_ = fVar87 * 0.0;
      fVar84 = auVar50._0_4_ * fVar84;
      fVar86 = auVar50._4_4_ * fVar86;
      uVar53 = (undefined1)((uint)fVar86 >> 8);
      uVar54 = (undefined1)((uint)fVar86 >> 0x10);
      uVar55 = (undefined1)((uint)fVar86 >> 0x18);
      fVar85 = auVar82._0_4_ * fVar85;
      uVar56 = (undefined1)((uint)fVar85 >> 8);
      uVar57 = (undefined1)((uint)fVar85 >> 0x10);
      uVar58 = (undefined1)((uint)fVar85 >> 0x18);
      auVar81 = NEON_ext(auVar48,auVar48,8,1);
      auVar16[4] = SUB41(fVar86,0);
      auVar16._0_4_ = fVar84;
      auVar16[5] = uVar53;
      auVar16[6] = uVar54;
      auVar16[7] = uVar55;
      auVar16[8] = SUB41(fVar85,0);
      auVar16[9] = uVar56;
      auVar16[10] = uVar57;
      auVar16[0xb] = uVar58;
      auVar16._12_4_ = 0;
      auVar17[4] = SUB41(fVar86,0);
      auVar17._0_4_ = fVar84;
      auVar17[5] = uVar53;
      auVar17[6] = uVar54;
      auVar17[7] = uVar55;
      auVar17[8] = SUB41(fVar85,0);
      auVar17[9] = uVar56;
      auVar17[10] = uVar57;
      auVar17[0xb] = uVar58;
      auVar17._12_4_ = 0;
      auVar82 = NEON_ext(auVar16,auVar17,8,1);
      auVar50 = NEON_ext(auVar69,auVar69,8,1);
      plStack_2a0 = (long *)CONCAT44(auVar52._0_4_ + auVar52._4_4_ + auVar83._0_4_ +
                                     auVar48._0_4_ + auVar48._4_4_ + auVar81._0_4_,
                                     fVar19 + fVar18 + auVar79._0_4_ +
                                     auVar69._0_4_ + auVar69._4_4_ + auVar50._0_4_);
      uStack_2c8 = (float *)CONCAT44(fVar22 * 0.0 + fVar30 * 0.0 + fVar5 * 0.0,
                                     fVar26 * fVar22 + fVar77 * fVar30 + fVar29 * fVar5);
      uStack_2d0 = (undefined **)
                   CONCAT44(fVar25 * fVar22 + fVar76 * fVar30 + fVar28 * fVar5,
                            fVar24 * fVar22 + fVar74 * fVar30 + fVar27 * fVar5);
      uStack_2b8 = (undefined ***)
                   CONCAT44(fVar23 * 0.0 + fVar31 * 0.0 + fVar88 * 0.0,
                            fVar26 * fVar23 + fVar77 * fVar31 + fVar29 * fVar88);
      uStack_2c0 = (undefined ***)
                   CONCAT44(fVar25 * fVar23 + fVar76 * fVar31 + fVar28 * fVar88,
                            fVar24 * fVar23 + fVar74 * fVar31 + fVar27 * fVar88);
      pfStack_298 = (float *)(ulong)(uint)(fVar4 + fVar21 + auVar75._0_4_ + auVar75._4_4_ +
                                          fVar84 + fVar86 + auVar82._0_4_ + auVar82._4_4_);
      pppuVar39 = (undefined ***)&uStack_2d0;
      pppuVar40 = &ppuStack_350;
      (*(code *)(*param_2)[2])(param_2);
      auVar36._8_8_ = uStack_308;
      auVar36._0_8_ = ppuStack_310;
      auVar82[8] = uStack_348;
      auVar82._0_8_ = ppuStack_350;
      auVar35._8_8_ = puStack_338;
      auVar35._0_8_ = ppuStack_340;
      auVar82[9] = (char)uStack_347;
      auVar82[10] = (char)((uint7)uStack_347 >> 8);
      auVar82[0xb] = (char)((uint7)uStack_347 >> 0x10);
      auVar82[0xc] = (char)((uint7)uStack_347 >> 0x18);
      auVar82[0xd] = (char)((uint7)uStack_347 >> 0x20);
      auVar82[0xe] = (char)((uint7)uStack_347 >> 0x28);
      auVar82[0xf] = (char)((uint7)uStack_347 >> 0x30);
      auVar50 = NEON_fmin(auVar36,auVar82,4);
      uStack_308 = auVar50._8_8_;
      ppuStack_310 = auVar50._0_8_;
      auVar83[8] = uStack_358;
      auVar83._0_8_ = uStack_360;
      auVar83[9] = (char)uStack_357;
      auVar83[10] = (char)((uint7)uStack_357 >> 8);
      auVar83[0xb] = (char)((uint7)uStack_357 >> 0x10);
      auVar83[0xc] = (char)((uint7)uStack_357 >> 0x18);
      auVar83[0xd] = (char)((uint7)uStack_357 >> 0x20);
      auVar83[0xe] = (char)((uint7)uStack_357 >> 0x28);
      auVar83[0xf] = (char)((uint7)uStack_357 >> 0x30);
      auVar50 = NEON_fmax(auVar35,auVar83,4);
      puStack_338 = auVar50._8_8_;
      ppuStack_340 = auVar50._0_8_;
      uStack_2d0 = &PTR_FUN_110b12498;
      _fStack_2a8 = CONCAT44(fStack_2a4,param_1);
      pppuVar37 = (undefined ***)plVar44[0xc];
      uStack_2c8 = param_5;
      uStack_2c0 = param_2;
      uStack_2b8 = param_3;
      uStack_2b0 = param_4;
      plStack_2a0 = plVar44;
      pfStack_298 = pfVar46;
      pppuStack_290 = param_6;
      if (pppuVar37 == (undefined ***)0x0) {
        pfVar42 = pfVar41;
        if (0 < *(int *)((long)plVar44 + 0x24)) {
          lVar45 = 0;
          pppuVar43 = (undefined ***)0x0;
          do {
            puVar1 = (undefined8 *)(plVar44[6] + lVar45);
            pfVar42 = (float *)puVar1[8];
            ppuStack_140 = (undefined **)*puVar1;
            uStack_138 = puVar1[1];
            ppuStack_130 = (undefined **)puVar1[2];
            puStack_128 = (undefined8 *)puVar1[3];
            uStack_120 = puVar1[4];
            uStack_118 = puVar1[5];
            uStack_110 = puVar1[6];
            uStack_108 = puVar1[7];
            pppuVar37 = (undefined ***)&uStack_2d0;
            pppuVar40 = &ppuStack_140;
            pppuVar39 = pppuVar43;
            FUN_109809114();
            pppuVar43 = (undefined ***)((long)pppuVar43 + 1);
            lVar45 = lVar45 + 0x60;
          } while ((long)pppuVar43 < (long)*(int *)((long)plVar44 + 0x24));
        }
      }
      else {
        pppuVar39 = (undefined ***)*pppuVar37;
        pppuVar40 = &ppuStack_140;
        pfVar42 = (float *)&uStack_2d0;
        ppuStack_140 = ppuStack_310;
        uStack_138 = uStack_308;
        ppuStack_130 = ppuStack_340;
        puStack_128 = puStack_338;
        FUN_10980290c();
      }
    }
  }
  param_2 = pppuVar37;
  param_3 = pppuVar39;
  param_4 = pppuVar40;
  param_5 = pfVar42;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_1098090f8:
  uVar38 = SUB84(param_3,0);
  ___stack_chk_fail();
  __Unwind_Resume();
  __Unwind_Resume();
  __Unwind_Resume();
  __Unwind_Resume();
  __Unwind_Resume();
  __Unwind_Resume();
  pcStack_368 = FUN_109809114;
  ppuVar2 = param_2[7];
  ppuStack_3c0 = param_2[8];
  fVar86 = *(float *)ppuVar2;
  fVar85 = *(float *)((long)ppuVar2 + 4);
  fVar87 = *(float *)(ppuVar2 + 1);
  fVar88 = *(float *)(ppuVar2 + 2);
  fVar22 = *(float *)((long)ppuVar2 + 0x14);
  fVar23 = *(float *)(ppuVar2 + 3);
  fVar24 = *(float *)(param_4 + 2);
  fVar25 = *(float *)((long)param_4 + 0x14);
  fVar26 = *(float *)(param_4 + 3);
  fVar4 = *(float *)(param_4 + 6);
  fVar21 = *(float *)((long)param_4 + 0x34);
  fVar84 = *(float *)(param_4 + 7);
  auVar50 = *(undefined1 (*) [16])(ppuVar2 + 4);
  auVar78._0_4_ = fVar86 * fVar4;
  auVar78._4_4_ = fVar85 * fVar21;
  auVar78._8_4_ = fVar87 * fVar84;
  auVar78._12_4_ = *(float *)((long)ppuVar2 + 0xc) * *(float *)((long)param_4 + 0x3c);
  auVar80._0_4_ = fVar88 * fVar4;
  auVar80._4_4_ = fVar22 * fVar21;
  auVar80._8_4_ = fVar23 * fVar84;
  auVar80._12_4_ = *(float *)((long)ppuVar2 + 0x1c) * *(float *)((long)param_4 + 0x3c);
  auVar79 = NEON_ext(auVar78,auVar78,8,1);
  auVar81 = NEON_ext(auVar80,auVar80,8,1);
  fVar74 = auVar50._0_4_;
  auVar73._0_4_ = fVar74 * fVar4;
  fVar76 = auVar50._4_4_;
  auVar73._4_4_ = fVar76 * fVar21;
  fVar77 = auVar50._8_4_;
  auVar73._8_4_ = fVar77 * fVar84;
  auVar73._12_4_ = 0;
  auVar50 = NEON_ext(auVar73,auVar73,8,1);
  fStack_380 = SUB84(ppuVar2[6],0) + auVar78._0_4_ + auVar78._4_4_ + auVar79._0_4_;
  fStack_37c = (float)((ulong)ppuVar2[6] >> 0x20) + auVar80._0_4_ + auVar80._4_4_ + auVar81._0_4_;
  fStack_378 = SUB84(ppuVar2[7],0) + auVar73._0_4_ + auVar73._4_4_ + auVar50._0_4_ + auVar50._4_4_;
  fStack_374 = (float)((ulong)ppuVar2[7] >> 0x20) + 0.0;
  fVar4 = SUB84(*param_4,0);
  fVar21 = (float)((ulong)*param_4 >> 0x20);
  fVar84 = SUB84(param_4[1],0);
  fVar5 = SUB84(param_4[4],0);
  fVar19 = (float)((ulong)param_4[4] >> 0x20);
  fVar18 = SUB84(param_4[5],0);
  fStack_3a0 = fVar4 * fVar88 + fVar24 * fVar22 + fVar5 * fVar23;
  fStack_39c = fVar21 * fVar88 + fVar25 * fVar22 + fVar19 * fVar23;
  fStack_398 = fVar84 * fVar88 + fVar26 * fVar22 + fVar18 * fVar23;
  fStack_394 = fVar88 * 0.0 + fVar22 * 0.0 + fVar23 * 0.0;
  fStack_3b0 = fVar4 * fVar86 + fVar24 * fVar85 + fVar5 * fVar87;
  fStack_3ac = fVar21 * fVar86 + fVar25 * fVar85 + fVar19 * fVar87;
  fStack_3a8 = fVar84 * fVar86 + fVar26 * fVar85 + fVar18 * fVar87;
  fStack_3a4 = fVar86 * 0.0 + fVar85 * 0.0 + fVar87 * 0.0;
  uStack_390 = CONCAT44(fVar21 * fVar74 + fVar25 * fVar76 + fVar19 * fVar77,
                        fVar4 * fVar74 + fVar24 * fVar76 + fVar5 * fVar77);
  uStack_388 = CONCAT44(fVar74 * 0.0 + fVar76 * 0.0 + fVar77 * 0.0,
                        fVar84 * fVar74 + fVar26 * fVar76 + fVar18 * fVar77);
  uStack_3cc = 0xffffffff00000001;
  ppuStack_3d8 = &PTR_FUN_110b12500;
  uStack_3d0 = *(undefined4 *)(ppuStack_3c0 + 1);
  ppuStack_408 = param_2[1];
  puStack_3f8 = ppuStack_408[2];
  pfStack_3f0 = &fStack_3b0;
  uStack_3e8 = 0;
  uStack_3e0 = 0xffffffff;
  pfStack_400 = param_5;
  uStack_3dc = uVar38;
  uStack_3b8 = uVar38;
  puStack_370 = &stack0xfffffffffffffff0;
  FUN_109808c2c(param_2[2],param_2[3],param_2[4],&ppuStack_408,&ppuStack_3d8);
  return;
}



/* Entry: 109809114; end: 109809213;  */

void FUN_109809114(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  long lStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  lStack_60 = *(long *)(param_1 + 0x40);
  fVar9 = (float)param_3[7];
  fVar10 = (float)((ulong)param_3[7] >> 0x20);
  fVar18 = (float)param_3[6];
  fVar19 = (float)((ulong)param_3[6] >> 0x20);
  fVar3 = (float)*puVar1;
  auVar23._0_4_ = fVar3 * fVar18;
  fVar4 = (float)((ulong)*puVar1 >> 0x20);
  auVar23._4_4_ = fVar4 * fVar19;
  fVar5 = (float)puVar1[1];
  auVar23._8_4_ = fVar5 * fVar9;
  auVar23._12_4_ = (float)((ulong)puVar1[1] >> 0x20) * fVar10;
  fVar6 = (float)puVar1[2];
  auVar25._0_4_ = fVar6 * fVar18;
  fVar7 = (float)((ulong)puVar1[2] >> 0x20);
  auVar25._4_4_ = fVar7 * fVar19;
  fVar8 = (float)puVar1[3];
  auVar25._8_4_ = fVar8 * fVar9;
  auVar25._12_4_ = (float)((ulong)puVar1[3] >> 0x20) * fVar10;
  auVar24 = NEON_ext(auVar23,auVar23,8,1);
  auVar26 = NEON_ext(auVar25,auVar25,8,1);
  fVar20 = (float)puVar1[4];
  fVar18 = fVar20 * fVar18;
  fVar21 = (float)((ulong)puVar1[4] >> 0x20);
  fVar19 = fVar21 * fVar19;
  fVar22 = (float)puVar1[5];
  auVar27._4_4_ = fVar19;
  auVar27._0_4_ = fVar18;
  auVar27._8_4_ = fVar22 * fVar9;
  auVar27._12_4_ = 0;
  auVar2._4_4_ = fVar19;
  auVar2._0_4_ = fVar18;
  auVar2._8_4_ = fVar22 * fVar9;
  auVar2._12_4_ = 0;
  auVar27 = NEON_ext(auVar27,auVar2,8,1);
  fVar17 = (float)param_3[5];
  fVar14 = (float)param_3[3];
  fVar11 = (float)param_3[1];
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar12 = (float)param_3[2];
  fVar13 = (float)((ulong)param_3[2] >> 0x20);
  fVar15 = (float)param_3[4];
  fVar16 = (float)((ulong)param_3[4] >> 0x20);
  fStack_40 = fVar9 * fVar6 + fVar12 * fVar7 + fVar15 * fVar8;
  fStack_3c = fVar10 * fVar6 + fVar13 * fVar7 + fVar16 * fVar8;
  fStack_38 = fVar11 * fVar6 + fVar14 * fVar7 + fVar17 * fVar8;
  fStack_34 = fVar6 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0;
  uStack_50 = CONCAT44(fVar10 * fVar3 + fVar13 * fVar4 + fVar16 * fVar5,
                       fVar9 * fVar3 + fVar12 * fVar4 + fVar15 * fVar5);
  uStack_48 = CONCAT44(fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0,
                       fVar11 * fVar3 + fVar14 * fVar4 + fVar17 * fVar5);
  uStack_30 = CONCAT44(fVar10 * fVar20 + fVar13 * fVar21 + fVar16 * fVar22,
                       fVar9 * fVar20 + fVar12 * fVar21 + fVar15 * fVar22);
  uStack_28 = CONCAT44(fVar20 * 0.0 + fVar21 * 0.0 + fVar22 * 0.0,
                       fVar11 * fVar20 + fVar14 * fVar21 + fVar17 * fVar22);
  uStack_18 = CONCAT44((float)((ulong)puVar1[7] >> 0x20) + 0.0,
                       (float)puVar1[7] + fVar18 + fVar19 + auVar27._0_4_ + auVar27._4_4_);
  uStack_20 = CONCAT44((float)((ulong)puVar1[6] >> 0x20) +
                       auVar25._0_4_ + auVar25._4_4_ + auVar26._0_4_,
                       (float)puVar1[6] + auVar23._0_4_ + auVar23._4_4_ + auVar24._0_4_);
  uStack_6c = 0xffffffff00000001;
  ppuStack_78 = &PTR_FUN_110b12500;
  uStack_70 = *(undefined4 *)(lStack_60 + 8);
  lStack_a8 = *(long *)(param_1 + 8);
  uStack_98 = *(undefined8 *)(lStack_a8 + 0x10);
  puStack_90 = &uStack_50;
  uStack_88 = 0;
  uStack_80 = 0xffffffff;
  uStack_a0 = param_4;
  uStack_7c = param_2;
  uStack_58 = param_2;
  FUN_109808c2c(*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&lStack_a8,
                &ppuStack_78);
  return;
}



/* Entry: 109809214; end: 109809217;  */

void FUN_109809214(void)

{
  return;
}



/* Entry: 109809218; end: 109809287;  */

void FUN_109809218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [240];
  
  FUN_10980aa50(auStack_120,param_2,param_3,param_1,param_4);
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x30))
            (*(long **)(param_1 + 0x68),param_2,param_3,auStack_120,&uStack_130,&uStack_140);
  return;
}



/* Entry: 109809288; end: 10980928b;  */

void FUN_109809288(void)

{
  return;
}



/* Entry: 10980928c; end: 109809507;  */

void FUN_10980928c(undefined4 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
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
  
  uStack_a0 = *param_4;
  uStack_98 = param_4[1];
  uStack_90 = param_4[2];
  uStack_88 = param_4[3];
  uStack_80 = param_4[4];
  uStack_78 = param_4[5];
  uStack_70 = param_4[6];
  uStack_68 = param_4[7];
  uStack_e0 = *param_5;
  uStack_d8 = param_5[1];
  uStack_d0 = param_5[2];
  uStack_c8 = param_5[3];
  uStack_c0 = param_5[4];
  uStack_b8 = param_5[5];
  uStack_b0 = param_5[6];
  uStack_a8 = param_5[7];
  func_0x00010980abd0(&uStack_a0,&uStack_e0,&uStack_200,&fStack_f0);
  uStack_110 = CONCAT44(uStack_200._4_4_ * fStack_f0,(float)uStack_200 * fStack_f0);
  uStack_108 = (ulong)(uint)(fStack_1f8 * fStack_f0);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  FUN_10980adc4(&uStack_a0,&fStack_f0);
  fVar3 = 2.0 / (fStack_f0 * fStack_f0 + fStack_ec * fStack_ec +
                fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
  fVar8 = fVar3 * fStack_ec;
  fVar4 = fVar3 * fStack_e8;
  fVar10 = fVar3 * fStack_f0 * fStack_e4;
  fVar3 = fVar3 * fStack_f0 * fStack_f0;
  fStack_1f8 = fVar4 * fStack_f0 + fVar8 * fStack_e4;
  fStack_1e8 = fVar4 * fStack_ec - fVar10;
  uStack_200 = (undefined **)
               CONCAT44(fVar8 * fStack_f0 - fVar4 * fStack_e4,
                        1.0 - (fVar8 * fStack_ec + fVar4 * fStack_e8));
  uStack_1f4 = 0;
  uStack_1f0 = CONCAT44(1.0 - (fVar3 + fVar4 * fStack_e8),fVar8 * fStack_f0 + fVar4 * fStack_e4);
  uStack_1e4 = 0;
  uStack_1e0 = CONCAT44(fVar4 * fStack_ec + fVar10,fVar4 * fStack_f0 - fVar8 * fStack_e4);
  fStack_1d8 = 1.0 - (fVar3 + fVar8 * fStack_ec);
  fStack_1d4 = 0.0;
  FUN_109815ed4(param_3,&uStack_200,&uStack_120,&uStack_110,&fStack_f0,auStack_100);
  uStack_200 = &PTR_FUN_110b125c0;
  uStack_1d0 = *param_4;
  uStack_1c8 = param_4[1];
  uStack_1c0 = param_4[2];
  uStack_1b8 = param_4[3];
  uStack_1b0 = param_4[4];
  uStack_1a8 = param_4[5];
  fStack_1a0 = *(float *)(param_4 + 6);
  fStack_19c = *(float *)((long)param_4 + 0x34);
  fStack_198 = *(float *)(param_4 + 7);
  uStack_194 = *(undefined4 *)((long)param_4 + 0x3c);
  uStack_190 = *param_5;
  uStack_188 = param_5[1];
  uStack_178 = param_5[3];
  uStack_180 = param_5[2];
  uStack_170 = param_5[4];
  uStack_168 = param_5[5];
  uStack_158 = param_5[7];
  uStack_160 = param_5[6];
  fVar3 = (float)uStack_160 - fStack_1a0;
  fVar4 = (float)((ulong)uStack_160 >> 0x20) - fStack_19c;
  fVar8 = (float)uStack_158 - fStack_198;
  auVar2._0_4_ = fVar3 * fVar3;
  auVar2._4_4_ = fVar4 * fVar4;
  auVar2._8_4_ = fVar8 * fVar8;
  auVar2._12_4_ = 0;
  auVar5 = NEON_ext(auVar2,auVar2,8,1);
  fVar10 = auVar2._0_4_ + auVar2._4_4_ + auVar5._0_4_;
  auVar5 = ZEXT216(0);
  if (1.4210855e-14 <= fVar10) {
    fVar10 = 1.0 / SQRT(fVar10);
    auVar5._0_4_ = fVar3 * fVar10;
    auVar5._4_4_ = fVar4 * fVar10;
    auVar5._8_4_ = fVar8 * fVar10;
    auVar5._12_4_ = fVar10 * 0.0;
  }
  fVar10 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  uVar9 = NEON_fmov(0x3f800000,4);
  uStack_1f0 = CONCAT44((float)((ulong)uVar9 >> 0x20) / fVar6,(float)uVar9 / fVar10);
  uStack_1f0 = uStack_1f0 ^
               (uStack_1f0 ^ 0x5d5e0b6b5d5e0b6b) &
               CONCAT44(-(uint)(fVar6 == 0.0),-(uint)(fVar10 == 0.0));
  fVar7 = auVar5._8_4_;
  fStack_1e8 = 1e+18;
  if (fVar7 != 0.0) {
    fStack_1e8 = 1.0 / fVar7;
  }
  uStack_1e0 = CONCAT44(-(uint)((float)(uStack_1f0 >> 0x20) < 0.0),-(uint)((float)uStack_1f0 < 0.0))
               & 0x100000001;
  fStack_1d8 = (float)(uint)(fStack_1e8 < 0.0);
  auVar1._0_4_ = fVar10 * fVar3;
  auVar1._4_4_ = fVar6 * fVar4;
  auVar1._8_4_ = fVar7 * fVar8;
  auVar1._12_4_ = auVar5._12_4_ * 0.0;
  auVar2 = NEON_ext(auVar1,auVar1,8,1);
  fStack_1d4 = auVar2._0_4_ + auVar1._0_4_ + auVar1._4_4_;
  lStack_140 = param_2;
  uStack_138 = param_6;
  uStack_130 = param_1;
  uStack_128 = param_3;
  (**(code **)(**(long **)(param_2 + 0x68) + 0x30))
            (*(long **)(param_2 + 0x68),&uStack_70,&uStack_b0,&uStack_200,&fStack_f0,auStack_100);
  return;
}



/* Entry: 109809508; end: 10980950b;  */

void FUN_109809508(void)

{
  return;
}



/* Entry: 10980950c; end: 109809efb;  */

void FUN_10980950c(undefined4 param_1,long *param_2,undefined1 (*param_3) [16],long *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *plVar18;
  code *UNRECOVERED_JUMPTABLE;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar64;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
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
  
  plVar18 = param_2;
  (**(code **)(*param_2 + 0x28))();
  if (plVar18 != (long *)0x0) {
    plVar18 = param_2;
    (**(code **)(*param_2 + 0x28))();
    (**(code **)(*plVar18 + 0x70))();
    if (((uint)plVar18 >> 0xf & 1) != 0) {
      plVar18 = param_2;
      (**(code **)(*param_2 + 0x28))();
      param_1 = 0x3dcccccd;
      (**(code **)(*plVar18 + 0x80))(0x3dcccccd);
    }
  }
  iVar19 = (int)param_4[1];
  if (iVar19 < 0xb) {
    if (iVar19 < 9) {
      if (iVar19 == 0) {
        lVar24 = param_4[7];
        lVar23 = param_4[6];
        fVar33 = (float)lVar23;
        fVar28 = fVar33;
        (**(code **)(*param_4 + 0x60))(param_4);
        fVar30 = fVar28;
        (**(code **)(*param_4 + 0x60))(param_4);
        fVar32 = fVar30;
        (**(code **)(*param_4 + 0x60))(param_4);
        fVar33 = fVar33 + fVar28;
        fVar30 = (float)((ulong)lVar23 >> 0x20) + fVar30;
        fVar32 = (float)lVar24 + fVar32;
        fVar28 = (float)((ulong)lVar24 >> 0x20) + 0.0;
        uStack_118 = (undefined **)CONCAT44(fVar28,fVar32);
        uStack_120 = (undefined **)CONCAT44(fVar30,fVar33);
        (**(code **)(*param_2 + 0x28))();
        uStack_88 = CONCAT44(-fVar28,-fVar32);
        uStack_90 = CONCAT44(-fVar30,-fVar33);
        (**(code **)(*param_2 + 0xa0))();
        return;
      }
      if (iVar19 == 8) {
        (**(code **)(*param_4 + 0x60))(param_4);
        (**(code **)(*param_2 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x000109809610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x30))(param_1);
        return;
      }
    }
    else {
      if (iVar19 == 9) {
        uVar20 = (ulong)*(uint *)((long)param_4 + 0x7c);
        if ((int)*(uint *)((long)param_4 + 0x7c) < 1) {
          return;
        }
        do {
          uVar25 = uVar20 - 1;
          puVar3 = (undefined8 *)(param_4[0x11] + uVar25 * 0x10);
          uVar13 = puVar3[1];
          uVar12 = *puVar3;
          fStack_128 = (float)uVar13;
          fStack_124 = (float)((ulong)uVar13 >> 0x20);
          fStack_130 = (float)uVar12;
          fStack_12c = (float)((ulong)uVar12 >> 0x20);
          plVar18 = param_2;
          (**(code **)(*param_2 + 0x28))();
          fVar28 = *(float *)*param_3;
          fVar30 = *(float *)(*param_3 + 4);
          fVar32 = *(float *)(*param_3 + 8);
          fVar33 = *(float *)param_3[1];
          fVar34 = *(float *)(param_3[1] + 4);
          fVar39 = *(float *)(param_3[1] + 8);
          auVar41 = param_3[2];
          auVar48 = param_3[3];
          fVar45 = auVar41._0_4_;
          fVar55 = auVar41._4_4_;
          fStack_108 = fVar33 * 0.0 + fVar34 * 0.0 + fVar39 * 1.0;
          fStack_104 = fVar33 * 0.0 + fVar34 * 0.0 + fVar39 * 0.0;
          auVar67._0_4_ = fStack_130 * fVar28;
          auVar67._4_4_ = fStack_12c * fVar30;
          auVar67._8_4_ = fStack_128 * fVar32;
          auVar67._12_4_ = fStack_124 * *(float *)(*param_3 + 0xc);
          auVar63._0_4_ = fStack_130 * fVar33;
          auVar63._4_4_ = fStack_12c * fVar34;
          auVar63._8_4_ = fStack_128 * fVar39;
          auVar63._12_4_ = fStack_124 * *(float *)(param_3[1] + 0xc);
          auVar66._0_4_ = fStack_130 * fVar45;
          auVar66._4_4_ = fStack_12c * fVar55;
          fVar57 = auVar41._8_4_;
          auVar66._8_4_ = fStack_128 * fVar57;
          auVar52 = NEON_ext(auVar63,auVar63,8,1);
          auVar66._12_4_ = 0;
          auVar58 = NEON_ext(auVar66,auVar66,8,1);
          auVar41 = NEON_ext(auVar67,auVar67,8,1);
          uStack_118 = (undefined **)
                       CONCAT44(fVar28 * 0.0 + fVar30 * 0.0 + fVar32 * 0.0,
                                fVar28 * 0.0 + fVar30 * 0.0 + fVar32 * 1.0);
          uStack_120 = (undefined **)
                       CONCAT44(fVar28 * 0.0 + fVar30 * 1.0 + fVar32 * 0.0,
                                fVar28 * 1.0 + fVar30 * 0.0 + fVar32 * 0.0);
          uStack_110 = (long *)CONCAT44(fVar33 * 0.0 + fVar34 * 1.0 + fVar39 * 0.0,
                                        fVar33 * 1.0 + fVar34 * 0.0 + fVar39 * 0.0);
          uStack_f8 = CONCAT44(fVar45 * 0.0 + fVar55 * 0.0 + fVar57 * 0.0,
                               fVar45 * 0.0 + fVar55 * 0.0 + fVar57 * 1.0);
          uStack_100 = CONCAT44(fVar45 * 0.0 + fVar55 * 1.0 + fVar57 * 0.0,
                                fVar45 * 1.0 + fVar55 * 0.0 + fVar57 * 0.0);
          uStack_e8 = CONCAT44(auVar48._12_4_ + 0.0,
                               auVar66._0_4_ + auVar66._4_4_ + auVar58._0_4_ + auVar58._4_4_ +
                               auVar48._8_4_);
          uStack_f0 = CONCAT44(auVar63._0_4_ + auVar63._4_4_ + auVar52._0_4_ + auVar48._4_4_,
                               auVar67._0_4_ + auVar67._4_4_ + auVar41._0_4_ + auVar48._0_4_);
          (**(code **)(*plVar18 + 0x30))(*(undefined4 *)(param_4[0x15] + uVar25 * 4));
          bVar1 = 1 < uVar20;
          uVar20 = uVar25;
        } while (bVar1);
        return;
      }
      if (iVar19 == 10) {
        param_1 = *(undefined4 *)((long)param_4 + (long)(((int)param_4[9] + 2) % 3) * 4 + 0x30);
        uVar65 = *(undefined4 *)((long)param_4 + (long)(int)param_4[9] * 4 + 0x30);
        (**(code **)(*param_2 + 0x28))();
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xa8);
        goto LAB_1098098e0;
      }
    }
  }
  else {
    if (iVar19 < 0x1c) {
      if (iVar19 == 0xb) {
        param_1 = *(undefined4 *)((long)param_4 + 0x4c);
        uVar65 = (undefined4)param_4[10];
        (**(code **)(*param_2 + 0x28))();
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb8);
      }
      else {
        if (iVar19 != 0xd) goto LAB_109809a58;
        lVar21 = param_4[9];
        (**(code **)(*param_4 + 0xb8))(param_4);
        lVar24 = param_4[7];
        lVar23 = param_4[6];
        fVar33 = (float)lVar23;
        fVar28 = fVar33;
        (**(code **)(*param_4 + 0x60))(param_4);
        fVar30 = fVar28;
        (**(code **)(*param_4 + 0x60))(param_4);
        fVar32 = fVar30;
        (**(code **)(*param_4 + 0x60))(param_4);
        uStack_118 = (undefined **)
                     CONCAT44((float)((ulong)lVar24 >> 0x20) + 0.0,(float)lVar24 + fVar32);
        uStack_120 = (undefined **)CONCAT44((float)((ulong)lVar23 >> 0x20) + fVar30,fVar33 + fVar28)
        ;
        uVar65 = *(undefined4 *)((long)&uStack_120 + (long)(int)lVar21 * 4);
        (**(code **)(*param_2 + 0x28))();
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xb0);
      }
LAB_1098098e0:
                    /* WARNING: Could not recover jumptable at 0x000109809908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar65);
      return;
    }
    if (iVar19 == 0x1c) {
      lVar23 = param_4[0xc];
      (**(code **)(*param_2 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x000109809a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xc0))((int)lVar23);
      return;
    }
    if (iVar19 == 0x1f) {
      uVar2 = *(uint *)((long)param_4 + 0x24);
      if ((int)uVar2 < 1) {
        return;
      }
      uVar20 = (ulong)uVar2 + 1;
      lVar23 = (ulong)uVar2 * 0x60;
      do {
        lVar24 = param_4[6] + lVar23;
        fVar31 = (float)*(undefined8 *)(lVar24 + -0x58);
        fVar27 = (float)*(undefined8 *)(lVar24 + -0x60);
        fVar29 = (float)((ulong)*(undefined8 *)(lVar24 + -0x60) >> 0x20);
        fVar28 = *(float *)(lVar24 + -0x50);
        fVar30 = *(float *)(lVar24 + -0x4c);
        fVar32 = *(float *)(lVar24 + -0x48);
        fVar33 = *(float *)(lVar24 + -0x40);
        fVar34 = *(float *)(lVar24 + -0x3c);
        fVar39 = *(float *)(lVar24 + -0x38);
        fVar45 = *(float *)(lVar24 + -0x30);
        fVar55 = *(float *)(lVar24 + -0x2c);
        fVar57 = *(float *)(lVar24 + -0x28);
        auVar41 = *param_3;
        fVar15 = *(float *)param_3[1];
        fVar16 = *(float *)(param_3[1] + 4);
        fVar17 = *(float *)(param_3[1] + 8);
        auVar48 = param_3[2];
        fVar61 = auVar48._0_4_;
        fVar64 = auVar48._4_4_;
        fStack_108 = fVar31 * fVar15 + fVar32 * fVar16 + fVar39 * fVar17;
        fStack_104 = fVar15 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0;
        fVar50 = auVar41._0_4_;
        auVar59._0_4_ = fVar45 * fVar50;
        fVar54 = auVar41._4_4_;
        auVar59._4_4_ = fVar55 * fVar54;
        fVar56 = auVar41._8_4_;
        auVar59._8_4_ = fVar57 * fVar56;
        auVar59._12_4_ = *(float *)(lVar24 + -0x24) * auVar41._12_4_;
        auVar58._0_4_ = fVar45 * fVar15;
        auVar58._4_4_ = fVar55 * fVar16;
        auVar58._8_4_ = fVar57 * fVar17;
        auVar58._12_4_ = *(float *)(lVar24 + -0x24) * *(float *)(param_3[1] + 0xc);
        auVar52._0_4_ = fVar45 * fVar61;
        auVar52._4_4_ = fVar55 * fVar64;
        fVar45 = auVar48._8_4_;
        auVar52._8_4_ = fVar57 * fVar45;
        auVar52._12_4_ = 0;
        auVar48 = NEON_ext(auVar52,auVar52,8,1);
        auVar63 = NEON_ext(auVar58,auVar58,8,1);
        auVar41 = NEON_ext(auVar59,auVar59,8,1);
        uStack_118 = (undefined **)
                     CONCAT44(fVar50 * 0.0 + fVar54 * 0.0 + fVar56 * 0.0,
                              fVar31 * fVar50 + fVar32 * fVar54 + fVar39 * fVar56);
        uStack_120 = (undefined **)
                     CONCAT44(fVar29 * fVar50 + fVar30 * fVar54 + fVar34 * fVar56,
                              fVar27 * fVar50 + fVar28 * fVar54 + fVar33 * fVar56);
        uStack_110 = (long *)CONCAT44(fVar29 * fVar15 + fVar30 * fVar16 + fVar34 * fVar17,
                                      fVar27 * fVar15 + fVar28 * fVar16 + fVar33 * fVar17);
        uStack_f8 = CONCAT44(fVar61 * 0.0 + fVar64 * 0.0 + fVar45 * 0.0,
                             fVar31 * fVar61 + fVar32 * fVar64 + fVar39 * fVar45);
        uStack_100 = CONCAT44(fVar29 * fVar61 + fVar30 * fVar64 + fVar34 * fVar45,
                              fVar27 * fVar61 + fVar28 * fVar64 + fVar33 * fVar45);
        uStack_e8 = CONCAT44(*(float *)(param_3[3] + 0xc) + 0.0,
                             auVar52._0_4_ + auVar52._4_4_ + auVar48._0_4_ + auVar48._4_4_ +
                             *(float *)(param_3[3] + 8));
        uStack_f0 = CONCAT44(auVar58._0_4_ + auVar58._4_4_ + auVar63._0_4_ +
                             *(float *)(param_3[3] + 4),
                             auVar59._0_4_ + auVar59._4_4_ + auVar41._0_4_ + *(float *)param_3[3]);
        (**(code **)(*param_2 + 0x38))(param_2,&uStack_120,*(undefined8 *)(lVar24 + -0x20),param_5);
        uVar20 = uVar20 - 1;
        lVar23 = lVar23 + -0x60;
      } while (1 < uVar20);
      return;
    }
  }
LAB_109809a58:
  if (iVar19 < 7) {
    lVar23 = param_4[9];
    if (lVar23 == 0) {
      plVar18 = param_4;
      (**(code **)(*param_4 + 0xd0))();
      if (0 < (int)plVar18) {
        iVar19 = 0;
        do {
          (**(code **)(*param_4 + 0xd8))(param_4,iVar19,&uStack_120,&uStack_90);
          fVar30 = SUB84(uStack_118,0);
          fVar33 = (float)((ulong)uStack_118 >> 0x20);
          fVar28 = SUB84(uStack_120,0);
          fVar32 = (float)((ulong)uStack_120 >> 0x20);
          auVar49._0_4_ = *(float *)*param_3 * fVar28;
          auVar49._4_4_ = *(float *)(*param_3 + 4) * fVar32;
          auVar49._8_4_ = *(float *)(*param_3 + 8) * fVar30;
          auVar49._12_4_ = *(float *)(*param_3 + 0xc) * fVar33;
          auVar53._0_4_ = fVar28 * *(float *)param_3[1];
          auVar53._4_4_ = fVar32 * *(float *)(param_3[1] + 4);
          auVar53._8_4_ = fVar30 * *(float *)(param_3[1] + 8);
          auVar53._12_4_ = fVar33 * *(float *)(param_3[1] + 0xc);
          auVar52 = param_3[2];
          auVar58 = param_3[3];
          fVar28 = fVar28 * auVar52._0_4_;
          fVar32 = fVar32 * auVar52._4_4_;
          fVar30 = fVar30 * auVar52._8_4_;
          auVar63 = NEON_ext(auVar49,auVar49,8,1);
          auVar67 = NEON_ext(auVar53,auVar53,8,1);
          auVar41._4_4_ = fVar32;
          auVar41._0_4_ = fVar28;
          auVar41._8_4_ = fVar30;
          auVar41._12_4_ = 0;
          auVar48._4_4_ = fVar32;
          auVar48._0_4_ = fVar28;
          auVar48._8_4_ = fVar30;
          auVar48._12_4_ = 0;
          auVar59 = NEON_ext(auVar41,auVar48,8,1);
          fVar34 = (float)uStack_88;
          fVar39 = (float)((ulong)uStack_88 >> 0x20);
          fVar30 = (float)uStack_90;
          fVar33 = (float)((ulong)uStack_90 >> 0x20);
          auVar38._0_4_ = *(float *)*param_3 * fVar30;
          auVar38._4_4_ = *(float *)(*param_3 + 4) * fVar33;
          auVar38._8_4_ = *(float *)(*param_3 + 8) * fVar34;
          auVar38._12_4_ = *(float *)(*param_3 + 0xc) * fVar39;
          auVar44._0_4_ = *(float *)param_3[1] * fVar30;
          auVar44._4_4_ = *(float *)(param_3[1] + 4) * fVar33;
          auVar44._8_4_ = *(float *)(param_3[1] + 8) * fVar34;
          auVar44._12_4_ = *(float *)(param_3[1] + 0xc) * fVar39;
          fVar30 = auVar52._0_4_ * fVar30;
          fVar33 = auVar52._4_4_ * fVar33;
          fVar34 = auVar52._8_4_ * fVar34;
          auVar48 = NEON_ext(auVar38,auVar38,8,1);
          auVar52 = NEON_ext(auVar44,auVar44,8,1);
          auVar10._4_4_ = fVar33;
          auVar10._0_4_ = fVar30;
          auVar10._8_4_ = fVar34;
          auVar10._12_4_ = 0;
          auVar11._4_4_ = fVar33;
          auVar11._0_4_ = fVar30;
          auVar11._8_4_ = fVar34;
          auVar11._12_4_ = 0;
          auVar41 = NEON_ext(auVar10,auVar11,8,1);
          uStack_a8 = CONCAT44(auVar58._12_4_ + 0.0,
                               auVar58._8_4_ + fVar30 + fVar33 + auVar41._0_4_ + auVar41._4_4_);
          uStack_b0 = CONCAT44(auVar58._4_4_ + auVar44._0_4_ + auVar44._4_4_ + auVar52._0_4_,
                               auVar58._0_4_ + auVar38._0_4_ + auVar38._4_4_ + auVar48._0_4_);
          uStack_98 = CONCAT44(auVar58._12_4_ + 0.0,
                               fVar28 + fVar32 + auVar59._0_4_ + auVar59._4_4_ + auVar58._8_4_);
          uStack_a0 = CONCAT44(auVar53._0_4_ + auVar53._4_4_ + auVar67._0_4_ + auVar58._4_4_,
                               auVar49._0_4_ + auVar49._4_4_ + auVar63._0_4_ + auVar58._0_4_);
          plVar18 = param_2;
          (**(code **)(*param_2 + 0x28))();
          (**(code **)(*plVar18 + 0x20))();
          iVar19 = iVar19 + 1;
          plVar18 = param_4;
          (**(code **)(*param_4 + 0xd0))();
        } while (iVar19 < (int)plVar18);
      }
    }
    else if (0 < *(int *)(lVar23 + 0x2c)) {
      lVar24 = 0;
      do {
        lVar21 = *(long *)(lVar23 + 0x38);
        lVar22 = lVar21 + lVar24 * 0x30;
        uVar2 = *(uint *)(lVar22 + 4);
        if ((int)uVar2 < 1) {
          auVar35 = ZEXT216(0);
        }
        else {
          lVar26 = 0;
          auVar35 = ZEXT216(0);
          uVar20 = (ulong)*(uint *)(*(long *)(lVar22 + 0x10) + (ulong)uVar2 * 4 + -4);
          do {
            uVar25 = (ulong)*(int *)(*(long *)(lVar21 + lVar24 * 0x30 + 0x10) + lVar26 * 4);
            puVar3 = (undefined8 *)(*(long *)(lVar23 + 0x18) + uVar25 * 0x10);
            uVar14 = puVar3[1];
            uVar12 = *puVar3;
            fVar34 = auVar35._0_4_;
            fVar39 = auVar35._8_4_;
            fVar45 = auVar35._12_4_;
            plVar18 = param_2;
            (**(code **)(*param_2 + 0x28))();
            puVar3 = (undefined8 *)(*(long *)(lVar23 + 0x18) + (long)(int)uVar20 * 0x10);
            uVar13 = puVar3[1];
            fVar32 = (float)uVar13;
            fVar33 = (float)((ulong)uVar13 >> 0x20);
            uVar13 = *puVar3;
            fVar28 = (float)uVar13;
            fVar30 = (float)((ulong)uVar13 >> 0x20);
            auVar46._0_4_ = *(float *)*param_3 * fVar28;
            auVar46._4_4_ = *(float *)(*param_3 + 4) * fVar30;
            auVar46._8_4_ = *(float *)(*param_3 + 8) * fVar32;
            auVar46._12_4_ = *(float *)(*param_3 + 0xc) * fVar33;
            auVar51._0_4_ = fVar28 * *(float *)param_3[1];
            auVar51._4_4_ = fVar30 * *(float *)(param_3[1] + 4);
            auVar51._8_4_ = fVar32 * *(float *)(param_3[1] + 8);
            auVar51._12_4_ = fVar33 * *(float *)(param_3[1] + 0xc);
            auVar58 = NEON_ext(auVar46,auVar46,8,1);
            auVar59 = NEON_ext(auVar51,auVar51,8,1);
            auVar41 = param_3[2];
            auVar48 = param_3[3];
            fVar28 = fVar28 * auVar41._0_4_;
            fVar30 = fVar30 * auVar41._4_4_;
            fVar32 = fVar32 * auVar41._8_4_;
            auVar4._4_4_ = fVar30;
            auVar4._0_4_ = fVar28;
            auVar4._8_4_ = fVar32;
            auVar4._12_4_ = 0;
            auVar5._4_4_ = fVar30;
            auVar5._0_4_ = fVar28;
            auVar5._8_4_ = fVar32;
            auVar5._12_4_ = 0;
            auVar52 = NEON_ext(auVar4,auVar5,8,1);
            uStack_118 = (undefined **)
                         CONCAT44(auVar48._12_4_ + 0.0,
                                  fVar28 + fVar30 + auVar52._0_4_ + auVar52._4_4_ + auVar48._8_4_);
            uStack_120 = (undefined **)
                         CONCAT44(auVar51._0_4_ + auVar51._4_4_ + auVar59._0_4_ + auVar48._4_4_,
                                  auVar46._0_4_ + auVar46._4_4_ + auVar58._0_4_ + auVar48._0_4_);
            puVar3 = (undefined8 *)(*(long *)(lVar23 + 0x18) + uVar25 * 0x10);
            uVar13 = puVar3[1];
            fVar32 = (float)uVar13;
            fVar33 = (float)((ulong)uVar13 >> 0x20);
            uVar13 = *puVar3;
            fVar28 = (float)uVar13;
            fVar30 = (float)((ulong)uVar13 >> 0x20);
            auVar36._0_4_ = *(float *)*param_3 * fVar28;
            auVar36._4_4_ = *(float *)(*param_3 + 4) * fVar30;
            auVar36._8_4_ = *(float *)(*param_3 + 8) * fVar32;
            auVar36._12_4_ = *(float *)(*param_3 + 0xc) * fVar33;
            auVar40._0_4_ = *(float *)param_3[1] * fVar28;
            auVar40._4_4_ = *(float *)(param_3[1] + 4) * fVar30;
            auVar40._8_4_ = *(float *)(param_3[1] + 8) * fVar32;
            auVar40._12_4_ = *(float *)(param_3[1] + 0xc) * fVar33;
            fVar28 = auVar41._0_4_ * fVar28;
            fVar30 = auVar41._4_4_ * fVar30;
            fVar32 = auVar41._8_4_ * fVar32;
            auVar52 = NEON_ext(auVar36,auVar36,8,1);
            auVar58 = NEON_ext(auVar40,auVar40,8,1);
            auVar6._4_4_ = fVar30;
            auVar6._0_4_ = fVar28;
            auVar6._8_4_ = fVar32;
            auVar6._12_4_ = 0;
            auVar7._4_4_ = fVar30;
            auVar7._0_4_ = fVar28;
            auVar7._8_4_ = fVar32;
            auVar7._12_4_ = 0;
            auVar41 = NEON_ext(auVar6,auVar7,8,1);
            uStack_88 = CONCAT44(auVar48._12_4_ + 0.0,
                                 auVar48._8_4_ + fVar28 + fVar30 + auVar41._0_4_ + auVar41._4_4_);
            uStack_90 = CONCAT44(auVar48._4_4_ + auVar40._0_4_ + auVar40._4_4_ + auVar58._0_4_,
                                 auVar48._0_4_ + auVar36._0_4_ + auVar36._4_4_ + auVar52._0_4_);
            (**(code **)(*plVar18 + 0x20))();
            auVar35._4_4_ = auVar35._4_4_ + (float)((ulong)uVar12 >> 0x20);
            auVar35._0_4_ = fVar34 + (float)uVar12;
            auVar35._8_4_ = fVar39 + (float)uVar14;
            auVar35._12_4_ = fVar45 + (float)((ulong)uVar14 >> 0x20);
            lVar26 = lVar26 + 1;
            lVar21 = *(long *)(lVar23 + 0x38);
            uVar20 = uVar25;
          } while (lVar26 < *(int *)(lVar21 + lVar24 * 0x30 + 4));
        }
        fStack_128 = auVar35._8_4_;
        fStack_124 = auVar35._12_4_;
        fStack_130 = auVar35._0_4_;
        fStack_12c = auVar35._4_4_;
        plVar18 = param_2;
        (**(code **)(*param_2 + 0x28))();
        (**(code **)(*plVar18 + 0x70))();
        if (((uint)plVar18 >> 0xe & 1) != 0) {
          fVar28 = 1.0 / (float)(int)uVar2;
          fVar39 = fStack_130 * fVar28;
          fVar45 = fStack_12c * fVar28;
          fStack_128 = fStack_128 * fVar28;
          fStack_124 = fStack_124 * fVar28;
          uStack_118 = (undefined **)0x0;
          uStack_120 = (undefined **)0x3f8000003f800000;
          lVar21 = *(long *)(lVar23 + 0x38) + lVar24 * 0x30;
          uVar12 = *(undefined8 *)(lVar21 + 0x20);
          fVar32 = *(float *)(lVar21 + 0x28);
          fStack_130 = (float)uVar12;
          fStack_12c = (float)((ulong)uVar12 >> 0x20);
          plVar18 = param_2;
          (**(code **)(*param_2 + 0x28))();
          fVar33 = (float)*(undefined8 *)(*param_3 + 8);
          fVar34 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
          fVar28 = (float)*(undefined8 *)*param_3;
          fVar30 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
          auVar42._0_4_ = fVar39 * fVar28;
          auVar42._4_4_ = fVar45 * fVar30;
          auVar42._8_4_ = fStack_128 * fVar33;
          auVar42._12_4_ = fStack_124 * fVar34;
          auVar47._0_4_ = fVar39 * *(float *)param_3[1];
          auVar47._4_4_ = fVar45 * *(float *)(param_3[1] + 4);
          auVar47._8_4_ = fStack_128 * *(float *)(param_3[1] + 8);
          auVar47._12_4_ = fStack_124 * *(float *)(param_3[1] + 0xc);
          auVar41 = param_3[3];
          auVar60._0_4_ = fVar39 * *(float *)param_3[2];
          auVar60._4_4_ = fVar45 * *(float *)(param_3[2] + 4);
          auVar60._8_4_ = fStack_128 * *(float *)(param_3[2] + 8);
          auVar52 = NEON_ext(auVar42,auVar42,8,1);
          auVar58 = NEON_ext(auVar47,auVar47,8,1);
          auVar60._12_4_ = 0;
          auVar48 = NEON_ext(auVar60,auVar60,8,1);
          auVar62._0_8_ =
               CONCAT44(auVar47._0_4_ + auVar47._4_4_ + auVar58._0_4_ + auVar41._4_4_,
                        auVar42._0_4_ + auVar42._4_4_ + auVar52._0_4_ + auVar41._0_4_);
          auVar62._8_4_ =
               auVar60._0_4_ + auVar60._4_4_ + auVar48._0_4_ + auVar48._4_4_ + auVar41._8_4_;
          auVar62._12_4_ = auVar41._12_4_ + 0.0;
          fVar39 = fVar39 + fStack_130;
          fVar45 = fVar45 + fStack_12c;
          fStack_128 = fStack_128 + fVar32;
          fVar28 = fVar39 * fVar28;
          fVar30 = fVar45 * fVar30;
          fVar33 = fStack_128 * fVar33;
          fVar34 = (fStack_124 + 0.0) * fVar34;
          auVar37._0_4_ = fVar39 * *(float *)param_3[1];
          auVar37._4_4_ = fVar45 * *(float *)(param_3[1] + 4);
          auVar37._8_4_ = fStack_128 * *(float *)(param_3[1] + 8);
          auVar37._12_4_ = (fStack_124 + 0.0) * *(float *)(param_3[1] + 0xc);
          auVar43._0_4_ = fVar39 * *(float *)param_3[2];
          auVar43._4_4_ = fVar45 * *(float *)(param_3[2] + 4);
          auVar43._8_4_ = fStack_128 * *(float *)(param_3[2] + 8);
          auVar8._4_4_ = fVar30;
          auVar8._0_4_ = fVar28;
          auVar8._8_4_ = fVar33;
          auVar8._12_4_ = fVar34;
          auVar9._4_4_ = fVar30;
          auVar9._0_4_ = fVar28;
          auVar9._8_4_ = fVar33;
          auVar9._12_4_ = fVar34;
          auVar52 = NEON_ext(auVar8,auVar9,8,1);
          auVar58 = NEON_ext(auVar37,auVar37,8,1);
          auVar43._12_4_ = 0;
          auVar48 = NEON_ext(auVar43,auVar43,8,1);
          uStack_98 = CONCAT44(auVar41._12_4_ + 0.0,
                               auVar41._8_4_ +
                               auVar43._0_4_ + auVar43._4_4_ + auVar48._0_4_ + auVar48._4_4_);
          uStack_a0 = CONCAT44(auVar41._4_4_ + auVar58._0_4_ + auVar37._0_4_ + auVar37._4_4_,
                               auVar41._0_4_ + auVar52._0_4_ + fVar28 + fVar30);
          uStack_88 = auVar62._8_8_;
          uStack_90 = auVar62._0_8_;
          (**(code **)(*plVar18 + 0x20))();
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(lVar23 + 0x2c));
    }
  }
  iVar19 = (int)param_4[1];
  if (iVar19 - 0x15U < 9) {
    uStack_98 = 0xdd5e0b6b;
    uStack_a0 = 0xdd5e0b6bdd5e0b6b;
    uStack_88 = 0x5d5e0b6b;
    uStack_90 = 0x5d5e0b6b5d5e0b6b;
    plVar18 = param_2;
    (**(code **)(*param_2 + 0x28))();
    uStack_f8 = param_5[1];
    uStack_100 = *param_5;
    uStack_f0 = *(undefined8 *)*param_3;
    uStack_e8 = *(undefined8 *)(*param_3 + 8);
    uStack_e0 = *(undefined8 *)param_3[1];
    uStack_d8 = *(undefined8 *)(param_3[1] + 8);
    uStack_c8 = *(undefined8 *)(param_3[2] + 8);
    uStack_d0 = *(undefined8 *)param_3[2];
    uStack_c0 = *(undefined8 *)param_3[3];
    uStack_b8 = *(undefined8 *)(param_3[3] + 8);
    uStack_120 = &PTR_FUN_110b12600;
    uStack_118 = &PTR_DAT_110b12630;
    uStack_110 = plVar18;
    (**(code **)(*param_4 + 0x80))(param_4,&uStack_120,&uStack_a0,&uStack_90);
    iVar19 = (int)param_4[1];
  }
  if (iVar19 == 3) {
    uStack_98 = 0xdd5e0b6b;
    uStack_a0 = 0xdd5e0b6bdd5e0b6b;
    uStack_88 = 0x5d5e0b6b;
    uStack_90 = 0x5d5e0b6b5d5e0b6b;
    (**(code **)(*param_2 + 0x28))();
    uStack_f8 = param_5[1];
    uStack_100 = *param_5;
    uStack_f0 = *(undefined8 *)*param_3;
    uStack_e8 = *(undefined8 *)(*param_3 + 8);
    uStack_e0 = *(undefined8 *)param_3[1];
    uStack_d8 = *(undefined8 *)(param_3[1] + 8);
    uStack_c8 = *(undefined8 *)(param_3[2] + 8);
    uStack_d0 = *(undefined8 *)param_3[2];
    uStack_c0 = *(undefined8 *)param_3[3];
    uStack_b8 = *(undefined8 *)(param_3[3] + 8);
    uStack_120 = &PTR_FUN_110b12600;
    uStack_118 = &PTR_DAT_110b12630;
    uStack_110 = param_2;
    (**(code **)(*(long *)param_4[0xf] + 0x10))
              ((long *)param_4[0xf],(ulong)&uStack_120 | 8,&uStack_a0,&uStack_90);
  }
  return;
}



/* Entry: 109809efc; end: 109809eff;  */

void FUN_109809efc(void)

{
  return;
}



/* Entry: 109809f00; end: 10980a23f;  */

void FUN_109809f00(long *param_1)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
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
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (plVar2 != (long *)0x0) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar2 + 200))();
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar2 + 0x10))(&uStack_c0);
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar2 + 0x70))();
    if ((((uint)plVar2 >> 3 & 1) != 0) && (plVar2 = (long *)param_1[5], plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x48))();
      if (0 < (int)plVar2) {
        iVar5 = 0;
        do {
          plVar3 = (long *)param_1[5];
          (**(code **)(*plVar3 + 0x50))(plVar3,iVar5);
          uVar7 = (ulong)*(uint *)(plVar3 + 0x6c);
          if (0 < (int)*(uint *)(plVar3 + 0x6c)) {
            do {
              plVar3 = param_1;
              (**(code **)(*param_1 + 0x28))();
              (**(code **)(*plVar3 + 0x50))();
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != (int)plVar2);
      }
    }
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*plVar2 + 0x70))();
    if ((((ulong)plVar2 & 3) != 0) && (0 < *(int *)((long)param_1 + 0xc))) {
      lVar4 = 0;
      uStack_118 = 0x3e99999a;
      uStack_120 = 0x3e99999a3e99999a;
      do {
        lVar6 = *(long *)(param_1[3] + lVar4 * 8);
        if ((*(byte *)(lVar6 + 0xe8) >> 5 & 1) == 0) {
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x28))();
          if (plVar2 != (long *)0x0) {
            plVar2 = param_1;
            (**(code **)(*param_1 + 0x28))();
            (**(code **)(*plVar2 + 0x70))();
            if (((ulong)plVar2 & 1) != 0) {
              iVar5 = *(int *)(lVar6 + 0xf8);
              if (iVar5 < 3) {
                uStack_d0 = uStack_c0;
                uVar10 = uStack_b8;
                if (iVar5 != 1) {
                  uStack_d0 = 0x3e99999a3e99999a;
                  uVar10 = 0x3e99999a;
                  if (iVar5 == 2) {
                    uStack_d0 = uStack_b0;
                    uVar10 = uStack_a8;
                  }
                }
              }
              else {
                uStack_d0 = uStack_a0;
                uVar10 = uStack_98;
                if (((iVar5 != 3) && (uStack_d0 = uStack_90, uVar10 = uStack_88, iVar5 != 4)) &&
                   (uStack_d0 = uStack_120, uVar10 = uStack_118, iVar5 == 5)) {
                  uStack_d0 = uStack_80;
                  uVar10 = uStack_78;
                }
              }
              fStack_c8 = (float)uVar10;
              fStack_c4 = (float)((ulong)uVar10 >> 0x20);
              if ((*(byte *)(lVar6 + 0xe9) & 1) != 0) {
                uStack_d0 = *(undefined8 *)(lVar6 + 0x170);
                fStack_c8 = (float)*(undefined8 *)(lVar6 + 0x178);
                fStack_c4 = (float)((ulong)*(undefined8 *)(lVar6 + 0x178) >> 0x20);
              }
              (**(code **)(*param_1 + 0x38))
                        (param_1,lVar6 + 0x10,*(undefined8 *)(lVar6 + 0xd0),&uStack_d0);
            }
          }
          plVar2 = (long *)param_1[0xe];
          if ((plVar2 != (long *)0x0) &&
             ((**(code **)(*plVar2 + 0x70))(), ((uint)plVar2 >> 1 & 1) != 0)) {
            uStack_e8 = uStack_68;
            uStack_f0 = uStack_70;
            (**(code **)(**(long **)(lVar6 + 0xd0) + 0x10))
                      (*(long **)(lVar6 + 0xd0),lVar6 + 0x10,&uStack_d0,&fStack_e0);
            fVar13 = fRam00000001132e0498;
            fStack_c8 = fStack_c8 - fRam00000001132e0498;
            fStack_c4 = fStack_c4 - 0.0;
            fStack_e0 = fStack_e0 + fRam00000001132e0498;
            fStack_dc = fStack_dc + fRam00000001132e0498;
            fStack_d8 = fStack_d8 + fRam00000001132e0498;
            fStack_d4 = fStack_d4 + 0.0;
            uStack_d0 = CONCAT44((float)((ulong)uStack_d0 >> 0x20) - fRam00000001132e0498,
                                 (float)uStack_d0 - fRam00000001132e0498);
            if (((char)param_1[8] == '\x01') &&
               ((*(int *)(lVar6 + 0x118) == 2 && ((*(byte *)(lVar6 + 0xe8) & 3) == 0)))) {
              (**(code **)(**(long **)(lVar6 + 0xd0) + 0x10))
                        (*(long **)(lVar6 + 0xd0),lVar6 + 0x50,&uStack_100,&uStack_110);
              auVar8._0_8_ = CONCAT44(uStack_100._4_4_ - fVar13,(float)uStack_100 - fVar13);
              auVar8._8_4_ = (float)uStack_f8 - fVar13;
              auVar8._12_4_ = uStack_f8._4_4_ - 0.0;
              fVar11 = fVar13 + (float)uStack_110;
              fVar12 = fVar13 + (float)((ulong)uStack_110 >> 0x20);
              fVar13 = fVar13 + (float)uStack_108;
              fVar14 = (float)((ulong)uStack_108 >> 0x20) + 0.0;
              uStack_108 = CONCAT44(fVar14,fVar13);
              uStack_110 = CONCAT44(fVar12,fVar11);
              uStack_f8 = auVar8._8_8_;
              auVar15._8_4_ = fStack_c8;
              auVar15._0_8_ = uStack_d0;
              auVar15._12_4_ = fStack_c4;
              auVar15 = NEON_fmin(auVar15,auVar8,4);
              auVar1._4_4_ = fStack_dc;
              auVar1._0_4_ = fStack_e0;
              auVar1._8_4_ = fStack_d8;
              auVar1._12_4_ = fStack_d4;
              auVar9._4_4_ = fVar12;
              auVar9._0_4_ = fVar11;
              auVar9._8_4_ = fVar13;
              auVar9._12_4_ = fVar14;
              auVar9 = NEON_fmax(auVar1,auVar9,4);
              fStack_d8 = auVar9._8_4_;
              fStack_d4 = auVar9._12_4_;
              fStack_e0 = auVar9._0_4_;
              fStack_dc = auVar9._4_4_;
              fStack_c8 = auVar15._8_4_;
              fStack_c4 = auVar15._12_4_;
              uStack_d0 = auVar15._0_8_;
              uStack_100 = auVar8._0_8_;
            }
            (**(code **)(*(long *)param_1[0xe] + 0x78))
                      ((long *)param_1[0xe],&uStack_d0,&fStack_e0,&uStack_f0);
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)((long)param_1 + 0xc));
    }
  }
  return;
}



/* Entry: 10980a240; end: 10980a783;  */

void FUN_10980a240(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plStack_e8;
  undefined1 auStack_e0 [4];
  undefined8 uStack_dc;
  undefined4 *puStack_d0;
  byte bStack_c8;
  undefined1 auStack_c0 [4];
  undefined8 uStack_bc;
  undefined4 *puStack_b0;
  char cStack_a8;
  undefined1 auStack_a0 [4];
  undefined8 uStack_9c;
  ulong uStack_90;
  byte bStack_88;
  undefined1 auStack_80 [4];
  undefined8 uStack_7c;
  ulong uStack_70;
  byte bStack_68;
  
  bStack_c8 = 1;
  puStack_d0 = (undefined4 *)0x0;
  uStack_dc = 0;
  cStack_a8 = '\x01';
  puStack_b0 = (undefined4 *)0x0;
  uStack_bc = 0;
  bStack_88 = 1;
  uStack_90 = 0;
  uStack_9c = 0;
  bStack_68 = 1;
  uStack_70 = 0;
  uStack_7c = 0;
  iVar13 = *(int *)(param_1 + 0xc);
  if (0 < iVar13) {
    lVar14 = 0;
    do {
      plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + lVar14 * 8) + 0xd0);
      puVar3 = auStack_e0;
      plStack_e8 = plVar12;
      FUN_10980b310(puVar3,&plStack_e8);
      if (((int)puVar3 == -1) || (uStack_90 == 0)) {
        uVar15 = uStack_9c._4_4_;
        uVar16 = (ulong)uStack_9c._4_4_;
        puVar3 = auStack_e0;
        plStack_e8 = plVar12;
        FUN_10980b310(puVar3,&plStack_e8);
        if ((int)puVar3 == -1) {
          uVar2 = (uint)uStack_9c;
          uVar6 = (uint)uStack_9c;
          if ((uint)uStack_9c == uVar15) {
            uVar1 = uVar15 << 1;
            if (uVar15 == 0) {
              uVar1 = 1;
            }
            uVar6 = uVar15;
            if ((int)uVar15 < (int)uVar1) {
              if (uVar1 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                FUN_1098256f4(uVar4,0x10);
                uVar16 = uStack_9c & 0xffffffff;
              }
              if (0 < (int)uVar16) {
                lVar8 = 0;
                do {
                  *(undefined8 *)(uVar4 + lVar8) = *(undefined8 *)(uStack_90 + lVar8);
                  lVar8 = lVar8 + 8;
                } while (uVar16 << 3 != lVar8);
              }
              if ((uStack_90 != 0) && ((bStack_88 & 1) != 0)) {
                FUN_109825740();
                uVar16 = uStack_9c & 0xffffffff;
              }
              uVar6 = (uint)uVar16;
              bStack_88 = 1;
              uStack_9c = (ulong)uVar1 << 0x20;
              uStack_90 = uVar4;
            }
          }
          *(long **)(uStack_90 + (long)(int)uVar6 * 8) = plVar12;
          uStack_9c = CONCAT44(uStack_9c._4_4_,uVar6 + 1);
          iVar13 = (int)uStack_7c;
          if ((int)uStack_7c == uStack_7c._4_4_) {
            uVar6 = (int)uStack_7c << 1;
            if ((int)uStack_7c == 0) {
              uVar6 = 1;
            }
            if ((int)uStack_7c < (int)uVar6) {
              if (uVar6 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
                FUN_1098256f4(uVar16,0x10);
              }
              if (0 < (int)uStack_7c) {
                lVar8 = 0;
                do {
                  *(undefined8 *)(uVar16 + lVar8) = *(undefined8 *)(uStack_70 + lVar8);
                  lVar8 = lVar8 + 8;
                } while ((uStack_7c & 0xffffffff) << 3 != lVar8);
              }
              if ((uStack_70 != 0) && ((bStack_68 & 1) != 0)) {
                FUN_109825740();
              }
              bStack_68 = 1;
              uStack_7c = CONCAT44(uVar6,(int)uStack_7c);
              iVar13 = (int)uStack_7c;
              uStack_70 = uVar16;
            }
          }
          *(long **)(uStack_70 + (long)iVar13 * 8) = plVar12;
          uVar6 = uStack_9c._4_4_;
          uVar16 = (ulong)uStack_9c._4_4_;
          uStack_7c = CONCAT44(uStack_7c._4_4_,(int)uStack_7c + 1);
          if ((int)uVar15 < (int)uStack_9c._4_4_) {
            uVar15 = (uint)uStack_dc;
            uVar4 = uStack_dc & 0xffffffff;
            if ((int)(uint)uStack_dc < (int)uStack_9c._4_4_) {
              lVar8 = (long)(int)uStack_9c._4_4_;
              if (uStack_dc._4_4_ < (int)uStack_9c._4_4_) {
                if (uStack_9c._4_4_ == 0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  puVar5 = (undefined4 *)(lVar8 << 2);
                  FUN_1098256f4(puVar5,0x10);
                }
                if ((int)(uint)uStack_dc < 1) {
                  if ((puStack_d0 != (undefined4 *)0x0) && ((bStack_c8 & 1) != 0))
                  goto LAB_10980a4f4;
                }
                else {
                  uVar7 = (ulong)(uint)uStack_dc;
                  puVar9 = puVar5;
                  puVar10 = puStack_d0;
                  do {
                    *puVar9 = *puVar10;
                    uVar7 = uVar7 - 1;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                  } while (uVar7 != 0);
                  if (bStack_c8 == 1) {
LAB_10980a4f4:
                    FUN_109825740();
                  }
                }
                bStack_c8 = 1;
                uStack_dc = CONCAT44(uVar6,(uint)uStack_dc);
                puStack_d0 = puVar5;
              }
              _bzero(puStack_d0 + (int)uVar15,(ulong)(uVar6 + ~uVar15) * 4 + 4);
              uStack_dc = CONCAT44(uStack_dc._4_4_,uVar6);
              uVar1 = (uint)uStack_bc;
              if ((int)(uint)uStack_bc < (int)uVar6) {
                if (uStack_bc._4_4_ < (int)uVar6) {
                  if (uVar6 == 0) {
                    puVar5 = (undefined4 *)0x0;
                  }
                  else {
                    puVar5 = (undefined4 *)(lVar8 << 2);
                    FUN_1098256f4(puVar5,0x10);
                  }
                  if ((int)(uint)uStack_bc < 1) {
                    if (puStack_b0 != (undefined4 *)0x0) goto LAB_10980a5a0;
                  }
                  else {
                    uVar7 = (ulong)(uint)uStack_bc;
                    puVar9 = puVar5;
                    puVar10 = puStack_b0;
                    do {
                      *puVar9 = *puVar10;
                      uVar7 = uVar7 - 1;
                      puVar9 = puVar9 + 1;
                      puVar10 = puVar10 + 1;
                    } while (uVar7 != 0);
LAB_10980a5a0:
                    if (cStack_a8 == '\x01') {
                      FUN_109825740();
                    }
                  }
                  cStack_a8 = '\x01';
                  uStack_bc = CONCAT44(uVar6,(uint)uStack_bc);
                  puStack_b0 = puVar5;
                }
                _bzero(puStack_b0 + (int)uVar1,(ulong)(uVar6 + ~uVar1) * 4 + 4);
              }
              uStack_bc = CONCAT44(uStack_bc._4_4_,uVar6);
              if (0 < (int)uVar6) {
                _memset(puStack_d0,0xff,uVar16 << 2);
                _memset(puStack_b0,0xff,uVar16 << 2);
              }
              if (0 < (int)uVar15) {
                uVar16 = 0;
                piVar11 = (int *)(uStack_70 + 4);
                do {
                  uVar15 = *piVar11 + piVar11[-1] +
                           ((*piVar11 + piVar11[-1]) * 0x8000 ^ 0xffffffffU);
                  uVar15 = (uVar15 ^ uVar15 >> 10) * 9;
                  uVar15 = uVar15 ^ uVar15 >> 6;
                  uVar15 = uVar15 + (uVar15 << 0xb ^ 0xffffffff);
                  uVar15 = (uVar15 ^ uVar15 >> 0x10) & uStack_9c._4_4_ - 1;
                  puStack_b0[uVar16] = puStack_d0[(int)uVar15];
                  puStack_d0[(int)uVar15] = (int)uVar16;
                  uVar16 = uVar16 + 1;
                  piVar11 = piVar11 + 2;
                } while (uVar4 != uVar16);
              }
            }
            uVar15 = uStack_9c._4_4_;
          }
          iVar13 = (int)plVar12 + (int)((ulong)plVar12 >> 0x20);
          uVar6 = iVar13 + (iVar13 * 0x8000 ^ 0xffffffffU);
          uVar6 = (uVar6 ^ uVar6 >> 10) * 9;
          uVar6 = uVar6 ^ uVar6 >> 6;
          uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
          uVar15 = (uVar6 ^ uVar6 >> 0x10) & uVar15 - 1;
          puStack_b0[(int)uVar2] = puStack_d0[(int)uVar15];
          puStack_d0[(int)uVar15] = uVar2;
        }
        else {
          *(long **)(uStack_90 + (long)(int)puVar3 * 8) = plVar12;
        }
        (**(code **)(*plVar12 + 0x78))(plVar12,param_2);
        iVar13 = *(int *)(param_1 + 0xc);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar13);
    if (0 < iVar13) {
      lVar14 = 0;
      do {
        plVar12 = *(long **)(*(long *)(param_1 + 0x18) + lVar14 * 8);
        if ((int)plVar12[0x23] == 1) {
          (**(code **)(*plVar12 + 0x30))(plVar12,param_2);
          iVar13 = *(int *)(param_1 + 0xc);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar13);
    }
  }
  FUN_10980b278(auStack_80);
  FUN_10980b22c(auStack_a0);
  FUN_10980501c(auStack_c0);
  FUN_10980501c(auStack_e0);
  return;
}



/* Entry: 10980a784; end: 10980a7bb;  */

long FUN_10980a784(long param_1)

{
  FUN_10980b278(param_1 + 0x60);
  FUN_10980b22c(param_1 + 0x40);
  FUN_10980501c(param_1 + 0x20);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980a7bc; end: 10980a89b;  */

void FUN_10980a7bc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x68))();
  if (((uint)plVar1 >> 3 & 1) != 0) {
    plVar1 = *(long **)(param_1 + 0x28);
    (**(code **)(*plVar1 + 0x48))();
    if (0 < (int)plVar1) {
      lVar5 = 0;
      do {
        plVar2 = *(long **)(param_1 + 0x28);
        (**(code **)(*plVar2 + 0x58))();
        lVar4 = *(long *)((long)plVar2 + lVar5);
        if (*(int *)(lVar4 + 0x360) != 0) {
          plVar2 = param_2;
          (**(code **)(*param_2 + 0x20))(param_2,0x350,1);
          lVar3 = lVar4;
          FUN_109822a54(lVar4,lVar4,plVar2[1],param_2);
          (**(code **)(*param_2 + 0x28))(param_2,plVar2,lVar3,0x544e4f43,lVar4);
        }
        lVar5 = lVar5 + 8;
      } while (((ulong)plVar1 & 0xffffffff) << 3 != lVar5);
    }
  }
  return;
}



/* Entry: 10980a89c; end: 10980a8ef;  */

void FUN_10980a89c(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN_10980a240(param_1,param_2);
  FUN_10980a7bc(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010980a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2);
  return;
}



/* Entry: 10980a8f0; end: 10980a933;  */

void FUN_10980a8f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



/* Entry: 10980a934; end: 10980a98f;  */

void FUN_10980a934(long param_1,long param_2)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = *(undefined4 *)(param_1 + 0x30);
  uStack_28 = 0xffffffff;
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined4 **)(param_2 + 8) = &uStack_28;
  }
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 8);
  return;
}



/* Entry: 10980a990; end: 10980a993;  */

void FUN_10980a990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10980a994; end: 10980a9db;  */

void FUN_10980a994(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x30) + 0x30) + (long)*(int *)(param_2 + 0x28) * 0x60);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  uStack_18 = puVar1[7];
  uStack_20 = puVar1[6];
  FUN_109809114(param_1,(long)*(int *)(param_2 + 0x28),&uStack_50,puVar1[8]);
  return;
}



/* Entry: 10980a9dc; end: 10980a9f3;  */

void FUN_10980a9dc(void)

{
  return;
}



/* Entry: 10980a9f4; end: 10980aa4f;  */

void FUN_10980a9f4(long param_1,long param_2)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_28 = 0xffffffff;
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined4 **)(param_2 + 8) = &uStack_28;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
  return;
}



/* Entry: 10980aa50; end: 10980ab43;  */

void FUN_10980aa50(undefined8 *param_1,float *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = param_2[3];
  *param_1 = &PTR_FUN_110b12558;
  *(float *)(param_1 + 7) = fVar3;
  *(float *)((long)param_1 + 0x3c) = fVar13;
  *(float *)(param_1 + 6) = fVar1;
  *(float *)((long)param_1 + 0x34) = fVar2;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[0x1c] = param_4;
  param_1[0x1d] = param_5;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  *(float *)(param_1 + 0x11) = fVar3;
  *(float *)((long)param_1 + 0x8c) = fVar13;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)((long)param_1 + 0x84) = fVar2;
  param_1[0x13] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  fVar7 = (float)*param_3 - *param_2;
  fVar8 = (float)((ulong)*param_3 >> 0x20) - param_2[1];
  fVar9 = (float)param_3[1] - param_2[2];
  auVar4._0_4_ = fVar7 * fVar7;
  auVar4._4_4_ = fVar8 * fVar8;
  auVar4._8_4_ = fVar9 * fVar9;
  auVar4._12_4_ = 0;
  auVar12 = NEON_ext(auVar4,auVar4,8,1);
  fVar10 = 1.0 / SQRT(auVar4._0_4_ + auVar4._4_4_ + auVar12._0_4_);
  fVar7 = fVar7 * fVar10;
  fVar8 = fVar8 * fVar10;
  fVar9 = fVar9 * fVar10;
  uVar14 = NEON_fmov(0x3f800000,4);
  uVar11 = CONCAT44((float)((ulong)uVar14 >> 0x20) / fVar8,(float)uVar14 / fVar7);
  uVar11 = uVar11 ^ (uVar11 ^ 0x5d5e0b6b5d5e0b6b) &
                    CONCAT44(-(uint)(fVar8 == 0.0),-(uint)(fVar7 == 0.0));
  param_1[2] = uVar11;
  fVar13 = 1e+18;
  if (fVar9 != 0.0) {
    fVar13 = 1.0 / fVar9;
  }
  *(float *)(param_1 + 3) = fVar13;
  param_1[4] = CONCAT44(-(uint)((float)(uVar11 >> 0x20) < 0.0),-(uint)((float)uVar11 < 0.0)) &
               0x100000001;
  *(uint *)(param_1 + 5) = (uint)(fVar13 < 0.0);
  auVar12._0_4_ = fVar7 * ((float)uVar5 - fVar1);
  auVar12._4_4_ = fVar8 * ((float)((ulong)uVar5 >> 0x20) - fVar2);
  auVar12._8_4_ = fVar9 * ((float)uVar6 - fVar3);
  auVar12._12_4_ = fVar10 * 0.0 * 0.0;
  auVar4 = NEON_ext(auVar12,auVar12,8,1);
  *(float *)((long)param_1 + 0x2c) = auVar12._0_4_ + auVar12._4_4_ + auVar4._0_4_;
  return;
}



/* Entry: 10980ab44; end: 10980adc3;  */

bool FUN_10980ab44(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  fVar3 = *(float *)(plVar1 + 1);
  if (fVar3 != 0.0) {
    lVar2 = *param_2;
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar2 + 200));
    if ((int)plVar1 != 0) {
      uStack_58 = *(undefined8 *)(lVar2 + 0xd0);
      lStack_48 = lVar2 + 0x10;
      uStack_60 = 0;
      uStack_40 = 0;
      uStack_38 = 0xffffffffffffffff;
      lStack_50 = lVar2;
      FUN_109808594(param_1 + 0x50,param_1 + 0x90,&uStack_60,*(undefined8 *)(param_1 + 0xe8));
    }
  }
  return fVar3 != 0.0;
}



/* Entry: 10980adc4; end: 10980aed7;  */

void FUN_10980adc4(float *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar8 = *param_1;
  fVar9 = param_1[5];
  fVar10 = param_1[10];
  fVar11 = fVar8 + fVar9 + fVar10;
  if (fVar11 <= 0.0) {
    bVar6 = fVar10 <= fVar8;
    lVar1 = 0;
    if (!bVar6) {
      lVar1 = 2;
    }
    uVar3 = 2;
    if (!bVar6) {
      uVar3 = 1;
    }
    bVar7 = fVar9 < fVar10;
    lVar4 = 2;
    if (!bVar7) {
      lVar4 = 1;
    }
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = 2;
    }
    uVar5 = (ulong)bVar6;
    if (fVar8 < fVar9) {
      uVar3 = (ulong)bVar7;
      uVar5 = uVar2;
      lVar1 = lVar4;
    }
    fVar11 = ((param_1[lVar1 * 5] - param_1[uVar5 * 5]) - param_1[uVar3 * 5]) + 1.0;
    fStack_4 = param_1[uVar3 * 4 + uVar5] - param_1[uVar5 * 4 + uVar3];
    fVar8 = param_1[uVar3 * 4 + lVar1];
    fVar9 = param_1[lVar1 * 4 + uVar3];
    *(float *)((ulong)&fStack_10 | uVar5 << 2) =
         param_1[uVar5 * 4 + lVar1] + param_1[lVar1 * 4 + uVar5];
    *(float *)((ulong)&fStack_10 | uVar3 << 2) = fVar8 + fVar9;
    *(float *)((ulong)&fStack_10 | lVar1 << 2) = fVar11;
  }
  else {
    fVar11 = fVar11 + 1.0;
    fStack_10 = param_1[9] - param_1[6];
    fStack_c = param_1[2] - param_1[8];
    fStack_8 = param_1[4] - param_1[1];
    fStack_4 = fVar11;
  }
  fVar8 = 0.5 / SQRT(fVar11);
  param_2[1] = CONCAT44(fStack_4 * fVar8,fStack_8 * fVar8);
  *param_2 = CONCAT44(fStack_c * fVar8,fStack_10 * fVar8);
  return;
}



/* Entry: 10980aed8; end: 10980af7f;  */

void FUN_10980aed8(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)param_2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar5 = 2.0 / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar7 = fVar5 * fVar2;
  fVar6 = fVar5 * fVar3;
  fVar8 = fVar5 * fVar1 * fVar4;
  fVar5 = fVar5 * fVar1 * fVar1;
  *param_1 = 1.0 - (fVar7 * fVar2 + fVar6 * fVar3);
  param_1[1] = fVar7 * fVar1 - fVar6 * fVar4;
  param_1[2] = fVar6 * fVar1 + fVar7 * fVar4;
  param_1[3] = 0.0;
  param_1[4] = fVar7 * fVar1 + fVar6 * fVar4;
  param_1[5] = 1.0 - (fVar5 + fVar6 * fVar3);
  param_1[6] = fVar6 * fVar2 - fVar8;
  param_1[7] = 0.0;
  param_1[8] = fVar6 * fVar1 - fVar7 * fVar4;
  param_1[9] = fVar6 * fVar2 + fVar8;
  param_1[10] = 1.0 - (fVar5 + fVar7 * fVar2);
  param_1[0xb] = 0.0;
  return;
}



/* Entry: 10980af80; end: 10980b013;  */

bool FUN_10980af80(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 200);
  fVar3 = *(float *)(plVar1 + 1);
  if (fVar3 != 0.0) {
    lVar2 = *param_2;
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar2 + 200));
    if ((int)plVar1 != 0) {
      uStack_58 = *(undefined8 *)(lVar2 + 0xd0);
      lStack_48 = lVar2 + 0x10;
      uStack_60 = 0;
      uStack_40 = 0;
      uStack_38 = 0xffffffffffffffff;
      lStack_50 = lVar2;
      FUN_109808c2c(*(undefined4 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),param_1 + 0x30,
                    param_1 + 0x70,&uStack_60,*(undefined8 *)(param_1 + 200));
    }
  }
  return fVar3 != 0.0;
}



/* Entry: 10980b014; end: 10980b02f;  */

void FUN_10980b014(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10980b030; end: 10980b207;  */

void FUN_10980b030(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar6 = *(float *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x34);
  fVar12 = *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x3c);
  fVar11 = *(float *)(param_1 + 0x40);
  fVar13 = *(float *)(param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x48);
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar29 = param_2[4];
  fVar31 = param_2[5];
  fVar32 = param_2[6];
  auVar21._0_4_ = fVar6 * fVar2;
  auVar21._4_4_ = fVar10 * fVar3;
  auVar21._8_4_ = fVar12 * fVar4;
  auVar21._12_4_ = fVar7 * param_2[3];
  auVar24._0_4_ = fVar2 * fVar11;
  auVar24._4_4_ = fVar3 * fVar13;
  auVar24._8_4_ = fVar4 * fVar15;
  auVar24._12_4_ = param_2[3] * fVar1;
  fVar26 = (float)*(undefined8 *)(param_1 + 0x50);
  auVar34._0_4_ = fVar2 * fVar26;
  fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  auVar34._4_4_ = fVar3 * fVar27;
  fVar28 = (float)*(undefined8 *)(param_1 + 0x58);
  auVar34._8_4_ = fVar4 * fVar28;
  auVar30 = NEON_ext(auVar21,auVar21,8,1);
  auVar33 = NEON_ext(auVar24,auVar24,8,1);
  auVar34._12_4_ = 0;
  auVar25 = NEON_ext(auVar34,auVar34,8,1);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar35 = auVar21._0_4_ + auVar21._4_4_ + auVar30._0_4_ + fVar14;
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar36 = auVar24._0_4_ + auVar24._4_4_ + auVar33._0_4_ + fVar18;
  fVar19 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar37 = auVar34._0_4_ + auVar34._4_4_ + auVar25._0_4_ + auVar25._4_4_ + fVar19;
  fStack_44 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  auVar33._0_4_ = fVar6 * fVar29;
  auVar33._4_4_ = fVar10 * fVar31;
  auVar33._8_4_ = fVar12 * fVar32;
  auVar33._12_4_ = fVar7 * param_2[7];
  auVar22._0_4_ = fVar11 * fVar29;
  auVar22._4_4_ = fVar13 * fVar31;
  auVar22._8_4_ = fVar15 * fVar32;
  auVar22._12_4_ = fVar1 * param_2[7];
  auVar23._0_4_ = fVar26 * fVar29;
  auVar23._4_4_ = fVar27 * fVar31;
  auVar23._8_4_ = fVar28 * fVar32;
  auVar30 = NEON_ext(auVar33,auVar33,8,1);
  auVar34 = NEON_ext(auVar22,auVar22,8,1);
  auVar23._12_4_ = 0;
  auVar25 = NEON_ext(auVar23,auVar23,8,1);
  fVar29 = fVar14 + auVar33._0_4_ + auVar33._4_4_ + auVar30._0_4_;
  fVar31 = fVar18 + auVar22._0_4_ + auVar22._4_4_ + auVar34._0_4_;
  fVar32 = fVar19 + auVar23._0_4_ + auVar23._4_4_ + auVar25._0_4_ + auVar25._4_4_;
  fStack_34 = fStack_44 + 0.0;
  uStack_28 = CONCAT44(fStack_44 + 0.0,fVar37);
  uStack_30 = CONCAT44(fVar36,fVar35);
  fVar2 = param_2[8];
  fVar3 = param_2[9];
  fVar4 = param_2[10];
  auVar25._0_4_ = fVar6 * fVar2;
  auVar25._4_4_ = fVar10 * fVar3;
  auVar25._8_4_ = fVar12 * fVar4;
  auVar25._12_4_ = fVar7 * param_2[0xb];
  auVar30._0_4_ = fVar11 * fVar2;
  auVar30._4_4_ = fVar13 * fVar3;
  auVar30._8_4_ = fVar15 * fVar4;
  auVar30._12_4_ = fVar1 * param_2[0xb];
  auVar20._0_4_ = fVar26 * fVar2;
  auVar20._4_4_ = fVar27 * fVar3;
  auVar20._8_4_ = fVar28 * fVar4;
  auVar33 = NEON_ext(auVar25,auVar25,8,1);
  auVar23 = NEON_ext(auVar30,auVar30,8,1);
  auVar20._12_4_ = 0;
  auVar34 = NEON_ext(auVar20,auVar20,8,1);
  fVar14 = fVar14 + auVar25._0_4_ + auVar25._4_4_ + auVar33._0_4_;
  fVar18 = fVar18 + auVar30._0_4_ + auVar30._4_4_ + auVar23._0_4_;
  fVar19 = fVar19 + auVar20._0_4_ + auVar20._4_4_ + auVar34._0_4_ + auVar34._4_4_;
  fStack_44 = fStack_44 + 0.0;
  fVar6 = (fVar35 + fVar29 + fVar14) * 0.33333334;
  fVar10 = (fVar36 + fVar31 + fVar18) * 0.33333334;
  uStack_60 = CONCAT44(fVar10,fVar6);
  fVar12 = (fVar37 + fVar32 + fVar19) * 0.33333334;
  uStack_58 = (ulong)(uint)fVar12;
  plVar5 = *(long **)(param_1 + 0x10);
  fStack_50 = fVar14;
  fStack_4c = fVar18;
  fStack_48 = fVar19;
  fStack_40 = fVar29;
  fStack_3c = fVar31;
  fStack_38 = fVar32;
  (**(code **)(*plVar5 + 0x70))();
  if (((uint)plVar5 >> 0xe & 1) != 0) {
    auVar8._0_4_ = fVar29 - fVar35;
    auVar8._4_4_ = fVar31 - fVar36;
    auVar8._8_4_ = fVar32 - fVar37;
    auVar8._12_4_ = 0;
    auVar16._0_4_ = fVar14 - fVar35;
    auVar16._4_4_ = fVar18 - fVar36;
    auVar16._8_4_ = fVar19 - fVar37;
    auVar16._12_4_ = 0;
    auVar25 = NEON_ext(auVar8,auVar8,0xc,1);
    auVar25 = NEON_ext(auVar25,auVar8,8,1);
    auVar30 = NEON_ext(auVar16,auVar16,0xc,1);
    auVar30 = NEON_ext(auVar30,auVar16,8,1);
    auVar9._0_4_ = auVar30._0_4_ * auVar8._0_4_ - auVar25._0_4_ * auVar16._0_4_;
    auVar9._4_4_ = auVar30._4_4_ * auVar8._4_4_ - auVar25._4_4_ * auVar16._4_4_;
    auVar9._8_4_ = auVar30._8_4_ * auVar8._8_4_ - auVar25._8_4_ * auVar16._8_4_;
    auVar9._12_4_ = auVar30._12_4_ * 0.0 - auVar25._12_4_ * 0.0;
    auVar25 = NEON_ext(auVar9,auVar9,0xc,1);
    auVar25 = NEON_ext(auVar25,auVar9,8,1);
    fVar7 = auVar25._0_4_;
    auVar17._0_4_ = fVar7 * fVar7;
    fVar11 = auVar25._4_4_;
    auVar17._4_4_ = fVar11 * fVar11;
    fVar13 = auVar25._8_4_;
    auVar17._8_4_ = fVar13 * fVar13;
    auVar17._12_4_ = 0;
    auVar25 = NEON_ext(auVar17,auVar17,8,1);
    fVar15 = 1.0 / SQRT(auVar25._0_4_ + auVar17._0_4_ + auVar17._4_4_);
    fStack_80 = fVar7 * fVar15 + fVar6;
    fStack_7c = fVar11 * fVar15 + fVar10;
    fStack_78 = fVar13 * fVar15 + fVar12;
    fStack_74 = fVar15 * 0.0 + 0.0;
    uStack_68 = 0;
    uStack_70 = 0x3f8000003f800000;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
              (*(long **)(param_1 + 0x10),&uStack_60,&fStack_80,&uStack_70);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))
            (*(long **)(param_1 + 0x10),&uStack_30,&fStack_40,&fStack_50,param_1 + 0x20);
  return;
}



/* Entry: 10980b208; end: 10980b22b;  */

void FUN_10980b208(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010980b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10980b22c; end: 10980b277;  */

long FUN_10980b22c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980b278; end: 10980b2c3;  */

long FUN_10980b278(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980b2c4; end: 10980b30f;  */

long FUN_10980b2c4(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980b310; end: 10980b38f;  */

void FUN_10980b310(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((long)param_2 + 4) + (int)*param_2;
  uVar1 = iVar2 + (iVar2 * 0x8000 ^ 0xffffffffU);
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar1 = (uVar1 ^ uVar1 >> 0x10) & *(int *)(param_1 + 0x48) - 1U;
  if ((uVar1 < *(uint *)(param_1 + 4)) &&
     (iVar2 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 4), iVar2 != -1)) {
    do {
      if (*param_2 == *(long *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 8)) {
        return;
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
    } while (iVar2 != -1);
  }
  return;
}



/* Entry: 10980b390; end: 10980b43b;  */

undefined8 *
FUN_10980b390(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_FUN_110b12690;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(char *)(param_1 + 0xe) = (char)param_5;
  param_1[0xf] = uVar3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar1 = param_4;
  if (param_5 == 0) {
    lVar1 = param_3;
  }
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(*(long *)(lVar1 + 8) + 0x68);
  FUN_10980b43c(param_1,param_3,param_4);
  return param_1;
}



/* Entry: 10980b43c; end: 10980b5eb;  */

void FUN_10980b43c(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [4];
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [4];
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar1 = param_2;
  if (*(char *)(param_1 + 0x70) == '\0') {
    lVar1 = param_3;
    param_3 = param_2;
  }
  lVar8 = *(long *)(param_3 + 8);
  uVar2 = *(uint *)(lVar8 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x54);
  if ((int)uVar3 < (int)uVar2) {
    lVar9 = (long)(int)uVar3;
    if (*(int *)(param_1 + 0x58) < (int)uVar2) {
      if (uVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (long)(int)uVar2 << 3;
        FUN_1098256f4(lVar4,0x10);
        uVar3 = *(uint *)(param_1 + 0x54);
      }
      if (0 < (int)uVar3) {
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar6);
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar3 << 3 != lVar6);
      }
      if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(param_1 + 0x68) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x68) = 1;
      *(long *)(param_1 + 0x60) = lVar4;
      *(uint *)(param_1 + 0x58) = uVar2;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar9 * 8) = 0;
      lVar9 = lVar9 + 1;
    } while ((int)uVar2 != lVar9);
  }
  *(uint *)(param_1 + 0x54) = uVar2;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    lVar9 = 0x40;
    do {
      if (*(long *)(lVar8 + 0x60) == 0) {
        uStack_88 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar9);
        uStack_78 = *(undefined8 *)(param_3 + 0x18);
        uStack_80 = *(undefined8 *)(param_3 + 0x10);
        uStack_70 = 0;
        uStack_64 = (undefined4)uVar7;
        uStack_68 = 0xffffffff;
        plVar5 = *(long **)(param_1 + 8);
        lStack_90 = param_3;
        (**(code **)(*plVar5 + 0x10))(plVar5,&lStack_90,lVar1,*(undefined8 *)(param_1 + 0x78),1);
        *(long **)(*(long *)(param_1 + 0x60) + uVar7 * 8) = plVar5;
        uStack_98 = 1;
        uStack_a0 = 0;
        uStack_ac = 0;
        uStack_b8 = 1;
        uStack_c0 = 0;
        uStack_cc = 0;
        FUN_10980c560(auStack_d0);
        FUN_10980c560(auStack_b0);
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar7 * 8) = 0;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x60;
    } while (uVar2 != uVar7);
  }
  return;
}



/* Entry: 10980b5ec; end: 10980b65f;  */

void FUN_10980b5ec(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x60) + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)();
        (**(code **)(**(long **)(param_1 + 8) + 0x78))
                  (*(long **)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  return;
}



/* Entry: 10980b660; end: 10980b6ab;  */

undefined8 * FUN_10980b660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12690;
  FUN_10980b5ec();
  FUN_10980c560(param_1 + 10);
  FUN_1098079e0(param_1 + 6);
  FUN_10980246c(param_1 + 2);
  return param_1;
}



/* Entry: 10980b6ac; end: 10980b6af;  */

undefined8 * FUN_10980b6ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12690;
  FUN_10980b5ec();
  FUN_10980c560(param_1 + 10);
  FUN_1098079e0(param_1 + 6);
  FUN_10980246c(param_1 + 2);
  return param_1;
}



/* Entry: 10980b6b0; end: 10980b6c3;  */

void FUN_10980b6b0(void)

{
  FUN_10980b660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10980b6c4; end: 10980bf97;  */

void FUN_10980b6c4(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [12];
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  float fVar57;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar1 = param_2;
  lVar10 = param_3;
  if (*(char *)(param_1 + 0x70) == '\0') {
    lVar1 = param_3;
    lVar10 = param_2;
  }
  lVar28 = *(long *)(lVar10 + 8);
  if (*(int *)(lVar28 + 0x68) != *(int *)(param_1 + 0x84)) {
    FUN_10980b5ec(param_1);
    FUN_10980b43c(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar28 + 0x68);
  }
  uVar13 = *(uint *)(param_1 + 0x54);
  if (uVar13 != 0) {
    plVar25 = *(long **)(lVar28 + 0x60);
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    uStack_98 = *(undefined8 *)(param_1 + 0x60);
    uStack_90 = *(undefined8 *)(param_1 + 0x78);
    ppuStack_c8 = &PTR_FUN_110b126e0;
    lVar23 = (long)*(int *)(param_1 + 0x34);
    lStack_c0 = lVar10;
    lStack_b8 = lVar1;
    uStack_a8 = param_4;
    lStack_a0 = param_5;
    if (*(int *)(param_1 + 0x34) < 0) {
      if (*(int *)(param_1 + 0x38) < 0) {
        if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 0x48) = 1;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar23 * 8) = 0;
        lVar23 = lVar23 + 1;
      } while ((int)lVar23 != 0);
      uVar13 = *(uint *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (0 < (int)uVar13) {
      lVar23 = 0;
      do {
        plVar11 = *(long **)(*(long *)(param_1 + 0x60) + lVar23 * 8);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,param_1 + 0x30);
          iVar17 = *(int *)(param_1 + 0x34);
          if (iVar17 < 1) {
LAB_10980b858:
            if (iVar17 < 0) {
              if (*(int *)(param_1 + 0x38) < 0) {
                if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) == '\x01')) {
                  FUN_109825740();
                }
                *(undefined1 *)(param_1 + 0x48) = 1;
                *(undefined8 *)(param_1 + 0x40) = 0;
                *(undefined4 *)(param_1 + 0x38) = 0;
              }
              lVar29 = (long)iVar17;
              do {
                *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar29 * 8) = 0;
                lVar29 = lVar29 + 1;
              } while ((int)lVar29 != 0);
            }
          }
          else {
            lVar29 = 0;
            do {
              lVar12 = *(long *)(*(long *)(param_1 + 0x40) + lVar29 * 8);
              if (*(int *)(lVar12 + 0x360) != 0) {
                *(long *)(param_5 + 8) = lVar12;
                lVar18 = *(long *)(*(long *)(param_5 + 0x10) + 0x10);
                lVar21 = *(long *)(*(long *)(param_5 + 0x18) + 0x10);
                lVar2 = lVar18;
                if (*(long *)(lVar12 + 0x350) != lVar18) {
                  lVar2 = lVar21;
                  lVar21 = lVar18;
                }
                FUN_10982280c(lVar12,lVar2 + 0x10,lVar21 + 0x10);
                *(undefined8 *)(param_5 + 8) = 0;
                iVar17 = *(int *)(param_1 + 0x34);
              }
              lVar29 = lVar29 + 1;
            } while (lVar29 < iVar17);
            if (iVar17 < 1) goto LAB_10980b858;
          }
          *(undefined4 *)(param_1 + 0x34) = 0;
          uVar13 = *(uint *)(param_1 + 0x54);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < (int)uVar13);
    }
    if (plVar25 == (long *)0x0) {
      if (0 < (int)uVar13) {
        uVar19 = 0;
        lVar23 = 0x40;
        do {
          FUN_10980bf98(&ppuStack_c8,*(undefined8 *)(*(long *)(lVar28 + 0x30) + lVar23),uVar19);
          uVar19 = uVar19 + 1;
          lVar23 = lVar23 + 0x60;
        } while (uVar13 != uVar19);
      }
    }
    else {
      pauVar15 = *(undefined1 (**) [12])(lVar10 + 0x18);
      fVar70 = (float)*(undefined8 *)(*pauVar15 + 8);
      fVar35 = (float)*(undefined8 *)*pauVar15;
      fVar39 = (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
      fVar48 = (float)*(undefined8 *)pauVar15[2];
      uVar3 = *(undefined8 *)(pauVar15[1] + 4);
      fVar42 = *(float *)(pauVar15[1] + 4);
      fVar72 = (float)uVar3;
      fVar45 = (float)((ulong)uVar3 >> 0x20);
      auVar60 = *(undefined1 (*) [16])(pauVar15[2] + 8);
      fVar64 = SUB124(*pauVar15,0);
      uVar31 = SUB124(*pauVar15,8);
      fVar30 = auVar60._4_4_;
      auVar66 = NEON_ext(auVar60,auVar60,8,1);
      puVar16 = *(undefined8 **)(lVar1 + 0x18);
      fVar73 = (float)puVar16[1];
      fVar69 = (float)*puVar16;
      fVar71 = (float)((ulong)*puVar16 >> 0x20);
      fVar47 = *(float *)(puVar16 + 2);
      fVar49 = *(float *)((long)puVar16 + 0x14);
      fVar32 = *(float *)(puVar16 + 3);
      fVar33 = *(float *)(puVar16 + 4);
      fVar34 = *(float *)((long)puVar16 + 0x24);
      fVar38 = *(float *)(puVar16 + 5);
      fVar62 = *(float *)(puVar16 + 6);
      fVar63 = *(float *)((long)puVar16 + 0x34);
      fVar44 = *(float *)(puVar16 + 7);
      fVar57 = auVar60._0_4_;
      auVar74._4_4_ = fVar42;
      auVar74._0_4_ = fVar64;
      auVar74._8_4_ = uVar31;
      auVar74._12_4_ = *(undefined4 *)pauVar15[2];
      auVar77._4_4_ = fVar42;
      auVar77._0_4_ = fVar64;
      auVar77._8_4_ = uVar31;
      auVar77._12_4_ = *(undefined4 *)pauVar15[2];
      auVar77 = NEON_ext(auVar74,auVar77,8,1);
      fVar61 = auVar60._8_4_;
      fVar37 = (float)*(undefined8 *)pauVar15[4];
      fVar43 = fVar64 * -fVar37;
      fVar40 = (float)((ulong)*(undefined8 *)pauVar15[4] >> 0x20);
      fVar46 = fVar42 * -fVar40;
      fVar36 = (float)*(undefined8 *)(pauVar15[4] + 8);
      fVar41 = (float)((ulong)*(undefined8 *)(pauVar15[4] + 8) >> 0x20);
      fVar50 = -fVar41 * 0.0;
      auVar58._0_4_ = fVar39 * -fVar37;
      auVar58._4_4_ = fVar45 * -fVar40;
      auVar58._8_4_ = fVar30 * -fVar36;
      auVar58._12_4_ = -fVar41 * 0.0;
      auVar65._4_4_ = fVar46;
      auVar65._0_4_ = fVar43;
      auVar65._8_4_ = fVar57 * -fVar36;
      auVar65._12_4_ = fVar50;
      auVar67._4_4_ = fVar46;
      auVar67._0_4_ = fVar43;
      auVar67._8_4_ = fVar57 * -fVar36;
      auVar67._12_4_ = fVar50;
      auVar65 = NEON_ext(auVar65,auVar67,8,1);
      auVar74 = NEON_ext(auVar58,auVar58,8,1);
      fVar41 = auVar77._0_4_ * -fVar37;
      fVar37 = auVar77._4_4_ * -fVar40;
      uVar51 = (undefined1)((uint)fVar37 >> 8);
      uVar52 = (undefined1)((uint)fVar37 >> 0x10);
      uVar53 = (undefined1)((uint)fVar37 >> 0x18);
      fVar36 = auVar66._0_4_ * -fVar36;
      uVar54 = (undefined1)((uint)fVar36 >> 8);
      uVar55 = (undefined1)((uint)fVar36 >> 0x10);
      uVar56 = (undefined1)((uint)fVar36 >> 0x18);
      auVar75[4] = SUB41(fVar37,0);
      auVar75._0_4_ = fVar41;
      auVar75[5] = uVar51;
      auVar75[6] = uVar52;
      auVar75[7] = uVar53;
      auVar75[8] = SUB41(fVar36,0);
      auVar75[9] = uVar54;
      auVar75[10] = uVar55;
      auVar75[0xb] = uVar56;
      auVar75._12_4_ = 0;
      auVar4[4] = SUB41(fVar37,0);
      auVar4._0_4_ = fVar41;
      auVar4[5] = uVar51;
      auVar4[6] = uVar52;
      auVar4[7] = uVar53;
      auVar4[8] = SUB41(fVar36,0);
      auVar4[9] = uVar54;
      auVar4[10] = uVar55;
      auVar4[0xb] = uVar56;
      auVar4._12_4_ = 0;
      auVar67 = NEON_ext(auVar75,auVar4,8,1);
      auVar59._0_4_ = fVar64 * fVar62;
      auVar59._4_4_ = fVar42 * fVar63;
      auVar59._8_4_ = fVar57 * fVar44;
      auVar59._12_4_ = *(float *)((long)puVar16 + 0x3c) * 0.0;
      fVar36 = fVar39 * fVar62;
      fVar40 = fVar45 * fVar63;
      fVar42 = *(float *)((long)puVar16 + 0x3c) * 0.0;
      fVar62 = auVar77._0_4_ * fVar62;
      fVar63 = auVar77._4_4_ * fVar63;
      fVar64 = auVar66._0_4_ * fVar44;
      auVar60._4_4_ = fVar40;
      auVar60._0_4_ = fVar36;
      auVar60._8_4_ = fVar30 * fVar44;
      auVar60._12_4_ = fVar42;
      auVar66._4_4_ = fVar40;
      auVar66._0_4_ = fVar36;
      auVar66._8_4_ = fVar30 * fVar44;
      auVar66._12_4_ = fVar42;
      auVar66 = NEON_ext(auVar60,auVar66,8,1);
      auVar5._4_4_ = fVar63;
      auVar5._0_4_ = fVar62;
      auVar5._8_4_ = fVar64;
      auVar5._12_4_ = 0;
      auVar6._4_4_ = fVar63;
      auVar6._0_4_ = fVar62;
      auVar6._8_4_ = fVar64;
      auVar6._12_4_ = 0;
      auVar75 = NEON_ext(auVar5,auVar6,8,1);
      auVar60 = NEON_ext(auVar59,auVar59,8,1);
      uStack_100 = CONCAT44(auVar74._0_4_ + auVar58._0_4_ + auVar58._4_4_ +
                            fVar36 + fVar40 + auVar66._0_4_,
                            auVar65._0_4_ + fVar43 + fVar46 +
                            auVar59._0_4_ + auVar59._4_4_ + auVar60._0_4_);
      uStack_f8 = (ulong)(uint)(fVar41 + fVar37 + auVar67._0_4_ + auVar67._4_4_ +
                               fVar62 + fVar63 + auVar75._0_4_ + auVar75._4_4_);
      uStack_128 = CONCAT44(fVar35 * 0.0 + fVar72 * 0.0 + fVar57 * 0.0,
                            fVar73 * fVar35 + fVar32 * fVar72 + fVar38 * fVar57);
      uStack_130 = CONCAT44(fVar71 * fVar35 + fVar49 * fVar72 + fVar34 * fVar57,
                            fVar69 * fVar35 + fVar47 * fVar72 + fVar33 * fVar57);
      uStack_118 = CONCAT44(fVar39 * 0.0 + fVar45 * 0.0 + fVar30 * 0.0,
                            fVar73 * fVar39 + fVar32 * fVar45 + fVar38 * fVar30);
      uStack_120 = CONCAT44(fVar71 * fVar39 + fVar49 * fVar45 + fVar34 * fVar30,
                            fVar69 * fVar39 + fVar47 * fVar45 + fVar33 * fVar30);
      uStack_108 = CONCAT44(fVar70 * 0.0 + fVar48 * 0.0 + fVar61 * 0.0,
                            fVar73 * fVar70 + fVar32 * fVar48 + fVar38 * fVar61);
      uStack_110 = CONCAT44(fVar71 * fVar70 + fVar49 * fVar48 + fVar34 * fVar61,
                            fVar69 * fVar70 + fVar47 * fVar48 + fVar33 * fVar61);
      (**(code **)(**(long **)(lVar1 + 8) + 0x10))
                (*(long **)(lVar1 + 8),&uStack_130,&uStack_e0,&uStack_f0);
      fVar41 = *(float *)(param_5 + 0x30);
      fVar40 = (float)uStack_e0 - fVar41;
      fVar47 = (float)((ulong)uStack_e0 >> 0x20) - fVar41;
      fVar49 = (float)uStack_d8 - fVar41;
      fVar37 = (float)uStack_f0 + fVar41;
      fVar36 = (float)((ulong)uStack_f0 >> 0x20) + fVar41;
      fVar41 = (float)uStack_e8 + fVar41;
      uStack_e8 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) + 0.0,fVar41);
      uStack_f0 = CONCAT44(fVar36,fVar37);
      uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) - 0.0,fVar49);
      uStack_e0 = CONCAT44(fVar47,fVar40);
      lVar23 = *plVar25;
      if (lVar23 != 0) {
        uVar13 = *(uint *)(param_1 + 0x18);
        lVar29 = (long)*(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x14) < 0) {
          if ((int)uVar13 < 0) {
            if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
              FUN_109825740();
            }
            uVar13 = 0;
            *(undefined1 *)(param_1 + 0x28) = 1;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar29 * 8) = 0;
            lVar29 = lVar29 + 1;
          } while ((int)lVar29 != 0);
        }
        uVar14 = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        if ((int)uVar13 < 0x40) {
          lVar29 = 0x200;
          FUN_1098256f4(0x200,0x10);
          uVar14 = *(uint *)(param_1 + 0x14);
          if (0 < (int)uVar14) {
            lVar12 = 0;
            do {
              *(undefined8 *)(lVar29 + lVar12) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar12)
              ;
              lVar12 = lVar12 + 8;
            } while ((ulong)uVar14 * 8 - lVar12 != 0);
          }
          if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
            FUN_109825740();
            uVar14 = *(uint *)(param_1 + 0x14);
          }
          *(undefined1 *)(param_1 + 0x28) = 1;
          *(long *)(param_1 + 0x20) = lVar29;
          uVar13 = 0x40;
          *(undefined4 *)(param_1 + 0x18) = 0x40;
        }
        if (uVar14 == uVar13) {
          lVar29 = (ulong)(uVar13 << 1) << 3;
          FUN_1098256f4(lVar29,0x10);
          uVar14 = *(uint *)(param_1 + 0x14);
          if (0 < (int)uVar14) {
            lVar12 = 0;
            do {
              *(undefined8 *)(lVar29 + lVar12) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar12)
              ;
              lVar12 = lVar12 + 8;
            } while ((ulong)uVar14 * 8 - lVar12 != 0);
          }
          if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
            FUN_109825740();
            uVar14 = *(uint *)(param_1 + 0x14);
          }
          *(undefined1 *)(param_1 + 0x28) = 1;
          *(long *)(param_1 + 0x20) = lVar29;
          *(uint *)(param_1 + 0x18) = uVar13 << 1;
        }
        else {
          lVar29 = *(long *)(param_1 + 0x20);
        }
        *(long *)(lVar29 + (long)(int)uVar14 * 8) = lVar23;
        uVar19 = (ulong)(uVar14 + 1);
        do {
          iVar17 = (int)uVar19;
          uVar13 = iVar17 - 1;
          uVar19 = (ulong)uVar13;
          uVar24 = *(ulong *)(param_1 + 0x20);
          pfVar22 = *(float **)(uVar24 + (long)(int)uVar13 * 8);
          *(uint *)(param_1 + 0x14) = uVar13;
          if (((((*pfVar22 <= fVar37) && (fVar40 <= pfVar22[4])) && (pfVar22[1] <= fVar36)) &&
              ((fVar47 <= pfVar22[5] && (pfVar22[2] <= fVar41)))) && (fVar49 <= pfVar22[6])) {
            if (*(long *)(pfVar22 + 0xc) == 0) {
              (*(code *)ppuStack_c8[3])(&ppuStack_c8,pfVar22);
              uVar19 = (ulong)*(uint *)(param_1 + 0x14);
            }
            else {
              lVar23 = (long)(int)uVar13;
              uVar27 = (ulong)*(uint *)(param_1 + 0x18);
              if (uVar13 == *(uint *)(param_1 + 0x18)) {
                uVar14 = uVar13 * 2;
                if (uVar13 == 0) {
                  uVar14 = 1;
                }
                uVar27 = (ulong)uVar14;
                if (iVar17 <= (int)uVar14) {
                  if (uVar14 == 0) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar27 << 3;
                    FUN_1098256f4(uVar24,0x10);
                    uVar19 = (ulong)*(uint *)(param_1 + 0x14);
                  }
                  if (0 < (int)uVar19) {
                    lVar23 = 0;
                    do {
                      *(undefined8 *)(uVar24 + lVar23) =
                           *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar23);
                      lVar23 = lVar23 + 8;
                    } while (uVar19 << 3 != lVar23);
                  }
                  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
                    FUN_109825740();
                    uVar19 = (ulong)*(uint *)(param_1 + 0x14);
                  }
                  *(undefined1 *)(param_1 + 0x28) = 1;
                  *(ulong *)(param_1 + 0x20) = uVar24;
                  *(uint *)(param_1 + 0x18) = uVar14;
                  lVar23 = (long)(int)uVar19;
                  iVar17 = (int)uVar19 + 1;
                  goto LAB_10980bcb4;
                }
                *(undefined8 *)(uVar24 + lVar23 * 8) = *(undefined8 *)(pfVar22 + 10);
              }
              else {
LAB_10980bcb4:
                *(undefined8 *)(uVar24 + lVar23 * 8) = *(undefined8 *)(pfVar22 + 10);
                *(int *)(param_1 + 0x14) = iVar17;
                iVar26 = (int)uVar27;
                if (iVar17 == iVar26) {
                  uVar13 = iVar26 << 1;
                  if (iVar26 == 0) {
                    uVar13 = 1;
                  }
                  iVar17 = iVar26;
                  if (iVar26 < (int)uVar13) {
                    if (uVar13 == 0) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3;
                      FUN_1098256f4(uVar19,0x10);
                      uVar27 = (ulong)*(uint *)(param_1 + 0x14);
                    }
                    if (0 < (int)uVar27) {
                      lVar23 = 0;
                      do {
                        *(undefined8 *)(uVar19 + lVar23) =
                             *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar23);
                        lVar23 = lVar23 + 8;
                      } while (uVar27 << 3 != lVar23);
                    }
                    if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0))
                    {
                      FUN_109825740();
                      uVar27 = (ulong)*(uint *)(param_1 + 0x14);
                    }
                    *(undefined1 *)(param_1 + 0x28) = 1;
                    *(ulong *)(param_1 + 0x20) = uVar19;
                    *(uint *)(param_1 + 0x18) = uVar13;
                    iVar17 = (int)uVar27;
                  }
                }
              }
              *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar17 * 8) =
                   *(undefined8 *)(pfVar22 + 0xc);
              uVar19 = (ulong)(iVar17 + 1U);
              *(uint *)(param_1 + 0x14) = iVar17 + 1U;
            }
          }
        } while (0 < (int)uVar19);
      }
    }
    uVar13 = *(uint *)(param_1 + 0x54);
    lVar23 = (long)*(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x34) < 0) {
      if (*(int *)(param_1 + 0x38) < 0) {
        if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 0x48) = 1;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar23 * 8) = 0;
        lVar23 = lVar23 + 1;
      } while ((int)lVar23 != 0);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (0 < (int)uVar13) {
      lVar29 = 0;
      lVar23 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0x60) + lVar29) != 0) {
          puVar16 = (undefined8 *)(*(long *)(lVar28 + 0x30) + lVar23);
          puVar20 = *(undefined8 **)(lVar10 + 0x18);
          fVar63 = (float)puVar20[3];
          fVar38 = (float)puVar20[2];
          fVar62 = (float)((ulong)puVar20[2] >> 0x20);
          fVar64 = (float)puVar16[1];
          fVar44 = (float)*puVar16;
          fVar42 = (float)((ulong)*puVar16 >> 0x20);
          auVar60 = *(undefined1 (*) [16])(puVar20 + 4);
          auVar66 = *(undefined1 (*) [16])(puVar16 + 4);
          fVar40 = *(float *)(puVar16 + 6);
          fVar47 = *(float *)((long)puVar16 + 0x34);
          fVar49 = *(float *)(puVar16 + 7);
          fVar32 = (float)*puVar20;
          fVar70 = fVar32 * fVar40;
          fVar33 = (float)((ulong)*puVar20 >> 0x20);
          fVar72 = fVar33 * fVar47;
          fVar34 = (float)puVar20[1];
          fVar41 = (float)((ulong)puVar20[1] >> 0x20) * *(float *)((long)puVar16 + 0x3c);
          auVar76._0_4_ = fVar38 * fVar40;
          auVar76._4_4_ = fVar62 * fVar47;
          auVar76._8_4_ = fVar63 * fVar49;
          auVar76._12_4_ = (float)((ulong)puVar20[3] >> 0x20) * *(float *)((long)puVar16 + 0x3c);
          auVar7._4_4_ = fVar72;
          auVar7._0_4_ = fVar70;
          auVar7._8_4_ = fVar34 * fVar49;
          auVar7._12_4_ = fVar41;
          auVar8._4_4_ = fVar72;
          auVar8._0_4_ = fVar70;
          auVar8._8_4_ = fVar34 * fVar49;
          auVar8._12_4_ = fVar41;
          auVar65 = NEON_ext(auVar7,auVar8,8,1);
          auVar67 = NEON_ext(auVar76,auVar76,8,1);
          fVar30 = auVar60._0_4_;
          fVar41 = (float)puVar16[2];
          fVar37 = (float)((ulong)puVar16[2] >> 0x20);
          fVar36 = (float)puVar16[3];
          fVar35 = auVar60._4_4_;
          auVar68._0_4_ = fVar30 * fVar40;
          auVar68._4_4_ = fVar35 * fVar47;
          fVar40 = auVar60._8_4_;
          auVar68._8_4_ = fVar40 * fVar49;
          auVar68._12_4_ = 0;
          auVar60 = NEON_ext(auVar68,auVar68,8,1);
          fVar47 = auVar66._0_4_;
          fVar49 = auVar66._4_4_;
          fVar39 = auVar66._8_4_;
          uStack_100 = CONCAT44((float)((ulong)puVar20[6] >> 0x20) +
                                auVar76._0_4_ + auVar76._4_4_ + auVar67._0_4_,
                                (float)puVar20[6] + fVar70 + fVar72 + auVar65._0_4_);
          uStack_f8 = CONCAT44((float)((ulong)puVar20[7] >> 0x20) + 0.0,
                               (float)puVar20[7] +
                               auVar68._0_4_ + auVar68._4_4_ + auVar60._0_4_ + auVar60._4_4_);
          uStack_128 = CONCAT44(fVar32 * 0.0 + fVar33 * 0.0 + fVar34 * 0.0,
                                fVar64 * fVar32 + fVar36 * fVar33 + fVar39 * fVar34);
          uStack_130 = CONCAT44(fVar42 * fVar32 + fVar37 * fVar33 + fVar49 * fVar34,
                                fVar44 * fVar32 + fVar41 * fVar33 + fVar47 * fVar34);
          uStack_118 = CONCAT44(fVar38 * 0.0 + fVar62 * 0.0 + fVar63 * 0.0,
                                fVar64 * fVar38 + fVar36 * fVar62 + fVar39 * fVar63);
          uStack_120 = CONCAT44(fVar42 * fVar38 + fVar37 * fVar62 + fVar49 * fVar63,
                                fVar44 * fVar38 + fVar41 * fVar62 + fVar47 * fVar63);
          uStack_108 = CONCAT44(fVar30 * 0.0 + fVar35 * 0.0 + fVar40 * 0.0,
                                fVar64 * fVar30 + fVar36 * fVar35 + fVar39 * fVar40);
          uStack_110 = CONCAT44(fVar42 * fVar30 + fVar37 * fVar35 + fVar49 * fVar40,
                                fVar44 * fVar30 + fVar41 * fVar35 + fVar47 * fVar40);
          (**(code **)(*(long *)puVar16[8] + 0x10))
                    ((long *)puVar16[8],&uStack_130,&uStack_e0,&uStack_f0);
          (**(code **)(**(long **)(lVar1 + 8) + 0x10))
                    (*(long **)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x18),&fStack_140,&fStack_150);
          if ((fStack_150 < (float)uStack_e0) || ((float)uStack_f0 < fStack_140)) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          if ((fStack_148 < (float)uStack_d8) || ((float)uStack_e8 < fStack_138)) {
            bVar9 = 1;
          }
          if ((fStack_14c < uStack_e0._4_4_) ||
             (!(bool)(fStack_13c <= uStack_f0._4_4_ & (bVar9 ^ 1)))) {
            (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x60) + lVar29))();
            (**(code **)(**(long **)(param_1 + 8) + 0x78))
                      (*(long **)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar29));
            *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar29) = 0;
          }
        }
        lVar23 = lVar23 + 0x60;
        lVar29 = lVar29 + 8;
      } while ((ulong)uVar13 * 0x60 - lVar23 != 0);
    }
  }
  return;
}



/* Entry: 10980bf98; end: 10980c33b;  */

void FUN_10980bf98(long param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  iVar9 = (int)param_3;
  puVar12 = (undefined8 *)
            (*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x30) + (long)iVar9 * 0x60);
  fVar23 = (float)puVar12[1];
  fVar26 = (float)puVar12[3];
  fVar27 = (float)puVar12[7];
  fVar19 = (float)((ulong)puVar12[7] >> 0x20);
  fVar30 = (float)puVar12[6];
  fVar31 = (float)((ulong)puVar12[6] >> 0x20);
  fVar29 = (float)puVar12[5];
  fVar14 = (float)puVar10[2];
  fVar21 = (float)*puVar12;
  fVar22 = (float)((ulong)*puVar12 >> 0x20);
  fVar34 = (float)*puVar10;
  fVar35 = fVar34 * fVar30;
  fVar15 = (float)((ulong)*puVar10 >> 0x20);
  fVar36 = fVar15 * fVar31;
  fVar17 = (float)puVar10[1];
  fVar37 = (float)((ulong)puVar10[1] >> 0x20) * fVar19;
  auVar38._0_4_ = fVar14 * fVar30;
  fVar16 = (float)((ulong)puVar10[2] >> 0x20);
  auVar38._4_4_ = fVar16 * fVar31;
  fVar18 = (float)puVar10[3];
  auVar38._8_4_ = fVar18 * fVar27;
  auVar38._12_4_ = (float)((ulong)puVar10[3] >> 0x20) * fVar19;
  auVar41._4_4_ = fVar36;
  auVar41._0_4_ = fVar35;
  auVar41._8_4_ = fVar17 * fVar27;
  auVar41._12_4_ = fVar37;
  auVar43._4_4_ = fVar36;
  auVar43._0_4_ = fVar35;
  auVar43._8_4_ = fVar17 * fVar27;
  auVar43._12_4_ = fVar37;
  auVar41 = NEON_ext(auVar41,auVar43,8,1);
  auVar43 = NEON_ext(auVar38,auVar38,8,1);
  fVar19 = (float)puVar10[4];
  fVar24 = (float)puVar12[2];
  fVar25 = (float)((ulong)puVar12[2] >> 0x20);
  fVar37 = (float)((ulong)puVar10[4] >> 0x20);
  fVar30 = fVar19 * fVar30;
  fVar31 = fVar37 * fVar31;
  fVar20 = (float)puVar10[5];
  auVar39._4_4_ = fVar31;
  auVar39._0_4_ = fVar30;
  auVar39._8_4_ = fVar20 * fVar27;
  auVar39._12_4_ = 0;
  auVar42._4_4_ = fVar31;
  auVar42._0_4_ = fVar30;
  auVar42._8_4_ = fVar20 * fVar27;
  auVar42._12_4_ = 0;
  auVar39 = NEON_ext(auVar39,auVar42,8,1);
  fVar27 = (float)puVar12[4];
  fVar28 = (float)((ulong)puVar12[4] >> 0x20);
  uStack_90 = CONCAT44(fVar22 * fVar34 + fVar25 * fVar15 + fVar28 * fVar17,
                       fVar21 * fVar34 + fVar24 * fVar15 + fVar27 * fVar17);
  uStack_88 = CONCAT44(fVar34 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0,
                       fVar23 * fVar34 + fVar26 * fVar15 + fVar29 * fVar17);
  fStack_70 = fVar21 * fVar19 + fVar24 * fVar37 + fVar27 * fVar20;
  fStack_6c = fVar22 * fVar19 + fVar25 * fVar37 + fVar28 * fVar20;
  fStack_68 = fVar23 * fVar19 + fVar26 * fVar37 + fVar29 * fVar20;
  fStack_64 = fVar19 * 0.0 + fVar37 * 0.0 + fVar20 * 0.0;
  uStack_60 = CONCAT44((float)((ulong)puVar10[6] >> 0x20) +
                       auVar38._0_4_ + auVar38._4_4_ + auVar43._0_4_,
                       (float)puVar10[6] + fVar35 + fVar36 + auVar41._0_4_);
  uStack_58 = CONCAT44((float)((ulong)puVar10[7] >> 0x20) + 0.0,
                       (float)puVar10[7] + fVar30 + fVar31 + auVar39._0_4_ + auVar39._4_4_);
  uStack_78 = CONCAT44(fVar14 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0,
                       fVar23 * fVar14 + fVar26 * fVar16 + fVar29 * fVar18);
  uStack_80 = CONCAT44(fVar22 * fVar14 + fVar25 * fVar16 + fVar28 * fVar18,
                       fVar21 * fVar14 + fVar24 * fVar16 + fVar27 * fVar18);
  (**(code **)(*param_2 + 0x10))(param_2,&uStack_90,&fStack_a0,&fStack_b0);
  fVar34 = *(float *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar6 = (ulong)_fStack_a0 >> 0x20;
  fStack_a0 = (float)_fStack_a0 - fVar34;
  fStack_9c = (float)uVar6 - fVar34;
  uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) - 0.0,(float)uStack_98 - fVar34);
  fVar15 = (float)_fStack_b0;
  fStack_ac = (float)((ulong)_fStack_b0 >> 0x20) + fVar34;
  uStack_a8 = CONCAT44((float)((ulong)uStack_a8 >> 0x20) + 0.0,(float)uStack_a8 + fVar34);
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  fStack_b0 = fVar15 + fVar34;
  (**(code **)(*plVar7 + 0x10))
            (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),&fStack_c0,&fStack_d0);
  if ((fStack_d0 < fStack_a0) || (fStack_b0 < fStack_c0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((fStack_c8 < (float)uStack_98) || ((float)uStack_a8 < fStack_b8)) {
    bVar1 = true;
  }
  if (fStack_9c <= fStack_cc) {
    if (fStack_ac < fStack_bc) {
      bVar1 = true;
    }
    if (!bVar1) {
      uStack_108 = puVar12[1];
      uStack_110 = *puVar12;
      uStack_f8 = puVar12[3];
      fVar17 = (float)uStack_f8;
      uStack_100 = puVar12[2];
      fVar34 = (float)uStack_100;
      fVar15 = (float)((ulong)uStack_100 >> 0x20);
      uStack_e8 = puVar12[5];
      uStack_f0 = puVar12[4];
      uStack_d8 = puVar12[7];
      uStack_e0 = puVar12[6];
      lStack_140 = *(long *)(param_1 + 8);
      puVar10 = *(undefined8 **)(lStack_140 + 0x20);
      if (puVar10 != (undefined8 *)0x0) {
        fVar26 = (float)puVar10[1];
        fVar29 = (float)puVar10[3];
        fVar33 = (float)puVar10[7];
        fVar23 = (float)((ulong)puVar10[7] >> 0x20);
        fVar36 = (float)puVar10[6];
        fVar32 = (float)((ulong)puVar10[6] >> 0x20);
        fVar35 = (float)puVar10[5];
        fVar24 = (float)*puVar10;
        fVar25 = (float)((ulong)*puVar10 >> 0x20);
        fVar19 = (float)uStack_f0;
        fVar27 = (float)puVar10[2];
        fVar28 = (float)((ulong)puVar10[2] >> 0x20);
        fVar37 = (float)((ulong)uStack_f0 >> 0x20);
        fVar30 = (float)puVar10[4];
        fVar31 = (float)((ulong)puVar10[4] >> 0x20);
        fVar14 = (float)uStack_110;
        auVar40._0_4_ = fVar14 * fVar36;
        fVar16 = (float)((ulong)uStack_110 >> 0x20);
        auVar40._4_4_ = fVar16 * fVar32;
        fVar18 = (float)uStack_108;
        auVar40._8_4_ = fVar18 * fVar33;
        auVar40._12_4_ = (float)((ulong)uStack_108 >> 0x20) * fVar23;
        fVar21 = fVar34 * fVar36;
        fVar22 = fVar15 * fVar32;
        fVar23 = (float)((ulong)uStack_f8 >> 0x20) * fVar23;
        fVar36 = fVar19 * fVar36;
        fVar32 = fVar37 * fVar32;
        fVar20 = (float)uStack_e8;
        auVar42 = NEON_ext(auVar40,auVar40,8,1);
        auVar2._4_4_ = fVar22;
        auVar2._0_4_ = fVar21;
        auVar2._8_4_ = fVar17 * fVar33;
        auVar2._12_4_ = fVar23;
        auVar3._4_4_ = fVar22;
        auVar3._0_4_ = fVar21;
        auVar3._8_4_ = fVar17 * fVar33;
        auVar3._12_4_ = fVar23;
        auVar41 = NEON_ext(auVar2,auVar3,8,1);
        auVar4._4_4_ = fVar32;
        auVar4._0_4_ = fVar36;
        auVar4._8_4_ = fVar20 * fVar33;
        auVar4._12_4_ = 0;
        auVar5._4_4_ = fVar32;
        auVar5._0_4_ = fVar36;
        auVar5._8_4_ = fVar20 * fVar33;
        auVar5._12_4_ = 0;
        auVar39 = NEON_ext(auVar4,auVar5,8,1);
        uStack_110 = CONCAT44(fVar25 * fVar14 + fVar28 * fVar16 + fVar31 * fVar18,
                              fVar24 * fVar14 + fVar27 * fVar16 + fVar30 * fVar18);
        uStack_108 = CONCAT44(fVar14 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0,
                              fVar26 * fVar14 + fVar29 * fVar16 + fVar35 * fVar18);
        uStack_f8 = CONCAT44(fVar34 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0,
                             fVar26 * fVar34 + fVar29 * fVar15 + fVar35 * fVar17);
        uStack_100 = CONCAT44(fVar25 * fVar34 + fVar28 * fVar15 + fVar31 * fVar17,
                              fVar24 * fVar34 + fVar27 * fVar15 + fVar30 * fVar17);
        uStack_e0 = CONCAT44((float)((ulong)uStack_e0 >> 0x20) + fVar21 + fVar22 + auVar41._0_4_,
                             (float)uStack_e0 + auVar40._0_4_ + auVar40._4_4_ + auVar42._0_4_);
        uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) + 0.0,
                             (float)uStack_d8 + fVar36 + fVar32 + auVar39._0_4_ + auVar39._4_4_);
        uStack_e8 = CONCAT44(fVar19 * 0.0 + fVar37 * 0.0 + fVar20 * 0.0,
                             fVar26 * fVar19 + fVar29 * fVar37 + fVar35 * fVar20);
        uStack_f0 = CONCAT44(fVar25 * fVar19 + fVar28 * fVar37 + fVar31 * fVar20,
                             fVar24 * fVar19 + fVar27 * fVar37 + fVar30 * fVar20);
      }
      uStack_130 = *(undefined8 *)(lStack_140 + 0x10);
      puStack_128 = &uStack_90;
      puStack_120 = &uStack_110;
      uStack_118 = 0xffffffff;
      fVar34 = *(float *)(*(long *)(param_1 + 0x28) + 0x30);
      plStack_138 = param_2;
      iStack_114 = iVar9;
      if (fVar34 <= 0.0) {
        plVar7 = *(long **)(*(long *)(param_1 + 0x30) + (long)iVar9 * 8);
        if (plVar7 == (long *)0x0) {
          plVar7 = *(long **)(param_1 + 0x18);
          (**(code **)(*plVar7 + 0x10))
                    (plVar7,&lStack_140,*(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(param_1 + 0x38),1);
          *(long **)(*(long *)(param_1 + 0x30) + (long)iVar9 * 8) = plVar7;
          plVar7 = *(long **)(*(long *)(param_1 + 0x30) + (long)iVar9 * 8);
        }
      }
      else {
        plVar7 = *(long **)(param_1 + 0x18);
        (**(code **)(*plVar7 + 0x10))(plVar7,&lStack_140,*(undefined8 *)(param_1 + 0x10),0,2);
      }
      plVar8 = *(long **)(param_1 + 0x28);
      lVar13 = plVar8[2];
      if (*(long *)(lVar13 + 0x10) == *(long *)(*(long *)(param_1 + 8) + 0x10)) {
        lVar11 = 0x10;
      }
      else {
        lVar13 = plVar8[3];
        lVar11 = 0x18;
      }
      *(long **)((long)plVar8 + lVar11) = &lStack_140;
      (**(code **)(*plVar8 + lVar11))(plVar8,0xffffffff,param_3);
      (**(code **)(*plVar7 + 0x10))
                (plVar7,&lStack_140,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
      lVar11 = 0x10;
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x10) !=
          *(long *)(*(long *)(param_1 + 8) + 0x10)) {
        lVar11 = 0x18;
      }
      *(long *)(*(long *)(param_1 + 0x28) + lVar11) = lVar13;
      if (0.0 < fVar34) {
        (**(code **)*plVar7)(plVar7);
        (**(code **)(**(long **)(param_1 + 0x18) + 0x78))(*(long **)(param_1 + 0x18),plVar7);
      }
    }
  }
  return;
}



/* Entry: 10980c33c; end: 10980c33f;  */

void FUN_10980c33c(void)

{
  return;
}



/* Entry: 10980c340; end: 10980c4d7;  */

float FUN_10980c340(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar2 = param_2;
  if (*(char *)(param_1 + 0x70) == '\0') {
    lVar2 = param_3;
    param_3 = param_2;
  }
  uVar3 = *(uint *)(param_1 + 0x54);
  if ((int)uVar3 < 1) {
    fVar37 = 1.0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = *(long *)(param_3 + 0xd0);
    uVar23 = *(undefined8 *)(param_3 + 0x18);
    uVar19 = *(undefined8 *)(param_3 + 0x10);
    uVar16 = *(undefined8 *)(param_3 + 0x28);
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    uVar24 = *(undefined8 *)(param_3 + 0x38);
    uVar20 = *(undefined8 *)(param_3 + 0x30);
    uVar17 = *(undefined8 *)(param_3 + 0x48);
    uVar12 = *(undefined8 *)(param_3 + 0x40);
    iVar6 = *(int *)(param_3 + 0x168);
    fVar37 = 1.0;
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar8);
      fVar15 = (float)puVar1[1];
      fVar22 = (float)puVar1[3];
      fVar30 = (float)puVar1[7];
      fVar31 = (float)((ulong)puVar1[7] >> 0x20);
      fVar28 = (float)puVar1[6];
      fVar29 = (float)((ulong)puVar1[6] >> 0x20);
      fVar27 = (float)puVar1[5];
      fStack_90 = (float)uVar11;
      fStack_8c = (float)((ulong)uVar11 >> 0x20);
      fStack_88 = (float)uVar16;
      fStack_84 = (float)((ulong)uVar16 >> 0x20);
      fVar10 = (float)*puVar1;
      fVar14 = (float)((ulong)*puVar1 >> 0x20);
      fVar43 = (float)uVar20;
      fVar18 = (float)puVar1[2];
      fVar21 = (float)((ulong)puVar1[2] >> 0x20);
      fVar44 = (float)((ulong)uVar20 >> 0x20);
      fVar25 = (float)puVar1[4];
      fVar26 = (float)((ulong)puVar1[4] >> 0x20);
      fVar40 = (float)uVar19;
      fVar32 = fVar40 * fVar28;
      fVar41 = (float)((ulong)uVar19 >> 0x20);
      fVar33 = fVar41 * fVar29;
      fVar42 = (float)uVar23;
      fVar34 = (float)((ulong)uVar23 >> 0x20) * fVar31;
      auVar35._0_4_ = fStack_90 * fVar28;
      auVar35._4_4_ = fStack_8c * fVar29;
      auVar35._8_4_ = fStack_88 * fVar30;
      auVar35._12_4_ = fStack_84 * fVar31;
      fVar28 = fVar43 * fVar28;
      fVar29 = fVar44 * fVar29;
      fVar31 = (float)uVar24;
      auVar38._4_4_ = fVar33;
      auVar38._0_4_ = fVar32;
      auVar38._8_4_ = fVar42 * fVar30;
      auVar38._12_4_ = fVar34;
      auVar39._4_4_ = fVar33;
      auVar39._0_4_ = fVar32;
      auVar39._8_4_ = fVar42 * fVar30;
      auVar39._12_4_ = fVar34;
      auVar38 = NEON_ext(auVar38,auVar39,8,1);
      auVar39 = NEON_ext(auVar35,auVar35,8,1);
      auVar36._4_4_ = fVar29;
      auVar36._0_4_ = fVar28;
      auVar36._8_4_ = fVar31 * fVar30;
      auVar36._12_4_ = 0;
      auVar4._4_4_ = fVar29;
      auVar4._0_4_ = fVar28;
      auVar4._8_4_ = fVar31 * fVar30;
      auVar4._12_4_ = 0;
      auVar36 = NEON_ext(auVar36,auVar4,8,1);
      uVar13 = CONCAT44(fVar14 * fVar40 + fVar21 * fVar41 + fVar26 * fVar42,
                        fVar10 * fVar40 + fVar18 * fVar41 + fVar25 * fVar42);
      *(int *)(param_3 + 0x168) = iVar6 + 1;
      *(ulong *)(param_3 + 0x18) =
           CONCAT44(fVar40 * 0.0 + fVar41 * 0.0 + fVar42 * 0.0,
                    fVar15 * fVar40 + fVar22 * fVar41 + fVar27 * fVar42);
      *(undefined8 *)(param_3 + 0x10) = uVar13;
      *(ulong *)(param_3 + 0x28) =
           CONCAT44(fStack_90 * 0.0 + fStack_8c * 0.0 + fStack_88 * 0.0,
                    fVar15 * fStack_90 + fVar22 * fStack_8c + fVar27 * fStack_88);
      *(ulong *)(param_3 + 0x20) =
           CONCAT44(fVar14 * fStack_90 + fVar21 * fStack_8c + fVar26 * fStack_88,
                    fVar10 * fStack_90 + fVar18 * fStack_8c + fVar25 * fStack_88);
      *(ulong *)(param_3 + 0x38) =
           CONCAT44(fVar43 * 0.0 + fVar44 * 0.0 + fVar31 * 0.0,
                    fVar15 * fVar43 + fVar22 * fVar44 + fVar27 * fVar31);
      *(ulong *)(param_3 + 0x30) =
           CONCAT44(fVar14 * fVar43 + fVar21 * fVar44 + fVar26 * fVar31,
                    fVar10 * fVar43 + fVar18 * fVar44 + fVar25 * fVar31);
      *(ulong *)(param_3 + 0x48) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,
                    (float)uVar17 + fVar28 + fVar29 + auVar36._0_4_ + auVar36._4_4_);
      *(ulong *)(param_3 + 0x40) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) + auVar35._0_4_ + auVar35._4_4_ + auVar39._0_4_,
                    (float)uVar12 + fVar32 + fVar33 + auVar38._0_4_);
      plVar5 = *(long **)(*(long *)(param_1 + 0x60) + lVar7);
      (**(code **)(*plVar5 + 0x18))(plVar5,param_3,lVar2,param_4,param_5);
      iVar6 = *(int *)(param_3 + 0x168) + 1;
      *(int *)(param_3 + 0x168) = iVar6;
      fVar10 = (float)uVar13;
      if (fVar37 <= (float)uVar13) {
        fVar10 = fVar37;
      }
      fVar37 = fVar10;
      *(undefined8 *)(param_3 + 0x18) = uVar23;
      *(undefined8 *)(param_3 + 0x10) = uVar19;
      *(undefined8 *)(param_3 + 0x28) = uVar16;
      *(undefined8 *)(param_3 + 0x20) = uVar11;
      *(undefined8 *)(param_3 + 0x38) = uVar24;
      *(undefined8 *)(param_3 + 0x30) = uVar20;
      *(undefined8 *)(param_3 + 0x48) = uVar17;
      *(undefined8 *)(param_3 + 0x40) = uVar12;
      lVar8 = lVar8 + 0x60;
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar3 * 0x60 - lVar8 != 0);
  }
  return fVar37;
}



/* Entry: 10980c4d8; end: 10980c53b;  */

void FUN_10980c4d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x60) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x54);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



/* Entry: 10980c53c; end: 10980c55f;  */

void FUN_10980c53c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10980c560; end: 10980c5ab;  */

long FUN_10980c560(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980c5ac; end: 10980c63f;  */

undefined8 * FUN_10980c5ac(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  FUN_10980b390();
  *puVar2 = &PTR_FUN_110b12748;
  *(undefined1 *)(puVar2 + 0x15) = 1;
  puVar2[0x14] = 0;
  *(undefined4 *)((long)puVar2 + 0x94) = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  uVar3 = 0x68;
  FUN_1098256f4(0x68,0x10);
  FUN_109812e84();
  param_1[0x11] = uVar3;
  uVar1 = *(undefined4 *)(*(long *)(param_4 + 8) + 0x68);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(*(long *)(param_3 + 8) + 0x68);
  *(undefined4 *)((long)param_1 + 0xb4) = uVar1;
  return param_1;
}



/* Entry: 10980c640; end: 10980c697;  */

undefined8 * FUN_10980c640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12748;
  FUN_10980c698();
  (*(code *)**(undefined8 **)param_1[0x11])();
  if (param_1[0x11] != 0) {
    FUN_109825740();
  }
  FUN_10980d644(param_1 + 0x12);
  *param_1 = &PTR_FUN_110b12690;
  FUN_10980b5ec();
  FUN_10980c560(param_1 + 10);
  FUN_1098079e0(param_1 + 6);
  FUN_10980246c(param_1 + 2);
  return param_1;
}



/* Entry: 10980c698; end: 10980c71b;  */

void FUN_10980c698(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)(param_1 + 0x88);
  uVar12 = (ulong)*(uint *)(lVar10 + 0xc);
  if (0 < (int)*(uint *)(lVar10 + 0xc)) {
    lVar13 = 8;
    do {
      puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18) + lVar13);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11);
        (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),puVar11);
      }
      lVar13 = lVar13 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    lVar10 = *(long *)(param_1 + 0x88);
  }
  if ((*(long *)(lVar10 + 0x18) != 0) && (*(char *)(lVar10 + 0x20) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(lVar10 + 0x20) = 1;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0xc) = 0;
  *(undefined4 *)(lVar10 + 0x10) = 0;
  if ((*(long *)(lVar10 + 0x38) != 0) && (*(char *)(lVar10 + 0x40) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(lVar10 + 0x40) = 1;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined4 *)(lVar10 + 0x2c) = 0;
  *(undefined4 *)(lVar10 + 0x30) = 0;
  if ((*(long *)(lVar10 + 0x58) != 0) && (*(char *)(lVar10 + 0x60) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(lVar10 + 0x60) = 1;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *(undefined4 *)(lVar10 + 0x4c) = 0;
  *(undefined4 *)(lVar10 + 0x50) = 0;
  if (*(int *)(lVar10 + 0x10) < 2) {
    lVar13 = 0x20;
    FUN_1098256f4(0x20,0x10);
    uVar2 = *(uint *)(lVar10 + 0xc);
    if (0 < (int)uVar2) {
      lVar6 = 0;
      do {
        puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x18) + lVar6);
        uVar14 = *puVar11;
        ((undefined8 *)(lVar13 + lVar6))[1] = puVar11[1];
        *(undefined8 *)(lVar13 + lVar6) = uVar14;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)uVar2 * 0x10 - lVar6 != 0);
    }
    if ((*(long *)(lVar10 + 0x18) != 0) && (*(char *)(lVar10 + 0x20) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(lVar10 + 0x20) = 1;
    *(long *)(lVar10 + 0x18) = lVar13;
    *(undefined4 *)(lVar10 + 0x10) = 2;
  }
  uVar2 = *(uint *)(lVar10 + 0x10);
  uVar1 = *(uint *)(lVar10 + 0x2c);
  if ((int)uVar2 <= (int)uVar1) {
    return;
  }
  if (*(int *)(lVar10 + 0x30) < (int)uVar2) {
    if (uVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar4 = uVar1;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar2 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar4 = *(uint *)(lVar10 + 0x2c);
    }
    if ((int)uVar4 < 1) {
      if (*(undefined4 **)(lVar10 + 0x38) != (undefined4 *)0x0) goto LAB_109813010;
    }
    else {
      uVar12 = (ulong)uVar4;
      puVar7 = puVar3;
      puVar8 = *(undefined4 **)(lVar10 + 0x38);
      do {
        *puVar7 = *puVar8;
        uVar12 = uVar12 - 1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar12 != 0);
LAB_109813010:
      if (*(char *)(lVar10 + 0x40) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(lVar10 + 0x40) = 1;
    *(undefined4 **)(lVar10 + 0x38) = puVar3;
    *(uint *)(lVar10 + 0x30) = uVar2;
  }
  else {
    puVar3 = *(undefined4 **)(lVar10 + 0x38);
  }
  _bzero(puVar3 + (int)uVar1,(ulong)(uVar2 + ~uVar1) * 4 + 4);
  *(uint *)(lVar10 + 0x2c) = uVar2;
  uVar4 = *(uint *)(lVar10 + 0x4c);
  if ((int)uVar2 <= (int)uVar4) goto LAB_1098130fc;
  if (*(int *)(lVar10 + 0x50) < (int)uVar2) {
    if (uVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar5 = uVar4;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar2 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar5 = *(uint *)(lVar10 + 0x4c);
    }
    if ((int)uVar5 < 1) {
      if (*(undefined4 **)(lVar10 + 0x58) != (undefined4 *)0x0) goto LAB_1098130c4;
    }
    else {
      uVar12 = (ulong)uVar5;
      puVar7 = puVar3;
      puVar8 = *(undefined4 **)(lVar10 + 0x58);
      do {
        *puVar7 = *puVar8;
        uVar12 = uVar12 - 1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar12 != 0);
LAB_1098130c4:
      if (*(char *)(lVar10 + 0x60) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(lVar10 + 0x60) = 1;
    *(undefined4 **)(lVar10 + 0x58) = puVar3;
    *(uint *)(lVar10 + 0x50) = uVar2;
  }
  else {
    puVar3 = *(undefined4 **)(lVar10 + 0x58);
  }
  _bzero(puVar3 + (int)uVar4,(ulong)(uVar2 + ~uVar4) * 4 + 4);
LAB_1098130fc:
  *(uint *)(lVar10 + 0x4c) = uVar2;
  if (0 < (int)uVar2) {
    _memset(*(undefined8 *)(lVar10 + 0x38),0xff,(ulong)uVar2 << 2);
    _memset(*(undefined8 *)(lVar10 + 0x58),0xff,(ulong)uVar2 << 2);
  }
  if (0 < (int)uVar1) {
    uVar12 = 0;
    lVar13 = *(long *)(lVar10 + 0x38);
    lVar6 = *(long *)(lVar10 + 0x58);
    piVar9 = (int *)(*(long *)(lVar10 + 0x18) + 4);
    do {
      uVar2 = piVar9[-1] | *piVar9 << 0x10;
      uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
      uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
      uVar2 = uVar2 ^ uVar2 >> 6;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      uVar2 = (uVar2 ^ uVar2 >> 0x10) & *(int *)(lVar10 + 0x10) - 1U;
      *(undefined4 *)(lVar6 + uVar12 * 4) = *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4);
      *(int *)(lVar13 + (long)(int)uVar2 * 4) = (int)uVar12;
      uVar12 = uVar12 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar1 != uVar12);
  }
  return;
}



/* Entry: 10980c71c; end: 10980c71f;  */

undefined8 * FUN_10980c71c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12748;
  FUN_10980c698();
  (*(code *)**(undefined8 **)param_1[0x11])();
  if (param_1[0x11] != 0) {
    FUN_109825740();
  }
  FUN_10980d644(param_1 + 0x12);
  *param_1 = &PTR_FUN_110b12690;
  FUN_10980b5ec();
  FUN_10980c560(param_1 + 10);
  FUN_1098079e0(param_1 + 6);
  FUN_10980246c(param_1 + 2);
  return param_1;
}



/* Entry: 10980c720; end: 10980c733;  */

void FUN_10980c720(void)

{
  FUN_10980c640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10980c734; end: 10980c79f;  */

void FUN_10980c734(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x88);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar5 = 8;
    do {
      plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + lVar5);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < iVar2);
  }
  return;
}



/* Entry: 10980c7a0; end: 10980d29b;  */

void FUN_10980c7a0(undefined1 *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  byte bVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  uint uVar25;
  uint uVar26;
  unkbyte9 *pVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long *plVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [12];
  undefined1 auVar85 [16];
  undefined1 auVar83 [12];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 in_q4 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar104 [12];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 in_q5 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar105;
  undefined1 auVar106 [12];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined8 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar130 [16];
  float fStack_fa0;
  float fStack_f9c;
  float fStack_f98;
  float fStack_f90;
  float fStack_f8c;
  float fStack_f88;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  float fStack_f10;
  float fStack_f0c;
  float fStack_f08;
  float fStack_f04;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined4 uStack_ee8;
  int iStack_ee4;
  int iStack_ee0;
  long *plStack_ed8;
  ulong uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  long lStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined1 auStack_ea0 [4];
  undefined8 uStack_e9c;
  long *plStack_e90;
  byte bStack_e88;
  long lStack_e80;
  long lStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  float fStack_e50;
  float fStack_e4c;
  float fStack_e48;
  float fStack_e44;
  undefined8 auStack_df8 [6];
  undefined4 auStack_dc8 [40];
  undefined8 auStack_d28 [6];
  undefined4 auStack_cf8 [40];
  undefined8 auStack_c58 [6];
  undefined4 auStack_c28 [40];
  undefined8 auStack_b88 [6];
  undefined4 auStack_b58 [10];
  undefined8 auStack_b30 [2];
  undefined4 auStack_b20 [4];
  undefined8 auStack_b10 [308];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
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
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auVar84 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar44 = *(long *)(param_2 + 8);
  lVar30 = *(long *)(param_3 + 8);
  plVar43 = *(long **)(lVar44 + 0x60);
  plVar31 = *(long **)(lVar30 + 0x60);
  if (plVar43 == (long *)0x0 || plVar31 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
      uVar46 = param_2;
      uVar22 = param_3;
      if (param_1[0x70] == '\0') {
        uVar46 = param_3;
        uVar22 = param_2;
      }
      lVar29 = *(long *)(uVar22 + 8);
      if (*(int *)(lVar29 + 0x68) != *(int *)(param_1 + 0x84)) {
        FUN_10980b5ec(param_1);
        FUN_10980b43c(param_1,param_2,param_3);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar29 + 0x68);
      }
      uVar25 = *(uint *)(param_1 + 0x54);
      if (uVar25 != 0) {
        plVar31 = *(long **)(lVar29 + 0x60);
        uStack_b0 = *(undefined8 *)(param_1 + 8);
        uStack_98 = *(undefined8 *)(param_1 + 0x60);
        uStack_90 = *(undefined8 *)(param_1 + 0x78);
        ppuStack_c8 = &PTR_FUN_110b126e0;
        lVar30 = (long)*(int *)(param_1 + 0x34);
        uStack_c0 = uVar22;
        uStack_b8 = uVar46;
        uStack_a8 = param_4;
        lStack_a0 = param_5;
        if (*(int *)(param_1 + 0x34) < 0) {
          if (*(int *)(param_1 + 0x38) < 0) {
            if ((*(long *)(param_1 + 0x40) != 0) && (param_1[0x48] == '\x01')) {
              FUN_109825740();
            }
            param_1[0x48] = 1;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
          }
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar30 * 8) = 0;
            lVar30 = lVar30 + 1;
          } while ((int)lVar30 != 0);
          uVar25 = *(uint *)(param_1 + 0x54);
        }
        auVar104 = in_q5._4_12_;
        *(undefined4 *)(param_1 + 0x34) = 0;
        if (0 < (int)uVar25) {
          lVar30 = 0;
          do {
            plVar43 = *(long **)(*(long *)(param_1 + 0x60) + lVar30 * 8);
            if (plVar43 != (long *)0x0) {
              (**(code **)(*plVar43 + 0x20))(plVar43,param_1 + 0x30);
              iVar33 = *(int *)(param_1 + 0x34);
              if (iVar33 < 1) {
LAB_10980b858:
                if (iVar33 < 0) {
                  if (*(int *)(param_1 + 0x38) < 0) {
                    if ((*(long *)(param_1 + 0x40) != 0) && (param_1[0x48] == '\x01')) {
                      FUN_109825740();
                    }
                    param_1[0x48] = 1;
                    *(undefined8 *)(param_1 + 0x40) = 0;
                    *(undefined4 *)(param_1 + 0x38) = 0;
                  }
                  lVar44 = (long)iVar33;
                  do {
                    *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar44 * 8) = 0;
                    lVar44 = lVar44 + 1;
                  } while ((int)lVar44 != 0);
                }
              }
              else {
                lVar44 = 0;
                do {
                  lVar23 = *(long *)(*(long *)(param_1 + 0x40) + lVar44 * 8);
                  if (*(int *)(lVar23 + 0x360) != 0) {
                    *(long *)(param_5 + 8) = lVar23;
                    lVar34 = *(long *)(*(long *)(param_5 + 0x10) + 0x10);
                    lVar37 = *(long *)(*(long *)(param_5 + 0x18) + 0x10);
                    lVar45 = lVar34;
                    if (*(long *)(lVar23 + 0x350) != lVar34) {
                      lVar45 = lVar37;
                      lVar37 = lVar34;
                    }
                    FUN_10982280c(lVar23,lVar45 + 0x10,lVar37 + 0x10);
                    *(undefined8 *)(param_5 + 8) = 0;
                    iVar33 = *(int *)(param_1 + 0x34);
                  }
                  lVar44 = lVar44 + 1;
                } while (lVar44 < iVar33);
                if (iVar33 < 1) goto LAB_10980b858;
              }
              *(undefined4 *)(param_1 + 0x34) = 0;
              uVar25 = *(uint *)(param_1 + 0x54);
            }
            auVar104 = in_q5._4_12_;
            lVar30 = lVar30 + 1;
          } while (lVar30 < (int)uVar25);
        }
        if (plVar31 == (long *)0x0) {
          if (0 < (int)uVar25) {
            uVar35 = 0;
            lVar30 = 0x40;
            do {
              FUN_10980bf98(&ppuStack_c8,*(undefined8 *)(*(long *)(lVar29 + 0x30) + lVar30),uVar35);
              uVar35 = uVar35 + 1;
              lVar30 = lVar30 + 0x60;
            } while (uVar25 != uVar35);
          }
        }
        else {
          pVar27 = *(unkbyte9 **)(uVar22 + 0x18);
          uVar113 = *(undefined8 *)((long)pVar27 + 8);
          fVar77 = (float)*(undefined8 *)((long)pVar27 + 0x18);
          uVar18 = *(undefined8 *)(pVar27 + 1);
          fVar72 = *(float *)(pVar27 + 1);
          fVar67 = (float)uVar18;
          fVar69 = (float)((ulong)uVar18 >> 0x20);
          auVar107 = *(undefined1 (*) [16])(pVar27 + 2);
          auVar90 = *(undefined1 (*) [16])(pVar27 + 3);
          auVar2[9] = (char)((ulong)uVar113 >> 8);
          auVar2._0_9_ = *pVar27;
          auVar2[10] = (char)((ulong)uVar113 >> 0x10);
          auVar2[0xb] = (char)((ulong)uVar113 >> 0x18);
          fVar79 = (float)*pVar27;
          auVar95._4_12_ = auVar104;
          auVar95._0_4_ = fVar79;
          auVar97._12_4_ = auVar104._8_4_;
          auVar97._0_8_ = auVar95._0_8_;
          auVar97._8_4_ = auVar2._8_4_;
          auVar96._8_8_ = auVar97._8_8_;
          auVar96._4_4_ = fVar72;
          auVar96._0_4_ = fVar79;
          auVar98._0_12_ = auVar96._0_12_;
          auVar98._12_4_ = *(undefined4 *)((long)pVar27 + 0x18);
          fVar74 = auVar107._4_4_;
          auVar109 = NEON_ext(auVar107,auVar107,8,1);
          pfVar28 = *(float **)(uVar46 + 0x18);
          fVar19 = *pfVar28;
          fVar68 = pfVar28[1];
          fVar94 = pfVar28[2];
          fVar105 = pfVar28[4];
          fVar73 = pfVar28[5];
          fVar50 = pfVar28[6];
          fVar51 = pfVar28[8];
          fVar47 = pfVar28[9];
          fVar70 = pfVar28[10];
          fVar71 = pfVar28[0xc];
          fVar75 = pfVar28[0xd];
          fVar76 = pfVar28[0xe];
          fVar11 = (float)((ulong)*(undefined8 *)pVar27 >> 0x20);
          auVar114._0_8_ =
               CONCAT44(fVar68 * fVar11 + fVar73 * fVar69 + fVar47 * fVar74,
                        fVar19 * fVar11 + fVar105 * fVar69 + fVar51 * fVar74);
          auVar114._8_4_ = fVar94 * fVar11 + fVar50 * fVar69 + fVar70 * fVar74;
          auVar114._12_4_ = fVar11 * 0.0 + fVar69 * 0.0 + fVar74 * 0.0;
          fVar81 = (float)*(undefined8 *)pVar27;
          fVar125 = auVar107._0_4_;
          fVar78 = fVar68 * fVar81 + fVar73 * fVar67 + fVar47 * fVar125;
          fVar20 = fVar81 * 0.0 + fVar67 * 0.0 + fVar125 * 0.0;
          auVar130 = NEON_ext(auVar98,auVar98,8,1);
          fVar80 = (float)uVar113;
          fVar124 = auVar107._8_4_;
          auVar116._0_8_ =
               CONCAT44(fVar68 * fVar80 + fVar73 * fVar77 + fVar47 * fVar124,
                        fVar19 * fVar80 + fVar105 * fVar77 + fVar51 * fVar124);
          auVar116._8_4_ = fVar94 * fVar80 + fVar50 * fVar77 + fVar70 * fVar124;
          auVar116._12_4_ = fVar80 * 0.0 + fVar77 * 0.0 + fVar124 * 0.0;
          auVar82._0_8_ = auVar90._0_8_ ^ 0x8000000080000000;
          auVar82[8] = auVar90[8];
          auVar82[9] = auVar90[9];
          auVar82[10] = auVar90[10];
          auVar82[0xb] = auVar90[0xb] ^ 0x80;
          auVar84[0xc] = auVar90[0xc];
          auVar84._0_12_ = auVar82;
          auVar84[0xd] = auVar90[0xd];
          auVar84[0xe] = auVar90[0xe];
          auVar84[0xf] = auVar90[0xf] ^ 0x80;
          fVar47 = (float)auVar82._0_8_;
          fVar68 = fVar79 * fVar47;
          fVar77 = (float)(auVar82._0_8_ >> 0x20);
          fVar73 = fVar72 * fVar77;
          fVar124 = auVar82._8_4_;
          fVar80 = auVar84._12_4_ * 0.0;
          auVar88._0_4_ = fVar11 * fVar47;
          auVar88._4_4_ = fVar69 * fVar77;
          auVar88._8_4_ = fVar74 * fVar124;
          auVar88._12_4_ = auVar84._12_4_ * 0.0;
          auVar12._4_4_ = fVar73;
          auVar12._0_4_ = fVar68;
          auVar12._8_4_ = fVar125 * fVar124;
          auVar12._12_4_ = fVar80;
          auVar13._4_4_ = fVar73;
          auVar13._0_4_ = fVar68;
          auVar13._8_4_ = fVar125 * fVar124;
          auVar13._12_4_ = fVar80;
          auVar107 = NEON_ext(auVar12,auVar13,8,1);
          auVar120 = NEON_ext(auVar88,auVar88,8,1);
          auVar85._0_4_ = auVar130._0_4_ * fVar47;
          auVar85._4_4_ = auVar130._4_4_ * fVar77;
          auVar85._8_4_ = auVar109._0_4_ * fVar124;
          auVar85._12_4_ = 0;
          auVar110 = NEON_ext(auVar85,auVar85,8,1);
          auVar89._0_4_ = fVar79 * fVar71;
          auVar89._4_4_ = fVar72 * fVar75;
          auVar89._8_4_ = fVar125 * fVar76;
          auVar89._12_4_ = pfVar28[0xf] * 0.0;
          fVar11 = fVar11 * fVar71;
          fVar69 = fVar69 * fVar75;
          uVar52 = (undefined1)((uint)fVar69 >> 8);
          uVar53 = (undefined1)((uint)fVar69 >> 0x10);
          uVar54 = (undefined1)((uint)fVar69 >> 0x18);
          fVar74 = fVar74 * fVar76;
          uVar55 = (undefined1)((uint)fVar74 >> 8);
          uVar56 = (undefined1)((uint)fVar74 >> 0x10);
          uVar57 = (undefined1)((uint)fVar74 >> 0x18);
          fVar80 = pfVar28[0xf] * 0.0;
          uVar58 = (undefined1)((uint)fVar80 >> 8);
          uVar59 = (undefined1)((uint)fVar80 >> 0x10);
          uVar60 = (undefined1)((uint)fVar80 >> 0x18);
          auVar99._0_4_ = auVar130._0_4_ * fVar71;
          auVar99._4_4_ = auVar130._4_4_ * fVar75;
          auVar99._8_4_ = auVar109._0_4_ * fVar76;
          auVar3[4] = SUB41(fVar69,0);
          auVar3._0_4_ = fVar11;
          auVar3[5] = uVar52;
          auVar3[6] = uVar53;
          auVar3[7] = uVar54;
          auVar3[8] = SUB41(fVar74,0);
          auVar3[9] = uVar55;
          auVar3[10] = uVar56;
          auVar3[0xb] = uVar57;
          auVar3[0xc] = SUB41(fVar80,0);
          auVar3[0xd] = uVar58;
          auVar3[0xe] = uVar59;
          auVar3[0xf] = uVar60;
          auVar4[4] = SUB41(fVar69,0);
          auVar4._0_4_ = fVar11;
          auVar4[5] = uVar52;
          auVar4[6] = uVar53;
          auVar4[7] = uVar54;
          auVar4[8] = SUB41(fVar74,0);
          auVar4[9] = uVar55;
          auVar4[10] = uVar56;
          auVar4[0xb] = uVar57;
          auVar4[0xc] = SUB41(fVar80,0);
          auVar4[0xd] = uVar58;
          auVar4[0xe] = uVar59;
          auVar4[0xf] = uVar60;
          auVar109 = NEON_ext(auVar3,auVar4,8,1);
          auVar99._12_4_ = 0;
          auVar130 = NEON_ext(auVar99,auVar99,8,1);
          auVar90 = NEON_ext(auVar89,auVar89,8,1);
          uStack_100 = CONCAT44(auVar120._0_4_ + auVar88._0_4_ + auVar88._4_4_ +
                                fVar11 + fVar69 + auVar109._0_4_,
                                auVar107._0_4_ + fVar68 + fVar73 +
                                auVar89._0_4_ + auVar89._4_4_ + auVar90._0_4_);
          uStack_128 = CONCAT17((char)((uint)fVar20 >> 0x18),
                                CONCAT16((char)((uint)fVar20 >> 0x10),
                                         CONCAT15((char)((uint)fVar20 >> 8),
                                                  CONCAT14(SUB41(fVar20,0),
                                                           fVar94 * fVar81 + fVar50 * fVar67 +
                                                           fVar70 * fVar125))));
          uStack_130 = CONCAT17((char)((uint)fVar78 >> 0x18),
                                CONCAT16((char)((uint)fVar78 >> 0x10),
                                         CONCAT15((char)((uint)fVar78 >> 8),
                                                  CONCAT14(SUB41(fVar78,0),
                                                           fVar19 * fVar81 + fVar105 * fVar67 +
                                                           fVar51 * fVar125))));
          uStack_118 = auVar114._8_8_;
          uStack_108 = auVar116._8_8_;
          uStack_f8 = (ulong)(uint)(auVar85._0_4_ + auVar85._4_4_ + auVar110._0_4_ + auVar110._4_4_
                                   + auVar99._0_4_ + auVar99._4_4_ + auVar130._0_4_ + auVar130._4_4_
                                   );
          uStack_120 = auVar114._0_8_;
          uStack_110 = auVar116._0_8_;
          (**(code **)(**(long **)(uVar46 + 8) + 0x10))
                    (*(long **)(uVar46 + 8),&uStack_130,&fStack_e0,&uStack_f0);
          fVar81 = *(float *)(param_5 + 0x30);
          fVar69 = fStack_e0 - fVar81;
          fVar74 = fStack_dc - fVar81;
          fVar78 = fStack_d8 - fVar81;
          fStack_d4 = fStack_d4 - 0.0;
          fVar11 = (float)uStack_f0 + fVar81;
          uVar52 = SUB41(fVar11,0);
          uVar53 = (undefined1)((uint)fVar11 >> 8);
          uVar54 = (undefined1)((uint)fVar11 >> 0x10);
          uVar55 = (undefined1)((uint)fVar11 >> 0x18);
          fVar80 = (float)((ulong)uStack_f0 >> 0x20) + fVar81;
          uVar56 = SUB41(fVar80,0);
          uVar57 = (undefined1)((uint)fVar80 >> 8);
          uVar58 = (undefined1)((uint)fVar80 >> 0x10);
          uVar59 = (undefined1)((uint)fVar80 >> 0x18);
          fVar81 = (float)uStack_e8 + fVar81;
          uVar60 = SUB41(fVar81,0);
          uVar61 = (undefined1)((uint)fVar81 >> 8);
          uVar62 = (undefined1)((uint)fVar81 >> 0x10);
          uVar63 = (undefined1)((uint)fVar81 >> 0x18);
          fVar80 = (float)((ulong)uStack_e8 >> 0x20) + 0.0;
          uVar64 = (undefined1)((uint)fVar80 >> 8);
          uVar65 = (undefined1)((uint)fVar80 >> 0x10);
          uVar66 = (undefined1)((uint)fVar80 >> 0x18);
          uStack_e8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(SUB41(fVar80,0),
                                                                               fVar81))));
          uStack_f0 = CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,fVar11))));
          lVar30 = *plVar31;
          fStack_e0 = fVar69;
          fStack_dc = fVar74;
          fStack_d8 = fVar78;
          if (lVar30 != 0) {
            uVar25 = *(uint *)(param_1 + 0x18);
            lVar44 = (long)*(int *)(param_1 + 0x14);
            uStack_168 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(SUB41(fVar80,0),
                                                                                  fVar81))));
            uStack_170 = CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,fVar11))));
            uStack_158 = CONCAT44(fStack_d4,fVar78);
            uStack_160 = CONCAT44(fVar74,fVar69);
            if (*(int *)(param_1 + 0x14) < 0) {
              if ((int)uVar25 < 0) {
                if ((*(long *)(param_1 + 0x20) != 0) && ((param_1[0x28] & 1) != 0)) {
                  FUN_109825740();
                  uVar60 = (undefined1)uStack_168;
                  uVar61 = (undefined1)((ulong)uStack_168 >> 8);
                  uVar62 = (undefined1)((ulong)uStack_168 >> 0x10);
                  uVar63 = (undefined1)((ulong)uStack_168 >> 0x18);
                  uVar52 = (undefined1)uStack_170;
                  uVar53 = (undefined1)((ulong)uStack_170 >> 8);
                  uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
                  uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
                  uVar56 = (undefined1)((ulong)uStack_170 >> 0x20);
                  uVar57 = (undefined1)((ulong)uStack_170 >> 0x28);
                  uVar58 = (undefined1)((ulong)uStack_170 >> 0x30);
                  uVar59 = (undefined1)((ulong)uStack_170 >> 0x38);
                  fVar78 = (float)uStack_158;
                  fVar69 = (float)uStack_160;
                  fVar74 = (float)((ulong)uStack_160 >> 0x20);
                }
                uVar25 = 0;
                param_1[0x28] = 1;
                *(undefined8 *)(param_1 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0x18) = 0;
              }
              do {
                *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar44 * 8) = 0;
                lVar44 = lVar44 + 1;
              } while ((int)lVar44 != 0);
            }
            uVar26 = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
            if ((int)uVar25 < 0x40) {
              lVar44 = 0x200;
              FUN_1098256f4(0x200,0x10);
              uVar26 = *(uint *)(param_1 + 0x14);
              if (0 < (int)uVar26) {
                lVar23 = 0;
                do {
                  *(undefined8 *)(lVar44 + lVar23) =
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar23);
                  lVar23 = lVar23 + 8;
                } while ((ulong)uVar26 * 8 - lVar23 != 0);
              }
              if ((*(long *)(param_1 + 0x20) != 0) && ((param_1[0x28] & 1) != 0)) {
                FUN_109825740();
                uVar26 = *(uint *)(param_1 + 0x14);
              }
              param_1[0x28] = 1;
              *(long *)(param_1 + 0x20) = lVar44;
              uVar25 = 0x40;
              *(undefined4 *)(param_1 + 0x18) = 0x40;
              uVar60 = (undefined1)uStack_168;
              uVar61 = (undefined1)((ulong)uStack_168 >> 8);
              uVar62 = (undefined1)((ulong)uStack_168 >> 0x10);
              uVar63 = (undefined1)((ulong)uStack_168 >> 0x18);
              uVar52 = (undefined1)uStack_170;
              uVar53 = (undefined1)((ulong)uStack_170 >> 8);
              uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
              uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
              uVar56 = (undefined1)((ulong)uStack_170 >> 0x20);
              uVar57 = (undefined1)((ulong)uStack_170 >> 0x28);
              uVar58 = (undefined1)((ulong)uStack_170 >> 0x30);
              uVar59 = (undefined1)((ulong)uStack_170 >> 0x38);
              fVar78 = (float)uStack_158;
              fVar69 = (float)uStack_160;
              fVar74 = (float)((ulong)uStack_160 >> 0x20);
            }
            if (uVar26 == uVar25) {
              lVar44 = (ulong)(uVar25 << 1) << 3;
              FUN_1098256f4(lVar44,0x10);
              uVar26 = *(uint *)(param_1 + 0x14);
              if (0 < (int)uVar26) {
                lVar23 = 0;
                do {
                  *(undefined8 *)(lVar44 + lVar23) =
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar23);
                  lVar23 = lVar23 + 8;
                } while ((ulong)uVar26 * 8 - lVar23 != 0);
              }
              if ((*(long *)(param_1 + 0x20) != 0) && ((param_1[0x28] & 1) != 0)) {
                FUN_109825740();
                uVar26 = *(uint *)(param_1 + 0x14);
              }
              param_1[0x28] = 1;
              *(long *)(param_1 + 0x20) = lVar44;
              *(uint *)(param_1 + 0x18) = uVar25 << 1;
              uVar60 = (undefined1)uStack_168;
              uVar61 = (undefined1)((ulong)uStack_168 >> 8);
              uVar62 = (undefined1)((ulong)uStack_168 >> 0x10);
              uVar63 = (undefined1)((ulong)uStack_168 >> 0x18);
              uVar52 = (undefined1)uStack_170;
              uVar53 = (undefined1)((ulong)uStack_170 >> 8);
              uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
              uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
              uVar56 = (undefined1)((ulong)uStack_170 >> 0x20);
              uVar57 = (undefined1)((ulong)uStack_170 >> 0x28);
              uVar58 = (undefined1)((ulong)uStack_170 >> 0x30);
              uVar59 = (undefined1)((ulong)uStack_170 >> 0x38);
              fVar78 = (float)uStack_158;
              fVar69 = (float)uStack_160;
              fVar74 = (float)((ulong)uStack_160 >> 0x20);
            }
            else {
              lVar44 = *(long *)(param_1 + 0x20);
            }
            *(long *)(lVar44 + (long)(int)uVar26 * 8) = lVar30;
            uVar35 = (ulong)(uVar26 + 1);
            do {
              iVar33 = (int)uVar35;
              uVar25 = iVar33 - 1;
              uVar35 = (ulong)uVar25;
              uVar39 = *(ulong *)(param_1 + 0x20);
              pfVar28 = *(float **)(uVar39 + (long)(int)uVar25 * 8);
              *(uint *)(param_1 + 0x14) = uVar25;
              if ((((*pfVar28 < (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) ||
                     *pfVar28 == (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))))
                   && (fVar69 <= pfVar28[4])) &&
                  (pfVar28[1] <= (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)))))
                 && (((fVar74 <= pfVar28[5] &&
                      (pfVar28[2] <=
                       (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))))) &&
                     (fVar78 <= pfVar28[6])))) {
                if (*(long *)(pfVar28 + 0xc) == 0) {
                  (*(code *)ppuStack_c8[3])(&ppuStack_c8,pfVar28);
                  uVar52 = (undefined1)uStack_170;
                  uVar53 = (undefined1)((ulong)uStack_170 >> 8);
                  uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
                  uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
                  fVar69 = (float)uStack_160;
                  uVar35 = (ulong)*(uint *)(param_1 + 0x14);
                }
                else {
                  lVar30 = (long)(int)uVar25;
                  uVar41 = (ulong)*(uint *)(param_1 + 0x18);
                  if (uVar25 == *(uint *)(param_1 + 0x18)) {
                    uVar26 = uVar25 * 2;
                    if (uVar25 == 0) {
                      uVar26 = 1;
                    }
                    uVar41 = (ulong)uVar26;
                    if (iVar33 <= (int)uVar26) {
                      if (uVar26 == 0) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3;
                        FUN_1098256f4(uVar39,0x10);
                        uVar35 = (ulong)*(uint *)(param_1 + 0x14);
                      }
                      if (0 < (int)uVar35) {
                        lVar30 = 0;
                        do {
                          *(undefined8 *)(uVar39 + lVar30) =
                               *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar30);
                          lVar30 = lVar30 + 8;
                        } while (uVar35 << 3 != lVar30);
                      }
                      uVar52 = (undefined1)uStack_170;
                      uVar53 = (undefined1)((ulong)uStack_170 >> 8);
                      uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
                      uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
                      fVar69 = (float)uStack_160;
                      if ((*(long *)(param_1 + 0x20) != 0) && ((param_1[0x28] & 1) != 0)) {
                        FUN_109825740();
                        uVar52 = (undefined1)uStack_170;
                        uVar53 = (undefined1)((ulong)uStack_170 >> 8);
                        uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
                        uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
                        fVar69 = (float)uStack_160;
                        uVar35 = (ulong)*(uint *)(param_1 + 0x14);
                      }
                      param_1[0x28] = 1;
                      *(ulong *)(param_1 + 0x20) = uVar39;
                      *(uint *)(param_1 + 0x18) = uVar26;
                      lVar30 = (long)(int)uVar35;
                      iVar33 = (int)uVar35 + 1;
                      goto LAB_10980bcb4;
                    }
                    *(undefined8 *)(uVar39 + lVar30 * 8) = *(undefined8 *)(pfVar28 + 10);
                  }
                  else {
LAB_10980bcb4:
                    *(undefined8 *)(uVar39 + lVar30 * 8) = *(undefined8 *)(pfVar28 + 10);
                    *(int *)(param_1 + 0x14) = iVar33;
                    iVar40 = (int)uVar41;
                    if (iVar33 == iVar40) {
                      uVar25 = iVar40 << 1;
                      if (iVar40 == 0) {
                        uVar25 = 1;
                      }
                      iVar33 = iVar40;
                      if (iVar40 < (int)uVar25) {
                        if (uVar25 == 0) {
                          uVar35 = 0;
                        }
                        else {
                          uVar35 = -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar25 << 3;
                          FUN_1098256f4(uVar35,0x10);
                          uVar41 = (ulong)*(uint *)(param_1 + 0x14);
                        }
                        if (0 < (int)uVar41) {
                          lVar30 = 0;
                          do {
                            *(undefined8 *)(uVar35 + lVar30) =
                                 *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar30);
                            lVar30 = lVar30 + 8;
                          } while (uVar41 << 3 != lVar30);
                        }
                        if ((*(long *)(param_1 + 0x20) != 0) && ((param_1[0x28] & 1) != 0)) {
                          FUN_109825740();
                          uVar41 = (ulong)*(uint *)(param_1 + 0x14);
                        }
                        param_1[0x28] = 1;
                        *(ulong *)(param_1 + 0x20) = uVar35;
                        *(uint *)(param_1 + 0x18) = uVar25;
                        uVar52 = (undefined1)uStack_170;
                        uVar53 = (undefined1)((ulong)uStack_170 >> 8);
                        uVar54 = (undefined1)((ulong)uStack_170 >> 0x10);
                        uVar55 = (undefined1)((ulong)uStack_170 >> 0x18);
                        fVar69 = (float)uStack_160;
                        iVar33 = (int)uVar41;
                      }
                    }
                  }
                  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar33 * 8) =
                       *(undefined8 *)(pfVar28 + 0xc);
                  uVar35 = (ulong)(iVar33 + 1U);
                  *(uint *)(param_1 + 0x14) = iVar33 + 1U;
                }
              }
            } while (0 < (int)uVar35);
          }
        }
        uVar25 = *(uint *)(param_1 + 0x54);
        lVar30 = (long)*(int *)(param_1 + 0x34);
        if (*(int *)(param_1 + 0x34) < 0) {
          if (*(int *)(param_1 + 0x38) < 0) {
            if ((*(long *)(param_1 + 0x40) != 0) && (param_1[0x48] == '\x01')) {
              FUN_109825740();
            }
            param_1[0x48] = 1;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
          }
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar30 * 8) = 0;
            lVar30 = lVar30 + 1;
          } while ((int)lVar30 != 0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
        if (0 < (int)uVar25) {
          lVar44 = 0;
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 0x60) + lVar44) != 0) {
              puVar42 = (undefined8 *)(*(long *)(lVar29 + 0x30) + lVar30);
              pfVar28 = *(float **)(uVar22 + 0x18);
              fVar69 = *pfVar28;
              fVar74 = pfVar28[1];
              fVar78 = pfVar28[2];
              fVar47 = (float)puVar42[1];
              fVar50 = (float)*puVar42;
              fVar51 = (float)((ulong)*puVar42 >> 0x20);
              fVar20 = *(float *)(puVar42 + 2);
              fVar19 = *(float *)((long)puVar42 + 0x14);
              fVar68 = *(float *)(puVar42 + 3);
              auVar90 = *(undefined1 (*) [16])(pfVar28 + 8);
              auVar107 = *(undefined1 (*) [16])(pfVar28 + 0xc);
              auVar109 = *(undefined1 (*) [16])(puVar42 + 4);
              fVar94 = *(float *)(puVar42 + 6);
              fVar105 = *(float *)((long)puVar42 + 0x34);
              fVar73 = *(float *)(puVar42 + 7);
              fVar81 = (float)*(undefined8 *)(pfVar28 + 4);
              auVar117._0_4_ = fVar69 * fVar94;
              auVar117._4_4_ = fVar74 * fVar105;
              auVar117._8_4_ = fVar78 * fVar73;
              auVar117._12_4_ = pfVar28[3] * *(float *)((long)puVar42 + 0x3c);
              auVar121._0_4_ = fVar81 * fVar94;
              fVar11 = (float)((ulong)*(undefined8 *)(pfVar28 + 4) >> 0x20);
              auVar121._4_4_ = fVar11 * fVar105;
              fVar80 = (float)*(undefined8 *)(pfVar28 + 6);
              auVar121._8_4_ = fVar80 * fVar73;
              auVar121._12_4_ =
                   (float)((ulong)*(undefined8 *)(pfVar28 + 6) >> 0x20) *
                   *(float *)((long)puVar42 + 0x3c);
              auVar110 = NEON_ext(auVar117,auVar117,8,1);
              auVar120 = NEON_ext(auVar121,auVar121,8,1);
              fVar70 = auVar90._0_4_;
              fVar71 = auVar90._4_4_;
              auVar111._0_4_ = fVar70 * fVar94;
              auVar111._4_4_ = fVar71 * fVar105;
              fVar94 = auVar90._8_4_;
              auVar111._8_4_ = fVar94 * fVar73;
              auVar111._12_4_ = 0;
              auVar90 = NEON_ext(auVar111,auVar111,8,1);
              fVar105 = auVar109._0_4_;
              fVar73 = auVar109._4_4_;
              fVar75 = auVar109._8_4_;
              auVar115._0_8_ =
                   CONCAT44(fVar51 * fVar81 + fVar19 * fVar11 + fVar73 * fVar80,
                            fVar50 * fVar81 + fVar20 * fVar11 + fVar105 * fVar80);
              auVar115._8_4_ = fVar47 * fVar81 + fVar68 * fVar11 + fVar75 * fVar80;
              auVar115._12_4_ = fVar81 * 0.0 + fVar11 * 0.0 + fVar80 * 0.0;
              fVar81 = fVar51 * fVar69 + fVar19 * fVar74 + fVar73 * fVar78;
              fVar11 = fVar69 * 0.0 + fVar74 * 0.0 + fVar78 * 0.0;
              uStack_128 = CONCAT17((char)((uint)fVar11 >> 0x18),
                                    CONCAT16((char)((uint)fVar11 >> 0x10),
                                             CONCAT15((char)((uint)fVar11 >> 8),
                                                      CONCAT14(SUB41(fVar11,0),
                                                               fVar47 * fVar69 + fVar68 * fVar74 +
                                                               fVar75 * fVar78))));
              uStack_130 = CONCAT17((char)((uint)fVar81 >> 0x18),
                                    CONCAT16((char)((uint)fVar81 >> 0x10),
                                             CONCAT15((char)((uint)fVar81 >> 8),
                                                      CONCAT14(SUB41(fVar81,0),
                                                               fVar50 * fVar69 + fVar20 * fVar74 +
                                                               fVar105 * fVar78))));
              uStack_118 = auVar115._8_8_;
              uStack_108 = CONCAT44(fVar70 * 0.0 + fVar71 * 0.0 + fVar94 * 0.0,
                                    fVar47 * fVar70 + fVar68 * fVar71 + fVar75 * fVar94);
              uStack_110 = CONCAT44(fVar51 * fVar70 + fVar19 * fVar71 + fVar73 * fVar94,
                                    fVar50 * fVar70 + fVar20 * fVar71 + fVar105 * fVar94);
              uStack_f8 = CONCAT44(auVar107._12_4_ + 0.0,
                                   auVar107._8_4_ +
                                   auVar111._0_4_ + auVar111._4_4_ + auVar90._0_4_ + auVar90._4_4_);
              uStack_100 = CONCAT44(auVar107._4_4_ +
                                    auVar121._0_4_ + auVar121._4_4_ + auVar120._0_4_,
                                    auVar107._0_4_ +
                                    auVar117._0_4_ + auVar117._4_4_ + auVar110._0_4_);
              uStack_120 = auVar115._0_8_;
              (**(code **)(*(long *)puVar42[8] + 0x10))
                        ((long *)puVar42[8],&uStack_130,&fStack_e0,&uStack_f0);
              (**(code **)(**(long **)(uVar46 + 8) + 0x10))
                        (*(long **)(uVar46 + 8),*(undefined8 *)(uVar46 + 0x18),&fStack_140,
                         &fStack_150);
              if ((fStack_150 < fStack_e0) || ((float)uStack_f0 < fStack_140)) {
                bVar21 = 1;
              }
              else {
                bVar21 = 0;
              }
              if ((fStack_148 < fStack_d8) || ((float)uStack_e8 < fStack_138)) {
                bVar21 = 1;
              }
              if ((fStack_14c < fStack_dc) ||
                 (!(bool)(fStack_13c <= uStack_f0._4_4_ & (bVar21 ^ 1)))) {
                (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x60) + lVar44))();
                (**(code **)(**(long **)(param_1 + 8) + 0x78))
                          (*(long **)(param_1 + 8),
                           *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar44));
                *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar44) = 0;
              }
            }
            lVar30 = lVar30 + 0x60;
            lVar44 = lVar44 + 8;
          } while ((ulong)uVar25 * 0x60 - lVar30 != 0);
        }
      }
      return;
    }
  }
  else {
    if ((*(int *)(lVar44 + 0x68) != *(int *)(param_1 + 0xb0)) ||
       (*(int *)(lVar30 + 0x68) != *(int *)(param_1 + 0xb4))) {
      FUN_10980c698(param_1);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar44 + 0x68);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar30 + 0x68);
    }
    lVar23 = 0;
    do {
      *(undefined4 *)((long)&lStack_e80 + lVar23) = 0x401;
      *(undefined8 *)((long)auStack_df8 + lVar23 + 8) = 0;
      *(undefined8 *)((long)auStack_df8 + lVar23) = 0;
      *(undefined8 *)((long)auStack_df8 + lVar23 + 0x18) = 0;
      *(undefined8 *)((long)auStack_df8 + lVar23 + 0x10) = 0;
      *(undefined8 *)((long)auStack_df8 + lVar23 + 0x28) = 0;
      *(undefined8 *)((long)auStack_df8 + lVar23 + 0x20) = 0;
      *(undefined4 *)((long)auStack_dc8 + lVar23) = 0;
      *(undefined4 *)((long)auStack_cf8 + lVar23) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23 + 8) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23 + 0x18) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23 + 0x10) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23 + 0x28) = 0;
      *(undefined8 *)((long)auStack_d28 + lVar23 + 0x20) = 0;
      *(undefined4 *)((long)auStack_c28 + lVar23) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23 + 8) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23 + 0x18) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23 + 0x10) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23 + 0x28) = 0;
      *(undefined8 *)((long)auStack_c58 + lVar23 + 0x20) = 0;
      *(undefined4 *)((long)auStack_b58 + lVar23) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23 + 8) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23 + 0x18) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23 + 0x10) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23 + 0x28) = 0;
      *(undefined8 *)((long)auStack_b88 + lVar23 + 0x20) = 0;
      *(undefined4 *)((long)auStack_b20 + lVar23 + 0xc) = 0;
      *(undefined8 *)((long)auStack_b10 + lVar23) = 0;
      *(undefined4 *)((long)auStack_b20 + lVar23) = 0;
      lVar45 = lVar23 + 0x380;
      *(undefined8 *)((long)auStack_b30 + lVar23 + 8) = 0;
      *(undefined8 *)((long)auStack_b30 + lVar23) = 0;
      lVar23 = lVar45;
    } while (lVar45 != 0xe00);
    uStack_ed0 = uStack_ed0 & 0xffffffffffffff00;
    plStack_ed8 = &lStack_e80;
    iStack_ee0 = 4;
    lVar23 = *(long *)(param_1 + 0x88);
    iVar33 = *(int *)(lVar23 + 0xc);
    if (0 < iVar33) {
      lVar45 = 0;
      do {
        iStack_ee4 = 0;
        plVar24 = *(long **)(*(long *)(lVar23 + 0x18) + lVar45 * 0x10 + 8);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x20))(plVar24,&uStack_ee8);
          iVar33 = iStack_ee4;
          if (iStack_ee4 < 1) {
LAB_10980c9d8:
            if ((iVar33 == 0) || (-1 < iStack_ee0)) {
              if (-1 < iVar33) goto LAB_10980ca24;
            }
            else {
              if ((plStack_ed8 != (long *)0x0) && ((uStack_ed0 & 1) != 0)) {
                FUN_109825740();
              }
              uStack_ed0 = CONCAT71(uStack_ed0._1_7_,1);
              plStack_ed8 = (long *)0x0;
              iStack_ee0 = 0;
            }
            lVar37 = (long)iVar33;
            do {
              plStack_ed8[lVar37] = 0;
              lVar37 = lVar37 + 1;
            } while ((int)lVar37 != 0);
          }
          else {
            lVar37 = 0;
            do {
              lVar34 = plStack_ed8[lVar37];
              if (*(int *)(lVar34 + 0x360) != 0) {
                *(long *)(param_5 + 8) = lVar34;
                lVar36 = *(long *)(*(long *)(param_5 + 0x10) + 0x10);
                lVar38 = *(long *)(*(long *)(param_5 + 0x18) + 0x10);
                lVar1 = lVar36;
                if (*(long *)(lVar34 + 0x350) != lVar36) {
                  lVar1 = lVar38;
                  lVar38 = lVar36;
                }
                FUN_10982280c(lVar34,lVar1 + 0x10,lVar38 + 0x10);
                *(undefined8 *)(param_5 + 8) = 0;
                iVar33 = iStack_ee4;
              }
              lVar37 = lVar37 + 1;
            } while (lVar37 < iVar33);
            if (iVar33 < 1) goto LAB_10980c9d8;
          }
LAB_10980ca24:
          iVar33 = *(int *)(lVar23 + 0xc);
        }
        lVar45 = lVar45 + 1;
      } while (lVar45 < iVar33);
    }
    iStack_ee4 = 0;
    FUN_1098079e0(&uStack_ee8);
    uStack_ec8 = *(undefined8 *)(param_1 + 8);
    uStack_eb0 = *(undefined8 *)(param_1 + 0x88);
    uStack_ea8 = *(undefined8 *)(param_1 + 0x78);
    uStack_ee8 = 0x10b12798;
    iStack_ee4 = 1;
    iStack_ee0 = 0;
    lVar23 = *plVar43;
    plStack_ed8 = (long *)param_2;
    uStack_ed0 = param_3;
    uStack_ec0 = param_4;
    lStack_eb8 = param_5;
    if ((lVar23 != 0) && (lVar45 = *plVar31, lVar45 != 0)) {
      pVar27 = *(unkbyte9 **)(param_2 + 0x18);
      uVar113 = *(undefined8 *)((long)pVar27 + 8);
      fVar71 = (float)*(undefined8 *)((long)pVar27 + 0x18);
      uVar18 = *(undefined8 *)(pVar27 + 1);
      fVar50 = *(float *)(pVar27 + 1);
      fVar70 = (float)uVar18;
      fVar75 = (float)((ulong)uVar18 >> 0x20);
      auVar107 = *(undefined1 (*) [16])(pVar27 + 2);
      auVar90 = *(undefined1 (*) [16])(pVar27 + 3);
      auVar104[9] = (char)((ulong)uVar113 >> 8);
      auVar104._0_9_ = *pVar27;
      auVar104[10] = (char)((ulong)uVar113 >> 0x10);
      auVar104[0xb] = (char)((ulong)uVar113 >> 0x18);
      fVar51 = (float)*pVar27;
      auVar91._4_12_ = in_q4._4_12_;
      auVar91._0_4_ = fVar51;
      auVar112._12_4_ = in_q4._12_4_;
      auVar112._0_8_ = auVar91._0_8_;
      auVar112._8_4_ = auVar104._8_4_;
      auVar118._8_8_ = auVar112._8_8_;
      auVar118._4_4_ = fVar50;
      auVar118._0_4_ = fVar51;
      auVar92._0_12_ = auVar118._0_12_;
      auVar92._12_4_ = *(undefined4 *)((long)pVar27 + 0x18);
      fVar47 = auVar107._4_4_;
      auVar112 = NEON_ext(auVar107,auVar107,8,1);
      pfVar28 = *(float **)(param_3 + 0x18);
      fVar69 = *pfVar28;
      fVar74 = pfVar28[1];
      fVar78 = pfVar28[2];
      fVar20 = pfVar28[4];
      fVar19 = pfVar28[5];
      fVar68 = pfVar28[6];
      auVar109 = *(undefined1 (*) [16])(pfVar28 + 8);
      fVar94 = pfVar28[0xc];
      fVar105 = pfVar28[0xd];
      fVar73 = pfVar28[0xe];
      fVar80 = (float)((ulong)*(undefined8 *)pVar27 >> 0x20);
      fVar81 = (float)uVar113;
      fVar79 = auVar109._0_4_;
      fVar67 = auVar109._4_4_;
      fVar77 = auVar109._8_4_;
      fVar124 = fVar69 * fVar80 + fVar20 * fVar75 + fVar79 * fVar47;
      fVar125 = fVar74 * fVar80 + fVar19 * fVar75 + fVar67 * fVar47;
      fVar126 = fVar78 * fVar80 + fVar68 * fVar75 + fVar77 * fVar47;
      fVar11 = (float)*(undefined8 *)pVar27;
      fVar72 = auVar107._0_4_;
      fVar127 = fVar69 * fVar11 + fVar20 * fVar70 + fVar79 * fVar72;
      fVar128 = fVar74 * fVar11 + fVar19 * fVar70 + fVar67 * fVar72;
      fVar129 = fVar78 * fVar11 + fVar68 * fVar70 + fVar77 * fVar72;
      fVar76 = auVar107._8_4_;
      fVar20 = fVar69 * fVar81 + fVar20 * fVar71 + fVar79 * fVar76;
      fVar19 = fVar74 * fVar81 + fVar19 * fVar71 + fVar67 * fVar76;
      fVar68 = fVar78 * fVar81 + fVar68 * fVar71 + fVar77 * fVar76;
      auVar107 = NEON_ext(auVar92,auVar92,8,1);
      auVar83._0_8_ = auVar90._0_8_ ^ 0x8000000080000000;
      auVar83[8] = auVar90[8];
      auVar83[9] = auVar90[9];
      auVar83[10] = auVar90[10];
      auVar83[0xb] = auVar90[0xb] ^ 0x80;
      auVar120[0xc] = auVar90[0xc];
      auVar120._0_12_ = auVar83;
      auVar120[0xd] = auVar90[0xd];
      auVar120[0xe] = auVar90[0xe];
      auVar120[0xf] = auVar90[0xf] ^ 0x80;
      fVar69 = (float)auVar83._0_8_;
      auVar100._0_4_ = fVar51 * fVar69;
      fVar74 = (float)(auVar83._0_8_ >> 0x20);
      auVar100._4_4_ = fVar50 * fVar74;
      fVar78 = auVar83._8_4_;
      auVar100._8_4_ = fVar72 * fVar78;
      auVar100._12_4_ = auVar120._12_4_ * 0.0;
      fVar71 = fVar80 * fVar69;
      fVar76 = fVar75 * fVar74;
      fVar81 = auVar120._12_4_ * 0.0;
      auVar120 = NEON_ext(auVar100,auVar100,8,1);
      auVar109._4_4_ = fVar76;
      auVar109._0_4_ = fVar71;
      auVar109._8_4_ = fVar47 * fVar78;
      auVar109._12_4_ = fVar81;
      auVar110._4_4_ = fVar76;
      auVar110._0_4_ = fVar71;
      auVar110._8_4_ = fVar47 * fVar78;
      auVar110._12_4_ = fVar81;
      auVar118 = NEON_ext(auVar109,auVar110,8,1);
      auVar130._0_4_ = auVar107._0_4_ * fVar69;
      auVar130._4_4_ = auVar107._4_4_ * fVar74;
      auVar130._8_4_ = auVar112._0_4_ * fVar78;
      auVar130._12_4_ = 0;
      auVar110 = NEON_ext(auVar130,auVar130,8,1);
      auVar93._0_4_ = fVar51 * fVar94;
      auVar93._4_4_ = fVar50 * fVar105;
      auVar93._8_4_ = fVar72 * fVar73;
      auVar93._12_4_ = pfVar28[0xf] * 0.0;
      fVar69 = fVar80 * fVar94;
      fVar78 = fVar75 * fVar105;
      uVar52 = (undefined1)((uint)fVar78 >> 8);
      uVar53 = (undefined1)((uint)fVar78 >> 0x10);
      uVar54 = (undefined1)((uint)fVar78 >> 0x18);
      fVar81 = fVar47 * fVar73;
      uVar55 = (undefined1)((uint)fVar81 >> 8);
      uVar56 = (undefined1)((uint)fVar81 >> 0x10);
      uVar57 = (undefined1)((uint)fVar81 >> 0x18);
      fVar74 = pfVar28[0xf] * 0.0;
      uVar58 = (undefined1)((uint)fVar74 >> 8);
      uVar59 = (undefined1)((uint)fVar74 >> 0x10);
      uVar60 = (undefined1)((uint)fVar74 >> 0x18);
      auVar101._0_4_ = auVar107._0_4_ * fVar94;
      auVar101._4_4_ = auVar107._4_4_ * fVar105;
      auVar101._8_4_ = auVar112._0_4_ * fVar73;
      auVar109 = NEON_ext(auVar93,auVar93,8,1);
      auVar90[4] = SUB41(fVar78,0);
      auVar90._0_4_ = fVar69;
      auVar90[5] = uVar52;
      auVar90[6] = uVar53;
      auVar90[7] = uVar54;
      auVar90[8] = SUB41(fVar81,0);
      auVar90[9] = uVar55;
      auVar90[10] = uVar56;
      auVar90[0xb] = uVar57;
      auVar90[0xc] = SUB41(fVar74,0);
      auVar90[0xd] = uVar58;
      auVar90[0xe] = uVar59;
      auVar90[0xf] = uVar60;
      auVar107[4] = SUB41(fVar78,0);
      auVar107._0_4_ = fVar69;
      auVar107[5] = uVar52;
      auVar107[6] = uVar53;
      auVar107[7] = uVar54;
      auVar107[8] = SUB41(fVar81,0);
      auVar107[9] = uVar55;
      auVar107[10] = uVar56;
      auVar107[0xb] = uVar57;
      auVar107[0xc] = SUB41(fVar74,0);
      auVar107[0xd] = uVar58;
      auVar107[0xe] = uVar59;
      auVar107[0xf] = uVar60;
      auVar107 = NEON_ext(auVar90,auVar107,8,1);
      auVar101._12_4_ = 0;
      auVar90 = NEON_ext(auVar101,auVar101,8,1);
      fVar81 = *(float *)(param_5 + 0x30);
      bStack_e88 = 0;
      plStack_e90 = &lStack_e80;
      uStack_e9c = 0x8000000080;
      auVar106._0_8_ =
           CONCAT17((char)((uint)fVar128 >> 0x18),
                    CONCAT16((char)((uint)fVar128 >> 0x10),
                             CONCAT15((char)((uint)fVar128 >> 8),CONCAT14(SUB41(fVar128,0),fVar127))
                            )) & 0x7fffffff7fffffff;
      auVar106[8] = SUB41(fVar129,0);
      auVar106[9] = (char)((uint)fVar129 >> 8);
      auVar106[10] = (char)((uint)fVar129 >> 0x10);
      auVar106[0xb] = (byte)((uint)fVar129 >> 0x18) & 0x7f;
      fStack_f88 = ABS(fVar126);
      fStack_f90 = ABS(fVar124);
      fStack_f8c = ABS(fVar125);
      fVar74 = auVar120._0_4_ + auVar100._0_4_ + auVar100._4_4_ +
               auVar93._0_4_ + auVar93._4_4_ + auVar109._0_4_;
      fVar69 = auVar118._0_4_ + fVar71 + fVar76 + fVar69 + fVar78 + auVar107._0_4_;
      iVar33 = 0x7c;
      fStack_f98 = ABS(fVar68);
      fStack_fa0 = ABS(fVar20);
      fStack_f9c = ABS(fVar19);
      uVar46 = 1;
      lStack_e80 = lVar23;
      lStack_e78 = lVar45;
      do {
        iVar40 = (int)uVar46;
        lVar23 = (long)iVar40;
        uVar46 = lVar23 - 1;
        pfVar28 = (float *)plStack_e90[uVar46 * 2];
        puVar42 = (undefined8 *)(plStack_e90 + uVar46 * 2)[1];
        fVar78 = (float)*puVar42;
        fVar94 = (float)((ulong)*puVar42 >> 0x20);
        fVar73 = (*(float *)(puVar42 + 2) + fVar78) * 0.5;
        fVar50 = (*(float *)((long)puVar42 + 0x14) + fVar94) * 0.5;
        fVar51 = (*(float *)(puVar42 + 3) + (float)puVar42[1]) * 0.5;
        fVar78 = (*(float *)(puVar42 + 2) - fVar78) * 0.5 + 0.0;
        fVar94 = (*(float *)((long)puVar42 + 0x14) - fVar94) * 0.5 + 0.0;
        fVar105 = (*(float *)(puVar42 + 3) - (float)puVar42[1]) * 0.5 + 0.0;
        fVar71 = fVar20 * fVar73;
        fVar76 = (float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                  CONCAT16((char)((uint)fVar19 >> 0x10),
                                           CONCAT15((char)((uint)fVar19 >> 8),
                                                    CONCAT14(SUB41(fVar19,0),fVar20)))) >> 0x20) *
                 fVar50;
        fVar79 = fVar68 * fVar51;
        auVar86._0_4_ = fVar127 * fVar73;
        auVar86._4_4_ = fVar128 * fVar50;
        auVar86._8_4_ = fVar129 * fVar51;
        auVar86._12_4_ = (fVar11 * 0.0 + fVar70 * 0.0 + fVar72 * 0.0) * 0.0;
        auVar48._0_4_ = fVar124 * fVar73;
        auVar48._4_4_ = fVar125 * fVar50;
        auVar48._8_4_ = fVar126 * fVar51;
        auVar48._12_4_ = (fVar80 * 0.0 + fVar75 * 0.0 + fVar47 * 0.0) * 0.0;
        auVar109 = NEON_ext(auVar86,auVar86,8,1);
        auVar120 = NEON_ext(auVar48,auVar48,8,1);
        auVar14._4_4_ = fVar76;
        auVar14._0_4_ = fVar71;
        auVar14._8_4_ = fVar79;
        auVar14._12_4_ = 0;
        auVar15._4_4_ = fVar76;
        auVar15._0_4_ = fVar71;
        auVar15._8_4_ = fVar79;
        auVar15._12_4_ = 0;
        auVar107 = NEON_ext(auVar14,auVar15,8,1);
        fVar73 = fVar74 + auVar86._0_4_ + auVar86._4_4_ + auVar109._0_4_;
        fVar50 = (float)(CONCAT17((char)((uint)fVar69 >> 0x18),
                                  CONCAT16((char)((uint)fVar69 >> 0x10),
                                           CONCAT15((char)((uint)fVar69 >> 8),
                                                    CONCAT14(SUB41(fVar69,0),fVar74)))) >> 0x20) +
                 auVar48._0_4_ + auVar48._4_4_ + auVar120._0_4_;
        fVar51 = auVar130._0_4_ + auVar130._4_4_ + auVar110._0_4_ + auVar110._4_4_ +
                 auVar101._0_4_ + auVar101._4_4_ + auVar90._0_4_ + auVar90._4_4_ +
                 fVar71 + fVar76 + auVar107._0_4_ + auVar107._4_4_;
        fVar71 = fVar78 * (float)auVar106._0_8_;
        fVar76 = fVar94 * (float)(auVar106._0_8_ >> 0x20);
        fVar79 = fVar105 * auVar106._8_4_;
        auVar87._0_4_ = fVar78 * fStack_f90;
        auVar87._4_4_ = fVar94 * fStack_f8c;
        auVar87._8_4_ = fVar105 * fStack_f88;
        auVar87._12_4_ = 0;
        fVar78 = fVar78 * fStack_fa0;
        fVar94 = fVar94 * fStack_f9c;
        uVar52 = (undefined1)((uint)fVar94 >> 8);
        uVar53 = (undefined1)((uint)fVar94 >> 0x10);
        uVar54 = (undefined1)((uint)fVar94 >> 0x18);
        fVar105 = fVar105 * fStack_f98;
        uVar55 = (undefined1)((uint)fVar105 >> 8);
        uVar56 = (undefined1)((uint)fVar105 >> 0x10);
        uVar57 = (undefined1)((uint)fVar105 >> 0x18);
        auVar16._4_4_ = fVar76;
        auVar16._0_4_ = fVar71;
        auVar16._8_4_ = fVar79;
        auVar16._12_4_ = 0;
        auVar17._4_4_ = fVar76;
        auVar17._0_4_ = fVar71;
        auVar17._8_4_ = fVar79;
        auVar17._12_4_ = 0;
        auVar107 = NEON_ext(auVar16,auVar17,8,1);
        auVar109 = NEON_ext(auVar87,auVar87,8,1);
        fVar71 = fVar71 + fVar76 + auVar107._0_4_;
        fVar76 = auVar87._0_4_ + auVar87._4_4_ + auVar109._0_4_;
        auVar5[4] = SUB41(fVar94,0);
        auVar5._0_4_ = fVar78;
        auVar5[5] = uVar52;
        auVar5[6] = uVar53;
        auVar5[7] = uVar54;
        auVar5[8] = SUB41(fVar105,0);
        auVar5[9] = uVar55;
        auVar5[10] = uVar56;
        auVar5[0xb] = uVar57;
        auVar5._12_4_ = 0;
        auVar6[4] = SUB41(fVar94,0);
        auVar6._0_4_ = fVar78;
        auVar6[5] = uVar52;
        auVar6[6] = uVar53;
        auVar6[7] = uVar54;
        auVar6[8] = SUB41(fVar105,0);
        auVar6[9] = uVar55;
        auVar6[10] = uVar56;
        auVar6[0xb] = uVar57;
        auVar6._12_4_ = 0;
        auVar107 = NEON_ext(auVar5,auVar6,8,1);
        fVar78 = fVar78 + fVar94 + auVar107._0_4_ + auVar107._4_4_;
        if (*pfVar28 <= fVar81 + fVar73 + fVar71) {
          if (((((fVar73 - fVar71) - fVar81 <= pfVar28[4]) &&
               (pfVar28[1] <= fVar81 + fVar50 + fVar76)) &&
              ((fVar50 - fVar76) - fVar81 <= pfVar28[5])) &&
             ((pfVar28[2] <= fVar81 + fVar51 + fVar78 && ((fVar51 - fVar78) - fVar81 <= pfVar28[6]))
             )) {
            if (iVar33 < (int)uVar46) {
              lVar45 = (long)(int)uStack_e9c;
              iVar33 = (int)(lVar45 << 1);
              if ((((int)uStack_e9c <= iVar33) && ((int)uStack_e9c < iVar33)) &&
                 (uStack_e9c._4_4_ < iVar33)) {
                if ((int)uStack_e9c == 0) {
                  plVar31 = (long *)0x0;
                }
                else {
                  plVar31 = (long *)(lVar45 << 5);
                  FUN_1098256f4(plVar31,0x10);
                  if (0 < (int)uStack_e9c) {
                    lVar37 = 0;
                    do {
                      uVar113 = *(undefined8 *)((long)plStack_e90 + lVar37);
                      ((undefined8 *)((long)plVar31 + lVar37))[1] =
                           ((undefined8 *)((long)plStack_e90 + lVar37))[1];
                      *(undefined8 *)((long)plVar31 + lVar37) = uVar113;
                      lVar37 = lVar37 + 0x10;
                    } while ((uStack_e9c & 0xffffffff) * 0x10 - lVar37 != 0);
                  }
                }
                if ((plStack_e90 != (long *)0x0) && ((bStack_e88 & 1) != 0)) {
                  FUN_109825740();
                }
                bStack_e88 = 1;
                uStack_e9c = lVar45 << 0x21;
                plStack_e90 = plVar31;
              }
              uStack_e9c = CONCAT44(uStack_e9c._4_4_,iVar33);
              iVar33 = iVar33 + -4;
            }
            if (*(long *)(pfVar28 + 0xc) == 0) {
              if (puVar42[6] == 0) {
                (**(code **)(CONCAT44(iStack_ee4,uStack_ee8) + 0x10))(&uStack_ee8,pfVar28,puVar42);
              }
              else {
                lVar45 = puVar42[5];
                plStack_e90[uVar46 * 2] = (long)pfVar28;
                (plStack_e90 + uVar46 * 2)[1] = lVar45;
                lVar45 = puVar42[6];
                uVar46 = (ulong)(iVar40 + 1);
                plStack_e90[lVar23 * 2] = (long)pfVar28;
                (plStack_e90 + lVar23 * 2)[1] = lVar45;
              }
            }
            else {
              plVar31 = plStack_e90 + uVar46 * 2;
              if (puVar42[6] == 0) {
                *plVar31 = *(long *)(pfVar28 + 10);
                plVar31[1] = (long)puVar42;
                uVar46 = (ulong)(iVar40 + 1);
                plStack_e90[lVar23 * 2] = *(long *)(pfVar28 + 0xc);
                (plStack_e90 + lVar23 * 2)[1] = (long)puVar42;
              }
              else {
                lVar45 = puVar42[5];
                *plVar31 = *(long *)(pfVar28 + 10);
                plVar31[1] = lVar45;
                lVar45 = puVar42[5];
                plStack_e90[lVar23 * 2] = *(long *)(pfVar28 + 0xc);
                (plStack_e90 + lVar23 * 2)[1] = lVar45;
                lVar45 = puVar42[6];
                plStack_e90[lVar23 * 2 + 2] = *(long *)(pfVar28 + 10);
                plStack_e90[lVar23 * 2 + 3] = lVar45;
                lVar45 = puVar42[6];
                uVar46 = (ulong)(iVar40 + 3);
                plStack_e90[lVar23 * 2 + 4] = *(long *)(pfVar28 + 0xc);
                plStack_e90[lVar23 * 2 + 5] = lVar45;
              }
            }
          }
        }
      } while ((int)uVar46 != 0);
      FUN_1098024b8(auStack_ea0);
    }
    lVar23 = *(long *)(param_1 + 0x88);
    bStack_e88 = 1;
    plStack_e90 = (long *)0x0;
    uStack_e9c = 0;
    if (0 < *(int *)(lVar23 + 0xc)) {
      lVar45 = 0;
      do {
        puVar42 = *(undefined8 **)(*(long *)(lVar23 + 0x18) + lVar45 * 0x10 + 8);
        if (puVar42 != (undefined8 *)0x0) {
          puVar32 = (undefined8 *)
                    (*(long *)(lVar44 + 0x30) +
                    (long)*(int *)(*(long *)(lVar23 + 0x18) + lVar45 * 0x10) * 0x60);
          pfVar28 = *(float **)(param_2 + 0x18);
          fVar19 = *pfVar28;
          fVar68 = pfVar28[1];
          fVar94 = pfVar28[2];
          fVar67 = (float)puVar32[1];
          fVar72 = (float)*puVar32;
          fVar79 = (float)((ulong)*puVar32 >> 0x20);
          fVar105 = *(float *)(puVar32 + 2);
          fVar73 = *(float *)((long)puVar32 + 0x14);
          fVar50 = *(float *)(puVar32 + 3);
          fVar51 = *(float *)(puVar32 + 4);
          fVar47 = *(float *)((long)puVar32 + 0x24);
          fVar70 = *(float *)(puVar32 + 5);
          fVar71 = *(float *)(puVar32 + 6);
          fVar75 = *(float *)((long)puVar32 + 0x34);
          fVar76 = *(float *)(puVar32 + 7);
          fVar81 = (float)*(undefined8 *)(pfVar28 + 4);
          auVar90 = *(undefined1 (*) [16])(pfVar28 + 8);
          fVar77 = auVar90._0_4_;
          fVar11 = (float)((ulong)*(undefined8 *)(pfVar28 + 4) >> 0x20);
          fVar124 = auVar90._4_4_;
          fVar80 = (float)*(undefined8 *)(pfVar28 + 6);
          auVar122._0_4_ = fVar19 * fVar71;
          auVar122._4_4_ = fVar68 * fVar75;
          auVar122._8_4_ = fVar94 * fVar76;
          auVar122._12_4_ = pfVar28[3] * *(float *)((long)puVar32 + 0x3c);
          fVar69 = fVar81 * fVar71;
          fVar74 = fVar11 * fVar75;
          uVar52 = (undefined1)((uint)fVar74 >> 8);
          uVar53 = (undefined1)((uint)fVar74 >> 0x10);
          uVar54 = (undefined1)((uint)fVar74 >> 0x18);
          fVar78 = fVar80 * fVar76;
          uVar55 = (undefined1)((uint)fVar78 >> 8);
          uVar56 = (undefined1)((uint)fVar78 >> 0x10);
          uVar57 = (undefined1)((uint)fVar78 >> 0x18);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar28 + 6) >> 0x20) *
                   *(float *)((long)puVar32 + 0x3c);
          uVar58 = (undefined1)((uint)fVar20 >> 8);
          uVar59 = (undefined1)((uint)fVar20 >> 0x10);
          uVar60 = (undefined1)((uint)fVar20 >> 0x18);
          auVar102._0_4_ = fVar77 * fVar71;
          auVar102._4_4_ = fVar124 * fVar75;
          fVar71 = auVar90._8_4_;
          auVar102._8_4_ = fVar71 * fVar76;
          auVar102._12_4_ = 0;
          auVar107 = NEON_ext(auVar102,auVar102,8,1);
          auVar7[4] = SUB41(fVar74,0);
          auVar7._0_4_ = fVar69;
          auVar7[5] = uVar52;
          auVar7[6] = uVar53;
          auVar7[7] = uVar54;
          auVar7[8] = SUB41(fVar78,0);
          auVar7[9] = uVar55;
          auVar7[10] = uVar56;
          auVar7[0xb] = uVar57;
          auVar7[0xc] = SUB41(fVar20,0);
          auVar7[0xd] = uVar58;
          auVar7[0xe] = uVar59;
          auVar7[0xf] = uVar60;
          auVar8[4] = SUB41(fVar74,0);
          auVar8._0_4_ = fVar69;
          auVar8[5] = uVar52;
          auVar8[6] = uVar53;
          auVar8[7] = uVar54;
          auVar8[8] = SUB41(fVar78,0);
          auVar8[9] = uVar55;
          auVar8[10] = uVar56;
          auVar8[0xb] = uVar57;
          auVar8[0xc] = SUB41(fVar20,0);
          auVar8[0xd] = uVar58;
          auVar8[0xe] = uVar59;
          auVar8[0xf] = uVar60;
          auVar109 = NEON_ext(auVar7,auVar8,8,1);
          auVar90 = NEON_ext(auVar122,auVar122,8,1);
          fStack_e50 = pfVar28[0xc] + auVar122._0_4_ + auVar122._4_4_ + auVar90._0_4_;
          fStack_e4c = pfVar28[0xd] + fVar69 + fVar74 + auVar109._0_4_;
          fStack_e48 = pfVar28[0xe] +
                       auVar102._0_4_ + auVar102._4_4_ + auVar107._0_4_ + auVar107._4_4_;
          fStack_e44 = pfVar28[0xf] + 0.0;
          lStack_e78 = CONCAT44(fVar19 * 0.0 + fVar68 * 0.0 + fVar94 * 0.0,
                                fVar67 * fVar19 + fVar50 * fVar68 + fVar70 * fVar94);
          lStack_e80 = CONCAT44(fVar79 * fVar19 + fVar73 * fVar68 + fVar47 * fVar94,
                                fVar72 * fVar19 + fVar105 * fVar68 + fVar51 * fVar94);
          uStack_e68 = CONCAT44(fVar81 * 0.0 + fVar11 * 0.0 + fVar80 * 0.0,
                                fVar67 * fVar81 + fVar50 * fVar11 + fVar70 * fVar80);
          uStack_e70 = CONCAT44(fVar79 * fVar81 + fVar73 * fVar11 + fVar47 * fVar80,
                                fVar72 * fVar81 + fVar105 * fVar11 + fVar51 * fVar80);
          uStack_e58 = CONCAT44(fVar77 * 0.0 + fVar124 * 0.0 + fVar71 * 0.0,
                                fVar67 * fVar77 + fVar50 * fVar124 + fVar70 * fVar71);
          uStack_e60 = CONCAT44(fVar79 * fVar77 + fVar73 * fVar124 + fVar47 * fVar71,
                                fVar72 * fVar77 + fVar105 * fVar124 + fVar51 * fVar71);
          (**(code **)(*(long *)puVar32[8] + 0x10))
                    ((long *)puVar32[8],&lStack_e80,&uStack_f00,&fStack_f10);
          fVar81 = *(float *)(param_5 + 0x30);
          fStack_f10 = fStack_f10 + fVar81;
          fStack_f0c = fStack_f0c + fVar81;
          fStack_f08 = fStack_f08 + fVar81;
          fStack_f04 = fStack_f04 + 0.0;
          uStack_ef8 = CONCAT44(uStack_ef8._4_4_ - 0.0,(float)uStack_ef8 - fVar81);
          uStack_f00 = CONCAT44(uStack_f00._4_4_ - fVar81,(float)uStack_f00 - fVar81);
          puVar32 = (undefined8 *)
                    (*(long *)(lVar30 + 0x30) +
                    (long)*(int *)(*(long *)(lVar23 + 0x18) + lVar45 * 0x10 + 4) * 0x60);
          pfVar28 = *(float **)(param_3 + 0x18);
          fVar78 = *pfVar28;
          fVar20 = pfVar28[1];
          fVar19 = pfVar28[2];
          fVar71 = (float)puVar32[1];
          fVar47 = (float)*puVar32;
          fVar70 = (float)((ulong)*puVar32 >> 0x20);
          fVar68 = *(float *)(puVar32 + 2);
          fVar94 = *(float *)((long)puVar32 + 0x14);
          fVar105 = *(float *)(puVar32 + 3);
          auVar90 = *(undefined1 (*) [16])(puVar32 + 4);
          fVar73 = *(float *)(puVar32 + 6);
          fVar50 = *(float *)((long)puVar32 + 0x34);
          fVar51 = *(float *)(puVar32 + 7);
          fVar11 = (float)*(undefined8 *)(pfVar28 + 4);
          auVar107 = *(undefined1 (*) [16])(pfVar28 + 8);
          auVar109 = *(undefined1 (*) [16])(pfVar28 + 0xc);
          fVar79 = auVar107._0_4_;
          fVar80 = (float)((ulong)*(undefined8 *)(pfVar28 + 4) >> 0x20);
          fVar67 = auVar107._4_4_;
          fVar69 = (float)*(undefined8 *)(pfVar28 + 6);
          fVar75 = auVar90._0_4_;
          fVar76 = auVar90._4_4_;
          fVar72 = auVar90._8_4_;
          auVar108._0_8_ =
               CONCAT44(fVar70 * fVar11 + fVar94 * fVar80 + fVar76 * fVar69,
                        fVar47 * fVar11 + fVar68 * fVar80 + fVar75 * fVar69);
          auVar108._8_4_ = fVar71 * fVar11 + fVar105 * fVar80 + fVar72 * fVar69;
          auVar108._12_4_ = fVar11 * 0.0 + fVar80 * 0.0 + fVar69 * 0.0;
          auVar123._0_4_ = fVar78 * fVar73;
          auVar123._4_4_ = fVar20 * fVar50;
          auVar123._8_4_ = fVar19 * fVar51;
          auVar123._12_4_ = pfVar28[3] * *(float *)((long)puVar32 + 0x3c);
          fVar11 = fVar11 * fVar73;
          fVar80 = fVar80 * fVar50;
          uVar52 = (undefined1)((uint)fVar80 >> 8);
          uVar53 = (undefined1)((uint)fVar80 >> 0x10);
          uVar54 = (undefined1)((uint)fVar80 >> 0x18);
          fVar69 = fVar69 * fVar51;
          uVar55 = (undefined1)((uint)fVar69 >> 8);
          uVar56 = (undefined1)((uint)fVar69 >> 0x10);
          uVar57 = (undefined1)((uint)fVar69 >> 0x18);
          fVar74 = (float)((ulong)*(undefined8 *)(pfVar28 + 6) >> 0x20) *
                   *(float *)((long)puVar32 + 0x3c);
          uVar58 = (undefined1)((uint)fVar74 >> 8);
          uVar59 = (undefined1)((uint)fVar74 >> 0x10);
          uVar60 = (undefined1)((uint)fVar74 >> 0x18);
          auVar103._0_4_ = fVar79 * fVar73;
          auVar103._4_4_ = fVar67 * fVar50;
          fVar73 = auVar107._8_4_;
          auVar103._8_4_ = fVar73 * fVar51;
          auVar103._12_4_ = 0;
          auVar107 = NEON_ext(auVar103,auVar103,8,1);
          auVar9[4] = SUB41(fVar80,0);
          auVar9._0_4_ = fVar11;
          auVar9[5] = uVar52;
          auVar9[6] = uVar53;
          auVar9[7] = uVar54;
          auVar9[8] = SUB41(fVar69,0);
          auVar9[9] = uVar55;
          auVar9[10] = uVar56;
          auVar9[0xb] = uVar57;
          auVar9[0xc] = SUB41(fVar74,0);
          auVar9[0xd] = uVar58;
          auVar9[0xe] = uVar59;
          auVar9[0xf] = uVar60;
          auVar10[4] = SUB41(fVar80,0);
          auVar10._0_4_ = fVar11;
          auVar10[5] = uVar52;
          auVar10[6] = uVar53;
          auVar10[7] = uVar54;
          auVar10[8] = SUB41(fVar69,0);
          auVar10[9] = uVar55;
          auVar10[10] = uVar56;
          auVar10[0xb] = uVar57;
          auVar10[0xc] = SUB41(fVar74,0);
          auVar10[0xd] = uVar58;
          auVar10[0xe] = uVar59;
          auVar10[0xf] = uVar60;
          auVar110 = NEON_ext(auVar9,auVar10,8,1);
          auVar119._0_8_ =
               CONCAT44(fVar70 * fVar79 + fVar94 * fVar67 + fVar76 * fVar73,
                        fVar47 * fVar79 + fVar68 * fVar67 + fVar75 * fVar73);
          auVar119._8_4_ = fVar71 * fVar79 + fVar105 * fVar67 + fVar72 * fVar73;
          auVar119._12_4_ = fVar79 * 0.0 + fVar67 * 0.0 + fVar73 * 0.0;
          auVar90 = NEON_ext(auVar123,auVar123,8,1);
          fStack_e50 = auVar109._0_4_ + auVar123._0_4_ + auVar123._4_4_ + auVar90._0_4_;
          fStack_e4c = auVar109._4_4_ + fVar11 + fVar80 + auVar110._0_4_;
          fStack_e48 = auVar109._8_4_ +
                       auVar103._0_4_ + auVar103._4_4_ + auVar107._0_4_ + auVar107._4_4_;
          fStack_e44 = auVar109._12_4_ + 0.0;
          lStack_e78 = CONCAT44(fVar78 * 0.0 + fVar20 * 0.0 + fVar19 * 0.0,
                                fVar71 * fVar78 + fVar105 * fVar20 + fVar72 * fVar19);
          lStack_e80 = CONCAT44(fVar70 * fVar78 + fVar94 * fVar20 + fVar76 * fVar19,
                                fVar47 * fVar78 + fVar68 * fVar20 + fVar75 * fVar19);
          uStack_e68 = auVar108._8_8_;
          uStack_e58 = auVar119._8_8_;
          uStack_e70 = auVar108._0_8_;
          uStack_e60 = auVar119._0_8_;
          (**(code **)(*(long *)puVar32[8] + 0x10))
                    ((long *)puVar32[8],&lStack_e80,&uStack_f20,&uStack_f30);
          fVar80 = (float)(CONCAT17((char)((uint)fVar81 >> 0x18),
                                    CONCAT16((char)((uint)fVar81 >> 0x10),
                                             CONCAT15((char)((uint)fVar81 >> 8),
                                                      CONCAT14(SUB41(fVar81,0),fVar81)))) >> 0x20);
          uStack_f20._0_4_ = (float)uStack_f20 - fVar81;
          uStack_f20._4_4_ = uStack_f20._4_4_ - fVar80;
          auVar49._0_8_ = CONCAT44(uStack_f20._4_4_,(float)uStack_f20);
          auVar49._8_4_ = (float)uStack_f18 - fVar81;
          auVar49._12_4_ = uStack_f18._4_4_ - 0.0;
          fVar11 = fVar81 + (float)uStack_f30;
          fVar80 = fVar80 + (float)((ulong)uStack_f30 >> 0x20);
          fVar81 = fVar81 + (float)uStack_f28;
          fVar69 = (float)((ulong)uStack_f28 >> 0x20) + 0.0;
          uStack_f28 = CONCAT17((char)((uint)fVar69 >> 0x18),
                                CONCAT16((char)((uint)fVar69 >> 0x10),
                                         CONCAT15((char)((uint)fVar69 >> 8),
                                                  CONCAT14(SUB41(fVar69,0),fVar81))));
          uStack_f30 = CONCAT17((char)((uint)fVar80 >> 0x18),
                                CONCAT16((char)((uint)fVar80 >> 0x10),
                                         CONCAT15((char)((uint)fVar80 >> 8),
                                                  CONCAT14(SUB41(fVar80,0),fVar11))));
          uStack_f18 = auVar49._8_8_;
          uStack_f20 = auVar49._0_8_;
          if (((((fVar80 < uStack_f00._4_4_) || (fStack_f0c < uStack_f20._4_4_)) ||
               (fVar81 < (float)uStack_ef8)) ||
              ((fStack_f08 < auVar49._8_4_ || (fVar11 < (float)uStack_f00)))) ||
             (fStack_f10 < (float)uStack_f20)) {
            (**(code **)*puVar42)(puVar42);
            (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),puVar42);
            uVar113 = *(undefined8 *)(*(long *)(lVar23 + 0x18) + lVar45 * 0x10);
            uVar25 = *(uint *)(param_1 + 0x94);
            if (uVar25 == *(uint *)(param_1 + 0x98)) {
              uVar26 = uVar25 << 1;
              if (uVar25 == 0) {
                uVar26 = 1;
              }
              if ((int)uVar25 < (int)uVar26) {
                if (uVar26 == 0) {
                  uVar46 = 0;
                }
                else {
                  uVar46 = -(ulong)(uVar26 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar26 << 4;
                  FUN_1098256f4(uVar46,0x10);
                  uVar25 = *(uint *)(param_1 + 0x94);
                }
                if (0 < (int)uVar25) {
                  lVar37 = 0;
                  do {
                    auVar90 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xa0) + lVar37);
                    ((undefined8 *)(uVar46 + lVar37))[1] = auVar90._8_8_;
                    *(undefined8 *)(uVar46 + lVar37) = auVar90._0_8_;
                    lVar37 = lVar37 + 0x10;
                  } while ((ulong)uVar25 << 4 != lVar37);
                }
                if (*(long *)(param_1 + 0xa0) != 0) {
                  if (param_1[0xa8] == '\x01') {
                    FUN_109825740();
                  }
                  *(undefined8 *)(param_1 + 0xa0) = 0;
                }
                param_1[0xa8] = 1;
                *(ulong *)(param_1 + 0xa0) = uVar46;
                *(uint *)(param_1 + 0x98) = uVar26;
                uVar25 = *(uint *)(param_1 + 0x94);
              }
            }
            puVar42 = (undefined8 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar25 * 0x10);
            *puVar42 = uVar113;
            puVar42[1] = 0;
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          }
        }
        lVar45 = lVar45 + 1;
      } while (lVar45 < *(int *)(lVar23 + 0xc));
    }
    if (0 < *(int *)(param_1 + 0x94)) {
      lVar44 = 0;
      lVar30 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0x88) + 0x10))
                  (*(long **)(param_1 + 0x88),*(undefined4 *)(*(long *)(param_1 + 0xa0) + lVar44),
                   ((undefined4 *)(*(long *)(param_1 + 0xa0) + lVar44))[1]);
        lVar30 = lVar30 + 1;
        lVar44 = lVar44 + 0x10;
      } while (lVar30 < *(int *)(param_1 + 0x94));
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      if (param_1[0xa8] == '\x01') {
        FUN_109825740();
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    param_1[0xa8] = 1;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    param_1 = auStack_ea0;
    FUN_1098079e0(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_1098024b8(auStack_ea0);
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 10980d29c; end: 10980d2ab;  */

void FUN_10980d29c(void)

{
  return;
}



/* Entry: 10980d2ac; end: 10980d63f;  */

void FUN_10980d2ac(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long lStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  float *pfStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  int iStack_134;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  int iStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
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
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_2 + 0x28);
  lVar12 = (long)iVar1;
  iVar2 = *(int *)(param_3 + 0x28);
  lVar11 = (long)iVar2;
  puVar10 = (undefined8 *)
            (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x30) + (long)iVar1 * 0x60);
  plVar14 = (long *)puVar10[8];
  puVar8 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30) + (long)iVar2 * 0x60);
  plVar13 = (long *)puVar8[8];
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x18);
  fVar17 = *(float *)(puVar9 + 2);
  fVar19 = *(float *)((long)puVar9 + 0x14);
  fVar21 = *(float *)(puVar9 + 3);
  fVar27 = (float)puVar10[1];
  fVar30 = (float)puVar10[3];
  fVar36 = (float)puVar10[7];
  fVar24 = (float)((ulong)puVar10[7] >> 0x20);
  fVar34 = (float)puVar10[6];
  fVar35 = (float)((ulong)puVar10[6] >> 0x20);
  fVar33 = (float)puVar10[5];
  fVar25 = (float)*puVar10;
  fVar40 = (float)((ulong)*puVar10 >> 0x20);
  fVar22 = (float)puVar9[4];
  fVar28 = (float)puVar10[2];
  fVar29 = (float)((ulong)puVar10[2] >> 0x20);
  fVar23 = (float)((ulong)puVar9[4] >> 0x20);
  fVar31 = (float)puVar10[4];
  fVar32 = (float)((ulong)puVar10[4] >> 0x20);
  fVar26 = (float)*puVar9;
  fVar37 = fVar26 * fVar34;
  fVar18 = (float)((ulong)*puVar9 >> 0x20);
  fVar38 = fVar18 * fVar35;
  fVar20 = (float)puVar9[1];
  fVar39 = (float)((ulong)puVar9[1] >> 0x20) * fVar24;
  auVar15._0_4_ = fVar17 * fVar34;
  auVar15._4_4_ = fVar19 * fVar35;
  auVar15._8_4_ = fVar21 * fVar36;
  auVar15._12_4_ = *(float *)((long)puVar9 + 0x1c) * fVar24;
  fVar34 = fVar22 * fVar34;
  fVar35 = fVar23 * fVar35;
  fVar24 = (float)puVar9[5];
  auVar45._4_4_ = fVar38;
  auVar45._0_4_ = fVar37;
  auVar45._8_4_ = fVar20 * fVar36;
  auVar45._12_4_ = fVar39;
  auVar3._4_4_ = fVar38;
  auVar3._0_4_ = fVar37;
  auVar3._8_4_ = fVar20 * fVar36;
  auVar3._12_4_ = fVar39;
  auVar41 = NEON_ext(auVar45,auVar3,8,1);
  auVar43 = NEON_ext(auVar15,auVar15,8,1);
  auVar16._4_4_ = fVar35;
  auVar16._0_4_ = fVar34;
  auVar16._8_4_ = fVar24 * fVar36;
  auVar16._12_4_ = 0;
  auVar44._4_4_ = fVar35;
  auVar44._0_4_ = fVar34;
  auVar44._8_4_ = fVar24 * fVar36;
  auVar44._12_4_ = 0;
  auVar16 = NEON_ext(auVar16,auVar44,8,1);
  uStack_80 = CONCAT44(fVar40 * fVar26 + fVar29 * fVar18 + fVar32 * fVar20,
                       fVar25 * fVar26 + fVar28 * fVar18 + fVar31 * fVar20);
  uStack_78 = CONCAT44(fVar26 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0,
                       fVar27 * fVar26 + fVar30 * fVar18 + fVar33 * fVar20);
  uStack_50 = CONCAT44((float)((ulong)puVar9[6] >> 0x20) +
                       auVar15._0_4_ + auVar15._4_4_ + auVar43._0_4_,
                       (float)puVar9[6] + fVar37 + fVar38 + auVar41._0_4_);
  uStack_48 = CONCAT44((float)((ulong)puVar9[7] >> 0x20) + 0.0,
                       (float)puVar9[7] + fVar34 + fVar35 + auVar16._0_4_ + auVar16._4_4_);
  uStack_68 = CONCAT44(fVar17 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0,
                       fVar27 * fVar17 + fVar30 * fVar19 + fVar33 * fVar21);
  uStack_70 = CONCAT44(fVar40 * fVar17 + fVar29 * fVar19 + fVar32 * fVar21,
                       fVar25 * fVar17 + fVar28 * fVar19 + fVar31 * fVar21);
  uStack_58 = CONCAT44(fVar22 * 0.0 + fVar23 * 0.0 + fVar24 * 0.0,
                       fVar27 * fVar22 + fVar30 * fVar23 + fVar33 * fVar24);
  uStack_60 = CONCAT44(fVar40 * fVar22 + fVar29 * fVar23 + fVar32 * fVar24,
                       fVar25 * fVar22 + fVar28 * fVar23 + fVar31 * fVar24);
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x18);
  fVar24 = (float)puVar8[1];
  fVar27 = (float)puVar8[3];
  fVar33 = (float)puVar8[5];
  fVar31 = (float)puVar8[4];
  fVar32 = (float)((ulong)puVar8[4] >> 0x20);
  fVar36 = (float)puVar8[7];
  fVar25 = (float)((ulong)puVar8[7] >> 0x20);
  fVar34 = (float)puVar8[6];
  fVar35 = (float)((ulong)puVar8[6] >> 0x20);
  fVar26 = (float)puVar9[2];
  fVar22 = (float)*puVar8;
  fVar23 = (float)((ulong)*puVar8 >> 0x20);
  fVar17 = (float)*puVar9;
  fVar37 = fVar17 * fVar34;
  fVar19 = (float)((ulong)*puVar9 >> 0x20);
  fVar38 = fVar19 * fVar35;
  fVar21 = (float)puVar9[1];
  fVar40 = (float)((ulong)puVar9[1] >> 0x20) * fVar25;
  auVar42._0_4_ = fVar26 * fVar34;
  fVar18 = (float)((ulong)puVar9[2] >> 0x20);
  auVar42._4_4_ = fVar18 * fVar35;
  fVar20 = (float)puVar9[3];
  auVar42._8_4_ = fVar20 * fVar36;
  auVar42._12_4_ = (float)((ulong)puVar9[3] >> 0x20) * fVar25;
  auVar4._4_4_ = fVar38;
  auVar4._0_4_ = fVar37;
  auVar4._8_4_ = fVar21 * fVar36;
  auVar4._12_4_ = fVar40;
  auVar5._4_4_ = fVar38;
  auVar5._0_4_ = fVar37;
  auVar5._8_4_ = fVar21 * fVar36;
  auVar5._12_4_ = fVar40;
  auVar44 = NEON_ext(auVar4,auVar5,8,1);
  auVar45 = NEON_ext(auVar42,auVar42,8,1);
  fVar28 = (float)puVar9[4];
  fVar25 = (float)puVar8[2];
  fVar40 = (float)((ulong)puVar8[2] >> 0x20);
  fVar29 = (float)((ulong)puVar9[4] >> 0x20);
  fVar34 = fVar28 * fVar34;
  fVar35 = fVar29 * fVar35;
  fVar30 = (float)puVar9[5];
  auVar41._4_4_ = fVar35;
  auVar41._0_4_ = fVar34;
  auVar41._8_4_ = fVar30 * fVar36;
  auVar41._12_4_ = 0;
  auVar43._4_4_ = fVar35;
  auVar43._0_4_ = fVar34;
  auVar43._8_4_ = fVar30 * fVar36;
  auVar43._12_4_ = 0;
  auVar16 = NEON_ext(auVar41,auVar43,8,1);
  fStack_c0 = fVar22 * fVar17 + fVar25 * fVar19 + fVar31 * fVar21;
  fStack_bc = fVar23 * fVar17 + fVar40 * fVar19 + fVar32 * fVar21;
  fStack_b8 = fVar24 * fVar17 + fVar27 * fVar19 + fVar33 * fVar21;
  fStack_b4 = fVar17 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0;
  fStack_a0 = fVar22 * fVar28 + fVar25 * fVar29 + fVar31 * fVar30;
  fStack_9c = fVar23 * fVar28 + fVar40 * fVar29 + fVar32 * fVar30;
  fStack_98 = fVar24 * fVar28 + fVar27 * fVar29 + fVar33 * fVar30;
  fStack_94 = fVar28 * 0.0 + fVar29 * 0.0 + fVar30 * 0.0;
  uStack_90 = CONCAT44((float)((ulong)puVar9[6] >> 0x20) +
                       auVar42._0_4_ + auVar42._4_4_ + auVar45._0_4_,
                       (float)puVar9[6] + fVar37 + fVar38 + auVar44._0_4_);
  uStack_88 = CONCAT44((float)((ulong)puVar9[7] >> 0x20) + 0.0,
                       (float)puVar9[7] + fVar34 + fVar35 + auVar16._0_4_ + auVar16._4_4_);
  uStack_a8 = CONCAT44(fVar26 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0,
                       fVar24 * fVar26 + fVar27 * fVar18 + fVar33 * fVar20);
  uStack_b0 = CONCAT44(fVar23 * fVar26 + fVar40 * fVar18 + fVar32 * fVar20,
                       fVar22 * fVar26 + fVar25 * fVar18 + fVar31 * fVar20);
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_80,&uStack_d0,&fStack_e0);
  (**(code **)(*plVar13 + 0x10))(plVar13,&fStack_c0,&fStack_f0,&fStack_100);
  fVar26 = *(float *)(*(long *)(param_1 + 0x30) + 0x30);
  fVar17 = (float)uStack_d0 - fVar26;
  fVar19 = (float)((ulong)uStack_d0 >> 0x20) - fVar26;
  uStack_d0 = CONCAT44(fVar19,fVar17);
  fVar21 = (float)uStack_c8 - fVar26;
  uStack_c8 = CONCAT44((float)((ulong)uStack_c8 >> 0x20) - 0.0,fVar21);
  fStack_e0 = fStack_e0 + fVar26;
  fStack_dc = fStack_dc + fVar26;
  fStack_d8 = fStack_d8 + fVar26;
  fStack_d4 = fStack_d4 + 0.0;
  if ((((fVar19 <= fStack_fc) && (fVar21 <= fStack_f8)) && (fStack_e8 <= fStack_d8)) &&
     (((fVar17 <= fStack_100 && (fStack_f0 <= fStack_e0)) && (fStack_ec <= fStack_dc)))) {
    lStack_130 = *(long *)(param_1 + 0x10);
    lStack_160 = *(long *)(param_1 + 0x18);
    uStack_120 = *(undefined8 *)(lStack_130 + 0x10);
    puStack_118 = &uStack_80;
    uStack_110 = 0;
    uStack_108 = 0xffffffff;
    uStack_150 = *(undefined8 *)(lStack_160 + 0x10);
    pfStack_148 = &fStack_c0;
    uStack_140 = 0;
    uStack_138 = 0xffffffff;
    lVar7 = *(long *)(param_1 + 0x38);
    plStack_158 = plVar13;
    iStack_134 = iVar2;
    plStack_128 = plVar14;
    iStack_104 = iVar1;
    FUN_10981331c(lVar7,lVar12,lVar11);
    if (fVar26 <= 0.0) {
      if (lVar7 == 0) {
        plVar13 = *(long **)(param_1 + 0x20);
        (**(code **)(*plVar13 + 0x10))
                  (plVar13,&lStack_130,&lStack_160,*(undefined8 *)(param_1 + 0x40),1);
        plVar14 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar11);
        plVar14[1] = (long)plVar13;
      }
      else {
        plVar13 = *(long **)(lVar7 + 8);
      }
    }
    else {
      plVar13 = *(long **)(param_1 + 0x20);
      (**(code **)(*plVar13 + 0x10))(plVar13,&lStack_130,&lStack_160,0,2);
    }
    plVar14 = *(long **)(param_1 + 0x30);
    lVar7 = plVar14[2];
    lVar6 = plVar14[3];
    plVar14[2] = (long)&lStack_130;
    plVar14[3] = (long)&lStack_160;
    (**(code **)(*plVar14 + 0x10))(plVar14,0xffffffff,lVar12);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0xffffffff,lVar11);
    (**(code **)(*plVar13 + 0x10))
              (plVar13,&lStack_130,&lStack_160,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
    lVar11 = *(long *)(param_1 + 0x30);
    *(long *)(lVar11 + 0x18) = lVar6;
    *(long *)(lVar11 + 0x10) = lVar7;
    if (0.0 < fVar26) {
      (**(code **)*plVar13)(plVar13);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x78))(*(long **)(param_1 + 0x20),plVar13);
    }
  }
  return;
}



/* Entry: 10980d640; end: 10980d643;  */

void FUN_10980d640(void)

{
  return;
}



/* Entry: 10980d644; end: 10980d68f;  */

long FUN_10980d644(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980d690; end: 10980d693;  */

undefined8 * FUN_10980d690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12838;
  (**(code **)(*(long *)param_1[9] + 0x28))((long *)param_1[9],param_1[0xc]);
  (**(code **)(*(long *)param_1[9] + 0x20))((long *)param_1[9],param_1[0xc]);
  return param_1;
}



/* Entry: 10980d694; end: 10980d6c3;  */

undefined8 * FUN_10980d694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12800;
  FUN_10980d7d0(param_1 + 2);
  return param_1;
}



/* Entry: 10980d6c4; end: 10980d6fb;  */

void FUN_10980d6c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12800;
  FUN_10980d7d0(param_1 + 2);
  FUN_109825740(param_1);
  return;
}



/* Entry: 10980d6fc; end: 10980d7cf;  */

void FUN_10980d6fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x70);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 10980d7d0; end: 10980d827;  */

undefined8 * FUN_10980d7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12838;
  (**(code **)(*(long *)param_1[9] + 0x28))((long *)param_1[9],param_1[0xc]);
  (**(code **)(*(long *)param_1[9] + 0x20))((long *)param_1[9],param_1[0xc]);
  return param_1;
}



/* Entry: 10980d828; end: 10980d847;  */

void FUN_10980d828(long param_1)

{
  FUN_10980d7d0();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10980d848; end: 10980db1f;  */

void FUN_10980d848(long param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lStack_f0;
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined **ppuStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar11 = *param_2;
  fVar12 = param_2[4];
  fVar10 = fVar11;
  if (fVar12 <= fVar11) {
    fVar10 = fVar12;
  }
  fVar9 = param_2[8];
  if (fVar9 <= fVar10) {
    fVar10 = fVar9;
  }
  if (fVar10 <= *(float *)(param_1 + 0x20)) {
    fVar10 = fVar11;
    if (fVar11 <= fVar12) {
      fVar10 = fVar12;
    }
    lVar8 = 0;
    if (fVar11 <= fVar12) {
      lVar8 = 0x10;
    }
    if (fVar10 <= fVar9) {
      lVar8 = 0x20;
    }
    if (*(float *)(param_1 + 0x10) <= *(float *)((long)param_2 + lVar8)) {
      fVar10 = param_2[2];
      fVar12 = param_2[6];
      fVar9 = param_2[10];
      fVar11 = fVar10;
      if (fVar12 <= fVar10) {
        fVar11 = fVar12;
      }
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      if (fVar11 <= *(float *)(param_1 + 0x28)) {
        pfVar1 = param_2 + 2;
        if (fVar10 <= fVar12) {
          pfVar1 = param_2 + 6;
          fVar10 = fVar12;
        }
        if (fVar10 <= fVar9) {
          pfVar1 = param_2 + 10;
        }
        if (*(float *)(param_1 + 0x18) <= *pfVar1) {
          fVar10 = param_2[1];
          fVar12 = param_2[5];
          fVar9 = param_2[9];
          fVar11 = fVar10;
          if (fVar12 <= fVar10) {
            fVar11 = fVar12;
          }
          if (fVar9 <= fVar11) {
            fVar11 = fVar9;
          }
          if (fVar11 <= *(float *)(param_1 + 0x24)) {
            pfVar1 = param_2 + 1;
            if (fVar10 <= fVar12) {
              pfVar1 = param_2 + 5;
              fVar10 = fVar12;
            }
            if (fVar10 <= fVar9) {
              pfVar1 = param_2 + 9;
            }
            if ((*(float *)(param_1 + 0x14) <= *pfVar1) &&
               (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 8) < 0x14)) {
              uStack_a8 = 0xffffffffffffffff;
              uStack_98 = 0x3f800000;
              uStack_a0 = 0x3f8000003f800000;
              ppuStack_c0 = &PTR_DAT_110b12890;
              uStack_b8 = 1;
              uStack_68 = *(undefined8 *)(param_2 + 2);
              uStack_70 = *(undefined8 *)param_2;
              uStack_58 = *(undefined8 *)(param_2 + 6);
              uStack_60 = *(undefined8 *)(param_2 + 4);
              uStack_48 = *(undefined8 *)(param_2 + 10);
              uStack_50 = *(undefined8 *)(param_2 + 8);
              pppuStack_e8 = &ppuStack_c0;
              lStack_f0 = *(long *)(param_1 + 0x38);
              plVar7 = *(long **)(param_1 + 0x48);
              uStack_b0 = 0;
              uStack_78 = 0;
              uStack_80 = *(undefined4 *)(param_1 + 0x58);
              uStack_d8 = *(undefined8 *)(lStack_f0 + 0x18);
              uStack_e0 = *(undefined8 *)(lStack_f0 + 0x10);
              uStack_d0 = 0;
              uStack_c8 = (undefined4)param_3;
              uStack_c4 = (undefined4)param_4;
              if (*(float *)(*(long *)(param_1 + 0x40) + 0x30) <= 0.0) {
                uVar5 = *(undefined8 *)(param_1 + 0x60);
                uVar6 = 1;
              }
              else {
                uVar5 = 0;
                uVar6 = 2;
              }
              plVar4 = plVar7;
              (**(code **)(*plVar7 + 0x10))(plVar7,*(long *)(param_1 + 0x30),&lStack_f0,uVar5,uVar6)
              ;
              plVar3 = *(long **)(param_1 + 0x40);
              lVar8 = plVar3[2];
              if (*(long *)(lVar8 + 0x10) == *(long *)(*(long *)(param_1 + 0x38) + 0x10)) {
                plVar3[2] = (long)&lStack_f0;
                (**(code **)(*plVar3 + 0x10))(plVar3,param_3,param_4);
              }
              else {
                lVar8 = plVar3[3];
                plVar3[3] = (long)&lStack_f0;
                (**(code **)(*plVar3 + 0x18))(plVar3,param_3,param_4);
              }
              (**(code **)(*plVar4 + 0x10))
                        (plVar4,*(undefined8 *)(param_1 + 0x30),&lStack_f0,
                         *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40));
              lVar2 = 0x10;
              if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x10) + 0x10) !=
                  *(long *)(*(long *)(param_1 + 0x38) + 0x10)) {
                lVar2 = 0x18;
              }
              *(long *)(*(long *)(param_1 + 0x40) + lVar2) = lVar8;
              (**(code **)*plVar4)(plVar4);
              (**(code **)(*plVar7 + 0x78))(plVar7,plVar4);
              FUN_10981b858(&ppuStack_c0);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10980db20; end: 10980db2b;  */

void FUN_10980db20(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10980db2c; end: 10980e1cf;  */

void FUN_10980db2c(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_var;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [12];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  
  lVar16 = param_2;
  if (*(char *)(param_1 + 0x80) == '\0') {
    lVar16 = param_3;
    param_3 = param_2;
  }
  plVar25 = *(long **)(lVar16 + 8);
  if ((int)plVar25[1] - 0x15U < 9) {
    plVar26 = *(long **)(param_3 + 8);
    iVar13 = (int)plVar26[1];
    if ((int)plVar25[1] == 0x1d) {
      if (iVar13 < 0x14) {
        uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
        uStack_c0 = 0;
        uStack_d0._4_4_ = 0;
        uStack_c8 = uStack_c8 & 0xffffffff00000000;
        if (iVar13 < 7) {
          for (iVar13 = 0; plVar14 = plVar26, (**(code **)(*plVar26 + 200))(), iVar13 < (int)plVar14
              ; iVar13 = iVar13 + 1) {
            (**(code **)(*plVar26 + 0xe0))(plVar26,iVar13,&uStack_e0);
            if (uStack_d0._4_4_ == (uint)uStack_c8) {
              uVar18 = uStack_d0._4_4_ << 1;
              if (uStack_d0._4_4_ == 0) {
                uVar18 = 1;
              }
              if ((int)uStack_d0._4_4_ < (int)uVar18) {
                if (uVar18 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar18 << 4;
                  FUN_1098256f4(uVar15,0x10);
                }
                if (0 < (int)uStack_d0._4_4_) {
                  lVar21 = 0;
                  do {
                    uVar24 = *(undefined8 *)(uStack_c0 + lVar21);
                    ((undefined8 *)(uVar15 + lVar21))[1] = ((undefined8 *)(uStack_c0 + lVar21))[1];
                    *(undefined8 *)(uVar15 + lVar21) = uVar24;
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)uStack_d0._4_4_ << 4 != lVar21);
                }
                if ((uStack_c0 != 0) && ((uStack_b8 & 1) != 0)) {
                  FUN_109825740();
                }
                uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
                uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar18);
                uStack_c0 = uVar15;
              }
            }
            puVar19 = (undefined8 *)(uStack_c0 + (long)(int)uStack_d0._4_4_ * 0x10);
            puVar19[1] = uStack_d8;
            *puVar19 = uStack_e0;
            uStack_d0._4_4_ = uStack_d0._4_4_ + 1;
          }
          iVar13 = (int)plVar26[1];
          uVar15 = (ulong)uStack_d0._4_4_;
        }
        else {
          uVar15 = 0;
        }
        uVar18 = (uint)uVar15;
        if (iVar13 == 8) {
          if (uVar18 == (uint)uStack_c8) {
            uVar1 = uVar18 << 1;
            if (uVar18 == 0) {
              uVar1 = 1;
            }
            if ((int)uVar18 < (int)uVar1) {
              if (uVar1 == 0) {
                uVar17 = 0;
              }
              else {
                uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
                FUN_1098256f4(uVar17,0x10);
                uVar15 = (ulong)uStack_d0._4_4_;
              }
              if (0 < (int)uVar15) {
                lVar21 = 0;
                do {
                  uVar24 = *(undefined8 *)(uStack_c0 + lVar21);
                  ((undefined8 *)(uVar17 + lVar21))[1] = ((undefined8 *)(uStack_c0 + lVar21))[1];
                  *(undefined8 *)(uVar17 + lVar21) = uVar24;
                  lVar21 = lVar21 + 0x10;
                } while (uVar15 << 4 != lVar21);
              }
              if ((uStack_c0 != 0) && ((uStack_b8 & 1) != 0)) {
                FUN_109825740();
              }
              uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
              uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar1);
              uVar15 = (ulong)uStack_d0._4_4_;
              uStack_c0 = uVar17;
            }
          }
          puVar19 = (undefined8 *)(uStack_c0 + (long)(int)uVar15 * 0x10);
          *puVar19 = 0;
          puVar19[1] = 0;
          uStack_d0._4_4_ = uStack_d0._4_4_ + 1;
          uVar15 = (ulong)uStack_d0._4_4_;
          fVar61 = *(float *)(plVar26 + 6) * *(float *)(plVar26 + 4) + 1.1920929e-07;
          uVar18 = uStack_d0._4_4_;
        }
        else {
          fVar61 = 1.1920929e-07;
        }
        if (uVar18 != 0) {
          lVar21 = *(long *)(param_1 + 0x70);
          param_5[1] = lVar21;
          if (0 < (int)uVar15) {
            lVar21 = 0;
            do {
              pfVar22 = *(float **)(param_3 + 0x18);
              pfVar20 = (float *)(uStack_c0 + lVar21 * 0x10);
              fVar27 = *pfVar20;
              fVar30 = pfVar20[1];
              fVar31 = pfVar20[2];
              auVar33._0_4_ = *pfVar22 * fVar27;
              auVar33._4_4_ = pfVar22[1] * fVar30;
              auVar33._8_4_ = pfVar22[2] * fVar31;
              auVar33._12_4_ = pfVar22[3] * pfVar20[3];
              auVar38._0_4_ = fVar27 * pfVar22[4];
              auVar38._4_4_ = fVar30 * pfVar22[5];
              auVar38._8_4_ = fVar31 * pfVar22[6];
              auVar38._12_4_ = pfVar20[3] * pfVar22[7];
              auVar28._0_4_ = fVar27 * pfVar22[8];
              auVar28._4_4_ = fVar30 * pfVar22[9];
              auVar28._8_4_ = fVar31 * pfVar22[10];
              auVar45 = NEON_ext(auVar33,auVar33,8,1);
              auVar52 = NEON_ext(auVar38,auVar38,8,1);
              auVar28._12_4_ = 0;
              auVar39 = NEON_ext(auVar28,auVar28,8,1);
              fVar36 = auVar33._0_4_ + auVar33._4_4_ + auVar45._0_4_ + pfVar22[0xc];
              fVar42 = auVar38._0_4_ + auVar38._4_4_ + auVar52._0_4_ + pfVar22[0xd];
              fVar43 = auVar28._0_4_ + auVar28._4_4_ + auVar39._0_4_ + auVar39._4_4_ + pfVar22[0xe];
              pfVar20 = *(float **)(lVar16 + 0x18);
              auVar39 = *(undefined1 (*) [16])(pfVar20 + 8);
              fVar27 = fVar36 - pfVar20[0xc];
              fVar30 = fVar42 - pfVar20[0xd];
              fVar31 = fVar43 - pfVar20[0xe];
              auVar34._0_4_ = pfVar20[2] * fVar27;
              auVar34._4_4_ = pfVar20[6] * fVar30;
              auVar34._8_4_ = auVar39._8_4_ * fVar31;
              auVar46._0_4_ = *pfVar20 * fVar27;
              auVar46._4_4_ = pfVar20[4] * fVar30;
              auVar46._8_4_ = auVar39._0_4_ * fVar31;
              auVar46._12_4_ = 0;
              auVar29._0_4_ = pfVar20[1] * fVar27;
              auVar29._4_4_ = pfVar20[5] * fVar30;
              auVar29._8_4_ = auVar39._4_4_ * fVar31;
              auVar29._12_4_ = 0;
              auVar39 = NEON_ext(auVar46,auVar46,8,1);
              auVar45 = NEON_ext(auVar29,auVar29,8,1);
              auVar34._12_4_ = 0;
              uStack_e0 = CONCAT44(auVar29._0_4_ + auVar29._4_4_ + auVar45._0_4_,
                                   auVar46._0_4_ + auVar46._4_4_ + auVar39._0_4_);
              auVar39 = NEON_ext(auVar34,auVar34,8,1);
              uStack_d8 = (ulong)(uint)(auVar34._0_4_ + auVar34._4_4_ +
                                       auVar39._0_4_ + auVar39._4_4_);
              plVar14 = plVar25;
              FUN_10981cea4(plVar25,&uStack_e0,&fStack_f4,&fStack_f0);
              iVar13 = 0;
              if (fStack_f4 <= fVar61) {
                iVar13 = (int)plVar14;
              }
              if (iVar13 == 1) {
                auVar40._0_4_ = fStack_f0 * fStack_f0;
                auVar40._4_4_ = fStack_ec * fStack_ec;
                auVar40._8_4_ = fStack_e8 * fStack_e8;
                auVar40._12_4_ = fStack_e4 * fStack_e4;
                auVar39 = NEON_ext(auVar40,auVar40,8,1);
                fVar27 = auVar40._0_4_ + auVar40._4_4_ + auVar39._0_4_;
                fStack_140 = 1.0;
                fStack_13c = 0.0;
                fStack_138 = 0.0;
                fStack_134 = 0.0;
                if (1.4210855e-14 <= fVar27) {
                  fStack_134 = 1.0 / SQRT(fVar27);
                  fStack_140 = fStack_f0 * fStack_134;
                  fStack_13c = fStack_ec * fStack_134;
                  fStack_138 = fStack_e8 * fStack_134;
                  fStack_134 = fStack_e4 * fStack_134;
                }
                pfVar20 = *(float **)(lVar16 + 0x18);
                auVar35._0_4_ = fStack_140 * *pfVar20;
                auVar35._4_4_ = fStack_13c * pfVar20[1];
                auVar35._8_4_ = fStack_138 * pfVar20[2];
                auVar35._12_4_ = fStack_134 * pfVar20[3];
                auVar47._0_4_ = fStack_140 * pfVar20[4];
                auVar47._4_4_ = fStack_13c * pfVar20[5];
                auVar47._8_4_ = fStack_138 * pfVar20[6];
                auVar47._12_4_ = fStack_134 * pfVar20[7];
                auVar41._0_4_ = fStack_140 * pfVar20[8];
                auVar41._4_4_ = fStack_13c * pfVar20[9];
                auVar41._8_4_ = fStack_138 * pfVar20[10];
                auVar39 = NEON_ext(auVar35,auVar35,8,1);
                auVar45 = NEON_ext(auVar47,auVar47,8,1);
                auVar41._12_4_ = 0;
                fVar30 = auVar35._0_4_ + auVar35._4_4_ + auVar39._0_4_;
                fVar31 = auVar47._0_4_ + auVar47._4_4_ + auVar45._0_4_;
                uStack_110 = CONCAT44(fVar31,fVar30);
                auVar39 = NEON_ext(auVar41,auVar41,8,1);
                fVar27 = auVar41._0_4_ + auVar41._4_4_ + auVar39._0_4_ + auVar39._4_4_;
                uStack_108 = (ulong)(uint)fVar27;
                if ((int)plVar26[1] == 8) {
                  fVar37 = *(float *)(plVar26 + 6) * *(float *)(plVar26 + 4);
                  auVar72._0_4_ = fVar36 - fVar30 * fVar37;
                  auVar72._4_4_ = fVar42 - fVar31 * fVar37;
                  auVar72._8_4_ = fVar43 - fVar27 * fVar37;
                  fVar36 = fStack_f4 - fVar37;
                }
                else {
                  auVar72._4_4_ = fVar42;
                  auVar72._0_4_ = fVar36;
                  auVar72._8_4_ = fVar43;
                  fVar36 = fStack_f4;
                }
                uStack_120 = CONCAT44(auVar72._4_4_ - fVar31 * fVar36,
                                      auVar72._0_4_ - fVar30 * fVar36);
                uStack_118 = (ulong)(uint)(auVar72._8_4_ - fVar27 * fVar36);
                fStack_f0 = fStack_140;
                fStack_ec = fStack_13c;
                fStack_e8 = fStack_138;
                fStack_e4 = fStack_134;
                (**(code **)(*param_5 + 0x20))(param_5,&uStack_110,&uStack_120);
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)uStack_d0._4_4_);
            lVar21 = param_5[1];
          }
          if (*(int *)(lVar21 + 0x360) != 0) {
            lVar23 = *(long *)(param_5[2] + 0x10);
            lVar16 = lVar23;
            lVar12 = *(long *)(param_5[3] + 0x10);
            if (*(long *)(lVar21 + 0x350) != lVar23) {
              lVar16 = *(long *)(param_5[3] + 0x10);
              lVar12 = lVar23;
            }
            FUN_10982280c(lVar21,lVar16 + 0x10,lVar12 + 0x10);
          }
        }
        FUN_10980eb0c(&uStack_d0);
      }
    }
    else if (iVar13 < 0x14) {
      auVar72 = (**(code **)(*plVar25 + 0x60))(plVar25);
      auVar48._0_8_ = auVar72._4_8_;
      auVar48._8_8_ = extraout_var;
      *(long *)(param_1 + 0x40) = param_3;
      param_5[1] = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x60) = param_4;
      *(float *)(param_1 + 0x68) = auVar72._0_4_;
      *(long *)(param_1 + 0x48) = lVar16;
      *(long **)(param_1 + 0x50) = param_5;
      pfVar20 = *(float **)(lVar16 + 0x18);
      fVar31 = *pfVar20;
      fVar36 = pfVar20[1];
      fVar42 = pfVar20[2];
      fVar43 = pfVar20[4];
      fVar37 = pfVar20[5];
      fVar2 = pfVar20[6];
      auVar52 = *(undefined1 (*) [16])(pfVar20 + 8);
      puVar19 = *(undefined8 **)(param_3 + 0x18);
      fVar3 = *(float *)(puVar19 + 2);
      fVar4 = *(float *)((long)puVar19 + 0x14);
      fVar5 = *(float *)(puVar19 + 3);
      fVar9 = *(float *)(puVar19 + 4);
      fVar10 = *(float *)((long)puVar19 + 0x24);
      fVar11 = *(float *)(puVar19 + 5);
      fVar6 = *(float *)(puVar19 + 6);
      fVar7 = *(float *)((long)puVar19 + 0x34);
      fVar8 = *(float *)(puVar19 + 7);
      auVar67._4_12_ = auVar48._4_12_;
      auVar67._0_4_ = fVar31;
      auVar66._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
      auVar66._0_8_ = auVar67._0_8_;
      auVar66._8_4_ = fVar42;
      auVar60._8_8_ = auVar66._8_8_;
      auVar60._4_4_ = fVar43;
      auVar60._0_4_ = fVar31;
      auVar62._0_12_ = auVar60._0_12_;
      auVar62._12_4_ = fVar2;
      auVar48 = NEON_ext(auVar62,auVar62,8,1);
      auVar66 = NEON_ext(auVar52,auVar52,8,1);
      fVar68 = -(float)*(undefined8 *)(pfVar20 + 0xc);
      fVar69 = -(float)((ulong)*(undefined8 *)(pfVar20 + 0xc) >> 0x20);
      fVar70 = -(float)*(undefined8 *)(pfVar20 + 0xe);
      fVar71 = -(float)((ulong)*(undefined8 *)(pfVar20 + 0xe) >> 0x20);
      fVar61 = auVar48._0_4_ * fVar68;
      fVar27 = auVar48._4_4_ * fVar69;
      uVar54 = (undefined1)((uint)fVar27 >> 8);
      uVar55 = (undefined1)((uint)fVar27 >> 0x10);
      uVar56 = (undefined1)((uint)fVar27 >> 0x18);
      fVar30 = auVar66._0_4_ * fVar70;
      uVar57 = (undefined1)((uint)fVar30 >> 8);
      uVar58 = (undefined1)((uint)fVar30 >> 0x10);
      uVar59 = (undefined1)((uint)fVar30 >> 0x18);
      auVar39[4] = SUB41(fVar27,0);
      auVar39._0_4_ = fVar61;
      auVar39[5] = uVar54;
      auVar39[6] = uVar55;
      auVar39[7] = uVar56;
      auVar39[8] = SUB41(fVar30,0);
      auVar39[9] = uVar57;
      auVar39[10] = uVar58;
      auVar39[0xb] = uVar59;
      auVar39._12_4_ = 0;
      auVar45[4] = SUB41(fVar27,0);
      auVar45._0_4_ = fVar61;
      auVar45[5] = uVar54;
      auVar45[6] = uVar55;
      auVar45[7] = uVar56;
      auVar45[8] = SUB41(fVar30,0);
      auVar45[9] = uVar57;
      auVar45[10] = uVar58;
      auVar45[0xb] = uVar59;
      auVar45._12_4_ = 0;
      auVar67 = NEON_ext(auVar39,auVar45,8,1);
      fVar30 = auVar52._4_4_;
      fVar65 = (float)puVar19[1];
      fVar63 = (float)*puVar19;
      fVar64 = (float)((ulong)*puVar19 >> 0x20);
      fVar53 = auVar52._8_4_;
      fVar50 = auVar52._0_4_;
      uStack_d0 = CONCAT44(fVar64 * fVar31 + fVar4 * fVar43 + fVar10 * fVar50,
                           fVar63 * fVar31 + fVar3 * fVar43 + fVar9 * fVar50);
      uStack_c8 = CONCAT44(fVar31 * 0.0 + fVar43 * 0.0 + fVar50 * 0.0,
                           fVar65 * fVar31 + fVar5 * fVar43 + fVar11 * fVar50);
      auVar51._0_4_ = fVar31 * fVar68;
      auVar51._4_4_ = fVar43 * fVar69;
      auVar51._8_4_ = fVar50 * fVar70;
      auVar51._12_4_ = fVar71 * 0.0;
      auVar60 = NEON_ext(auVar51,auVar51,8,1);
      auVar44._0_4_ = fVar36 * fVar68;
      auVar44._4_4_ = fVar37 * fVar69;
      auVar44._8_4_ = fVar30 * fVar70;
      auVar44._12_4_ = fVar71 * 0.0;
      auVar62 = NEON_ext(auVar44,auVar44,8,1);
      auVar49._0_4_ = auVar48._0_4_ * fVar6;
      auVar49._4_4_ = auVar48._4_4_ * fVar7;
      auVar49._8_4_ = auVar66._0_4_ * fVar8;
      auVar49._12_4_ = 0;
      auVar48 = NEON_ext(auVar49,auVar49,8,1);
      auVar32._0_4_ = fVar31 * fVar6;
      auVar32._4_4_ = fVar43 * fVar7;
      auVar32._8_4_ = fVar50 * fVar8;
      auVar32._12_4_ = *(float *)((long)puVar19 + 0x3c) * 0.0;
      auVar52._0_4_ = fVar36 * fVar6;
      auVar52._4_4_ = fVar37 * fVar7;
      auVar52._8_4_ = fVar30 * fVar8;
      auVar52._12_4_ = *(float *)((long)puVar19 + 0x3c) * 0.0;
      auVar45 = NEON_ext(auVar32,auVar32,8,1);
      auVar39 = NEON_ext(auVar52,auVar52,8,1);
      uStack_a0 = CONCAT44(auVar62._0_4_ + auVar44._0_4_ + auVar44._4_4_ +
                           auVar39._0_4_ + auVar52._0_4_ + auVar52._4_4_,
                           auVar60._0_4_ + auVar51._0_4_ + auVar51._4_4_ +
                           auVar45._0_4_ + auVar32._0_4_ + auVar32._4_4_);
      uStack_b8 = CONCAT44(fVar36 * 0.0 + fVar37 * 0.0 + fVar30 * 0.0,
                           fVar65 * fVar36 + fVar5 * fVar37 + fVar11 * fVar30);
      uStack_c0 = CONCAT44(fVar64 * fVar36 + fVar4 * fVar37 + fVar10 * fVar30,
                           fVar63 * fVar36 + fVar3 * fVar37 + fVar9 * fVar30);
      uStack_a8 = CONCAT44(fVar42 * 0.0 + fVar2 * 0.0 + fVar53 * 0.0,
                           fVar65 * fVar42 + fVar5 * fVar2 + fVar11 * fVar53);
      uStack_b0 = CONCAT44(fVar64 * fVar42 + fVar4 * fVar2 + fVar10 * fVar53,
                           fVar63 * fVar42 + fVar3 * fVar2 + fVar9 * fVar53);
      uStack_98 = (ulong)(uint)(fVar61 + fVar27 + auVar67._0_4_ + auVar67._4_4_ +
                               auVar49._0_4_ + auVar49._4_4_ + auVar48._0_4_ + auVar48._4_4_);
      (**(code **)(**(long **)(param_3 + 8) + 0x10))
                (*(long **)(param_3 + 8),&uStack_d0,param_1 + 0x20,param_1 + 0x30);
      fVar61 = auVar72._0_4_ + *(float *)(param_5 + 6);
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x20);
      *(float *)(param_1 + 0x28) = auVar39._8_4_ - fVar61;
      *(float *)(param_1 + 0x2c) = auVar39._12_4_ - 0.0;
      *(float *)(param_1 + 0x20) = auVar39._0_4_ - fVar61;
      *(float *)(param_1 + 0x24) = auVar39._4_4_ - fVar61;
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + fVar61;
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + 0.0;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar61;
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fVar61;
      lVar21 = *(long *)(param_1 + 0x70);
      uVar24 = *(undefined8 *)(lVar16 + 0x10);
      *(undefined8 *)(lVar21 + 0x350) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(lVar21 + 0x358) = uVar24;
      (**(code **)(*plVar25 + 0x80))(plVar25,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30);
      lVar16 = param_5[1];
      if (*(int *)(lVar16 + 0x360) != 0) {
        lVar23 = *(long *)(param_5[2] + 0x10);
        lVar21 = lVar23;
        lVar12 = *(long *)(param_5[3] + 0x10);
        if (*(long *)(lVar16 + 0x350) != lVar23) {
          lVar21 = *(long *)(param_5[3] + 0x10);
          lVar12 = lVar23;
        }
        FUN_10982280c(lVar16,lVar21 + 0x10,lVar12 + 0x10);
      }
      *(long *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



/* Entry: 10980e1d0; end: 10980e457;  */

ulong FUN_10980e1d0(long param_1,long param_2,long param_3)

{
  unkbyte9 *pVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long *plVar22;
  float fVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_q5 [16];
  undefined1 auVar42 [16];
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined **appuStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_50;
  long lStack_38;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  if (*(char *)(param_1 + 0x80) == '\0') {
    lVar3 = param_2;
  }
  auVar37 = *(undefined1 (*) [16])(lVar3 + 0x80);
  fVar29 = (float)*(undefined8 *)(lVar3 + 0x48);
  fVar30 = (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20);
  fVar27 = (float)*(undefined8 *)(lVar3 + 0x40);
  fVar28 = (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
  fVar31 = auVar37._0_4_;
  fVar34 = auVar37._4_4_;
  fVar35 = auVar37._8_4_;
  auVar40._0_4_ = (fVar31 - fVar27) * (fVar31 - fVar27);
  auVar40._4_4_ = (fVar34 - fVar28) * (fVar34 - fVar28);
  auVar40._8_4_ = (fVar35 - fVar29) * (fVar35 - fVar29);
  auVar40._12_4_ = 0;
  auVar25 = NEON_ext(auVar40,auVar40,8,1);
  uVar24 = 0x3f800000;
  if (*(float *)(lVar3 + 0x13c) * *(float *)(lVar3 + 0x13c) <=
      auVar40._0_4_ + auVar40._4_4_ + auVar25._0_4_) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      param_2 = param_3;
    }
    plVar22 = *(long **)(param_2 + 0xd0);
    if ((int)plVar22[1] - 0x15U < 9) {
      fVar16 = *(float *)(param_2 + 0x10);
      fVar17 = *(float *)(param_2 + 0x14);
      fVar18 = *(float *)(param_2 + 0x18);
      fVar19 = *(float *)(param_2 + 0x20);
      fVar20 = *(float *)(param_2 + 0x24);
      fVar21 = *(float *)(param_2 + 0x28);
      auVar42._4_12_ = in_q5._4_12_;
      auVar42._0_4_ = fVar16;
      auVar44._12_4_ = in_q5._12_4_;
      auVar44._0_8_ = auVar42._0_8_;
      auVar44._8_4_ = fVar18;
      auVar43._8_8_ = auVar44._8_8_;
      auVar43._4_4_ = fVar19;
      auVar43._0_4_ = fVar16;
      auVar45._0_12_ = auVar43._0_12_;
      auVar45._12_4_ = fVar21;
      pVar1 = (unkbyte9 *)(param_2 + 0x30);
      uVar12 = *(undefined8 *)(param_2 + 0x38);
      uVar46 = (undefined1)((ulong)uVar12 >> 8);
      uVar47 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar48 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar49 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar50 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar51 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar53 = (undefined1)((ulong)uVar12 >> 0x38);
      fVar10 = *(float *)(param_2 + 0x40);
      fVar11 = *(float *)(param_2 + 0x44);
      fVar57 = *(float *)(param_2 + 0x48);
      fVar15 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
      auVar56[9] = uVar46;
      auVar56._0_9_ = *pVar1;
      auVar56[10] = uVar47;
      auVar56[0xb] = uVar48;
      auVar56[0xc] = uVar49;
      auVar56[0xd] = uVar50;
      auVar56[0xe] = uVar51;
      auVar56[0xf] = uVar53;
      auVar62[9] = uVar46;
      auVar62._0_9_ = *pVar1;
      auVar62[10] = uVar47;
      auVar62[0xb] = uVar48;
      auVar62[0xc] = uVar49;
      auVar62[0xd] = uVar50;
      auVar62[0xe] = uVar51;
      auVar62[0xf] = uVar53;
      auVar61 = NEON_ext(auVar56,auVar62,8,1);
      fVar71 = (float)*(undefined8 *)(lVar3 + 0x78);
      fVar68 = (float)*(undefined8 *)(lVar3 + 0x68);
      fVar65 = (float)*(undefined8 *)(lVar3 + 0x58);
      fVar63 = (float)*(undefined8 *)(lVar3 + 0x50);
      fVar64 = (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20);
      fVar66 = (float)*(undefined8 *)(lVar3 + 0x60);
      fVar67 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20);
      fVar9 = (float)uVar12;
      fVar69 = (float)*(undefined8 *)(lVar3 + 0x70);
      fVar70 = (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
      fVar4 = (float)*(undefined8 *)pVar1;
      fVar58 = *(float *)(lVar3 + 0x20);
      fVar23 = *(float *)(lVar3 + 0x24);
      fVar38 = *(float *)(lVar3 + 0x28);
      fVar74 = (float)*(undefined8 *)(lVar3 + 0x18);
      fVar72 = (float)*(undefined8 *)(lVar3 + 0x10);
      fVar73 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
      uStack_c0 = CONCAT44(fVar64 * fVar17 + fVar67 * fVar20 + fVar70 * fVar15,
                           fVar63 * fVar17 + fVar66 * fVar20 + fVar69 * fVar15);
      uStack_b8 = CONCAT44(fVar17 * 0.0 + fVar20 * 0.0 + fVar15 * 0.0,
                           fVar65 * fVar17 + fVar68 * fVar20 + fVar71 * fVar15);
      fVar41 = *(float *)(lVar3 + 0x30);
      fVar59 = *(float *)(lVar3 + 0x34);
      fVar60 = *(float *)(lVar3 + 0x38);
      uStack_110 = CONCAT44(fVar73 * fVar16 + fVar23 * fVar19 + fVar59 * fVar4,
                            fVar72 * fVar16 + fVar58 * fVar19 + fVar41 * fVar4);
      uStack_108 = CONCAT44(fVar16 * 0.0 + fVar19 * 0.0 + fVar4 * 0.0,
                            fVar74 * fVar16 + fVar38 * fVar19 + fVar60 * fVar4);
      uStack_f0 = CONCAT44(fVar73 * fVar18 + fVar23 * fVar21 + fVar59 * fVar9,
                           fVar72 * fVar18 + fVar58 * fVar21 + fVar41 * fVar9);
      uStack_e8 = CONCAT44(fVar18 * 0.0 + fVar21 * 0.0 + fVar9 * 0.0,
                           fVar74 * fVar18 + fVar38 * fVar21 + fVar60 * fVar9);
      uStack_100 = CONCAT44(fVar73 * fVar17 + fVar23 * fVar20 + fVar59 * fVar15,
                            fVar72 * fVar17 + fVar58 * fVar20 + fVar41 * fVar15);
      uStack_f8 = CONCAT44(fVar17 * 0.0 + fVar20 * 0.0 + fVar15 * 0.0,
                           fVar74 * fVar17 + fVar38 * fVar20 + fVar60 * fVar15);
      auVar75 = NEON_ext(auVar45,auVar45,8,1);
      auVar55._0_4_ = fVar16 * -fVar10;
      auVar55._4_4_ = fVar19 * -fVar11;
      auVar55._8_4_ = fVar4 * -fVar57;
      auVar55._12_4_ = -*(float *)(param_2 + 0x4c) * 0.0;
      auVar39._0_4_ = fVar17 * -fVar10;
      auVar39._4_4_ = fVar20 * -fVar11;
      auVar39._8_4_ = fVar15 * -fVar57;
      auVar39._12_4_ = -*(float *)(param_2 + 0x4c) * 0.0;
      auVar25 = NEON_ext(auVar55,auVar55,8,1);
      auVar40 = NEON_ext(auVar39,auVar39,8,1);
      fVar60 = auVar61._0_4_;
      fVar72 = auVar75._0_4_;
      fVar10 = fVar72 * -fVar10;
      fVar73 = auVar75._4_4_;
      fVar11 = fVar73 * -fVar11;
      uVar46 = (undefined1)((uint)fVar11 >> 8);
      uVar47 = (undefined1)((uint)fVar11 >> 0x10);
      uVar48 = (undefined1)((uint)fVar11 >> 0x18);
      fVar57 = fVar60 * -fVar57;
      uVar49 = (undefined1)((uint)fVar57 >> 8);
      uVar50 = (undefined1)((uint)fVar57 >> 0x10);
      uVar51 = (undefined1)((uint)fVar57 >> 0x18);
      fVar38 = auVar55._0_4_ + auVar55._4_4_ + auVar25._0_4_;
      fVar41 = auVar39._0_4_ + auVar39._4_4_ + auVar40._0_4_;
      auVar5[4] = SUB41(fVar11,0);
      auVar5._0_4_ = fVar10;
      auVar5[5] = uVar46;
      auVar5[6] = uVar47;
      auVar5[7] = uVar48;
      auVar5[8] = SUB41(fVar57,0);
      auVar5[9] = uVar49;
      auVar5[10] = uVar50;
      auVar5[0xb] = uVar51;
      auVar5._12_4_ = 0;
      auVar6[4] = SUB41(fVar11,0);
      auVar6._0_4_ = fVar10;
      auVar6[5] = uVar46;
      auVar6[6] = uVar47;
      auVar6[7] = uVar48;
      auVar6[8] = SUB41(fVar57,0);
      auVar6[9] = uVar49;
      auVar6[10] = uVar50;
      auVar6[0xb] = uVar51;
      auVar6._12_4_ = 0;
      auVar40 = NEON_ext(auVar5,auVar6,8,1);
      fVar23 = fVar10 + fVar11 + auVar40._0_4_ + auVar40._4_4_;
      fVar10 = fVar31 * fVar16;
      fVar11 = fVar34 * fVar19;
      uVar46 = (undefined1)((uint)fVar11 >> 8);
      uVar47 = (undefined1)((uint)fVar11 >> 0x10);
      uVar48 = (undefined1)((uint)fVar11 >> 0x18);
      fVar57 = fVar35 * fVar4;
      uVar49 = (undefined1)((uint)fVar57 >> 8);
      uVar50 = (undefined1)((uint)fVar57 >> 0x10);
      uVar51 = (undefined1)((uint)fVar57 >> 0x18);
      fVar58 = auVar37._12_4_ * 0.0;
      uVar53 = (undefined1)((uint)fVar58 >> 8);
      uVar52 = (undefined1)((uint)fVar58 >> 0x10);
      uVar54 = (undefined1)((uint)fVar58 >> 0x18);
      auVar7[4] = SUB41(fVar11,0);
      auVar7._0_4_ = fVar10;
      auVar7[5] = uVar46;
      auVar7[6] = uVar47;
      auVar7[7] = uVar48;
      auVar7[8] = SUB41(fVar57,0);
      auVar7[9] = uVar49;
      auVar7[10] = uVar50;
      auVar7[0xb] = uVar51;
      auVar7[0xc] = SUB41(fVar58,0);
      auVar7[0xd] = uVar53;
      auVar7[0xe] = uVar52;
      auVar7[0xf] = uVar54;
      auVar8[4] = SUB41(fVar11,0);
      auVar8._0_4_ = fVar10;
      auVar8[5] = uVar46;
      auVar8[6] = uVar47;
      auVar8[7] = uVar48;
      auVar8[8] = SUB41(fVar57,0);
      auVar8[9] = uVar49;
      auVar8[10] = uVar50;
      auVar8[0xb] = uVar51;
      auVar8[0xc] = SUB41(fVar58,0);
      auVar8[0xd] = uVar53;
      auVar8[0xe] = uVar52;
      auVar8[0xf] = uVar54;
      auVar61 = NEON_ext(auVar7,auVar8,8,1);
      fVar57 = fVar31 * fVar17;
      fVar58 = fVar34 * fVar20;
      fVar59 = auVar37._12_4_ * 0.0;
      auVar13._4_4_ = fVar58;
      auVar13._0_4_ = fVar57;
      auVar13._8_4_ = fVar35 * fVar15;
      auVar13._12_4_ = fVar59;
      auVar14._4_4_ = fVar58;
      auVar14._0_4_ = fVar57;
      auVar14._8_4_ = fVar35 * fVar15;
      auVar14._12_4_ = fVar59;
      auVar62 = NEON_ext(auVar13,auVar14,8,1);
      auVar32._0_4_ = fVar31 * fVar72;
      auVar32._4_4_ = fVar34 * fVar73;
      auVar32._8_4_ = fVar35 * fVar60;
      auVar32._12_4_ = 0;
      auVar75 = NEON_ext(auVar32,auVar32,8,1);
      auVar33._0_4_ = fVar27 * fVar16;
      auVar33._4_4_ = fVar28 * fVar19;
      auVar33._8_4_ = fVar29 * fVar4;
      auVar33._12_4_ = fVar30 * 0.0;
      auVar40 = NEON_ext(auVar33,auVar33,8,1);
      auVar36._0_4_ = fVar27 * fVar17;
      auVar36._4_4_ = fVar28 * fVar20;
      auVar36._8_4_ = fVar29 * fVar15;
      auVar36._12_4_ = fVar30 * 0.0;
      auVar56 = NEON_ext(auVar36,auVar36,8,1);
      fVar27 = fVar27 * fVar72;
      fVar28 = fVar28 * fVar73;
      auVar37._4_4_ = fVar28;
      auVar37._0_4_ = fVar27;
      auVar37._8_4_ = fVar29 * fVar60;
      auVar37._12_4_ = 0;
      auVar25._4_4_ = fVar28;
      auVar25._0_4_ = fVar27;
      auVar25._8_4_ = fVar29 * fVar60;
      auVar25._12_4_ = 0;
      auVar37 = NEON_ext(auVar37,auVar25,8,1);
      auVar26._0_8_ =
           CONCAT44(fVar41 + fVar57 + fVar58 + auVar62._0_4_,
                    fVar38 + fVar10 + fVar11 + auVar61._0_4_);
      auVar26._8_4_ = fVar23 + auVar32._0_4_ + auVar32._4_4_ + auVar75._0_4_ + auVar75._4_4_;
      auVar26._12_4_ = 0;
      fVar38 = fVar38 + auVar40._0_4_ + auVar33._0_4_ + auVar33._4_4_;
      fVar41 = fVar41 + auVar56._0_4_ + auVar36._0_4_ + auVar36._4_4_;
      fVar23 = fVar23 + fVar27 + fVar28 + auVar37._0_4_ + auVar37._4_4_;
      auVar61._4_4_ = fVar41;
      auVar61._0_4_ = fVar38;
      auVar61._8_4_ = fVar23;
      auVar61._12_4_ = 0;
      auVar37 = NEON_fmin(auVar61,auVar26,4);
      auVar75._4_4_ = fVar41;
      auVar75._0_4_ = fVar38;
      auVar75._8_4_ = fVar23;
      auVar75._12_4_ = 0;
      auVar40 = NEON_fmax(auVar75,auVar26,4);
      appuStack_120[0] = &PTR_FUN_110b129c0;
      uStack_d8 = (ulong)(uint)fVar23;
      uStack_e0 = CONCAT44(fVar41,fVar38);
      uStack_c8 = CONCAT44(fVar16 * 0.0 + fVar19 * 0.0 + fVar4 * 0.0,
                           fVar65 * fVar16 + fVar68 * fVar19 + fVar71 * fVar4);
      uStack_d0 = CONCAT44(fVar64 * fVar16 + fVar67 * fVar19 + fVar70 * fVar4,
                           fVar63 * fVar16 + fVar66 * fVar19 + fVar69 * fVar4);
      uStack_a8 = CONCAT44(fVar18 * 0.0 + fVar21 * 0.0 + fVar9 * 0.0,
                           fVar65 * fVar18 + fVar68 * fVar21 + fVar71 * fVar9);
      uStack_b0 = CONCAT44(fVar64 * fVar18 + fVar67 * fVar21 + fVar70 * fVar9,
                           fVar63 * fVar18 + fVar66 * fVar21 + fVar69 * fVar9);
      uStack_98 = (ulong)(uint)auVar26._8_4_;
      pfVar2 = (float *)(lVar3 + 0x134);
      fVar27 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      fStack_130 = auVar37._0_4_ - fVar27;
      fStack_12c = auVar37._4_4_ - fVar27;
      fStack_128 = auVar37._8_4_ - fVar27;
      fStack_124 = auVar37._12_4_ - 0.0;
      uStack_138 = CONCAT44(auVar40._12_4_ + 0.0,auVar40._8_4_ + fVar27);
      uStack_140 = CONCAT44(auVar40._4_4_ + fVar27,auVar40._0_4_ + fVar27);
      uStack_50 = NEON_rev64(*(undefined8 *)pfVar2,4);
      uStack_a0 = auVar26._0_8_;
      (**(code **)(*plVar22 + 0x80))(plVar22,appuStack_120,&fStack_130,&uStack_140);
      uVar24 = 0x3f800000;
      if (uStack_50._4_4_ < *pfVar2) {
        *pfVar2 = uStack_50._4_4_;
        uVar24 = (ulong)(uint)uStack_50._4_4_;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar24;
  }
  ___stack_chk_fail();
  uVar24 = __Unwind_Resume();
  return uVar24;
}



/* Entry: 10980e458; end: 10980e45b;  */

void FUN_10980e458(void)

{
  return;
}



/* Entry: 10980e45c; end: 10980e47b;  */

void FUN_10980e45c(long param_1)

{
  FUN_10981b858();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10980e47c; end: 10980e4c3;  */

void FUN_10980e47c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010980e484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



/* Entry: 10980e4c4; end: 10980e53b;  */

undefined * FUN_10980e4c4(long param_1,long param_2)

{
  long lVar1;
  
  FUN_109816008();
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_1 + 0x30 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar1) = *(undefined4 *)(param_1 + 0x20 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x34) = 0;
  return &UNK_10f580a67;
}



/* Entry: 10980e53c; end: 10980e6cb;  */

void FUN_10980e53c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  fVar13 = (float)param_3[1];
  fVar14 = (float)((ulong)param_3[1] >> 0x20);
  fVar11 = (float)*param_3;
  fVar12 = (float)((ulong)*param_3 >> 0x20);
  fVar7 = (float)uVar4 * fVar11;
  fVar8 = (float)((ulong)uVar4 >> 0x20) * fVar12;
  fVar9 = (float)*(undefined8 *)(param_2 + 0x58) * fVar13;
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20) * fVar14;
  auVar15._0_4_ = fVar11 * *(float *)(param_2 + 0x60);
  auVar15._4_4_ = fVar12 * *(float *)(param_2 + 100);
  auVar15._8_4_ = fVar13 * *(float *)(param_2 + 0x68);
  auVar15._12_4_ = fVar14 * *(float *)(param_2 + 0x6c);
  fVar11 = fVar11 * *(float *)(param_2 + 0x70);
  fVar12 = fVar12 * *(float *)(param_2 + 0x74);
  fVar13 = fVar13 * *(float *)(param_2 + 0x78);
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar7;
  auVar16._8_4_ = fVar9;
  auVar16._12_4_ = fVar10;
  auVar17._4_4_ = fVar8;
  auVar17._0_4_ = fVar7;
  auVar17._8_4_ = fVar9;
  auVar17._12_4_ = fVar10;
  auVar16 = NEON_ext(auVar16,auVar17,8,1);
  auVar17 = NEON_ext(auVar15,auVar15,8,1);
  fVar8 = fVar7 + fVar8 + auVar16._0_4_;
  fVar9 = auVar15._0_4_ + auVar15._4_4_ + auVar17._0_4_;
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar13;
  auVar5._12_4_ = 0;
  auVar6._4_4_ = fVar12;
  auVar6._0_4_ = fVar11;
  auVar6._8_4_ = fVar13;
  auVar6._12_4_ = 0;
  auVar16 = NEON_ext(auVar5,auVar6,8,1);
  fVar7 = fVar11 + fVar12 + auVar16._0_4_ + auVar16._4_4_;
  lVar2 = 2;
  if (fVar7 <= fVar9) {
    lVar2 = 1;
  }
  lVar1 = 2;
  if (fVar7 <= fVar8) {
    lVar1 = 0;
  }
  if (fVar9 <= fVar8) {
    lVar2 = lVar1;
  }
  puVar3 = (undefined8 *)(param_2 + 0x50) + lVar2 * 2;
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  return;
}



/* Entry: 10980e6cc; end: 10980e737;  */

void FUN_10980e6cc(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0xe0))();
                    /* WARNING: Could not recover jumptable at 0x00010980e734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,(param_2 + 1) % 3,param_4);
  return;
}


