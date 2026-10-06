/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bf32e4; end: 101bf3573;  */

void FUN_101bf32e4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e08b88;
  func_0x0001000285a8(0x112e08b88,&UNK_10d9dd9b8);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_101bf3548:
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf3570);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          func_0x000107c61574(lVar13);
          goto LAB_101bf3548;
        }
        uVar12 = puVar14[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    if ((param_2 & 1) == 0) {
      func_0x0001011225e0(*(long *)(lVar13 + 0x38) + (LZCOUNT(uVar7) | lVar15 << 6) * 0x28,
                          auStack_88);
    }
    else {
      func_0x000101122624();
    }
    func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar5 + 0x28));
    uVar6 = 0;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf3574);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar7 | bVar2);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    func_0x000101122624(auStack_88,*(long *)(lVar5 + 0x38) + uVar7 * 0x28);
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 101bf3574; end: 101bf35c3;  */

undefined8 FUN_101bf3574(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e08b98;
  func_0x0001000285a8(0x112e08b98,&UNK_10d9dda28);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bf35c4; end: 101bf3627;  */

void FUN_101bf35c4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bf3628; end: 101bf37f3;  */

void FUN_101bf3628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08ba8,&UNK_10d9dda40);
  puVar1 = &UNK_110454ec0;
  func_0x000107c613fc(&UNK_110454ec0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x101bf3708,puVar1);
  return;
}



/* Entry: 101bf37f4; end: 101bf388b;  */

void FUN_101bf37f4(long param_1,long param_2,long param_3,uint param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bf75b4;
  plVar1[0x3f] = param_5;
  plVar1[0x40] = unaff_x20;
  *(undefined1 *)((long)plVar1 + 0x27e) = param_6;
  *(uint *)(plVar1 + 0x4f) = param_4 & 0xffffff;
  *(undefined1 *)((long)plVar1 + 0x27d) = 1;
  plVar1[0x3d] = 0;
  plVar1[0x3e] = param_3;
  plVar1[0x3b] = param_2;
  plVar1[0x3c] = 0;
  plVar1[0x3a] = param_1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar1[0x41] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = (long)FUN_101bf3918;
  plVar2[9] = param_5;
  plVar2[10] = unaff_x20;
  *(undefined1 *)((long)plVar2 + 0x6c) = param_6;
  *(uint *)(plVar2 + 0xd) = param_4 & 0xffffff;
  plVar2[8] = (long)(plVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf388c; end: 101bf3917;  */

void FUN_101bf388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,uint param_7,long param_8,undefined1 param_9
                  )

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x1f8) = param_8;
  *(long *)(unaff_x22 + 0x200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x27e) = param_9;
  *(uint *)(unaff_x22 + 0x278) = param_7;
  *(undefined1 *)(unaff_x22 + 0x27d) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x208) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bf3918;
  plVar1[9] = param_8;
  plVar1[10] = unaff_x20;
  *(undefined1 *)((long)plVar1 + 0x6c) = param_9;
  *(uint *)(plVar1 + 0xd) = param_7 & 0xffffff;
  plVar1[8] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf3918; end: 101bf395f;  */

void FUN_101bf3918(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x208));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf3960,0,0);
  return;
}



/* Entry: 101bf3960; end: 101bf3c7b;  */

void FUN_101bf3960(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  
  if (*(char *)(unaff_x22 + 0x27d) == '\x01') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar15 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000100083b20(unaff_x22 + 0x178);
    lVar3 = *(long *)(unaff_x22 + 0x198);
    func_0x0001000a8868(unaff_x22 + 0x178,*(undefined8 *)(unaff_x22 + 400));
    uVar2 = 0;
    if (lVar15 != 0) {
      uVar2 = uVar12;
    }
    FUN_101bf6504(unaff_x22 + 0x10,unaff_x22 + 0x1a0);
    lVar15 = *(long *)(unaff_x22 + 0x1b8);
    if (lVar15 == 0) {
      func_0x000101bf6554(unaff_x22 + 0x1a0);
      uVar12 = 2;
    }
    else {
      lVar16 = *(long *)(unaff_x22 + 0x1c0);
      func_0x0001000a8868(unaff_x22 + 0x1a0,lVar15);
      (**(code **)(lVar16 + 8))(lVar15,lVar16);
      func_0x0001000834e4(unaff_x22 + 0x1a0);
      uVar12 = 0;
    }
    uVar9 = (ulong)*(uint *)(unaff_x22 + 0x278) << 3;
    (**(code **)(lVar3 + 0x10))
              (0,uVar2,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),uVar12,0x202020001020202 >> (uVar9 & 0x38),
               0x303030003020303 >> (uVar9 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x27e));
    func_0x0001000834e4(unaff_x22 + 0x178);
  }
  FUN_101bf6504(unaff_x22 + 0x10,unaff_x22 + 0x60);
  if (*(long *)(unaff_x22 + 0x78) != 0) {
    lVar15 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000101122624(unaff_x22 + 0x60,unaff_x22 + 0x38);
    if (lVar15 != 0) {
      uVar7 = *(uint *)(unaff_x22 + 0x278);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar15 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
      (**(code **)(lVar15 + 8))(uVar2,lVar15);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar15 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
      (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x150,uVar2,lVar15);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
      lVar15 = *(long *)(unaff_x22 + 0x170);
      func_0x0001000a8868(unaff_x22 + 0x150,uVar2);
      piVar13 = *(int **)(lVar15 + 0x18);
      iVar1 = *piVar13;
      plVar10 = (long *)(ulong)(uint)piVar13[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x210) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_101bf3c7c;
                    /* WARNING: Could not recover jumptable at 0x000101bf3b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar13))
                (*(undefined8 *)(unaff_x22 + 0x1e0),uVar12,*(undefined8 *)(unaff_x22 + 0x1d0),
                 *(undefined8 *)(unaff_x22 + 0x1d8),uVar7 & 0xffffff,
                 *(undefined8 *)(unaff_x22 + 0x1f8),*(undefined1 *)(unaff_x22 + 0x27e),uVar2,lVar15)
      ;
      return;
    }
    uVar7 = *(uint *)(unaff_x22 + 0x278);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar15 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x88,uVar2,lVar15);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar15 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
    piVar13 = *(int **)(lVar15 + 0x10);
    iVar1 = *piVar13;
    plVar10 = (long *)(ulong)(uint)piVar13[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x220) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = 0x101bf3cd8;
                    /* WARNING: Could not recover jumptable at 0x000101bf3c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar13))
              (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8),
               uVar7 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x27e),uVar2,lVar15);
    return;
  }
  uVar7 = *(uint *)(unaff_x22 + 0x278);
  func_0x000101bf6554(unaff_x22 + 0x60);
  plVar10 = (long *)0x270;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x270) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101bf46c0;
  lVar15 = *(long *)(unaff_x22 + 0x1f8);
  lVar4 = *(long *)(unaff_x22 + 0x200);
  lVar3 = *(long *)(unaff_x22 + 0x1e8);
  lVar5 = *(long *)(unaff_x22 + 0x1f0);
  lVar16 = *(long *)(unaff_x22 + 0x1d8);
  lVar6 = *(long *)(unaff_x22 + 0x1e0);
  lVar14 = *(long *)(unaff_x22 + 0x1d0);
  uVar8 = *(undefined1 *)(unaff_x22 + 0x27e);
  uVar7 = uVar7 & 0xffffff;
  plVar10[0x3f] = lVar15;
  plVar10[0x40] = lVar4;
  *(undefined1 *)((long)plVar10 + 0x26d) = uVar8;
  *(uint *)(plVar10 + 0x4d) = uVar7;
  plVar10[0x3d] = lVar3;
  plVar10[0x3e] = lVar5;
  plVar10[0x3b] = lVar16;
  plVar10[0x3c] = lVar6;
  plVar10[0x3a] = lVar14;
  plVar11 = (long *)0xb0;
  func_0x000107c615b8();
  plVar10[0x41] = (long)plVar11;
  *plVar11 = (long)plVar10;
  plVar11[1] = (long)FUN_101bf4ad8;
  plVar11[0x11] = lVar15;
  plVar11[0x12] = lVar4;
  *(undefined1 *)((long)plVar11 + 0xad) = uVar8;
  *(uint *)(plVar11 + 0x15) = uVar7;
  plVar11[0x10] = lVar5;
  *(bool *)((long)plVar11 + 0xac) = lVar3 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5a4c,0,0);
  return;
}



/* Entry: 101bf3c7c; end: 101bf3d33;  */

void FUN_101bf3c7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf3d34;
  }
  else {
    pcVar1 = FUN_101bf3e84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf3d34; end: 101bf3e83;  */

void FUN_101bf3d34(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(uint *)(unaff_x22 + 0x278);
  func_0x000100083b20(unaff_x22 + 0x100);
  lVar1 = *(long *)(unaff_x22 + 0x120);
  func_0x0001000a8868(unaff_x22 + 0x100,*(undefined8 *)(unaff_x22 + 0x118));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar6;
  *(long *)(unaff_x22 + 0x238) = lVar2;
  lVar5 = unaff_x22 + 0x38;
  func_0x0001000a8868(lVar5,uVar6);
  *(long *)(unaff_x22 + 0x240) = lVar5;
  pcVar7 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0x248) = pcVar7;
  (*pcVar7)(uVar6,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,uVar8,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x27e));
  func_0x0001000834e4(unaff_x22 + 0x100);
  uVar8 = 0;
  func_0x000107c5fcec();
  uVar6 = uVar8;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x250) = uVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar8,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf40d0,uVar8,uVar6);
  return;
}



