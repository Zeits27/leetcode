class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: x[1], reverse=True)
        count = 0
        i =0
        while truckSize > 0 and i < len(boxTypes):
            boxes, units = boxTypes[i]
            take = min(truckSize, boxes)

            count += take * units
            truckSize -= take

            i += 1  # move to next box type
        return count