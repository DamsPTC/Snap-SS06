/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a129ea8; end: 10a129f07;  */

undefined8 * FUN_10a129ea8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129f08; end: 10a129f17;  */

ulong * FUN_10a129f08(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e260;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e260,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a129f18; end: 10a129f77;  */

undefined8 * FUN_10a129f18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129f78; end: 10a129f87;  */

ulong * FUN_10a129f78(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e27c;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e27c,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a129f88; end: 10a129fe7;  */

undefined8 * FUN_10a129f88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129fe8; end: 10a129ff7;  */

ulong * FUN_10a129fe8(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e28d;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e28d,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a129ff8; end: 10a12a057;  */

undefined8 * FUN_10a129ff8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a12a058; end: 10a12a067;  */

ulong * FUN_10a12a058(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e2a5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e2a5,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a12a068; end: 10a12a0c7;  */

undefined8 * FUN_10a12a068(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a12a0c8; end: 10a12a0d7;  */

ulong * FUN_10a12a0c8(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e2bb;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e2bb,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a12a0d8; end: 10a12a14f;  */

undefined8 * FUN_10a12a0d8(undefined8 *param_1)

{
  func_0x00010a12dfd4(param_1 + 5);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a12a150; end: 10a12a163;  */

ulong * FUN_10a12a150(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e2cc;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e2cc,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a12a164; end: 10a12a177;  */

void FUN_10a12a164(void)

{
  func_0x00010a13410c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12a178; end: 10a12a17f;  */

undefined8 FUN_10a12a178(void)

{
  return 1;
}



/* Entry: 10a12a180; end: 10a12a27f;  */

undefined8 * FUN_10a12a180(undefined8 *param_1)

{
  long lVar1;
  
  FUN_10a1449ec(param_1 + 0x17);
  func_0x00010a061678(param_1 + 0x15);
  func_0x00010a061678(param_1 + 0x13);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    param_1[0x11] = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    param_1[0xe] = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  *param_1 = &PTR_FUN_110ba6f08;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    param_1[6] = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 10a12a280; end: 10a12a28f;  */

bool FUN_10a12a280(long param_1)

{
  return *(long *)(param_1 + 0xb8) != 0;
}



/* Entry: 10a12a290; end: 10a12ac87;  */

void FUN_10a12a290(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = (undefined8 *)0xa8;
  __Znwm();
  *puVar5 = FUN_10a145798;
  puVar5[1] = FUN_10a145a20;
  func_0x0001092ba17c(puVar5 + 2);
  lVar9 = puVar5[7];
  if (lVar9 != 0) {
    plVar14 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = param_2[2];
  uVar17 = param_2[5];
  uVar16 = param_2[4];
  puVar5[10] = param_2[3];
  puVar5[9] = uVar10;
  *param_1 = lVar9;
  plVar14 = (long *)*param_2;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar5[0xc] = uVar17;
  puVar5[0xb] = uVar16;
  uVar10 = param_2[6];
  puVar5[0xe] = param_2[7];
  puVar5[0xd] = uVar10;
  param_2[6] = 0;
  param_2[7] = 0;
  puVar5[0xf] = param_2[8];
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    puVar5[0x10] = param_2[9];
    param_2[9] = 0;
    *(undefined1 *)(puVar5 + 0x11) = 1;
  }
  puVar6 = (undefined8 *)0x110;
  __Znwm();
  *puVar6 = FUN_10a1451e8;
  puVar6[1] = FUN_10a14561c;
  uVar10 = puVar5[9];
  puVar6[10] = puVar5[10];
  puVar6[9] = uVar10;
  puVar6[0x20] = plVar14;
  uVar10 = puVar5[0xb];
  puVar6[0xc] = puVar5[0xc];
  puVar6[0xb] = uVar10;
  uVar10 = puVar5[0xd];
  puVar6[0xe] = puVar5[0xe];
  puVar6[0xd] = uVar10;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar6[0xf] = puVar5[0xf];
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  if (*(char *)(puVar5 + 0x11) == '\x01') {
    puVar6[0x1a] = puVar5[0x10];
    puVar5[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
  }
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar15 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0x13] = lVar9;
  *(undefined1 *)((long)puVar6 + 0x109) = 1;
  puVar6[0x1c] = (long)puVar6 + 0x109;
  puVar6[0x1d] = plVar14;
  puVar6[0x11] = puVar6[10];
  puVar6[0x10] = puVar6[9];
  puVar6[0x13] = puVar6[0xc];
  puVar6[0x12] = puVar6[0xb];
  puVar6[0x15] = puVar6[0xe];
  puVar6[0x14] = puVar6[0xd];
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0x16] = puVar6[0xf];
  (**(code **)(*plVar14 + 0x48))(puVar6 + 0x1f,plVar14,puVar6 + 0x10);
  puVar6[0x1e] = puVar6[0x1f];
  plVar14 = (long *)(puVar6[0x1f] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = *plVar14 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x1e] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x21) = 0;
    lVar9 = puVar6[0x1e];
    plVar14 = (long *)(lVar9 + 0x10);
    uVar10 = puVar6[3];
    do {
      lVar12 = *plVar14;
      if (lVar12 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puStack_68 = (undefined8 *)0x0;
          puStack_60 = puVar6;
          uStack_58 = uVar10;
          func_0x000109d1b588(lVar9 + 0x18,&puStack_68);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          goto LAB_10a12a6c4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  plVar14 = (long *)puVar6[0x1e];
  if (((uint)*(undefined8 *)(puVar6[0x1e] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar14 + 0x16) & 1) != 0) {
      puVar6[0x17] = plVar14[0x13];
      puVar6[0x18] = plVar14[0x14];
      plVar14[0x14] = 0;
      puVar6[0x19] = plVar14[0x15];
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      plVar14 = (long *)puVar6[0x1f];
      if (plVar14 != (long *)0x0) {
        puVar1 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
      }
      if (puVar6[0x13] != 0) {
        puVar6[0x14] = puVar6[0x13];
        __ZdlPv();
      }
      func_0x000109a18110(puVar6 + 0x11);
      if ((*(char *)(puVar6 + 0x1b) == '\x01') &&
         (((uint)*(undefined8 *)(puVar6[0x1a] + 0x10) >> 1 & 1) != 0)) {
        func_0x0001092ba100(puVar6 + 2);
        func_0x000109a18054(puVar6 + 0x17);
        iVar13 = 3;
      }
      else {
        for (plVar14 = *(long **)(puVar6[0x20] + 0x80); plVar14 != (long *)0x0;
            plVar14 = (long *)*plVar14) {
          plVar15 = (long *)plVar14[5];
          uVar10 = puVar6[0x19];
          FUN_10a12ac88(uVar10,plVar14 + 2);
          puVar8 = (undefined8 *)(long)(int)uVar10;
          puVar7 = puVar6 + 0x17;
          func_0x000109a180d0();
          puStack_68 = puVar7;
          puStack_60 = puVar8;
          (**(code **)(*plVar15 + 0x48))(plVar15,&puStack_68);
        }
        func_0x000109a18054(puVar6 + 0x17);
        iVar13 = 0;
      }
      FUN_10a10eb5c(puVar6 + 0x1c);
      if (iVar13 == 0) {
        func_0x0001092ba100(puVar6 + 2);
      }
      func_0x000109d1a1d0(puVar6 + 2);
      if ((*(char *)(puVar6 + 0x1b) == '\x01') &&
         (plVar14 = (long *)puVar6[0x1a], plVar14 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (puVar6[0xc] != 0) {
        puVar6[0xd] = puVar6[0xc];
        __ZdlPv();
      }
      func_0x000109a18110(puVar6 + 10);
      __ZdlPv(puVar6);
LAB_10a12a6c4:
      puVar5[0x12] = puVar5[0x13];
      plVar14 = (long *)(puVar5[0x13] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar5[0x12] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x14) = 0;
        lVar9 = puVar5[0x12];
        plVar14 = (long *)(lVar9 + 0x10);
        uVar10 = puVar5[3];
        do {
          lVar12 = *plVar14;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              puStack_68 = (undefined8 *)0x0;
              puStack_60 = puVar5;
              uStack_58 = uVar10;
              func_0x000109d1b588(lVar9 + 0x18,&puStack_68);
              *(undefined8 *)(lVar9 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
      }
      plVar14 = (long *)puVar5[0x12];
      if (((uint)*(undefined8 *)(puVar5[0x12] + 0x10) >> 5 & 1) == 0) {
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        plVar14 = (long *)puVar5[0x13];
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        if ((*(char *)(puVar5 + 0x11) == '\x01') &&
           (plVar14 = (long *)puVar5[0x10], plVar14 != (long *)0x0)) {
          puVar1 = (ulong *)(plVar14 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
        }
        if (puVar5[0xc] != 0) {
          puVar5[0xd] = puVar5[0xc];
          __ZdlPv();
        }
        func_0x000109a18110(puVar5 + 10);
        func_0x0001092ba100(puVar5 + 2);
        func_0x000109d1a1d0(puVar5 + 2);
        __ZdlPv(puVar5);
        return;
      }
      func_0x0001092af97c(plVar14 + 0x12);
    }
  }
  else {
    func_0x0001092af97c(plVar14 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a12a8bc);
  (*pcVar4)();
}



/* Entry: 10a12ac88; end: 10a12acaf;  */

undefined * FUN_10a12ac88(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  
  func_0x0001094ccb54();
  if (param_1 != 0) {
    return (undefined *)(ulong)*(uint *)(param_1 + 0x28);
  }
  puVar6 = &UNK_10f639994;
  FUN_109ffdddc();
  puVar7 = puVar6;
  if (param_4 != 0) {
    FUN_10a12ad54();
    plVar8 = *(long **)(puVar6 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar3 = param_2[1];
      lVar2 = 0;
      if (*param_2 != 0) {
        lVar2 = *param_2 + 0x18;
      }
      *plVar8 = lVar2;
      plVar8[1] = lVar3;
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar8 = plVar8 + 2;
    }
    *(long **)(puVar6 + 8) = plVar8;
  }
  return puVar7;
}



/* Entry: 10a12acb0; end: 10a12ad53;  */

void FUN_10a12acb0(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  
  if (param_4 != 0) {
    FUN_10a12ad54(param_1,param_4);
    plVar6 = *(long **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar3 = param_2[1];
      lVar2 = 0;
      if (*param_2 != 0) {
        lVar2 = *param_2 + 0x18;
      }
      *plVar6 = lVar2;
      plVar6[1] = lVar3;
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar6 = plVar6 + 2;
    }
    *(long **)(param_1 + 8) = plVar6;
  }
  return;
}



/* Entry: 10a12ad54; end: 10a12ad8b;  */

undefined1  [16] FUN_10a12ad54(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined4 uVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  int iStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  ulong uStack_190;
  undefined4 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_a8;
  
  if (param_2 >> 0x3c == 0) {
    plVar5 = param_1;
    FUN_10a12ada0();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_2 * 2);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = plVar5;
    return auVar14;
  }
  FUN_10a12ad8c();
  puVar6 = (uint *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar7 = param_2 << 4;
    __Znwm(lVar7);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar7;
    return auVar15;
  }
  func_0x000109ffded8();
  uVar11 = (undefined4)param_2;
  puVar12 = &uStack_1d0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (ulong)puVar6[5];
  FUN_10a12af1c();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar13 = *(undefined8 *)(puVar6 + 2);
  pppuVar10 = *(undefined8 ****)(puVar6 + 6);
  uVar3 = *(ulong *)(puVar6 + 8);
  uStack_e0 = SUB84(&uStack_190,0);
  uStack_190 = uVar8;
  uStack_188 = uVar11;
  func_0x0001096f1ebc();
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  uStack_f8 = 1;
  uStack_104 = uVar1;
  uStack_100 = uVar2;
  uStack_f0 = uVar1;
  uStack_ec = uVar2;
  uStack_e8 = uVar13;
  if (uVar3 == 0) {
    puVar12 = &uStack_110;
    FUN_10a12affc(extraout_x8,pppuVar10,puVar12);
  }
  else {
    iVar4 = (int)&uStack_190;
    func_0x0001096f1ebc();
    uStack_1a8 = CONCAT44(uStack_ec,uStack_f0);
    uStack_1a0 = uStack_e8;
    uStack_198 = uStack_e0;
    uStack_1c8 = uVar1 >> 1;
    uStack_1c4 = uVar2 >> 1;
    iStack_1b8 = iVar4 << 1;
    uStack_178 = CONCAT44(uStack_104,uStack_108);
    uStack_180 = uStack_110;
    uStack_170 = uStack_100;
    uStack_168 = 1;
    uStack_160 = CONCAT44(uStack_ec,uStack_f0);
    uStack_158 = uStack_e8;
    uStack_150 = CONCAT44(uStack_dc,uStack_e0);
    pppuVar9 = &ppuStack_1b0;
    uStack_1d0 = uVar3;
    uStack_1c0 = uVar13;
    ppuStack_1b0 = pppuVar10;
    FUN_10a12af50(extraout_x8,pppuVar9,&uStack_1d0,&uStack_180);
    pppuVar10 = pppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar16._8_8_ = puVar12;
    auVar16._0_8_ = pppuVar10;
    return auVar16;
  }
  ___stack_chk_fail();
  if ((uint)pppuVar10 < 0x17) {
    auVar17._0_8_ = *(undefined8 *)(&UNK_10e498dd0 + ((ulong)pppuVar10 & 0xffffffff) * 8);
    auVar17._8_8_ = *(undefined8 *)(&UNK_10e498e88 + ((ulong)pppuVar10 & 0xffffffff) * 8);
    return auVar17;
  }
  return ZEXT816(0);
}



/* Entry: 10a12ad8c; end: 10a12ad9f;  */

undefined1  [16] FUN_10a12ad8c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined4 uVar10;
  ulong *puVar11;
  undefined8 extraout_x8;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  int iStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  ulong uStack_170;
  undefined4 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_88;
  
  puVar5 = (uint *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar6 = param_2 << 4;
    __Znwm(lVar6);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar6;
    return auVar13;
  }
  func_0x000109ffded8();
  uVar10 = (undefined4)param_2;
  puVar11 = &uStack_1b0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)puVar5[5];
  FUN_10a12af1c();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar12 = *(undefined8 *)(puVar5 + 2);
  pppuVar9 = *(undefined8 ****)(puVar5 + 6);
  uVar3 = *(ulong *)(puVar5 + 8);
  uStack_c0 = SUB84(&uStack_170,0);
  uStack_170 = uVar7;
  uStack_168 = uVar10;
  func_0x0001096f1ebc();
  uStack_f0 = uStack_170;
  uStack_e8 = uStack_168;
  uStack_d8 = 1;
  uStack_e4 = uVar1;
  uStack_e0 = uVar2;
  uStack_d0 = uVar1;
  uStack_cc = uVar2;
  uStack_c8 = uVar12;
  if (uVar3 == 0) {
    puVar11 = &uStack_f0;
    FUN_10a12affc(extraout_x8,pppuVar9,puVar11);
  }
  else {
    iVar4 = (int)&uStack_170;
    func_0x0001096f1ebc();
    uStack_188 = CONCAT44(uStack_cc,uStack_d0);
    uStack_180 = uStack_c8;
    uStack_178 = uStack_c0;
    uStack_1a8 = uVar1 >> 1;
    uStack_1a4 = uVar2 >> 1;
    iStack_198 = iVar4 << 1;
    uStack_158 = CONCAT44(uStack_e4,uStack_e8);
    uStack_160 = uStack_f0;
    uStack_150 = uStack_e0;
    uStack_148 = 1;
    uStack_140 = CONCAT44(uStack_cc,uStack_d0);
    uStack_138 = uStack_c8;
    uStack_130 = CONCAT44(uStack_bc,uStack_c0);
    pppuVar8 = &ppuStack_190;
    uStack_1b0 = uVar3;
    uStack_1a0 = uVar12;
    ppuStack_190 = pppuVar9;
    FUN_10a12af50(extraout_x8,pppuVar8,&uStack_1b0,&uStack_160);
    pppuVar9 = pppuVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar14._8_8_ = puVar11;
    auVar14._0_8_ = pppuVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((uint)pppuVar9 < 0x17) {
    auVar15._0_8_ = *(undefined8 *)(&UNK_10e498dd0 + ((ulong)pppuVar9 & 0xffffffff) * 8);
    auVar15._8_8_ = *(undefined8 *)(&UNK_10e498e88 + ((ulong)pppuVar9 & 0xffffffff) * 8);
    return auVar15;
  }
  return ZEXT816(0);
}



/* Entry: 10a12ada0; end: 10a12add3;  */

undefined1  [16] FUN_10a12ada0(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined4 uVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined8 uStack_190;
  int iStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  ulong uStack_160;
  undefined4 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_78;
  
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar5;
    return auVar12;
  }
  func_0x000109ffded8();
  uVar9 = (undefined4)param_2;
  puVar10 = &uStack_1a0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (ulong)param_1[5];
  FUN_10a12af1c();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar11 = *(undefined8 *)(param_1 + 2);
  pppuVar8 = *(undefined8 ****)(param_1 + 6);
  uVar3 = *(ulong *)(param_1 + 8);
  uStack_b0 = SUB84(&uStack_160,0);
  uStack_160 = uVar6;
  uStack_158 = uVar9;
  func_0x0001096f1ebc();
  uStack_e0 = uStack_160;
  uStack_d8 = uStack_158;
  uStack_c8 = 1;
  uStack_d4 = uVar1;
  uStack_d0 = uVar2;
  uStack_c0 = uVar1;
  uStack_bc = uVar2;
  uStack_b8 = uVar11;
  if (uVar3 == 0) {
    puVar10 = &uStack_e0;
    FUN_10a12affc(extraout_x8,pppuVar8,puVar10);
  }
  else {
    iVar4 = (int)&uStack_160;
    func_0x0001096f1ebc();
    uStack_178 = CONCAT44(uStack_bc,uStack_c0);
    uStack_170 = uStack_b8;
    uStack_168 = uStack_b0;
    uStack_198 = uVar1 >> 1;
    uStack_194 = uVar2 >> 1;
    iStack_188 = iVar4 << 1;
    uStack_148 = CONCAT44(uStack_d4,uStack_d8);
    uStack_150 = uStack_e0;
    uStack_140 = uStack_d0;
    uStack_138 = 1;
    uStack_130 = CONCAT44(uStack_bc,uStack_c0);
    uStack_128 = uStack_b8;
    uStack_120 = CONCAT44(uStack_ac,uStack_b0);
    pppuVar7 = &ppuStack_180;
    uStack_1a0 = uVar3;
    uStack_190 = uVar11;
    ppuStack_180 = pppuVar8;
    FUN_10a12af50(extraout_x8,pppuVar7,&uStack_1a0,&uStack_150);
    pppuVar8 = pppuVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar13._8_8_ = puVar10;
    auVar13._0_8_ = pppuVar8;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((uint)pppuVar8 < 0x17) {
    auVar14._0_8_ = *(undefined8 *)(&UNK_10e498dd0 + ((ulong)pppuVar8 & 0xffffffff) * 8);
    auVar14._8_8_ = *(undefined8 *)(&UNK_10e498e88 + ((ulong)pppuVar8 & 0xffffffff) * 8);
    return auVar14;
  }
  return ZEXT816(0);
}



/* Entry: 10a12add4; end: 10a12af1b;  */

undefined1  [16] FUN_10a12add4(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uStack_180;
  uint uStack_178;
  uint uStack_174;
  undefined8 uStack_170;
  int iStack_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  ulong uStack_140;
  undefined4 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_58;
  
  puVar8 = &uStack_180;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)param_2[5];
  uStack_138 = param_3;
  FUN_10a12af1c();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar9 = *(undefined8 *)(param_2 + 2);
  pppuVar7 = *(undefined8 ****)(param_2 + 6);
  uVar3 = *(ulong *)(param_2 + 8);
  uStack_90 = SUB84(&uStack_140,0);
  uStack_140 = uVar5;
  func_0x0001096f1ebc();
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_a8 = 1;
  uStack_b4 = uVar1;
  uStack_b0 = uVar2;
  uStack_a0 = uVar1;
  uStack_9c = uVar2;
  uStack_98 = uVar9;
  if (uVar3 == 0) {
    puVar8 = &uStack_c0;
    FUN_10a12affc(param_1,pppuVar7,puVar8);
  }
  else {
    iVar4 = (int)&uStack_140;
    func_0x0001096f1ebc();
    uStack_158 = CONCAT44(uStack_9c,uStack_a0);
    uStack_150 = uStack_98;
    uStack_148 = uStack_90;
    uStack_178 = uVar1 >> 1;
    uStack_174 = uVar2 >> 1;
    iStack_168 = iVar4 << 1;
    uStack_128 = CONCAT44(uStack_b4,uStack_b8);
    uStack_130 = uStack_c0;
    uStack_120 = uStack_b0;
    uStack_118 = 1;
    uStack_110 = CONCAT44(uStack_9c,uStack_a0);
    uStack_108 = uStack_98;
    uStack_100 = CONCAT44(uStack_8c,uStack_90);
    pppuVar6 = &ppuStack_160;
    uStack_180 = uVar3;
    uStack_170 = uVar9;
    ppuStack_160 = pppuVar7;
    FUN_10a12af50(param_1,pppuVar6,&uStack_180,&uStack_130);
    pppuVar7 = pppuVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar10._8_8_ = puVar8;
    auVar10._0_8_ = pppuVar7;
    return auVar10;
  }
  ___stack_chk_fail();
  if ((uint)pppuVar7 < 0x17) {
    auVar11._0_8_ = *(undefined8 *)(&UNK_10e498dd0 + ((ulong)pppuVar7 & 0xffffffff) * 8);
    auVar11._8_8_ = *(undefined8 *)(&UNK_10e498e88 + ((ulong)pppuVar7 & 0xffffffff) * 8);
    return auVar11;
  }
  return ZEXT816(0);
}



/* Entry: 10a12af1c; end: 10a12af4f;  */

undefined1  [16] FUN_10a12af1c(uint param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 0x17) {
    auVar1._0_8_ = *(undefined8 *)(&UNK_10e498dd0 + (ulong)param_1 * 8);
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e498e88 + (ulong)param_1 * 8);
    return auVar1;
  }
  return ZEXT816(0);
}



/* Entry: 10a12af50; end: 10a12affb;  */

void FUN_10a12af50(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [72];
  long lStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  puVar2 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  lStack_88 = param_4[1];
  lStack_90 = *param_4;
  uStack_80 = (undefined4)param_4[2];
  lStack_78 = param_4[3];
  if (lStack_78 != 0) {
    _memcpy(auStack_70,param_4 + 4,lStack_78 * 0x18);
  }
  plVar4 = &lStack_90;
  FUN_10a12b0a0(param_1,&uStack_d0,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_160;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = puVar2[1];
  uStack_160 = *puVar2;
  uStack_150 = *(undefined4 *)(puVar2 + 2);
  lStack_148 = puVar2[3];
  if (lStack_148 != 0) {
    _memcpy(auStack_140,puVar2 + 4,lStack_148 * 0x18);
  }
  plVar1 = extraout_x8;
  FUN_10a12b11c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_1 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *plVar1 = 0;
  lVar7 = plVar4[1];
  lVar5 = *plVar4;
  *(int *)(plVar1 + 0xf) = (int)plVar4[2];
  plVar1[0xe] = lVar7;
  plVar1[0xd] = lVar5;
  plVar1[0x10] = 0;
  lVar5 = plVar4[3];
  plVar1[0x10] = lVar5;
  if (lVar5 != 0) {
    plVar4 = plVar4 + 4;
    plVar6 = plVar1 + 0x11;
    do {
      lVar8 = plVar4[1];
      lVar7 = *plVar4;
      plVar6[2] = plVar4[2];
      plVar6[1] = lVar8;
      *plVar6 = lVar7;
      plVar4 = plVar4 + 3;
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 3;
    } while (lVar5 != 0);
  }
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = *plVar1;
    lVar7 = (long)puVar3 << 5;
    do {
      plVar4 = plVar1 + lVar5 * 4 + 1;
      lVar5 = *param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      plVar4[1] = param_1[1];
      *plVar4 = lVar5;
      plVar4[3] = lVar9;
      plVar4[2] = lVar8;
      lVar5 = *plVar1 + 1;
      *plVar1 = lVar5;
      lVar7 = lVar7 + -0x20;
      param_1 = param_1 + 4;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 10a12affc; end: 10a12b09f;  */

void FUN_10a12affc(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  puVar1 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_80 = *(undefined4 *)(param_3 + 2);
  lStack_78 = param_3[3];
  if (lStack_78 != 0) {
    _memcpy(auStack_70,param_3 + 4,lStack_78 * 0x18);
  }
  FUN_10a12b11c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = 0;
  lVar4 = param_5[1];
  lVar2 = *param_5;
  *(int *)(param_1 + 0xf) = (int)param_5[2];
  param_1[0xe] = lVar4;
  param_1[0xd] = lVar2;
  param_1[0x10] = 0;
  lVar2 = param_5[3];
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    param_5 = param_5 + 4;
    plVar3 = param_1 + 0x11;
    do {
      lVar5 = param_5[1];
      lVar4 = *param_5;
      plVar3[2] = param_5[2];
      plVar3[1] = lVar5;
      *plVar3 = lVar4;
      param_5 = param_5 + 3;
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *param_1;
    lVar4 = (long)puVar1 << 5;
    do {
      plVar3 = param_1 + lVar2 * 4 + 1;
      lVar2 = *param_2;
      lVar6 = param_2[3];
      lVar5 = param_2[2];
      plVar3[1] = param_2[1];
      *plVar3 = lVar2;
      plVar3[3] = lVar6;
      plVar3[2] = lVar5;
      lVar2 = *param_1 + 1;
      *param_1 = lVar2;
      lVar4 = lVar4 + -0x20;
      param_2 = param_2 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a12b0a0; end: 10a12b11b;  */

void FUN_10a12b0a0(long *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  lVar3 = param_4[1];
  lVar1 = *param_4;
  *(int *)(param_1 + 0xf) = (int)param_4[2];
  param_1[0xe] = lVar3;
  param_1[0xd] = lVar1;
  param_1[0x10] = 0;
  lVar1 = param_4[3];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    param_4 = param_4 + 4;
    plVar2 = param_1 + 0x11;
    do {
      lVar4 = param_4[1];
      lVar3 = *param_4;
      plVar2[2] = param_4[2];
      plVar2[1] = lVar4;
      *plVar2 = lVar3;
      param_4 = param_4 + 3;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  if (param_3 != 0) {
    lVar1 = *param_1;
    param_3 = param_3 << 5;
    do {
      plVar2 = param_1 + lVar1 * 4 + 1;
      lVar1 = *param_2;
      lVar4 = param_2[3];
      lVar3 = param_2[2];
      plVar2[1] = param_2[1];
      *plVar2 = lVar1;
      plVar2[3] = lVar4;
      plVar2[2] = lVar3;
      lVar1 = *param_1 + 1;
      *param_1 = lVar1;
      param_3 = param_3 + -0x20;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a12b11c; end: 10a12b35b;  */

uint * FUN_10a12b11c(uint *param_1,long param_2,long *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_88;
  uint uStack_80;
  uint uStack_7c;
  ulong uStack_78;
  uint auStack_70 [2];
  uint uStack_68;
  uint uStack_64;
  ulong uStack_60;
  undefined4 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  ulong uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0] = 0;
  param_1[1] = 0;
  lVar10 = param_3[1];
  lVar8 = *param_3;
  param_1[0x1e] = *(uint *)(param_3 + 2);
  *(long *)(param_1 + 0x1c) = lVar10;
  *(long *)(param_1 + 0x1a) = lVar8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar8 = param_3[3];
  *(long *)(param_1 + 0x20) = lVar8;
  if (lVar8 != 0) {
    param_3 = param_3 + 4;
    puVar7 = param_1 + 0x22;
    do {
      lVar12 = param_3[1];
      lVar10 = *param_3;
      *(long *)(puVar7 + 4) = param_3[2];
      *(long *)(puVar7 + 2) = lVar12;
      *(long *)puVar7 = lVar10;
      param_3 = param_3 + 3;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 6;
    } while (lVar8 != 0);
    uStack_88 = *(long *)(param_1 + 0x20);
    if (uStack_88 != 0) {
      lVar8 = uStack_88 * 0x18;
      puVar7 = &uStack_80;
      _memcpy(puVar7,param_1 + 0x22,lVar8);
      goto LAB_10a12b2b4;
    }
  }
  uVar3 = param_1[0x1d];
  uVar4 = (ulong)uVar3;
  uVar5 = param_1[0x1e];
  bVar6 = (byte)param_1[0x1a];
  puVar7 = param_1;
  if (bVar6 - 0x24 < 2) {
    uStack_80 = uVar3;
    uStack_7c = uVar5;
    uStack_78 = uVar4;
    uStack_68 = uVar3 >> 1;
    auStack_70[0] = 1;
    uStack_64 = uVar5 >> 1;
    uStack_60 = (ulong)uStack_68;
    uStack_58 = 1;
    uStack_50 = uStack_68;
    uStack_4c = uVar5 >> 1;
    uStack_48 = (ulong)uStack_68;
    uStack_40 = 1;
    uStack_88 = 3;
    lVar8 = 0x48;
  }
  else {
    if (bVar6 == 0x26) {
      uStack_80 = uVar3;
      uStack_7c = uVar5;
      uStack_78 = uVar4 << 1;
      auStack_70[0] = 2;
      uStack_68 = uVar3 >> 1;
      uStack_64 = uVar5 >> 1;
      uStack_60 = uVar4 << 1;
      uStack_58 = 4;
      lVar8 = 0x30;
      uStack_88 = 2;
      goto LAB_10a12b2b4;
    }
    if (bVar6 != 0x23) {
      puVar7 = param_1 + 0x1a;
      func_0x0001096f1ebc();
      auStack_70[0] = (uint)puVar7;
      if (auStack_70[0] < 2) {
        auStack_70[0] = 1;
      }
      uStack_80 = uVar3;
      uStack_7c = uVar5;
      uStack_78 = uVar4 * auStack_70[0];
      uStack_88 = 1;
      lVar8 = 0x18;
      goto LAB_10a12b2b4;
    }
    uStack_80 = uVar3;
    uStack_7c = uVar5;
    uStack_78 = uVar4;
    auStack_70[0] = 1;
    uStack_68 = uVar3 >> 1;
    uStack_64 = uVar5 >> 1;
    uStack_60 = uVar4;
    uStack_88 = 2;
    uStack_58 = 2;
    lVar8 = 0x30;
  }
  auStack_70[0] = 1;
  uStack_80 = uVar3;
  uStack_7c = uVar5;
  uStack_78 = uVar4;
LAB_10a12b2b4:
  lVar9 = 0;
  lVar10 = *(long *)param_1;
  lVar12 = 8;
  do {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = param_2 + lVar9;
    }
    puVar1 = param_1 + (lVar10 * 4 + 1) * 2;
    *(long *)puVar1 = lVar2;
    puVar1[6] = *(uint *)((long)auStack_70 + lVar12 + -8);
    lVar10 = *(long *)((long)&uStack_88 + lVar12);
    *(long *)(puVar1 + 4) = *(long *)((long)&uStack_80 + lVar12);
    *(long *)(puVar1 + 2) = lVar10;
    lVar10 = *(long *)param_1 + 1;
    *(long *)param_1 = lVar10;
    lVar11 = *(long *)((long)&uStack_80 + lVar12);
    lVar2 = -lVar11;
    if (-1 < lVar11) {
      lVar2 = lVar11;
    }
    lVar9 = lVar9 + lVar2 * (ulong)*(uint *)((long)&uStack_88 + lVar12 + 4);
    lVar2 = (long)auStack_70 + lVar12;
    lVar12 = lVar12 + 0x18;
  } while (lVar2 != (long)&uStack_80 + lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return puVar7;
}



/* Entry: 10a12b35c; end: 10a12b3c7;  */

void FUN_10a12b35c(void)

{
  return;
}



/* Entry: 10a12b3c8; end: 10a12b3e7;  */

void FUN_10a12b3c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba6ac0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12b3e8; end: 10a12b427;  */

void FUN_10a12b3e8(long param_1)

{
  func_0x0001096f2328(param_1 + 0x18);
  (*(code *)**(undefined8 **)(param_1 + 200))();
                    /* WARNING: Could not recover jumptable at 0x00010a12b424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x88))((undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 10a12b428; end: 10a12b42b;  */

void FUN_10a12b428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12b42c; end: 10a12b453;  */

void FUN_10a12b42c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_109ffde64(&UNK_10f63e073);
  plVar3 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  puVar6 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar5 = puVar6;
  puVar7 = puVar1;
  if (puVar2 != puVar6) {
    do {
      *puVar7 = *puVar5;
      (**(code **)(puVar5[1] + 0x10))(puVar7 + 1,puVar5 + 1);
      puVar5 = puVar5 + 8;
      puVar7 = puVar7 + 8;
    } while (puVar5 != puVar2);
    puVar6 = puVar6 + 1;
    do {
      puVar5 = puVar6 + 7;
      (**(code **)*puVar6)(puVar6);
      puVar6 = puVar6 + 8;
    } while (puVar5 != puVar2);
    puVar6 = (undefined8 *)*plVar3;
  }
  param_2[1] = puVar1;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar6;
  param_2[1] = puVar6;
  lVar4 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a12b454; end: 10a12b537;  */

void FUN_10a12b454(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar4 = puVar5;
  puVar6 = puVar1;
  if (puVar2 != puVar5) {
    do {
      *puVar6 = *puVar4;
      (**(code **)(puVar4[1] + 0x10))(puVar6 + 1,puVar4 + 1);
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    puVar5 = puVar5 + 1;
    do {
      puVar4 = puVar5 + 7;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar4 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a12b538; end: 10a12b5bf;  */

undefined1  [16] FUN_10a12b538(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3a == 0) {
    lVar1 = (long)param_1 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a12b5c0; end: 10a12b637;  */

void FUN_10a12b5c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a12b638; end: 10a12b677;  */

void FUN_10a12b638(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a12c0d8(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a12b678; end: 10a12bf2b;  */

void FUN_10a12b678(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)0x90;
  __Znwm();
  *plVar8 = (long)FUN_10a146c38;
  plVar8[1] = (long)FUN_10a146ee8;
  plVar8[0xf] = (long)param_2;
  FUN_10a12bf2c(plVar8 + 2);
  lVar11 = plVar8[7];
  if (lVar11 != 0) {
    plVar9 = (long *)(lVar11 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar11;
  plVar9 = *(long **)(*(long *)(*param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar9 + 0x148))();
  puVar14 = (undefined8 *)*plVar9;
  lVar11 = plVar9[1];
  plVar8[0x10] = lVar11;
  if (lVar11 == 0) {
    plVar8[9] = 0;
    plVar8[10] = 0;
  }
  else {
    plVar9 = (long *)(lVar11 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar8[9] = 0;
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar8[10] = lVar11;
    if ((lVar11 != 0) && (plVar8[9] = (long)puVar14, puVar14 != (undefined8 *)0x0)) {
      uVar3 = *(undefined8 *)param_2[4];
      uVar4 = ((undefined8 *)param_2[4])[1];
      puVar14 = (undefined8 *)*puVar14;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        func_0x000107c3192c(&pcStack_d0,param_2[1],param_2[2]);
      }
      else {
        plStack_c8 = (long *)param_2[2];
        pcStack_d0 = (code *)param_2[1];
        puStack_c0 = (undefined8 *)param_2[3];
      }
      plVar9 = (long *)puVar14[2];
      plStack_98 = (long *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uStack_b8 = uVar3;
      uStack_b0 = uVar4;
      if (plVar9 == (long *)0x0) {
        if ((long)puStack_c0 < 0) {
          func_0x000107c3192c(&pcStack_80,pcStack_d0,plStack_c8);
        }
        else {
          plStack_78 = plStack_c8;
          pcStack_80 = pcStack_d0;
          puStack_70 = puStack_c0;
        }
        uStack_60 = uStack_b0;
        uStack_68 = uStack_b8;
        puVar10 = (undefined8 *)0xf0;
        __Znwm();
        *(undefined2 *)(puVar10 + 3) = 4;
        puVar10[2] = 0;
        puVar10[1] = 0x200000006;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = puVar10 + 3;
        puVar10[0x12] = 0;
        *(undefined1 *)(puVar10 + 0x13) = 0;
        *(undefined1 *)(puVar10 + 0x15) = 0;
        *puVar10 = &PTR_DAT_110ba6bb8;
        plVar9 = puVar10 + 0x16;
        if ((long)puStack_70 < 0) {
          func_0x000107c3192c(plVar9,pcStack_80,plStack_78);
        }
        else {
          puVar10[0x17] = plStack_78;
          *plVar9 = (long)pcStack_80;
          puVar10[0x18] = puStack_70;
        }
        puVar10[0x1a] = uStack_60;
        puVar10[0x19] = uStack_68;
        *(undefined1 *)(puVar10 + 0x1c) = 1;
        puVar10[0x1d] = 0;
        if (plStack_98 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_98 + 1);
          do {
            uVar12 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar12 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar12 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plStack_98 + 8))();
            }
          }
        }
        plStack_98 = puVar10;
        if (puStack_90 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_90);
        }
        plStack_a0 = plVar9;
        puStack_90 = puVar10;
        if ((long)puStack_70 < 0) {
          __ZdlPv(pcStack_80);
        }
        pcStack_88 = FUN_10a12cc6c;
      }
      else {
        lStack_a8 = 0;
        (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_a8);
        if (lStack_a8 != 0) {
          func_0x0001092af97c(&lStack_a8);
          goto LAB_10a12bd9c;
        }
        if ((long)puStack_c0 < 0) {
          func_0x000107c3192c(&pcStack_80,pcStack_d0,plStack_c8);
        }
        else {
          plStack_78 = plStack_c8;
          pcStack_80 = pcStack_d0;
          puStack_70 = puStack_c0;
        }
        uStack_60 = uStack_b0;
        uStack_68 = uStack_b8;
        puVar10 = (undefined8 *)0xf8;
        __Znwm();
        *(undefined2 *)(puVar10 + 3) = 4;
        puVar10[2] = 0;
        puVar10[1] = 0x200000006;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = puVar10 + 3;
        puVar10[0x12] = 0;
        *(undefined1 *)(puVar10 + 0x13) = 0;
        *(undefined1 *)(puVar10 + 0x15) = 0;
        *puVar10 = &PTR_FUN_110ba6b48;
        plVar2 = puVar10 + 0x16;
        if ((long)puStack_70 < 0) {
          func_0x000107c3192c(plVar2,pcStack_80,plStack_78);
        }
        else {
          puVar10[0x17] = plStack_78;
          *plVar2 = (long)pcStack_80;
          puVar10[0x18] = puStack_70;
        }
        puVar10[0x1a] = uStack_60;
        puVar10[0x19] = uStack_68;
        *(undefined1 *)(puVar10 + 0x1c) = 1;
        puVar10[0x1d] = 0;
        puVar10[0x1e] = plVar9;
        if (plStack_98 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_98 + 1);
          do {
            uVar12 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar12 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar12 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plStack_98 + 8))();
            }
          }
        }
        plStack_98 = puVar10;
        if (puStack_90 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_90);
        }
        plStack_a0 = plVar2;
        puStack_90 = puVar10;
        if ((long)puStack_70 < 0) {
          __ZdlPv(pcStack_80);
        }
        pcStack_88 = (code *)0x10a12cc3c;
        __ZNSt13exception_ptrD1Ev(&lStack_a8);
      }
      plVar9 = plStack_a0;
      if (plStack_a0[7] != 0) {
        func_0x0001092b4274();
      }
      plVar9[7] = (long)puStack_90;
      puStack_90 = (undefined8 *)0x0;
      pcStack_80 = pcStack_88;
      plStack_78 = plStack_a0;
      puStack_70 = puVar14;
      (**(code **)*puVar14)(puVar14,&pcStack_80);
      plVar8[0xe] = (long)plStack_98;
      plStack_98 = (long *)0x0;
      if ((puStack_90 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_90), plStack_98 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar12 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      if ((long)puStack_c0 < 0) {
        __ZdlPv(pcStack_d0);
      }
      plVar8[0xd] = plVar8[0xe];
      plVar9 = (long *)(plVar8[0xe] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((uint)*(undefined8 *)(plVar8[0xd] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(plVar8 + 0x11) = 0;
        lVar11 = plVar8[0xd];
        plVar9 = (long *)(lVar11 + 0x10);
        puVar14 = (undefined8 *)plVar8[3];
        do {
          lVar13 = *plVar9;
          if (lVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              pcStack_80 = (code *)0x0;
              plVar9 = (long *)(lVar11 + 0x18);
              plStack_78 = plVar8;
              puStack_70 = puVar14;
              func_0x000109d1b588(plVar9,&pcStack_80);
              *(undefined8 *)(lVar11 + 0x10) = 0;
              goto LAB_10a12bd40;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar13 >> 1 & 1) == 0);
      }
      plVar9 = (long *)plVar8[0xd];
      if (((uint)*(undefined8 *)(plVar8[0xd] + 0x10) >> 5 & 1) == 0) {
        if ((*(byte *)(plVar9 + 0x15) & 1) == 0) goto LAB_10a12bd9c;
        lVar11 = plVar9[0x14];
        lVar13 = plVar9[0x13];
        plVar8[0xc] = plVar9[0x14];
        plVar8[0xb] = lVar13;
        if (lVar11 != 0) {
          plVar2 = (long *)(lVar11 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        plVar9 = (long *)plVar8[0xe];
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar12 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar12 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        FUN_10a12c178(&pcStack_80,*(undefined8 *)(*(long *)plVar8[0xf] + 0x870),plVar8[0xb]);
        FUN_10a12b638(plVar8 + 2,&pcStack_80);
        plVar9 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar2 = plStack_78 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)plVar8[0xc];
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)plVar8[10];
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8[0x10]);
        func_0x000109d1a1d0(plVar8 + 2);
        __ZdlPv(plVar8);
        plVar9 = plVar8;
LAB_10a12bd40:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x0001092af97c(plVar9 + 0x12);
      goto LAB_10a12bd9c;
    }
  }
  FUN_10a00946c(&UNK_10f63e120);
LAB_10a12bd9c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a12bda0);
  (*pcVar7)();
}



/* Entry: 10a12bf2c; end: 10a12bfcb;  */

undefined8 * FUN_10a12bf2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ba6b10;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a12bfcc; end: 10a12c0d7;  */

undefined8 * FUN_10a12bfcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6b10;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a12c080(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a12c0d8; end: 10a12c177;  */

undefined1 FUN_10a12c0d8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          func_0x00010a12c080(param_1 + 0x98);
        }
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a12c178; end: 10a12c1ef;  */

void FUN_10a12c178(undefined8 param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = *param_2;
  lStack_28 = param_2[2];
  lStack_30 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a12c1f0(param_1,lStack_38,lStack_30 - lStack_38,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a12c1f0; end: 10a12c347;  */

/* WARNING: Removing unreachable block (ram,0x00010989a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010989a5f0) */

long * FUN_10a12c1f0(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long *extraout_x8;
  long lVar13;
  code *pcVar14;
  uint auStack_138 [2];
  long *plStack_130;
  undefined1 auStack_128 [8];
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  int in_stack_fffffffffffffef8;
  undefined8 *in_stack_ffffffffffffff00;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar13 = *(long *)(lVar13 + 0xb8);
  if ((*(byte *)(lVar13 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10a12c30c);
    (*pcVar14)();
  }
  uVar5 = *(undefined8 *)(lVar13 + 0x50);
  uStack_68 = param_5[2];
  uStack_70 = param_5[1];
  uStack_78 = *param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  pcStack_88 = FUN_10a12cb44;
  ppuStack_80 = &PTR_DAT_110ba7a20;
  ppcVar10 = &pcStack_88;
  FUN_10a12c348(&uStack_a8,uVar5);
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  puVar6[4] = uStack_a0;
  puVar6[3] = uStack_a8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ba7910;
  puVar6[6] = uStack_90;
  puVar6[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_1 = (long)(puVar6 + 3);
  param_1[1] = (long)puVar6;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar7 = (long *)(param_2 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_98);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
  __Unwind_Resume();
  puStack_c0 = &stack0xfffffffffffffff0;
  if (param_4 != 0) {
    pcStack_b8 = FUN_10a12c348;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    pcVar14 = ppcVar10[1];
    if (pcVar14[8] == (code)0x1) {
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *puVar6 = *ppcVar10;
      (**(code **)(pcVar14 + 0x10))(puVar6 + 1,ppcVar10 + 1);
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
    FUN_10a12c634(auStack_138,plVar7,param_3,param_4,FUN_10a12c84c,puVar6);
    FUN_10a12c3a8(auStack_128,(long)&uStack_118 + 7,auStack_138);
    FUN_10a12c8c0(extraout_x8 + 2,auStack_128);
    if (ppuStack_120 != (undefined1 **)0x0) {
      plVar7 = (long *)(ppuStack_120 + 1);
      do {
        lVar13 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)((long)*ppuStack_120 + 0x10))(ppuStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_120);
      }
    }
    if ((3 < (int)auStack_138[0]) && (plStack_130 != (undefined8 *)0x0)) {
      (**(code **)*plStack_130)();
    }
    *extraout_x8 = param_3;
    extraout_x8[1] = param_4;
    return extraout_x8;
  }
  pcStack_b8 = FUN_10a12c348;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  plVar3 = plVar7;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  func_0x000109899ccc();
  (**(code **)(*plVar7 + 0x2b0))(&stack0xfffffffffffffef8,plVar7,plVar3,&stack0xffffffffffffff08,1);
  func_0x0001098873f8(extraout_x8 + 2,&stack0xffffffffffffff08,&stack0xfffffffffffffef8);
  if ((3 < in_stack_fffffffffffffef8) && (in_stack_ffffffffffffff00 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffff00)();
  }
  plVar3 = plVar7;
  (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined8 *)(extraout_x8[2] + 8));
  puVar8 = &stack0xffffffffffffff08;
  func_0x00010989982c();
  plVar4 = plVar3;
  puVar9 = puVar8;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  *extraout_x8 = (long)plVar7;
  extraout_x8[1] = (long)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)();
    }
    func_0x0001098873a0(extraout_x8 + 2);
    plVar7 = plVar4;
    __Unwind_Resume();
    uStack_118 = &UNK_10989a71c;
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    auStack_138[0] = auStack_138[0] & 0xffffff00;
    if (puVar9 != (undefined1 *)0x0) {
      plStack_130 = plVar4;
      ppuStack_120 = &puStack_c0;
      func_0x00010989a794(plVar7);
      puVar11 = (undefined4 *)plVar7[1];
      lVar13 = (long)puVar9 << 4;
      puVar12 = puVar11;
      do {
        *puVar12 = 0;
        lVar13 = lVar13 + -0x10;
        puVar12 = puVar12 + 4;
      } while (lVar13 != 0);
      plVar7[1] = (long)(puVar11 + (long)puVar9 * 4);
    }
    return plVar7;
  }
  return extraout_x8;
}



/* Entry: 10a12c348; end: 10a12c37b;  */

/* WARNING: Removing unreachable block (ram,0x00010989a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010989a5f0) */

long * FUN_10a12c348(long *param_1,long *param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint auStack_88 [2];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  int in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
  if (param_4 != 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    lVar10 = param_5[1];
    if (*(char *)(lVar10 + 8) == '\x01') {
      puVar5 = (undefined8 *)0x40;
      __Znwm();
      *puVar5 = *param_5;
      (**(code **)(lVar10 + 0x10))(puVar5 + 1,param_5 + 1);
    }
    else {
      puVar5 = (undefined8 *)0x0;
    }
    FUN_10a12c634(auStack_88,param_2,param_3,param_4,FUN_10a12c84c,puVar5);
    FUN_10a12c3a8(&plStack_78,(long)&uStack_68 + 7,auStack_88);
    FUN_10a12c8c0(param_1 + 2,&plStack_78);
    if (plStack_70 != (long *)0x0) {
      plVar3 = plStack_70 + 1;
      do {
        lVar10 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if ((3 < (int)auStack_88[0]) && (plStack_80 != (undefined8 *)0x0)) {
      (**(code **)*plStack_80)();
    }
    *param_1 = param_3;
    param_1[1] = param_4;
    return param_1;
  }
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  (**(code **)(*param_2 + 0x2b0))
            (&stack0xffffffffffffffa8,param_2,plVar3,&stack0xffffffffffffffb8,1);
  func_0x0001098873f8(param_1 + 2,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8);
  if ((3 < in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffb0)();
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  puVar6 = &stack0xffffffffffffffb8;
  func_0x00010989982c();
  plVar4 = plVar3;
  puVar7 = puVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  *param_1 = (long)param_2;
  param_1[1] = (long)puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)();
    }
    func_0x0001098873a0(param_1 + 2);
    plVar3 = plVar4;
    __Unwind_Resume();
    uStack_68 = &UNK_10989a71c;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    auStack_88[0] = auStack_88[0] & 0xffffff00;
    if (puVar7 != (undefined1 *)0x0) {
      plStack_80 = plVar4;
      plStack_78 = param_1;
      plStack_70 = (long *)&stack0xfffffffffffffff0;
      func_0x00010989a794(plVar3);
      puVar8 = (undefined4 *)plVar3[1];
      lVar10 = (long)puVar7 << 4;
      puVar9 = puVar8;
      do {
        *puVar9 = 0;
        lVar10 = lVar10 + -0x10;
        puVar9 = puVar9 + 4;
      } while (lVar10 != 0);
      plVar3[1] = (long)(puVar8 + (long)puVar7 * 4);
    }
    return plVar3;
  }
  return param_1;
}



/* Entry: 10a12c37c; end: 10a12c39b;  */

void FUN_10a12c37c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba7910;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12c39c; end: 10a12c3a7;  */

long FUN_10a12c39c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x28;
}



/* Entry: 10a12c3a8; end: 10a12c3ff;  */

void FUN_10a12c3a8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_10a12c400();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a12c400; end: 10a12c45f;  */

void FUN_10a12c400(undefined8 *param_1,int *param_2)

{
  int iVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b16848;
  param_1[1] = 0;
  iVar1 = *param_2;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 3) {
    param_1[4] = *(undefined8 *)(param_2 + 2);
  }
  else if (iVar1 == 2) {
    *(char *)(param_1 + 4) = (char)param_2[2];
  }
  else if (3 < iVar1) {
    param_1[4] = *(undefined8 *)(param_2 + 2);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  *param_2 = 0;
  return;
}



/* Entry: 10a12c460; end: 10a12c4b7;  */

long FUN_10a12c460(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a12c4b8; end: 10a12c633;  */

undefined8 *
FUN_10a12c4b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_5[1];
  if (*(char *)(lVar5 + 8) == '\x01') {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = *param_5;
    (**(code **)(lVar5 + 0x10))(puVar4 + 1,param_5 + 1);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_10a12c634(aiStack_88,param_2,param_3,param_4,FUN_10a12c84c,puVar4);
  FUN_10a12c3a8(auStack_78,&uStack_61,aiStack_88);
  FUN_10a12c8c0(param_1 + 2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



/* Entry: 10a12c634; end: 10a12c84b;  */

void FUN_10a12c634(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  int aiStack_68 [2];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  func_0x000109899ccc();
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba7960;
  plVar5[4] = param_3;
  plVar5[5] = param_4;
  plVar5[6] = param_5;
  plVar5[7] = param_6;
  plStack_80 = plVar5 + 3;
  *plStack_80 = (long)&PTR_FUN_110ba79b0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_78 = plVar5;
  FUN_10a12c924(&plStack_70,param_2,&plStack_80);
  aiStack_68[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,plStack_70);
  plStack_60 = plVar5;
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,plVar4,aiStack_68,1);
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  FUN_10a12ca94(&plStack_80);
  func_0x00010a12caec(&uStack_90);
  __Unwind_Resume();
  if (plVar5 != (long *)0x0) {
    (*(code *)*plVar5)(plVar4,plVar5);
    (**(code **)plVar5[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a12c84c; end: 10a12c8bf;  */

void FUN_10a12c84c(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a12c8c0; end: 10a12c923;  */

undefined8 * FUN_10a12c8c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a12c924; end: 10a12c9cb;  */

undefined8 * FUN_10a12c924(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  (**(code **)(*param_2 + 0x260))(&uStack_28,param_2,&uStack_40);
  plVar4 = plStack_38;
  *param_1 = uStack_28;
  uStack_28 = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10a12c9cc; end: 10a12c9db;  */

void FUN_10a12c9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7960;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a12c9dc; end: 10a12c9fb;  */

void FUN_10a12c9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7960;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12c9fc; end: 10a12ca0b;  */

void FUN_10a12c9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a12ca04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a12ca0c; end: 10a12ca47;  */

undefined8 * FUN_10a12ca0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba79b0;
  (*(code *)param_1[3])(param_1[4],param_1[1]);
  return param_1;
}



/* Entry: 10a12ca48; end: 10a12ca83;  */

void FUN_10a12ca48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba79b0;
  (*(code *)param_1[3])(param_1[4],param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a12ca84; end: 10a12ca93;  */

undefined8 FUN_10a12ca84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10a12ca94; end: 10a12cb43;  */

long FUN_10a12ca94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a12cb44; end: 10a12cb8b;  */

void FUN_10a12cb44(void)

{
  return;
}



/* Entry: 10a12cb8c; end: 10a12cc6b;  */

long FUN_10a12cb8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a12cc6c; end: 10a12cf77;  */

/* WARNING: Removing unreachable block (ram,0x00010a12cdc4) */

void FUN_10a12cc6c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lStack_88;
  undefined1 auStack_80 [24];
  uint auStack_68 [6];
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    lVar11 = param_1[7];
    param_1[7] = 0;
    puVar12 = (undefined *)(long)*(char *)((long)param_1 + 0x17);
    puVar13 = param_1;
    if ((long)puVar12 < 0) {
      puVar12 = (undefined *)param_1[1];
      puVar13 = (undefined8 *)*param_1;
    }
    ppuVar14 = &PTR_DAT_110ba6bf0;
    lVar15 = 0x80;
    lStack_88 = lVar11;
    puStack_50 = puVar13;
    puStack_48 = puVar12;
    do {
      if (ppuVar14[-1] == puVar12) {
        puVar6 = ppuVar14[-2];
        _memcmp(puVar6,puVar13,puVar12);
        if ((int)puVar6 == 0) {
          puVar12 = *ppuVar14;
          FUN_10ae28110();
          if (puVar12 == (undefined *)0x0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_68,&UNK_10f63e146,param_1);
            FUN_10a0029c0(auStack_68);
            goto LAB_10a12cedc;
          }
          plVar7 = (long *)0x30;
          __Znwm();
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_DAT_11087c6f8;
          plVar7[1] = 0;
          plVar1 = plVar7 + 3;
          FUN_10a0dc020(plVar1,0x40);
          auStack_68[0] = 0;
          uVar8 = param_1[3];
          func_0x000107c2b408(uVar8,param_1[4],plVar7[3],auStack_68,puVar12,0);
          if ((int)uVar8 == 0) {
            FUN_10a00946c(&UNK_10f63e15e);
            goto LAB_10a12cedc;
          }
          uVar9 = (ulong)auStack_68[0];
          uVar10 = plVar7[4] - plVar7[3];
          if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
            if (uVar9 < uVar10) {
              plVar7[4] = plVar7[3] + uVar9;
            }
          }
          else {
            func_0x000107c27d58(plVar1,uVar9 - uVar10);
          }
          plVar2 = (long *)(lVar11 + 0x10);
          goto LAB_10a12cdb0;
        }
      }
      ppuVar14 = ppuVar14 + 4;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != 0);
    func_0x0001098998d4(auStack_80,&puStack_50);
    FUN_109feb280(auStack_68,&UNK_10f63e146,auStack_80);
    FUN_10a0029c0(auStack_68);
  }
LAB_10a12cedc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a12cee0);
  (*pcVar5)();
LAB_10a12cdb0:
  lVar15 = *plVar2;
  if (lVar15 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      if (*(char *)(lVar11 + 0xa8) == '\x01') {
        FUN_10a12cb8c(lVar11 + 0x98);
      }
      *(long **)(lVar11 + 0xa0) = plVar7;
      *(long **)(lVar11 + 0x98) = plVar1;
      *(undefined1 *)(lVar11 + 0xa8) = 1;
      *(undefined8 *)(lVar11 + 0x10) = 2;
      FUN_109d1b4dc(lVar11 + 0x18);
      goto LAB_10a12ce54;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  if (((uint)lVar15 >> 1 & 1) != 0) {
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
LAB_10a12ce54:
    if (*(char *)(param_1 + 6) == '\x01') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
    lVar11 = lStack_88;
    lStack_88 = 0;
    if ((lVar11 != 0) && (func_0x0001092b4274(&lStack_88), lStack_88 != 0)) {
      func_0x0001092b4274(&lStack_88);
    }
    return;
  }
  goto LAB_10a12cdb0;
}



/* Entry: 10a12cf78; end: 10a12d3c3;  */

undefined8 * FUN_10a12cf78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6b48;
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1c) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  *param_1 = &PTR_DAT_110ba6b98;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a12cb8c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a12d3c4; end: 10a12d44b;  */

bool FUN_10a12d3c4(long *param_1,long *param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  
  bVar1 = *(byte *)(param_1 + 3) == *(byte *)(param_2 + 3);
  if ((*(byte *)(param_2 + 3) & *(byte *)(param_1 + 3)) != 0) {
    pfVar2 = (float *)*param_1;
    pfVar3 = (float *)*param_2;
    if (param_1[1] - (long)pfVar2 == param_2[1] - (long)pfVar3) {
      while( true ) {
        if (pfVar2 == (float *)param_1[1]) {
          return true;
        }
        if (((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2])) break;
        pfVar2 = pfVar2 + 3;
        pfVar3 = pfVar3 + 3;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a12d44c; end: 10a12d4ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a12d7dc) */
/* WARNING: Removing unreachable block (ram,0x00010a12d7e4) */

undefined1  [16] FUN_10a12d44c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *extraout_x8;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong *puStack_c8;
  ulong *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  int in_stack_ffffffffffffff68;
  undefined8 *in_stack_ffffffffffffff70;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  cVar2 = (char)param_1[3];
  puVar4 = param_1;
  if (cVar2 == (char)param_2[3]) {
    puVar15 = param_2;
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      puVar5 = (undefined8 *)*param_2;
      uVar12 = param_2[1];
      lVar13 = (long)(uVar12 - (long)puVar5) >> 2;
      puVar9 = (undefined8 *)(lVar13 * -0x5555555555555555);
      uVar11 = param_1[2];
      puVar15 = (ulong *)*param_1;
      if ((undefined8 *)(((long)(uVar11 - (long)puVar15) >> 2) * -0x5555555555555555) < puVar9) {
        puVar16 = param_1;
        puVar14 = puVar5;
        uVar8 = uVar12;
        puVar10 = puVar9;
        if (puVar15 != (ulong *)0x0) {
          param_1[1] = (ulong)puVar15;
          __ZdlPv();
          uVar11 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          puVar16 = puVar15;
        }
        if ((undefined8 *)0x1555555555555555 < puVar9) {
          FUN_10a051b10();
          puStack_50 = &stack0xfffffffffffffff0;
          if (uVar8 != 0) {
            pcStack_48 = FUN_10a12d658;
            extraout_x8[3] = 0;
            extraout_x8[2] = 0;
            extraout_x8[1] = 0;
            *extraout_x8 = 0;
            lVar13 = puVar10[1];
            if (*(char *)(lVar13 + 8) == '\x01') {
              puVar5 = (undefined8 *)0x40;
              __Znwm();
              *puVar5 = *puVar10;
              (**(code **)(lVar13 + 0x10))(puVar5 + 1,puVar10 + 1);
            }
            else {
              puVar5 = (undefined8 *)0x0;
            }
            FUN_10a12db34(&puStack_c8,puVar16,puVar14,uVar8 << 2,FUN_10a12dd4c,puVar5);
            FUN_10a12c3a8(auStack_b8,(long)&uStack_a8 + 7,&puStack_c8);
            puVar6 = auStack_b8;
            FUN_10a12c8c0(extraout_x8 + 2,puVar6);
            if (ppuStack_b0 != (undefined1 **)0x0) {
              plVar1 = (long *)(ppuStack_b0 + 1);
              do {
                lVar13 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar13 == 0) {
                (**(code **)((long)*ppuStack_b0 + 0x10))(ppuStack_b0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_b0);
              }
            }
            if ((3 < (int)puStack_c8) && (puStack_c0 != (undefined8 *)0x0)) {
              (**(code **)*puStack_c0)();
            }
            *extraout_x8 = (ulong)puVar14;
            extraout_x8[1] = uVar8;
            auVar21._8_8_ = puVar6;
            auVar21._0_8_ = extraout_x8;
            return auVar21;
          }
          pcStack_48 = FUN_10a12d658;
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          puVar4 = puVar16;
          (**(code **)(*puVar16 + 0x58))(puVar16);
          func_0x000109899ccc();
          (**(code **)(*puVar16 + 0x2b0))
                    (&stack0xffffffffffffff68,puVar16,puVar4,&stack0xffffffffffffff78,1);
          FUN_10a12c3a8(extraout_x8 + 2,&stack0xffffffffffffff78,&stack0xffffffffffffff68);
          if ((3 < in_stack_ffffffffffffff68) && (in_stack_ffffffffffffff70 != (undefined8 *)0x0)) {
            (**(code **)*in_stack_ffffffffffffff70)();
          }
          puVar4 = puVar16;
          (**(code **)(*puVar16 + 0x98))(puVar16,*(undefined8 *)(extraout_x8[2] + 8));
          puVar6 = &stack0xffffffffffffff78;
          FUN_10a12d910();
          puVar15 = puVar4;
          puVar7 = puVar6;
          if (puVar4 != (ulong *)0x0) {
            (**(code **)*puVar4)();
          }
          *extraout_x8 = (ulong)puVar16;
          extraout_x8[1] = (ulong)puVar6;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            ___stack_chk_fail();
            if (puVar4 != (ulong *)0x0) {
              (**(code **)*puVar4)();
            }
            FUN_10a12c460(extraout_x8 + 2);
            puVar4 = puVar15;
            __Unwind_Resume();
            uStack_a8 = FUN_10a12d910;
            puVar16 = puVar4;
            puStack_c0 = puVar15;
            ppuStack_b0 = &puStack_50;
            (**(code **)(*puVar4 + 0x98))();
            puVar15 = puVar4;
            puStack_c8 = puVar16;
            (**(code **)(*puVar4 + 0x360))(puVar4,&puStack_c8);
            (**(code **)(*puVar4 + 0x350))(puVar4,&puStack_c8);
            if (puStack_c8 != (ulong *)0x0) {
              (**(code **)*puStack_c8)();
            }
            auVar20._8_8_ = (ulong)puVar4 >> 2;
            auVar20._0_8_ = puVar15;
            return auVar20;
          }
          auVar19._8_8_ = puVar7;
          auVar19._0_8_ = extraout_x8;
          return auVar19;
        }
        puVar14 = (undefined8 *)(((long)uVar11 >> 2) * 0x5555555555555556);
        if (puVar14 < puVar9 || (long)puVar14 + lVar13 * 0x5555555555555555 == 0) {
          puVar14 = puVar9;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(((long)uVar11 >> 2) * -0x5555555555555555)) {
          puVar14 = (undefined8 *)0x1555555555555555;
        }
        FUN_10a051ac8(param_1,puVar14);
        puVar15 = (ulong *)param_1[1];
        lVar13 = uVar12 - (long)puVar5;
        if (lVar13 != 0) {
          puVar4 = puVar15;
          _memmove(puVar15,puVar5,lVar13);
          puVar14 = puVar5;
        }
        uVar12 = (long)puVar15 + lVar13;
      }
      else {
        puVar16 = (ulong *)param_1[1];
        if ((undefined8 *)(((long)puVar16 - (long)puVar15 >> 2) * -0x5555555555555555) < puVar9) {
          puVar9 = (undefined8 *)((long)puVar5 + ((long)puVar16 - (long)puVar15));
          if (puVar16 != puVar15) {
            _memmove(puVar15,puVar5);
            puVar16 = (ulong *)param_1[1];
            puVar4 = puVar15;
          }
          lVar13 = uVar12 - (long)puVar9;
          puVar14 = puVar5;
          if (lVar13 != 0) {
            puVar4 = puVar16;
            _memmove(puVar16,puVar9,lVar13);
            puVar14 = puVar9;
          }
          uVar12 = (long)puVar16 + lVar13;
        }
        else {
          lVar13 = uVar12 - (long)puVar5;
          puVar14 = puVar5;
          if (lVar13 != 0) {
            puVar4 = puVar15;
            _memmove(puVar15,puVar5,lVar13);
            puVar14 = puVar5;
          }
          uVar12 = (long)puVar15 + lVar13;
        }
      }
      param_1[1] = uVar12;
      auVar18._8_8_ = puVar14;
      auVar18._0_8_ = puVar4;
      return auVar18;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar15 = (ulong *)*param_2;
    FUN_10a051a50(param_1,puVar15,param_2[1],
                  ((long)(param_2[1] - (long)puVar15) >> 2) * -0x5555555555555555);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    puVar4 = (ulong *)*param_1;
    if (puVar4 != (ulong *)0x0) {
      param_1[1] = (ulong)puVar4;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
    puVar15 = param_2;
  }
  auVar17._8_8_ = puVar15;
  auVar17._0_8_ = puVar4;
  return auVar17;
}



/* Entry: 10a12d500; end: 10a12d657;  */

/* WARNING: Removing unreachable block (ram,0x00010a12d7dc) */
/* WARNING: Removing unreachable block (ram,0x00010a12d7e4) */

undefined1  [16] FUN_10a12d500(long *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *extraout_x8;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  int in_stack_ffffffffffffff68;
  undefined8 *in_stack_ffffffffffffff70;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar9 = param_1[2];
  plVar11 = (long *)*param_1;
  plVar3 = param_1;
  if ((undefined8 *)((lVar9 - (long)plVar11 >> 2) * -0x5555555555555555) < param_4) {
    plVar12 = param_1;
    puVar10 = param_2;
    uVar8 = param_3;
    puVar5 = param_4;
    if (plVar11 != (long *)0x0) {
      param_1[1] = (long)plVar11;
      __ZdlPv();
      lVar9 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar12 = plVar11;
    }
    if ((undefined8 *)0x1555555555555555 < param_4) {
      FUN_10a051b10();
      puStack_50 = &stack0xfffffffffffffff0;
      if (uVar8 != 0) {
        pcStack_48 = FUN_10a12d658;
        extraout_x8[3] = 0;
        extraout_x8[2] = 0;
        extraout_x8[1] = 0;
        *extraout_x8 = 0;
        lVar9 = puVar5[1];
        if (*(char *)(lVar9 + 8) == '\x01') {
          puVar4 = (undefined8 *)0x40;
          __Znwm();
          *puVar4 = *puVar5;
          (**(code **)(lVar9 + 0x10))(puVar4 + 1,puVar5 + 1);
        }
        else {
          puVar4 = (undefined8 *)0x0;
        }
        FUN_10a12db34(&plStack_c8,plVar12,puVar10,uVar8 << 2,FUN_10a12dd4c,puVar4);
        FUN_10a12c3a8(auStack_b8,(long)&uStack_a8 + 7,&plStack_c8);
        puVar6 = auStack_b8;
        FUN_10a12c8c0(extraout_x8 + 2,puVar6);
        if (ppuStack_b0 != (undefined1 **)0x0) {
          plVar3 = (long *)(ppuStack_b0 + 1);
          do {
            lVar9 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)((long)*ppuStack_b0 + 0x10))(ppuStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_b0);
          }
        }
        if ((3 < (int)plStack_c8) && (plStack_c0 != (undefined8 *)0x0)) {
          (**(code **)*plStack_c0)();
        }
        *extraout_x8 = (ulong)puVar10;
        extraout_x8[1] = uVar8;
        auVar16._8_8_ = puVar6;
        auVar16._0_8_ = extraout_x8;
        return auVar16;
      }
      pcStack_48 = FUN_10a12d658;
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      plVar3 = plVar12;
      (**(code **)(*plVar12 + 0x58))(plVar12);
      func_0x000109899ccc();
      (**(code **)(*plVar12 + 0x2b0))
                (&stack0xffffffffffffff68,plVar12,plVar3,&stack0xffffffffffffff78,1);
      FUN_10a12c3a8(extraout_x8 + 2,&stack0xffffffffffffff78,&stack0xffffffffffffff68);
      if ((3 < in_stack_ffffffffffffff68) && (in_stack_ffffffffffffff70 != (undefined8 *)0x0)) {
        (**(code **)*in_stack_ffffffffffffff70)();
      }
      plVar3 = plVar12;
      (**(code **)(*plVar12 + 0x98))(plVar12,*(undefined8 *)(extraout_x8[2] + 8));
      puVar6 = &stack0xffffffffffffff78;
      FUN_10a12d910();
      plVar11 = plVar3;
      puVar7 = puVar6;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)();
      }
      *extraout_x8 = (ulong)plVar12;
      extraout_x8[1] = (ulong)puVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        if (plVar3 != (long *)0x0) {
          (**(code **)*plVar3)();
        }
        FUN_10a12c460(extraout_x8 + 2);
        plVar3 = plVar11;
        __Unwind_Resume();
        uStack_a8 = FUN_10a12d910;
        plVar12 = plVar3;
        plStack_c0 = plVar11;
        ppuStack_b0 = &puStack_50;
        (**(code **)(*plVar3 + 0x98))();
        plVar11 = plVar3;
        plStack_c8 = plVar12;
        (**(code **)(*plVar3 + 0x360))(plVar3,&plStack_c8);
        (**(code **)(*plVar3 + 0x350))(plVar3,&plStack_c8);
        if (plStack_c8 != (long *)0x0) {
          (**(code **)*plStack_c8)();
        }
        auVar15._8_8_ = (ulong)plVar3 >> 2;
        auVar15._0_8_ = plVar11;
        return auVar15;
      }
      auVar14._8_8_ = puVar7;
      auVar14._0_8_ = extraout_x8;
      return auVar14;
    }
    puVar10 = (undefined8 *)((lVar9 >> 2) * 0x5555555555555556);
    if (puVar10 < param_4 || (long)puVar10 - (long)param_4 == 0) {
      puVar10 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar9 >> 2) * -0x5555555555555555)) {
      puVar10 = (undefined8 *)0x1555555555555555;
    }
    FUN_10a051ac8(param_1,puVar10);
    plVar11 = (long *)param_1[1];
    lVar9 = param_3 - (long)param_2;
    if (lVar9 != 0) {
      plVar3 = plVar11;
      _memmove(plVar11,param_2,lVar9);
      puVar10 = param_2;
    }
    lVar9 = (long)plVar11 + lVar9;
  }
  else {
    plVar12 = (long *)param_1[1];
    if ((undefined8 *)(((long)plVar12 - (long)plVar11 >> 2) * -0x5555555555555555) < param_4) {
      puVar5 = (undefined8 *)((long)param_2 + ((long)plVar12 - (long)plVar11));
      if (plVar12 != plVar11) {
        _memmove(plVar11,param_2);
        plVar12 = (long *)param_1[1];
        plVar3 = plVar11;
      }
      lVar9 = param_3 - (long)puVar5;
      puVar10 = param_2;
      if (lVar9 != 0) {
        plVar3 = plVar12;
        _memmove(plVar12,puVar5,lVar9);
        puVar10 = puVar5;
      }
      lVar9 = (long)plVar12 + lVar9;
    }
    else {
      lVar9 = param_3 - (long)param_2;
      puVar10 = param_2;
      if (lVar9 != 0) {
        plVar3 = plVar11;
        _memmove(plVar11,param_2,lVar9);
        puVar10 = param_2;
      }
      lVar9 = (long)plVar11 + lVar9;
    }
  }
  param_1[1] = lVar9;
  auVar13._8_8_ = puVar10;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 10a12d658; end: 10a12d67b;  */

/* WARNING: Removing unreachable block (ram,0x00010a12d7dc) */
/* WARNING: Removing unreachable block (ram,0x00010a12d7e4) */

undefined1  [16]
FUN_10a12d658(ulong *param_1,long *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong **ppuVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  int in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
  if (param_4 != 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    lVar10 = param_5[1];
    if (*(char *)(lVar10 + 8) == '\x01') {
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *puVar6 = *param_5;
      (**(code **)(lVar10 + 0x10))(puVar6 + 1,param_5 + 1);
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
    FUN_10a12db34(&plStack_88,param_2,param_3,param_4 << 2,FUN_10a12dd4c,puVar6);
    FUN_10a12c3a8(&puStack_78,(long)&uStack_68 + 7,&plStack_88);
    ppuVar9 = &puStack_78;
    FUN_10a12c8c0(param_1 + 2,ppuVar9);
    if (plStack_70 != (long *)0x0) {
      plVar3 = plStack_70 + 1;
      do {
        lVar10 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if ((3 < (int)plStack_88) && (plStack_80 != (undefined8 *)0x0)) {
      (**(code **)*plStack_80)();
    }
    *param_1 = param_3;
    param_1[1] = param_4;
    auVar13._8_8_ = ppuVar9;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  (**(code **)(*param_2 + 0x2b0))
            (&stack0xffffffffffffffa8,param_2,plVar3,&stack0xffffffffffffffb8,1);
  FUN_10a12c3a8(param_1 + 2,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8);
  if ((3 < in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffb0)();
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  puVar7 = &stack0xffffffffffffffb8;
  FUN_10a12d910();
  plVar4 = plVar3;
  puVar8 = puVar7;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)();
    }
    FUN_10a12c460(param_1 + 2);
    plVar3 = plVar4;
    __Unwind_Resume();
    uStack_68 = FUN_10a12d910;
    plVar5 = plVar3;
    plStack_80 = plVar4;
    puStack_78 = param_1;
    plStack_70 = (long *)&stack0xfffffffffffffff0;
    (**(code **)(*plVar3 + 0x98))();
    plVar4 = plVar3;
    plStack_88 = plVar5;
    (**(code **)(*plVar3 + 0x360))(plVar3,&plStack_88);
    (**(code **)(*plVar3 + 0x350))(plVar3,&plStack_88);
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
    auVar12._8_8_ = (ulong)plVar3 >> 2;
    auVar12._0_8_ = plVar4;
    return auVar12;
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a12d67c; end: 10a12d717;  */

long FUN_10a12d67c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a12d718; end: 10a12d727;  */

void FUN_10a12d718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7a48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a12d728; end: 10a12d747;  */

void FUN_10a12d728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7a48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12d748; end: 10a12d753;  */

long FUN_10a12d748(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x28;
}



/* Entry: 10a12d754; end: 10a12d90f;  */

undefined1  [16] FUN_10a12d754(ulong *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  puStack_40 = (undefined8 *)(double)param_3;
  plStack_48 = (long *)CONCAT44(plStack_48._4_4_,3);
  (**(code **)(*param_2 + 0x2b0))(aiStack_58,param_2,plVar1,&plStack_48,1);
  if ((3 < (int)plStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_10a12c3a8(param_1 + 2,&plStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  pplVar4 = &plStack_48;
  plStack_48 = plVar1;
  FUN_10a12d910();
  plVar1 = plStack_48;
  pplVar5 = pplVar4;
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)pplVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar6._8_8_ = pplVar5;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  ___stack_chk_fail();
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  FUN_10a12c460(param_1 + 2);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_68 = FUN_10a12d910;
  plVar3 = plVar2;
  plStack_80 = plVar1;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x98))();
  plVar1 = plVar2;
  plStack_88 = plVar3;
  (**(code **)(*plVar2 + 0x360))(plVar2,&plStack_88);
  (**(code **)(*plVar2 + 0x350))(plVar2,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  auVar7._8_8_ = (ulong)plVar2 >> 2;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a12d910; end: 10a12d9b7;  */

undefined1  [16] FUN_10a12d910(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = (ulong)param_1 >> 2;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 10a12d9b8; end: 10a12db33;  */

undefined8 *
FUN_10a12d9b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_5[1];
  if (*(char *)(lVar5 + 8) == '\x01') {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = *param_5;
    (**(code **)(lVar5 + 0x10))(puVar4 + 1,param_5 + 1);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_10a12db34(aiStack_88,param_2,param_3,param_4 << 2,FUN_10a12dd4c,puVar4);
  FUN_10a12c3a8(auStack_78,&uStack_61,aiStack_88);
  FUN_10a12c8c0(param_1 + 2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



/* Entry: 10a12db34; end: 10a12dd4b;  */

void FUN_10a12db34(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  int aiStack_68 [2];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  func_0x000109899ccc();
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba7960;
  plVar5[4] = param_3;
  plVar5[5] = param_4;
  plVar5[6] = param_5;
  plVar5[7] = param_6;
  plStack_80 = plVar5 + 3;
  *plStack_80 = (long)&PTR_FUN_110ba79b0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_78 = plVar5;
  FUN_10a12c924(&plStack_70,param_2,&plStack_80);
  aiStack_68[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,plStack_70);
  plStack_60 = plVar5;
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,plVar4,aiStack_68,1);
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  FUN_10a12ca94(&plStack_80);
  func_0x00010a12caec(&uStack_90);
  __Unwind_Resume();
  if (plVar5 != (long *)0x0) {
    (*(code *)*plVar5)(plVar4,plVar5);
    (**(code **)plVar5[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a12dd4c; end: 10a12ddbf;  */

void FUN_10a12dd4c(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a12ddc0; end: 10a12ddc3;  */

void FUN_10a12ddc0(void)

{
  return;
}



/* Entry: 10a12ddc4; end: 10a12de6f;  */

void FUN_10a12ddc4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x38) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if (0 < *(int *)(lVar7 + 4)) {
      lVar5 = 0;
      lVar6 = *(long *)(lVar7 + 0x40);
      do {
        *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar7 + 4));
    }
    lVar5 = *(long *)(lVar7 + 0x48);
    if (lVar5 != lVar7 + 0x50 && lVar5 != 0) {
      _free(*(undefined8 *)(lVar5 + -8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar7);
    return;
  }
  return;
}



/* Entry: 10a12de70; end: 10a12de87;  */

void FUN_10a12de70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a12de88; end: 10a12df33;  */

undefined8 * FUN_10a12de88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  piVar3 = (int *)((long)param_3 + 4);
  iVar1 = *piVar3;
  uVar5 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  puVar2[1] = param_3[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  uVar8 = param_3[7];
  uVar7 = param_3[6];
  puVar2[10] = 0;
  puVar2[5] = uVar6;
  puVar2[4] = uVar5;
  puVar2[7] = uVar8;
  puVar2[6] = uVar7;
  puVar2[8] = puVar2 + 1;
  puVar2[9] = puVar2 + 10;
  puVar2[0xb] = 0;
  puVar4 = (undefined8 *)param_3[9];
  if (iVar1 < 3) {
    puVar2[10] = *puVar4;
    puVar2[0xb] = puVar4[1];
  }
  else {
    puVar2[8] = param_3[8];
    puVar2[9] = puVar4;
    param_3[8] = param_3 + 1;
    param_3[9] = param_3 + 10;
  }
  *(undefined4 *)param_3 = 0x42ff0000;
  *(undefined8 *)((long)param_3 + 0xc) = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(undefined8 *)((long)param_3 + 0x1c) = 0;
  *(undefined8 *)((long)param_3 + 0x14) = 0;
  *(undefined8 *)((long)param_3 + 0x2c) = 0;
  *(undefined8 *)((long)param_3 + 0x24) = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_1[1] = puVar2;
  return param_1;
}



/* Entry: 10a12df34; end: 10a12df47;  */

undefined1  [16] FUN_10a12df34(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f63e073;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3c == 0) {
    lVar5 = (long)puVar4 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a12df48; end: 10a12e06f;  */

undefined1  [16] FUN_10a12df48(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar4 = param_1 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a12e070; end: 10a12e0b7;  */

void FUN_10a12e070(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a12e0b8; end: 10a12e0c7;  */

void FUN_10a12e0b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6c88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a12e0c8; end: 10a12e0e7;  */

void FUN_10a12e0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6c88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12e0e8; end: 10a12e123;  */

long FUN_10a12e0e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x20;
}



/* Entry: 10a12e124; end: 10a12e127;  */

void FUN_10a12e124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12e128; end: 10a12e13b;  */

undefined1  [16] FUN_10a12e128(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a142e50();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a12e13c; end: 10a12e1bb;  */

undefined1  [16] FUN_10a12e13c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a142e50();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a12e1bc; end: 10a12e1cb;  */

void FUN_10a12e1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6cd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a12e1cc; end: 10a12e1eb;  */

void FUN_10a12e1cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6cd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a12e1ec; end: 10a12e203;  */

long FUN_10a12e1ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x20;
}



/* Entry: 10a12e204; end: 10a12e3d3;  */

void FUN_10a12e204(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a12e424);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a12e3d4; end: 10a12e423;  */

void FUN_10a12e3d4(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a12e424);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a12e424; end: 10a12e4a3;  */

long * FUN_10a12e424(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a12e4a4);
  (*pcVar2)();
}



/* Entry: 10a12e4a4; end: 10a12e6a7;  */

void FUN_10a12e4a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6980;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a12e6a8; end: 10a12e6b7;  */

void FUN_10a12e6a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6980;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a12e6b8; end: 10a12e6df;  */

long FUN_10a12e6b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a12e720(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}