/* Entry: 101bf3e84; end: 101bf40cf;  */

void FUN_101bf3e84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 600) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar16;
  func_0x000107c614b0(uVar16);
  uVar15 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar11 = unaff_x22 + 0x27c;
  func_0x000107c6147c(lVar11,unaff_x22 + 0x1c8,uVar15,&UNK_1106c6770,0);
  if (((int)lVar11 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x27c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x278);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar11 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 200));
    uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar15);
    (**(code **)(lVar2 + 8))(uVar15,lVar2);
    uVar10 = (ulong)uVar5 << 3;
    uVar15 = 0;
    if (lVar11 != 0) {
      uVar15 = uVar16;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x278);
    (**(code **)(lVar1 + 0x10))
              (2,uVar15,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar10 & 0x38),
               0x303030003020303 >> (uVar10 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x27e));
    func_0x0001000834e4(unaff_x22 + 0xb0);
    FUN_101bf5e94(0xc,uVar6);
    uVar16 = 0;
    func_0x000107c5fcec();
    uVar15 = uVar16;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x268) = uVar15;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar16,uVar15);
    pcVar13 = FUN_101bf426c;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x278);
    func_0x000107c614ac(uVar16);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar11 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar15);
    (**(code **)(lVar11 + 8))(uVar15,lVar11);
    plVar12 = (long *)0x280;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x260) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = 0x101bf41d4;
    lVar2 = *(long *)(unaff_x22 + 0x200);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x27e);
    uVar9 = *(undefined1 *)(unaff_x22 + 0x27d);
    lVar11 = *(long *)(unaff_x22 + 0x1e8);
    lVar3 = *(long *)(unaff_x22 + 0x1f0);
    lVar1 = *(long *)(unaff_x22 + 0x1d8);
    lVar4 = *(long *)(unaff_x22 + 0x1e0);
    lVar14 = *(long *)(unaff_x22 + 0x1d0);
    plVar12[0x3f] = *(long *)(unaff_x22 + 0x1f8);
    plVar12[0x40] = lVar2;
    *(undefined1 *)((long)plVar12 + 0x26f) = uVar8;
    *(uint *)(plVar12 + 0x4d) = uVar5 & 0xffffff;
    *(undefined1 *)((long)plVar12 + 0x26e) = uVar9;
    plVar12[0x3d] = lVar11;
    plVar12[0x3e] = lVar3;
    plVar12[0x3b] = lVar1;
    plVar12[0x3c] = lVar4;
    plVar12[0x3a] = lVar14;
    *(byte *)((long)plVar12 + 0x26d) = bVar7;
    pcVar13 = FUN_101bf65dc;
    uVar16 = 0;
    uVar15 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar13,uVar16,uVar15);
  return;
}



/* Entry: 101bf40d0; end: 101bf4183;  */

void FUN_101bf40d0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(unaff_x22 + 0x248);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x250));
  func_0x000100083b20(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  func_0x0001000a8868(unaff_x22 + 0x128,uVar1);
  (*pcVar5)(uVar4,uVar3);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4184,0,0);
  return;
}



/* Entry: 101bf4184; end: 101bf426b;  */

void FUN_101bf4184(void)

{
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x248))
            (*(undefined8 *)(unaff_x22 + 0x230),*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000101bf6554(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101bf41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101bf426c; end: 101bf42eb;  */

void FUN_101bf426c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x268));
  func_0x000100083b20(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf42ec,0,0);
  return;
}



/* Entry: 101bf42ec; end: 101bf432f;  */

void FUN_101bf42ec(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 600));
  func_0x000101bf6554(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101bf432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf4330; end: 101bf4473;  */

void FUN_101bf4330(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar3 = *(uint *)(unaff_x22 + 0x278);
  func_0x000100083b20(unaff_x22 + 0x100);
  lVar1 = *(long *)(unaff_x22 + 0x120);
  func_0x0001000a8868(unaff_x22 + 0x100,*(undefined8 *)(unaff_x22 + 0x118));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar7;
  *(long *)(unaff_x22 + 0x238) = lVar2;
  lVar5 = unaff_x22 + 0x38;
  func_0x0001000a8868(lVar5,uVar7);
  *(long *)(unaff_x22 + 0x240) = lVar5;
  pcVar8 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0x248) = pcVar8;
  (*pcVar8)(uVar7,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,0,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x27e));
  func_0x0001000834e4(unaff_x22 + 0x100);
  uVar6 = 0;
  func_0x000107c5fcec();
  uVar7 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x250) = uVar7;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf40d0,uVar6,uVar7);
  return;
}



/* Entry: 101bf4474; end: 101bf46bf;  */

void FUN_101bf4474(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 600) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar16;
  func_0x000107c614b0(uVar16);
  uVar15 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar11 = unaff_x22 + 0x27c;
  func_0x000107c6147c(lVar11,unaff_x22 + 0x1c8,uVar15,&UNK_1106c6770,0);
  if (((int)lVar11 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x27c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x278);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar11 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 200));
    uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar15);
    (**(code **)(lVar2 + 8))(uVar15,lVar2);
    uVar10 = (ulong)uVar5 << 3;
    uVar15 = 0;
    if (lVar11 != 0) {
      uVar15 = uVar16;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x278);
    (**(code **)(lVar1 + 0x10))
              (2,uVar15,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar10 & 0x38),
               0x303030003020303 >> (uVar10 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x27e));
    func_0x0001000834e4(unaff_x22 + 0xb0);
    FUN_101bf5e94(0xc,uVar6);
    uVar16 = 0;
    func_0x000107c5fcec();
    uVar15 = uVar16;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x268) = uVar15;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar16,uVar15);
    pcVar13 = FUN_101bf426c;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x278);
    func_0x000107c614ac(uVar16);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar11 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar15);
    (**(code **)(lVar11 + 8))(uVar15,lVar11);
    plVar12 = (long *)0x280;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x260) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = 0x101bf41d4;
    lVar2 = *(long *)(unaff_x22 + 0x200);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x27e);
    uVar9 = *(undefined1 *)(unaff_x22 + 0x27d);
    lVar11 = *(long *)(unaff_x22 + 0x1e8);
    lVar3 = *(long *)(unaff_x22 + 0x1f0);
    lVar1 = *(long *)(unaff_x22 + 0x1d8);
    lVar4 = *(long *)(unaff_x22 + 0x1e0);
    lVar14 = *(long *)(unaff_x22 + 0x1d0);
    plVar12[0x3f] = *(long *)(unaff_x22 + 0x1f8);
    plVar12[0x40] = lVar2;
    *(undefined1 *)((long)plVar12 + 0x26f) = uVar8;
    *(uint *)(plVar12 + 0x4d) = uVar5 & 0xffffff;
    *(undefined1 *)((long)plVar12 + 0x26e) = uVar9;
    plVar12[0x3d] = lVar11;
    plVar12[0x3e] = lVar3;
    plVar12[0x3b] = lVar1;
    plVar12[0x3c] = lVar4;
    plVar12[0x3a] = lVar14;
    *(byte *)((long)plVar12 + 0x26d) = bVar7;
    pcVar13 = FUN_101bf65dc;
    uVar16 = 0;
    uVar15 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar13,uVar16,uVar15);
  return;
}



/* Entry: 101bf46c0; end: 101bf4743;  */

void FUN_101bf46c0(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x280) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x270));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bf4710,0,0);
  return;
}



/* Entry: 101bf4744; end: 101bf47eb;  */

void FUN_101bf4744(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                  long param_7,undefined1 param_8)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bf47ec;
  plVar2[0x3f] = param_7;
  plVar2[0x40] = unaff_x20;
  *(undefined1 *)((long)plVar2 + 0x27e) = param_8;
  *(uint *)(plVar2 + 0x4f) = param_6 & 0xffffff;
  *(undefined1 *)((long)plVar2 + 0x27d) = 1;
  plVar2[0x3d] = param_4;
  plVar2[0x3e] = param_5;
  plVar2[0x3b] = param_2;
  plVar2[0x3c] = param_3;
  plVar2[0x3a] = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0x41] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101bf3918;
  plVar1[9] = param_7;
  plVar1[10] = unaff_x20;
  *(undefined1 *)((long)plVar1 + 0x6c) = param_8;
  *(uint *)(plVar1 + 0xd) = param_6 & 0xffffff;
  plVar1[8] = (long)(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf47ec; end: 101bf482f;  */

void FUN_101bf47ec(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bf482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101bf4830; end: 101bf4853;  */

void FUN_101bf4830(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x6c) = param_4;
  *(undefined4 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf4854; end: 101bf48f3;  */

void FUN_101bf4854(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x22 + 0x68);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bf48f4;
                    /* WARNING: Could not recover jumptable at 0x000101bf48f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined1 *)(unaff_x22 + 0x6c),uVar2,lVar3);
  return;
}



/* Entry: 101bf48f4; end: 101bf495f;  */

void FUN_101bf48f4(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x6d) = param_1;
    pcVar1 = FUN_101bf4960;
  }
  else {
    pcVar1 = FUN_101bf49d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf4960; end: 101bf49d7;  */

void FUN_101bf4960(void)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x6d);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar2 == '\x01') {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x40);
  }
  else {
    func_0x00010008a7c8(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x38);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x40);
    if (lVar1 != 0) {
      func_0x000100083b20();
      func_0x000107c61574(lVar1);
      goto LAB_101bf49c4;
    }
  }
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
LAB_101bf49c4:
                    /* WARNING: Could not recover jumptable at 0x000101bf49d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf49d8; end: 101bf4a3f;  */

void FUN_101bf49d8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 *puVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_101bf5e94(0xd,uVar1);
  func_0x000107c614ac(uVar2);
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000101bf4a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf4a40; end: 101bf4ad7;  */

void FUN_101bf4a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,uint param_6,long param_7,undefined1 param_8)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x1f8) = param_7;
  *(long *)(unaff_x22 + 0x200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x26d) = param_8;
  *(uint *)(unaff_x22 + 0x268) = param_6;
  *(long *)(unaff_x22 + 0x1e8) = param_4;
  *(long *)(unaff_x22 + 0x1f0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x208) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bf4ad8;
  plVar1[0x11] = param_7;
  plVar1[0x12] = unaff_x20;
  *(undefined1 *)((long)plVar1 + 0xad) = param_8;
  *(uint *)(plVar1 + 0x15) = param_6 & 0xffffff;
  plVar1[0x10] = param_5;
  *(bool *)((long)plVar1 + 0xac) = param_4 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5a4c,0,0);
  return;
}



/* Entry: 101bf4ad8; end: 101bf4b5b;  */

void FUN_101bf4ad8(char param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x208));
  if (param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000101bf4b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))(1);
    return;
  }
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x210) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bf4b5c;
  lVar3 = *(long *)(lVar2 + 0x200);
  plVar1[0xe] = *(long *)(lVar2 + 0x1f0);
  plVar1[0xf] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0x10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0x11] = lVar3;
  plVar1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5cb4,lVar3,lVar2);
  return;
}



/* Entry: 101bf4b5c; end: 101bf4bcf;  */

void FUN_101bf4b5c(void)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(uint *)(lVar4 + 0x268);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x210));
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x218) = plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)FUN_101bf4bd0;
  lVar5 = *(long *)(lVar4 + 0x200);
  uVar2 = *(undefined1 *)(lVar4 + 0x26d);
  plVar3[9] = *(long *)(lVar4 + 0x1f8);
  plVar3[10] = lVar5;
  *(undefined1 *)((long)plVar3 + 0x6c) = uVar2;
  *(uint *)(plVar3 + 0xd) = uVar1 & 0xffffff;
  plVar3[8] = lVar4 + 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf4bd0; end: 101bf4c17;  */

void FUN_101bf4bd0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4c18,0,0);
  return;
}



/* Entry: 101bf4c18; end: 101bf4e3f;  */

void FUN_101bf4c18(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    uVar3 = *(undefined4 *)(unaff_x22 + 0x268);
    func_0x000101bf6554(unaff_x22 + 0x38);
    FUN_101bf5e94(4,uVar3);
    uVar7 = 0;
    func_0x000107c5fcec();
    uVar4 = uVar7;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x260) = uVar4;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar7,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf59ac,uVar7,uVar4);
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x1e8);
  func_0x000101122624(unaff_x22 + 0x38,unaff_x22 + 0x10);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(unaff_x22 + 0x268);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar8 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    (**(code **)(lVar8 + 8))(uVar4,lVar8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar8 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x1a0,uVar4,lVar8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
    lVar8 = *(long *)(unaff_x22 + 0x1c0);
    func_0x0001000a8868(unaff_x22 + 0x1a0,uVar4);
    piVar6 = *(int **)(lVar8 + 0x18);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x220) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101bf4e40;
                    /* WARNING: Could not recover jumptable at 0x000101bf4d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (*(undefined8 *)(unaff_x22 + 0x1e0),uVar7,*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),uVar2 & 0xffffff,
               *(undefined8 *)(unaff_x22 + 0x1f8),*(undefined1 *)(unaff_x22 + 0x26d),uVar4,lVar8);
    return;
  }
  uVar2 = *(uint *)(unaff_x22 + 0x268);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x88,uVar4,lVar8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar4);
  piVar6 = *(int **)(lVar8 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x230) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bf4e9c;
                    /* WARNING: Could not recover jumptable at 0x000101bf4e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8),uVar2 & 0xffffff,
             *(undefined8 *)(unaff_x22 + 0x1f8),*(undefined1 *)(unaff_x22 + 0x26d),uVar4,lVar8);
  return;
}



/* Entry: 101bf4e40; end: 101bf4ef7;  */

void FUN_101bf4e40(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf4ef8;
  }
  else {
    pcVar1 = FUN_101bf5038;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf4ef8; end: 101bf5037;  */

void FUN_101bf4ef8(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(uint *)(unaff_x22 + 0x268);
  func_0x000100083b20(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  func_0x0001000a8868(unaff_x22 + 0x150,*(undefined8 *)(unaff_x22 + 0x168));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
  (**(code **)(lVar2 + 8))(uVar5,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,uVar6,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x26d));
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar6 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x248) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar6,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5724,uVar6,uVar5);
  return;
}



/* Entry: 101bf5038; end: 101bf5313;  */

void FUN_101bf5038(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar13;
  func_0x000107c614b0(uVar13);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar10 = unaff_x22 + 0x26c;
  func_0x000107c6147c(lVar10,unaff_x22 + 0x1c8,uVar9,&UNK_1106c6770,0);
  if (((int)lVar10 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x26c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 200));
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar4 + 8))(uVar9,lVar4);
    uVar8 = (ulong)uVar5 << 3;
    uVar9 = 0;
    if (lVar10 != 0) {
      uVar9 = uVar13;
    }
    uVar12 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar3 + 0x10))
              (2,uVar9,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar8 & 0x38),
               0x303030003020303 >> (uVar8 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26d));
    func_0x0001000834e4(unaff_x22 + 0xb0);
    FUN_101bf5e94(0xc,uVar12);
    uVar13 = 0;
    func_0x000107c5fcec();
    uVar9 = uVar13;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 600) = uVar9;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar13,uVar9);
    pcVar11 = FUN_101bf58f0;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar3 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(uVar13);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar10 + 8))(uVar9,lVar10);
    func_0x000100083b20(unaff_x22 + 0x100);
    lVar4 = *(long *)(unaff_x22 + 0x120);
    lVar10 = unaff_x22 + 0x100;
    func_0x0001000a8868(lVar10,*(undefined8 *)(unaff_x22 + 0x118));
    uVar8 = (ulong)uVar5 << 3;
    uVar9 = 0;
    if (lVar3 != 0) {
      uVar9 = uVar2;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar4 + 0x10))
              (lVar10,2,uVar9,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar8 & 0x38),
               0x303030003020303 >> (uVar8 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26d));
    func_0x0001000834e4(unaff_x22 + 0x100);
    uVar12 = 10;
    if (bVar7 != 1) {
      uVar12 = 8;
    }
    uVar1 = 6;
    if (bVar7 != 2) {
      uVar1 = uVar12;
    }
    FUN_101bf5e94(uVar1,uVar6);
    uVar13 = 0;
    func_0x000107c5fcec();
    uVar9 = uVar13;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x250) = uVar9;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar13,uVar9);
    pcVar11 = FUN_101bf5834;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar11,uVar13,uVar9);
  return;
}



/* Entry: 101bf5314; end: 101bf5447;  */

void FUN_101bf5314(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar3 = *(uint *)(unaff_x22 + 0x268);
  func_0x000100083b20(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  func_0x0001000a8868(unaff_x22 + 0x150,*(undefined8 *)(unaff_x22 + 0x168));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
  (**(code **)(lVar2 + 8))(uVar6,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,0,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x26d));
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar5 = 0;
  func_0x000107c5fcec();
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x248) = uVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5724,uVar5,uVar6);
  return;
}



/* Entry: 101bf5448; end: 101bf5723;  */

void FUN_101bf5448(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar13;
  func_0x000107c614b0(uVar13);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar10 = unaff_x22 + 0x26c;
  func_0x000107c6147c(lVar10,unaff_x22 + 0x1c8,uVar9,&UNK_1106c6770,0);
  if (((int)lVar10 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x26c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 200));
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar4 + 8))(uVar9,lVar4);
    uVar8 = (ulong)uVar5 << 3;
    uVar9 = 0;
    if (lVar10 != 0) {
      uVar9 = uVar13;
    }
    uVar12 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar3 + 0x10))
              (2,uVar9,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar8 & 0x38),
               0x303030003020303 >> (uVar8 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26d));
    func_0x0001000834e4(unaff_x22 + 0xb0);
    FUN_101bf5e94(0xc,uVar12);
    uVar13 = 0;
    func_0x000107c5fcec();
    uVar9 = uVar13;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 600) = uVar9;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar13,uVar9);
    pcVar11 = FUN_101bf58f0;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar3 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(uVar13);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar10 + 8))(uVar9,lVar10);
    func_0x000100083b20(unaff_x22 + 0x100);
    lVar4 = *(long *)(unaff_x22 + 0x120);
    lVar10 = unaff_x22 + 0x100;
    func_0x0001000a8868(lVar10,*(undefined8 *)(unaff_x22 + 0x118));
    uVar8 = (ulong)uVar5 << 3;
    uVar9 = 0;
    if (lVar3 != 0) {
      uVar9 = uVar2;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar4 + 0x10))
              (lVar10,2,uVar9,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar8 & 0x38),
               0x303030003020303 >> (uVar8 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26d));
    func_0x0001000834e4(unaff_x22 + 0x100);
    uVar12 = 10;
    if (bVar7 != 1) {
      uVar12 = 8;
    }
    uVar1 = 6;
    if (bVar7 != 2) {
      uVar1 = uVar12;
    }
    FUN_101bf5e94(uVar1,uVar6);
    uVar13 = 0;
    func_0x000107c5fcec();
    uVar9 = uVar13;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x250) = uVar9;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar13,uVar9);
    pcVar11 = FUN_101bf5834;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar11,uVar13,uVar9);
  return;
}



/* Entry: 101bf5724; end: 101bf57d3;  */

void FUN_101bf5724(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x248));
  func_0x000100083b20(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  lVar3 = *(long *)(unaff_x22 + 0x198);
  func_0x0001000a8868(unaff_x22 + 0x178,uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar4 + 8))(uVar2,lVar4);
  (**(code **)(lVar3 + 8))(uVar1,lVar3);
  func_0x0001000834e4(unaff_x22 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf57d4,0,0);
  return;
}



/* Entry: 101bf57d4; end: 101bf5833;  */

void FUN_101bf57d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bf5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101bf5834; end: 101bf58b3;  */

void FUN_101bf5834(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x250));
  func_0x000100083b20(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  func_0x0001000a8868(unaff_x22 + 0x128,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf58b4,0,0);
  return;
}



/* Entry: 101bf58b4; end: 101bf58ef;  */

void FUN_101bf58b4(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bf58ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf58f0; end: 101bf596f;  */

void FUN_101bf58f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 600));
  func_0x000100083b20(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5970,0,0);
  return;
}



/* Entry: 101bf5970; end: 101bf59ab;  */

void FUN_101bf5970(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x240));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bf59a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf59ac; end: 101bf5a23;  */

void FUN_101bf59ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x260));
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000101bf5a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf5a24; end: 101bf5a4b;  */

void FUN_101bf5a24(undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xad) = param_5;
  *(undefined4 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined1 *)(unaff_x22 + 0xac) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5a4c,0,0);
  return;
}



/* Entry: 101bf5a4c; end: 101bf5b3f;  */

void FUN_101bf5a4c(void)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(uint *)(unaff_x22 + 0xa8);
  if (*(char *)(unaff_x22 + 0xac) == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
    piVar3 = *(int **)(lVar6 + 8);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    pcVar4 = (code *)0x101bf5bc4;
    *(long **)(unaff_x22 + 0xa0) = plVar2;
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar6 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar5);
    piVar3 = *(int **)(lVar6 + 0x10);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    pcVar4 = FUN_101bf5b40;
    *(long **)(unaff_x22 + 0x98) = plVar2;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = (long)pcVar4;
                    /* WARNING: Could not recover jumptable at 0x000101bf5b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x22 + 0x80),uVar1 & 0xff00ff,*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined1 *)(unaff_x22 + 0xad),uVar5,lVar6);
  return;
}



/* Entry: 101bf5b40; end: 101bf5c47;  */

void FUN_101bf5b40(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x68) = param_1;
  *(long **)(lVar1 + 0x60) = unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bf5b90,0,0);
  return;
}



/* Entry: 101bf5c48; end: 101bf5cb3;  */

void FUN_101bf5c48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5cb4,uVar1,uVar2);
  return;
}



/* Entry: 101bf5cb4; end: 101bf5dbf;  */

void FUN_101bf5cb4(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = uVar5;
  func_0x000107c49fd4();
  func_0x000107c615e8(uVar5);
  if ((int)uVar6 != 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    func_0x00010008a7c8(unaff_x22 + 0x68,unaff_x22 + 0x10);
    FUN_101bf24fc(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000100083b20(unaff_x22 + 0x38);
    func_0x000107c61574(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
    piVar4 = *(int **)(lVar2 + 8);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101bf5dc0;
                    /* WARNING: Could not recover jumptable at 0x000101bf5d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0x70),uVar6,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101bf5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf5dc0; end: 101bf5e17;  */

void FUN_101bf5dc0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf5e18;
  }
  else {
    pcVar1 = (code *)0x101bf5e50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
  return;
}



/* Entry: 101bf5e18; end: 101bf5e93;  */

void FUN_101bf5e18(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101bf5e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf5e94; end: 101bf6017;  */

/* WARNING: Possible PIC construction at 0x000101bf6000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bf6004) */

void FUN_101bf5e94(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar3 = 0x800000010f003040;
  uVar4 = 0xd000000000000011;
  if (param_2 != 6) {
    uVar3 = 0xec00000064656566;
    uVar4 = 0x5f73646e65697266;
  }
  uVar5 = 0xef6369706f745f74;
  uVar6 = 0x6867696c746f7073;
  if (param_2 != 4) {
    uVar5 = 0xee0073676e697474;
    uVar6 = 0x65735f636973756d;
  }
  if (param_2 < 6) {
    uVar3 = uVar5;
    uVar4 = uVar6;
  }
  uVar5 = 0x656c69666f7270;
  if (param_2 != 2) {
    uVar5 = 0x70616d;
  }
  uVar6 = 0xe700000000000000;
  if (param_2 != 2) {
    uVar6 = 0xe300000000000000;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (param_2 != 0) {
    uVar1 = 0x68747561;
  }
  uVar2 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (param_2 < 2) {
    uVar6 = uVar2;
    uVar5 = uVar1;
  }
  if (param_2 < 4) {
    uVar3 = uVar6;
    uVar4 = uVar5;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = uVar3;
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000101c2607c(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000105728e38(uVar6,uVar4,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101bf6018; end: 101bf60c3;  */

void FUN_101bf6018(long param_1,long param_2,long param_3,uint param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar3 = unaff_x20[4];
  uVar5 = unaff_x20[7];
  uVar4 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  plVar2 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bf75b0;
  plVar2[0x3f] = param_5;
  plVar2[0x40] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar2 + 0x27e) = param_6;
  *(uint *)(plVar2 + 0x4f) = param_4 & 0xffffff;
  *(undefined1 *)((long)plVar2 + 0x27d) = 1;
  plVar2[0x3d] = 0;
  plVar2[0x3e] = param_3;
  plVar2[0x3b] = param_2;
  plVar2[0x3c] = 0;
  plVar2[0x3a] = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0x41] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101bf3918;
  plVar1[9] = param_5;
  plVar1[10] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar1 + 0x6c) = param_6;
  *(uint *)(plVar1 + 0xd) = param_4 & 0xffffff;
  plVar1[8] = (long)(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf60c4; end: 101bf617f;  */

void FUN_101bf60c4(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                  long param_7,undefined1 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar3 = unaff_x20[4];
  uVar5 = unaff_x20[7];
  uVar4 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  plVar2 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bf6180;
  plVar2[0x3f] = param_7;
  plVar2[0x40] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar2 + 0x27e) = param_8;
  *(uint *)(plVar2 + 0x4f) = param_6 & 0xffffff;
  *(undefined1 *)((long)plVar2 + 0x27d) = 1;
  plVar2[0x3d] = param_4;
  plVar2[0x3e] = param_5;
  plVar2[0x3b] = param_2;
  plVar2[0x3c] = param_3;
  plVar2[0x3a] = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0x41] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101bf3918;
  plVar1[9] = param_7;
  plVar1[10] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar1 + 0x6c) = param_8;
  *(uint *)(plVar1 + 0xd) = param_6 & 0xffffff;
  plVar1[8] = (long)(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf6180; end: 101bf61c3;  */

void FUN_101bf6180(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101bf61c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101bf61c4; end: 101bf61d3;  */

undefined1  [16] FUN_101bf61c4(void)

{
  return ZEXT816(0x110454f00);
}



/* Entry: 101bf61d4; end: 101bf6257;  */

long FUN_101bf61d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bf6258; end: 101bf62eb;  */

undefined8 * FUN_101bf6258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar7);
  return param_1;
}



/* Entry: 101bf62ec; end: 101bf63d7;  */

undefined8 * FUN_101bf62ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101bf63d8; end: 101bf645b;  */

undefined8 * FUN_101bf63d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101bf645c; end: 101bf6503;  */

int FUN_101bf645c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf6504; end: 101bf659b;  */

undefined8 FUN_101bf6504(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e08bb0;
  func_0x0001000285a8(0x112e08bb0,&UNK_10d9ddb20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bf659c; end: 101bf65db;  */

void FUN_101bf659c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x26f) = param_10;
  *(undefined4 *)(unaff_x22 + 0x268) = param_8;
  *(undefined1 *)(unaff_x22 + 0x26e) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
  *(undefined1 *)(unaff_x22 + 0x26d) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf65dc,0,0);
  return;
}



/* Entry: 101bf65dc; end: 101bf677b;  */

void FUN_101bf65dc(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x26e) == '\x01') {
    uVar2 = *(uint *)(unaff_x22 + 0x268);
    lVar14 = *(long *)(unaff_x22 + 0x1e8);
    plVar7 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x208) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101bf677c;
    lVar8 = *(long *)(unaff_x22 + 0x200);
    lVar11 = *(long *)(unaff_x22 + 0x1f0);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x26f);
    plVar7[0x11] = *(long *)(unaff_x22 + 0x1f8);
    plVar7[0x12] = lVar8;
    *(undefined1 *)((long)plVar7 + 0xad) = uVar4;
    *(uint *)(plVar7 + 0x15) = uVar2 & 0xffffff;
    plVar7[0x10] = lVar11;
    *(bool *)((long)plVar7 + 0xac) = lVar14 == 0;
    pcVar9 = FUN_101bf5a4c;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar2 = *(uint *)(unaff_x22 + 0x268);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar11 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar14 = *(long *)(unaff_x22 + 0x30);
    lVar8 = unaff_x22 + 0x10;
    func_0x0001000a8868(lVar8,*(undefined8 *)(unaff_x22 + 0x28));
    uVar6 = (ulong)uVar2 << 3;
    uVar12 = 0;
    if (lVar11 != 0) {
      uVar12 = uVar10;
    }
    uVar3 = *(undefined4 *)(unaff_x22 + 0x268);
    cVar5 = *(char *)(unaff_x22 + 0x26d);
    (**(code **)(lVar14 + 0x10))
              (lVar8,2,uVar12,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar6 & 0x38),
               0x303030003020303 >> (uVar6 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26f));
    func_0x0001000834e4(unaff_x22 + 0x10);
    uVar13 = 10;
    if (cVar5 != '\x01') {
      uVar13 = 8;
    }
    uVar1 = 6;
    if (cVar5 != '\x02') {
      uVar1 = uVar13;
    }
    FUN_101bf5e94(uVar1,uVar3);
    uVar10 = 0;
    func_0x000107c5fcec();
    uVar12 = uVar10;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x260) = uVar12;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar10,uVar12);
    pcVar9 = FUN_101bf7538;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,uVar10,uVar12);
  return;
}



/* Entry: 101bf677c; end: 101bf6817;  */

void FUN_101bf677c(char param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x208));
  if (param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000101bf67c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 8))(1);
    return;
  }
  uVar1 = *(uint *)(lVar4 + 0x268);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x210) = plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)FUN_101bf6818;
  lVar5 = *(long *)(lVar4 + 0x200);
  uVar2 = *(undefined1 *)(lVar4 + 0x26f);
  plVar3[9] = *(long *)(lVar4 + 0x1f8);
  plVar3[10] = lVar5;
  *(undefined1 *)((long)plVar3 + 0x6c) = uVar2;
  *(uint *)(plVar3 + 0xd) = uVar1 & 0xffffff;
  plVar3[8] = lVar4 + 0x60;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf4854,0,0);
  return;
}



/* Entry: 101bf6818; end: 101bf685f;  */

void FUN_101bf6818(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf6860,0,0);
  return;
}



/* Entry: 101bf6860; end: 101bf6a7b;  */

void FUN_101bf6860(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  
  FUN_101bf6504(unaff_x22 + 0x60,unaff_x22 + 0xb0);
  if (*(long *)(unaff_x22 + 200) == 0) {
    uVar8 = *(uint *)(unaff_x22 + 0x268);
    func_0x000101bf6554(unaff_x22 + 0xb0);
    plVar11 = (long *)0x270;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 600) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = 0x101bf74b4;
    lVar15 = *(long *)(unaff_x22 + 0x1f8);
    lVar5 = *(long *)(unaff_x22 + 0x200);
    lVar3 = *(long *)(unaff_x22 + 0x1e8);
    lVar6 = *(long *)(unaff_x22 + 0x1f0);
    lVar4 = *(long *)(unaff_x22 + 0x1d8);
    lVar7 = *(long *)(unaff_x22 + 0x1e0);
    lVar13 = *(long *)(unaff_x22 + 0x1d0);
    uVar9 = *(undefined1 *)(unaff_x22 + 0x26f);
    uVar8 = uVar8 & 0xffffff;
    plVar11[0x3f] = lVar15;
    plVar11[0x40] = lVar5;
    *(undefined1 *)((long)plVar11 + 0x26d) = uVar9;
    *(uint *)(plVar11 + 0x4d) = uVar8;
    plVar11[0x3d] = lVar3;
    plVar11[0x3e] = lVar6;
    plVar11[0x3b] = lVar4;
    plVar11[0x3c] = lVar7;
    plVar11[0x3a] = lVar13;
    plVar10 = (long *)0xb0;
    func_0x000107c615b8();
    plVar11[0x41] = (long)plVar10;
    *plVar10 = (long)plVar11;
    plVar10[1] = (long)FUN_101bf4ad8;
    plVar10[0x11] = lVar15;
    plVar10[0x12] = lVar5;
    *(undefined1 *)((long)plVar10 + 0xad) = uVar9;
    *(uint *)(plVar10 + 0x15) = uVar8;
    plVar10[0x10] = lVar6;
    *(bool *)((long)plVar10 + 0xac) = lVar3 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf5a4c,0,0);
    return;
  }
  lVar15 = *(long *)(unaff_x22 + 0x1e8);
  func_0x000101122624(unaff_x22 + 0xb0,unaff_x22 + 0x88);
  if (lVar15 != 0) {
    uVar8 = *(uint *)(unaff_x22 + 0x268);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar15 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
    (**(code **)(lVar15 + 8))(uVar2,lVar15);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar15 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x1a0,uVar2,lVar15);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
    lVar15 = *(long *)(unaff_x22 + 0x1c0);
    func_0x0001000a8868(unaff_x22 + 0x1a0,uVar2);
    piVar12 = *(int **)(lVar15 + 0x18);
    iVar1 = *piVar12;
    plVar10 = (long *)(ulong)(uint)piVar12[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x218) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101bf6a7c;
                    /* WARNING: Could not recover jumptable at 0x000101bf6974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))
              (*(undefined8 *)(unaff_x22 + 0x1e0),uVar14,*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),uVar8 & 0xffffff,
               *(undefined8 *)(unaff_x22 + 0x1f8),*(undefined1 *)(unaff_x22 + 0x26f),uVar2,lVar15);
    return;
  }
  uVar8 = *(uint *)(unaff_x22 + 0x268);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar15 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
  (**(code **)(lVar15 + 0x28))(unaff_x22 + 0xd8,uVar2,lVar15);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar15 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar2);
  piVar12 = *(int **)(lVar15 + 0x10);
  iVar1 = *piVar12;
  plVar10 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x228) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101bf6ad8;
                    /* WARNING: Could not recover jumptable at 0x000101bf6a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))
            (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8),uVar8 & 0xffffff,
             *(undefined8 *)(unaff_x22 + 0x1f8),*(undefined1 *)(unaff_x22 + 0x26f),uVar2,lVar15);
  return;
}



/* Entry: 101bf6a7c; end: 101bf6b33;  */

void FUN_101bf6a7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x220) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x218));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf6b34;
  }
  else {
    pcVar1 = FUN_101bf6c74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf6b34; end: 101bf6c73;  */

void FUN_101bf6b34(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(uint *)(unaff_x22 + 0x268);
  func_0x000100083b20(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  func_0x0001000a8868(unaff_x22 + 0x150,*(undefined8 *)(unaff_x22 + 0x168));
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar5);
  (**(code **)(lVar2 + 8))(uVar5,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,uVar6,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x26f));
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar6 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x240) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar6,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7240,uVar6,uVar5);
  return;
}



/* Entry: 101bf6c74; end: 101bf6ebf;  */

void FUN_101bf6c74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x238) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar15;
  func_0x000107c614b0(uVar15);
  uVar14 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar10 = unaff_x22 + 0x26c;
  func_0x000107c6147c(lVar10,unaff_x22 + 0x1c8,uVar14,&UNK_1106c6770,0);
  if (((int)lVar10 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x26c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0x100);
    lVar1 = *(long *)(unaff_x22 + 0x120);
    func_0x0001000a8868(unaff_x22 + 0x100,*(undefined8 *)(unaff_x22 + 0x118));
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar14);
    (**(code **)(lVar2 + 8))(uVar14,lVar2);
    uVar9 = (ulong)uVar5 << 3;
    uVar14 = 0;
    if (lVar10 != 0) {
      uVar14 = uVar15;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar1 + 0x10))
              (2,uVar14,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar9 & 0x38),
               0x303030003020303 >> (uVar9 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26f));
    func_0x0001000834e4(unaff_x22 + 0x100);
    FUN_101bf5e94(0xc,uVar6);
    uVar15 = 0;
    func_0x000107c5fcec();
    uVar14 = uVar15;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x250) = uVar14;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar15,uVar14);
    pcVar12 = FUN_101bf73f0;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    func_0x000107c614ac(uVar15);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar10 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar14);
    (**(code **)(lVar10 + 8))(uVar14,lVar10);
    plVar11 = (long *)0x280;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x248) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101bf7358;
    lVar2 = *(long *)(unaff_x22 + 0x200);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x26f);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    lVar3 = *(long *)(unaff_x22 + 0x1f0);
    lVar1 = *(long *)(unaff_x22 + 0x1d8);
    lVar4 = *(long *)(unaff_x22 + 0x1e0);
    lVar13 = *(long *)(unaff_x22 + 0x1d0);
    plVar11[0x3f] = *(long *)(unaff_x22 + 0x1f8);
    plVar11[0x40] = lVar2;
    *(undefined1 *)((long)plVar11 + 0x26f) = uVar8;
    *(uint *)(plVar11 + 0x4d) = uVar5 & 0xffffff;
    *(undefined1 *)((long)plVar11 + 0x26e) = 0;
    plVar11[0x3d] = lVar10;
    plVar11[0x3e] = lVar3;
    plVar11[0x3b] = lVar1;
    plVar11[0x3c] = lVar4;
    plVar11[0x3a] = lVar13;
    *(byte *)((long)plVar11 + 0x26d) = bVar7;
    pcVar12 = FUN_101bf65dc;
    uVar15 = 0;
    uVar14 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar12,uVar15,uVar14);
  return;
}



/* Entry: 101bf6ec0; end: 101bf6ff3;  */

void FUN_101bf6ec0(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xd8);
  uVar3 = *(uint *)(unaff_x22 + 0x268);
  func_0x000100083b20(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  func_0x0001000a8868(unaff_x22 + 0x150,*(undefined8 *)(unaff_x22 + 0x168));
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar6);
  (**(code **)(lVar2 + 8))(uVar6,lVar2);
  uVar4 = (ulong)uVar3 << 3;
  (**(code **)(lVar1 + 0x10))
            (1,0,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
             *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar4 & 0x38),
             0x303030003020303 >> (uVar4 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
             *(undefined1 *)(unaff_x22 + 0x26f));
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar5 = 0;
  func_0x000107c5fcec();
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x240) = uVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7240,uVar5,uVar6);
  return;
}



/* Entry: 101bf6ff4; end: 101bf723f;  */

void FUN_101bf6ff4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x238) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar15;
  func_0x000107c614b0(uVar15);
  uVar14 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar10 = unaff_x22 + 0x26c;
  func_0x000107c6147c(lVar10,unaff_x22 + 0x1c8,uVar14,&UNK_1106c6770,0);
  if (((int)lVar10 == 0) || (bVar7 = *(byte *)(unaff_x22 + 0x26c), 2 < bVar7)) {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1c8));
    func_0x000100083b20(unaff_x22 + 0x100);
    lVar1 = *(long *)(unaff_x22 + 0x120);
    func_0x0001000a8868(unaff_x22 + 0x100,*(undefined8 *)(unaff_x22 + 0x118));
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar14);
    (**(code **)(lVar2 + 8))(uVar14,lVar2);
    uVar9 = (ulong)uVar5 << 3;
    uVar14 = 0;
    if (lVar10 != 0) {
      uVar14 = uVar15;
    }
    uVar6 = *(undefined4 *)(unaff_x22 + 0x268);
    (**(code **)(lVar1 + 0x10))
              (2,uVar14,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0),
               *(undefined8 *)(unaff_x22 + 0x1d8),0,0x202020001020202 >> (uVar9 & 0x38),
               0x303030003020303 >> (uVar9 & 0x38),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined1 *)(unaff_x22 + 0x26f));
    func_0x0001000834e4(unaff_x22 + 0x100);
    FUN_101bf5e94(0xc,uVar6);
    uVar15 = 0;
    func_0x000107c5fcec();
    uVar14 = uVar15;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x250) = uVar14;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar15,uVar14);
    pcVar12 = FUN_101bf73f0;
  }
  else {
    uVar5 = *(uint *)(unaff_x22 + 0x268);
    func_0x000107c614ac(uVar15);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar10 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar14);
    (**(code **)(lVar10 + 8))(uVar14,lVar10);
    plVar11 = (long *)0x280;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x248) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101bf7358;
    lVar2 = *(long *)(unaff_x22 + 0x200);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x26f);
    lVar10 = *(long *)(unaff_x22 + 0x1e8);
    lVar3 = *(long *)(unaff_x22 + 0x1f0);
    lVar1 = *(long *)(unaff_x22 + 0x1d8);
    lVar4 = *(long *)(unaff_x22 + 0x1e0);
    lVar13 = *(long *)(unaff_x22 + 0x1d0);
    plVar11[0x3f] = *(long *)(unaff_x22 + 0x1f8);
    plVar11[0x40] = lVar2;
    *(undefined1 *)((long)plVar11 + 0x26f) = uVar8;
    *(uint *)(plVar11 + 0x4d) = uVar5 & 0xffffff;
    *(undefined1 *)((long)plVar11 + 0x26e) = 0;
    plVar11[0x3d] = lVar10;
    plVar11[0x3e] = lVar3;
    plVar11[0x3b] = lVar1;
    plVar11[0x3c] = lVar4;
    plVar11[0x3a] = lVar13;
    *(byte *)((long)plVar11 + 0x26d) = bVar7;
    pcVar12 = FUN_101bf65dc;
    uVar15 = 0;
    uVar14 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar12,uVar15,uVar14);
  return;
}



/* Entry: 101bf7240; end: 101bf72ef;  */

void FUN_101bf7240(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x240));
  func_0x000100083b20(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  lVar3 = *(long *)(unaff_x22 + 0x198);
  func_0x0001000a8868(unaff_x22 + 0x178,uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
  (**(code **)(lVar4 + 8))(uVar2,lVar4);
  (**(code **)(lVar3 + 8))(uVar1,lVar3);
  func_0x0001000834e4(unaff_x22 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf72f0,0,0);
  return;
}



/* Entry: 101bf72f0; end: 101bf7357;  */

void FUN_101bf72f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  func_0x000101bf6554(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000101bf7354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101bf7358; end: 101bf73ef;  */

void FUN_101bf7358(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x270) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bf73a8,0,0);
  return;
}



/* Entry: 101bf73f0; end: 101bf746f;  */

void FUN_101bf73f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x250));
  func_0x000100083b20(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  func_0x0001000a8868(unaff_x22 + 0x128,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7470,0,0);
  return;
}



/* Entry: 101bf7470; end: 101bf7537;  */

void FUN_101bf7470(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000101bf6554(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000101bf74b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf7538; end: 101bf75af;  */

void FUN_101bf7538(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x260));
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101bf75ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101bf75b0; end: 101bf75b7;  */

void FUN_101bf75b0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101bf61c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101bf75b8; end: 101bf7637;  */

void FUN_101bf75b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08bb8,&UNK_10d9ddb50);
  puVar1 = &UNK_110455068;
  func_0x000107c613fc(&UNK_110455068,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101bf7638,puVar1);
  return;
}



/* Entry: 101bf7638; end: 101bf7673;  */

/* WARNING: Possible PIC construction at 0x000101bf7660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bf7664) */

void FUN_101bf7638(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110455128;
  param_1[4] = &PTR_DAT_110455080;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101bf7674; end: 101bf768f;  */

void FUN_101bf7674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7690,0,0);
  return;
}



/* Entry: 101bf7690; end: 101bf774b;  */

void FUN_101bf7690(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  puVar6 = (uint3 *)(unaff_x22 + 0x10);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83eb4();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bf774c;
                    /* WARNING: Could not recover jumptable at 0x000101bf7748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bf774c; end: 101bf77b7;  */

void FUN_101bf774c(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_101bf77b8;
  }
  else {
    pcVar1 = (code *)0x101bf8204;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf77b8; end: 101bf789f;  */

void FUN_101bf77b8(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar2 == '\x01') {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar3 = 0;
    func_0x000103a82768();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar6,1,1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bf7824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
  piVar5 = *(int **)(lVar3 + 0x38);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bf78a0;
                    /* WARNING: Could not recover jumptable at 0x000101bf789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar4,*(undefined8 *)(unaff_x22 + 0x60),6,uVar6,lVar3);
  return;
}



/* Entry: 101bf78a0; end: 101bf78fb;  */

void FUN_101bf78a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    uVar1 = 0x101bf81f8;
  }
  else {
    uVar1 = 0x101bf8208;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bf78fc; end: 101bf7917;  */

void FUN_101bf78fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7918,0,0);
  return;
}



/* Entry: 101bf7918; end: 101bf79d3;  */

void FUN_101bf7918(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  puVar6 = (uint3 *)(unaff_x22 + 0x10);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83eb4();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bf79d4;
                    /* WARNING: Could not recover jumptable at 0x000101bf79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bf79d4; end: 101bf7a3f;  */

void FUN_101bf79d4(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_101bf7a40;
  }
  else {
    pcVar1 = (code *)0x101bf7b84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf7a40; end: 101bf7b27;  */

void FUN_101bf7a40(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 *puVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x98);
  puVar5 = (undefined1 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  if (cVar4 == '\x01') {
    FUN_101be27fc();
    func_0x000107c613f8(&UNK_1106c6770,puVar5,0,0);
    *puVar5 = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bf7aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar7 = *(int **)(lVar3 + 0x40);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bf7b28;
                    /* WARNING: Could not recover jumptable at 0x000101bf7b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(*(undefined8 *)(unaff_x22 + 0x60),6,uVar2,lVar3);
  return;
}



/* Entry: 101bf7b28; end: 101bf7beb;  */

void FUN_101bf7b28(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    uVar1 = 0x101bf81fc;
  }
  else {
    uVar1 = 0x101bf7bb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bf7bec; end: 101bf7c03;  */

void FUN_101bf7bec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7c04,0,0);
  return;
}



/* Entry: 101bf7c04; end: 101bf7cbf;  */

void FUN_101bf7c04(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  puVar6 = (uint3 *)(unaff_x22 + 0x10);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83eb4();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bf7cc0;
                    /* WARNING: Could not recover jumptable at 0x000101bf7cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bf7cc0; end: 101bf7d2b;  */

void FUN_101bf7cc0(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_101bf7d2c;
  }
  else {
    pcVar1 = (code *)0x101bf7e9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf7d2c; end: 101bf7e0b;  */

void FUN_101bf7d2c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 *puVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x90);
  puVar5 = (undefined1 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  if (cVar4 == '\x01') {
    FUN_101be27fc();
    func_0x000107c613f8(&UNK_1106c6770,puVar5,0,0);
    *puVar5 = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bf7d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar7 = *(int **)(lVar3 + 0x48);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bf7e0c;
                    /* WARNING: Could not recover jumptable at 0x000101bf7e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(6,uVar2,lVar3);
  return;
}



/* Entry: 101bf7e0c; end: 101bf7f03;  */

void FUN_101bf7e0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    uVar1 = 0x101bf7e68;
  }
  else {
    uVar1 = 0x101bf7ed0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bf7f04; end: 101bf7f67;  */

void FUN_101bf7f04(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101bf81f0;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7690,0,0);
  return;
}



/* Entry: 101bf7f68; end: 101bf7fc7;  */

void FUN_101bf7f68(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101bf81f4;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7918,0,0);
  return;
}



/* Entry: 101bf7fc8; end: 101bf8017;  */

void FUN_101bf7fc8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bf8018;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf7c04,0,0);
  return;
}



/* Entry: 101bf8018; end: 101bf8053;  */

void FUN_101bf8018(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bf8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bf8054; end: 101bf8067;  */

undefined1  [16] FUN_101bf8054(void)

{
  return ZEXT816(0x1104550b0);
}



/* Entry: 101bf8068; end: 101bf80c3;  */

/* WARNING: Possible PIC construction at 0x000101bf807c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bf8080) */

void FUN_101bf8068(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}


